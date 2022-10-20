#include "pch-il2cpp.h"
#include "ProtectionBypass.h"

#include <cheat/native.h>
#include <helpers.h>

namespace cheat::feature 
{
	static app::Byte__Array* RecordUserData_Hook(int32_t nType)
	{
		auto& inst = ProtectionBypass::GetInstance();

		return inst.OnRecordUserData(nType);
	}

	static int CrashReporter_Hook(__int64 a1, __int64 a2, const char* a3)
	{
		return 0;
	}

    ProtectionBypass::ProtectionBypass() : Feature(),
        NFEX(f_Enabled, "Disable Protection", "m_DisableMhyProt", "General", true, false),
		m_CorrectSignatures({})
    {
		HookManager::install(app::Unity_RecordUserData, RecordUserData_Hook);
		HookManager::install(app::CrashReporter, CrashReporter_Hook);
    }

	void ProtectionBypass::Init()
	{
		for (int i = 0; i < 4; i++) {
			LOG_TRACE("Emulating call of RecordUserData with type %d", i);
			app::Application_RecordUserData(i, nullptr);
		}

		// if (m_Enabled) {
			LOG_TRACE("Trying to close mhyprot handle.");
			if (util::CloseHandleByName(L"\\Device\\mhyprot2"))
				LOG_INFO("The Mhyprot2 handle was successfully closed. Happy hacking!");
			else
				LOG_ERROR("Failed to close mhyprot2 handle. Report this Issue and describe it.");
		//}

		LOG_DEBUG("Initialized");
	}

    const FeatureGUIInfo& ProtectionBypass::GetGUIInfo() const
    {
        static const FeatureGUIInfo info { "", "Settings", false };
        return info;
    }

    void ProtectionBypass::DrawMain()
    {
		ConfigWidget(f_Enabled, 
			"Close mhyprot2 handle (changes will take effect after relaunch).");
    }

    ProtectionBypass& ProtectionBypass::GetInstance()
    {
        static ProtectionBypass instance;
        return instance;
    }

	app::Byte__Array* ProtectionBypass::OnRecordUserData(int32_t nType)
	{
		if (m_CorrectSignatures.count(nType))
		{
			return GCHandle_GetObject<app::Byte__Array>(m_CorrectSignatures[nType]);
		}

		auto result = CALL_ORIGIN(RecordUserData_Hook, nType);
		m_CorrectSignatures[nType] = GCHandle_New(result, true);

		LOG_DEBUG("Sniffed correct signature for type %d", nType);

		return result;
	}
}


#pragma once
#include <cheat-base/cheat/Feature.h>
#include <cheat-base/config/config.h>
#include <map>

#include <il2cpp-appdata.h>

namespace cheat::feature 
{

	class ProtectionBypass : public Feature
    {
	public:
		config::Field<bool> f_Enabled;

		static ProtectionBypass& GetInstance();

		const FeatureGUIInfo& GetGUIInfo() const override;
		void DrawMain() override;
	
		app::Byte__Array* OnRecordUserData(int32_t nType);

		void Init();

	private:
		ProtectionBypass();
		std::map<int32_t, UINT> m_CorrectSignatures;
	};
}


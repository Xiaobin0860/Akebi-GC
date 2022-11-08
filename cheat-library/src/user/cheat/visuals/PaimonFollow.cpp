#include "pch-il2cpp.h"
#include "PaimonFollow.h"
#include <helpers.h>
#include <cheat/events.h>


namespace cheat::feature
{
    namespace GameObject {
        app::GameObject* Paimon = nullptr;
        app::GameObject* ProfileLayer = nullptr;
    }

    PaimonFollow::PaimonFollow() : Feature(),
        NFEX(f_Enabled, "Paimon Follow", "PaimonFollow", "Visuals", false, false)
    {
        events::GameUpdateEvent += MY_METHOD_HANDLER(PaimonFollow::OnGameUpdate);
    }

    const FeatureGUIInfo& PaimonFollow::GetGUIInfo() const
    {
        static const FeatureGUIInfo info{ "PaimonFollow", "Visuals", true };
        return info;
    }

    void PaimonFollow::DrawMain()
    {
        ConfigWidget(f_Enabled, "To display paimon, turn on the function, open the profile (esc) and close it. \n" \
            "If the paimon disappeared after teleportation, do not disable the function, open and close the profile.");
    }

    bool PaimonFollow::NeedStatusDraw() const
    {
        return f_Enabled;
    }

    void PaimonFollow::DrawStatus()
    {
        ImGui::Text("Paimon Follow");
    }

    PaimonFollow& PaimonFollow::GetInstance()
    {
        static PaimonFollow instance;
        return instance;
    }

    void PaimonFollow::OnGameUpdate()
    {
        //UPDATE_DELAY(100);

        //if (f_Enabled)
        //{
        //    GameObject::Paimon = app::GameObject_Find(string_to_il2cppi("/EntityRoot/OtherGadgetRoot/NPC_Guide_Paimon(Clone)"), nullptr);
        //    if (GameObject::Paimon == nullptr)
        //        return;
        //    
        //    GameObject::ProfileLayer = app::GameObject_Find(string_to_il2cppi("/Canvas/Pages/PlayerProfilePage"), nullptr);
        //    if (GameObject::ProfileLayer == nullptr)
        //        return;

        //    if (GameObject::Paimon->fields._.m_CachedPtr != nullptr && GameObject::ProfileLayer->fields._.m_CachedPtr != nullptr)
        //    {
        //        auto ProfileOpen = app::GameObject_get_active(GameObject::ProfileLayer, nullptr);

        //        if (ProfileOpen)
        //            app::GameObject_set_active(GameObject::Paimon, false, nullptr);
        //        else
        //            app::GameObject_set_active(GameObject::Paimon, true, nullptr);
        //    }
        //}
        //else
        //{
        //    GameObject::Paimon == nullptr;
        //    GameObject::ProfileLayer == nullptr;
        //}
    }
}
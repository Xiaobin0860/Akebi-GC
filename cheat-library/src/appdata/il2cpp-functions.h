using namespace app;

// ActorAbilityPlugin
//DO_APP_FUNC(0x0236C560, bool, MoleMole_ActorAbilityPlugin_HanlderModifierThinkTimerUp, (ActorAbilityPlugin* __this, float delay, Object* arg, MethodInfo* method));
//DO_APP_FUNC(0x023757E0, void, MoleMole_ActorAbilityPlugin_AddDynamicFloatWithRange, (MoleMole_ActorAbilityPlugin* __this, String* key, float value, float min, float max, bool forceDoAtRemote, MethodInfo* method));
//DO_APP_FUNC(0x02378100, bool, MoleMole_ActorAbilityPlugin_OnEvent, (void* __this, BaseEvent* e, MethodInfo* method));


// ActorUtils
//DO_APP_FUNC(0x00C9BB90, Vector3, ActorUtils_GetAvatarPos, (MethodInfo* method));
//DO_APP_FUNC(0x00CA3EC0, void, ActorUtils_SetAvatarPos, (Vector3 pos, MethodInfo* method));
//DO_APP_FUNC(0x00CA9EC0, void, ActorUtils_SyncAvatarMotion, (int32_t state, MethodInfo* method));


// Animator
//DO_APP_FUNC(0x05AB3EC0, void, Animator_Play, (Animator* __this, String* stateName, int32_t layer, float normalizedTime, MethodInfo* method));
//DO_APP_FUNC(0x05AB4040, void, Animator_Rebind, (Animator* __this, MethodInfo* method));
//DO_APP_FUNC(0x05AB45A0, float, Animator_get_speed, (Animator* __this, MethodInfo* method));
//DO_APP_FUNC(0x05AB46D0, void, Animator_set_speed, (Animator* __this, float value, MethodInfo* method));


// Application
DO_APP_FUNC(0x097086E0, Byte__Array*, Application_RecordUserData, (int32_t nType, MethodInfo* method));
//DO_APP_FUNC(0x05AFDD20, int32_t, Application_get_targetFrameRate, (MethodInfo* method));
//DO_APP_FUNC(0x05AFE160, void, Application_set_targetFrameRate, (int32_t value, MethodInfo* method));


// AttackResult
//DO_APP_FUNC(0x01A995B0, AttackResult_1*, MoleMole_AttackResult_FillProtoAttackResult, (AttackResult* __this, uint32_t attackerID, uint32_t defenseId, AttackResult_1* protoAttackResult, MethodInfo* method));


// BaseEntity
DO_APP_FUNC(0x05B95110, GameObject*, MoleMole_BaseEntity_get_gameObject, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x05711360, GameObject*, MoleMole_BaseEntity_get_rootGameObject, (BaseEntity* __this, MethodInfo* method));
//DO_APP_FUNC(0x03B30A80, void, MoleMole_BaseEntity_FireEvent, (BaseEntity* __this, BaseEvent* e, bool immediately, MethodInfo* method));
DO_APP_FUNC(0x063D5BE0, LCBaseCombat*, MoleMole_BaseEntity_GetLogicCombatComponent_1, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC_METHODINFO(0x0CEAE938, MoleMole_BaseEntity_GetLogicCombatComponent_1__MethodInfo);
DO_APP_FUNC(0x063D5BB0, VCBaseMove*, MoleMole_BaseEntity_GetMoveComponent_1, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC_METHODINFO(0x0CEC74D0, MoleMole_BaseEntity_GetMoveComponent_1__MethodInfo);
DO_APP_FUNC(0x038CD5E0, List_1_MoleMole_BaseComponent_*, MoleMole_BaseEntity_GetAllLogicComponents, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x038C2970, String*, MoleMole_BaseEntity_ToStringRelease, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x0457E800, void, MoleMole_BaseEntity_SetRelativePosition, (BaseEntity* __this, Vector3 position, bool forceSyncToRigidbody, MethodInfo* method));
DO_APP_FUNC(0x04573A90, void, MoleMole_BaseEntity_SetAbsolutePosition, (BaseEntity* __this, Vector3 abpos, bool forceSyncToRigidbody, MethodInfo* method));
DO_APP_FUNC(0x0456DCE0, Rigidbody*, MoleMole_BaseEntity_GetRigidbody, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x0456B800, Animator*, MoleMole_BaseEntity_get_animator, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x038BEED0, bool, MoleMole_BaseEntity_IsActive, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x04580170, Vector3, MoleMole_BaseEntity_GetForward, (BaseEntity* __this, MethodInfo* method));
//DO_APP_FUNC(0x03B23F60, Vector3, MoleMole_BaseEntity_GetForwardFast, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x04569AE0, Vector3, MoleMole_BaseEntity_GetRight, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x04580D70, Vector3, MoleMole_BaseEntity_GetUp, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x0456EBB0, Vector3, MoleMole_BaseEntity_GetAbsolutePosition, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x04569CA0, Vector3, MoleMole_BaseEntity_GetRelativePosition, (BaseEntity* __this, MethodInfo* method));


// BaseMoveSyncPlugin
//DO_APP_FUNC(0x03DD7B10, void, MoleMole_BaseMoveSyncPlugin_ConvertSyncTaskToMotionInfo, (BaseMoveSyncPlugin* __this, MethodInfo* method));


// Behaviour
DO_APP_FUNC(0x097374E0, bool, Behaviour_get_isActiveAndEnabled, (Behaviour* __this, MethodInfo* method));


// Camera
//DO_APP_FUNC(0x05A7FDF0, float, Camera_get_fieldOfView, (Camera* __this, MethodInfo* method));
//DO_APP_FUNC(0x05A80260, void, Camera_set_fieldOfView, (Camera* __this, float value, MethodInfo* method));
//DO_APP_FUNC(0x05A7F560, void, Camera_CopyFrom, (Camera* __this, Camera* other, MethodInfo* method));
DO_APP_FUNC(0x09685020, Vector3, Camera_WorldToScreenPoint, (Camera* __this, Vector3 position, MethodInfo* method));
DO_APP_FUNC(0x09685360, Camera*, Camera_get_main, (MethodInfo* method));
DO_APP_FUNC(0x096854A0, int32_t, Camera_get_pixelWidth, (Camera* __this, MethodInfo* method));
DO_APP_FUNC(0x09685450, int32_t, Camera_get_pixelHeight, (Camera* __this, MethodInfo* method));


// Canvas
DO_APP_FUNC(0x09762930, float, Canvas_get_scaleFactor, (/*Canvas**/void* __this, MethodInfo* method));


// Component
//DO_APP_FUNC(0x05A2CE20, Component_1*, Component_1_GetComponent_1, (Component_1* __this, String* type, MethodInfo* method));
DO_APP_FUNC(0x09633850, GameObject*, Component_1_get_gameObject, (Component_1* __this, MethodInfo* method));


// CookingQtePageContext
//DO_APP_FUNC(0x02492150, void, MoleMole_CookingQtePageContext_UpdateProficiency, (CookingQtePageContext* __this, MethodInfo* method));
//DO_APP_FUNC(0x02499350, void, MoleMole_CookingQtePageContext_CloseItemGotPanel, (CookingQtePageContext* __this, MethodInfo* method));


// CookRecipeExcelConfig
//DO_APP_FUNC(0x02565C50, uint32_t, MoleMole_Config_CookRecipeExcelConfig_CheckCookFoodMaxNum, (uint32_t UpdateCookRecipeDic, MethodInfo* method));


// CriwareMediaPlayer
//DO_APP_FUNC(0x02B78C30, void, CriwareMediaPlayer_Update, (CriwareMediaPlayer* __this, MethodInfo* method));
//DO_APP_FUNC(0x02B78A30, void, CriwareMediaPlayer_Skip, (CriwareMediaPlayer* __this, MethodInfo* method));


// Cursor
DO_APP_FUNC(0x09672C10, bool, Cursor_get_visible, (MethodInfo* method));
DO_APP_FUNC(0x09672C30, void, Cursor_set_visible, (bool value, MethodInfo* method));
DO_APP_FUNC(0x09672C20, void, Cursor_set_lockState, (CursorLockMode__Enum value, MethodInfo* method));


// DataItem
//DO_APP_FUNC(0x0360C560, void, MoleMole_DataItem_HandleNormalProp, (DataItem* __this, uint32_t type, int64_t value, DataPropOp__Enum state, MethodInfo* method));


// EntityManager
DO_APP_FUNC(0x02B5A770, BaseEntity*, MoleMole_EntityManager_GetLocalAvatarEntity, (MoleMole_EntityManager* __this, MethodInfo* method));
DO_APP_FUNC(0x02B59B90, CameraEntity*, MoleMole_EntityManager_GetMainCameraEntity, (MoleMole_EntityManager* __this, MethodInfo* method));
DO_APP_FUNC(0x02B5AE50, BaseEntity*, MoleMole_EntityManager_GetValidEntity, (MoleMole_EntityManager* __this, uint32_t runtimeID, MethodInfo* method));
DO_APP_FUNC(0x02B56B60, bool, MoleMole_EntityManager_RemoveEntity, (MoleMole_EntityManager* __this, BaseEntity* entity, uint32_t specifiedRuntimeID, MethodInfo* method));
DO_APP_FUNC(0x02B50040, List_1_MoleMole_BaseEntity_*, MoleMole_EntityManager_GetEntities, (MoleMole_EntityManager* __this, MethodInfo* method));


// EnviroSky
//DO_APP_FUNC(0x02B91E30, bool, EnviroSky_ChangeWeather, (void* /*app::EnviroSky*/ __this, String* weatherPath, float transTime, float ratio, MethodInfo* method));
//DO_APP_FUNC(0x02BB97B0, void* /*app::EnviroSky*/, EnviroSky_get_Instance, (MethodInfo* method));


// EventHelper
//DO_APP_FUNC(0x05C67290, EvtCrash*, MoleMole_EventHelper_Allocate_103, (MethodInfo* method));
//DO_APP_FUNC_METHODINFO(0x0A4BA5F8, MoleMole_EventHelper_Allocate_103__MethodInfo);


// EventManager
//DO_APP_FUNC(0x041555C0, void, MoleMole_EventManager_FireEvent, (MoleMole_EventManager* __this, BaseEvent* e, bool immediately, MethodInfo* method));


// EvtCrash
//DO_APP_FUNC(0x009722B0, void, MoleMole_EvtCrash_Init, (EvtCrash* __this, uint32_t targetID, MethodInfo* method));


// Extension
//DO_APP_FUNC(0x04D34B30, String*, Extension_GetCurrentStateName, (Animator* animator, int32_t layer, AnimatorController* animCont, MethodInfo* method));


// FishingModule
//DO_APP_FUNC(0x00DDA620, void, MoleMole_FishingModule_RequestFishCastRod, (void* __this, uint32_t baitId, uint32_t rodId, Vector3 pos, uint32_t rodEntityId, MethodInfo* method));
//DO_APP_FUNC(0x00DDA230, void, MoleMole_FishingModule_RequestFishBite, (void* __this, MethodInfo* method));
//DO_APP_FUNC(0x00DD7940, void, MoleMole_FishingModule_OnFishBiteRsp, (void* __this, FishBiteRsp* rsp, MethodInfo* method));
//DO_APP_FUNC(0x00DD7BE0, void, MoleMole_FishingModule_RequestFishBattleBegin, (void* __this, MethodInfo* method));
//DO_APP_FUNC(0x00DD9160, void, MoleMole_FishingModule_OnFishBattleBeginRsp, (void* __this, FishBattleBeginRsp* rsp, MethodInfo* method));
//DO_APP_FUNC(0x00DD8F00, void, MoleMole_FishingModule_RequestFishBattleEnd, (void* __this, FishBattleResult__Enum result, bool isAlwaysBonus, float mxBonusTime, MethodInfo* method));
//DO_APP_FUNC(0x00DD9510, void, MoleMole_FishingModule_OnFishBattleEndRsp, (void* __this, FishBattleEndRsp* rsp, MethodInfo* method));
//DO_APP_FUNC(0x00DDA800, void, MoleMole_FishingModule_OnExitFishingRsp, (void* __this, void* rsp, MethodInfo* method));
//DO_APP_FUNC(0x00DD7150, void, MoleMole_FishingModule_onFishChosenNotify, (void* __this, void* notify, MethodInfo* method));


// FixedBoolStack
//DO_APP_FUNC(0x02FE90B0, bool, MoleMole_FixedBoolStack_get_value, (FixedBoolStack* __this, MethodInfo* method));


// Formula
//DO_APP_FUNC(0x00B240C0, void, MoleMole_Formula_CalcAttackResult, (CombatProperty* attackCombatProperty, CombatProperty* defenseCombatProperty, AttackResult* attackResult, BaseEntity* attackerEntity, BaseEntity* attackeeEntity, MethodInfo* method));
//DO_APP_FUNC(0x00B24E10, void, Formula_CalcHitHaltTime, (BaseEntity* attackeeEntity, AttackResult* attackResult, MethodInfo* method));
//DO_APP_FUNC(0x00B23D90, int32_t, MoleMole_Formula_GenerateCriticHash, (uint32_t attackerRuntimeID, uint32_t attackeeRuntimeID, uint32_t timeStamp, Vector3 hitPosition, uint32_t attenuationCound, MethodInfo* method));
//DO_APP_FUNC(0x00B24F70, uint32_t, Formula_GenerateRandomNumber, (uint32_t seed, uint32_t range, MethodInfo* method));
//DO_APP_FUNC(0x00B249E0, uint32_t, Formula_XorShiftRNG32, (uint32_t seed, MethodInfo* method));


// GadgetEntity
//DO_APP_FUNC(0x01C95DD0, BaseEntity*, MoleMole_GadgetEntity_GetOwnerEntity, (GadgetEntity* __this, MethodInfo* method));


// GadgetModule
DO_APP_FUNC(0x033E8790, void, MoleMole_GadgetModule_OnGadgetInteractRsp, (void* __this, GadgetInteractRsp* notify, MethodInfo* method));


// GameManager
DO_APP_FUNC(0x035C44A0, void, GameManager_Update, (GameManager* __this, MethodInfo* method));


// GameObject
//DO_APP_FUNC(0x05B12A80, GameObject*, GameObject_Find, (String* name, MethodInfo* method));
DO_APP_FUNC(0x0971D9E0, Component_1*, GameObject_GetComponentByName, (GameObject* __this, String* type, MethodInfo* method));
//DO_APP_FUNC(0x05B12F40, bool, GameObject_get_active, (GameObject* __this, MethodInfo* method));
//DO_APP_FUNC(0x05B13000, void, GameObject_set_active, (GameObject* __this, bool value, MethodInfo* method));
//DO_APP_FUNC(0x05B12E10, void, GameObject_SetActive, (GameObject* __this, bool value, MethodInfo* method));
//DO_APP_FUNC(0x05B12A50, GameObject*, GameObject_CreatePrimitive, (PrimitiveType__Enum type, MethodInfo* method));
DO_APP_FUNC(0x0971DF30, Transform*, GameObject_get_transform, (GameObject* __this, MethodInfo* method));
//DO_APP_FUNC(0x05B129E0, Component_1*, GameObject_AddComponentInternal, (GameObject* __this, String* className, MethodInfo* method));
//DO_APP_FUNC(0x05B129F0, Component_1*, GameObject_AddComponent, (GameObject* __this, Type* componentType, MethodInfo* method));


// HumanoidMoveFSM
//DO_APP_FUNC(0x01114B50, bool, MoleMole_HumanoidMoveFSM_CheckSprintCooldown, (/* HumanoidMoveFSM */void* __this, MethodInfo* method));
//DO_APP_FUNC(0x011159D0, void, MoleMole_HumanoidMoveFSM_LateTick, (HumanoidMoveFSM* __this, float deltaTime, MethodInfo* method));


// InLevelCutScenePageContext
//DO_APP_FUNC(0x01C094D0, void, MoleMole_InLevelCutScenePageContext_OnFreeClick, (InLevelCutScenePageContext* __this, MethodInfo* method));
//DO_APP_FUNC(0x01C0B9D0, void, MoleMole_InLevelCutScenePageContext_UpdateView, (InLevelCutScenePageContext* __this, MethodInfo* method));
//DO_APP_FUNC(0x01C08760, void, MoleMole_InLevelCutScenePageContext_ClearView, (InLevelCutScenePageContext* __this, MethodInfo* method));


// InLevelMainPageContext
//DO_APP_FUNC(0x03B78690, bool, MoleMole_InLevelMainPageContext_DoTeamCountDown_c_Iterator0__MoveNext, (InLevelMainPageContext_DoTeamCountDown_Iterator* __this, MethodInfo* method));
//DO_APP_FUNC(0x03EC0BE0, float, MoleMole_InLevelMainPageContext_get_miniMapScale, (InLevelMainPageContext* __this, MethodInfo* method));


// InLevelMapPageContext
//DO_APP_FUNC(0x0307A0F0, void, MoleMole_InLevelMapPageContext_OnMarkClicked, (InLevelMapPageContext* __this, MonoMapMark* mark, MethodInfo* method));
//DO_APP_FUNC(0x03086950, void, MoleMole_InLevelMapPageContext_OnMapClicked, (InLevelMapPageContext* __this, Vector2 screenPos, MethodInfo* method));
DO_APP_FUNC(0x05D25A90, void, MoleMole_InLevelMapPageContext_ZoomMap, (InLevelMapPageContext* __this, float value, MethodInfo* method));
//DO_APP_FUNC(0x030ABD50, void, MoleMole_InLevelMapPageContext_UpdateView, (InLevelMapPageContext* __this, MethodInfo* method));


// InLevelPlayerProfilePageContext
//DO_APP_FUNC(0x026A1070, void, MoleMole_InLevelPlayerProfilePageContext_SetupView, (/*MoleMole_InLevelPlayerProfilePageContext*/void* __this, MethodInfo* method));
//DO_APP_FUNC(0x02699890, void, MoleMole_InLevelPlayerProfilePageContext_ClearView, (/*MoleMole_InLevelPlayerProfilePageContext*/void* __this, MethodInfo* method));


// Input
//DO_APP_FUNC(0x05ADBF10, float, Input_GetAxis, (String* axisName, MethodInfo* method));


// ItemModule
DO_APP_FUNC(0x02A25270, void, MoleMole_ItemModule_PickItem, (MoleMole_ItemModule* __this, uint32_t entityID, MethodInfo* method));


// KcpClient
DO_APP_FUNC(0x05C21FA0, bool, MoleMole_KcpClient_TryDequeueEvent, (void* __this, ClientKcpEvent* evt, MethodInfo* method));


// KcpNative
//DO_APP_FUNC(0x00950360, KcpPacket_1*, Kcp_KcpNative_kcp_packet_create, (uint8_t* data, int32_t len, MethodInfo* method));
DO_APP_FUNC(0x05F8B2A0, int32_t, Kcp_KcpNative_kcp_client_send_packet, (void* kcp_client, KcpPacket_1* packet, MethodInfo* method));


// LCAbilityElement
//DO_APP_FUNC(0x01687C40, void, MoleMole_LCAbilityElement_ReduceModifierDurability, (LCAbilityElement* __this, int32_t modifierDurabilityIndex, float reduceDurability, Nullable_1_Single_ deltaTime, MethodInfo* method));


// LCAvatarCombat
//DO_APP_FUNC(0x025A1CD0, bool, MoleMole_LCAvatarCombat_IsEnergyMax, (void* __this, MethodInfo* method));
//DO_APP_FUNC(0x0259A9E0, void, MoleMole_LCAvatarCombat_ChangeEnergy_1, (LCAvatarCombat* __this, ElementType__Enum type, float value, DataPropOp__Enum state, MethodInfo* method));
//DO_APP_FUNC(0x0259B900, bool, MoleMole_LCAvatarCombat_OnSkillStart, (LCAvatarCombat* __this, uint32_t skillID, float cdMultipler, MethodInfo* method));
//DO_APP_FUNC(0x0259AF50, bool, MoleMole_LCAvatarCombat_IsSkillInCD_1, (LCAvatarCombat* __this, LCAvatarCombat_LCAvatarCombat_SkillInfo* skillInfo, MethodInfo* method));


// LCBaseCombat
//DO_APP_FUNC(0x03E24580, void, MoleMole_LCBaseCombat_FireBeingHitEvent, (LCBaseCombat* __this, uint32_t attackeeRuntimeID, AttackResult* attackResult, MethodInfo* method));


// LCIndicatorPlugin
DO_APP_FUNC(0x050C6EF0, bool, MoleMole_LCIndicatorPlugin_DoCheck, (LCIndicatorPlugin* __this, MethodInfo* method));
DO_APP_FUNC(0x050C61D0, void, MoleMole_LCIndicatorPlugin_ShowIcon, (LCIndicatorPlugin* __this, MethodInfo* method));
DO_APP_FUNC(0x050C8030, void, MoleMole_LCIndicatorPlugin_HideIcon, (LCIndicatorPlugin* __this, MethodInfo* method));


// LCSelectPickup
DO_APP_FUNC(0x0491FEA0, void, MoleMole_LCSelectPickup_AddInteeBtnByID, (void* __this, BaseEntity* entity, MethodInfo* method));
DO_APP_FUNC(0x0491FD40, bool, MoleMole_LCSelectPickup_IsInPosition, (void* __this, BaseEntity* entity, MethodInfo* method));
DO_APP_FUNC(0x0491F490, bool, MoleMole_LCSelectPickup_IsOutPosition, (void* __this, BaseEntity* entity, MethodInfo* method));


// LevelSceneElementViewPlugin
//DO_APP_FUNC(0x011C8010, void, MoleMole_LevelSceneElementViewPlugin_Tick, (LevelSceneElementViewPlugin* __this, float inDeltaTime, MethodInfo* method));


// LevelSyncCombatPlugin
DO_APP_FUNC(0x04859350, void, MoleMole_LevelSyncCombatPlugin_RequestSceneEntityMoveReq, (LevelSyncCombatPlugin* __this, uint32_t entityId, MotionInfo* syncInfo, bool isReliable, uint32_t HAOCOEMOMBG, MethodInfo* method));
//DO_APP_FUNC(0x01C70B00, void, MoleMole_LevelSyncCombatPlugin_SendFaceToDir, (void* __this, uint32_t runtimeID, Vector3 forward, MethodInfo* method));


// LevelTimeManager
//DO_APP_FUNC(0x01241730, void, LevelTimeManager_SetInternalTimeOfDay, (/*LevelTimeManager**/void* __this, float inHours, bool force, bool refreshEnviroTime, MethodInfo* method));


// LoadingManager
//DO_APP_FUNC(0x019A0A90, void, MoleMole_LoadingManager_SceneGoto, (MoleMole_LoadingManager* __this, PlayerEnterSceneNotify* notify, MethodInfo* method));
//DO_APP_FUNC(0x01999350, void, MoleMole_LoadingManager_PerformPlayerTransmit, (MoleMole_LoadingManager* __this, Vector3 targetPos, EnterType__Enum enterType, uint32_t token, EvtTransmitAvatar_EvtTransmitAvatar_TransmitType__Enum transType, uint32_t enterReason, MethodInfo* method));
//DO_APP_FUNC(0x0199F610, void, MoleMole_LoadingManager_RequestSceneTransToPoint, (MoleMole_LoadingManager* __this, uint32_t sceneId, uint32_t pointId, void* finishCallBackInForceDrag, MethodInfo* method));
//DO_APP_FUNC(0x0199C800, bool, MoleMole_LoadingManager_NeedTransByServer, (MoleMole_LoadingManager* __this, uint32_t sceneId, Vector3 position, MethodInfo* method));
DO_APP_FUNC(0x02A8F6A0, bool, MoleMole_LoadingManager_IsLoaded, (MoleMole_LoadingManager* __this, MethodInfo* method));


// LocalEntityInfoData
//DO_APP_FUNC(0x01CD18E0, Vector3, MoleMole_LocalEntityInfoData_get_initPos, (LocalEntityInfoData* __this, MethodInfo* method));


// LuaEnv
//DO_APP_FUNC(0x0564E570, void*, LuaEnv_DoString, (void* __this, Byte__Array* chunk, String* chunkName, void* env, MethodInfo* method));


// LuaManager
//DO_APP_FUNC(0x03175F30, Byte__Array*, LuaManager_LoadCustomLuaFile, (LuaManager* __this, String** filePath, bool* recycleBytes, MethodInfo* method));


// LuaShellManager
//DO_APP_FUNC(0x00B87270, void, MoleMole_LuaShellManager_DoString, (void* __this, Byte__Array* byteArray, MethodInfo* method));
//DO_APP_FUNC(0x00B86650, void, MoleMole_LuaShellManager_ReportLuaShellResult, (void* __this, String* type, String* value, MethodInfo* method)); // Anticheat info


// Lua_xlua
//DO_APP_FUNC(0x03B440D0, void, Lua_xlua_pushasciistring, (void* L, String* str, MethodInfo* method));


// MapModule
DO_APP_FUNC(0x02A9F6F0, bool, MoleMole_MapModule_IsAreaUnlock, (MoleMole_MapModule* __this, uint32_t sceneID, uint32_t areaID, MethodInfo* method));


// Marshal
DO_APP_FUNC(0x08EBB6D0, String*, Marshal_PtrToStringAnsi, (void* ptr, MethodInfo* method));


// Material
//DO_APP_FUNC(0x05A2DF60, void, Material_set_mainTexture, (Material* __this, Texture* value, MethodInfo* method));


// Mathf
//DO_APP_FUNC(0x05AC5E80, float, Mathf_Lerp, (float a, float b, float t, MethodInfo* method));


// Miscs
DO_APP_FUNC(0x05192BC0, bool, Miscs_CheckTargetAttackable, (BaseEntity* attackerEntity, BaseEntity* targetEntity, MethodInfo* method));
//DO_APP_FUNC(0x028E6A40, float, Miscs_CalcCurrentGroundWaterHeight, (float x, float z, MethodInfo* method));
//DO_APP_FUNC(0x028E6160, float, Miscs_CalcCurrentGroundHeight, (float x, float z, MethodInfo* method));
//DO_APP_FUNC(0x028E6260, float, Miscs_CalcCurrentGroundHeight_1, (float x, float z, float rayStartHeight, float rayDetectLength, int32_t layer, MethodInfo* method));
//DO_APP_FUNC(0x028E6610, Vector3, Miscs_CalcCurrentGroundNorm, (Vector3 pos, MethodInfo* method));
//DO_APP_FUNC(0x028EFF10, Vector3, Miscs_GenWorldPos, (Vector2 levelMapPos, MethodInfo* method));
DO_APP_FUNC(0x051986C0, Vector2, Miscs_GenLevelPos_1, (Vector3 worldPos, MethodInfo* method));
//DO_APP_FUNC(0x02904380, int32_t, Miscs_GetSceneGroundLayerMask, (MethodInfo* method));


// MonoFriendInformationDialog
//DO_APP_FUNC(0x0266E6B0, void, ProfileEditPage, (MonoFriendInformationDialog* __this, Sprite* value, MethodInfo* method));


// MonoInLevelMainPage
//DO_APP_FUNC(0x02C5FB30, MonoMiniMap*, MonoInLevelMainPage_get_miniMap, (void* __this, MethodInfo* method));


// MonoInLevelMapPage
//DO_APP_FUNC(0x00FFFCC0, Rect, MonoInLevelMapPage_get_mapRect, (MonoInLevelMapPage* __this, MethodInfo* method));
//DO_APP_FUNC(0x00FFFCA0, Transform*, MonoInLevelMapPage_get_mapBackground, (MonoInLevelMapPage* __this, MethodInfo* method));


// MonoInLevelPlayerProfilePage
//DO_APP_FUNC(0x02ADB6D0, Button_1*, ProfilePage, (MonoInLevelPlayerProfilePage* __this, MethodInfo* method));


// MonoMiniMap
DO_APP_FUNC(0x02E71320, void, MonoMiniMap_Update, (MonoMiniMap* __this, MethodInfo* method));


// NativeGallery
//DO_APP_FUNC(0x05B5C120, Texture2D*, NativeGallery_LoadImageAtPath, (String* imagePath, int32_t maxSize, bool markTextureNonReadable, bool generateMipmaps, bool linearColorSpace, MethodInfo* method));


// NetworkManager
//DO_APP_FUNC(0x01625240, void, MoleMole_NetworkManager_RequestHitTreeDropNotify, (MoleMole_NetworkManager* __this, Vector3 position, Vector3 hitPostion, MoleMole_Config_TreeType__Enum treeType, MethodInfo* method));


// Notify
//DO_APP_FUNC(0x008CB420, Notify, Notify_CreateNotify_1, (MoleMole_NotifyTypes__Enum type, Object* body, MethodInfo* method));


// Object
//DO_APP_FUNC(0x05A49920, Object_1*, Object_1_Instantiate_2, (Object_1* original, MethodInfo* method));
//DO_APP_FUNC(0x0681BFF0, Object*, Object_1_Instantiate_5, (Object* original, MethodInfo* method));
//DO_APP_FUNC(0x0681BFF0, GameObject*, Object_1_Instantiate_10, (GameObject* original, MethodInfo* method));
//DO_APP_FUNC(0x05A49D30, String*, Object_1_get_name, (Object_1* __this, MethodInfo* method));
//DO_APP_FUNC(0x05A49630, void, Object_1_Destroy_1, (Object_1* obj, MethodInfo* method));
//DO_APP_FUNC(0x05A495E0, void, Object_1_DestroyImmediate_1, (Object_1* obj, MethodInfo* method));


// Packet
DO_APP_FUNC(0x05E2B210, void, MoleMole_Packet_XorEncrypt, (Byte__Array** bytes, int32_t length, MethodInfo* method));


// PlayerModule
//DO_APP_FUNC(0x016EE6A0, void, MoleMole_PlayerModule_EntityAppear, (MoleMole_PlayerModule* __this, Proto_SceneEntityInfo* entity, VisionType__Enum type, uint32_t infoParam, MethodInfo* method));
//DO_APP_FUNC(0x016CFB30, void, MoleMole_PlayerModule_RequestPlayerCook, (MoleMole_PlayerModule* __this, uint32_t recipeId, uint32_t avatarId, uint32_t qteQuality, uint32_t count, MethodInfo* method));
//DO_APP_FUNC(0x016D09B0, void, MoleMole_PlayerModule_OnPlayerCookRsp, (MoleMole_PlayerModule* __this, PlayerCookRsp* rsp, MethodInfo* method));


// Quaternion
DO_APP_FUNC(0x0971EE50, Vector3, Quaternion_ToEulerAngles, (Quaternion rotation, MethodInfo* method));
//DO_APP_FUNC(0x05B142E0, Vector3, Quaternion_get_eulerAngles, (Quaternion__Boxed* __this, MethodInfo* method));


// RectTransform
DO_APP_FUNC(0x096527D0, Rect, RectTransform_get_rect, (RectTransform* __this, MethodInfo* method));


// RectTransformUtility
//DO_APP_FUNC(0x05B573C0, bool, RectTransformUtility_ScreenPointToLocalPointInRectangle, (void* rect, Vector2 screenPoint, void* cam, Vector2* localPoint, MethodInfo* method));


// Renderer
//DO_APP_FUNC(0x05B37600, Material__Array*, Renderer_GetMaterialArray, (Renderer* __this, MethodInfo* method));


// RenderSettings
//DO_APP_FUNC(0x05ACFF60, void, RenderSettings_set_fog, (bool value, MethodInfo* method));


// Rigidbody
//DO_APP_FUNC(0x059B3760, RigidbodyConstraints__Enum, Rigidbody_get_constraints, (Rigidbody* __this, MethodInfo* method));
//DO_APP_FUNC(0x059B3930, void, Rigidbody_set_constraints, (Rigidbody* __this, RigidbodyConstraints__Enum value, MethodInfo* method));
//DO_APP_FUNC(0x059B3920, void, Rigidbody_set_collisionDetectionMode, (Rigidbody* __this, CollisionDetectionMode__Enum value, MethodInfo* method));
//DO_APP_FUNC(0x059B3940, void, Rigidbody_set_detectCollisions, (Rigidbody* __this, bool value, MethodInfo* method));
//DO_APP_FUNC(0x059B3980, void, Rigidbody_set_isKinematic, (Rigidbody* __this, bool value, MethodInfo* method));
//DO_APP_FUNC(0x059B3890, Vector3, Rigidbody_get_velocity, (Rigidbody* __this, MethodInfo* method));
//DO_APP_FUNC(0x059B39F0, void, Rigidbody_set_velocity, (Rigidbody* __this, Vector3 value, MethodInfo* method));


// SafeFloat
//DO_APP_FUNC(0x02F72E90, float, MoleMole_SafeFloat_get_Value, (SafeFloat safeFloat, MethodInfo* method));
//DO_APP_FUNC(0x02F72D20, SafeFloat, MoleMole_SafeFloat_set_Value, (float value, MethodInfo* method));


// SCameraModuleInitialize
//DO_APP_FUNC(0x02748890, void, MoleMole_SCameraModuleInitialize_SetWarningLocateRatio, (SCameraModuleInitialize* __this, double deltaTime, CameraShareData* data, MethodInfo* method));


// ScenePropManager
//DO_APP_FUNC(0x02A73370, bool, MoleMole_ScenePropManager_GetTreeTypeByPattern, (MoleMole_ScenePropManager* __this, String* pattern, MoleMole_Config_TreeType__Enum* treeType, MethodInfo* method));


// Screen
DO_APP_FUNC(0x096388A0, int32_t, Screen_get_width, (MethodInfo* method));
DO_APP_FUNC(0x09638830, int32_t, Screen_get_height, (MethodInfo* method));


// SimpleSafeUInt16
DO_APP_FUNC(0x03CB79F0, uint16_t, MoleMole_SimpleSafeUInt16_get_Value, (SimpleSafeUInt16 v, MethodInfo* method));


// SimpleSafeUInt32
//DO_APP_FUNC(0x024486C0, uint32_t, MoleMole_SimpleSafeUInt32_get_Value, (SimpleSafeUInt32 v, MethodInfo* method));


// Singleton
DO_APP_FUNC(0x020ADA60, void*, Singleton_GetInstance, (MethodInfo* method));
DO_APP_FUNC_METHODINFO(0x0CEAC9B0, Singleton_1_MoleMole_UIManager__get_Instance__MethodInfo);
//DO_APP_FUNC_METHODINFO(0x0A48E090, Singleton_1_InteractionManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0CEACDC0, Singleton_1_MoleMole_EntityManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0CEB38D8, Singleton_1_MoleMole_ItemModule__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0CEAD308, Singleton_1_MoleMole_MapModule__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0CEAD018, Singleton_1_MoleMole_PlayerModule__get_Instance__MethodInfo);
//DO_APP_FUNC_METHODINFO(0x0A48D530, Singleton_1_MoleMole_NetworkManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0CEB1D08, Singleton_1_MoleMole_LoadingManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0CEB09F0, Singleton_1_MoleMole_MapManager__get_Instance__MethodInfo);
//DO_APP_FUNC_METHODINFO(0x0A48DF20, Singleton_1_MoleMole_EventManager__get_Instance__MethodInfo);
//DO_APP_FUNC_METHODINFO(0x0A48E098, Singleton_1_MoleMole_ScenePropManager__get_Instance__MethodInfo);


// Slider
//DO_APP_FUNC(0x05A72270, void, Slider_1_set_minValue, (Slider_1* __this, float value, MethodInfo* method));
//DO_APP_FUNC(0x05A721F0, void, Slider_1_set_maxValue, (Slider_1* __this, float value, MethodInfo* method));
//DO_APP_FUNC(0x05A72330, void, Slider_1_set_value, (Slider_1* __this, float value, MethodInfo* method));


// Sprite
//DO_APP_FUNC(0x05ADCA10, Rect, Sprite_get_rect, (Sprite* __this, MethodInfo* method));
//DO_APP_FUNC(0x05ADC810, Sprite*, Sprite_Create, (Texture2D* texture, Rect rect, Vector2 pivot, float pixelsPerUnit, MethodInfo* method));


// TalkDialogContext
//DO_APP_FUNC(0x00ED4790, void, MoleMole_TalkDialogContext_OnDialogSelectItem, (TalkDialogContext* __this, Notify* notify, MethodInfo* method));


// Text
//DO_APP_FUNC(0x032091F0, String*, Text_get_text, (Text* __this, MethodInfo* method));
//DO_APP_FUNC(0x05A567F0, void, Text_set_text, (Text* __this, String* value, MethodInfo* method));
//DO_APP_FUNC(0x05A56300, void, Text_set_alignment, (Text* __this, TextAnchor__Enum value, MethodInfo* method));
//DO_APP_FUNC(0x05A565A0, void, Text_set_horizontalOverflow, (Text* __this, HorizontalWrapMode__Enum value, MethodInfo* method));
//DO_APP_FUNC(0x05A56890, void, Text_set_verticalOverflow, (Text* __this, VerticalWrapMode__Enum value, MethodInfo* method));
//DO_APP_FUNC(0x05A56210, bool, Text_get_resizeTextForBestFit, (Text* __this, MethodInfo* method));
//DO_APP_FUNC(0x05A56670, void, Text_set_resizeTextForBestFit, (Text* __this, bool value, MethodInfo* method));
//DO_APP_FUNC(0x05A55C40, int32_t, Text_get_fontSize, (Text* __this, MethodInfo* method));
//DO_APP_FUNC(0x05A56450, void, Text_set_fontSize, (Text* __this, int32_t value, MethodInfo* method));


// Time
//DO_APP_FUNC(0x05B14AB0, float, Time_get_timeScale, (MethodInfo* method));
//DO_APP_FUNC(0x05B14B60, void, Time_set_timeScale, (float value, MethodInfo* method));
//DO_APP_FUNC(0x05B149D0, float, Time_get_deltaTime, (MethodInfo* method));


// TimeUtil
DO_APP_FUNC(0x03680910, uint64_t, MoleMole_TimeUtil_get_LocalNowMsTimeStamp, (MethodInfo* method));


// Transform
DO_APP_FUNC(0x09653DB0, Transform*, Transform_FindChild, (Transform* __this, String* name, MethodInfo* method));
//DO_APP_FUNC(0x05A4D2E0, Transform*, Transform_GetChild, (Transform* __this, int32_t index, MethodInfo* method));
DO_APP_FUNC(0x096550C0, Quaternion, Transform_get_localRotation, (Transform* __this, MethodInfo* method));
//DO_APP_FUNC(0x05A4EA50, void, Transform_set_localRotation, (Transform* __this, Quaternion value, MethodInfo* method));
//DO_APP_FUNC(0x05A4E5F0, Vector3, Transform_get_localScale, (Transform* __this, MethodInfo* method));
//DO_APP_FUNC(0x05A4EA60, void, Transform_set_localScale, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x09655080, Vector3, Transform_get_localPosition, (Transform* __this, MethodInfo* method));
//DO_APP_FUNC(0x05A4EA40, void, Transform_set_localPosition, (Transform* __this, Vector3 value, MethodInfo* method));
//DO_APP_FUNC(0x05A4E3D0, int32_t, Transform_get_childCount, (Transform* __this, MethodInfo* method));
//DO_APP_FUNC(0x05A4E400, Vector3, Transform_get_eulerAngles, (Transform* __this, MethodInfo* method));
//DO_APP_FUNC(0x05A4E930, void, Transform_set_eulerAngles, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x09655240, Vector3, Transform_get_right, (Transform* __this, MethodInfo* method));
//DO_APP_FUNC(0x05A4EAE0, void, Transform_set_right, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x09655320, Vector3, Transform_get_up, (Transform* __this, MethodInfo* method));
//DO_APP_FUNC(0x05A4EB60, void, Transform_set_up, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x09654F70, Vector3, Transform_get_forward, (Transform* __this, MethodInfo* method));
//DO_APP_FUNC(0x05A4E980, void, Transform_set_forward, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x096552D0, Quaternion, Transform_get_rotation, (Transform* __this, MethodInfo* method));
//DO_APP_FUNC(0x05A4EB50, void, Transform_set_rotation, (Transform* __this, Quaternion value, MethodInfo* method));
DO_APP_FUNC(0x09655200, Vector3, Transform_get_position, (Transform* __this, MethodInfo* method));
//DO_APP_FUNC(0x05A4D4C0, void, Transform_set_position, (Transform* __this, Vector3 value, MethodInfo* method));


// UIManager
DO_APP_FUNC(0x02DD0730, bool, MoleMole_UIManager_HasEnableMapCamera, (MoleMole_UIManager* __this, MethodInfo* method));
//DO_APP_FUNC(0x023DCAF0, void, MoleMole_UIManager_EnableInput, (MoleMole_UIManager* __this, bool playerInput, bool clearCurInputState, bool ignoreTouch, MethodInfo* method));


// Utils
DO_APP_FUNC(0x074BE6F0, Bounds, Utils_4_GetBounds, (GameObject* go, MethodInfo* method));


// VCAnimatorEvent
//DO_APP_FUNC(0x00D70480, void, MoleMole_VCAnimatorEvent_HandleProcessItem, (MoleMole_VCAnimatorEvent* __this, MoleMole_VCAnimatorEvent_MoleMole_VCAnimatorEvent_AnimatorEventPatternProcessItem* processItem, AnimatorStateInfo processStateInfo, MoleMole_VCAnimatorEvent_MoleMole_VCAnimatorEvent_TriggerMode__Enum mode, MethodInfo* method));


// VCBaseSetDitherValue
//DO_APP_FUNC(0x02F94330, void, MoleMole_VCBaseSetDitherValue_set_ManagerDitherAlphaValue, (MoleMole_VCBaseSetDitherValue* __this, float value, MethodInfo* method));


// VCHumanoidMove
//DO_APP_FUNC(0x02B10A90, void, VCHumanoidMove_NotifyLandVelocity, (VCHumanoidMove* __this, Vector3 velocity, float reachMaxDownVelocityTime, MethodInfo* method));


// VCMonsterAIController
//DO_APP_FUNC(0x02513960, void, MoleMole_VCMonsterAIController_TryDoSkill, (/* VCMonsterAIController */ void* __this, uint32_t skillID, MethodInfo* method));


// Vector2
DO_APP_FUNC(0x09639B60, float, Vector2_Distance, (Vector2 a, Vector2 b, MethodInfo* method));


// Vector3
//DO_APP_FUNC(0x05B2D890, Vector3, Vector3_Lerp, (Vector3 a, Vector3 b, float t, MethodInfo* method));
DO_APP_FUNC(0x09738890, float, Vector3_Distance, (Vector3 a, Vector3 b, MethodInfo* method));


// WorldShiftManager
//DO_APP_FUNC(0x051118A0, Vector3, WorldShiftManager_GetAbsolutePosition, (Vector3 pos, MethodInfo* method));
//DO_APP_FUNC(0x05111A40, Vector3, WorldShiftManager_GetRelativePosition, (Vector3 pos, MethodInfo* method));



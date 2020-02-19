#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IList`1<UnityEngine.Transform>
struct IList_1_t12D495D4AF335010DEC3E91C58474E59EE2E50D8;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.SByte[]
struct SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Unity.Properties.IPropertyAttributeCollection
struct IPropertyAttributeCollection_tAE8FCDD2A548B75CDFBDB6A14F2E64BCFC780FB6;
// Unity.Properties.IPropertyVisitor
struct IPropertyVisitor_tFF79FF534B9CD522AF894B16A3D3D2C3DDFD9506;
// Unity.Properties.IPropertyVisitorAdapter
struct IPropertyVisitorAdapter_t6F33432DC9B54B9429BEEE36DDA8E74E7960C827;
// Unity.Properties.IVersionStorage
struct IVersionStorage_t74534386999C2FEE22EE5BC501686BCEF703D767;
// Unity.Properties.Property`2/Getter<System.Object,System.Object>
struct Getter_tE9CB7C6E4689171D272815E8646CAAFF5414F362;
// Unity.Properties.Property`2/Getter<Unity.Entities.EditorRenderData,System.Object>
struct Getter_tB81D3BC590EBC662A5E3C4BDA8C5BBB1B5182869;
// Unity.Properties.Property`2/Getter<Unity.Entities.EditorRenderData,System.UInt64>
struct Getter_tD26D9E415E7C9D682CC82C859E1DE0BEFFB98FF6;
// Unity.Properties.Property`2/Getter<Unity.Entities.Entity,System.Int32>
struct Getter_tE4D98D0F9D814CCD14C1A286003CFA2874794D51;
// Unity.Properties.Property`2/Getter<Unity.Entities.Hash128,Unity.Mathematics.uint4>
struct Getter_t436B929BD9F7118369F3220F66E9E555EF382340;
// Unity.Properties.Property`2/Getter<Unity.Entities.SceneSection,System.Int32>
struct Getter_tA3110339235118DAA65916F0441C579A6A0440A7;
// Unity.Properties.Property`2/Getter<Unity.Entities.SceneSection,Unity.Entities.Hash128>
struct Getter_t683E4CC0AF8204A5E8FCBEBF366C6EA5A3524B17;
// Unity.Properties.Property`2/Getter<Unity.Entities.SceneTag,Unity.Entities.Entity>
struct Getter_t978FD804B46C790A727923F59B3C22A4D44103FF;
// Unity.Properties.Property`2/Getter<Unity.Mathematics.uint4,System.UInt32>
struct Getter_t10636A3565ACE5671EA0D598B8DB31ACF93375C3;
// Unity.Properties.Property`2/Getter<Unity.Rendering.FrozenRenderSceneTag,System.Int32>
struct Getter_t62C0F568D070F10C58E309AFD8DE3B95F7DACA0B;
// Unity.Properties.Property`2/Getter<Unity.Rendering.FrozenRenderSceneTag,Unity.Entities.Hash128>
struct Getter_tB8243F4E10FB8F6608F57AA44F3B8C270DED4CC0;
// Unity.Properties.Property`2/Getter<Unity.Rendering.RenderMesh,System.Boolean>
struct Getter_t022BDB886FD28EDE4397480A78C1B09CA2A8A756;
// Unity.Properties.Property`2/Getter<Unity.Rendering.RenderMesh,System.Int32>
struct Getter_tE2DC4F3BF3A09774C0F4119EB58580BDF811F7C4;
// Unity.Properties.Property`2/Getter<Unity.Rendering.RenderMesh,System.Int32Enum>
struct Getter_t67AB7DBB79A3B58DA9831AE866B9CD7E05895A39;
// Unity.Properties.Property`2/Getter<Unity.Rendering.RenderMesh,System.Object>
struct Getter_t8C147AC89CE2CA2CD05FA428549B531CB4BF52BB;
// Unity.Properties.Property`2/Getter<Unity.Scenes.SceneSectionBundle,System.Object>
struct Getter_tD1D77D80998E324054392785472D61232448E58C;
// Unity.Properties.Property`2/Setter<System.Object,System.Object>
struct Setter_tAD935E21A59FA0E6A6C12DD2BC2DABDF28C6ED26;
// Unity.Properties.Property`2/Setter<Unity.Entities.EditorRenderData,System.Object>
struct Setter_tF851B41A4B8202356F7A6E50129833CAFFB2A6A8;
// Unity.Properties.Property`2/Setter<Unity.Entities.EditorRenderData,System.UInt64>
struct Setter_t33D5405B42D336645916ED564F0F69CC787920BF;
// Unity.Properties.Property`2/Setter<Unity.Entities.Entity,System.Int32>
struct Setter_t2268130D4F6961FBCDC90C61B5A920503B6D16AA;
// Unity.Properties.Property`2/Setter<Unity.Entities.Hash128,Unity.Mathematics.uint4>
struct Setter_t92053AAA5DCA9B3E3247BF906A48A8084E86CD7C;
// Unity.Properties.Property`2/Setter<Unity.Entities.SceneSection,System.Int32>
struct Setter_t33AD57AF4E3B28C9E06D5827B84062B9A6CE985C;
// Unity.Properties.Property`2/Setter<Unity.Entities.SceneSection,Unity.Entities.Hash128>
struct Setter_t48FC47427DA64439419CD881160BF5793158E342;
// Unity.Properties.Property`2/Setter<Unity.Entities.SceneTag,Unity.Entities.Entity>
struct Setter_t4BC66486318FD8E18F65147A8673AEEB2E9B04D4;
// Unity.Properties.Property`2/Setter<Unity.Mathematics.uint4,System.UInt32>
struct Setter_t2E16E5AC805ECD7C2E24BFEEE8466C4DE3A81342;
// Unity.Properties.Property`2/Setter<Unity.Rendering.FrozenRenderSceneTag,System.Int32>
struct Setter_t8014706C5EC0DB02979C3FE3A38736AC8FDCB46A;
// Unity.Properties.Property`2/Setter<Unity.Rendering.FrozenRenderSceneTag,Unity.Entities.Hash128>
struct Setter_t045CE404700BCAAB1DB45170A40642268FA73DF0;
// Unity.Properties.Property`2/Setter<Unity.Rendering.RenderMesh,System.Boolean>
struct Setter_t8B9CA9FC37248CBD10EB53A2DB3D8D7E4066F385;
// Unity.Properties.Property`2/Setter<Unity.Rendering.RenderMesh,System.Int32>
struct Setter_tEC2EA5E8BDAA2726FD66862A8E976CEAB12A3A55;
// Unity.Properties.Property`2/Setter<Unity.Rendering.RenderMesh,System.Int32Enum>
struct Setter_t495D67A68FFA624C6C6D955A4EC28CE1B2867C54;
// Unity.Properties.Property`2/Setter<Unity.Rendering.RenderMesh,System.Object>
struct Setter_t8974F521FBDEEC5C8FF05C09C09F124FD232439F;
// Unity.Properties.Property`2/Setter<Unity.Scenes.SceneSectionBundle,System.Object>
struct Setter_t7295A970B23C6DD55916E3D632AE4AFAADEDCF36;
// UnityEngine.AssetBundle
struct AssetBundle_tCE287BAB693894C3991CDD308B92A8C9C4BD4C78;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
struct EventFunction_1_t7521247C87411935E8A2CA38683533083459473F;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Transform[]
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588;

IL2CPP_EXTERN_C RuntimeClass* Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVisitAdapter_tE311614240F7E5DD9F94C937D5370B807B25654B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVisitContainerAdapter_t0E2F8D9C78A0E26D9B8D648FE0A2D823D712983D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m2E66C1E626886F04E8AEC36183F9E982392C62F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExecuteEvents_GetEventHandler_TisRuntimeObject_m5740E26204A115597421DC622828C0601C2BECA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhysicsShapeExtensions_FindFirstEnabledAncestor_TisRuntimeObject_m23A3D9831235CBED8547B3DF42AB47456B7C9E1D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhysicsShapeExtensions_FindTopmostEnabledAncestor_TisRuntimeObject_mED96914BDA0878E279EB3B58052D4DEF40DA2E9F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisitContainer_TisProperty_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF_TisRenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m61CF202304107D29EBE8AD30B04B23E9D4C07380_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisitContainer_TisProperty_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7_TisSceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7_TisRuntimeObject_mB37DB872261ABB32DC49E572F9CD0596C6BD92E5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisitContainer_TisProperty_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894_TisRenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0_TisRuntimeObject_m6852F41D6C16ACC290C76F321B0E04652B47EDFE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_t0579F6755418EBE535BB3E8216FC0416BC399E33_TisHash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_Tisuint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_m5BC89DD6BA1E181042FCD5D1CE47C604752247B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_t0CA9A192739FFCFDD13DA7DD9701053AF33E70E3_TisRenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mF96139DC436BBDA9E2614FFFD6EF3938188E23F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8_TisRuntimeObject_TisRuntimeObject_m8E66669B76B319BC768E04594D882FC3363675EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06_TisSceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_m4AD9856F5676542409C3A84017F7469066D88B7A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E_TisEditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_mCC282D1B9A9F2D8B8ADE325685209F621B57B99A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15_TisSceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E_TisHash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_mFB6DC714E82C88C9552F481F4C1EAC8C2799DA43_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_t80CBF738F7F4C64E16BF4EE5CFE9C6F39EAA6C38_TisFrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A_TisHash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_mDE80696F7BAD4A94E53B471F600BC01540F41DD7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_t8CB18E68A01C87235E911D649F2E3EAA9EE0135D_TisFrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mEBE4E05D7BF37D8E9572FD0B564D5E68E529A24B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m584CECB0F3AEF35E63BDC1258C1E8D4ADD866886_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF_TisRenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m8E398D0E42A5E0B6739BB8788ECCC6C3C7B469C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_tA9D8E694416FEE343DBB5B5DF1F37D5112FA0DA2_TisRenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m4ECE52DE223C3F657CCBE3F8B096903629713B49_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED_TisSceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m7EEDAB5A1164416C4BB5B18107B4375E8B7B380A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7_TisSceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7_TisRuntimeObject_m84F4880982DA1A61B5F73BF208FCE7067BFAA017_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894_TisRenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0_TisRuntimeObject_m1B93581FCB56F20FB76FFCDD66CE1D8258F0EB75_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5_TisEditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55_TisRuntimeObject_m80FEFA4F428732B83777F2EFC3FA2B33E7641E0B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E_Tisuint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m0837E1A0EC0845CFCF73DFE6CD428ED1568E97E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mC702047CD77DCD0BE144B1EC216D3ECA0A835393_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____items_1)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Unity.Properties.PropertyVisitorAdapterExtensions
struct  PropertyVisitorAdapterExtensions_t58BC6A68127F0FCAC1A019653E729CBD9380D5C5  : public RuntimeObject
{
public:

public:
};


// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// UnityEngine.EventSystems.ExecuteEvents
struct  ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985  : public RuntimeObject
{
public:

public:
};

struct ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerEnterHandler
	EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * ___s_PointerEnterHandler_0;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerExitHandler
	EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * ___s_PointerExitHandler_1;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerDownHandler
	EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * ___s_PointerDownHandler_2;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerUpHandler
	EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * ___s_PointerUpHandler_3;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerClickHandler
	EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * ___s_PointerClickHandler_4;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_InitializePotentialDragHandler
	EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * ___s_InitializePotentialDragHandler_5;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_BeginDragHandler
	EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * ___s_BeginDragHandler_6;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_DragHandler
	EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * ___s_DragHandler_7;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_EndDragHandler
	EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * ___s_EndDragHandler_8;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::s_DropHandler
	EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * ___s_DropHandler_9;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::s_ScrollHandler
	EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * ___s_ScrollHandler_10;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::s_UpdateSelectedHandler
	EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * ___s_UpdateSelectedHandler_11;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::s_SelectHandler
	EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * ___s_SelectHandler_12;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::s_DeselectHandler
	EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * ___s_DeselectHandler_13;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::s_MoveHandler
	EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * ___s_MoveHandler_14;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::s_SubmitHandler
	EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * ___s_SubmitHandler_15;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::s_CancelHandler
	EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * ___s_CancelHandler_16;
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>> UnityEngine.EventSystems.ExecuteEvents::s_HandlerListPool
	ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588 * ___s_HandlerListPool_17;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.EventSystems.ExecuteEvents::s_InternalTransformList
	List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * ___s_InternalTransformList_18;

public:
	inline static int32_t get_offset_of_s_PointerEnterHandler_0() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerEnterHandler_0)); }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * get_s_PointerEnterHandler_0() const { return ___s_PointerEnterHandler_0; }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 ** get_address_of_s_PointerEnterHandler_0() { return &___s_PointerEnterHandler_0; }
	inline void set_s_PointerEnterHandler_0(EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * value)
	{
		___s_PointerEnterHandler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerEnterHandler_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerExitHandler_1() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerExitHandler_1)); }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * get_s_PointerExitHandler_1() const { return ___s_PointerExitHandler_1; }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA ** get_address_of_s_PointerExitHandler_1() { return &___s_PointerExitHandler_1; }
	inline void set_s_PointerExitHandler_1(EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * value)
	{
		___s_PointerExitHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerExitHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerDownHandler_2() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerDownHandler_2)); }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * get_s_PointerDownHandler_2() const { return ___s_PointerDownHandler_2; }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E ** get_address_of_s_PointerDownHandler_2() { return &___s_PointerDownHandler_2; }
	inline void set_s_PointerDownHandler_2(EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * value)
	{
		___s_PointerDownHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerDownHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerUpHandler_3() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerUpHandler_3)); }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * get_s_PointerUpHandler_3() const { return ___s_PointerUpHandler_3; }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 ** get_address_of_s_PointerUpHandler_3() { return &___s_PointerUpHandler_3; }
	inline void set_s_PointerUpHandler_3(EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * value)
	{
		___s_PointerUpHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerUpHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerClickHandler_4() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerClickHandler_4)); }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * get_s_PointerClickHandler_4() const { return ___s_PointerClickHandler_4; }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E ** get_address_of_s_PointerClickHandler_4() { return &___s_PointerClickHandler_4; }
	inline void set_s_PointerClickHandler_4(EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * value)
	{
		___s_PointerClickHandler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerClickHandler_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_InitializePotentialDragHandler_5() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_InitializePotentialDragHandler_5)); }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * get_s_InitializePotentialDragHandler_5() const { return ___s_InitializePotentialDragHandler_5; }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 ** get_address_of_s_InitializePotentialDragHandler_5() { return &___s_InitializePotentialDragHandler_5; }
	inline void set_s_InitializePotentialDragHandler_5(EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * value)
	{
		___s_InitializePotentialDragHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InitializePotentialDragHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_BeginDragHandler_6() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_BeginDragHandler_6)); }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * get_s_BeginDragHandler_6() const { return ___s_BeginDragHandler_6; }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 ** get_address_of_s_BeginDragHandler_6() { return &___s_BeginDragHandler_6; }
	inline void set_s_BeginDragHandler_6(EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * value)
	{
		___s_BeginDragHandler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_BeginDragHandler_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_DragHandler_7() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DragHandler_7)); }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * get_s_DragHandler_7() const { return ___s_DragHandler_7; }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 ** get_address_of_s_DragHandler_7() { return &___s_DragHandler_7; }
	inline void set_s_DragHandler_7(EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * value)
	{
		___s_DragHandler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DragHandler_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_EndDragHandler_8() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_EndDragHandler_8)); }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * get_s_EndDragHandler_8() const { return ___s_EndDragHandler_8; }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 ** get_address_of_s_EndDragHandler_8() { return &___s_EndDragHandler_8; }
	inline void set_s_EndDragHandler_8(EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * value)
	{
		___s_EndDragHandler_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EndDragHandler_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_DropHandler_9() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DropHandler_9)); }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * get_s_DropHandler_9() const { return ___s_DropHandler_9; }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 ** get_address_of_s_DropHandler_9() { return &___s_DropHandler_9; }
	inline void set_s_DropHandler_9(EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * value)
	{
		___s_DropHandler_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DropHandler_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_ScrollHandler_10() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_ScrollHandler_10)); }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * get_s_ScrollHandler_10() const { return ___s_ScrollHandler_10; }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A ** get_address_of_s_ScrollHandler_10() { return &___s_ScrollHandler_10; }
	inline void set_s_ScrollHandler_10(EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * value)
	{
		___s_ScrollHandler_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ScrollHandler_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_UpdateSelectedHandler_11() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_UpdateSelectedHandler_11)); }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * get_s_UpdateSelectedHandler_11() const { return ___s_UpdateSelectedHandler_11; }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 ** get_address_of_s_UpdateSelectedHandler_11() { return &___s_UpdateSelectedHandler_11; }
	inline void set_s_UpdateSelectedHandler_11(EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * value)
	{
		___s_UpdateSelectedHandler_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UpdateSelectedHandler_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectHandler_12() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_SelectHandler_12)); }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * get_s_SelectHandler_12() const { return ___s_SelectHandler_12; }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F ** get_address_of_s_SelectHandler_12() { return &___s_SelectHandler_12; }
	inline void set_s_SelectHandler_12(EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * value)
	{
		___s_SelectHandler_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SelectHandler_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_DeselectHandler_13() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DeselectHandler_13)); }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * get_s_DeselectHandler_13() const { return ___s_DeselectHandler_13; }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 ** get_address_of_s_DeselectHandler_13() { return &___s_DeselectHandler_13; }
	inline void set_s_DeselectHandler_13(EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * value)
	{
		___s_DeselectHandler_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DeselectHandler_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_MoveHandler_14() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_MoveHandler_14)); }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * get_s_MoveHandler_14() const { return ___s_MoveHandler_14; }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB ** get_address_of_s_MoveHandler_14() { return &___s_MoveHandler_14; }
	inline void set_s_MoveHandler_14(EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * value)
	{
		___s_MoveHandler_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MoveHandler_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubmitHandler_15() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_SubmitHandler_15)); }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * get_s_SubmitHandler_15() const { return ___s_SubmitHandler_15; }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B ** get_address_of_s_SubmitHandler_15() { return &___s_SubmitHandler_15; }
	inline void set_s_SubmitHandler_15(EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * value)
	{
		___s_SubmitHandler_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubmitHandler_15), (void*)value);
	}

	inline static int32_t get_offset_of_s_CancelHandler_16() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_CancelHandler_16)); }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * get_s_CancelHandler_16() const { return ___s_CancelHandler_16; }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 ** get_address_of_s_CancelHandler_16() { return &___s_CancelHandler_16; }
	inline void set_s_CancelHandler_16(EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * value)
	{
		___s_CancelHandler_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CancelHandler_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_HandlerListPool_17() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_HandlerListPool_17)); }
	inline ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588 * get_s_HandlerListPool_17() const { return ___s_HandlerListPool_17; }
	inline ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588 ** get_address_of_s_HandlerListPool_17() { return &___s_HandlerListPool_17; }
	inline void set_s_HandlerListPool_17(ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588 * value)
	{
		___s_HandlerListPool_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_HandlerListPool_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalTransformList_18() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_InternalTransformList_18)); }
	inline List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * get_s_InternalTransformList_18() const { return ___s_InternalTransformList_18; }
	inline List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 ** get_address_of_s_InternalTransformList_18() { return &___s_InternalTransformList_18; }
	inline void set_s_InternalTransformList_18(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * value)
	{
		___s_InternalTransformList_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalTransformList_18), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// Unity.Entities.EditorRenderData
struct  EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 
{
public:
	// System.UInt64 Unity.Entities.EditorRenderData::SceneCullingMask
	uint64_t ___SceneCullingMask_0;
	// UnityEngine.GameObject Unity.Entities.EditorRenderData::PickableObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___PickableObject_1;

public:
	inline static int32_t get_offset_of_SceneCullingMask_0() { return static_cast<int32_t>(offsetof(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55, ___SceneCullingMask_0)); }
	inline uint64_t get_SceneCullingMask_0() const { return ___SceneCullingMask_0; }
	inline uint64_t* get_address_of_SceneCullingMask_0() { return &___SceneCullingMask_0; }
	inline void set_SceneCullingMask_0(uint64_t value)
	{
		___SceneCullingMask_0 = value;
	}

	inline static int32_t get_offset_of_PickableObject_1() { return static_cast<int32_t>(offsetof(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55, ___PickableObject_1)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_PickableObject_1() const { return ___PickableObject_1; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_PickableObject_1() { return &___PickableObject_1; }
	inline void set_PickableObject_1(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___PickableObject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PickableObject_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Entities.EditorRenderData
struct EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55_marshaled_pinvoke
{
	uint64_t ___SceneCullingMask_0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___PickableObject_1;
};
// Native definition for COM marshalling of Unity.Entities.EditorRenderData
struct EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55_marshaled_com
{
	uint64_t ___SceneCullingMask_0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___PickableObject_1;
};

// Unity.Entities.Entity
struct  Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 
{
public:
	// System.Int32 Unity.Entities.Entity::Index
	int32_t ___Index_0;
	// System.Int32 Unity.Entities.Entity::Version
	int32_t ___Version_1;

public:
	inline static int32_t get_offset_of_Index_0() { return static_cast<int32_t>(offsetof(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8, ___Index_0)); }
	inline int32_t get_Index_0() const { return ___Index_0; }
	inline int32_t* get_address_of_Index_0() { return &___Index_0; }
	inline void set_Index_0(int32_t value)
	{
		___Index_0 = value;
	}

	inline static int32_t get_offset_of_Version_1() { return static_cast<int32_t>(offsetof(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8, ___Version_1)); }
	inline int32_t get_Version_1() const { return ___Version_1; }
	inline int32_t* get_address_of_Version_1() { return &___Version_1; }
	inline void set_Version_1(int32_t value)
	{
		___Version_1 = value;
	}
};


// Unity.Mathematics.int3
struct  int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F 
{
public:
	// System.Int32 Unity.Mathematics.int3::x
	int32_t ___x_0;
	// System.Int32 Unity.Mathematics.int3::y
	int32_t ___y_1;
	// System.Int32 Unity.Mathematics.int3::z
	int32_t ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F, ___z_2)); }
	inline int32_t get_z_2() const { return ___z_2; }
	inline int32_t* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(int32_t value)
	{
		___z_2 = value;
	}
};

struct int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F_StaticFields
{
public:
	// Unity.Mathematics.int3 Unity.Mathematics.int3::zero
	int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F  ___zero_3;

public:
	inline static int32_t get_offset_of_zero_3() { return static_cast<int32_t>(offsetof(int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F_StaticFields, ___zero_3)); }
	inline int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F  get_zero_3() const { return ___zero_3; }
	inline int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F * get_address_of_zero_3() { return &___zero_3; }
	inline void set_zero_3(int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F  value)
	{
		___zero_3 = value;
	}
};


// Unity.Mathematics.uint4
struct  uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC 
{
public:
	// System.UInt32 Unity.Mathematics.uint4::x
	uint32_t ___x_0;
	// System.UInt32 Unity.Mathematics.uint4::y
	uint32_t ___y_1;
	// System.UInt32 Unity.Mathematics.uint4::z
	uint32_t ___z_2;
	// System.UInt32 Unity.Mathematics.uint4::w
	uint32_t ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC, ___x_0)); }
	inline uint32_t get_x_0() const { return ___x_0; }
	inline uint32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(uint32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC, ___y_1)); }
	inline uint32_t get_y_1() const { return ___y_1; }
	inline uint32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(uint32_t value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC, ___z_2)); }
	inline uint32_t get_z_2() const { return ___z_2; }
	inline uint32_t* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(uint32_t value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC, ___w_3)); }
	inline uint32_t get_w_3() const { return ___w_3; }
	inline uint32_t* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(uint32_t value)
	{
		___w_3 = value;
	}
};

struct uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_StaticFields
{
public:
	// Unity.Mathematics.uint4 Unity.Mathematics.uint4::zero
	uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  ___zero_4;

public:
	inline static int32_t get_offset_of_zero_4() { return static_cast<int32_t>(offsetof(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_StaticFields, ___zero_4)); }
	inline uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  get_zero_4() const { return ___zero_4; }
	inline uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * get_address_of_zero_4() { return &___zero_4; }
	inline void set_zero_4(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  value)
	{
		___zero_4 = value;
	}
};


// Unity.Properties.ChangeTracker
struct  ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 
{
public:
	// System.Int32 Unity.Properties.ChangeTracker::m_Version
	int32_t ___m_Version_0;
	// Unity.Properties.IVersionStorage Unity.Properties.ChangeTracker::<VersionStorage>k__BackingField
	RuntimeObject* ___U3CVersionStorageU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_m_Version_0() { return static_cast<int32_t>(offsetof(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142, ___m_Version_0)); }
	inline int32_t get_m_Version_0() const { return ___m_Version_0; }
	inline int32_t* get_address_of_m_Version_0() { return &___m_Version_0; }
	inline void set_m_Version_0(int32_t value)
	{
		___m_Version_0 = value;
	}

	inline static int32_t get_offset_of_U3CVersionStorageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142, ___U3CVersionStorageU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CVersionStorageU3Ek__BackingField_1() const { return ___U3CVersionStorageU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CVersionStorageU3Ek__BackingField_1() { return &___U3CVersionStorageU3Ek__BackingField_1; }
	inline void set_U3CVersionStorageU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CVersionStorageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVersionStorageU3Ek__BackingField_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Properties.ChangeTracker
struct ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142_marshaled_pinvoke
{
	int32_t ___m_Version_0;
	RuntimeObject* ___U3CVersionStorageU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Unity.Properties.ChangeTracker
struct ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142_marshaled_com
{
	int32_t ___m_Version_0;
	RuntimeObject* ___U3CVersionStorageU3Ek__BackingField_1;
};

// Unity.Properties.Property`2<System.Object,System.Object>
struct  Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 
{
public:
	// System.String Unity.Properties.Property`2::m_Name
	String_t* ___m_Name_0;
	// Unity.Properties.Property`2_Getter<TContainer,TValue> Unity.Properties.Property`2::m_Getter
	Getter_tE9CB7C6E4689171D272815E8646CAAFF5414F362 * ___m_Getter_1;
	// Unity.Properties.Property`2_Setter<TContainer,TValue> Unity.Properties.Property`2::m_Setter
	Setter_tAD935E21A59FA0E6A6C12DD2BC2DABDF28C6ED26 * ___m_Setter_2;
	// Unity.Properties.IPropertyAttributeCollection Unity.Properties.Property`2::<Attributes>k__BackingField
	RuntimeObject* ___U3CAttributesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Getter_1() { return static_cast<int32_t>(offsetof(Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8, ___m_Getter_1)); }
	inline Getter_tE9CB7C6E4689171D272815E8646CAAFF5414F362 * get_m_Getter_1() const { return ___m_Getter_1; }
	inline Getter_tE9CB7C6E4689171D272815E8646CAAFF5414F362 ** get_address_of_m_Getter_1() { return &___m_Getter_1; }
	inline void set_m_Getter_1(Getter_tE9CB7C6E4689171D272815E8646CAAFF5414F362 * value)
	{
		___m_Getter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Getter_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Setter_2() { return static_cast<int32_t>(offsetof(Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8, ___m_Setter_2)); }
	inline Setter_tAD935E21A59FA0E6A6C12DD2BC2DABDF28C6ED26 * get_m_Setter_2() const { return ___m_Setter_2; }
	inline Setter_tAD935E21A59FA0E6A6C12DD2BC2DABDF28C6ED26 ** get_address_of_m_Setter_2() { return &___m_Setter_2; }
	inline void set_m_Setter_2(Setter_tAD935E21A59FA0E6A6C12DD2BC2DABDF28C6ED26 * value)
	{
		___m_Setter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Setter_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAttributesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8, ___U3CAttributesU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CAttributesU3Ek__BackingField_3() const { return ___U3CAttributesU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CAttributesU3Ek__BackingField_3() { return &___U3CAttributesU3Ek__BackingField_3; }
	inline void set_U3CAttributesU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CAttributesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttributesU3Ek__BackingField_3), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.Object>
struct  Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 
{
public:
	// System.String Unity.Properties.Property`2::m_Name
	String_t* ___m_Name_0;
	// Unity.Properties.Property`2_Getter<TContainer,TValue> Unity.Properties.Property`2::m_Getter
	Getter_tB81D3BC590EBC662A5E3C4BDA8C5BBB1B5182869 * ___m_Getter_1;
	// Unity.Properties.Property`2_Setter<TContainer,TValue> Unity.Properties.Property`2::m_Setter
	Setter_tF851B41A4B8202356F7A6E50129833CAFFB2A6A8 * ___m_Setter_2;
	// Unity.Properties.IPropertyAttributeCollection Unity.Properties.Property`2::<Attributes>k__BackingField
	RuntimeObject* ___U3CAttributesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Getter_1() { return static_cast<int32_t>(offsetof(Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5, ___m_Getter_1)); }
	inline Getter_tB81D3BC590EBC662A5E3C4BDA8C5BBB1B5182869 * get_m_Getter_1() const { return ___m_Getter_1; }
	inline Getter_tB81D3BC590EBC662A5E3C4BDA8C5BBB1B5182869 ** get_address_of_m_Getter_1() { return &___m_Getter_1; }
	inline void set_m_Getter_1(Getter_tB81D3BC590EBC662A5E3C4BDA8C5BBB1B5182869 * value)
	{
		___m_Getter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Getter_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Setter_2() { return static_cast<int32_t>(offsetof(Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5, ___m_Setter_2)); }
	inline Setter_tF851B41A4B8202356F7A6E50129833CAFFB2A6A8 * get_m_Setter_2() const { return ___m_Setter_2; }
	inline Setter_tF851B41A4B8202356F7A6E50129833CAFFB2A6A8 ** get_address_of_m_Setter_2() { return &___m_Setter_2; }
	inline void set_m_Setter_2(Setter_tF851B41A4B8202356F7A6E50129833CAFFB2A6A8 * value)
	{
		___m_Setter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Setter_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAttributesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5, ___U3CAttributesU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CAttributesU3Ek__BackingField_3() const { return ___U3CAttributesU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CAttributesU3Ek__BackingField_3() { return &___U3CAttributesU3Ek__BackingField_3; }
	inline void set_U3CAttributesU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CAttributesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttributesU3Ek__BackingField_3), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.UInt64>
struct  Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E 
{
public:
	// System.String Unity.Properties.Property`2::m_Name
	String_t* ___m_Name_0;
	// Unity.Properties.Property`2_Getter<TContainer,TValue> Unity.Properties.Property`2::m_Getter
	Getter_tD26D9E415E7C9D682CC82C859E1DE0BEFFB98FF6 * ___m_Getter_1;
	// Unity.Properties.Property`2_Setter<TContainer,TValue> Unity.Properties.Property`2::m_Setter
	Setter_t33D5405B42D336645916ED564F0F69CC787920BF * ___m_Setter_2;
	// Unity.Properties.IPropertyAttributeCollection Unity.Properties.Property`2::<Attributes>k__BackingField
	RuntimeObject* ___U3CAttributesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Getter_1() { return static_cast<int32_t>(offsetof(Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E, ___m_Getter_1)); }
	inline Getter_tD26D9E415E7C9D682CC82C859E1DE0BEFFB98FF6 * get_m_Getter_1() const { return ___m_Getter_1; }
	inline Getter_tD26D9E415E7C9D682CC82C859E1DE0BEFFB98FF6 ** get_address_of_m_Getter_1() { return &___m_Getter_1; }
	inline void set_m_Getter_1(Getter_tD26D9E415E7C9D682CC82C859E1DE0BEFFB98FF6 * value)
	{
		___m_Getter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Getter_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Setter_2() { return static_cast<int32_t>(offsetof(Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E, ___m_Setter_2)); }
	inline Setter_t33D5405B42D336645916ED564F0F69CC787920BF * get_m_Setter_2() const { return ___m_Setter_2; }
	inline Setter_t33D5405B42D336645916ED564F0F69CC787920BF ** get_address_of_m_Setter_2() { return &___m_Setter_2; }
	inline void set_m_Setter_2(Setter_t33D5405B42D336645916ED564F0F69CC787920BF * value)
	{
		___m_Setter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Setter_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAttributesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E, ___U3CAttributesU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CAttributesU3Ek__BackingField_3() const { return ___U3CAttributesU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CAttributesU3Ek__BackingField_3() { return &___U3CAttributesU3Ek__BackingField_3; }
	inline void set_U3CAttributesU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CAttributesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttributesU3Ek__BackingField_3), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Entities.Entity,System.Int32>
struct  Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 
{
public:
	// System.String Unity.Properties.Property`2::m_Name
	String_t* ___m_Name_0;
	// Unity.Properties.Property`2_Getter<TContainer,TValue> Unity.Properties.Property`2::m_Getter
	Getter_tE4D98D0F9D814CCD14C1A286003CFA2874794D51 * ___m_Getter_1;
	// Unity.Properties.Property`2_Setter<TContainer,TValue> Unity.Properties.Property`2::m_Setter
	Setter_t2268130D4F6961FBCDC90C61B5A920503B6D16AA * ___m_Setter_2;
	// Unity.Properties.IPropertyAttributeCollection Unity.Properties.Property`2::<Attributes>k__BackingField
	RuntimeObject* ___U3CAttributesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Getter_1() { return static_cast<int32_t>(offsetof(Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459, ___m_Getter_1)); }
	inline Getter_tE4D98D0F9D814CCD14C1A286003CFA2874794D51 * get_m_Getter_1() const { return ___m_Getter_1; }
	inline Getter_tE4D98D0F9D814CCD14C1A286003CFA2874794D51 ** get_address_of_m_Getter_1() { return &___m_Getter_1; }
	inline void set_m_Getter_1(Getter_tE4D98D0F9D814CCD14C1A286003CFA2874794D51 * value)
	{
		___m_Getter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Getter_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Setter_2() { return static_cast<int32_t>(offsetof(Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459, ___m_Setter_2)); }
	inline Setter_t2268130D4F6961FBCDC90C61B5A920503B6D16AA * get_m_Setter_2() const { return ___m_Setter_2; }
	inline Setter_t2268130D4F6961FBCDC90C61B5A920503B6D16AA ** get_address_of_m_Setter_2() { return &___m_Setter_2; }
	inline void set_m_Setter_2(Setter_t2268130D4F6961FBCDC90C61B5A920503B6D16AA * value)
	{
		___m_Setter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Setter_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAttributesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459, ___U3CAttributesU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CAttributesU3Ek__BackingField_3() const { return ___U3CAttributesU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CAttributesU3Ek__BackingField_3() { return &___U3CAttributesU3Ek__BackingField_3; }
	inline void set_U3CAttributesU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CAttributesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttributesU3Ek__BackingField_3), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Entities.Hash128,Unity.Mathematics.uint4>
struct  Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 
{
public:
	// System.String Unity.Properties.Property`2::m_Name
	String_t* ___m_Name_0;
	// Unity.Properties.Property`2_Getter<TContainer,TValue> Unity.Properties.Property`2::m_Getter
	Getter_t436B929BD9F7118369F3220F66E9E555EF382340 * ___m_Getter_1;
	// Unity.Properties.Property`2_Setter<TContainer,TValue> Unity.Properties.Property`2::m_Setter
	Setter_t92053AAA5DCA9B3E3247BF906A48A8084E86CD7C * ___m_Setter_2;
	// Unity.Properties.IPropertyAttributeCollection Unity.Properties.Property`2::<Attributes>k__BackingField
	RuntimeObject* ___U3CAttributesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Getter_1() { return static_cast<int32_t>(offsetof(Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33, ___m_Getter_1)); }
	inline Getter_t436B929BD9F7118369F3220F66E9E555EF382340 * get_m_Getter_1() const { return ___m_Getter_1; }
	inline Getter_t436B929BD9F7118369F3220F66E9E555EF382340 ** get_address_of_m_Getter_1() { return &___m_Getter_1; }
	inline void set_m_Getter_1(Getter_t436B929BD9F7118369F3220F66E9E555EF382340 * value)
	{
		___m_Getter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Getter_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Setter_2() { return static_cast<int32_t>(offsetof(Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33, ___m_Setter_2)); }
	inline Setter_t92053AAA5DCA9B3E3247BF906A48A8084E86CD7C * get_m_Setter_2() const { return ___m_Setter_2; }
	inline Setter_t92053AAA5DCA9B3E3247BF906A48A8084E86CD7C ** get_address_of_m_Setter_2() { return &___m_Setter_2; }
	inline void set_m_Setter_2(Setter_t92053AAA5DCA9B3E3247BF906A48A8084E86CD7C * value)
	{
		___m_Setter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Setter_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAttributesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33, ___U3CAttributesU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CAttributesU3Ek__BackingField_3() const { return ___U3CAttributesU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CAttributesU3Ek__BackingField_3() { return &___U3CAttributesU3Ek__BackingField_3; }
	inline void set_U3CAttributesU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CAttributesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttributesU3Ek__BackingField_3), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Entities.SceneSection,System.Int32>
struct  Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED 
{
public:
	// System.String Unity.Properties.Property`2::m_Name
	String_t* ___m_Name_0;
	// Unity.Properties.Property`2_Getter<TContainer,TValue> Unity.Properties.Property`2::m_Getter
	Getter_tA3110339235118DAA65916F0441C579A6A0440A7 * ___m_Getter_1;
	// Unity.Properties.Property`2_Setter<TContainer,TValue> Unity.Properties.Property`2::m_Setter
	Setter_t33AD57AF4E3B28C9E06D5827B84062B9A6CE985C * ___m_Setter_2;
	// Unity.Properties.IPropertyAttributeCollection Unity.Properties.Property`2::<Attributes>k__BackingField
	RuntimeObject* ___U3CAttributesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Getter_1() { return static_cast<int32_t>(offsetof(Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED, ___m_Getter_1)); }
	inline Getter_tA3110339235118DAA65916F0441C579A6A0440A7 * get_m_Getter_1() const { return ___m_Getter_1; }
	inline Getter_tA3110339235118DAA65916F0441C579A6A0440A7 ** get_address_of_m_Getter_1() { return &___m_Getter_1; }
	inline void set_m_Getter_1(Getter_tA3110339235118DAA65916F0441C579A6A0440A7 * value)
	{
		___m_Getter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Getter_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Setter_2() { return static_cast<int32_t>(offsetof(Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED, ___m_Setter_2)); }
	inline Setter_t33AD57AF4E3B28C9E06D5827B84062B9A6CE985C * get_m_Setter_2() const { return ___m_Setter_2; }
	inline Setter_t33AD57AF4E3B28C9E06D5827B84062B9A6CE985C ** get_address_of_m_Setter_2() { return &___m_Setter_2; }
	inline void set_m_Setter_2(Setter_t33AD57AF4E3B28C9E06D5827B84062B9A6CE985C * value)
	{
		___m_Setter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Setter_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAttributesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED, ___U3CAttributesU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CAttributesU3Ek__BackingField_3() const { return ___U3CAttributesU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CAttributesU3Ek__BackingField_3() { return &___U3CAttributesU3Ek__BackingField_3; }
	inline void set_U3CAttributesU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CAttributesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttributesU3Ek__BackingField_3), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Entities.SceneSection,Unity.Entities.Hash128>
struct  Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 
{
public:
	// System.String Unity.Properties.Property`2::m_Name
	String_t* ___m_Name_0;
	// Unity.Properties.Property`2_Getter<TContainer,TValue> Unity.Properties.Property`2::m_Getter
	Getter_t683E4CC0AF8204A5E8FCBEBF366C6EA5A3524B17 * ___m_Getter_1;
	// Unity.Properties.Property`2_Setter<TContainer,TValue> Unity.Properties.Property`2::m_Setter
	Setter_t48FC47427DA64439419CD881160BF5793158E342 * ___m_Setter_2;
	// Unity.Properties.IPropertyAttributeCollection Unity.Properties.Property`2::<Attributes>k__BackingField
	RuntimeObject* ___U3CAttributesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Getter_1() { return static_cast<int32_t>(offsetof(Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15, ___m_Getter_1)); }
	inline Getter_t683E4CC0AF8204A5E8FCBEBF366C6EA5A3524B17 * get_m_Getter_1() const { return ___m_Getter_1; }
	inline Getter_t683E4CC0AF8204A5E8FCBEBF366C6EA5A3524B17 ** get_address_of_m_Getter_1() { return &___m_Getter_1; }
	inline void set_m_Getter_1(Getter_t683E4CC0AF8204A5E8FCBEBF366C6EA5A3524B17 * value)
	{
		___m_Getter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Getter_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Setter_2() { return static_cast<int32_t>(offsetof(Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15, ___m_Setter_2)); }
	inline Setter_t48FC47427DA64439419CD881160BF5793158E342 * get_m_Setter_2() const { return ___m_Setter_2; }
	inline Setter_t48FC47427DA64439419CD881160BF5793158E342 ** get_address_of_m_Setter_2() { return &___m_Setter_2; }
	inline void set_m_Setter_2(Setter_t48FC47427DA64439419CD881160BF5793158E342 * value)
	{
		___m_Setter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Setter_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAttributesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15, ___U3CAttributesU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CAttributesU3Ek__BackingField_3() const { return ___U3CAttributesU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CAttributesU3Ek__BackingField_3() { return &___U3CAttributesU3Ek__BackingField_3; }
	inline void set_U3CAttributesU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CAttributesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttributesU3Ek__BackingField_3), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Entities.SceneTag,Unity.Entities.Entity>
struct  Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 
{
public:
	// System.String Unity.Properties.Property`2::m_Name
	String_t* ___m_Name_0;
	// Unity.Properties.Property`2_Getter<TContainer,TValue> Unity.Properties.Property`2::m_Getter
	Getter_t978FD804B46C790A727923F59B3C22A4D44103FF * ___m_Getter_1;
	// Unity.Properties.Property`2_Setter<TContainer,TValue> Unity.Properties.Property`2::m_Setter
	Setter_t4BC66486318FD8E18F65147A8673AEEB2E9B04D4 * ___m_Setter_2;
	// Unity.Properties.IPropertyAttributeCollection Unity.Properties.Property`2::<Attributes>k__BackingField
	RuntimeObject* ___U3CAttributesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Getter_1() { return static_cast<int32_t>(offsetof(Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06, ___m_Getter_1)); }
	inline Getter_t978FD804B46C790A727923F59B3C22A4D44103FF * get_m_Getter_1() const { return ___m_Getter_1; }
	inline Getter_t978FD804B46C790A727923F59B3C22A4D44103FF ** get_address_of_m_Getter_1() { return &___m_Getter_1; }
	inline void set_m_Getter_1(Getter_t978FD804B46C790A727923F59B3C22A4D44103FF * value)
	{
		___m_Getter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Getter_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Setter_2() { return static_cast<int32_t>(offsetof(Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06, ___m_Setter_2)); }
	inline Setter_t4BC66486318FD8E18F65147A8673AEEB2E9B04D4 * get_m_Setter_2() const { return ___m_Setter_2; }
	inline Setter_t4BC66486318FD8E18F65147A8673AEEB2E9B04D4 ** get_address_of_m_Setter_2() { return &___m_Setter_2; }
	inline void set_m_Setter_2(Setter_t4BC66486318FD8E18F65147A8673AEEB2E9B04D4 * value)
	{
		___m_Setter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Setter_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAttributesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06, ___U3CAttributesU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CAttributesU3Ek__BackingField_3() const { return ___U3CAttributesU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CAttributesU3Ek__BackingField_3() { return &___U3CAttributesU3Ek__BackingField_3; }
	inline void set_U3CAttributesU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CAttributesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttributesU3Ek__BackingField_3), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Mathematics.uint4,System.UInt32>
struct  Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E 
{
public:
	// System.String Unity.Properties.Property`2::m_Name
	String_t* ___m_Name_0;
	// Unity.Properties.Property`2_Getter<TContainer,TValue> Unity.Properties.Property`2::m_Getter
	Getter_t10636A3565ACE5671EA0D598B8DB31ACF93375C3 * ___m_Getter_1;
	// Unity.Properties.Property`2_Setter<TContainer,TValue> Unity.Properties.Property`2::m_Setter
	Setter_t2E16E5AC805ECD7C2E24BFEEE8466C4DE3A81342 * ___m_Setter_2;
	// Unity.Properties.IPropertyAttributeCollection Unity.Properties.Property`2::<Attributes>k__BackingField
	RuntimeObject* ___U3CAttributesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Getter_1() { return static_cast<int32_t>(offsetof(Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E, ___m_Getter_1)); }
	inline Getter_t10636A3565ACE5671EA0D598B8DB31ACF93375C3 * get_m_Getter_1() const { return ___m_Getter_1; }
	inline Getter_t10636A3565ACE5671EA0D598B8DB31ACF93375C3 ** get_address_of_m_Getter_1() { return &___m_Getter_1; }
	inline void set_m_Getter_1(Getter_t10636A3565ACE5671EA0D598B8DB31ACF93375C3 * value)
	{
		___m_Getter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Getter_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Setter_2() { return static_cast<int32_t>(offsetof(Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E, ___m_Setter_2)); }
	inline Setter_t2E16E5AC805ECD7C2E24BFEEE8466C4DE3A81342 * get_m_Setter_2() const { return ___m_Setter_2; }
	inline Setter_t2E16E5AC805ECD7C2E24BFEEE8466C4DE3A81342 ** get_address_of_m_Setter_2() { return &___m_Setter_2; }
	inline void set_m_Setter_2(Setter_t2E16E5AC805ECD7C2E24BFEEE8466C4DE3A81342 * value)
	{
		___m_Setter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Setter_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAttributesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E, ___U3CAttributesU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CAttributesU3Ek__BackingField_3() const { return ___U3CAttributesU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CAttributesU3Ek__BackingField_3() { return &___U3CAttributesU3Ek__BackingField_3; }
	inline void set_U3CAttributesU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CAttributesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttributesU3Ek__BackingField_3), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Rendering.FrozenRenderSceneTag,System.Int32>
struct  Property_2_t8CB18E68A01C87235E911D649F2E3EAA9EE0135D 
{
public:
	// System.String Unity.Properties.Property`2::m_Name
	String_t* ___m_Name_0;
	// Unity.Properties.Property`2_Getter<TContainer,TValue> Unity.Properties.Property`2::m_Getter
	Getter_t62C0F568D070F10C58E309AFD8DE3B95F7DACA0B * ___m_Getter_1;
	// Unity.Properties.Property`2_Setter<TContainer,TValue> Unity.Properties.Property`2::m_Setter
	Setter_t8014706C5EC0DB02979C3FE3A38736AC8FDCB46A * ___m_Setter_2;
	// Unity.Properties.IPropertyAttributeCollection Unity.Properties.Property`2::<Attributes>k__BackingField
	RuntimeObject* ___U3CAttributesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(Property_2_t8CB18E68A01C87235E911D649F2E3EAA9EE0135D, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Getter_1() { return static_cast<int32_t>(offsetof(Property_2_t8CB18E68A01C87235E911D649F2E3EAA9EE0135D, ___m_Getter_1)); }
	inline Getter_t62C0F568D070F10C58E309AFD8DE3B95F7DACA0B * get_m_Getter_1() const { return ___m_Getter_1; }
	inline Getter_t62C0F568D070F10C58E309AFD8DE3B95F7DACA0B ** get_address_of_m_Getter_1() { return &___m_Getter_1; }
	inline void set_m_Getter_1(Getter_t62C0F568D070F10C58E309AFD8DE3B95F7DACA0B * value)
	{
		___m_Getter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Getter_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Setter_2() { return static_cast<int32_t>(offsetof(Property_2_t8CB18E68A01C87235E911D649F2E3EAA9EE0135D, ___m_Setter_2)); }
	inline Setter_t8014706C5EC0DB02979C3FE3A38736AC8FDCB46A * get_m_Setter_2() const { return ___m_Setter_2; }
	inline Setter_t8014706C5EC0DB02979C3FE3A38736AC8FDCB46A ** get_address_of_m_Setter_2() { return &___m_Setter_2; }
	inline void set_m_Setter_2(Setter_t8014706C5EC0DB02979C3FE3A38736AC8FDCB46A * value)
	{
		___m_Setter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Setter_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAttributesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Property_2_t8CB18E68A01C87235E911D649F2E3EAA9EE0135D, ___U3CAttributesU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CAttributesU3Ek__BackingField_3() const { return ___U3CAttributesU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CAttributesU3Ek__BackingField_3() { return &___U3CAttributesU3Ek__BackingField_3; }
	inline void set_U3CAttributesU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CAttributesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttributesU3Ek__BackingField_3), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Rendering.FrozenRenderSceneTag,Unity.Entities.Hash128>
struct  Property_2_t80CBF738F7F4C64E16BF4EE5CFE9C6F39EAA6C38 
{
public:
	// System.String Unity.Properties.Property`2::m_Name
	String_t* ___m_Name_0;
	// Unity.Properties.Property`2_Getter<TContainer,TValue> Unity.Properties.Property`2::m_Getter
	Getter_tB8243F4E10FB8F6608F57AA44F3B8C270DED4CC0 * ___m_Getter_1;
	// Unity.Properties.Property`2_Setter<TContainer,TValue> Unity.Properties.Property`2::m_Setter
	Setter_t045CE404700BCAAB1DB45170A40642268FA73DF0 * ___m_Setter_2;
	// Unity.Properties.IPropertyAttributeCollection Unity.Properties.Property`2::<Attributes>k__BackingField
	RuntimeObject* ___U3CAttributesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(Property_2_t80CBF738F7F4C64E16BF4EE5CFE9C6F39EAA6C38, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Getter_1() { return static_cast<int32_t>(offsetof(Property_2_t80CBF738F7F4C64E16BF4EE5CFE9C6F39EAA6C38, ___m_Getter_1)); }
	inline Getter_tB8243F4E10FB8F6608F57AA44F3B8C270DED4CC0 * get_m_Getter_1() const { return ___m_Getter_1; }
	inline Getter_tB8243F4E10FB8F6608F57AA44F3B8C270DED4CC0 ** get_address_of_m_Getter_1() { return &___m_Getter_1; }
	inline void set_m_Getter_1(Getter_tB8243F4E10FB8F6608F57AA44F3B8C270DED4CC0 * value)
	{
		___m_Getter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Getter_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Setter_2() { return static_cast<int32_t>(offsetof(Property_2_t80CBF738F7F4C64E16BF4EE5CFE9C6F39EAA6C38, ___m_Setter_2)); }
	inline Setter_t045CE404700BCAAB1DB45170A40642268FA73DF0 * get_m_Setter_2() const { return ___m_Setter_2; }
	inline Setter_t045CE404700BCAAB1DB45170A40642268FA73DF0 ** get_address_of_m_Setter_2() { return &___m_Setter_2; }
	inline void set_m_Setter_2(Setter_t045CE404700BCAAB1DB45170A40642268FA73DF0 * value)
	{
		___m_Setter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Setter_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAttributesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Property_2_t80CBF738F7F4C64E16BF4EE5CFE9C6F39EAA6C38, ___U3CAttributesU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CAttributesU3Ek__BackingField_3() const { return ___U3CAttributesU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CAttributesU3Ek__BackingField_3() { return &___U3CAttributesU3Ek__BackingField_3; }
	inline void set_U3CAttributesU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CAttributesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttributesU3Ek__BackingField_3), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Rendering.RenderMesh,System.Boolean>
struct  Property_2_tA9D8E694416FEE343DBB5B5DF1F37D5112FA0DA2 
{
public:
	// System.String Unity.Properties.Property`2::m_Name
	String_t* ___m_Name_0;
	// Unity.Properties.Property`2_Getter<TContainer,TValue> Unity.Properties.Property`2::m_Getter
	Getter_t022BDB886FD28EDE4397480A78C1B09CA2A8A756 * ___m_Getter_1;
	// Unity.Properties.Property`2_Setter<TContainer,TValue> Unity.Properties.Property`2::m_Setter
	Setter_t8B9CA9FC37248CBD10EB53A2DB3D8D7E4066F385 * ___m_Setter_2;
	// Unity.Properties.IPropertyAttributeCollection Unity.Properties.Property`2::<Attributes>k__BackingField
	RuntimeObject* ___U3CAttributesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(Property_2_tA9D8E694416FEE343DBB5B5DF1F37D5112FA0DA2, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Getter_1() { return static_cast<int32_t>(offsetof(Property_2_tA9D8E694416FEE343DBB5B5DF1F37D5112FA0DA2, ___m_Getter_1)); }
	inline Getter_t022BDB886FD28EDE4397480A78C1B09CA2A8A756 * get_m_Getter_1() const { return ___m_Getter_1; }
	inline Getter_t022BDB886FD28EDE4397480A78C1B09CA2A8A756 ** get_address_of_m_Getter_1() { return &___m_Getter_1; }
	inline void set_m_Getter_1(Getter_t022BDB886FD28EDE4397480A78C1B09CA2A8A756 * value)
	{
		___m_Getter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Getter_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Setter_2() { return static_cast<int32_t>(offsetof(Property_2_tA9D8E694416FEE343DBB5B5DF1F37D5112FA0DA2, ___m_Setter_2)); }
	inline Setter_t8B9CA9FC37248CBD10EB53A2DB3D8D7E4066F385 * get_m_Setter_2() const { return ___m_Setter_2; }
	inline Setter_t8B9CA9FC37248CBD10EB53A2DB3D8D7E4066F385 ** get_address_of_m_Setter_2() { return &___m_Setter_2; }
	inline void set_m_Setter_2(Setter_t8B9CA9FC37248CBD10EB53A2DB3D8D7E4066F385 * value)
	{
		___m_Setter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Setter_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAttributesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Property_2_tA9D8E694416FEE343DBB5B5DF1F37D5112FA0DA2, ___U3CAttributesU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CAttributesU3Ek__BackingField_3() const { return ___U3CAttributesU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CAttributesU3Ek__BackingField_3() { return &___U3CAttributesU3Ek__BackingField_3; }
	inline void set_U3CAttributesU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CAttributesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttributesU3Ek__BackingField_3), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Rendering.RenderMesh,System.Int32>
struct  Property_2_t0CA9A192739FFCFDD13DA7DD9701053AF33E70E3 
{
public:
	// System.String Unity.Properties.Property`2::m_Name
	String_t* ___m_Name_0;
	// Unity.Properties.Property`2_Getter<TContainer,TValue> Unity.Properties.Property`2::m_Getter
	Getter_tE2DC4F3BF3A09774C0F4119EB58580BDF811F7C4 * ___m_Getter_1;
	// Unity.Properties.Property`2_Setter<TContainer,TValue> Unity.Properties.Property`2::m_Setter
	Setter_tEC2EA5E8BDAA2726FD66862A8E976CEAB12A3A55 * ___m_Setter_2;
	// Unity.Properties.IPropertyAttributeCollection Unity.Properties.Property`2::<Attributes>k__BackingField
	RuntimeObject* ___U3CAttributesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(Property_2_t0CA9A192739FFCFDD13DA7DD9701053AF33E70E3, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Getter_1() { return static_cast<int32_t>(offsetof(Property_2_t0CA9A192739FFCFDD13DA7DD9701053AF33E70E3, ___m_Getter_1)); }
	inline Getter_tE2DC4F3BF3A09774C0F4119EB58580BDF811F7C4 * get_m_Getter_1() const { return ___m_Getter_1; }
	inline Getter_tE2DC4F3BF3A09774C0F4119EB58580BDF811F7C4 ** get_address_of_m_Getter_1() { return &___m_Getter_1; }
	inline void set_m_Getter_1(Getter_tE2DC4F3BF3A09774C0F4119EB58580BDF811F7C4 * value)
	{
		___m_Getter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Getter_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Setter_2() { return static_cast<int32_t>(offsetof(Property_2_t0CA9A192739FFCFDD13DA7DD9701053AF33E70E3, ___m_Setter_2)); }
	inline Setter_tEC2EA5E8BDAA2726FD66862A8E976CEAB12A3A55 * get_m_Setter_2() const { return ___m_Setter_2; }
	inline Setter_tEC2EA5E8BDAA2726FD66862A8E976CEAB12A3A55 ** get_address_of_m_Setter_2() { return &___m_Setter_2; }
	inline void set_m_Setter_2(Setter_tEC2EA5E8BDAA2726FD66862A8E976CEAB12A3A55 * value)
	{
		___m_Setter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Setter_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAttributesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Property_2_t0CA9A192739FFCFDD13DA7DD9701053AF33E70E3, ___U3CAttributesU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CAttributesU3Ek__BackingField_3() const { return ___U3CAttributesU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CAttributesU3Ek__BackingField_3() { return &___U3CAttributesU3Ek__BackingField_3; }
	inline void set_U3CAttributesU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CAttributesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttributesU3Ek__BackingField_3), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Rendering.RenderMesh,System.Int32Enum>
struct  Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF 
{
public:
	// System.String Unity.Properties.Property`2::m_Name
	String_t* ___m_Name_0;
	// Unity.Properties.Property`2_Getter<TContainer,TValue> Unity.Properties.Property`2::m_Getter
	Getter_t67AB7DBB79A3B58DA9831AE866B9CD7E05895A39 * ___m_Getter_1;
	// Unity.Properties.Property`2_Setter<TContainer,TValue> Unity.Properties.Property`2::m_Setter
	Setter_t495D67A68FFA624C6C6D955A4EC28CE1B2867C54 * ___m_Setter_2;
	// Unity.Properties.IPropertyAttributeCollection Unity.Properties.Property`2::<Attributes>k__BackingField
	RuntimeObject* ___U3CAttributesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Getter_1() { return static_cast<int32_t>(offsetof(Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF, ___m_Getter_1)); }
	inline Getter_t67AB7DBB79A3B58DA9831AE866B9CD7E05895A39 * get_m_Getter_1() const { return ___m_Getter_1; }
	inline Getter_t67AB7DBB79A3B58DA9831AE866B9CD7E05895A39 ** get_address_of_m_Getter_1() { return &___m_Getter_1; }
	inline void set_m_Getter_1(Getter_t67AB7DBB79A3B58DA9831AE866B9CD7E05895A39 * value)
	{
		___m_Getter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Getter_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Setter_2() { return static_cast<int32_t>(offsetof(Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF, ___m_Setter_2)); }
	inline Setter_t495D67A68FFA624C6C6D955A4EC28CE1B2867C54 * get_m_Setter_2() const { return ___m_Setter_2; }
	inline Setter_t495D67A68FFA624C6C6D955A4EC28CE1B2867C54 ** get_address_of_m_Setter_2() { return &___m_Setter_2; }
	inline void set_m_Setter_2(Setter_t495D67A68FFA624C6C6D955A4EC28CE1B2867C54 * value)
	{
		___m_Setter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Setter_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAttributesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF, ___U3CAttributesU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CAttributesU3Ek__BackingField_3() const { return ___U3CAttributesU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CAttributesU3Ek__BackingField_3() { return &___U3CAttributesU3Ek__BackingField_3; }
	inline void set_U3CAttributesU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CAttributesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttributesU3Ek__BackingField_3), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Rendering.RenderMesh,System.Object>
struct  Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894 
{
public:
	// System.String Unity.Properties.Property`2::m_Name
	String_t* ___m_Name_0;
	// Unity.Properties.Property`2_Getter<TContainer,TValue> Unity.Properties.Property`2::m_Getter
	Getter_t8C147AC89CE2CA2CD05FA428549B531CB4BF52BB * ___m_Getter_1;
	// Unity.Properties.Property`2_Setter<TContainer,TValue> Unity.Properties.Property`2::m_Setter
	Setter_t8974F521FBDEEC5C8FF05C09C09F124FD232439F * ___m_Setter_2;
	// Unity.Properties.IPropertyAttributeCollection Unity.Properties.Property`2::<Attributes>k__BackingField
	RuntimeObject* ___U3CAttributesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Getter_1() { return static_cast<int32_t>(offsetof(Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894, ___m_Getter_1)); }
	inline Getter_t8C147AC89CE2CA2CD05FA428549B531CB4BF52BB * get_m_Getter_1() const { return ___m_Getter_1; }
	inline Getter_t8C147AC89CE2CA2CD05FA428549B531CB4BF52BB ** get_address_of_m_Getter_1() { return &___m_Getter_1; }
	inline void set_m_Getter_1(Getter_t8C147AC89CE2CA2CD05FA428549B531CB4BF52BB * value)
	{
		___m_Getter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Getter_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Setter_2() { return static_cast<int32_t>(offsetof(Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894, ___m_Setter_2)); }
	inline Setter_t8974F521FBDEEC5C8FF05C09C09F124FD232439F * get_m_Setter_2() const { return ___m_Setter_2; }
	inline Setter_t8974F521FBDEEC5C8FF05C09C09F124FD232439F ** get_address_of_m_Setter_2() { return &___m_Setter_2; }
	inline void set_m_Setter_2(Setter_t8974F521FBDEEC5C8FF05C09C09F124FD232439F * value)
	{
		___m_Setter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Setter_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAttributesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894, ___U3CAttributesU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CAttributesU3Ek__BackingField_3() const { return ___U3CAttributesU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CAttributesU3Ek__BackingField_3() { return &___U3CAttributesU3Ek__BackingField_3; }
	inline void set_U3CAttributesU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CAttributesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttributesU3Ek__BackingField_3), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Scenes.SceneSectionBundle,System.Object>
struct  Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7 
{
public:
	// System.String Unity.Properties.Property`2::m_Name
	String_t* ___m_Name_0;
	// Unity.Properties.Property`2_Getter<TContainer,TValue> Unity.Properties.Property`2::m_Getter
	Getter_tD1D77D80998E324054392785472D61232448E58C * ___m_Getter_1;
	// Unity.Properties.Property`2_Setter<TContainer,TValue> Unity.Properties.Property`2::m_Setter
	Setter_t7295A970B23C6DD55916E3D632AE4AFAADEDCF36 * ___m_Setter_2;
	// Unity.Properties.IPropertyAttributeCollection Unity.Properties.Property`2::<Attributes>k__BackingField
	RuntimeObject* ___U3CAttributesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Getter_1() { return static_cast<int32_t>(offsetof(Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7, ___m_Getter_1)); }
	inline Getter_tD1D77D80998E324054392785472D61232448E58C * get_m_Getter_1() const { return ___m_Getter_1; }
	inline Getter_tD1D77D80998E324054392785472D61232448E58C ** get_address_of_m_Getter_1() { return &___m_Getter_1; }
	inline void set_m_Getter_1(Getter_tD1D77D80998E324054392785472D61232448E58C * value)
	{
		___m_Getter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Getter_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Setter_2() { return static_cast<int32_t>(offsetof(Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7, ___m_Setter_2)); }
	inline Setter_t7295A970B23C6DD55916E3D632AE4AFAADEDCF36 * get_m_Setter_2() const { return ___m_Setter_2; }
	inline Setter_t7295A970B23C6DD55916E3D632AE4AFAADEDCF36 ** get_address_of_m_Setter_2() { return &___m_Setter_2; }
	inline void set_m_Setter_2(Setter_t7295A970B23C6DD55916E3D632AE4AFAADEDCF36 * value)
	{
		___m_Setter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Setter_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAttributesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7, ___U3CAttributesU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CAttributesU3Ek__BackingField_3() const { return ___U3CAttributesU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CAttributesU3Ek__BackingField_3() { return &___U3CAttributesU3Ek__BackingField_3; }
	inline void set_U3CAttributesU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CAttributesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttributesU3Ek__BackingField_3), (void*)value);
	}
};


// Unity.Scenes.SceneSectionBundle
struct  SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 
{
public:
	// System.Int32 Unity.Scenes.SceneSectionBundle::RefCount
	int32_t ___RefCount_0;
	// UnityEngine.AssetBundle Unity.Scenes.SceneSectionBundle::Bundle
	AssetBundle_tCE287BAB693894C3991CDD308B92A8C9C4BD4C78 * ___Bundle_1;

public:
	inline static int32_t get_offset_of_RefCount_0() { return static_cast<int32_t>(offsetof(SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7, ___RefCount_0)); }
	inline int32_t get_RefCount_0() const { return ___RefCount_0; }
	inline int32_t* get_address_of_RefCount_0() { return &___RefCount_0; }
	inline void set_RefCount_0(int32_t value)
	{
		___RefCount_0 = value;
	}

	inline static int32_t get_offset_of_Bundle_1() { return static_cast<int32_t>(offsetof(SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7, ___Bundle_1)); }
	inline AssetBundle_tCE287BAB693894C3991CDD308B92A8C9C4BD4C78 * get_Bundle_1() const { return ___Bundle_1; }
	inline AssetBundle_tCE287BAB693894C3991CDD308B92A8C9C4BD4C78 ** get_address_of_Bundle_1() { return &___Bundle_1; }
	inline void set_Bundle_1(AssetBundle_tCE287BAB693894C3991CDD308B92A8C9C4BD4C78 * value)
	{
		___Bundle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Bundle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Scenes.SceneSectionBundle
struct SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7_marshaled_pinvoke
{
	int32_t ___RefCount_0;
	AssetBundle_tCE287BAB693894C3991CDD308B92A8C9C4BD4C78 * ___Bundle_1;
};
// Native definition for COM marshalling of Unity.Scenes.SceneSectionBundle
struct SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7_marshaled_com
{
	int32_t ___RefCount_0;
	AssetBundle_tCE287BAB693894C3991CDD308B92A8C9C4BD4C78 * ___Bundle_1;
};

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Entities.Hash128
struct  Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F 
{
public:
	// Unity.Mathematics.uint4 Unity.Entities.Hash128::Value
	uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F, ___Value_0)); }
	inline uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  get_Value_0() const { return ___Value_0; }
	inline uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  value)
	{
		___Value_0 = value;
	}
};

struct Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_StaticFields
{
public:
	// System.Char[] Unity.Entities.Hash128::k_HexToLiteral
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___k_HexToLiteral_1;
	// System.SByte[] Unity.Entities.Hash128::k_LiteralToHex
	SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* ___k_LiteralToHex_2;

public:
	inline static int32_t get_offset_of_k_HexToLiteral_1() { return static_cast<int32_t>(offsetof(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_StaticFields, ___k_HexToLiteral_1)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_k_HexToLiteral_1() const { return ___k_HexToLiteral_1; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_k_HexToLiteral_1() { return &___k_HexToLiteral_1; }
	inline void set_k_HexToLiteral_1(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___k_HexToLiteral_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_HexToLiteral_1), (void*)value);
	}

	inline static int32_t get_offset_of_k_LiteralToHex_2() { return static_cast<int32_t>(offsetof(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_StaticFields, ___k_LiteralToHex_2)); }
	inline SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* get_k_LiteralToHex_2() const { return ___k_LiteralToHex_2; }
	inline SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889** get_address_of_k_LiteralToHex_2() { return &___k_LiteralToHex_2; }
	inline void set_k_LiteralToHex_2(SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* value)
	{
		___k_LiteralToHex_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_LiteralToHex_2), (void*)value);
	}
};


// Unity.Entities.SceneTag
struct  SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 
{
public:
	// Unity.Entities.Entity Unity.Entities.SceneTag::SceneEntity
	Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  ___SceneEntity_0;

public:
	inline static int32_t get_offset_of_SceneEntity_0() { return static_cast<int32_t>(offsetof(SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04, ___SceneEntity_0)); }
	inline Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  get_SceneEntity_0() const { return ___SceneEntity_0; }
	inline Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * get_address_of_SceneEntity_0() { return &___SceneEntity_0; }
	inline void set_SceneEntity_0(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  value)
	{
		___SceneEntity_0 = value;
	}
};


// Unity.Physics.Authoring.PhysicsShapeExtensions
struct  PhysicsShapeExtensions_t2F844C0EB62854D12582AD6F34668C21A0ECB11C  : public RuntimeObject
{
public:

public:
};

struct PhysicsShapeExtensions_t2F844C0EB62854D12582AD6F34668C21A0ECB11C_StaticFields
{
public:
	// System.Int32[] Unity.Physics.Authoring.PhysicsShapeExtensions::k_NextAxis
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___k_NextAxis_1;
	// System.Int32[] Unity.Physics.Authoring.PhysicsShapeExtensions::k_PrevAxis
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___k_PrevAxis_2;
	// Unity.Mathematics.int3 Unity.Physics.Authoring.PhysicsShapeExtensions::k_DefaultAxisPriority
	int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F  ___k_DefaultAxisPriority_3;

public:
	inline static int32_t get_offset_of_k_NextAxis_1() { return static_cast<int32_t>(offsetof(PhysicsShapeExtensions_t2F844C0EB62854D12582AD6F34668C21A0ECB11C_StaticFields, ___k_NextAxis_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_k_NextAxis_1() const { return ___k_NextAxis_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_k_NextAxis_1() { return &___k_NextAxis_1; }
	inline void set_k_NextAxis_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___k_NextAxis_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_NextAxis_1), (void*)value);
	}

	inline static int32_t get_offset_of_k_PrevAxis_2() { return static_cast<int32_t>(offsetof(PhysicsShapeExtensions_t2F844C0EB62854D12582AD6F34668C21A0ECB11C_StaticFields, ___k_PrevAxis_2)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_k_PrevAxis_2() const { return ___k_PrevAxis_2; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_k_PrevAxis_2() { return &___k_PrevAxis_2; }
	inline void set_k_PrevAxis_2(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___k_PrevAxis_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_PrevAxis_2), (void*)value);
	}

	inline static int32_t get_offset_of_k_DefaultAxisPriority_3() { return static_cast<int32_t>(offsetof(PhysicsShapeExtensions_t2F844C0EB62854D12582AD6F34668C21A0ECB11C_StaticFields, ___k_DefaultAxisPriority_3)); }
	inline int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F  get_k_DefaultAxisPriority_3() const { return ___k_DefaultAxisPriority_3; }
	inline int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F * get_address_of_k_DefaultAxisPriority_3() { return &___k_DefaultAxisPriority_3; }
	inline void set_k_DefaultAxisPriority_3(int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F  value)
	{
		___k_DefaultAxisPriority_3 = value;
	}
};


// Unity.Properties.VisitStatus
struct  VisitStatus_tB90B24DF1B51ED4E0AA3B38C9CDE222254ECC8BE 
{
public:
	// System.Int32 Unity.Properties.VisitStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VisitStatus_tB90B24DF1B51ED4E0AA3B38C9CDE222254ECC8BE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Rendering.ShadowCastingMode
struct  ShadowCastingMode_t699023357D66025632B533A17D0FB1E4548141FF 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowCastingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowCastingMode_t699023357D66025632B533A17D0FB1E4548141FF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// Unity.Entities.SceneSection
struct  SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E 
{
public:
	// Unity.Entities.Hash128 Unity.Entities.SceneSection::SceneGUID
	Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  ___SceneGUID_0;
	// System.Int32 Unity.Entities.SceneSection::Section
	int32_t ___Section_1;

public:
	inline static int32_t get_offset_of_SceneGUID_0() { return static_cast<int32_t>(offsetof(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E, ___SceneGUID_0)); }
	inline Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  get_SceneGUID_0() const { return ___SceneGUID_0; }
	inline Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * get_address_of_SceneGUID_0() { return &___SceneGUID_0; }
	inline void set_SceneGUID_0(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  value)
	{
		___SceneGUID_0 = value;
	}

	inline static int32_t get_offset_of_Section_1() { return static_cast<int32_t>(offsetof(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E, ___Section_1)); }
	inline int32_t get_Section_1() const { return ___Section_1; }
	inline int32_t* get_address_of_Section_1() { return &___Section_1; }
	inline void set_Section_1(int32_t value)
	{
		___Section_1 = value;
	}
};


// Unity.Rendering.FrozenRenderSceneTag
struct  FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A 
{
public:
	// Unity.Entities.Hash128 Unity.Rendering.FrozenRenderSceneTag::SceneGUID
	Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  ___SceneGUID_0;
	// System.Int32 Unity.Rendering.FrozenRenderSceneTag::SectionIndex
	int32_t ___SectionIndex_1;
	// System.Int32 Unity.Rendering.FrozenRenderSceneTag::HasStreamedLOD
	int32_t ___HasStreamedLOD_2;

public:
	inline static int32_t get_offset_of_SceneGUID_0() { return static_cast<int32_t>(offsetof(FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A, ___SceneGUID_0)); }
	inline Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  get_SceneGUID_0() const { return ___SceneGUID_0; }
	inline Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * get_address_of_SceneGUID_0() { return &___SceneGUID_0; }
	inline void set_SceneGUID_0(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  value)
	{
		___SceneGUID_0 = value;
	}

	inline static int32_t get_offset_of_SectionIndex_1() { return static_cast<int32_t>(offsetof(FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A, ___SectionIndex_1)); }
	inline int32_t get_SectionIndex_1() const { return ___SectionIndex_1; }
	inline int32_t* get_address_of_SectionIndex_1() { return &___SectionIndex_1; }
	inline void set_SectionIndex_1(int32_t value)
	{
		___SectionIndex_1 = value;
	}

	inline static int32_t get_offset_of_HasStreamedLOD_2() { return static_cast<int32_t>(offsetof(FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A, ___HasStreamedLOD_2)); }
	inline int32_t get_HasStreamedLOD_2() const { return ___HasStreamedLOD_2; }
	inline int32_t* get_address_of_HasStreamedLOD_2() { return &___HasStreamedLOD_2; }
	inline void set_HasStreamedLOD_2(int32_t value)
	{
		___HasStreamedLOD_2 = value;
	}
};


// Unity.Rendering.RenderMesh
struct  RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 
{
public:
	// UnityEngine.Mesh Unity.Rendering.RenderMesh::mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___mesh_0;
	// UnityEngine.Material Unity.Rendering.RenderMesh::material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_1;
	// System.Int32 Unity.Rendering.RenderMesh::subMesh
	int32_t ___subMesh_2;
	// System.Int32 Unity.Rendering.RenderMesh::layer
	int32_t ___layer_3;
	// UnityEngine.Rendering.ShadowCastingMode Unity.Rendering.RenderMesh::castShadows
	int32_t ___castShadows_4;
	// System.Boolean Unity.Rendering.RenderMesh::receiveShadows
	bool ___receiveShadows_5;

public:
	inline static int32_t get_offset_of_mesh_0() { return static_cast<int32_t>(offsetof(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0, ___mesh_0)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_mesh_0() const { return ___mesh_0; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_mesh_0() { return &___mesh_0; }
	inline void set_mesh_0(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___mesh_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_0), (void*)value);
	}

	inline static int32_t get_offset_of_material_1() { return static_cast<int32_t>(offsetof(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0, ___material_1)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_material_1() const { return ___material_1; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_material_1() { return &___material_1; }
	inline void set_material_1(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___material_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_1), (void*)value);
	}

	inline static int32_t get_offset_of_subMesh_2() { return static_cast<int32_t>(offsetof(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0, ___subMesh_2)); }
	inline int32_t get_subMesh_2() const { return ___subMesh_2; }
	inline int32_t* get_address_of_subMesh_2() { return &___subMesh_2; }
	inline void set_subMesh_2(int32_t value)
	{
		___subMesh_2 = value;
	}

	inline static int32_t get_offset_of_layer_3() { return static_cast<int32_t>(offsetof(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0, ___layer_3)); }
	inline int32_t get_layer_3() const { return ___layer_3; }
	inline int32_t* get_address_of_layer_3() { return &___layer_3; }
	inline void set_layer_3(int32_t value)
	{
		___layer_3 = value;
	}

	inline static int32_t get_offset_of_castShadows_4() { return static_cast<int32_t>(offsetof(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0, ___castShadows_4)); }
	inline int32_t get_castShadows_4() const { return ___castShadows_4; }
	inline int32_t* get_address_of_castShadows_4() { return &___castShadows_4; }
	inline void set_castShadows_4(int32_t value)
	{
		___castShadows_4 = value;
	}

	inline static int32_t get_offset_of_receiveShadows_5() { return static_cast<int32_t>(offsetof(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0, ___receiveShadows_5)); }
	inline bool get_receiveShadows_5() const { return ___receiveShadows_5; }
	inline bool* get_address_of_receiveShadows_5() { return &___receiveShadows_5; }
	inline void set_receiveShadows_5(bool value)
	{
		___receiveShadows_5 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Rendering.RenderMesh
struct RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0_marshaled_pinvoke
{
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___mesh_0;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_1;
	int32_t ___subMesh_2;
	int32_t ___layer_3;
	int32_t ___castShadows_4;
	int32_t ___receiveShadows_5;
};
// Native definition for COM marshalling of Unity.Rendering.RenderMesh
struct RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0_marshaled_com
{
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___mesh_0;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_1;
	int32_t ___subMesh_2;
	int32_t ___layer_3;
	int32_t ___castShadows_4;
	int32_t ___receiveShadows_5;
};

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<System.Object>
struct  EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);

// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Collider::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_enabled_mED644D98C6AC2DF95BD86145E8D31AD7081C76EB (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents::GetEventChain(UnityEngine.GameObject,System.Collections.Generic.IList`1<UnityEngine.Transform>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteEvents_GetEventChain_m27DBBF6D0FE769C131AB96781E9BFFEDA545F155 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, RuntimeObject* ___eventChain1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_inline (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * (*) (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_inline (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
// Unity.Properties.VisitStatus Unity.Properties.PropertyVisitorAdapterExtensions::TryVisitContainer<Unity.Properties.Property`2<Unity.Rendering.RenderMesh,System.Int32Enum>,Unity.Rendering.RenderMesh,System.Int32Enum>(Unity.Properties.IPropertyVisitorAdapter,Unity.Properties.IPropertyVisitor,TProperty,TContainer&,TValue&,Unity.Properties.ChangeTracker&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisitContainer_TisProperty_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF_TisRenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m61CF202304107D29EBE8AD30B04B23E9D4C07380_gshared (RuntimeObject* ___self0, RuntimeObject* ___visitor1, Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF  ___property2, RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * ___container3, int32_t* ___value4, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * ___changeTracker5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisitContainer_TisProperty_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF_TisRenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m61CF202304107D29EBE8AD30B04B23E9D4C07380_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	{
		// if (self is IVisitAdapter<TContainer, TValue> visitAdapterTypedContainerValue)
		RuntimeObject* L_0 = ___self0;
		RuntimeObject* L_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_1;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_7;
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		// if ((status = visitAdapterTypedContainerValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_3 = V_1;
		RuntimeObject* L_4 = ___visitor1;
		Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF  L_5 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_6 = ___container3;
		int32_t* L_7 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_8 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_9 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, int32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_3, (RuntimeObject*)L_4, (Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF )L_5, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_6, (int32_t*)(int32_t*)L_7, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_8);
		int32_t L_10 = (int32_t)L_9;
		V_0 = (int32_t)L_10;
		V_8 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		bool L_11 = V_8;
		if (!L_11)
		{
			goto IL_0034;
		}
	}
	{
		// return status;
		int32_t L_12 = V_0;
		V_9 = (int32_t)L_12;
		goto IL_01d5;
	}

IL_0034:
	{
	}

IL_0035:
	{
		// if (self is IVisitAdapter<TValue> visitAdapterTypedValue)
		RuntimeObject* L_13 = ___self0;
		RuntimeObject* L_14 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_2 = (RuntimeObject*)L_14;
		V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_10;
		if (!L_15)
		{
			goto IL_0069;
		}
	}
	{
		// if ((status = visitAdapterTypedValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_16 = V_2;
		RuntimeObject* L_17 = ___visitor1;
		Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF  L_18 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_19 = ___container3;
		int32_t* L_20 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_21 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_16);
		int32_t L_22 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, int32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3), (RuntimeObject*)L_16, (RuntimeObject*)L_17, (Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF )L_18, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_19, (int32_t*)(int32_t*)L_20, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_21);
		int32_t L_23 = (int32_t)L_22;
		V_0 = (int32_t)L_23;
		V_11 = (bool)((!(((uint32_t)L_23) <= ((uint32_t)0)))? 1 : 0);
		bool L_24 = V_11;
		if (!L_24)
		{
			goto IL_0068;
		}
	}
	{
		// return status;
		int32_t L_25 = V_0;
		V_9 = (int32_t)L_25;
		goto IL_01d5;
	}

IL_0068:
	{
	}

IL_0069:
	{
		// if (self is IVisitContainerAdapter<TContainer, TValue> visitContainerAdapterTypedContainerValue)
		RuntimeObject* L_26 = ___self0;
		RuntimeObject* L_27 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_26, IL2CPP_RGCTX_DATA(method->rgctx_data, 4)));
		V_3 = (RuntimeObject*)L_27;
		V_12 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_27) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_28 = V_12;
		if (!L_28)
		{
			goto IL_00c2;
		}
	}
	{
		// if ((status = visitContainerAdapterTypedContainerValue.BeginContainer(visitor, property, ref container, ref value, ref changeTracker)) == VisitStatus.Handled)
		RuntimeObject* L_29 = V_3;
		RuntimeObject* L_30 = ___visitor1;
		Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF  L_31 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_32 = ___container3;
		int32_t* L_33 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_34 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_29);
		int32_t L_35 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, int32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5), (RuntimeObject*)L_29, (RuntimeObject*)L_30, (Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF )L_31, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_32, (int32_t*)(int32_t*)L_33, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_34);
		int32_t L_36 = (int32_t)L_35;
		V_0 = (int32_t)L_36;
		V_13 = (bool)((((int32_t)L_36) == ((int32_t)1))? 1 : 0);
		bool L_37 = V_13;
		if (!L_37)
		{
			goto IL_00a0;
		}
	}
	{
		// PropertyContainer.Visit(ref value, visitor, ref changeTracker);
		int32_t* L_38 = ___value4;
		RuntimeObject* L_39 = ___visitor1;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_40 = ___changeTracker5;
		((  void (*) (int32_t*, RuntimeObject*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((int32_t*)(int32_t*)L_38, (RuntimeObject*)L_39, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_40, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
	}

IL_00a0:
	{
		// visitContainerAdapterTypedContainerValue.EndContainer(visitor, property, ref container, ref value, ref changeTracker);
		RuntimeObject* L_41 = V_3;
		RuntimeObject* L_42 = ___visitor1;
		Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF  L_43 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_44 = ___container3;
		int32_t* L_45 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_46 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_41);
		GenericInterfaceActionInvoker5< RuntimeObject*, Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, int32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_41, (RuntimeObject*)L_42, (Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF )L_43, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_44, (int32_t*)(int32_t*)L_45, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_46);
		// if (status != VisitStatus.Unhandled)
		int32_t L_47 = V_0;
		V_14 = (bool)((!(((uint32_t)L_47) <= ((uint32_t)0)))? 1 : 0);
		bool L_48 = V_14;
		if (!L_48)
		{
			goto IL_00c1;
		}
	}
	{
		// return status;
		int32_t L_49 = V_0;
		V_9 = (int32_t)L_49;
		goto IL_01d5;
	}

IL_00c1:
	{
	}

IL_00c2:
	{
		// if (self is IVisitContainerAdapterC<TContainer> visitContainerAdapterTypedContainer)
		RuntimeObject* L_50 = ___self0;
		RuntimeObject* L_51 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_50, IL2CPP_RGCTX_DATA(method->rgctx_data, 8)));
		V_4 = (RuntimeObject*)L_51;
		V_15 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_51) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_52 = V_15;
		if (!L_52)
		{
			goto IL_011e;
		}
	}
	{
		// if ((status = visitContainerAdapterTypedContainer.BeginContainer(visitor, property, ref container, ref value, ref changeTracker)) == VisitStatus.Handled)
		RuntimeObject* L_53 = V_4;
		RuntimeObject* L_54 = ___visitor1;
		Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF  L_55 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_56 = ___container3;
		int32_t* L_57 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_58 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_53);
		int32_t L_59 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, int32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 9), (RuntimeObject*)L_53, (RuntimeObject*)L_54, (Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF )L_55, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_56, (int32_t*)(int32_t*)L_57, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_58);
		int32_t L_60 = (int32_t)L_59;
		V_0 = (int32_t)L_60;
		V_16 = (bool)((((int32_t)L_60) == ((int32_t)1))? 1 : 0);
		bool L_61 = V_16;
		if (!L_61)
		{
			goto IL_00fb;
		}
	}
	{
		// PropertyContainer.Visit(ref value, visitor, ref changeTracker);
		int32_t* L_62 = ___value4;
		RuntimeObject* L_63 = ___visitor1;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_64 = ___changeTracker5;
		((  void (*) (int32_t*, RuntimeObject*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((int32_t*)(int32_t*)L_62, (RuntimeObject*)L_63, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_64, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
	}

IL_00fb:
	{
		// visitContainerAdapterTypedContainer.EndContainer(visitor, property, ref container, ref value, ref changeTracker);
		RuntimeObject* L_65 = V_4;
		RuntimeObject* L_66 = ___visitor1;
		Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF  L_67 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_68 = ___container3;
		int32_t* L_69 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_70 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_65);
		GenericInterfaceActionInvoker5< RuntimeObject*, Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, int32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 10), (RuntimeObject*)L_65, (RuntimeObject*)L_66, (Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF )L_67, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_68, (int32_t*)(int32_t*)L_69, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_70);
		// if (status != VisitStatus.Unhandled)
		int32_t L_71 = V_0;
		V_17 = (bool)((!(((uint32_t)L_71) <= ((uint32_t)0)))? 1 : 0);
		bool L_72 = V_17;
		if (!L_72)
		{
			goto IL_011d;
		}
	}
	{
		// return status;
		int32_t L_73 = V_0;
		V_9 = (int32_t)L_73;
		goto IL_01d5;
	}

IL_011d:
	{
	}

IL_011e:
	{
		// if (self is IVisitContainerAdapter<TValue> visitContainerAdapterTypedValue)
		RuntimeObject* L_74 = ___self0;
		RuntimeObject* L_75 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_74, IL2CPP_RGCTX_DATA(method->rgctx_data, 11)));
		V_5 = (RuntimeObject*)L_75;
		V_18 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_75) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_76 = V_18;
		if (!L_76)
		{
			goto IL_0177;
		}
	}
	{
		// if ((status = visitContainerAdapterTypedValue.BeginContainer(visitor, property, ref container, ref value, ref changeTracker)) == VisitStatus.Handled)
		RuntimeObject* L_77 = V_5;
		RuntimeObject* L_78 = ___visitor1;
		Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF  L_79 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_80 = ___container3;
		int32_t* L_81 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_82 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_77);
		int32_t L_83 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, int32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 12), (RuntimeObject*)L_77, (RuntimeObject*)L_78, (Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF )L_79, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_80, (int32_t*)(int32_t*)L_81, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_82);
		int32_t L_84 = (int32_t)L_83;
		V_0 = (int32_t)L_84;
		V_19 = (bool)((((int32_t)L_84) == ((int32_t)1))? 1 : 0);
		bool L_85 = V_19;
		if (!L_85)
		{
			goto IL_0157;
		}
	}
	{
		// PropertyContainer.Visit(ref value, visitor, ref changeTracker);
		int32_t* L_86 = ___value4;
		RuntimeObject* L_87 = ___visitor1;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_88 = ___changeTracker5;
		((  void (*) (int32_t*, RuntimeObject*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((int32_t*)(int32_t*)L_86, (RuntimeObject*)L_87, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_88, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
	}

IL_0157:
	{
		// visitContainerAdapterTypedValue.EndContainer(visitor, property, ref container, ref value, ref changeTracker);
		RuntimeObject* L_89 = V_5;
		RuntimeObject* L_90 = ___visitor1;
		Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF  L_91 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_92 = ___container3;
		int32_t* L_93 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_94 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_89);
		GenericInterfaceActionInvoker5< RuntimeObject*, Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, int32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 13), (RuntimeObject*)L_89, (RuntimeObject*)L_90, (Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF )L_91, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_92, (int32_t*)(int32_t*)L_93, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_94);
		// if (status != VisitStatus.Unhandled)
		int32_t L_95 = V_0;
		V_20 = (bool)((!(((uint32_t)L_95) <= ((uint32_t)0)))? 1 : 0);
		bool L_96 = V_20;
		if (!L_96)
		{
			goto IL_0176;
		}
	}
	{
		// return status;
		int32_t L_97 = V_0;
		V_9 = (int32_t)L_97;
		goto IL_01d5;
	}

IL_0176:
	{
	}

IL_0177:
	{
		// if (self is IVisitContainerAdapter visitContainerAdapter)
		RuntimeObject* L_98 = ___self0;
		RuntimeObject* L_99 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_98, IVisitContainerAdapter_t0E2F8D9C78A0E26D9B8D648FE0A2D823D712983D_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_99;
		V_21 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_99) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_100 = V_21;
		if (!L_100)
		{
			goto IL_01d0;
		}
	}
	{
		// if ((status = visitContainerAdapter.BeginContainer(visitor, property, ref container, ref value, ref changeTracker)) == VisitStatus.Handled)
		RuntimeObject* L_101 = V_6;
		RuntimeObject* L_102 = ___visitor1;
		Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF  L_103 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_104 = ___container3;
		int32_t* L_105 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_106 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_101);
		int32_t L_107 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, int32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 14), (RuntimeObject*)L_101, (RuntimeObject*)L_102, (Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF )L_103, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_104, (int32_t*)(int32_t*)L_105, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_106);
		int32_t L_108 = (int32_t)L_107;
		V_0 = (int32_t)L_108;
		V_22 = (bool)((((int32_t)L_108) == ((int32_t)1))? 1 : 0);
		bool L_109 = V_22;
		if (!L_109)
		{
			goto IL_01b0;
		}
	}
	{
		// PropertyContainer.Visit(ref value, visitor, ref changeTracker);
		int32_t* L_110 = ___value4;
		RuntimeObject* L_111 = ___visitor1;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_112 = ___changeTracker5;
		((  void (*) (int32_t*, RuntimeObject*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((int32_t*)(int32_t*)L_110, (RuntimeObject*)L_111, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_112, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
	}

IL_01b0:
	{
		// visitContainerAdapter.EndContainer(visitor, property, ref container, ref value, ref changeTracker);
		RuntimeObject* L_113 = V_6;
		RuntimeObject* L_114 = ___visitor1;
		Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF  L_115 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_116 = ___container3;
		int32_t* L_117 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_118 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_113);
		GenericInterfaceActionInvoker5< RuntimeObject*, Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, int32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 15), (RuntimeObject*)L_113, (RuntimeObject*)L_114, (Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF )L_115, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_116, (int32_t*)(int32_t*)L_117, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_118);
		// if (status != VisitStatus.Unhandled)
		int32_t L_119 = V_0;
		V_23 = (bool)((!(((uint32_t)L_119) <= ((uint32_t)0)))? 1 : 0);
		bool L_120 = V_23;
		if (!L_120)
		{
			goto IL_01cf;
		}
	}
	{
		// return status;
		int32_t L_121 = V_0;
		V_9 = (int32_t)L_121;
		goto IL_01d5;
	}

IL_01cf:
	{
	}

IL_01d0:
	{
		// return VisitStatus.Unhandled;
		V_9 = (int32_t)0;
		goto IL_01d5;
	}

IL_01d5:
	{
		// }
		int32_t L_122 = V_9;
		return L_122;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.PropertyVisitorAdapterExtensions::TryVisitContainer<Unity.Properties.Property`2<Unity.Rendering.RenderMesh,System.Object>,Unity.Rendering.RenderMesh,System.Object>(Unity.Properties.IPropertyVisitorAdapter,Unity.Properties.IPropertyVisitor,TProperty,TContainer&,TValue&,Unity.Properties.ChangeTracker&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisitContainer_TisProperty_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894_TisRenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0_TisRuntimeObject_m6852F41D6C16ACC290C76F321B0E04652B47EDFE_gshared (RuntimeObject* ___self0, RuntimeObject* ___visitor1, Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894  ___property2, RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * ___container3, RuntimeObject ** ___value4, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * ___changeTracker5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisitContainer_TisProperty_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894_TisRenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0_TisRuntimeObject_m6852F41D6C16ACC290C76F321B0E04652B47EDFE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	{
		// if (self is IVisitAdapter<TContainer, TValue> visitAdapterTypedContainerValue)
		RuntimeObject* L_0 = ___self0;
		RuntimeObject* L_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_1;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_7;
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		// if ((status = visitAdapterTypedContainerValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_3 = V_1;
		RuntimeObject* L_4 = ___visitor1;
		Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894  L_5 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_6 = ___container3;
		RuntimeObject ** L_7 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_8 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_9 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894 , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_3, (RuntimeObject*)L_4, (Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894 )L_5, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_6, (RuntimeObject **)(RuntimeObject **)L_7, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_8);
		int32_t L_10 = (int32_t)L_9;
		V_0 = (int32_t)L_10;
		V_8 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		bool L_11 = V_8;
		if (!L_11)
		{
			goto IL_0034;
		}
	}
	{
		// return status;
		int32_t L_12 = V_0;
		V_9 = (int32_t)L_12;
		goto IL_01d5;
	}

IL_0034:
	{
	}

IL_0035:
	{
		// if (self is IVisitAdapter<TValue> visitAdapterTypedValue)
		RuntimeObject* L_13 = ___self0;
		RuntimeObject* L_14 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_2 = (RuntimeObject*)L_14;
		V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_10;
		if (!L_15)
		{
			goto IL_0069;
		}
	}
	{
		// if ((status = visitAdapterTypedValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_16 = V_2;
		RuntimeObject* L_17 = ___visitor1;
		Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894  L_18 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_19 = ___container3;
		RuntimeObject ** L_20 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_21 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_16);
		int32_t L_22 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894 , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3), (RuntimeObject*)L_16, (RuntimeObject*)L_17, (Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894 )L_18, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_19, (RuntimeObject **)(RuntimeObject **)L_20, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_21);
		int32_t L_23 = (int32_t)L_22;
		V_0 = (int32_t)L_23;
		V_11 = (bool)((!(((uint32_t)L_23) <= ((uint32_t)0)))? 1 : 0);
		bool L_24 = V_11;
		if (!L_24)
		{
			goto IL_0068;
		}
	}
	{
		// return status;
		int32_t L_25 = V_0;
		V_9 = (int32_t)L_25;
		goto IL_01d5;
	}

IL_0068:
	{
	}

IL_0069:
	{
		// if (self is IVisitContainerAdapter<TContainer, TValue> visitContainerAdapterTypedContainerValue)
		RuntimeObject* L_26 = ___self0;
		RuntimeObject* L_27 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_26, IL2CPP_RGCTX_DATA(method->rgctx_data, 4)));
		V_3 = (RuntimeObject*)L_27;
		V_12 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_27) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_28 = V_12;
		if (!L_28)
		{
			goto IL_00c2;
		}
	}
	{
		// if ((status = visitContainerAdapterTypedContainerValue.BeginContainer(visitor, property, ref container, ref value, ref changeTracker)) == VisitStatus.Handled)
		RuntimeObject* L_29 = V_3;
		RuntimeObject* L_30 = ___visitor1;
		Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894  L_31 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_32 = ___container3;
		RuntimeObject ** L_33 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_34 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_29);
		int32_t L_35 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894 , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5), (RuntimeObject*)L_29, (RuntimeObject*)L_30, (Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894 )L_31, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_32, (RuntimeObject **)(RuntimeObject **)L_33, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_34);
		int32_t L_36 = (int32_t)L_35;
		V_0 = (int32_t)L_36;
		V_13 = (bool)((((int32_t)L_36) == ((int32_t)1))? 1 : 0);
		bool L_37 = V_13;
		if (!L_37)
		{
			goto IL_00a0;
		}
	}
	{
		// PropertyContainer.Visit(ref value, visitor, ref changeTracker);
		RuntimeObject ** L_38 = ___value4;
		RuntimeObject* L_39 = ___visitor1;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_40 = ___changeTracker5;
		((  void (*) (RuntimeObject **, RuntimeObject*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((RuntimeObject **)(RuntimeObject **)L_38, (RuntimeObject*)L_39, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_40, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
	}

IL_00a0:
	{
		// visitContainerAdapterTypedContainerValue.EndContainer(visitor, property, ref container, ref value, ref changeTracker);
		RuntimeObject* L_41 = V_3;
		RuntimeObject* L_42 = ___visitor1;
		Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894  L_43 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_44 = ___container3;
		RuntimeObject ** L_45 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_46 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_41);
		GenericInterfaceActionInvoker5< RuntimeObject*, Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894 , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_41, (RuntimeObject*)L_42, (Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894 )L_43, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_44, (RuntimeObject **)(RuntimeObject **)L_45, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_46);
		// if (status != VisitStatus.Unhandled)
		int32_t L_47 = V_0;
		V_14 = (bool)((!(((uint32_t)L_47) <= ((uint32_t)0)))? 1 : 0);
		bool L_48 = V_14;
		if (!L_48)
		{
			goto IL_00c1;
		}
	}
	{
		// return status;
		int32_t L_49 = V_0;
		V_9 = (int32_t)L_49;
		goto IL_01d5;
	}

IL_00c1:
	{
	}

IL_00c2:
	{
		// if (self is IVisitContainerAdapterC<TContainer> visitContainerAdapterTypedContainer)
		RuntimeObject* L_50 = ___self0;
		RuntimeObject* L_51 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_50, IL2CPP_RGCTX_DATA(method->rgctx_data, 8)));
		V_4 = (RuntimeObject*)L_51;
		V_15 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_51) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_52 = V_15;
		if (!L_52)
		{
			goto IL_011e;
		}
	}
	{
		// if ((status = visitContainerAdapterTypedContainer.BeginContainer(visitor, property, ref container, ref value, ref changeTracker)) == VisitStatus.Handled)
		RuntimeObject* L_53 = V_4;
		RuntimeObject* L_54 = ___visitor1;
		Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894  L_55 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_56 = ___container3;
		RuntimeObject ** L_57 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_58 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_53);
		int32_t L_59 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894 , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 9), (RuntimeObject*)L_53, (RuntimeObject*)L_54, (Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894 )L_55, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_56, (RuntimeObject **)(RuntimeObject **)L_57, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_58);
		int32_t L_60 = (int32_t)L_59;
		V_0 = (int32_t)L_60;
		V_16 = (bool)((((int32_t)L_60) == ((int32_t)1))? 1 : 0);
		bool L_61 = V_16;
		if (!L_61)
		{
			goto IL_00fb;
		}
	}
	{
		// PropertyContainer.Visit(ref value, visitor, ref changeTracker);
		RuntimeObject ** L_62 = ___value4;
		RuntimeObject* L_63 = ___visitor1;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_64 = ___changeTracker5;
		((  void (*) (RuntimeObject **, RuntimeObject*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((RuntimeObject **)(RuntimeObject **)L_62, (RuntimeObject*)L_63, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_64, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
	}

IL_00fb:
	{
		// visitContainerAdapterTypedContainer.EndContainer(visitor, property, ref container, ref value, ref changeTracker);
		RuntimeObject* L_65 = V_4;
		RuntimeObject* L_66 = ___visitor1;
		Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894  L_67 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_68 = ___container3;
		RuntimeObject ** L_69 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_70 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_65);
		GenericInterfaceActionInvoker5< RuntimeObject*, Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894 , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 10), (RuntimeObject*)L_65, (RuntimeObject*)L_66, (Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894 )L_67, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_68, (RuntimeObject **)(RuntimeObject **)L_69, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_70);
		// if (status != VisitStatus.Unhandled)
		int32_t L_71 = V_0;
		V_17 = (bool)((!(((uint32_t)L_71) <= ((uint32_t)0)))? 1 : 0);
		bool L_72 = V_17;
		if (!L_72)
		{
			goto IL_011d;
		}
	}
	{
		// return status;
		int32_t L_73 = V_0;
		V_9 = (int32_t)L_73;
		goto IL_01d5;
	}

IL_011d:
	{
	}

IL_011e:
	{
		// if (self is IVisitContainerAdapter<TValue> visitContainerAdapterTypedValue)
		RuntimeObject* L_74 = ___self0;
		RuntimeObject* L_75 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_74, IL2CPP_RGCTX_DATA(method->rgctx_data, 11)));
		V_5 = (RuntimeObject*)L_75;
		V_18 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_75) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_76 = V_18;
		if (!L_76)
		{
			goto IL_0177;
		}
	}
	{
		// if ((status = visitContainerAdapterTypedValue.BeginContainer(visitor, property, ref container, ref value, ref changeTracker)) == VisitStatus.Handled)
		RuntimeObject* L_77 = V_5;
		RuntimeObject* L_78 = ___visitor1;
		Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894  L_79 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_80 = ___container3;
		RuntimeObject ** L_81 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_82 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_77);
		int32_t L_83 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894 , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 12), (RuntimeObject*)L_77, (RuntimeObject*)L_78, (Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894 )L_79, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_80, (RuntimeObject **)(RuntimeObject **)L_81, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_82);
		int32_t L_84 = (int32_t)L_83;
		V_0 = (int32_t)L_84;
		V_19 = (bool)((((int32_t)L_84) == ((int32_t)1))? 1 : 0);
		bool L_85 = V_19;
		if (!L_85)
		{
			goto IL_0157;
		}
	}
	{
		// PropertyContainer.Visit(ref value, visitor, ref changeTracker);
		RuntimeObject ** L_86 = ___value4;
		RuntimeObject* L_87 = ___visitor1;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_88 = ___changeTracker5;
		((  void (*) (RuntimeObject **, RuntimeObject*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((RuntimeObject **)(RuntimeObject **)L_86, (RuntimeObject*)L_87, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_88, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
	}

IL_0157:
	{
		// visitContainerAdapterTypedValue.EndContainer(visitor, property, ref container, ref value, ref changeTracker);
		RuntimeObject* L_89 = V_5;
		RuntimeObject* L_90 = ___visitor1;
		Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894  L_91 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_92 = ___container3;
		RuntimeObject ** L_93 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_94 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_89);
		GenericInterfaceActionInvoker5< RuntimeObject*, Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894 , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 13), (RuntimeObject*)L_89, (RuntimeObject*)L_90, (Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894 )L_91, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_92, (RuntimeObject **)(RuntimeObject **)L_93, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_94);
		// if (status != VisitStatus.Unhandled)
		int32_t L_95 = V_0;
		V_20 = (bool)((!(((uint32_t)L_95) <= ((uint32_t)0)))? 1 : 0);
		bool L_96 = V_20;
		if (!L_96)
		{
			goto IL_0176;
		}
	}
	{
		// return status;
		int32_t L_97 = V_0;
		V_9 = (int32_t)L_97;
		goto IL_01d5;
	}

IL_0176:
	{
	}

IL_0177:
	{
		// if (self is IVisitContainerAdapter visitContainerAdapter)
		RuntimeObject* L_98 = ___self0;
		RuntimeObject* L_99 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_98, IVisitContainerAdapter_t0E2F8D9C78A0E26D9B8D648FE0A2D823D712983D_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_99;
		V_21 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_99) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_100 = V_21;
		if (!L_100)
		{
			goto IL_01d0;
		}
	}
	{
		// if ((status = visitContainerAdapter.BeginContainer(visitor, property, ref container, ref value, ref changeTracker)) == VisitStatus.Handled)
		RuntimeObject* L_101 = V_6;
		RuntimeObject* L_102 = ___visitor1;
		Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894  L_103 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_104 = ___container3;
		RuntimeObject ** L_105 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_106 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_101);
		int32_t L_107 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894 , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 14), (RuntimeObject*)L_101, (RuntimeObject*)L_102, (Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894 )L_103, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_104, (RuntimeObject **)(RuntimeObject **)L_105, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_106);
		int32_t L_108 = (int32_t)L_107;
		V_0 = (int32_t)L_108;
		V_22 = (bool)((((int32_t)L_108) == ((int32_t)1))? 1 : 0);
		bool L_109 = V_22;
		if (!L_109)
		{
			goto IL_01b0;
		}
	}
	{
		// PropertyContainer.Visit(ref value, visitor, ref changeTracker);
		RuntimeObject ** L_110 = ___value4;
		RuntimeObject* L_111 = ___visitor1;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_112 = ___changeTracker5;
		((  void (*) (RuntimeObject **, RuntimeObject*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((RuntimeObject **)(RuntimeObject **)L_110, (RuntimeObject*)L_111, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_112, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
	}

IL_01b0:
	{
		// visitContainerAdapter.EndContainer(visitor, property, ref container, ref value, ref changeTracker);
		RuntimeObject* L_113 = V_6;
		RuntimeObject* L_114 = ___visitor1;
		Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894  L_115 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_116 = ___container3;
		RuntimeObject ** L_117 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_118 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_113);
		GenericInterfaceActionInvoker5< RuntimeObject*, Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894 , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 15), (RuntimeObject*)L_113, (RuntimeObject*)L_114, (Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894 )L_115, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_116, (RuntimeObject **)(RuntimeObject **)L_117, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_118);
		// if (status != VisitStatus.Unhandled)
		int32_t L_119 = V_0;
		V_23 = (bool)((!(((uint32_t)L_119) <= ((uint32_t)0)))? 1 : 0);
		bool L_120 = V_23;
		if (!L_120)
		{
			goto IL_01cf;
		}
	}
	{
		// return status;
		int32_t L_121 = V_0;
		V_9 = (int32_t)L_121;
		goto IL_01d5;
	}

IL_01cf:
	{
	}

IL_01d0:
	{
		// return VisitStatus.Unhandled;
		V_9 = (int32_t)0;
		goto IL_01d5;
	}

IL_01d5:
	{
		// }
		int32_t L_122 = V_9;
		return L_122;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.PropertyVisitorAdapterExtensions::TryVisitContainer<Unity.Properties.Property`2<Unity.Scenes.SceneSectionBundle,System.Object>,Unity.Scenes.SceneSectionBundle,System.Object>(Unity.Properties.IPropertyVisitorAdapter,Unity.Properties.IPropertyVisitor,TProperty,TContainer&,TValue&,Unity.Properties.ChangeTracker&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisitContainer_TisProperty_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7_TisSceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7_TisRuntimeObject_mB37DB872261ABB32DC49E572F9CD0596C6BD92E5_gshared (RuntimeObject* ___self0, RuntimeObject* ___visitor1, Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7  ___property2, SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 * ___container3, RuntimeObject ** ___value4, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * ___changeTracker5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisitContainer_TisProperty_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7_TisSceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7_TisRuntimeObject_mB37DB872261ABB32DC49E572F9CD0596C6BD92E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	{
		// if (self is IVisitAdapter<TContainer, TValue> visitAdapterTypedContainerValue)
		RuntimeObject* L_0 = ___self0;
		RuntimeObject* L_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_1;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_7;
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		// if ((status = visitAdapterTypedContainerValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_3 = V_1;
		RuntimeObject* L_4 = ___visitor1;
		Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7  L_5 = ___property2;
		SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 * L_6 = ___container3;
		RuntimeObject ** L_7 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_8 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_9 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7 , SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_3, (RuntimeObject*)L_4, (Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7 )L_5, (SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *)(SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *)L_6, (RuntimeObject **)(RuntimeObject **)L_7, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_8);
		int32_t L_10 = (int32_t)L_9;
		V_0 = (int32_t)L_10;
		V_8 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		bool L_11 = V_8;
		if (!L_11)
		{
			goto IL_0034;
		}
	}
	{
		// return status;
		int32_t L_12 = V_0;
		V_9 = (int32_t)L_12;
		goto IL_01d5;
	}

IL_0034:
	{
	}

IL_0035:
	{
		// if (self is IVisitAdapter<TValue> visitAdapterTypedValue)
		RuntimeObject* L_13 = ___self0;
		RuntimeObject* L_14 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_2 = (RuntimeObject*)L_14;
		V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_10;
		if (!L_15)
		{
			goto IL_0069;
		}
	}
	{
		// if ((status = visitAdapterTypedValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_16 = V_2;
		RuntimeObject* L_17 = ___visitor1;
		Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7  L_18 = ___property2;
		SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 * L_19 = ___container3;
		RuntimeObject ** L_20 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_21 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_16);
		int32_t L_22 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7 , SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3), (RuntimeObject*)L_16, (RuntimeObject*)L_17, (Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7 )L_18, (SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *)(SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *)L_19, (RuntimeObject **)(RuntimeObject **)L_20, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_21);
		int32_t L_23 = (int32_t)L_22;
		V_0 = (int32_t)L_23;
		V_11 = (bool)((!(((uint32_t)L_23) <= ((uint32_t)0)))? 1 : 0);
		bool L_24 = V_11;
		if (!L_24)
		{
			goto IL_0068;
		}
	}
	{
		// return status;
		int32_t L_25 = V_0;
		V_9 = (int32_t)L_25;
		goto IL_01d5;
	}

IL_0068:
	{
	}

IL_0069:
	{
		// if (self is IVisitContainerAdapter<TContainer, TValue> visitContainerAdapterTypedContainerValue)
		RuntimeObject* L_26 = ___self0;
		RuntimeObject* L_27 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_26, IL2CPP_RGCTX_DATA(method->rgctx_data, 4)));
		V_3 = (RuntimeObject*)L_27;
		V_12 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_27) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_28 = V_12;
		if (!L_28)
		{
			goto IL_00c2;
		}
	}
	{
		// if ((status = visitContainerAdapterTypedContainerValue.BeginContainer(visitor, property, ref container, ref value, ref changeTracker)) == VisitStatus.Handled)
		RuntimeObject* L_29 = V_3;
		RuntimeObject* L_30 = ___visitor1;
		Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7  L_31 = ___property2;
		SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 * L_32 = ___container3;
		RuntimeObject ** L_33 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_34 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_29);
		int32_t L_35 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7 , SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5), (RuntimeObject*)L_29, (RuntimeObject*)L_30, (Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7 )L_31, (SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *)(SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *)L_32, (RuntimeObject **)(RuntimeObject **)L_33, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_34);
		int32_t L_36 = (int32_t)L_35;
		V_0 = (int32_t)L_36;
		V_13 = (bool)((((int32_t)L_36) == ((int32_t)1))? 1 : 0);
		bool L_37 = V_13;
		if (!L_37)
		{
			goto IL_00a0;
		}
	}
	{
		// PropertyContainer.Visit(ref value, visitor, ref changeTracker);
		RuntimeObject ** L_38 = ___value4;
		RuntimeObject* L_39 = ___visitor1;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_40 = ___changeTracker5;
		((  void (*) (RuntimeObject **, RuntimeObject*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((RuntimeObject **)(RuntimeObject **)L_38, (RuntimeObject*)L_39, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_40, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
	}

IL_00a0:
	{
		// visitContainerAdapterTypedContainerValue.EndContainer(visitor, property, ref container, ref value, ref changeTracker);
		RuntimeObject* L_41 = V_3;
		RuntimeObject* L_42 = ___visitor1;
		Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7  L_43 = ___property2;
		SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 * L_44 = ___container3;
		RuntimeObject ** L_45 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_46 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_41);
		GenericInterfaceActionInvoker5< RuntimeObject*, Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7 , SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_41, (RuntimeObject*)L_42, (Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7 )L_43, (SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *)(SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *)L_44, (RuntimeObject **)(RuntimeObject **)L_45, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_46);
		// if (status != VisitStatus.Unhandled)
		int32_t L_47 = V_0;
		V_14 = (bool)((!(((uint32_t)L_47) <= ((uint32_t)0)))? 1 : 0);
		bool L_48 = V_14;
		if (!L_48)
		{
			goto IL_00c1;
		}
	}
	{
		// return status;
		int32_t L_49 = V_0;
		V_9 = (int32_t)L_49;
		goto IL_01d5;
	}

IL_00c1:
	{
	}

IL_00c2:
	{
		// if (self is IVisitContainerAdapterC<TContainer> visitContainerAdapterTypedContainer)
		RuntimeObject* L_50 = ___self0;
		RuntimeObject* L_51 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_50, IL2CPP_RGCTX_DATA(method->rgctx_data, 8)));
		V_4 = (RuntimeObject*)L_51;
		V_15 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_51) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_52 = V_15;
		if (!L_52)
		{
			goto IL_011e;
		}
	}
	{
		// if ((status = visitContainerAdapterTypedContainer.BeginContainer(visitor, property, ref container, ref value, ref changeTracker)) == VisitStatus.Handled)
		RuntimeObject* L_53 = V_4;
		RuntimeObject* L_54 = ___visitor1;
		Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7  L_55 = ___property2;
		SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 * L_56 = ___container3;
		RuntimeObject ** L_57 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_58 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_53);
		int32_t L_59 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7 , SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 9), (RuntimeObject*)L_53, (RuntimeObject*)L_54, (Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7 )L_55, (SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *)(SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *)L_56, (RuntimeObject **)(RuntimeObject **)L_57, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_58);
		int32_t L_60 = (int32_t)L_59;
		V_0 = (int32_t)L_60;
		V_16 = (bool)((((int32_t)L_60) == ((int32_t)1))? 1 : 0);
		bool L_61 = V_16;
		if (!L_61)
		{
			goto IL_00fb;
		}
	}
	{
		// PropertyContainer.Visit(ref value, visitor, ref changeTracker);
		RuntimeObject ** L_62 = ___value4;
		RuntimeObject* L_63 = ___visitor1;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_64 = ___changeTracker5;
		((  void (*) (RuntimeObject **, RuntimeObject*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((RuntimeObject **)(RuntimeObject **)L_62, (RuntimeObject*)L_63, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_64, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
	}

IL_00fb:
	{
		// visitContainerAdapterTypedContainer.EndContainer(visitor, property, ref container, ref value, ref changeTracker);
		RuntimeObject* L_65 = V_4;
		RuntimeObject* L_66 = ___visitor1;
		Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7  L_67 = ___property2;
		SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 * L_68 = ___container3;
		RuntimeObject ** L_69 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_70 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_65);
		GenericInterfaceActionInvoker5< RuntimeObject*, Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7 , SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 10), (RuntimeObject*)L_65, (RuntimeObject*)L_66, (Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7 )L_67, (SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *)(SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *)L_68, (RuntimeObject **)(RuntimeObject **)L_69, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_70);
		// if (status != VisitStatus.Unhandled)
		int32_t L_71 = V_0;
		V_17 = (bool)((!(((uint32_t)L_71) <= ((uint32_t)0)))? 1 : 0);
		bool L_72 = V_17;
		if (!L_72)
		{
			goto IL_011d;
		}
	}
	{
		// return status;
		int32_t L_73 = V_0;
		V_9 = (int32_t)L_73;
		goto IL_01d5;
	}

IL_011d:
	{
	}

IL_011e:
	{
		// if (self is IVisitContainerAdapter<TValue> visitContainerAdapterTypedValue)
		RuntimeObject* L_74 = ___self0;
		RuntimeObject* L_75 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_74, IL2CPP_RGCTX_DATA(method->rgctx_data, 11)));
		V_5 = (RuntimeObject*)L_75;
		V_18 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_75) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_76 = V_18;
		if (!L_76)
		{
			goto IL_0177;
		}
	}
	{
		// if ((status = visitContainerAdapterTypedValue.BeginContainer(visitor, property, ref container, ref value, ref changeTracker)) == VisitStatus.Handled)
		RuntimeObject* L_77 = V_5;
		RuntimeObject* L_78 = ___visitor1;
		Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7  L_79 = ___property2;
		SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 * L_80 = ___container3;
		RuntimeObject ** L_81 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_82 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_77);
		int32_t L_83 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7 , SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 12), (RuntimeObject*)L_77, (RuntimeObject*)L_78, (Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7 )L_79, (SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *)(SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *)L_80, (RuntimeObject **)(RuntimeObject **)L_81, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_82);
		int32_t L_84 = (int32_t)L_83;
		V_0 = (int32_t)L_84;
		V_19 = (bool)((((int32_t)L_84) == ((int32_t)1))? 1 : 0);
		bool L_85 = V_19;
		if (!L_85)
		{
			goto IL_0157;
		}
	}
	{
		// PropertyContainer.Visit(ref value, visitor, ref changeTracker);
		RuntimeObject ** L_86 = ___value4;
		RuntimeObject* L_87 = ___visitor1;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_88 = ___changeTracker5;
		((  void (*) (RuntimeObject **, RuntimeObject*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((RuntimeObject **)(RuntimeObject **)L_86, (RuntimeObject*)L_87, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_88, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
	}

IL_0157:
	{
		// visitContainerAdapterTypedValue.EndContainer(visitor, property, ref container, ref value, ref changeTracker);
		RuntimeObject* L_89 = V_5;
		RuntimeObject* L_90 = ___visitor1;
		Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7  L_91 = ___property2;
		SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 * L_92 = ___container3;
		RuntimeObject ** L_93 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_94 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_89);
		GenericInterfaceActionInvoker5< RuntimeObject*, Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7 , SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 13), (RuntimeObject*)L_89, (RuntimeObject*)L_90, (Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7 )L_91, (SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *)(SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *)L_92, (RuntimeObject **)(RuntimeObject **)L_93, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_94);
		// if (status != VisitStatus.Unhandled)
		int32_t L_95 = V_0;
		V_20 = (bool)((!(((uint32_t)L_95) <= ((uint32_t)0)))? 1 : 0);
		bool L_96 = V_20;
		if (!L_96)
		{
			goto IL_0176;
		}
	}
	{
		// return status;
		int32_t L_97 = V_0;
		V_9 = (int32_t)L_97;
		goto IL_01d5;
	}

IL_0176:
	{
	}

IL_0177:
	{
		// if (self is IVisitContainerAdapter visitContainerAdapter)
		RuntimeObject* L_98 = ___self0;
		RuntimeObject* L_99 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_98, IVisitContainerAdapter_t0E2F8D9C78A0E26D9B8D648FE0A2D823D712983D_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_99;
		V_21 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_99) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_100 = V_21;
		if (!L_100)
		{
			goto IL_01d0;
		}
	}
	{
		// if ((status = visitContainerAdapter.BeginContainer(visitor, property, ref container, ref value, ref changeTracker)) == VisitStatus.Handled)
		RuntimeObject* L_101 = V_6;
		RuntimeObject* L_102 = ___visitor1;
		Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7  L_103 = ___property2;
		SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 * L_104 = ___container3;
		RuntimeObject ** L_105 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_106 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_101);
		int32_t L_107 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7 , SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 14), (RuntimeObject*)L_101, (RuntimeObject*)L_102, (Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7 )L_103, (SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *)(SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *)L_104, (RuntimeObject **)(RuntimeObject **)L_105, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_106);
		int32_t L_108 = (int32_t)L_107;
		V_0 = (int32_t)L_108;
		V_22 = (bool)((((int32_t)L_108) == ((int32_t)1))? 1 : 0);
		bool L_109 = V_22;
		if (!L_109)
		{
			goto IL_01b0;
		}
	}
	{
		// PropertyContainer.Visit(ref value, visitor, ref changeTracker);
		RuntimeObject ** L_110 = ___value4;
		RuntimeObject* L_111 = ___visitor1;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_112 = ___changeTracker5;
		((  void (*) (RuntimeObject **, RuntimeObject*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((RuntimeObject **)(RuntimeObject **)L_110, (RuntimeObject*)L_111, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_112, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
	}

IL_01b0:
	{
		// visitContainerAdapter.EndContainer(visitor, property, ref container, ref value, ref changeTracker);
		RuntimeObject* L_113 = V_6;
		RuntimeObject* L_114 = ___visitor1;
		Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7  L_115 = ___property2;
		SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 * L_116 = ___container3;
		RuntimeObject ** L_117 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_118 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_113);
		GenericInterfaceActionInvoker5< RuntimeObject*, Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7 , SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 15), (RuntimeObject*)L_113, (RuntimeObject*)L_114, (Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7 )L_115, (SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *)(SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *)L_116, (RuntimeObject **)(RuntimeObject **)L_117, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_118);
		// if (status != VisitStatus.Unhandled)
		int32_t L_119 = V_0;
		V_23 = (bool)((!(((uint32_t)L_119) <= ((uint32_t)0)))? 1 : 0);
		bool L_120 = V_23;
		if (!L_120)
		{
			goto IL_01cf;
		}
	}
	{
		// return status;
		int32_t L_121 = V_0;
		V_9 = (int32_t)L_121;
		goto IL_01d5;
	}

IL_01cf:
	{
	}

IL_01d0:
	{
		// return VisitStatus.Unhandled;
		V_9 = (int32_t)0;
		goto IL_01d5;
	}

IL_01d5:
	{
		// }
		int32_t L_122 = V_9;
		return L_122;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.PropertyVisitorAdapterExtensions::TryVisitValue<System.Object,System.Object,System.Object>(Unity.Properties.IPropertyVisitorAdapter,Unity.Properties.IPropertyVisitor,TProperty,TContainer&,TValue&,Unity.Properties.ChangeTracker&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mC702047CD77DCD0BE144B1EC216D3ECA0A835393_gshared (RuntimeObject* ___self0, RuntimeObject* ___visitor1, RuntimeObject * ___property2, RuntimeObject ** ___container3, RuntimeObject ** ___value4, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * ___changeTracker5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisitValue_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mC702047CD77DCD0BE144B1EC216D3ECA0A835393_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// if (self is IVisitAdapter<TContainer, TValue> visitAdapterTypedContainerValue)
		RuntimeObject* L_0 = ___self0;
		RuntimeObject* L_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_1;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// if ((status = visitAdapterTypedContainerValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_3 = V_1;
		RuntimeObject* L_4 = ___visitor1;
		RuntimeObject * L_5 = ___property2;
		RuntimeObject ** L_6 = ___container3;
		RuntimeObject ** L_7 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_8 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_9 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, RuntimeObject *, RuntimeObject **, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_3, (RuntimeObject*)L_4, (RuntimeObject *)L_5, (RuntimeObject **)(RuntimeObject **)L_6, (RuntimeObject **)(RuntimeObject **)L_7, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_8);
		int32_t L_10 = (int32_t)L_9;
		V_0 = (int32_t)L_10;
		V_5 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		// return status;
		int32_t L_12 = V_0;
		V_6 = (int32_t)L_12;
		goto IL_0099;
	}

IL_0031:
	{
	}

IL_0032:
	{
		// if (self is IVisitAdapter<TValue> visitAdapterTypedValue)
		RuntimeObject* L_13 = ___self0;
		RuntimeObject* L_14 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_2 = (RuntimeObject*)L_14;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_0063;
		}
	}
	{
		// if ((status = visitAdapterTypedValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_16 = V_2;
		RuntimeObject* L_17 = ___visitor1;
		RuntimeObject * L_18 = ___property2;
		RuntimeObject ** L_19 = ___container3;
		RuntimeObject ** L_20 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_21 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_16);
		int32_t L_22 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, RuntimeObject *, RuntimeObject **, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3), (RuntimeObject*)L_16, (RuntimeObject*)L_17, (RuntimeObject *)L_18, (RuntimeObject **)(RuntimeObject **)L_19, (RuntimeObject **)(RuntimeObject **)L_20, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_21);
		int32_t L_23 = (int32_t)L_22;
		V_0 = (int32_t)L_23;
		V_8 = (bool)((!(((uint32_t)L_23) <= ((uint32_t)0)))? 1 : 0);
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_0062;
		}
	}
	{
		// return status;
		int32_t L_25 = V_0;
		V_6 = (int32_t)L_25;
		goto IL_0099;
	}

IL_0062:
	{
	}

IL_0063:
	{
		// if (self is IVisitAdapter visitAdapter)
		RuntimeObject* L_26 = ___self0;
		RuntimeObject* L_27 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_26, IVisitAdapter_tE311614240F7E5DD9F94C937D5370B807B25654B_il2cpp_TypeInfo_var));
		V_3 = (RuntimeObject*)L_27;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_27) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_0094;
		}
	}
	{
		// if ((status = visitAdapter.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_29 = V_3;
		RuntimeObject* L_30 = ___visitor1;
		RuntimeObject * L_31 = ___property2;
		RuntimeObject ** L_32 = ___container3;
		RuntimeObject ** L_33 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_34 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_29);
		int32_t L_35 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, RuntimeObject *, RuntimeObject **, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_29, (RuntimeObject*)L_30, (RuntimeObject *)L_31, (RuntimeObject **)(RuntimeObject **)L_32, (RuntimeObject **)(RuntimeObject **)L_33, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_34);
		int32_t L_36 = (int32_t)L_35;
		V_0 = (int32_t)L_36;
		V_10 = (bool)((!(((uint32_t)L_36) <= ((uint32_t)0)))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_0093;
		}
	}
	{
		// return status;
		int32_t L_38 = V_0;
		V_6 = (int32_t)L_38;
		goto IL_0099;
	}

IL_0093:
	{
	}

IL_0094:
	{
		// return VisitStatus.Unhandled;
		V_6 = (int32_t)0;
		goto IL_0099;
	}

IL_0099:
	{
		// }
		int32_t L_39 = V_6;
		return L_39;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.PropertyVisitorAdapterExtensions::TryVisitValue<Unity.Properties.Property`2<System.Object,System.Object>,System.Object,System.Object>(Unity.Properties.IPropertyVisitorAdapter,Unity.Properties.IPropertyVisitor,TProperty,TContainer&,TValue&,Unity.Properties.ChangeTracker&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8_TisRuntimeObject_TisRuntimeObject_m8E66669B76B319BC768E04594D882FC3363675EE_gshared (RuntimeObject* ___self0, RuntimeObject* ___visitor1, Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8  ___property2, RuntimeObject ** ___container3, RuntimeObject ** ___value4, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * ___changeTracker5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8_TisRuntimeObject_TisRuntimeObject_m8E66669B76B319BC768E04594D882FC3363675EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// if (self is IVisitAdapter<TContainer, TValue> visitAdapterTypedContainerValue)
		RuntimeObject* L_0 = ___self0;
		RuntimeObject* L_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_1;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// if ((status = visitAdapterTypedContainerValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_3 = V_1;
		RuntimeObject* L_4 = ___visitor1;
		Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8  L_5 = ___property2;
		RuntimeObject ** L_6 = ___container3;
		RuntimeObject ** L_7 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_8 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_9 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 , RuntimeObject **, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_3, (RuntimeObject*)L_4, (Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 )L_5, (RuntimeObject **)(RuntimeObject **)L_6, (RuntimeObject **)(RuntimeObject **)L_7, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_8);
		int32_t L_10 = (int32_t)L_9;
		V_0 = (int32_t)L_10;
		V_5 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		// return status;
		int32_t L_12 = V_0;
		V_6 = (int32_t)L_12;
		goto IL_0099;
	}

IL_0031:
	{
	}

IL_0032:
	{
		// if (self is IVisitAdapter<TValue> visitAdapterTypedValue)
		RuntimeObject* L_13 = ___self0;
		RuntimeObject* L_14 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_2 = (RuntimeObject*)L_14;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_0063;
		}
	}
	{
		// if ((status = visitAdapterTypedValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_16 = V_2;
		RuntimeObject* L_17 = ___visitor1;
		Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8  L_18 = ___property2;
		RuntimeObject ** L_19 = ___container3;
		RuntimeObject ** L_20 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_21 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_16);
		int32_t L_22 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 , RuntimeObject **, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3), (RuntimeObject*)L_16, (RuntimeObject*)L_17, (Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 )L_18, (RuntimeObject **)(RuntimeObject **)L_19, (RuntimeObject **)(RuntimeObject **)L_20, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_21);
		int32_t L_23 = (int32_t)L_22;
		V_0 = (int32_t)L_23;
		V_8 = (bool)((!(((uint32_t)L_23) <= ((uint32_t)0)))? 1 : 0);
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_0062;
		}
	}
	{
		// return status;
		int32_t L_25 = V_0;
		V_6 = (int32_t)L_25;
		goto IL_0099;
	}

IL_0062:
	{
	}

IL_0063:
	{
		// if (self is IVisitAdapter visitAdapter)
		RuntimeObject* L_26 = ___self0;
		RuntimeObject* L_27 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_26, IVisitAdapter_tE311614240F7E5DD9F94C937D5370B807B25654B_il2cpp_TypeInfo_var));
		V_3 = (RuntimeObject*)L_27;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_27) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_0094;
		}
	}
	{
		// if ((status = visitAdapter.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_29 = V_3;
		RuntimeObject* L_30 = ___visitor1;
		Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8  L_31 = ___property2;
		RuntimeObject ** L_32 = ___container3;
		RuntimeObject ** L_33 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_34 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_29);
		int32_t L_35 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 , RuntimeObject **, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_29, (RuntimeObject*)L_30, (Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 )L_31, (RuntimeObject **)(RuntimeObject **)L_32, (RuntimeObject **)(RuntimeObject **)L_33, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_34);
		int32_t L_36 = (int32_t)L_35;
		V_0 = (int32_t)L_36;
		V_10 = (bool)((!(((uint32_t)L_36) <= ((uint32_t)0)))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_0093;
		}
	}
	{
		// return status;
		int32_t L_38 = V_0;
		V_6 = (int32_t)L_38;
		goto IL_0099;
	}

IL_0093:
	{
	}

IL_0094:
	{
		// return VisitStatus.Unhandled;
		V_6 = (int32_t)0;
		goto IL_0099;
	}

IL_0099:
	{
		// }
		int32_t L_39 = V_6;
		return L_39;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.PropertyVisitorAdapterExtensions::TryVisitValue<Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.Object>,Unity.Entities.EditorRenderData,System.Object>(Unity.Properties.IPropertyVisitorAdapter,Unity.Properties.IPropertyVisitor,TProperty,TContainer&,TValue&,Unity.Properties.ChangeTracker&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5_TisEditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55_TisRuntimeObject_m80FEFA4F428732B83777F2EFC3FA2B33E7641E0B_gshared (RuntimeObject* ___self0, RuntimeObject* ___visitor1, Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5  ___property2, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * ___container3, RuntimeObject ** ___value4, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * ___changeTracker5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5_TisEditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55_TisRuntimeObject_m80FEFA4F428732B83777F2EFC3FA2B33E7641E0B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// if (self is IVisitAdapter<TContainer, TValue> visitAdapterTypedContainerValue)
		RuntimeObject* L_0 = ___self0;
		RuntimeObject* L_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_1;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// if ((status = visitAdapterTypedContainerValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_3 = V_1;
		RuntimeObject* L_4 = ___visitor1;
		Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5  L_5 = ___property2;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_6 = ___container3;
		RuntimeObject ** L_7 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_8 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_9 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 , EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_3, (RuntimeObject*)L_4, (Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 )L_5, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_6, (RuntimeObject **)(RuntimeObject **)L_7, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_8);
		int32_t L_10 = (int32_t)L_9;
		V_0 = (int32_t)L_10;
		V_5 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		// return status;
		int32_t L_12 = V_0;
		V_6 = (int32_t)L_12;
		goto IL_0099;
	}

IL_0031:
	{
	}

IL_0032:
	{
		// if (self is IVisitAdapter<TValue> visitAdapterTypedValue)
		RuntimeObject* L_13 = ___self0;
		RuntimeObject* L_14 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_2 = (RuntimeObject*)L_14;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_0063;
		}
	}
	{
		// if ((status = visitAdapterTypedValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_16 = V_2;
		RuntimeObject* L_17 = ___visitor1;
		Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5  L_18 = ___property2;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_19 = ___container3;
		RuntimeObject ** L_20 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_21 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_16);
		int32_t L_22 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 , EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3), (RuntimeObject*)L_16, (RuntimeObject*)L_17, (Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 )L_18, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_19, (RuntimeObject **)(RuntimeObject **)L_20, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_21);
		int32_t L_23 = (int32_t)L_22;
		V_0 = (int32_t)L_23;
		V_8 = (bool)((!(((uint32_t)L_23) <= ((uint32_t)0)))? 1 : 0);
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_0062;
		}
	}
	{
		// return status;
		int32_t L_25 = V_0;
		V_6 = (int32_t)L_25;
		goto IL_0099;
	}

IL_0062:
	{
	}

IL_0063:
	{
		// if (self is IVisitAdapter visitAdapter)
		RuntimeObject* L_26 = ___self0;
		RuntimeObject* L_27 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_26, IVisitAdapter_tE311614240F7E5DD9F94C937D5370B807B25654B_il2cpp_TypeInfo_var));
		V_3 = (RuntimeObject*)L_27;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_27) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_0094;
		}
	}
	{
		// if ((status = visitAdapter.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_29 = V_3;
		RuntimeObject* L_30 = ___visitor1;
		Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5  L_31 = ___property2;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_32 = ___container3;
		RuntimeObject ** L_33 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_34 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_29);
		int32_t L_35 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 , EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_29, (RuntimeObject*)L_30, (Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 )L_31, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_32, (RuntimeObject **)(RuntimeObject **)L_33, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_34);
		int32_t L_36 = (int32_t)L_35;
		V_0 = (int32_t)L_36;
		V_10 = (bool)((!(((uint32_t)L_36) <= ((uint32_t)0)))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_0093;
		}
	}
	{
		// return status;
		int32_t L_38 = V_0;
		V_6 = (int32_t)L_38;
		goto IL_0099;
	}

IL_0093:
	{
	}

IL_0094:
	{
		// return VisitStatus.Unhandled;
		V_6 = (int32_t)0;
		goto IL_0099;
	}

IL_0099:
	{
		// }
		int32_t L_39 = V_6;
		return L_39;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.PropertyVisitorAdapterExtensions::TryVisitValue<Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.UInt64>,Unity.Entities.EditorRenderData,System.UInt64>(Unity.Properties.IPropertyVisitorAdapter,Unity.Properties.IPropertyVisitor,TProperty,TContainer&,TValue&,Unity.Properties.ChangeTracker&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E_TisEditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_mCC282D1B9A9F2D8B8ADE325685209F621B57B99A_gshared (RuntimeObject* ___self0, RuntimeObject* ___visitor1, Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E  ___property2, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * ___container3, uint64_t* ___value4, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * ___changeTracker5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E_TisEditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_mCC282D1B9A9F2D8B8ADE325685209F621B57B99A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// if (self is IVisitAdapter<TContainer, TValue> visitAdapterTypedContainerValue)
		RuntimeObject* L_0 = ___self0;
		RuntimeObject* L_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_1;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// if ((status = visitAdapterTypedContainerValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_3 = V_1;
		RuntimeObject* L_4 = ___visitor1;
		Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E  L_5 = ___property2;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_6 = ___container3;
		uint64_t* L_7 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_8 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_9 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E , EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, uint64_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_3, (RuntimeObject*)L_4, (Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E )L_5, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_6, (uint64_t*)(uint64_t*)L_7, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_8);
		int32_t L_10 = (int32_t)L_9;
		V_0 = (int32_t)L_10;
		V_5 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		// return status;
		int32_t L_12 = V_0;
		V_6 = (int32_t)L_12;
		goto IL_0099;
	}

IL_0031:
	{
	}

IL_0032:
	{
		// if (self is IVisitAdapter<TValue> visitAdapterTypedValue)
		RuntimeObject* L_13 = ___self0;
		RuntimeObject* L_14 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_2 = (RuntimeObject*)L_14;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_0063;
		}
	}
	{
		// if ((status = visitAdapterTypedValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_16 = V_2;
		RuntimeObject* L_17 = ___visitor1;
		Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E  L_18 = ___property2;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_19 = ___container3;
		uint64_t* L_20 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_21 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_16);
		int32_t L_22 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E , EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, uint64_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3), (RuntimeObject*)L_16, (RuntimeObject*)L_17, (Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E )L_18, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_19, (uint64_t*)(uint64_t*)L_20, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_21);
		int32_t L_23 = (int32_t)L_22;
		V_0 = (int32_t)L_23;
		V_8 = (bool)((!(((uint32_t)L_23) <= ((uint32_t)0)))? 1 : 0);
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_0062;
		}
	}
	{
		// return status;
		int32_t L_25 = V_0;
		V_6 = (int32_t)L_25;
		goto IL_0099;
	}

IL_0062:
	{
	}

IL_0063:
	{
		// if (self is IVisitAdapter visitAdapter)
		RuntimeObject* L_26 = ___self0;
		RuntimeObject* L_27 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_26, IVisitAdapter_tE311614240F7E5DD9F94C937D5370B807B25654B_il2cpp_TypeInfo_var));
		V_3 = (RuntimeObject*)L_27;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_27) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_0094;
		}
	}
	{
		// if ((status = visitAdapter.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_29 = V_3;
		RuntimeObject* L_30 = ___visitor1;
		Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E  L_31 = ___property2;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_32 = ___container3;
		uint64_t* L_33 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_34 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_29);
		int32_t L_35 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E , EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, uint64_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_29, (RuntimeObject*)L_30, (Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E )L_31, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_32, (uint64_t*)(uint64_t*)L_33, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_34);
		int32_t L_36 = (int32_t)L_35;
		V_0 = (int32_t)L_36;
		V_10 = (bool)((!(((uint32_t)L_36) <= ((uint32_t)0)))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_0093;
		}
	}
	{
		// return status;
		int32_t L_38 = V_0;
		V_6 = (int32_t)L_38;
		goto IL_0099;
	}

IL_0093:
	{
	}

IL_0094:
	{
		// return VisitStatus.Unhandled;
		V_6 = (int32_t)0;
		goto IL_0099;
	}

IL_0099:
	{
		// }
		int32_t L_39 = V_6;
		return L_39;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.PropertyVisitorAdapterExtensions::TryVisitValue<Unity.Properties.Property`2<Unity.Entities.Entity,System.Int32>,Unity.Entities.Entity,System.Int32>(Unity.Properties.IPropertyVisitorAdapter,Unity.Properties.IPropertyVisitor,TProperty,TContainer&,TValue&,Unity.Properties.ChangeTracker&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m584CECB0F3AEF35E63BDC1258C1E8D4ADD866886_gshared (RuntimeObject* ___self0, RuntimeObject* ___visitor1, Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459  ___property2, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * ___container3, int32_t* ___value4, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * ___changeTracker5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m584CECB0F3AEF35E63BDC1258C1E8D4ADD866886_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// if (self is IVisitAdapter<TContainer, TValue> visitAdapterTypedContainerValue)
		RuntimeObject* L_0 = ___self0;
		RuntimeObject* L_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_1;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// if ((status = visitAdapterTypedContainerValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_3 = V_1;
		RuntimeObject* L_4 = ___visitor1;
		Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459  L_5 = ___property2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_6 = ___container3;
		int32_t* L_7 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_8 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_9 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 , Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *, int32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_3, (RuntimeObject*)L_4, (Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 )L_5, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_6, (int32_t*)(int32_t*)L_7, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_8);
		int32_t L_10 = (int32_t)L_9;
		V_0 = (int32_t)L_10;
		V_5 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		// return status;
		int32_t L_12 = V_0;
		V_6 = (int32_t)L_12;
		goto IL_0099;
	}

IL_0031:
	{
	}

IL_0032:
	{
		// if (self is IVisitAdapter<TValue> visitAdapterTypedValue)
		RuntimeObject* L_13 = ___self0;
		RuntimeObject* L_14 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_2 = (RuntimeObject*)L_14;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_0063;
		}
	}
	{
		// if ((status = visitAdapterTypedValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_16 = V_2;
		RuntimeObject* L_17 = ___visitor1;
		Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459  L_18 = ___property2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_19 = ___container3;
		int32_t* L_20 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_21 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_16);
		int32_t L_22 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 , Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *, int32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3), (RuntimeObject*)L_16, (RuntimeObject*)L_17, (Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 )L_18, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_19, (int32_t*)(int32_t*)L_20, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_21);
		int32_t L_23 = (int32_t)L_22;
		V_0 = (int32_t)L_23;
		V_8 = (bool)((!(((uint32_t)L_23) <= ((uint32_t)0)))? 1 : 0);
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_0062;
		}
	}
	{
		// return status;
		int32_t L_25 = V_0;
		V_6 = (int32_t)L_25;
		goto IL_0099;
	}

IL_0062:
	{
	}

IL_0063:
	{
		// if (self is IVisitAdapter visitAdapter)
		RuntimeObject* L_26 = ___self0;
		RuntimeObject* L_27 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_26, IVisitAdapter_tE311614240F7E5DD9F94C937D5370B807B25654B_il2cpp_TypeInfo_var));
		V_3 = (RuntimeObject*)L_27;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_27) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_0094;
		}
	}
	{
		// if ((status = visitAdapter.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_29 = V_3;
		RuntimeObject* L_30 = ___visitor1;
		Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459  L_31 = ___property2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_32 = ___container3;
		int32_t* L_33 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_34 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_29);
		int32_t L_35 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 , Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *, int32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_29, (RuntimeObject*)L_30, (Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 )L_31, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_32, (int32_t*)(int32_t*)L_33, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_34);
		int32_t L_36 = (int32_t)L_35;
		V_0 = (int32_t)L_36;
		V_10 = (bool)((!(((uint32_t)L_36) <= ((uint32_t)0)))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_0093;
		}
	}
	{
		// return status;
		int32_t L_38 = V_0;
		V_6 = (int32_t)L_38;
		goto IL_0099;
	}

IL_0093:
	{
	}

IL_0094:
	{
		// return VisitStatus.Unhandled;
		V_6 = (int32_t)0;
		goto IL_0099;
	}

IL_0099:
	{
		// }
		int32_t L_39 = V_6;
		return L_39;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.PropertyVisitorAdapterExtensions::TryVisitValue<Unity.Properties.Property`2<Unity.Entities.Hash128,Unity.Mathematics.uint4>,Unity.Entities.Hash128,Unity.Mathematics.uint4>(Unity.Properties.IPropertyVisitorAdapter,Unity.Properties.IPropertyVisitor,TProperty,TContainer&,TValue&,Unity.Properties.ChangeTracker&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_t0579F6755418EBE535BB3E8216FC0416BC399E33_TisHash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_Tisuint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_m5BC89DD6BA1E181042FCD5D1CE47C604752247B0_gshared (RuntimeObject* ___self0, RuntimeObject* ___visitor1, Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33  ___property2, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * ___container3, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * ___value4, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * ___changeTracker5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_t0579F6755418EBE535BB3E8216FC0416BC399E33_TisHash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_Tisuint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_m5BC89DD6BA1E181042FCD5D1CE47C604752247B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// if (self is IVisitAdapter<TContainer, TValue> visitAdapterTypedContainerValue)
		RuntimeObject* L_0 = ___self0;
		RuntimeObject* L_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_1;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// if ((status = visitAdapterTypedContainerValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_3 = V_1;
		RuntimeObject* L_4 = ___visitor1;
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33  L_5 = ___property2;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_6 = ___container3;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_7 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_8 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_9 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 , Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_3, (RuntimeObject*)L_4, (Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 )L_5, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_6, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_7, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_8);
		int32_t L_10 = (int32_t)L_9;
		V_0 = (int32_t)L_10;
		V_5 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		// return status;
		int32_t L_12 = V_0;
		V_6 = (int32_t)L_12;
		goto IL_0099;
	}

IL_0031:
	{
	}

IL_0032:
	{
		// if (self is IVisitAdapter<TValue> visitAdapterTypedValue)
		RuntimeObject* L_13 = ___self0;
		RuntimeObject* L_14 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_2 = (RuntimeObject*)L_14;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_0063;
		}
	}
	{
		// if ((status = visitAdapterTypedValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_16 = V_2;
		RuntimeObject* L_17 = ___visitor1;
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33  L_18 = ___property2;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_19 = ___container3;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_20 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_21 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_16);
		int32_t L_22 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 , Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3), (RuntimeObject*)L_16, (RuntimeObject*)L_17, (Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 )L_18, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_19, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_20, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_21);
		int32_t L_23 = (int32_t)L_22;
		V_0 = (int32_t)L_23;
		V_8 = (bool)((!(((uint32_t)L_23) <= ((uint32_t)0)))? 1 : 0);
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_0062;
		}
	}
	{
		// return status;
		int32_t L_25 = V_0;
		V_6 = (int32_t)L_25;
		goto IL_0099;
	}

IL_0062:
	{
	}

IL_0063:
	{
		// if (self is IVisitAdapter visitAdapter)
		RuntimeObject* L_26 = ___self0;
		RuntimeObject* L_27 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_26, IVisitAdapter_tE311614240F7E5DD9F94C937D5370B807B25654B_il2cpp_TypeInfo_var));
		V_3 = (RuntimeObject*)L_27;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_27) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_0094;
		}
	}
	{
		// if ((status = visitAdapter.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_29 = V_3;
		RuntimeObject* L_30 = ___visitor1;
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33  L_31 = ___property2;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_32 = ___container3;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_33 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_34 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_29);
		int32_t L_35 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 , Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_29, (RuntimeObject*)L_30, (Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 )L_31, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_32, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_33, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_34);
		int32_t L_36 = (int32_t)L_35;
		V_0 = (int32_t)L_36;
		V_10 = (bool)((!(((uint32_t)L_36) <= ((uint32_t)0)))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_0093;
		}
	}
	{
		// return status;
		int32_t L_38 = V_0;
		V_6 = (int32_t)L_38;
		goto IL_0099;
	}

IL_0093:
	{
	}

IL_0094:
	{
		// return VisitStatus.Unhandled;
		V_6 = (int32_t)0;
		goto IL_0099;
	}

IL_0099:
	{
		// }
		int32_t L_39 = V_6;
		return L_39;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.PropertyVisitorAdapterExtensions::TryVisitValue<Unity.Properties.Property`2<Unity.Entities.SceneSection,System.Int32>,Unity.Entities.SceneSection,System.Int32>(Unity.Properties.IPropertyVisitorAdapter,Unity.Properties.IPropertyVisitor,TProperty,TContainer&,TValue&,Unity.Properties.ChangeTracker&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED_TisSceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m7EEDAB5A1164416C4BB5B18107B4375E8B7B380A_gshared (RuntimeObject* ___self0, RuntimeObject* ___visitor1, Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED  ___property2, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * ___container3, int32_t* ___value4, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * ___changeTracker5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED_TisSceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m7EEDAB5A1164416C4BB5B18107B4375E8B7B380A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// if (self is IVisitAdapter<TContainer, TValue> visitAdapterTypedContainerValue)
		RuntimeObject* L_0 = ___self0;
		RuntimeObject* L_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_1;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// if ((status = visitAdapterTypedContainerValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_3 = V_1;
		RuntimeObject* L_4 = ___visitor1;
		Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED  L_5 = ___property2;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_6 = ___container3;
		int32_t* L_7 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_8 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_9 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED , SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, int32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_3, (RuntimeObject*)L_4, (Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED )L_5, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_6, (int32_t*)(int32_t*)L_7, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_8);
		int32_t L_10 = (int32_t)L_9;
		V_0 = (int32_t)L_10;
		V_5 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		// return status;
		int32_t L_12 = V_0;
		V_6 = (int32_t)L_12;
		goto IL_0099;
	}

IL_0031:
	{
	}

IL_0032:
	{
		// if (self is IVisitAdapter<TValue> visitAdapterTypedValue)
		RuntimeObject* L_13 = ___self0;
		RuntimeObject* L_14 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_2 = (RuntimeObject*)L_14;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_0063;
		}
	}
	{
		// if ((status = visitAdapterTypedValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_16 = V_2;
		RuntimeObject* L_17 = ___visitor1;
		Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED  L_18 = ___property2;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_19 = ___container3;
		int32_t* L_20 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_21 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_16);
		int32_t L_22 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED , SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, int32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3), (RuntimeObject*)L_16, (RuntimeObject*)L_17, (Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED )L_18, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_19, (int32_t*)(int32_t*)L_20, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_21);
		int32_t L_23 = (int32_t)L_22;
		V_0 = (int32_t)L_23;
		V_8 = (bool)((!(((uint32_t)L_23) <= ((uint32_t)0)))? 1 : 0);
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_0062;
		}
	}
	{
		// return status;
		int32_t L_25 = V_0;
		V_6 = (int32_t)L_25;
		goto IL_0099;
	}

IL_0062:
	{
	}

IL_0063:
	{
		// if (self is IVisitAdapter visitAdapter)
		RuntimeObject* L_26 = ___self0;
		RuntimeObject* L_27 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_26, IVisitAdapter_tE311614240F7E5DD9F94C937D5370B807B25654B_il2cpp_TypeInfo_var));
		V_3 = (RuntimeObject*)L_27;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_27) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_0094;
		}
	}
	{
		// if ((status = visitAdapter.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_29 = V_3;
		RuntimeObject* L_30 = ___visitor1;
		Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED  L_31 = ___property2;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_32 = ___container3;
		int32_t* L_33 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_34 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_29);
		int32_t L_35 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED , SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, int32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_29, (RuntimeObject*)L_30, (Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED )L_31, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_32, (int32_t*)(int32_t*)L_33, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_34);
		int32_t L_36 = (int32_t)L_35;
		V_0 = (int32_t)L_36;
		V_10 = (bool)((!(((uint32_t)L_36) <= ((uint32_t)0)))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_0093;
		}
	}
	{
		// return status;
		int32_t L_38 = V_0;
		V_6 = (int32_t)L_38;
		goto IL_0099;
	}

IL_0093:
	{
	}

IL_0094:
	{
		// return VisitStatus.Unhandled;
		V_6 = (int32_t)0;
		goto IL_0099;
	}

IL_0099:
	{
		// }
		int32_t L_39 = V_6;
		return L_39;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.PropertyVisitorAdapterExtensions::TryVisitValue<Unity.Properties.Property`2<Unity.Entities.SceneSection,Unity.Entities.Hash128>,Unity.Entities.SceneSection,Unity.Entities.Hash128>(Unity.Properties.IPropertyVisitorAdapter,Unity.Properties.IPropertyVisitor,TProperty,TContainer&,TValue&,Unity.Properties.ChangeTracker&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15_TisSceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E_TisHash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_mFB6DC714E82C88C9552F481F4C1EAC8C2799DA43_gshared (RuntimeObject* ___self0, RuntimeObject* ___visitor1, Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15  ___property2, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * ___container3, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * ___value4, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * ___changeTracker5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15_TisSceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E_TisHash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_mFB6DC714E82C88C9552F481F4C1EAC8C2799DA43_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// if (self is IVisitAdapter<TContainer, TValue> visitAdapterTypedContainerValue)
		RuntimeObject* L_0 = ___self0;
		RuntimeObject* L_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_1;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// if ((status = visitAdapterTypedContainerValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_3 = V_1;
		RuntimeObject* L_4 = ___visitor1;
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15  L_5 = ___property2;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_6 = ___container3;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_7 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_8 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_9 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 , SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_3, (RuntimeObject*)L_4, (Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 )L_5, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_6, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_7, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_8);
		int32_t L_10 = (int32_t)L_9;
		V_0 = (int32_t)L_10;
		V_5 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		// return status;
		int32_t L_12 = V_0;
		V_6 = (int32_t)L_12;
		goto IL_0099;
	}

IL_0031:
	{
	}

IL_0032:
	{
		// if (self is IVisitAdapter<TValue> visitAdapterTypedValue)
		RuntimeObject* L_13 = ___self0;
		RuntimeObject* L_14 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_2 = (RuntimeObject*)L_14;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_0063;
		}
	}
	{
		// if ((status = visitAdapterTypedValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_16 = V_2;
		RuntimeObject* L_17 = ___visitor1;
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15  L_18 = ___property2;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_19 = ___container3;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_20 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_21 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_16);
		int32_t L_22 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 , SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3), (RuntimeObject*)L_16, (RuntimeObject*)L_17, (Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 )L_18, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_19, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_20, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_21);
		int32_t L_23 = (int32_t)L_22;
		V_0 = (int32_t)L_23;
		V_8 = (bool)((!(((uint32_t)L_23) <= ((uint32_t)0)))? 1 : 0);
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_0062;
		}
	}
	{
		// return status;
		int32_t L_25 = V_0;
		V_6 = (int32_t)L_25;
		goto IL_0099;
	}

IL_0062:
	{
	}

IL_0063:
	{
		// if (self is IVisitAdapter visitAdapter)
		RuntimeObject* L_26 = ___self0;
		RuntimeObject* L_27 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_26, IVisitAdapter_tE311614240F7E5DD9F94C937D5370B807B25654B_il2cpp_TypeInfo_var));
		V_3 = (RuntimeObject*)L_27;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_27) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_0094;
		}
	}
	{
		// if ((status = visitAdapter.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_29 = V_3;
		RuntimeObject* L_30 = ___visitor1;
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15  L_31 = ___property2;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_32 = ___container3;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_33 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_34 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_29);
		int32_t L_35 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 , SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_29, (RuntimeObject*)L_30, (Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 )L_31, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_32, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_33, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_34);
		int32_t L_36 = (int32_t)L_35;
		V_0 = (int32_t)L_36;
		V_10 = (bool)((!(((uint32_t)L_36) <= ((uint32_t)0)))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_0093;
		}
	}
	{
		// return status;
		int32_t L_38 = V_0;
		V_6 = (int32_t)L_38;
		goto IL_0099;
	}

IL_0093:
	{
	}

IL_0094:
	{
		// return VisitStatus.Unhandled;
		V_6 = (int32_t)0;
		goto IL_0099;
	}

IL_0099:
	{
		// }
		int32_t L_39 = V_6;
		return L_39;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.PropertyVisitorAdapterExtensions::TryVisitValue<Unity.Properties.Property`2<Unity.Entities.SceneTag,Unity.Entities.Entity>,Unity.Entities.SceneTag,Unity.Entities.Entity>(Unity.Properties.IPropertyVisitorAdapter,Unity.Properties.IPropertyVisitor,TProperty,TContainer&,TValue&,Unity.Properties.ChangeTracker&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06_TisSceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_m4AD9856F5676542409C3A84017F7469066D88B7A_gshared (RuntimeObject* ___self0, RuntimeObject* ___visitor1, Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06  ___property2, SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * ___container3, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * ___value4, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * ___changeTracker5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06_TisSceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_m4AD9856F5676542409C3A84017F7469066D88B7A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// if (self is IVisitAdapter<TContainer, TValue> visitAdapterTypedContainerValue)
		RuntimeObject* L_0 = ___self0;
		RuntimeObject* L_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_1;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// if ((status = visitAdapterTypedContainerValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_3 = V_1;
		RuntimeObject* L_4 = ___visitor1;
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06  L_5 = ___property2;
		SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * L_6 = ___container3;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_7 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_8 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_9 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 , SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_3, (RuntimeObject*)L_4, (Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 )L_5, (SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)(SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)L_6, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_7, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_8);
		int32_t L_10 = (int32_t)L_9;
		V_0 = (int32_t)L_10;
		V_5 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		// return status;
		int32_t L_12 = V_0;
		V_6 = (int32_t)L_12;
		goto IL_0099;
	}

IL_0031:
	{
	}

IL_0032:
	{
		// if (self is IVisitAdapter<TValue> visitAdapterTypedValue)
		RuntimeObject* L_13 = ___self0;
		RuntimeObject* L_14 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_2 = (RuntimeObject*)L_14;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_0063;
		}
	}
	{
		// if ((status = visitAdapterTypedValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_16 = V_2;
		RuntimeObject* L_17 = ___visitor1;
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06  L_18 = ___property2;
		SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * L_19 = ___container3;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_20 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_21 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_16);
		int32_t L_22 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 , SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3), (RuntimeObject*)L_16, (RuntimeObject*)L_17, (Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 )L_18, (SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)(SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)L_19, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_20, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_21);
		int32_t L_23 = (int32_t)L_22;
		V_0 = (int32_t)L_23;
		V_8 = (bool)((!(((uint32_t)L_23) <= ((uint32_t)0)))? 1 : 0);
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_0062;
		}
	}
	{
		// return status;
		int32_t L_25 = V_0;
		V_6 = (int32_t)L_25;
		goto IL_0099;
	}

IL_0062:
	{
	}

IL_0063:
	{
		// if (self is IVisitAdapter visitAdapter)
		RuntimeObject* L_26 = ___self0;
		RuntimeObject* L_27 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_26, IVisitAdapter_tE311614240F7E5DD9F94C937D5370B807B25654B_il2cpp_TypeInfo_var));
		V_3 = (RuntimeObject*)L_27;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_27) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_0094;
		}
	}
	{
		// if ((status = visitAdapter.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_29 = V_3;
		RuntimeObject* L_30 = ___visitor1;
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06  L_31 = ___property2;
		SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * L_32 = ___container3;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_33 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_34 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_29);
		int32_t L_35 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 , SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_29, (RuntimeObject*)L_30, (Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 )L_31, (SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)(SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)L_32, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_33, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_34);
		int32_t L_36 = (int32_t)L_35;
		V_0 = (int32_t)L_36;
		V_10 = (bool)((!(((uint32_t)L_36) <= ((uint32_t)0)))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_0093;
		}
	}
	{
		// return status;
		int32_t L_38 = V_0;
		V_6 = (int32_t)L_38;
		goto IL_0099;
	}

IL_0093:
	{
	}

IL_0094:
	{
		// return VisitStatus.Unhandled;
		V_6 = (int32_t)0;
		goto IL_0099;
	}

IL_0099:
	{
		// }
		int32_t L_39 = V_6;
		return L_39;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.PropertyVisitorAdapterExtensions::TryVisitValue<Unity.Properties.Property`2<Unity.Mathematics.uint4,System.UInt32>,Unity.Mathematics.uint4,System.UInt32>(Unity.Properties.IPropertyVisitorAdapter,Unity.Properties.IPropertyVisitor,TProperty,TContainer&,TValue&,Unity.Properties.ChangeTracker&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E_Tisuint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m0837E1A0EC0845CFCF73DFE6CD428ED1568E97E2_gshared (RuntimeObject* ___self0, RuntimeObject* ___visitor1, Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E  ___property2, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * ___container3, uint32_t* ___value4, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * ___changeTracker5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E_Tisuint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m0837E1A0EC0845CFCF73DFE6CD428ED1568E97E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// if (self is IVisitAdapter<TContainer, TValue> visitAdapterTypedContainerValue)
		RuntimeObject* L_0 = ___self0;
		RuntimeObject* L_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_1;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// if ((status = visitAdapterTypedContainerValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_3 = V_1;
		RuntimeObject* L_4 = ___visitor1;
		Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E  L_5 = ___property2;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_6 = ___container3;
		uint32_t* L_7 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_8 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_9 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E , uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *, uint32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_3, (RuntimeObject*)L_4, (Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E )L_5, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_6, (uint32_t*)(uint32_t*)L_7, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_8);
		int32_t L_10 = (int32_t)L_9;
		V_0 = (int32_t)L_10;
		V_5 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		// return status;
		int32_t L_12 = V_0;
		V_6 = (int32_t)L_12;
		goto IL_0099;
	}

IL_0031:
	{
	}

IL_0032:
	{
		// if (self is IVisitAdapter<TValue> visitAdapterTypedValue)
		RuntimeObject* L_13 = ___self0;
		RuntimeObject* L_14 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_2 = (RuntimeObject*)L_14;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_0063;
		}
	}
	{
		// if ((status = visitAdapterTypedValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_16 = V_2;
		RuntimeObject* L_17 = ___visitor1;
		Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E  L_18 = ___property2;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_19 = ___container3;
		uint32_t* L_20 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_21 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_16);
		int32_t L_22 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E , uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *, uint32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3), (RuntimeObject*)L_16, (RuntimeObject*)L_17, (Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E )L_18, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_19, (uint32_t*)(uint32_t*)L_20, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_21);
		int32_t L_23 = (int32_t)L_22;
		V_0 = (int32_t)L_23;
		V_8 = (bool)((!(((uint32_t)L_23) <= ((uint32_t)0)))? 1 : 0);
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_0062;
		}
	}
	{
		// return status;
		int32_t L_25 = V_0;
		V_6 = (int32_t)L_25;
		goto IL_0099;
	}

IL_0062:
	{
	}

IL_0063:
	{
		// if (self is IVisitAdapter visitAdapter)
		RuntimeObject* L_26 = ___self0;
		RuntimeObject* L_27 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_26, IVisitAdapter_tE311614240F7E5DD9F94C937D5370B807B25654B_il2cpp_TypeInfo_var));
		V_3 = (RuntimeObject*)L_27;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_27) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_0094;
		}
	}
	{
		// if ((status = visitAdapter.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_29 = V_3;
		RuntimeObject* L_30 = ___visitor1;
		Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E  L_31 = ___property2;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_32 = ___container3;
		uint32_t* L_33 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_34 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_29);
		int32_t L_35 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E , uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *, uint32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_29, (RuntimeObject*)L_30, (Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E )L_31, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_32, (uint32_t*)(uint32_t*)L_33, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_34);
		int32_t L_36 = (int32_t)L_35;
		V_0 = (int32_t)L_36;
		V_10 = (bool)((!(((uint32_t)L_36) <= ((uint32_t)0)))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_0093;
		}
	}
	{
		// return status;
		int32_t L_38 = V_0;
		V_6 = (int32_t)L_38;
		goto IL_0099;
	}

IL_0093:
	{
	}

IL_0094:
	{
		// return VisitStatus.Unhandled;
		V_6 = (int32_t)0;
		goto IL_0099;
	}

IL_0099:
	{
		// }
		int32_t L_39 = V_6;
		return L_39;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.PropertyVisitorAdapterExtensions::TryVisitValue<Unity.Properties.Property`2<Unity.Rendering.FrozenRenderSceneTag,System.Int32>,Unity.Rendering.FrozenRenderSceneTag,System.Int32>(Unity.Properties.IPropertyVisitorAdapter,Unity.Properties.IPropertyVisitor,TProperty,TContainer&,TValue&,Unity.Properties.ChangeTracker&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_t8CB18E68A01C87235E911D649F2E3EAA9EE0135D_TisFrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mEBE4E05D7BF37D8E9572FD0B564D5E68E529A24B_gshared (RuntimeObject* ___self0, RuntimeObject* ___visitor1, Property_2_t8CB18E68A01C87235E911D649F2E3EAA9EE0135D  ___property2, FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A * ___container3, int32_t* ___value4, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * ___changeTracker5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_t8CB18E68A01C87235E911D649F2E3EAA9EE0135D_TisFrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mEBE4E05D7BF37D8E9572FD0B564D5E68E529A24B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// if (self is IVisitAdapter<TContainer, TValue> visitAdapterTypedContainerValue)
		RuntimeObject* L_0 = ___self0;
		RuntimeObject* L_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_1;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// if ((status = visitAdapterTypedContainerValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_3 = V_1;
		RuntimeObject* L_4 = ___visitor1;
		Property_2_t8CB18E68A01C87235E911D649F2E3EAA9EE0135D  L_5 = ___property2;
		FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A * L_6 = ___container3;
		int32_t* L_7 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_8 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_9 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_t8CB18E68A01C87235E911D649F2E3EAA9EE0135D , FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A *, int32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_3, (RuntimeObject*)L_4, (Property_2_t8CB18E68A01C87235E911D649F2E3EAA9EE0135D )L_5, (FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A *)(FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A *)L_6, (int32_t*)(int32_t*)L_7, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_8);
		int32_t L_10 = (int32_t)L_9;
		V_0 = (int32_t)L_10;
		V_5 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		// return status;
		int32_t L_12 = V_0;
		V_6 = (int32_t)L_12;
		goto IL_0099;
	}

IL_0031:
	{
	}

IL_0032:
	{
		// if (self is IVisitAdapter<TValue> visitAdapterTypedValue)
		RuntimeObject* L_13 = ___self0;
		RuntimeObject* L_14 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_2 = (RuntimeObject*)L_14;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_0063;
		}
	}
	{
		// if ((status = visitAdapterTypedValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_16 = V_2;
		RuntimeObject* L_17 = ___visitor1;
		Property_2_t8CB18E68A01C87235E911D649F2E3EAA9EE0135D  L_18 = ___property2;
		FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A * L_19 = ___container3;
		int32_t* L_20 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_21 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_16);
		int32_t L_22 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_t8CB18E68A01C87235E911D649F2E3EAA9EE0135D , FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A *, int32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3), (RuntimeObject*)L_16, (RuntimeObject*)L_17, (Property_2_t8CB18E68A01C87235E911D649F2E3EAA9EE0135D )L_18, (FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A *)(FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A *)L_19, (int32_t*)(int32_t*)L_20, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_21);
		int32_t L_23 = (int32_t)L_22;
		V_0 = (int32_t)L_23;
		V_8 = (bool)((!(((uint32_t)L_23) <= ((uint32_t)0)))? 1 : 0);
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_0062;
		}
	}
	{
		// return status;
		int32_t L_25 = V_0;
		V_6 = (int32_t)L_25;
		goto IL_0099;
	}

IL_0062:
	{
	}

IL_0063:
	{
		// if (self is IVisitAdapter visitAdapter)
		RuntimeObject* L_26 = ___self0;
		RuntimeObject* L_27 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_26, IVisitAdapter_tE311614240F7E5DD9F94C937D5370B807B25654B_il2cpp_TypeInfo_var));
		V_3 = (RuntimeObject*)L_27;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_27) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_0094;
		}
	}
	{
		// if ((status = visitAdapter.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_29 = V_3;
		RuntimeObject* L_30 = ___visitor1;
		Property_2_t8CB18E68A01C87235E911D649F2E3EAA9EE0135D  L_31 = ___property2;
		FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A * L_32 = ___container3;
		int32_t* L_33 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_34 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_29);
		int32_t L_35 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_t8CB18E68A01C87235E911D649F2E3EAA9EE0135D , FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A *, int32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_29, (RuntimeObject*)L_30, (Property_2_t8CB18E68A01C87235E911D649F2E3EAA9EE0135D )L_31, (FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A *)(FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A *)L_32, (int32_t*)(int32_t*)L_33, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_34);
		int32_t L_36 = (int32_t)L_35;
		V_0 = (int32_t)L_36;
		V_10 = (bool)((!(((uint32_t)L_36) <= ((uint32_t)0)))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_0093;
		}
	}
	{
		// return status;
		int32_t L_38 = V_0;
		V_6 = (int32_t)L_38;
		goto IL_0099;
	}

IL_0093:
	{
	}

IL_0094:
	{
		// return VisitStatus.Unhandled;
		V_6 = (int32_t)0;
		goto IL_0099;
	}

IL_0099:
	{
		// }
		int32_t L_39 = V_6;
		return L_39;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.PropertyVisitorAdapterExtensions::TryVisitValue<Unity.Properties.Property`2<Unity.Rendering.FrozenRenderSceneTag,Unity.Entities.Hash128>,Unity.Rendering.FrozenRenderSceneTag,Unity.Entities.Hash128>(Unity.Properties.IPropertyVisitorAdapter,Unity.Properties.IPropertyVisitor,TProperty,TContainer&,TValue&,Unity.Properties.ChangeTracker&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_t80CBF738F7F4C64E16BF4EE5CFE9C6F39EAA6C38_TisFrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A_TisHash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_mDE80696F7BAD4A94E53B471F600BC01540F41DD7_gshared (RuntimeObject* ___self0, RuntimeObject* ___visitor1, Property_2_t80CBF738F7F4C64E16BF4EE5CFE9C6F39EAA6C38  ___property2, FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A * ___container3, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * ___value4, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * ___changeTracker5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_t80CBF738F7F4C64E16BF4EE5CFE9C6F39EAA6C38_TisFrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A_TisHash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_mDE80696F7BAD4A94E53B471F600BC01540F41DD7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// if (self is IVisitAdapter<TContainer, TValue> visitAdapterTypedContainerValue)
		RuntimeObject* L_0 = ___self0;
		RuntimeObject* L_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_1;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// if ((status = visitAdapterTypedContainerValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_3 = V_1;
		RuntimeObject* L_4 = ___visitor1;
		Property_2_t80CBF738F7F4C64E16BF4EE5CFE9C6F39EAA6C38  L_5 = ___property2;
		FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A * L_6 = ___container3;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_7 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_8 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_9 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_t80CBF738F7F4C64E16BF4EE5CFE9C6F39EAA6C38 , FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_3, (RuntimeObject*)L_4, (Property_2_t80CBF738F7F4C64E16BF4EE5CFE9C6F39EAA6C38 )L_5, (FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A *)(FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A *)L_6, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_7, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_8);
		int32_t L_10 = (int32_t)L_9;
		V_0 = (int32_t)L_10;
		V_5 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		// return status;
		int32_t L_12 = V_0;
		V_6 = (int32_t)L_12;
		goto IL_0099;
	}

IL_0031:
	{
	}

IL_0032:
	{
		// if (self is IVisitAdapter<TValue> visitAdapterTypedValue)
		RuntimeObject* L_13 = ___self0;
		RuntimeObject* L_14 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_2 = (RuntimeObject*)L_14;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_0063;
		}
	}
	{
		// if ((status = visitAdapterTypedValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_16 = V_2;
		RuntimeObject* L_17 = ___visitor1;
		Property_2_t80CBF738F7F4C64E16BF4EE5CFE9C6F39EAA6C38  L_18 = ___property2;
		FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A * L_19 = ___container3;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_20 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_21 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_16);
		int32_t L_22 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_t80CBF738F7F4C64E16BF4EE5CFE9C6F39EAA6C38 , FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3), (RuntimeObject*)L_16, (RuntimeObject*)L_17, (Property_2_t80CBF738F7F4C64E16BF4EE5CFE9C6F39EAA6C38 )L_18, (FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A *)(FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A *)L_19, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_20, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_21);
		int32_t L_23 = (int32_t)L_22;
		V_0 = (int32_t)L_23;
		V_8 = (bool)((!(((uint32_t)L_23) <= ((uint32_t)0)))? 1 : 0);
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_0062;
		}
	}
	{
		// return status;
		int32_t L_25 = V_0;
		V_6 = (int32_t)L_25;
		goto IL_0099;
	}

IL_0062:
	{
	}

IL_0063:
	{
		// if (self is IVisitAdapter visitAdapter)
		RuntimeObject* L_26 = ___self0;
		RuntimeObject* L_27 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_26, IVisitAdapter_tE311614240F7E5DD9F94C937D5370B807B25654B_il2cpp_TypeInfo_var));
		V_3 = (RuntimeObject*)L_27;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_27) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_0094;
		}
	}
	{
		// if ((status = visitAdapter.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_29 = V_3;
		RuntimeObject* L_30 = ___visitor1;
		Property_2_t80CBF738F7F4C64E16BF4EE5CFE9C6F39EAA6C38  L_31 = ___property2;
		FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A * L_32 = ___container3;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_33 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_34 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_29);
		int32_t L_35 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_t80CBF738F7F4C64E16BF4EE5CFE9C6F39EAA6C38 , FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_29, (RuntimeObject*)L_30, (Property_2_t80CBF738F7F4C64E16BF4EE5CFE9C6F39EAA6C38 )L_31, (FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A *)(FrozenRenderSceneTag_tEC9B0A29A3902FADE31D5093408B134B5590B92A *)L_32, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_33, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_34);
		int32_t L_36 = (int32_t)L_35;
		V_0 = (int32_t)L_36;
		V_10 = (bool)((!(((uint32_t)L_36) <= ((uint32_t)0)))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_0093;
		}
	}
	{
		// return status;
		int32_t L_38 = V_0;
		V_6 = (int32_t)L_38;
		goto IL_0099;
	}

IL_0093:
	{
	}

IL_0094:
	{
		// return VisitStatus.Unhandled;
		V_6 = (int32_t)0;
		goto IL_0099;
	}

IL_0099:
	{
		// }
		int32_t L_39 = V_6;
		return L_39;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.PropertyVisitorAdapterExtensions::TryVisitValue<Unity.Properties.Property`2<Unity.Rendering.RenderMesh,System.Boolean>,Unity.Rendering.RenderMesh,System.Boolean>(Unity.Properties.IPropertyVisitorAdapter,Unity.Properties.IPropertyVisitor,TProperty,TContainer&,TValue&,Unity.Properties.ChangeTracker&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_tA9D8E694416FEE343DBB5B5DF1F37D5112FA0DA2_TisRenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m4ECE52DE223C3F657CCBE3F8B096903629713B49_gshared (RuntimeObject* ___self0, RuntimeObject* ___visitor1, Property_2_tA9D8E694416FEE343DBB5B5DF1F37D5112FA0DA2  ___property2, RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * ___container3, bool* ___value4, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * ___changeTracker5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_tA9D8E694416FEE343DBB5B5DF1F37D5112FA0DA2_TisRenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m4ECE52DE223C3F657CCBE3F8B096903629713B49_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// if (self is IVisitAdapter<TContainer, TValue> visitAdapterTypedContainerValue)
		RuntimeObject* L_0 = ___self0;
		RuntimeObject* L_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_1;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// if ((status = visitAdapterTypedContainerValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_3 = V_1;
		RuntimeObject* L_4 = ___visitor1;
		Property_2_tA9D8E694416FEE343DBB5B5DF1F37D5112FA0DA2  L_5 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_6 = ___container3;
		bool* L_7 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_8 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_9 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tA9D8E694416FEE343DBB5B5DF1F37D5112FA0DA2 , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, bool*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_3, (RuntimeObject*)L_4, (Property_2_tA9D8E694416FEE343DBB5B5DF1F37D5112FA0DA2 )L_5, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_6, (bool*)(bool*)L_7, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_8);
		int32_t L_10 = (int32_t)L_9;
		V_0 = (int32_t)L_10;
		V_5 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		// return status;
		int32_t L_12 = V_0;
		V_6 = (int32_t)L_12;
		goto IL_0099;
	}

IL_0031:
	{
	}

IL_0032:
	{
		// if (self is IVisitAdapter<TValue> visitAdapterTypedValue)
		RuntimeObject* L_13 = ___self0;
		RuntimeObject* L_14 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_2 = (RuntimeObject*)L_14;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_0063;
		}
	}
	{
		// if ((status = visitAdapterTypedValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_16 = V_2;
		RuntimeObject* L_17 = ___visitor1;
		Property_2_tA9D8E694416FEE343DBB5B5DF1F37D5112FA0DA2  L_18 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_19 = ___container3;
		bool* L_20 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_21 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_16);
		int32_t L_22 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tA9D8E694416FEE343DBB5B5DF1F37D5112FA0DA2 , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, bool*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3), (RuntimeObject*)L_16, (RuntimeObject*)L_17, (Property_2_tA9D8E694416FEE343DBB5B5DF1F37D5112FA0DA2 )L_18, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_19, (bool*)(bool*)L_20, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_21);
		int32_t L_23 = (int32_t)L_22;
		V_0 = (int32_t)L_23;
		V_8 = (bool)((!(((uint32_t)L_23) <= ((uint32_t)0)))? 1 : 0);
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_0062;
		}
	}
	{
		// return status;
		int32_t L_25 = V_0;
		V_6 = (int32_t)L_25;
		goto IL_0099;
	}

IL_0062:
	{
	}

IL_0063:
	{
		// if (self is IVisitAdapter visitAdapter)
		RuntimeObject* L_26 = ___self0;
		RuntimeObject* L_27 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_26, IVisitAdapter_tE311614240F7E5DD9F94C937D5370B807B25654B_il2cpp_TypeInfo_var));
		V_3 = (RuntimeObject*)L_27;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_27) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_0094;
		}
	}
	{
		// if ((status = visitAdapter.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_29 = V_3;
		RuntimeObject* L_30 = ___visitor1;
		Property_2_tA9D8E694416FEE343DBB5B5DF1F37D5112FA0DA2  L_31 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_32 = ___container3;
		bool* L_33 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_34 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_29);
		int32_t L_35 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tA9D8E694416FEE343DBB5B5DF1F37D5112FA0DA2 , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, bool*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_29, (RuntimeObject*)L_30, (Property_2_tA9D8E694416FEE343DBB5B5DF1F37D5112FA0DA2 )L_31, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_32, (bool*)(bool*)L_33, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_34);
		int32_t L_36 = (int32_t)L_35;
		V_0 = (int32_t)L_36;
		V_10 = (bool)((!(((uint32_t)L_36) <= ((uint32_t)0)))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_0093;
		}
	}
	{
		// return status;
		int32_t L_38 = V_0;
		V_6 = (int32_t)L_38;
		goto IL_0099;
	}

IL_0093:
	{
	}

IL_0094:
	{
		// return VisitStatus.Unhandled;
		V_6 = (int32_t)0;
		goto IL_0099;
	}

IL_0099:
	{
		// }
		int32_t L_39 = V_6;
		return L_39;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.PropertyVisitorAdapterExtensions::TryVisitValue<Unity.Properties.Property`2<Unity.Rendering.RenderMesh,System.Int32>,Unity.Rendering.RenderMesh,System.Int32>(Unity.Properties.IPropertyVisitorAdapter,Unity.Properties.IPropertyVisitor,TProperty,TContainer&,TValue&,Unity.Properties.ChangeTracker&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_t0CA9A192739FFCFDD13DA7DD9701053AF33E70E3_TisRenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mF96139DC436BBDA9E2614FFFD6EF3938188E23F0_gshared (RuntimeObject* ___self0, RuntimeObject* ___visitor1, Property_2_t0CA9A192739FFCFDD13DA7DD9701053AF33E70E3  ___property2, RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * ___container3, int32_t* ___value4, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * ___changeTracker5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_t0CA9A192739FFCFDD13DA7DD9701053AF33E70E3_TisRenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mF96139DC436BBDA9E2614FFFD6EF3938188E23F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// if (self is IVisitAdapter<TContainer, TValue> visitAdapterTypedContainerValue)
		RuntimeObject* L_0 = ___self0;
		RuntimeObject* L_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_1;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// if ((status = visitAdapterTypedContainerValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_3 = V_1;
		RuntimeObject* L_4 = ___visitor1;
		Property_2_t0CA9A192739FFCFDD13DA7DD9701053AF33E70E3  L_5 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_6 = ___container3;
		int32_t* L_7 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_8 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_9 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_t0CA9A192739FFCFDD13DA7DD9701053AF33E70E3 , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, int32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_3, (RuntimeObject*)L_4, (Property_2_t0CA9A192739FFCFDD13DA7DD9701053AF33E70E3 )L_5, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_6, (int32_t*)(int32_t*)L_7, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_8);
		int32_t L_10 = (int32_t)L_9;
		V_0 = (int32_t)L_10;
		V_5 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		// return status;
		int32_t L_12 = V_0;
		V_6 = (int32_t)L_12;
		goto IL_0099;
	}

IL_0031:
	{
	}

IL_0032:
	{
		// if (self is IVisitAdapter<TValue> visitAdapterTypedValue)
		RuntimeObject* L_13 = ___self0;
		RuntimeObject* L_14 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_2 = (RuntimeObject*)L_14;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_0063;
		}
	}
	{
		// if ((status = visitAdapterTypedValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_16 = V_2;
		RuntimeObject* L_17 = ___visitor1;
		Property_2_t0CA9A192739FFCFDD13DA7DD9701053AF33E70E3  L_18 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_19 = ___container3;
		int32_t* L_20 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_21 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_16);
		int32_t L_22 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_t0CA9A192739FFCFDD13DA7DD9701053AF33E70E3 , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, int32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3), (RuntimeObject*)L_16, (RuntimeObject*)L_17, (Property_2_t0CA9A192739FFCFDD13DA7DD9701053AF33E70E3 )L_18, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_19, (int32_t*)(int32_t*)L_20, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_21);
		int32_t L_23 = (int32_t)L_22;
		V_0 = (int32_t)L_23;
		V_8 = (bool)((!(((uint32_t)L_23) <= ((uint32_t)0)))? 1 : 0);
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_0062;
		}
	}
	{
		// return status;
		int32_t L_25 = V_0;
		V_6 = (int32_t)L_25;
		goto IL_0099;
	}

IL_0062:
	{
	}

IL_0063:
	{
		// if (self is IVisitAdapter visitAdapter)
		RuntimeObject* L_26 = ___self0;
		RuntimeObject* L_27 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_26, IVisitAdapter_tE311614240F7E5DD9F94C937D5370B807B25654B_il2cpp_TypeInfo_var));
		V_3 = (RuntimeObject*)L_27;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_27) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_0094;
		}
	}
	{
		// if ((status = visitAdapter.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_29 = V_3;
		RuntimeObject* L_30 = ___visitor1;
		Property_2_t0CA9A192739FFCFDD13DA7DD9701053AF33E70E3  L_31 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_32 = ___container3;
		int32_t* L_33 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_34 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_29);
		int32_t L_35 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_t0CA9A192739FFCFDD13DA7DD9701053AF33E70E3 , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, int32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_29, (RuntimeObject*)L_30, (Property_2_t0CA9A192739FFCFDD13DA7DD9701053AF33E70E3 )L_31, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_32, (int32_t*)(int32_t*)L_33, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_34);
		int32_t L_36 = (int32_t)L_35;
		V_0 = (int32_t)L_36;
		V_10 = (bool)((!(((uint32_t)L_36) <= ((uint32_t)0)))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_0093;
		}
	}
	{
		// return status;
		int32_t L_38 = V_0;
		V_6 = (int32_t)L_38;
		goto IL_0099;
	}

IL_0093:
	{
	}

IL_0094:
	{
		// return VisitStatus.Unhandled;
		V_6 = (int32_t)0;
		goto IL_0099;
	}

IL_0099:
	{
		// }
		int32_t L_39 = V_6;
		return L_39;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.PropertyVisitorAdapterExtensions::TryVisitValue<Unity.Properties.Property`2<Unity.Rendering.RenderMesh,System.Int32Enum>,Unity.Rendering.RenderMesh,System.Int32Enum>(Unity.Properties.IPropertyVisitorAdapter,Unity.Properties.IPropertyVisitor,TProperty,TContainer&,TValue&,Unity.Properties.ChangeTracker&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF_TisRenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m8E398D0E42A5E0B6739BB8788ECCC6C3C7B469C0_gshared (RuntimeObject* ___self0, RuntimeObject* ___visitor1, Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF  ___property2, RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * ___container3, int32_t* ___value4, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * ___changeTracker5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF_TisRenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m8E398D0E42A5E0B6739BB8788ECCC6C3C7B469C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// if (self is IVisitAdapter<TContainer, TValue> visitAdapterTypedContainerValue)
		RuntimeObject* L_0 = ___self0;
		RuntimeObject* L_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_1;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// if ((status = visitAdapterTypedContainerValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_3 = V_1;
		RuntimeObject* L_4 = ___visitor1;
		Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF  L_5 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_6 = ___container3;
		int32_t* L_7 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_8 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_9 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, int32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_3, (RuntimeObject*)L_4, (Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF )L_5, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_6, (int32_t*)(int32_t*)L_7, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_8);
		int32_t L_10 = (int32_t)L_9;
		V_0 = (int32_t)L_10;
		V_5 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		// return status;
		int32_t L_12 = V_0;
		V_6 = (int32_t)L_12;
		goto IL_0099;
	}

IL_0031:
	{
	}

IL_0032:
	{
		// if (self is IVisitAdapter<TValue> visitAdapterTypedValue)
		RuntimeObject* L_13 = ___self0;
		RuntimeObject* L_14 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_2 = (RuntimeObject*)L_14;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_0063;
		}
	}
	{
		// if ((status = visitAdapterTypedValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_16 = V_2;
		RuntimeObject* L_17 = ___visitor1;
		Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF  L_18 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_19 = ___container3;
		int32_t* L_20 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_21 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_16);
		int32_t L_22 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, int32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3), (RuntimeObject*)L_16, (RuntimeObject*)L_17, (Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF )L_18, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_19, (int32_t*)(int32_t*)L_20, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_21);
		int32_t L_23 = (int32_t)L_22;
		V_0 = (int32_t)L_23;
		V_8 = (bool)((!(((uint32_t)L_23) <= ((uint32_t)0)))? 1 : 0);
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_0062;
		}
	}
	{
		// return status;
		int32_t L_25 = V_0;
		V_6 = (int32_t)L_25;
		goto IL_0099;
	}

IL_0062:
	{
	}

IL_0063:
	{
		// if (self is IVisitAdapter visitAdapter)
		RuntimeObject* L_26 = ___self0;
		RuntimeObject* L_27 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_26, IVisitAdapter_tE311614240F7E5DD9F94C937D5370B807B25654B_il2cpp_TypeInfo_var));
		V_3 = (RuntimeObject*)L_27;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_27) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_0094;
		}
	}
	{
		// if ((status = visitAdapter.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_29 = V_3;
		RuntimeObject* L_30 = ___visitor1;
		Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF  L_31 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_32 = ___container3;
		int32_t* L_33 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_34 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_29);
		int32_t L_35 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, int32_t*, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_29, (RuntimeObject*)L_30, (Property_2_tA6684331B243DB1E627799E7D4E154DBA0EFBADF )L_31, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_32, (int32_t*)(int32_t*)L_33, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_34);
		int32_t L_36 = (int32_t)L_35;
		V_0 = (int32_t)L_36;
		V_10 = (bool)((!(((uint32_t)L_36) <= ((uint32_t)0)))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_0093;
		}
	}
	{
		// return status;
		int32_t L_38 = V_0;
		V_6 = (int32_t)L_38;
		goto IL_0099;
	}

IL_0093:
	{
	}

IL_0094:
	{
		// return VisitStatus.Unhandled;
		V_6 = (int32_t)0;
		goto IL_0099;
	}

IL_0099:
	{
		// }
		int32_t L_39 = V_6;
		return L_39;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.PropertyVisitorAdapterExtensions::TryVisitValue<Unity.Properties.Property`2<Unity.Rendering.RenderMesh,System.Object>,Unity.Rendering.RenderMesh,System.Object>(Unity.Properties.IPropertyVisitorAdapter,Unity.Properties.IPropertyVisitor,TProperty,TContainer&,TValue&,Unity.Properties.ChangeTracker&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894_TisRenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0_TisRuntimeObject_m1B93581FCB56F20FB76FFCDD66CE1D8258F0EB75_gshared (RuntimeObject* ___self0, RuntimeObject* ___visitor1, Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894  ___property2, RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * ___container3, RuntimeObject ** ___value4, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * ___changeTracker5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894_TisRenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0_TisRuntimeObject_m1B93581FCB56F20FB76FFCDD66CE1D8258F0EB75_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// if (self is IVisitAdapter<TContainer, TValue> visitAdapterTypedContainerValue)
		RuntimeObject* L_0 = ___self0;
		RuntimeObject* L_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_1;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// if ((status = visitAdapterTypedContainerValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_3 = V_1;
		RuntimeObject* L_4 = ___visitor1;
		Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894  L_5 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_6 = ___container3;
		RuntimeObject ** L_7 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_8 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_9 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894 , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_3, (RuntimeObject*)L_4, (Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894 )L_5, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_6, (RuntimeObject **)(RuntimeObject **)L_7, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_8);
		int32_t L_10 = (int32_t)L_9;
		V_0 = (int32_t)L_10;
		V_5 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		// return status;
		int32_t L_12 = V_0;
		V_6 = (int32_t)L_12;
		goto IL_0099;
	}

IL_0031:
	{
	}

IL_0032:
	{
		// if (self is IVisitAdapter<TValue> visitAdapterTypedValue)
		RuntimeObject* L_13 = ___self0;
		RuntimeObject* L_14 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_2 = (RuntimeObject*)L_14;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_0063;
		}
	}
	{
		// if ((status = visitAdapterTypedValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_16 = V_2;
		RuntimeObject* L_17 = ___visitor1;
		Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894  L_18 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_19 = ___container3;
		RuntimeObject ** L_20 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_21 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_16);
		int32_t L_22 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894 , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3), (RuntimeObject*)L_16, (RuntimeObject*)L_17, (Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894 )L_18, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_19, (RuntimeObject **)(RuntimeObject **)L_20, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_21);
		int32_t L_23 = (int32_t)L_22;
		V_0 = (int32_t)L_23;
		V_8 = (bool)((!(((uint32_t)L_23) <= ((uint32_t)0)))? 1 : 0);
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_0062;
		}
	}
	{
		// return status;
		int32_t L_25 = V_0;
		V_6 = (int32_t)L_25;
		goto IL_0099;
	}

IL_0062:
	{
	}

IL_0063:
	{
		// if (self is IVisitAdapter visitAdapter)
		RuntimeObject* L_26 = ___self0;
		RuntimeObject* L_27 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_26, IVisitAdapter_tE311614240F7E5DD9F94C937D5370B807B25654B_il2cpp_TypeInfo_var));
		V_3 = (RuntimeObject*)L_27;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_27) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_0094;
		}
	}
	{
		// if ((status = visitAdapter.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_29 = V_3;
		RuntimeObject* L_30 = ___visitor1;
		Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894  L_31 = ___property2;
		RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 * L_32 = ___container3;
		RuntimeObject ** L_33 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_34 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_29);
		int32_t L_35 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894 , RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_29, (RuntimeObject*)L_30, (Property_2_tD9384F466B791B32E5C93DB5C07FB9C16BB08894 )L_31, (RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)(RenderMesh_t323117B822ACFFF910E3990E193E75CAA26176E0 *)L_32, (RuntimeObject **)(RuntimeObject **)L_33, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_34);
		int32_t L_36 = (int32_t)L_35;
		V_0 = (int32_t)L_36;
		V_10 = (bool)((!(((uint32_t)L_36) <= ((uint32_t)0)))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_0093;
		}
	}
	{
		// return status;
		int32_t L_38 = V_0;
		V_6 = (int32_t)L_38;
		goto IL_0099;
	}

IL_0093:
	{
	}

IL_0094:
	{
		// return VisitStatus.Unhandled;
		V_6 = (int32_t)0;
		goto IL_0099;
	}

IL_0099:
	{
		// }
		int32_t L_39 = V_6;
		return L_39;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.PropertyVisitorAdapterExtensions::TryVisitValue<Unity.Properties.Property`2<Unity.Scenes.SceneSectionBundle,System.Object>,Unity.Scenes.SceneSectionBundle,System.Object>(Unity.Properties.IPropertyVisitorAdapter,Unity.Properties.IPropertyVisitor,TProperty,TContainer&,TValue&,Unity.Properties.ChangeTracker&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7_TisSceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7_TisRuntimeObject_m84F4880982DA1A61B5F73BF208FCE7067BFAA017_gshared (RuntimeObject* ___self0, RuntimeObject* ___visitor1, Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7  ___property2, SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 * ___container3, RuntimeObject ** ___value4, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * ___changeTracker5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisitValue_TisProperty_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7_TisSceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7_TisRuntimeObject_m84F4880982DA1A61B5F73BF208FCE7067BFAA017_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// if (self is IVisitAdapter<TContainer, TValue> visitAdapterTypedContainerValue)
		RuntimeObject* L_0 = ___self0;
		RuntimeObject* L_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_1;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// if ((status = visitAdapterTypedContainerValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_3 = V_1;
		RuntimeObject* L_4 = ___visitor1;
		Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7  L_5 = ___property2;
		SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 * L_6 = ___container3;
		RuntimeObject ** L_7 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_8 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_9 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7 , SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), (RuntimeObject*)L_3, (RuntimeObject*)L_4, (Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7 )L_5, (SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *)(SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *)L_6, (RuntimeObject **)(RuntimeObject **)L_7, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_8);
		int32_t L_10 = (int32_t)L_9;
		V_0 = (int32_t)L_10;
		V_5 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		// return status;
		int32_t L_12 = V_0;
		V_6 = (int32_t)L_12;
		goto IL_0099;
	}

IL_0031:
	{
	}

IL_0032:
	{
		// if (self is IVisitAdapter<TValue> visitAdapterTypedValue)
		RuntimeObject* L_13 = ___self0;
		RuntimeObject* L_14 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_2 = (RuntimeObject*)L_14;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_0063;
		}
	}
	{
		// if ((status = visitAdapterTypedValue.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_16 = V_2;
		RuntimeObject* L_17 = ___visitor1;
		Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7  L_18 = ___property2;
		SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 * L_19 = ___container3;
		RuntimeObject ** L_20 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_21 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_16);
		int32_t L_22 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7 , SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3), (RuntimeObject*)L_16, (RuntimeObject*)L_17, (Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7 )L_18, (SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *)(SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *)L_19, (RuntimeObject **)(RuntimeObject **)L_20, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_21);
		int32_t L_23 = (int32_t)L_22;
		V_0 = (int32_t)L_23;
		V_8 = (bool)((!(((uint32_t)L_23) <= ((uint32_t)0)))? 1 : 0);
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_0062;
		}
	}
	{
		// return status;
		int32_t L_25 = V_0;
		V_6 = (int32_t)L_25;
		goto IL_0099;
	}

IL_0062:
	{
	}

IL_0063:
	{
		// if (self is IVisitAdapter visitAdapter)
		RuntimeObject* L_26 = ___self0;
		RuntimeObject* L_27 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_26, IVisitAdapter_tE311614240F7E5DD9F94C937D5370B807B25654B_il2cpp_TypeInfo_var));
		V_3 = (RuntimeObject*)L_27;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_27) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_0094;
		}
	}
	{
		// if ((status = visitAdapter.Visit(visitor, property, ref container, ref value, ref changeTracker)) != VisitStatus.Unhandled)
		RuntimeObject* L_29 = V_3;
		RuntimeObject* L_30 = ___visitor1;
		Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7  L_31 = ___property2;
		SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 * L_32 = ___container3;
		RuntimeObject ** L_33 = ___value4;
		ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * L_34 = ___changeTracker5;
		NullCheck((RuntimeObject*)L_29);
		int32_t L_35 = GenericInterfaceFuncInvoker5< int32_t, RuntimeObject*, Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7 , SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *, RuntimeObject **, ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_29, (RuntimeObject*)L_30, (Property_2_tCB52F255C3ED65B7AA633CA4067B01CD63A2D0F7 )L_31, (SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *)(SceneSectionBundle_tC5146611283302BB6C95795BF23CF3E4C7510BD7 *)L_32, (RuntimeObject **)(RuntimeObject **)L_33, (ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)(ChangeTracker_t225AE393AFD11DF120AD4514D3FD0CA074CEA142 *)L_34);
		int32_t L_36 = (int32_t)L_35;
		V_0 = (int32_t)L_36;
		V_10 = (bool)((!(((uint32_t)L_36) <= ((uint32_t)0)))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_0093;
		}
	}
	{
		// return status;
		int32_t L_38 = V_0;
		V_6 = (int32_t)L_38;
		goto IL_0099;
	}

IL_0093:
	{
	}

IL_0094:
	{
		// return VisitStatus.Unhandled;
		V_6 = (int32_t)0;
		goto IL_0099;
	}

IL_0099:
	{
		// }
		int32_t L_39 = V_6;
		return L_39;
	}
}
// UnityEngine.GameObject Unity.Physics.Authoring.PhysicsShapeExtensions::FindFirstEnabledAncestor<System.Object>(UnityEngine.GameObject,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PhysicsShapeExtensions_FindFirstEnabledAncestor_TisRuntimeObject_m23A3D9831235CBED8547B3DF42AB47456B7C9E1D_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___shape0, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___buffer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhysicsShapeExtensions_FindFirstEnabledAncestor_TisRuntimeObject_m23A3D9831235CBED8547B3DF42AB47456B7C9E1D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_5 = NULL;
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * G_B6_0 = NULL;
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * G_B2_0 = NULL;
	MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * G_B4_0 = NULL;
	MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	{
		// shape.GetComponentsInParent(true, buffer);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___shape0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ___buffer1;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0);
		((  void (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, bool, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (bool)1, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// GameObject result = null;
		V_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		// for (int i = 0, count = buffer.Count; i < count; ++i)
		V_1 = (int32_t)0;
		// for (int i = 0, count = buffer.Count; i < count; ++i)
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = ___buffer1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2);
		int32_t L_3 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_2 = (int32_t)L_3;
		goto IL_006f;
	}

IL_0017:
	{
		// if ((buffer[i] as UnityCollider)?.enabled ?? (buffer[i] as MonoBehaviour)?.enabled ?? true)
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = ___buffer1;
		int32_t L_5 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4);
		RuntimeObject * L_6 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_7 = (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF *)((Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF *)IsInst((RuntimeObject*)L_6, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_il2cpp_TypeInfo_var));
		G_B2_0 = L_7;
		if (L_7)
		{
			G_B6_0 = L_7;
			goto IL_004c;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_8 = ___buffer1;
		int32_t L_9 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8);
		RuntimeObject * L_10 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_11 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)IsInst((RuntimeObject*)L_10, MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429_il2cpp_TypeInfo_var));
		G_B3_0 = L_11;
		if (L_11)
		{
			G_B4_0 = L_11;
			goto IL_0045;
		}
	}
	{
		G_B5_0 = 1;
		goto IL_004a;
	}

IL_0045:
	{
		NullCheck((Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 *)G_B4_0);
		bool L_12 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB((Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 *)G_B4_0, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_12));
	}

IL_004a:
	{
		G_B7_0 = G_B5_0;
		goto IL_0051;
	}

IL_004c:
	{
		NullCheck((Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF *)G_B6_0);
		bool L_13 = Collider_get_enabled_mED644D98C6AC2DF95BD86145E8D31AD7081C76EB((Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF *)G_B6_0, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_13));
	}

IL_0051:
	{
		V_3 = (bool)G_B7_0;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_006a;
		}
	}
	{
		// result = buffer[i].gameObject;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_15 = ___buffer1;
		int32_t L_16 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_15);
		RuntimeObject * L_17 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_15, (int32_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_17);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_17, /*hidden argument*/NULL);
		V_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_18;
		// break;
		goto IL_0079;
	}

IL_006a:
	{
		// for (int i = 0, count = buffer.Count; i < count; ++i)
		int32_t L_19 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_006f:
	{
		// for (int i = 0, count = buffer.Count; i < count; ++i)
		int32_t L_20 = V_1;
		int32_t L_21 = V_2;
		V_4 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_4;
		if (L_22)
		{
			goto IL_0017;
		}
	}

IL_0079:
	{
		// buffer.Clear();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_23 = ___buffer1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_23);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		// return result;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = V_0;
		V_5 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_24;
		goto IL_0085;
	}

IL_0085:
	{
		// }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = V_5;
		return L_25;
	}
}
// UnityEngine.GameObject Unity.Physics.Authoring.PhysicsShapeExtensions::FindTopmostEnabledAncestor<System.Object>(UnityEngine.GameObject,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PhysicsShapeExtensions_FindTopmostEnabledAncestor_TisRuntimeObject_mED96914BDA0878E279EB3B58052D4DEF40DA2E9F_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___shape0, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___buffer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhysicsShapeExtensions_FindTopmostEnabledAncestor_TisRuntimeObject_mED96914BDA0878E279EB3B58052D4DEF40DA2E9F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_4 = NULL;
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * G_B6_0 = NULL;
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * G_B2_0 = NULL;
	MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * G_B4_0 = NULL;
	MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	{
		// shape.GetComponentsInParent(true, buffer);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___shape0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ___buffer1;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0);
		((  void (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, bool, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (bool)1, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// GameObject result = null;
		V_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		// for (var i = buffer.Count - 1; i >= 0; --i)
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = ___buffer1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2);
		int32_t L_3 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
		goto IL_006f;
	}

IL_0017:
	{
		// if ((buffer[i] as UnityCollider)?.enabled ?? (buffer[i] as MonoBehaviour)?.enabled ?? true)
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = ___buffer1;
		int32_t L_5 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4);
		RuntimeObject * L_6 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_7 = (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF *)((Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF *)IsInst((RuntimeObject*)L_6, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_il2cpp_TypeInfo_var));
		G_B2_0 = L_7;
		if (L_7)
		{
			G_B6_0 = L_7;
			goto IL_004c;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_8 = ___buffer1;
		int32_t L_9 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8);
		RuntimeObject * L_10 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_11 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)IsInst((RuntimeObject*)L_10, MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429_il2cpp_TypeInfo_var));
		G_B3_0 = L_11;
		if (L_11)
		{
			G_B4_0 = L_11;
			goto IL_0045;
		}
	}
	{
		G_B5_0 = 1;
		goto IL_004a;
	}

IL_0045:
	{
		NullCheck((Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 *)G_B4_0);
		bool L_12 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB((Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 *)G_B4_0, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_12));
	}

IL_004a:
	{
		G_B7_0 = G_B5_0;
		goto IL_0051;
	}

IL_004c:
	{
		NullCheck((Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF *)G_B6_0);
		bool L_13 = Collider_get_enabled_mED644D98C6AC2DF95BD86145E8D31AD7081C76EB((Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF *)G_B6_0, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_13));
	}

IL_0051:
	{
		V_2 = (bool)G_B7_0;
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_006a;
		}
	}
	{
		// result = buffer[i].gameObject;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_15 = ___buffer1;
		int32_t L_16 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_15);
		RuntimeObject * L_17 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_15, (int32_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_17);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_17, /*hidden argument*/NULL);
		V_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_18;
		// break;
		goto IL_007a;
	}

IL_006a:
	{
		// for (var i = buffer.Count - 1; i >= 0; --i)
		int32_t L_19 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1));
	}

IL_006f:
	{
		// for (var i = buffer.Count - 1; i >= 0; --i)
		int32_t L_20 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_20) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_3;
		if (L_21)
		{
			goto IL_0017;
		}
	}

IL_007a:
	{
		// buffer.Clear();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_22 = ___buffer1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_22);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		// return result;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = V_0;
		V_4 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_23;
		goto IL_0086;
	}

IL_0086:
	{
		// }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = V_4;
		return L_24;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m2E66C1E626886F04E8AEC36183F9E982392C62F3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D * ___callbackFunction2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m2E66C1E626886F04E8AEC36183F9E982392C62F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	bool V_2 = false;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_3 = NULL;
	bool V_4 = false;
	{
		// GetEventChain(root, s_InternalTransformList);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * L_1 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		ExecuteEvents_GetEventChain_m27DBBF6D0FE769C131AB96781E9BFFEDA545F155((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (RuntimeObject*)L_1, /*hidden argument*/NULL);
		// for (var i = 0; i < s_InternalTransformList.Count; i++)
		V_0 = (int32_t)0;
		goto IL_003d;
	}

IL_0011:
	{
		// var transform = s_InternalTransformList[i];
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * L_2 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		int32_t L_3 = V_0;
		NullCheck((List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *)L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_inline((List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *)L_2, (int32_t)L_3, /*hidden argument*/List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_RuntimeMethod_var);
		V_1 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4;
		// if (Execute(transform.gameObject, eventData, callbackFunction))
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = V_1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5, /*hidden argument*/NULL);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_7 = ___eventData1;
		EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D * L_8 = ___callbackFunction2;
		bool L_9 = ((  bool (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_6, (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *)L_7, (EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_2 = (bool)L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0038;
		}
	}
	{
		// return transform.gameObject;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = V_1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_11);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_11, /*hidden argument*/NULL);
		V_3 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_12;
		goto IL_0054;
	}

IL_0038:
	{
		// for (var i = 0; i < s_InternalTransformList.Count; i++)
		int32_t L_13 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_003d:
	{
		// for (var i = 0; i < s_InternalTransformList.Count; i++)
		int32_t L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * L_15 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		NullCheck((List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *)L_15);
		int32_t L_16 = List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_inline((List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *)L_15, /*hidden argument*/List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_14) < ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_0011;
		}
	}
	{
		// return null;
		V_3 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = V_3;
		return L_18;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ExecuteEvents_GetEventHandler_TisRuntimeObject_m5740E26204A115597421DC622828C0601C2BECA8_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_GetEventHandler_TisRuntimeObject_m5740E26204A115597421DC622828C0601C2BECA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	bool V_1 = false;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (root == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = (bool)L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return null;
		V_2 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_004b;
	}

IL_0010:
	{
		// Transform t = root.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = ___root0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3, /*hidden argument*/NULL);
		V_0 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4;
		goto IL_003a;
	}

IL_0019:
	{
		// if (CanHandleEvent<T>(t.gameObject))
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		bool L_7 = ((  bool (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_3 = (bool)L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0032;
		}
	}
	{
		// return t.gameObject;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_9);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_9, /*hidden argument*/NULL);
		V_2 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_10;
		goto IL_004b;
	}

IL_0032:
	{
		// t = t.parent;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = V_0;
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_11, /*hidden argument*/NULL);
		V_0 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_12;
	}

IL_003a:
	{
		// while (t != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_13, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_4 = (bool)L_14;
		bool L_15 = V_4;
		if (L_15)
		{
			goto IL_0019;
		}
	}
	{
		// return null;
		V_2 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_004b;
	}

IL_004b:
	{
		// }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = V_2;
		return L_16;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}

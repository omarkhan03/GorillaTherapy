﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t941F5236BDA57C5BC0EE651FF51B247342AFE701;
// System.Action`1<UnityEngine.GameObject>
struct Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C;
// System.Action`1<UnityEngine.XR.InputDevice>
struct Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider>
struct Action_1_t93E648A399FA4C2F973C405E29D7189C56FE737A;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem>
struct Action_1_tF1EFD363206113AB62CC79E4ABC28A4901B693B7;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>
struct Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume>
struct Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Action`1<Unity.Mathematics.float3>
struct Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor/Region>
struct Action_1_tBE69AE2445D01D21514F8979242309AE250C59D3;
// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>
struct Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333;
// System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8;
// Unity.XR.CoreUtils.Bindings.Variables.BindableEnum`1<UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor/Region>
struct BindableEnum_1_tCC6FC0E0347B92BE0D1BAD0F8C7DAD34D8AAE176;
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct BindableVariableBase_1_tF075B55161CD973AA28BB081CC7E13F360F44F90;
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<Unity.Mathematics.float3>
struct BindableVariableBase_1_t6E41640D2419E25E9579C521963F28A608530041;
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData>
struct BindableVariable_1_t8FDD824B71E4868C9A1011DF94BED5A0049FCF42;
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single>
struct BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C;
// Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettings,UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettingsDatum>
struct DatumProperty_2_tB709D9E7EE778C6E558893216C422FB04F63078F;
// Unity.XR.CoreUtils.Datums.DatumProperty`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>
struct DatumProperty_2_tCD4D1608037774DE058DBA370D45A039BA9E06E6;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable,System.Int32>
struct Dictionary_2_t4D1E2F15B85F862C4DDC2413C2A0E4028E667270;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable,System.Single>
struct Dictionary_2_tA13026C91A8E0CE5AB55DC00628A33C71D2BE3F2;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor,UnityEngine.GameObject>
struct Dictionary_2_t2FB52A1C9A5EF3BE7F06D41CF41259B9A0296ABC;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor,System.Single>
struct Dictionary_2_t1A8FC8C012681D4B964E7A8A383FD3E718078AE9;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor,UnityEngine.Vector3>
struct Dictionary_2_t0D68B802833F74063FEDC522461D7F4742257285;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Interactables.IXRSelectInteractable,UnityEngine.Pose>
struct Dictionary_2_tBF02F25A38E519F312D7EF1C8B204EBDC91AB9A1;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor,UnityEngine.Pose>
struct Dictionary_2_t9B20C3EBA931E014FB6496226DAB71B59F7CC4EC;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor,UnityEngine.Transform>
struct Dictionary_2_tF1266609C0E9EDEC0BE227973F4B2C73474967DD;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider,UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionMediator/LocomotionProviderData>
struct Dictionary_2_t9726FBEC6D5A108E0644CABA58723FA692425AEC;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter>
struct ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRInteractionStrengthFilter>
struct ExposedRegistrationList_1_t7932F633A860258335FD94BBFDE46AC92B1CF84B;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter>
struct ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8;
// System.Func`1<UnityEngine.Vector3>
struct Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC;
// System.Func`3<UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable,UnityEngine.Vector3,UnityEngine.XR.Interaction.Toolkit.Interactables.DistanceInfo>
struct Func_3_t3C59F9322C032EF2EC419F9538F86DFC0F4B1421;
// System.Func`3<Unity.Mathematics.float3,Unity.Mathematics.float3,System.Boolean>
struct Func_3_tE454B2F07459EA885F6D39FCB5E70BF80B11F175;
// System.Func`3<UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor/Region,UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor/Region,System.Boolean>
struct Func_3_tB004E132C6E9CB9FA483CC4E3CE485379D2828F5;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.IAsyncAffordanceStateReceiver>
struct HashSetList_1_t92284BAC91F283150DE3CB869E3E4FB56883AD28;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.ISynchronousAffordanceStateReceiver>
struct HashSetList_1_t2264772D6C39BF21F830E7EF4FA5B6032DCF53FA;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.Interactables.IXRHoverInteractable>
struct HashSetList_1_t52A6279CDC8FAE4460A87A1B6A5E3437D58F5AE2;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.Interactors.IXRHoverInteractor>
struct HashSetList_1_tCF3541C1916DB23E3E8D3E2D2C675B59FE3ACBAF;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionGroup>
struct HashSetList_1_tCE34B4C28F58D67E795B058A35AD8A457BFB1175;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractionStrengthInteractable>
struct HashSetList_1_tF3CBA0C6731B032420F2FEC573A03EE7A351CBC4;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.Interactables.IXRSelectInteractable>
struct HashSetList_1_t1A0488B6A7A99FC77B3DC8ADC7C241B5B2F21789;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor>
struct HashSetList_1_t85FA4F6EDCA9A84D235398F53ED390EE2CE4DC98;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor>
struct HashSetList_1_tC0FA4922B36F37C46BA57A5B55C8B0A1FF78D9A2;
// System.Collections.Generic.HashSet`1<UnityEngine.Collider>
struct HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor>
struct HashSet_1_t91EA27B234497F73858A13093DC591352DFD339A;
// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.InputAction>
struct HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3;
// System.Collections.Generic.HashSet`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.InputSystem.InputAction>
struct IEqualityComparer_1_tCB440C44B4062E7556BE411EE98E72E23AA84374;
// System.Collections.Generic.IEqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
// Unity.XR.CoreUtils.Bindings.Variables.IReadOnlyBindableVariable`1<UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor/Region>
struct IReadOnlyBindableVariable_1_t1F2BE9E50402E707C90C41C06974ED824C410440;
// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.IXRInputValueReader`1<System.Single>
struct IXRInputValueReader_1_tE6C56CC3831F86463CF271FFFFAEA88A1AFFC425;
// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.IXRInputValueReader`1<UnityEngine.Vector2>
struct IXRInputValueReader_1_t3B292CF89AD3EFA514AD2640799BAD4A06619677;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>
struct LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs>
struct LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.Transformers.DropEventArgs>
struct LinkedPool_1_t6A6017AF114EF397084F1333559D0DB9CCE28598;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportingEventArgs>
struct LinkedPool_1_tE20B996FF430FBDC2F5DAA707718C0DDE3646785;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.Transform>
struct LinkedPool_1_t903D30868AECB20DD006FC2E04DDC68D822C3450;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<Unity.XR.CoreUtils.Bindings.IEventBinding>
struct List_1_t60791FB9179CEFADA93C6B032DED2E65CB5DA58F;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Interactables.IXRActivateInteractable>
struct List_1_t4D55B31174BDF30C8D05A7FC6C010069F06BD3BC;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Transformers.IXRGrabTransformer>
struct List_1_tB0C796BACCE72002824004B31D3AFE084C3BFC75;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable>
struct List_1_tC3F61ED5D2119F6F6D5E7C5F5662CB782CCD0724;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Interactables.IXRSelectInteractable>
struct List_1_t96062976A34EF744BABF4798339ADC3741F0CF6C;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE;
// System.Collections.Generic.List`1<Unity.Jobs.JobHandle>
struct List_1_t4A3FBCBC51814DA87A56C303277E401A0E9A8366;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider>
struct List_1_tBB95B7BAA20D6FFAA14C6003919B3C6ECA28F844;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// System.Collections.Generic.List`1<UnityEngine.RaycastHit>
struct List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ShaderContainer>
struct List_1_tAD47FE510B94D41F2CC47130BE91C52577397DD8;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer>
struct List_1_tCFCD970A7548BC894D178194E5028E3E294AF3B9;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputButtonReader>
struct List_1_t488784C52679764AD0C4F820CDD5C10973C9FC9D;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader>
struct List_1_t6AC1E63E8A7AEC25512ADBCAD6FAFB856A230C09;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Interactables.XRInteractableSnapVolume>
struct List_1_t8895C4411EB12FA581B12FF7465DB05C89C0247C;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor/SamplePoint>
struct List_1_t15F57185D4B9071FE0789904F8EC54114E4F8D6D;
// UnityEngine.XR.Interaction.Toolkit.Utilities.SmallRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Transformers.IXRGrabTransformer>
struct SmallRegistrationList_1_t748513BBF6769ED01AAD787FF7698EF51EBEF62D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct TweenableVariableAsyncBase_1_t7FD0BE25E95FFCEE9DE5FDBE93CBFB450DEBCD76;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1<Unity.Mathematics.float3>
struct TweenableVariableAsyncBase_1_tBC224ABEF15BBD66D75B9D20BED7ADB1F273E430;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.Mathematics.float3>
struct TweenableVariableBase_1_t491314D6C5C1BEA5AFEAB55CCB93192270815F82;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs>
struct UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7;
// UnityEngine.Events.UnityAction`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider>
struct UnityEvent_1_tA1590A7C4E6E0836296B3C1CD3F16A1819EB7117;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs>
struct UnityEvent_1_tB85545AD30FFE5714BBEB3B52C9C13A9BEEDB057;
// UnityEngine.Events.UnityEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030;
// UnityEngine.XR.Interaction.Toolkit.Utilities.UnityObjectReferenceCache`1<UnityEngine.InputSystem.InputActionReference>
struct UnityObjectReferenceCache_1_t5037B37A78F59591F798651810A820937FB97158;
// UnityEngine.XR.Interaction.Toolkit.Utilities.UnityObjectReferenceCache`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.IXRInputValueReader`1<System.Single>,UnityEngine.Object>
struct UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D;
// UnityEngine.XR.Interaction.Toolkit.Utilities.UnityObjectReferenceCache`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.IXRInputValueReader`1<UnityEngine.Vector2>,UnityEngine.Object>
struct UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A;
// UnityEngine.XR.Interaction.Toolkit.Utilities.UnityObjectReferenceCache`2<UnityEngine.XR.Interaction.Toolkit.Interactors.Casters.ICurveInteractionCaster,UnityEngine.Object>
struct UnityObjectReferenceCache_2_t0B8B40B163F469549CE5B2786AEE37072565B7C4;
// UnityEngine.XR.Interaction.Toolkit.Utilities.UnityObjectReferenceCache`2<UnityEngine.XR.Interaction.Toolkit.Attachment.IInteractionAttachController,UnityEngine.Object>
struct UnityObjectReferenceCache_2_t20A1D9441F1A77A21D178862E228CC9D482299A6;
// UnityEngine.XR.Interaction.Toolkit.Utilities.UnityObjectReferenceCache`2<UnityEngine.XR.Interaction.Toolkit.Interactors.Casters.IInteractionCaster,UnityEngine.Object>
struct UnityObjectReferenceCache_2_t0EFBCB93BA7F378B34012EAD24BDCF46C2D38A01;
// UnityEngine.XR.Interaction.Toolkit.Utilities.UnityObjectReferenceCache`2<UnityEngine.XR.Interaction.Toolkit.UI.IUIModelUpdater,UnityEngine.Object>
struct UnityObjectReferenceCache_2_tCF0F7C2D1AFDB9A63B5336AB49F47D39086C9CD6;
// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<System.Single>
struct XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5;
// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<UnityEngine.Vector2>
struct XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0;
// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.InputSystem.InputAction>[]
struct SlotU5BU5D_t0498CBAD61DD72D459F822B584CCCEEA24C72481;
// System.Collections.Generic.HashSet`1/Slot<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>[]
struct SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
// UnityEngine.XR.InputDevice[]
struct InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ShaderContainer[]
struct ShaderContainerU5BU5D_t53968842274BD0BFC82C1E8C4CE52413D6A3CA13;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// Unity.Mathematics.float3[]
struct float3U5BU5D_t94C1DF28FA7E0FA017D0C77B720D9FF3519E0D45;
// UnityEngine.InputSystem.InputDevice/ControlBitRangeNode[]
struct ControlBitRangeNodeU5BU5D_t912A404149DE6D350D1735A026182C409C510F27;
// UnityEngine.XR.Interaction.Toolkit.ActionBasedController
struct ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68;
// UnityEngine.XR.Interaction.Toolkit.ActivateEvent
struct ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// Unity.XR.CoreUtils.Datums.AnimationCurveDatumProperty
struct AnimationCurveDatumProperty_t3E647A9E4598F5D7E85766A3449759FA74DBC485;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.BaseTeleportationInteractable
struct BaseTeleportationInteractable_t56762CCCEAD36A86FD0B296FBC7CFBC261DEAB71;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// Unity.XR.CoreUtils.Bindings.BindingsGroup
struct BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing.ClimbProvider
struct ClimbProvider_t5BF07C417BEDAD0F7136BC7B72F433F1D8C77C10;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ClimbTeleportDestinationIndicator
struct ClimbTeleportDestinationIndicator_t95EC8E13B0E057810A00B57C40978485340B4458;
// UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing.ClimbTeleportInteractor
struct ClimbTeleportInteractor_t9AD38301B02FCB18FB1FB1B84192C05C731D1083;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.ContinuousMoveProvider
struct ContinuousMoveProvider_t1F9AD0924053780B7CF1F5C80D672C5D850C47B9;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerAnimator
struct ControllerAnimator_t4F826CECB4A9FBEFDD4EB07B4C5104EFDAFC0D88;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager
struct ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent
struct DeactivateEvent_tFE44262C3D8377F947FD46D4561BB9DAC7E0785D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DestroySelf
struct DestroySelf_tDC5BD53F0F2DA7DB2A559BAC50EA806440226B1F;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider
struct DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A;
// UnityEngine.XR.Interaction.Toolkit.FocusEnterEvent
struct FocusEnterEvent_tF5369B418FFFBE1C6FDE6EBDDD8B9E412A32CD90;
// UnityEngine.XR.Interaction.Toolkit.FocusExitEvent
struct FocusExitEvent_tFAE8003B7B5A47FB4D9C5BB14D7A3273AF8931AE;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager
struct GazeInputManager_t76600ACADAE6718BABD1166EBED065FFD8C90C83;
// UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics.HapticImpulsePlayer
struct HapticImpulsePlayer_tE153B969F453F119AF5B0D808FBA94D026A54A58;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs
struct HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs
struct HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6;
// Unity.XR.CoreUtils.Bindings.IEventBinding
struct IEventBinding_tD24AFBA7F41D64F17C1FA501D200A3B6439C4CBB;
// UnityEngine.XR.Interaction.Toolkit.Filtering.IMultiPokeStateDataProvider
struct IMultiPokeStateDataProvider_tD966DFBE873FAF8D39E820B94A6795B4A2EFA73F;
// UnityEngine.XR.Interaction.Toolkit.Filtering.IPokeStateDataProvider
struct IPokeStateDataProvider_t14F2B731F2979D1138EB70A11E36F274A23DC91C;
// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.ITeleportationVolumeAnchorFilter
struct ITeleportationVolumeAnchorFilter_tEB8EF834201983BE3F798013E13B3C1E59CF8D06;
// UnityEngine.XR.Interaction.Toolkit.UI.IUIInteractor
struct IUIInteractor_t5E87AB04096E6A5D1AF1D291E2096599065E94EA;
// UnityEngine.XR.Interaction.Toolkit.Interactables.IXRActivateInteractable
struct IXRActivateInteractable_t5C081E237D497F46555E525333795EC2A8BA5EAB;
// UnityEngine.XR.Interaction.Toolkit.Gaze.IXRAimAssist
struct IXRAimAssist_t6F48E543FC58FB68B147F70D086492B00FDA315D;
// UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.IXRCustomReticleProvider
struct IXRCustomReticleProvider_t717D26438EB60DF30CAC0002FB11616BD3A0C825;
// UnityEngine.XR.Interaction.Toolkit.Interactables.IXRFocusInteractable
struct IXRFocusInteractable_tBEBDF218F441543B0FD2ABA3A1AB1C47A4564D3C;
// UnityEngine.XR.Interaction.Toolkit.Interactables.IXRHoverInteractable
struct IXRHoverInteractable_tB88E3F220034149EC6037AB0126FC607CC2CF219;
// UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable
struct IXRInteractable_t094DA697CF40A061C2820FDE5B5838D08D7E9609;
// UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionGroup
struct IXRInteractionGroup_tE179A88275A6C646BAC9BF131BDE92552FC664C0;
// UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractionStrengthInteractable
struct IXRInteractionStrengthInteractable_t0C79B1621B5D4987893370F8AF403574853D44B7;
// UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor
struct IXRInteractor_tD834ADD95D200FFEC6473A23E515DCD02B33CF97;
// UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider
struct IXRRayProvider_t71198F3B334688B7D9AAEFCF0A7BCD0372E24878;
// UnityEngine.XR.Interaction.Toolkit.Interactables.IXRSelectInteractable
struct IXRSelectInteractable_t647A7E3382497396EA1A9546574AEC0FBC9BC4AF;
// UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor
struct IXRSelectInteractor_tF89F25345282BDE348CC5A11BBACE44810BD29CC;
// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter
struct IXRTargetFilter_t51750E0C671ECA90F38CC75BCD395285E61D2778;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText
struct IncrementUIText_tF29B22345E086474C294CAFCFCEF0F336CA34359;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionMediator
struct LocomotionMediator_tFF0E600A153C909C211466942B7D4C3DA6105AD6;
// UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider
struct LocomotionProvider_t359A39ECDB2224E3FF09583CF055A3D19A3557BD;
// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem
struct LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MaterialPipelineHandler
struct MaterialPipelineHandler_t0FF80ADB33BB30721BC1DF67A7F59847C0582985;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle
struct MultiAnchorTeleportReticle_t4D51659966078FEA51FBCD719B78BE3479F7A357;
// UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor
struct NearFarInteractor_t43B1C14C2D72CB717E3624B0759E265F5D215E9C;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner
struct ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.XR.Interaction.Toolkit.UI.RegisteredUIInteractorCache
struct RegisteredUIInteractorCache_t81419313AA113B206AF3FF94CD9D3B64A09CE413;
// UnityEngine.Rendering.RenderPipelineAsset
struct RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.RotationAxisLockGrabTransformer
struct RotationAxisLockGrabTransformer_t607B7577937EE7AD454A59499B6266FBA4832DD7;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ShaderContainer
struct ShaderContainer_t5449FFD0589156259FBD0A40C97956BAB7A967C1;
// UnityEngine.XR.Interaction.Toolkit.Feedback.SimpleAudioFeedback
struct SimpleAudioFeedback_tF566C7044568575261BDCE78F2AF162675710B74;
// UnityEngine.XR.Interaction.Toolkit.Feedback.SimpleHapticFeedback
struct SimpleHapticFeedback_t87E1E96B335ECBB5206B34437E25F65F200BE9D6;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.TeleportVolumeAnchorAffordanceStateLink
struct TeleportVolumeAnchorAffordanceStateLink_t7DA616C919D93B9F3BAE4A646B8A1C035DE7C4AD;
// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettings
struct TeleportVolumeDestinationSettings_t997F47ECBFA0D750BC9F96D8EF12222BD9F332C2;
// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettingsDatum
struct TeleportVolumeDestinationSettingsDatum_t514DEBABFFD4194BEF98BD2C91B69E100CCC991E;
// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettingsDatumProperty
struct TeleportVolumeDestinationSettingsDatumProperty_tDD5453B35B45AEB0427BCD5BE987332B3CD14347;
// UnityEngine.XR.Interaction.Toolkit.Utilities.TeleportationMonitor
struct TeleportationMonitor_tC9AB34520A1A0D6D2F18DD2067601DE1405C72C6;
// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume
struct TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0;
// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationProvider
struct TeleportationProvider_t3FAF889EFC7631ED0DA49A1E0C4CAD650002A9E5;
// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportingEvent
struct TeleportingEvent_t39D1F59EE7E9B53095E251AF1774ECD53152BFBD;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEnterEvent
struct UIHoverEnterEvent_t4C957A3405A5D9CB867C5EC446620BB4BA7E7298;
// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs
struct UIHoverEventArgs_tC712F3F829391F25C89B9951234415D4C354DC39;
// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverExitEvent
struct UIHoverExitEvent_t63E5E9C921AFB8E2CB9CA4D32882DD4F62CD509B;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.Vector3TweenableVariable
struct Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C;
// UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer
struct XRBaseGrabTransformer_t928B47DA234790117C35A173C92AF6A7776F48AE;
// UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable
struct XRBaseInteractable_t76185BD6DF3BC86B3CDD82E6368C3C7157E39AE4;
// UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor
struct XRBaseInteractor_t4AF6FC9A7611B9417B4A43E11704AFF85B4A0FB4;
// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter
struct XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F;
// UnityEngine.XR.Interaction.Toolkit.Locomotion.XRBodyGroundPosition
struct XRBodyGroundPosition_t270052FF3D381FE09EE21FA1E458C43C4FCEC1C0;
// UnityEngine.XR.Interaction.Toolkit.Locomotion.XRBodyTransformer
struct XRBodyTransformer_t913A5C6DC68A5C1C68EDF753FC42FDD67F1AE772;
// UnityEngine.XR.Interaction.Toolkit.Locomotion.XRCameraForwardXZAlignment
struct XRCameraForwardXZAlignment_tFD0381AA640699170A0692F986B53BE7163C26C6;
// UnityEngine.XR.Interaction.Toolkit.XRController
struct XRController_t928E104C899E51FDE12C0A8AC68874587C46C28F;
// UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable
struct XRGrabInteractable_tAE7E2F24377399C9B5159179E4B43EA6AA55531B;
// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputButtonReader
struct XRInputButtonReader_t0727CFE55AD1B8ECEFCD382660D9AC0DA1639515;
// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader
struct XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider
struct XRInteractableAffordanceStateProvider_tBF33F0A41B1960C8FE2CCAFC6228E07D8A459C98;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD;
// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE;
// UnityEngine.XR.Interaction.Toolkit.Locomotion.XROriginMovement
struct XROriginMovement_t4563D869911F8FF9231EB531B6948E5ABB4933C3;
// UnityEngine.XR.Interaction.Toolkit.Locomotion.XROriginUpAlignment
struct XROriginUpAlignment_t915E61DDE7EFE2168DCDA106B090AC7D0A1F018A;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance
struct XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC;
// UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor
struct XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649;
// UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController
struct XRScreenSpaceController_t046F18C2FE01EB347832DB82D42C84131771FF17;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor/LogicalInputState
struct LogicalInputState_tC8869ADC07CFDF5E60D09DC140CC05EF0227843A;
// UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor/RaycastHitComparer
struct RaycastHitComparer_tFAAC0D68E449ACF3BDD05D50F8CC6BEFF2B33B33;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tBE69AE2445D01D21514F8979242309AE250C59D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMultiPokeStateDataProvider_tD966DFBE873FAF8D39E820B94A6795B4A2EFA73F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPokeStateDataProvider_t14F2B731F2979D1138EB70A11E36F274A23DC91C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyBindableVariable_1_t1F2BE9E50402E707C90C41C06974ED824C410440_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyBindableVariable_1_tD608177C44612AEF9CD25AEDCA15F1734DD0E073_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITeleportationVolumeAnchorFilter_tEB8EF834201983BE3F798013E13B3C1E59CF8D06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRInteractable_t094DA697CF40A061C2820FDE5B5838D08D7E9609_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral011D3DCC095E581ECDB235DA85D0318CB7DAE281;
IL2CPP_EXTERN_C String_t* _stringLiteral08922C02E680D90FAAB0862833A88225C5A1F397;
IL2CPP_EXTERN_C String_t* _stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4;
IL2CPP_EXTERN_C String_t* _stringLiteral362752735A1275A35E486D0F84ACEF478DC7C88E;
IL2CPP_EXTERN_C String_t* _stringLiteral675D495E61C139628601D1F560A558803C58CB67;
IL2CPP_EXTERN_C String_t* _stringLiteral8283638E5854A54022BF2CFA5BA3EBEC021A10DF;
IL2CPP_EXTERN_C String_t* _stringLiteral91BEF5D9E8C19A7BAA9335746C74FFE9F0A218C1;
IL2CPP_EXTERN_C String_t* _stringLiteral9A6A18E5289758325C81123AD9F04DC1AF11E63A;
IL2CPP_EXTERN_C String_t* _stringLiteral9B4FEEFA76B93D58B6E47CD9FF76F6E287D0D321;
IL2CPP_EXTERN_C String_t* _stringLiteral9BCF8359B4696020E13074D2CCAD8107559B7426;
IL2CPP_EXTERN_C String_t* _stringLiteralAE556C5D923A68B00D17767856C66003D52D6CEC;
IL2CPP_EXTERN_C String_t* _stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9;
IL2CPP_EXTERN_C String_t* _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B;
IL2CPP_EXTERN_C String_t* _stringLiteralC125AF6E50565398C00BBB6DCAB135E16BC99BC1;
IL2CPP_EXTERN_C String_t* _stringLiteralCAC9FA4EA913C7FEEEFEEA8D8C3FEF0ADF872886;
IL2CPP_EXTERN_C String_t* _stringLiteralD37B382C1D3DE2BC274D3AF06C5B5C0484887B86;
IL2CPP_EXTERN_C String_t* _stringLiteralF35C02D0118C69B6ADE22DDE2F7B35FDD2B1AD7C;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF94527EDAE64E94D774AA53AC792C267D77F2755;
IL2CPP_EXTERN_C const RuntimeMethod* BindableVariableBase_1_Subscribe_mC4E18EDA53B1AF95B57D4D6976353EC198EA6608_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ClimbTeleportDestinationIndicator_OnClimbTeleportDestinationAnchorChanged_m959E66F69F6F86274CD38FF03814864A1D0A4C48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ClimbTeleportDestinationIndicator_OnInteractorHoverEntered_mE5C10F13BAE27A02F1D23AAB83CB7BEEE503A566_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ClimbTeleportDestinationIndicator_OnInteractorHoverExited_m0FD7540E9118A636666D699F21D07E3FD115BB27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentLocatorUtility_1_TryFindComponent_m95BCBE83B3C4A1C9218DFDF113FFACB3E8CDBCA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisIMultiPokeStateDataProvider_tD966DFBE873FAF8D39E820B94A6795B4A2EFA73F_m547FA5110DC4523EAC78FD8D62A6E0EA8378AB58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisIPokeStateDataProvider_t14F2B731F2979D1138EB70A11E36F274A23DC91C_m56533D22EBBEEE60BD440ECE3B5EF450D8F5DE62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisIXRInteractable_t094DA697CF40A061C2820FDE5B5838D08D7E9609_m1731D74F9EAB2EA20BB46A90D325A9B50C7E2DFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisXRInteractableAffordanceStateProvider_tBF33F0A41B1960C8FE2CCAFC6228E07D8A459C98_m894CCED6E7CD12BF58675A601F33C47F63578BD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ControllerInputActionManager_OnCancelTeleport_m4BDF184D63E154479DDB39CEF5798CD7F69563DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ControllerInputActionManager_OnNearFarSelectionRegionChanged_m726DFC0ACC75AB83814D394FFD8CD764EF071757_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ControllerInputActionManager_OnRaySelectEntered_m05A00F5AC9CC73F9641F03CE853F21F20338B7B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ControllerInputActionManager_OnRaySelectExited_m2043AA63005912E1603B0017B70B7A089888E0B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ControllerInputActionManager_OnStartLocomotion_m2753A0F4D2ECB0DC422EEE2D1B6BEC4C149EE11C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ControllerInputActionManager_OnStartTeleport_mE7F99274DE90EC5AD8234BB0D6010C5FC96AC9FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ControllerInputActionManager_OnStopLocomotion_m19B6191B67AFEE79180D158CB052307E0ACF4B42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ControllerInputActionManager_OnUIHoverEntered_m7747AA4001671507477941139B2049FF990A20D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ControllerInputActionManager_OnUIHoverExited_m20EE4DA45F2465E8A6425E87F69020C5882533C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DatumProperty_2_get_Value_m2E6E6BAEAF37EBDC365555A571764C3E14842340_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8E4F22D5A95CD8650AE763B2C1E32275D765919E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF7167BCE82C30E7D09082FFCA3F3EFFD32B186CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6A20E0100D9D352AF8D1D6B6ACB174E846DCF156_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFAC408E08BBD06FE731A9E84F5E79461F23EACBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m108DACDDBBFB5E6EED33A49351BE602DEEC6C44E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFB31F2643918A411B2F1539CA180A763D0200945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GazeInputManager_OnDeviceChange_m5A5EA7E87A46CAEC0CA21EA476B0DAEBB8F2885E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GazeInputManager_OnDeviceConnected_mFD98427178DBDAF1C7B406FEA28161D3186F2E68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mFA65768161AFFCF3635EDD51B9D5A27E1ECC3E53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_mCD1D1786A37A068E7B80418B00BD4F2CBF2BEF0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mD28F97EDC08E91C2F50CDF8E86AF228489358EA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_m830B4E1CB08A93B4C9803638B3AC2CB9925EB52E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mEC725D71089D3258528F69087BB3D275111F60C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiAnchorTeleportReticle_OnDestinationAnchorChanged_mB76D507A3C08350961E25C93D15EAC90A3492A20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArray_1_GetEnumerator_m40DC2BB2BC3C855369753E8780E2B2DE6F38E88C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TeleportVolumeAnchorAffordanceStateLink_OnDestinationAnchorChanged_m4185B70F82A1436A3AFCEC0262D6D99F647FA737_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenableVariableAsyncBase_1_Dispose_m7D9825BEBF868FFDC835F08406D9E9AD17F53E32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenableVariableBase_1_HandleTween_m61752C0D7316DD05AB1C8E10319F47902D4CDCD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenableVariableBase_1_set_target_m3127A21F0C2EF40FA4604D603803BA53DE604337_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mFFC598528B87DB66F65FC395BA09A0319CD2BE0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m2DA1D95CA656B45F334764F0D14DC4FC105D3206_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m01B6B9BBA6AC264F094CE87EA45D542DCAD7B59E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRInputValueReader_1_ReadValue_m5F62621C89CC35067EDFEAE1EBBE315554767369_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRInputValueReader_1_ReadValue_mAFA366F0FF0345B1A9F16C19F1815D10E427860D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRInputValueReader_1__ctor_m2D198A41FE129CDD40C6FDBF537BC35E3C4B6CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRInputValueReader_1__ctor_mCCE3009EBDA5485C04EB7D2EDC884E3C4F0F185B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPokeFollowAffordance_OnPokeStateDataUpdated_m47E524438FBC3D238855A42C176A43355387137F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPokeFollowAffordance_OnTransformTweenableVariableUpdated_m45F75BBA331A940327AD949A7C0939F24F6B57B2_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC1F2131D82E2A9E70B1FFB012BBCEB8A6BE4A8AF 
{
};

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor/Region>
struct BindableVariableBase_1_tA782FAC846D4B6073D6948D95EBF25B41CFAC7AD  : public RuntimeObject
{
	// System.Action`1<T> Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::valueUpdated
	Action_1_tBE69AE2445D01D21514F8979242309AE250C59D3* ___valueUpdated_0;
	// T Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_InternalValue
	int32_t ___m_InternalValue_1;
	// System.Boolean Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_CheckEquality
	bool ___m_CheckEquality_2;
	// System.Boolean Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_IsInitialized
	bool ___m_IsInitialized_3;
	// System.Func`3<T,T,System.Boolean> Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_EqualityMethod
	Func_3_tB004E132C6E9CB9FA483CC4E3CE485379D2828F5* ___m_EqualityMethod_4;
	// System.Int32 Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_BindingCount
	int32_t ___m_BindingCount_5;
};

// Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettings,UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettingsDatum>
struct DatumProperty_2_tB709D9E7EE778C6E558893216C422FB04F63078F  : public RuntimeObject
{
	// System.Boolean Unity.XR.CoreUtils.Datums.DatumProperty`2::m_UseConstant
	bool ___m_UseConstant_0;
	// TValue Unity.XR.CoreUtils.Datums.DatumProperty`2::m_ConstantValue
	TeleportVolumeDestinationSettings_t997F47ECBFA0D750BC9F96D8EF12222BD9F332C2* ___m_ConstantValue_1;
	// TDatum Unity.XR.CoreUtils.Datums.DatumProperty`2::m_Variable
	TeleportVolumeDestinationSettingsDatum_t514DEBABFFD4194BEF98BD2C91B69E100CCC991E* ___m_Variable_2;
};

// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.InputAction>
struct HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t0498CBAD61DD72D459F822B584CCCEEA24C72481* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ShaderContainer>
struct List_1_tAD47FE510B94D41F2CC47130BE91C52577397DD8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ShaderContainerU5BU5D_t53968842274BD0BFC82C1E8C4CE52413D6A3CA13* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tAD47FE510B94D41F2CC47130BE91C52577397DD8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ShaderContainerU5BU5D_t53968842274BD0BFC82C1E8C4CE52413D6A3CA13* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
struct BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E  : public RuntimeObject
{
	// UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactorObject>k__BackingField
	RuntimeObject* ___U3CinteractorObjectU3Ek__BackingField_0;
	// UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactableObject>k__BackingField
	RuntimeObject* ___U3CinteractableObjectU3Ek__BackingField_1;
};

// Unity.XR.CoreUtils.Bindings.BindingsGroup
struct BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Unity.XR.CoreUtils.Bindings.IEventBinding> Unity.XR.CoreUtils.Bindings.BindingsGroup::m_Bindings
	List_1_t60791FB9179CEFADA93C6B032DED2E65CB5DA58F* ___m_Bindings_0;
};

// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ShaderContainer
struct ShaderContainer_t5449FFD0589156259FBD0A40C97956BAB7A967C1  : public RuntimeObject
{
	// UnityEngine.Material UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ShaderContainer::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_0;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ShaderContainer::useSRPShaderName
	bool ___useSRPShaderName_1;
	// System.String UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ShaderContainer::scriptableRenderPipelineShaderName
	String_t* ___scriptableRenderPipelineShaderName_2;
	// UnityEngine.Shader UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ShaderContainer::scriptableRenderPipelineShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___scriptableRenderPipelineShader_3;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ShaderContainer::useBuiltinShaderName
	bool ___useBuiltinShaderName_4;
	// System.String UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ShaderContainer::builtInPipelineShaderName
	String_t* ___builtInPipelineShaderName_5;
	// UnityEngine.Shader UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ShaderContainer::builtInPipelineShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___builtInPipelineShader_6;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettings
struct TeleportVolumeDestinationSettings_t997F47ECBFA0D750BC9F96D8EF12222BD9F332C2  : public RuntimeObject
{
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettings::m_EnableDestinationEvaluationDelay
	bool ___m_EnableDestinationEvaluationDelay_0;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettings::m_DestinationEvaluationDelayTime
	float ___m_DestinationEvaluationDelayTime_1;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettings::m_PollForDestinationChange
	bool ___m_PollForDestinationChange_2;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettings::m_DestinationPollFrequency
	float ___m_DestinationPollFrequency_3;
	// UnityEngine.Object UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettings::m_DestinationFilterObject
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_DestinationFilterObject_4;
	// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.ITeleportationVolumeAnchorFilter UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettings::m_DestinationEvaluationFilter
	RuntimeObject* ___m_DestinationEvaluationFilter_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettings::m_AssignedFilter
	bool ___m_AssignedFilter_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader
struct XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59  : public RuntimeObject
{
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader/InputSourceMode UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader::m_InputSourceMode
	int32_t ___m_InputSourceMode_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader::m_InputAction
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_InputAction_1;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader::m_InputActionReference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_InputActionReference_2;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.UnityObjectReferenceCache`1<UnityEngine.InputSystem.InputActionReference> UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader::m_InputActionReferenceCache
	UnityObjectReferenceCache_1_t5037B37A78F59591F798651810A820937FB97158* ___m_InputActionReferenceCache_3;
};

// Unity.XR.CoreUtils.Bindings.Variables.BindableEnum`1<UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor/Region>
struct BindableEnum_1_tCC6FC0E0347B92BE0D1BAD0F8C7DAD34D8AAE176  : public BindableVariableBase_1_tA782FAC846D4B6073D6948D95EBF25B41CFAC7AD
{
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>
struct Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_Array
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_Index
	int32_t ___m_Index_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ShaderContainer>
struct Enumerator_t1B566B4B8021293BDA76FB2466677DF975ACB8DF 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tAD47FE510B94D41F2CC47130BE91C52577397DD8* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ShaderContainer_t5449FFD0589156259FBD0A40C97956BAB7A967C1* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_Array
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_Index
	int32_t ___m_Index_3;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// Unity.Collections.NativeArray`1<System.Single>
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.Mathematics.float3>
struct NativeArray_1_tEDE9DAD2CAE5954286BC0EF394A57ED0AC69FEE6 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>
struct ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider>
struct UnityEvent_1_tA1590A7C4E6E0836296B3C1CD3F16A1819EB7117  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs>
struct UnityEvent_1_tB85545AD30FFE5714BBEB3B52C9C13A9BEEDB057  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.ValueTuple`2<System.Int32,System.Int32>
struct ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D 
{
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;
};

// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<System.Single>
struct XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5  : public XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59
{
	// UnityEngine.Object UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1::m_ObjectReferenceObject
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_ObjectReferenceObject_4;
	// TValue UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1::m_ManualValue
	float ___m_ManualValue_5;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.IXRInputValueReader`1<TValue> UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1::<bypass>k__BackingField
	RuntimeObject* ___U3CbypassU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1::m_CallingBypass
	bool ___m_CallingBypass_7;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.UnityObjectReferenceCache`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.IXRInputValueReader`1<TValue>,UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1::m_ObjectReference
	UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* ___m_ObjectReference_8;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;
};

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs
struct HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
};

// UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs
struct HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs::<isCanceled>k__BackingField
	bool ___U3CisCanceledU3Ek__BackingField_3;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD 
{
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;
};

struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystemCache_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};

// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F 
{
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
struct InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 
{
	// System.UInt32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Bits
	uint32_t ___m_Bits_0;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Mask
	int32_t ___m_Mask_1;
};

// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.PhysicsScene
struct PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE 
{
	// System.Int32 UnityEngine.PhysicsScene::m_Handle
	int32_t ___m_Handle_0;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
};

// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::<isCanceled>k__BackingField
	bool ___U3CisCanceledU3Ek__BackingField_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettingsDatumProperty
struct TeleportVolumeDestinationSettingsDatumProperty_tDD5453B35B45AEB0427BCD5BE987332B3CD14347  : public DatumProperty_2_tB709D9E7EE778C6E558893216C422FB04F63078F
{
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Unity.Mathematics.float3
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	// System.Single Unity.Mathematics.float3::x
	float ___x_0;
	// System.Single Unity.Mathematics.float3::y
	float ___y_1;
	// System.Single Unity.Mathematics.float3::z
	float ___z_2;
};

struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_StaticFields
{
	// Unity.Mathematics.float3 Unity.Mathematics.float3::zero
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___zero_3;
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<Unity.Mathematics.float3>
struct BindableVariableBase_1_t6E41640D2419E25E9579C521963F28A608530041  : public RuntimeObject
{
	// System.Action`1<T> Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::valueUpdated
	Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B* ___valueUpdated_0;
	// T Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_InternalValue
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___m_InternalValue_1;
	// System.Boolean Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_CheckEquality
	bool ___m_CheckEquality_2;
	// System.Boolean Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_IsInitialized
	bool ___m_IsInitialized_3;
	// System.Func`3<T,T,System.Boolean> Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_EqualityMethod
	Func_3_tE454B2F07459EA885F6D39FCB5E70BF80B11F175* ___m_EqualityMethod_4;
	// System.Int32 Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_BindingCount
	int32_t ___m_BindingCount_5;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<UnityEngine.Vector2>
struct XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0  : public XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59
{
	// UnityEngine.Object UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1::m_ObjectReferenceObject
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_ObjectReferenceObject_4;
	// TValue UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1::m_ManualValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ManualValue_5;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.IXRInputValueReader`1<TValue> UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1::<bypass>k__BackingField
	RuntimeObject* ___U3CbypassU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1::m_CallingBypass
	bool ___m_CallingBypass_7;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.UnityObjectReferenceCache`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.IXRInputValueReader`1<TValue>,UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1::m_ObjectReference
	UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* ___m_ObjectReference_8;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB  : public UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008
{
};

// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832  : public UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26
{
};

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField_40;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::m_ByteOffset
	uint32_t ___m_ByteOffset_41;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_42;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_43;
};

struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5_StaticFields
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInvalid
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatInvalid_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSBit_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUInt_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUShort_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSByte_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatLong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatULong_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatFloat_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatDouble_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatQuaternion_32;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Short_34;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Short_35;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Byte_36;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Byte_37;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatPose
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatPose_38;
};

// Unity.Jobs.JobHandle
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;
};

// UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve
struct NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 
{
	// Unity.Collections.NativeArray`1<System.Single> UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve::m_Values
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___m_Values_0;
	// UnityEngine.WrapMode UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve::m_PreWrapMode
	int32_t ___m_PreWrapMode_1;
	// UnityEngine.WrapMode UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve::m_PostWrapMode
	int32_t ___m_PostWrapMode_2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData
struct PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032 
{
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<meetsRequirements>k__BackingField
	bool ___U3CmeetsRequirementsU3Ek__BackingField_0;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<pokeInteractionPoint>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpokeInteractionPointU3Ek__BackingField_1;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<axisAlignedPokeInteractionPoint>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<interactionStrength>k__BackingField
	float ___U3CinteractionStrengthU3Ek__BackingField_3;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<axisNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CaxisNormalU3Ek__BackingField_4;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<target>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtargetU3Ek__BackingField_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData
struct PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032_marshaled_pinvoke
{
	int32_t ___U3CmeetsRequirementsU3Ek__BackingField_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpokeInteractionPointU3Ek__BackingField_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2;
	float ___U3CinteractionStrengthU3Ek__BackingField_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CaxisNormalU3Ek__BackingField_4;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtargetU3Ek__BackingField_5;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData
struct PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032_marshaled_com
{
	int32_t ___U3CmeetsRequirementsU3Ek__BackingField_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpokeInteractionPointU3Ek__BackingField_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2;
	float ___U3CinteractionStrengthU3Ek__BackingField_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CaxisNormalU3Ek__BackingField_4;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtargetU3Ek__BackingField_5;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0  : public UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8
{
};

// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6  : public UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B
{
};

// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportRequest
struct TeleportRequest_t88D6CC9390D292F5D67466F9C488AE073346BCD1 
{
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportRequest::destinationPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___destinationPosition_0;
	// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportRequest::destinationRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___destinationRotation_1;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportRequest::requestTime
	float ___requestTime_2;
	// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.MatchOrientation UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportRequest::matchOrientation
	int32_t ___matchOrientation_3;
};

// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEnterEvent
struct UIHoverEnterEvent_t4C957A3405A5D9CB867C5EC446620BB4BA7E7298  : public UnityEvent_1_tB85545AD30FFE5714BBEB3B52C9C13A9BEEDB057
{
};

// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverExitEvent
struct UIHoverExitEvent_t63E5E9C921AFB8E2CB9CA4D32882DD4F62CD509B  : public UnityEvent_1_tB85545AD30FFE5714BBEB3B52C9C13A9BEEDB057
{
};

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float3>
struct BindableVariable_1_tB68DAB26AE7AF6E274A845BB487AEE92F9E1DAA0  : public BindableVariableBase_1_t6E41640D2419E25E9579C521963F28A608530041
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// System.Boolean UnityEngine.InputSystem.InputControl::m_CachedValueIsStale
	bool ___m_CachedValueIsStale_18;
	// System.Boolean UnityEngine.InputSystem.InputControl::m_UnprocessedCachedValueIsStale
	bool ___m_UnprocessedCachedValueIsStale_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState_20;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue_21;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.InputControl::m_OptimizedControlDataType
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_OptimizedControlDataType_23;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData
struct ImplementationData_t175CD17EADED010E9B5BA19575E4AD41F2FE67AC 
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData::<hoverTargets>k__BackingField
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___U3ChoverTargetsU3Ek__BackingField_0;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData::<pointerTarget>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerTargetU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData::<isDragging>k__BackingField
	bool ___U3CisDraggingU3Ek__BackingField_2;
	// System.Single UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData::<pressedTime>k__BackingField
	float ___U3CpressedTimeU3Ek__BackingField_3;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_4;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData::<pressedPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressedPositionU3Ek__BackingField_5;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData::<pressedWorldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpressedWorldPositionU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData::<pressedRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpressedRaycastU3Ek__BackingField_7;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData::<pressedGameObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpressedGameObjectU3Ek__BackingField_8;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData::<pressedGameObjectRaw>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpressedGameObjectRawU3Ek__BackingField_9;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData::<draggedGameObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CdraggedGameObjectU3Ek__BackingField_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData
struct ImplementationData_t175CD17EADED010E9B5BA19575E4AD41F2FE67AC_marshaled_pinvoke
{
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___U3ChoverTargetsU3Ek__BackingField_0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerTargetU3Ek__BackingField_1;
	int32_t ___U3CisDraggingU3Ek__BackingField_2;
	float ___U3CpressedTimeU3Ek__BackingField_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressedPositionU3Ek__BackingField_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpressedWorldPositionU3Ek__BackingField_6;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke ___U3CpressedRaycastU3Ek__BackingField_7;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpressedGameObjectU3Ek__BackingField_8;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpressedGameObjectRawU3Ek__BackingField_9;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CdraggedGameObjectU3Ek__BackingField_10;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData
struct ImplementationData_t175CD17EADED010E9B5BA19575E4AD41F2FE67AC_marshaled_com
{
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___U3ChoverTargetsU3Ek__BackingField_0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerTargetU3Ek__BackingField_1;
	int32_t ___U3CisDraggingU3Ek__BackingField_2;
	float ___U3CpressedTimeU3Ek__BackingField_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressedPositionU3Ek__BackingField_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpressedWorldPositionU3Ek__BackingField_6;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com ___U3CpressedRaycastU3Ek__BackingField_7;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpressedGameObjectU3Ek__BackingField_8;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpressedGameObjectRawU3Ek__BackingField_9;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CdraggedGameObjectU3Ek__BackingField_10;
};

// System.Action`1<UnityEngine.GameObject>
struct Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.XR.InputDevice>
struct Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>
struct Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume>
struct Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.Mathematics.float3>
struct Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor/Region>
struct Action_1_tBE69AE2445D01D21514F8979242309AE250C59D3  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>
struct Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333  : public MulticastDelegate_t
{
};

// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.Mathematics.float3>
struct TweenableVariableBase_1_t491314D6C5C1BEA5AFEAB55CCB93192270815F82  : public BindableVariable_1_tB68DAB26AE7AF6E274A845BB487AEE92F9E1DAA0
{
	// UnityEngine.AnimationCurve UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1::m_AnimationCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_AnimationCurve_7;
	// T UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1::m_Target
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___m_Target_8;
	// T UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1::<initialValue>k__BackingField
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___U3CinitialValueU3Ek__BackingField_9;
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs>
struct UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionReference::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_4;
	// System.String UnityEngine.InputSystem.InputActionReference::m_ActionId
	String_t* ___m_ActionId_5;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_6;
};

// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_27;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_28;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_29;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_30;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___m_Description_31;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_32;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_33;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_AliasesForEachControl_34;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_UsagesForEachControl_35;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_UsageToControl_36;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ChildrenForEachControl_37;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_StateOffsetToControlMap_38;
	// UnityEngine.InputSystem.InputDevice/ControlBitRangeNode[] UnityEngine.InputSystem.InputDevice::m_ControlTreeNodes
	ControlBitRangeNodeU5BU5D_t912A404149DE6D350D1735A026182C409C510F27* ___m_ControlTreeNodes_39;
	// System.UInt16[] UnityEngine.InputSystem.InputDevice::m_ControlTreeIndices
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___m_ControlTreeIndices_40;
};

// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MaterialPipelineHandler
struct MaterialPipelineHandler_t0FF80ADB33BB30721BC1DF67A7F59847C0582985  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ShaderContainer> UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MaterialPipelineHandler::m_ShaderContainers
	List_1_tAD47FE510B94D41F2CC47130BE91C52577397DD8* ___m_ShaderContainers_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MaterialPipelineHandler::m_AutoRefreshShaders
	bool ___m_AutoRefreshShaders_5;
};

// UnityEngine.Rendering.RenderPipelineAsset
struct RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel
struct TrackedDeviceModel_t38B1BA171F5602138D487005E134580213B4DBE8 
{
	// UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::m_ImplementationData
	ImplementationData_t175CD17EADED010E9B5BA19575E4AD41F2FE67AC ___m_ImplementationData_0;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::m_SelectDown
	bool ___m_SelectDown_2;
	// UnityEngine.XR.Interaction.Toolkit.UI.ButtonDeltaState UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::<selectDelta>k__BackingField
	int32_t ___U3CselectDeltaU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::<changedThisFrame>k__BackingField
	bool ___U3CchangedThisFrameU3Ek__BackingField_4;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::m_Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_5;
	// System.Func`1<UnityEngine.Vector3> UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::<positionGetter>k__BackingField
	Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* ___U3CpositionGetterU3Ek__BackingField_6;
	// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::m_Orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Orientation_7;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::m_RaycastPoints
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_RaycastPoints_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::<currentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CcurrentRaycastU3Ek__BackingField_9;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::<currentRaycastEndpointIndex>k__BackingField
	int32_t ___U3CcurrentRaycastEndpointIndexU3Ek__BackingField_10;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::m_RaycastLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_RaycastLayerMask_11;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::m_ScrollDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ScrollDelta_12;
	// System.Single UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::m_PokeDepth
	float ___m_PokeDepth_13;
	// UnityEngine.XR.Interaction.Toolkit.UI.UIInteractionType UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::m_InteractionType
	int32_t ___m_InteractionType_14;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::<selectableObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CselectableObjectU3Ek__BackingField_15;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::<isScrollable>k__BackingField
	bool ___U3CisScrollableU3Ek__BackingField_16;
};

struct TrackedDeviceModel_t38B1BA171F5602138D487005E134580213B4DBE8_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::<invalid>k__BackingField
	TrackedDeviceModel_t38B1BA171F5602138D487005E134580213B4DBE8 ___U3CinvalidU3Ek__BackingField_17;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel
struct TrackedDeviceModel_t38B1BA171F5602138D487005E134580213B4DBE8_marshaled_pinvoke
{
	ImplementationData_t175CD17EADED010E9B5BA19575E4AD41F2FE67AC_marshaled_pinvoke ___m_ImplementationData_0;
	int32_t ___U3CpointerIdU3Ek__BackingField_1;
	int32_t ___m_SelectDown_2;
	int32_t ___U3CselectDeltaU3Ek__BackingField_3;
	int32_t ___U3CchangedThisFrameU3Ek__BackingField_4;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_5;
	Il2CppMethodPointer ___U3CpositionGetterU3Ek__BackingField_6;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Orientation_7;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_RaycastPoints_8;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke ___U3CcurrentRaycastU3Ek__BackingField_9;
	int32_t ___U3CcurrentRaycastEndpointIndexU3Ek__BackingField_10;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_RaycastLayerMask_11;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ScrollDelta_12;
	float ___m_PokeDepth_13;
	int32_t ___m_InteractionType_14;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CselectableObjectU3Ek__BackingField_15;
	int32_t ___U3CisScrollableU3Ek__BackingField_16;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel
struct TrackedDeviceModel_t38B1BA171F5602138D487005E134580213B4DBE8_marshaled_com
{
	ImplementationData_t175CD17EADED010E9B5BA19575E4AD41F2FE67AC_marshaled_com ___m_ImplementationData_0;
	int32_t ___U3CpointerIdU3Ek__BackingField_1;
	int32_t ___m_SelectDown_2;
	int32_t ___U3CselectDeltaU3Ek__BackingField_3;
	int32_t ___U3CchangedThisFrameU3Ek__BackingField_4;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_5;
	Il2CppMethodPointer ___U3CpositionGetterU3Ek__BackingField_6;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Orientation_7;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_RaycastPoints_8;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com ___U3CcurrentRaycastU3Ek__BackingField_9;
	int32_t ___U3CcurrentRaycastEndpointIndexU3Ek__BackingField_10;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_RaycastLayerMask_11;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ScrollDelta_12;
	float ___m_PokeDepth_13;
	int32_t ___m_InteractionType_14;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CselectableObjectU3Ek__BackingField_15;
	int32_t ___U3CisScrollableU3Ek__BackingField_16;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1<Unity.Mathematics.float3>
struct TweenableVariableAsyncBase_1_tBC224ABEF15BBD66D75B9D20BED7ADB1F273E430  : public TweenableVariableBase_1_t491314D6C5C1BEA5AFEAB55CCB93192270815F82
{
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1::m_OutputInitialized
	bool ___m_OutputInitialized_10;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1::m_JobOutputStore
	NativeArray_1_tEDE9DAD2CAE5954286BC0EF394A57ED0AC69FEE6 ___m_JobOutputStore_11;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1::m_CurveDirty
	bool ___m_CurveDirty_12;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1::m_NativeCurve
	NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 ___m_NativeCurve_13;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1::m_HasJobPending
	bool ___m_HasJobPending_14;
	// Unity.Jobs.JobHandle UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1::m_LastJobHandle
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___m_LastJobHandle_15;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs
struct UIHoverEventArgs_tC712F3F829391F25C89B9951234415D4C354DC39  : public RuntimeObject
{
	// UnityEngine.XR.Interaction.Toolkit.UI.IUIInteractor UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs::<interactorObject>k__BackingField
	RuntimeObject* ___U3CinteractorObjectU3Ek__BackingField_0;
	// UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs::<deviceModel>k__BackingField
	TrackedDeviceModel_t38B1BA171F5602138D487005E134580213B4DBE8 ___U3CdeviceModelU3Ek__BackingField_1;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs::<uiObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CuiObjectU3Ek__BackingField_2;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider
struct BaseAffordanceStateProvider_t5721F9B16D6C029D832F8D6FA0A47326A581D443  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider::m_TransitionDuration
	float ___m_TransitionDuration_4;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider::m_AffordanceStateData
	BindableVariable_1_t8FDD824B71E4868C9A1011DF94BED5A0049FCF42* ___m_AffordanceStateData_5;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.IAsyncAffordanceStateReceiver> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider::m_AsyncAffordanceReceivers
	HashSetList_1_t92284BAC91F283150DE3CB869E3E4FB56883AD28* ___m_AsyncAffordanceReceivers_6;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.ISynchronousAffordanceStateReceiver> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider::m_SynchronousAffordanceReceivers
	HashSetList_1_t2264772D6C39BF21F830E7EF4FA5B6032DCF53FA* ___m_SynchronousAffordanceReceivers_7;
	// System.Collections.Generic.List`1<Unity.Jobs.JobHandle> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider::m_ScheduledJobs
	List_1_t4A3FBCBC51814DA87A56C303277E401A0E9A8366* ___m_ScheduledJobs_8;
	// Unity.XR.CoreUtils.Bindings.BindingsGroup UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider::m_BindingsGroup
	BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* ___m_BindingsGroup_9;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider::m_TimeSinceLastStateUpdate
	float ___m_TimeSinceLastStateUpdate_10;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider::m_IsFirstFrame
	bool ___m_IsFirstFrame_11;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider::m_CompletingTweens
	bool ___m_CompletingTweens_12;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider::m_InterpolationSpeed
	float ___m_InterpolationSpeed_13;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider::m_MaxTransitionDuration
	float ___m_MaxTransitionDuration_14;
};

// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ClimbTeleportDestinationIndicator
struct ClimbTeleportDestinationIndicator_t95EC8E13B0E057810A00B57C40978485340B4458  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing.ClimbTeleportInteractor UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ClimbTeleportDestinationIndicator::m_ClimbTeleportInteractor
	ClimbTeleportInteractor_t9AD38301B02FCB18FB1FB1B84192C05C731D1083* ___m_ClimbTeleportInteractor_4;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ClimbTeleportDestinationIndicator::m_PointerPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPrefab_5;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ClimbTeleportDestinationIndicator::m_PointerDistance
	float ___m_PointerDistance_6;
	// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ClimbTeleportDestinationIndicator::m_ActiveTeleportVolume
	TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* ___m_ActiveTeleportVolume_7;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ClimbTeleportDestinationIndicator::m_PointerInstance
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_PointerInstance_8;
};

// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerAnimator
struct ControllerAnimator_t4F826CECB4A9FBEFDD4EB07B4C5104EFDAFC0D88  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerAnimator::m_ThumbstickTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ThumbstickTransform_4;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerAnimator::m_StickRotationRange
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_StickRotationRange_5;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<UnityEngine.Vector2> UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerAnimator::m_StickInput
	XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* ___m_StickInput_6;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerAnimator::m_TriggerTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_TriggerTransform_7;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerAnimator::m_TriggerXAxisRotationRange
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TriggerXAxisRotationRange_8;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<System.Single> UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerAnimator::m_TriggerInput
	XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* ___m_TriggerInput_9;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerAnimator::m_GripTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_GripTransform_10;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerAnimator::m_GripRightRange
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_GripRightRange_11;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<System.Single> UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerAnimator::m_GripInput
	XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* ___m_GripInput_12;
};

// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager
struct ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::m_RayInteractor
	XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* ___m_RayInteractor_4;
	// UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::m_NearFarInteractor
	NearFarInteractor_t43B1C14C2D72CB717E3624B0759E265F5D215E9C* ___m_NearFarInteractor_5;
	// UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::m_TeleportInteractor
	XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* ___m_TeleportInteractor_6;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::m_TeleportMode
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_TeleportMode_7;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::m_TeleportModeCancel
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_TeleportModeCancel_8;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::m_Turn
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Turn_9;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::m_SnapTurn
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_SnapTurn_10;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::m_Move
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Move_11;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::m_UIScroll
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_UIScroll_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::m_SmoothMotionEnabled
	bool ___m_SmoothMotionEnabled_13;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::m_SmoothTurnEnabled
	bool ___m_SmoothTurnEnabled_14;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::m_NearFarEnableTeleportDuringNearInteraction
	bool ___m_NearFarEnableTeleportDuringNearInteraction_15;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::m_UIScrollingEnabled
	bool ___m_UIScrollingEnabled_16;
	// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider> UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::m_RayInteractorChanged
	UnityEvent_1_tA1590A7C4E6E0836296B3C1CD3F16A1819EB7117* ___m_RayInteractorChanged_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::m_StartCalled
	bool ___m_StartCalled_18;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::m_PostponedDeactivateTeleport
	bool ___m_PostponedDeactivateTeleport_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::m_HoveringScrollableUI
	bool ___m_HoveringScrollableUI_20;
	// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.InputAction> UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::m_LocomotionUsers
	HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3* ___m_LocomotionUsers_21;
	// Unity.XR.CoreUtils.Bindings.BindingsGroup UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::m_BindingsGroup
	BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* ___m_BindingsGroup_22;
};

// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DestroySelf
struct DestroySelf_tDC5BD53F0F2DA7DB2A559BAC50EA806440226B1F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DestroySelf::m_Lifetime
	float ___m_Lifetime_4;
};

// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager
struct GazeInputManager_t76600ACADAE6718BABD1166EBED065FFD8C90C83  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::m_FallbackIfEyeTrackingUnavailable
	bool ___m_FallbackIfEyeTrackingUnavailable_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::m_EyeTrackingDeviceFound
	bool ___m_EyeTrackingDeviceFound_6;
};

// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText
struct IncrementUIText_tF29B22345E086474C294CAFCFCEF0F336CA34359  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText::m_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_Text_4;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionMediator
struct LocomotionMediator_tFF0E600A153C909C211466942B7D4C3DA6105AD6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.Locomotion.XRBodyTransformer UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionMediator::m_XRBodyTransformer
	XRBodyTransformer_t913A5C6DC68A5C1C68EDF753FC42FDD67F1AE772* ___m_XRBodyTransformer_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider,UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionMediator/LocomotionProviderData> UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionMediator::m_ProviderDataMap
	Dictionary_2_t9726FBEC6D5A108E0644CABA58723FA692425AEC* ___m_ProviderDataMap_5;
};

struct LocomotionMediator_tFF0E600A153C909C211466942B7D4C3DA6105AD6_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider> UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionMediator::s_ProvidersToRemove
	List_1_tBB95B7BAA20D6FFAA14C6003919B3C6ECA28F844* ___s_ProvidersToRemove_6;
};

// UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider
struct LocomotionProvider_t359A39ECDB2224E3FF09583CF055A3D19A3557BD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionMediator UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider::m_Mediator
	LocomotionMediator_tFF0E600A153C909C211466942B7D4C3DA6105AD6* ___m_Mediator_4;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider::m_TransformationPriority
	int32_t ___m_TransformationPriority_5;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider> UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider::locomotionStarted
	Action_1_t93E648A399FA4C2F973C405E29D7189C56FE737A* ___locomotionStarted_6;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider> UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider::locomotionEnded
	Action_1_t93E648A399FA4C2F973C405E29D7189C56FE737A* ___locomotionEnded_7;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider> UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider::beforeStepLocomotion
	Action_1_t93E648A399FA4C2F973C405E29D7189C56FE737A* ___beforeStepLocomotion_8;
	// UnityEngine.XR.Interaction.Toolkit.Locomotion.XRBodyTransformer UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider::m_ActiveBodyTransformer
	XRBodyTransformer_t913A5C6DC68A5C1C68EDF753FC42FDD67F1AE772* ___m_ActiveBodyTransformer_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider::m_AnyTransformationsThisFrame
	bool ___m_AnyTransformationsThisFrame_10;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem> UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider::startLocomotion
	Action_1_tF1EFD363206113AB62CC79E4ABC28A4901B693B7* ___startLocomotion_11;
	// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider::m_System
	LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* ___m_System_12;
	// UnityEngine.XR.Interaction.Toolkit.LocomotionPhase UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider::<locomotionPhase>k__BackingField
	int32_t ___U3ClocomotionPhaseU3Ek__BackingField_13;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem> UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider::beginLocomotion
	Action_1_tF1EFD363206113AB62CC79E4ABC28A4901B693B7* ___beginLocomotion_14;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem> UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider::endLocomotion
	Action_1_tF1EFD363206113AB62CC79E4ABC28A4901B693B7* ___endLocomotion_15;
};

// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle
struct MultiAnchorTeleportReticle_t4D51659966078FEA51FBCD719B78BE3479F7A357  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle::m_TimerProgressFilledImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_TimerProgressFilledImage_4;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle::m_DestinationIndicator
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_DestinationIndicator_5;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle::m_PotentialDestinationIndicator
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PotentialDestinationIndicator_6;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle::m_PotentialIndicatorUpdateFrequency
	float ___m_PotentialIndicatorUpdateFrequency_7;
	// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle::m_AnchorVolume
	TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* ___m_AnchorVolume_8;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle::m_LastPotentialIndicatorUpdateTime
	float ___m_LastPotentialIndicatorUpdateTime_9;
};

// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner
struct ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::m_CameraToFace
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_CameraToFace_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::m_ObjectPrefabs
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___m_ObjectPrefabs_5;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::m_SpawnVisualizationPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_SpawnVisualizationPrefab_6;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::m_SpawnOptionIndex
	int32_t ___m_SpawnOptionIndex_7;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::m_OnlySpawnInView
	bool ___m_OnlySpawnInView_8;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::m_ViewportPeriphery
	float ___m_ViewportPeriphery_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::m_ApplyRandomAngleAtSpawn
	bool ___m_ApplyRandomAngleAtSpawn_10;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::m_SpawnAngleRange
	float ___m_SpawnAngleRange_11;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::m_SpawnAsChildren
	bool ___m_SpawnAsChildren_12;
	// System.Action`1<UnityEngine.GameObject> UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::objectSpawned
	Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* ___objectSpawned_13;
};

// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.TeleportVolumeAnchorAffordanceStateLink
struct TeleportVolumeAnchorAffordanceStateLink_t7DA616C919D93B9F3BAE4A646B8A1C035DE7C4AD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.TeleportVolumeAnchorAffordanceStateLink::m_ContainingTeleportVolume
	TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* ___m_ContainingTeleportVolume_4;
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.TeleportVolumeAnchorAffordanceStateLink::m_AffordanceStateProvider
	XRInteractableAffordanceStateProvider_tBF33F0A41B1960C8FE2CCAFC6228E07D8A459C98* ___m_AffordanceStateProvider_5;
	// UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.TeleportVolumeAnchorAffordanceStateLink::m_Interactable
	RuntimeObject* ___m_Interactable_6;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.Vector3TweenableVariable
struct Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5  : public TweenableVariableAsyncBase_1_tBC224ABEF15BBD66D75B9D20BED7ADB1F273E430
{
};

// UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer
struct XRBaseGrabTransformer_t928B47DA234790117C35A173C92AF6A7776F48AE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable
struct XRBaseInteractable_t76185BD6DF3BC86B3CDD82E6368C3C7157E39AE4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::registered
	Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8* ___registered_6;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::unregistered
	Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0* ___unregistered_7;
	// System.Func`3<UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable,UnityEngine.Vector3,UnityEngine.XR.Interaction.Toolkit.Interactables.DistanceInfo> UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::<getDistanceOverride>k__BackingField
	Func_3_t3C59F9322C032EF2EC419F9538F86DFC0F4B1421* ___U3CgetDistanceOverrideU3Ek__BackingField_8;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_9;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_Colliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_Colliders_10;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_11;
	// UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable/DistanceCalculationMode UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_DistanceCalculationMode
	int32_t ___m_DistanceCalculationMode_12;
	// UnityEngine.XR.Interaction.Toolkit.Interactables.InteractableSelectMode UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_SelectMode
	int32_t ___m_SelectMode_13;
	// UnityEngine.XR.Interaction.Toolkit.Interactables.InteractableFocusMode UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_FocusMode
	int32_t ___m_FocusMode_14;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_CustomReticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CustomReticle_15;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_AllowGazeInteraction
	bool ___m_AllowGazeInteraction_16;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_AllowGazeSelect
	bool ___m_AllowGazeSelect_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_OverrideGazeTimeToSelect
	bool ___m_OverrideGazeTimeToSelect_18;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_GazeTimeToSelect
	float ___m_GazeTimeToSelect_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_OverrideTimeToAutoDeselectGaze
	bool ___m_OverrideTimeToAutoDeselectGaze_20;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_TimeToAutoDeselectGaze
	float ___m_TimeToAutoDeselectGaze_21;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_AllowGazeAssistance
	bool ___m_AllowGazeAssistance_22;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_FirstHoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_FirstHoverEntered_23;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_LastHoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_LastHoverExited_24;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_25;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_26;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_FirstSelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_FirstSelectEntered_27;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_LastSelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_LastSelectExited_28;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_29;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_30;
	// UnityEngine.XR.Interaction.Toolkit.FocusEnterEvent UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_FirstFocusEntered
	FocusEnterEvent_tF5369B418FFFBE1C6FDE6EBDDD8B9E412A32CD90* ___m_FirstFocusEntered_31;
	// UnityEngine.XR.Interaction.Toolkit.FocusExitEvent UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_LastFocusExited
	FocusExitEvent_tFAE8003B7B5A47FB4D9C5BB14D7A3273AF8931AE* ___m_LastFocusExited_32;
	// UnityEngine.XR.Interaction.Toolkit.FocusEnterEvent UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_FocusEntered
	FocusEnterEvent_tF5369B418FFFBE1C6FDE6EBDDD8B9E412A32CD90* ___m_FocusEntered_33;
	// UnityEngine.XR.Interaction.Toolkit.FocusExitEvent UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_FocusExited
	FocusExitEvent_tFAE8003B7B5A47FB4D9C5BB14D7A3273AF8931AE* ___m_FocusExited_34;
	// UnityEngine.XR.Interaction.Toolkit.ActivateEvent UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_Activated
	ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43* ___m_Activated_35;
	// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_Deactivated
	DeactivateEvent_tFE44262C3D8377F947FD46D4561BB9DAC7E0785D* ___m_Deactivated_36;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.Interactors.IXRHoverInteractor> UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_InteractorsHovering
	HashSetList_1_tCF3541C1916DB23E3E8D3E2D2C675B59FE3ACBAF* ___m_InteractorsHovering_37;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor> UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_InteractorsSelecting
	HashSetList_1_t85FA4F6EDCA9A84D235398F53ED390EE2CE4DC98* ___m_InteractorsSelecting_38;
	// UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::<firstInteractorSelecting>k__BackingField
	RuntimeObject* ___U3CfirstInteractorSelectingU3Ek__BackingField_39;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionGroup> UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_InteractionGroupsFocusing
	HashSetList_1_tCE34B4C28F58D67E795B058A35AD8A457BFB1175* ___m_InteractionGroupsFocusing_40;
	// UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionGroup UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::<firstInteractionGroupFocusing>k__BackingField
	RuntimeObject* ___U3CfirstInteractionGroupFocusingU3Ek__BackingField_41;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_StartingHoverFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingHoverFilters_42;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_HoverFilters
	ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5* ___m_HoverFilters_43;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_StartingSelectFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingSelectFilters_44;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_SelectFilters
	ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8* ___m_SelectFilters_45;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_StartingInteractionStrengthFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingInteractionStrengthFilters_46;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRInteractionStrengthFilter> UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_InteractionStrengthFilters
	ExposedRegistrationList_1_t7932F633A860258335FD94BBFDE46AC92B1CF84B* ___m_InteractionStrengthFilters_47;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single> UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_LargestInteractionStrength
	BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C* ___m_LargestInteractionStrength_48;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_AttachPoseOnSelect
	Dictionary_2_t9B20C3EBA931E014FB6496226DAB71B59F7CC4EC* ___m_AttachPoseOnSelect_49;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_LocalAttachPoseOnSelect
	Dictionary_2_t9B20C3EBA931E014FB6496226DAB71B59F7CC4EC* ___m_LocalAttachPoseOnSelect_50;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor,UnityEngine.GameObject> UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_ReticleCache
	Dictionary_2_t2FB52A1C9A5EF3BE7F06D41CF41259B9A0296ABC* ___m_ReticleCache_51;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor> UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_VariableSelectInteractors
	HashSetList_1_tC0FA4922B36F37C46BA57A5B55C8B0A1FF78D9A2* ___m_VariableSelectInteractors_52;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor,System.Single> UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_InteractionStrengths
	Dictionary_2_t1A8FC8C012681D4B964E7A8A383FD3E718078AE9* ___m_InteractionStrengths_53;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_54;
};

struct XRBaseInteractable_t76185BD6DF3BC86B3CDD82E6368C3C7157E39AE4_StaticFields
{
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::s_ProcessInteractionStrengthMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessInteractionStrengthMarker_55;
};

// UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor
struct XRBaseInteractor_t4AF6FC9A7611B9417B4A43E11704AFF85B4A0FB4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::registered
	Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5* ___registered_6;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::unregistered
	Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0* ___unregistered_7;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_8;
	// UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionGroup UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::<containingGroup>k__BackingField
	RuntimeObject* ___U3CcontainingGroupU3Ek__BackingField_9;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_10;
	// UnityEngine.XR.Interaction.Toolkit.Interactors.InteractorHandedness UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_Handedness
	int32_t ___m_Handedness_11;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_AttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AttachTransform_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_KeepSelectedTargetValid
	bool ___m_KeepSelectedTargetValid_13;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_DisableVisualsWhenBlockedInGroup
	bool ___m_DisableVisualsWhenBlockedInGroup_14;
	// UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_StartingSelectedInteractable
	XRBaseInteractable_t76185BD6DF3BC86B3CDD82E6368C3C7157E39AE4* ___m_StartingSelectedInteractable_15;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_StartingTargetFilter
	XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F* ___m_StartingTargetFilter_16;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_17;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_18;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_19;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_20;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_TargetFilter
	RuntimeObject* ___m_TargetFilter_21;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_AllowHover
	bool ___m_AllowHover_22;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_AllowSelect
	bool ___m_AllowSelect_23;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_IsPerformingManualInteraction
	bool ___m_IsPerformingManualInteraction_24;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.Interactables.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_InteractablesHovered
	HashSetList_1_t52A6279CDC8FAE4460A87A1B6A5E3437D58F5AE2* ___m_InteractablesHovered_25;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.Interactables.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_InteractablesSelected
	HashSetList_1_t1A0488B6A7A99FC77B3DC8ADC7C241B5B2F21789* ___m_InteractablesSelected_26;
	// UnityEngine.XR.Interaction.Toolkit.Interactables.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::<firstInteractableSelected>k__BackingField
	RuntimeObject* ___U3CfirstInteractableSelectedU3Ek__BackingField_27;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::<isInteractingWithUI>k__BackingField
	bool ___U3CisInteractingWithUIU3Ek__BackingField_28;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_StartingHoverFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingHoverFilters_29;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_HoverFilters
	ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5* ___m_HoverFilters_30;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_StartingSelectFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingSelectFilters_31;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_SelectFilters
	ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8* ___m_SelectFilters_32;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single> UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_LargestInteractionStrength
	BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C* ___m_LargestInteractionStrength_33;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Interactables.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_AttachPoseOnSelect
	Dictionary_2_tBF02F25A38E519F312D7EF1C8B204EBDC91AB9A1* ___m_AttachPoseOnSelect_34;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Interactables.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_LocalAttachPoseOnSelect
	Dictionary_2_tBF02F25A38E519F312D7EF1C8B204EBDC91AB9A1* ___m_LocalAttachPoseOnSelect_35;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractionStrengthInteractable> UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_InteractionStrengthInteractables
	HashSetList_1_tF3CBA0C6731B032420F2FEC573A03EE7A351CBC4* ___m_InteractionStrengthInteractables_36;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable,System.Single> UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_InteractionStrengths
	Dictionary_2_tA13026C91A8E0CE5AB55DC00628A33C71D2BE3F2* ___m_InteractionStrengths_37;
	// UnityEngine.XR.Interaction.Toolkit.Interactables.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_ManualInteractionInteractable
	RuntimeObject* ___m_ManualInteractionInteractable_38;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_39;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_XROriginTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_XROriginTransform_41;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_HasXROrigin
	bool ___m_HasXROrigin_42;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::m_FailedToFindXROrigin
	bool ___m_FailedToFindXROrigin_43;
	// UnityEngine.XR.Interaction.Toolkit.Interactors.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::<targetPriorityMode>k__BackingField
	int32_t ___U3CtargetPriorityModeU3Ek__BackingField_44;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Interactables.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::<targetsForSelection>k__BackingField
	List_1_t96062976A34EF744BABF4798339ADC3741F0CF6C* ___U3CtargetsForSelectionU3Ek__BackingField_45;
};

struct XRBaseInteractor_t4AF6FC9A7611B9417B4A43E11704AFF85B4A0FB4_StaticFields
{
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::s_ProcessInteractionStrengthMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessInteractionStrengthMarker_40;
};

// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Unity.XR.CoreUtils.XROrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform Unity.XR.CoreUtils.XROrigin::<TrackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CTrackablesParentU3Ek__BackingField_5;
	// System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs> Unity.XR.CoreUtils.XROrigin::TrackablesParentTransformChanged
	Action_1_t941F5236BDA57C5BC0EE651FF51B247342AFE701* ___TrackablesParentTransformChanged_6;
	// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::m_OriginBaseGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_OriginBaseGameObject_8;
	// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::m_CameraFloorOffsetObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CameraFloorOffsetObject_9;
	// Unity.XR.CoreUtils.XROrigin/TrackingOriginMode Unity.XR.CoreUtils.XROrigin::m_RequestedTrackingOriginMode
	int32_t ___m_RequestedTrackingOriginMode_10;
	// System.Single Unity.XR.CoreUtils.XROrigin::m_CameraYOffset
	float ___m_CameraYOffset_11;
	// UnityEngine.XR.TrackingOriginModeFlags Unity.XR.CoreUtils.XROrigin::<CurrentTrackingOriginMode>k__BackingField
	int32_t ___U3CCurrentTrackingOriginModeU3Ek__BackingField_12;
	// System.Boolean Unity.XR.CoreUtils.XROrigin::m_CameraInitialized
	bool ___m_CameraInitialized_14;
	// System.Boolean Unity.XR.CoreUtils.XROrigin::m_CameraInitializing
	bool ___m_CameraInitializing_15;
};

struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> Unity.XR.CoreUtils.XROrigin::s_InputSubsystems
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystems_13;
};

// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance
struct XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_PokeFollowTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_PokeFollowTransform_4;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_SmoothingSpeed
	float ___m_SmoothingSpeed_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_ReturnToInitialPosition
	bool ___m_ReturnToInitialPosition_6;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_ApplyIfChildIsTarget
	bool ___m_ApplyIfChildIsTarget_7;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_ClampToMaxDistance
	bool ___m_ClampToMaxDistance_8;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_MaxDistance
	float ___m_MaxDistance_9;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.IPokeStateDataProvider UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_PokeDataProvider
	RuntimeObject* ___m_PokeDataProvider_10;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.IMultiPokeStateDataProvider UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_MultiPokeStateDataProvider
	RuntimeObject* ___m_MultiPokeStateDataProvider_11;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.Vector3TweenableVariable UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_TransformTweenableVariable
	Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* ___m_TransformTweenableVariable_12;
	// Unity.XR.CoreUtils.Bindings.BindingsGroup UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_BindingsGroup
	BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* ___m_BindingsGroup_13;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_InitialPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_InitialPosition_14;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_IsFirstFrame
	bool ___m_IsFirstFrame_15;
};

// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.BaseTeleportationInteractable
struct BaseTeleportationInteractable_t56762CCCEAD36A86FD0B296FBC7CFBC261DEAB71  : public XRBaseInteractable_t76185BD6DF3BC86B3CDD82E6368C3C7157E39AE4
{
	// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationProvider UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.BaseTeleportationInteractable::m_TeleportationProvider
	TeleportationProvider_t3FAF889EFC7631ED0DA49A1E0C4CAD650002A9E5* ___m_TeleportationProvider_77;
	// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.MatchOrientation UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.BaseTeleportationInteractable::m_MatchOrientation
	int32_t ___m_MatchOrientation_78;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.BaseTeleportationInteractable::m_MatchDirectionalInput
	bool ___m_MatchDirectionalInput_79;
	// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.BaseTeleportationInteractable/TeleportTrigger UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.BaseTeleportationInteractable::m_TeleportTrigger
	int32_t ___m_TeleportTrigger_80;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.BaseTeleportationInteractable::m_FilterSelectionByHitNormal
	bool ___m_FilterSelectionByHitNormal_81;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.BaseTeleportationInteractable::m_UpNormalToleranceDegrees
	float ___m_UpNormalToleranceDegrees_82;
	// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportingEvent UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.BaseTeleportationInteractable::m_Teleporting
	TeleportingEvent_t39D1F59EE7E9B53095E251AF1774ECD53152BFBD* ___m_Teleporting_83;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportingEventArgs> UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.BaseTeleportationInteractable::m_TeleportingEventArgs
	LinkedPool_1_tE20B996FF430FBDC2F5DAA707718C0DDE3646785* ___m_TeleportingEventArgs_84;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor,UnityEngine.Vector3> UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.BaseTeleportationInteractable::m_TeleportForwardPerInteractor
	Dictionary_2_t0D68B802833F74063FEDC522461D7F4742257285* ___m_TeleportForwardPerInteractor_85;
};

// UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing.ClimbTeleportInteractor
struct ClimbTeleportInteractor_t9AD38301B02FCB18FB1FB1B84192C05C731D1083  : public XRBaseInteractor_t4AF6FC9A7611B9417B4A43E11704AFF85B4A0FB4
{
	// UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing.ClimbProvider UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing.ClimbTeleportInteractor::m_ClimbProvider
	ClimbProvider_t5BF07C417BEDAD0F7136BC7B72F433F1D8C77C10* ___m_ClimbProvider_64;
	// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettingsDatumProperty UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing.ClimbTeleportInteractor::m_DestinationEvaluationSettings
	TeleportVolumeDestinationSettingsDatumProperty_tDD5453B35B45AEB0427BCD5BE987332B3CD14347* ___m_DestinationEvaluationSettings_65;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs> UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing.ClimbTeleportInteractor::m_ActivateEventArgs
	LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01* ___m_ActivateEventArgs_66;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs> UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing.ClimbTeleportInteractor::m_DeactivateEventArgs
	LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B* ___m_DeactivateEventArgs_67;
	// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing.ClimbTeleportInteractor::m_TargetTeleportVolume
	TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* ___m_TargetTeleportVolume_68;
	// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettingsDatumProperty UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing.ClimbTeleportInteractor::m_PreservedTeleportVolumeSettings
	TeleportVolumeDestinationSettingsDatumProperty_tDD5453B35B45AEB0427BCD5BE987332B3CD14347* ___m_PreservedTeleportVolumeSettings_69;
};

// UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.ContinuousMoveProvider
struct ContinuousMoveProvider_t1F9AD0924053780B7CF1F5C80D672C5D850C47B9  : public LocomotionProvider_t359A39ECDB2224E3FF09583CF055A3D19A3557BD
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.ContinuousMoveProvider::m_MoveSpeed
	float ___m_MoveSpeed_16;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.ContinuousMoveProvider::m_EnableStrafe
	bool ___m_EnableStrafe_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.ContinuousMoveProvider::m_EnableFly
	bool ___m_EnableFly_18;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.ContinuousMoveProvider::m_UseGravity
	bool ___m_UseGravity_19;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.ContinuousMoveProvider::m_ForwardSource
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ForwardSource_20;
	// UnityEngine.XR.Interaction.Toolkit.Locomotion.XROriginMovement UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.ContinuousMoveProvider::<transformation>k__BackingField
	XROriginMovement_t4563D869911F8FF9231EB531B6948E5ABB4933C3* ___U3CtransformationU3Ek__BackingField_21;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<UnityEngine.Vector2> UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.ContinuousMoveProvider::m_LeftHandMoveInput
	XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* ___m_LeftHandMoveInput_22;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<UnityEngine.Vector2> UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.ContinuousMoveProvider::m_RightHandMoveInput
	XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* ___m_RightHandMoveInput_23;
	// UnityEngine.CharacterController UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.ContinuousMoveProvider::m_CharacterController
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_CharacterController_24;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.ContinuousMoveProvider::m_AttemptedGetCharacterController
	bool ___m_AttemptedGetCharacterController_25;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.ContinuousMoveProvider::m_IsMovingXROrigin
	bool ___m_IsMovingXROrigin_26;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.ContinuousMoveProvider::m_VerticalVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_VerticalVelocity_27;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.RotationAxisLockGrabTransformer
struct RotationAxisLockGrabTransformer_t607B7577937EE7AD454A59499B6266FBA4832DD7  : public XRBaseGrabTransformer_t928B47DA234790117C35A173C92AF6A7776F48AE
{
	// UnityEngine.XR.Interaction.Toolkit.Transformers.XRGeneralGrabTransformer/ManipulationAxes UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.RotationAxisLockGrabTransformer::m_PermittedRotationAxis
	int32_t ___m_PermittedRotationAxis_4;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.RotationAxisLockGrabTransformer::m_InitialEulerRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_InitialEulerRotation_5;
};

// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationProvider
struct TeleportationProvider_t3FAF889EFC7631ED0DA49A1E0C4CAD650002A9E5  : public LocomotionProvider_t359A39ECDB2224E3FF09583CF055A3D19A3557BD
{
	// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportRequest UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationProvider::<currentRequest>k__BackingField
	TeleportRequest_t88D6CC9390D292F5D67466F9C488AE073346BCD1 ___U3CcurrentRequestU3Ek__BackingField_16;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationProvider::<validRequest>k__BackingField
	bool ___U3CvalidRequestU3Ek__BackingField_17;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationProvider::m_DelayTime
	float ___m_DelayTime_18;
	// UnityEngine.XR.Interaction.Toolkit.Locomotion.XROriginUpAlignment UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationProvider::<upTransformation>k__BackingField
	XROriginUpAlignment_t915E61DDE7EFE2168DCDA106B090AC7D0A1F018A* ___U3CupTransformationU3Ek__BackingField_19;
	// UnityEngine.XR.Interaction.Toolkit.Locomotion.XRCameraForwardXZAlignment UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationProvider::<forwardTransformation>k__BackingField
	XRCameraForwardXZAlignment_tFD0381AA640699170A0692F986B53BE7163C26C6* ___U3CforwardTransformationU3Ek__BackingField_20;
	// UnityEngine.XR.Interaction.Toolkit.Locomotion.XRBodyGroundPosition UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationProvider::<positionTransformation>k__BackingField
	XRBodyGroundPosition_t270052FF3D381FE09EE21FA1E458C43C4FCEC1C0* ___U3CpositionTransformationU3Ek__BackingField_21;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationProvider::m_DelayStartTime
	float ___m_DelayStartTime_22;
};

// UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor
struct XRBaseInputInteractor_t704F8C3C7AD9AD8857D5D3AAFDF2F2E37A27BE46  : public XRBaseInteractor_t4AF6FC9A7611B9417B4A43E11704AFF85B4A0FB4
{
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputButtonReader UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_SelectInput
	XRInputButtonReader_t0727CFE55AD1B8ECEFCD382660D9AC0DA1639515* ___m_SelectInput_64;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputButtonReader UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_ActivateInput
	XRInputButtonReader_t0727CFE55AD1B8ECEFCD382660D9AC0DA1639515* ___m_ActivateInput_65;
	// UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor/InputTriggerType UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_SelectActionTrigger
	int32_t ___m_SelectActionTrigger_66;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_AllowHoveredActivate
	bool ___m_AllowHoveredActivate_67;
	// UnityEngine.XR.Interaction.Toolkit.Interactors.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_TargetPriorityMode
	int32_t ___m_TargetPriorityMode_68;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_AllowActivate
	bool ___m_AllowActivate_69;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputButtonReader> UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::<buttonReaders>k__BackingField
	List_1_t488784C52679764AD0C4F820CDD5C10973C9FC9D* ___U3CbuttonReadersU3Ek__BackingField_70;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader> UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::<valueReaders>k__BackingField
	List_1_t6AC1E63E8A7AEC25512ADBCAD6FAFB856A230C09* ___U3CvalueReadersU3Ek__BackingField_71;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs> UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_ActivateEventArgs
	LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01* ___m_ActivateEventArgs_72;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs> UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_DeactivateEventArgs
	LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B* ___m_DeactivateEventArgs_73;
	// UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor/LogicalInputState UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_LogicalSelectState
	LogicalInputState_tC8869ADC07CFDF5E60D09DC140CC05EF0227843A* ___m_LogicalSelectState_75;
	// UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor/LogicalInputState UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_LogicalActivateState
	LogicalInputState_tC8869ADC07CFDF5E60D09DC140CC05EF0227843A* ___m_LogicalActivateState_76;
	// UnityEngine.XR.Interaction.Toolkit.Feedback.SimpleAudioFeedback UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_AudioFeedback
	SimpleAudioFeedback_tF566C7044568575261BDCE78F2AF162675710B74* ___m_AudioFeedback_77;
	// UnityEngine.XR.Interaction.Toolkit.Feedback.SimpleHapticFeedback UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_HapticFeedback
	SimpleHapticFeedback_t87E1E96B335ECBB5206B34437E25F65F200BE9D6* ___m_HapticFeedback_78;
	// UnityEngine.AudioSource UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_AudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_AudioSource_79;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics.HapticImpulsePlayer UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_HapticImpulsePlayer
	HapticImpulsePlayer_tE153B969F453F119AF5B0D808FBA94D026A54A58* ___m_HapticImpulsePlayer_80;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_HideControllerOnSelect
	bool ___m_HideControllerOnSelect_81;
	// UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor/InputCompatibilityMode UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_InputCompatibilityMode
	int32_t ___m_InputCompatibilityMode_82;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_Controller
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___m_Controller_83;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_HasXRController
	bool ___m_HasXRController_84;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_PlayAudioClipOnSelectEntered
	bool ___m_PlayAudioClipOnSelectEntered_85;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_AudioClipForOnSelectEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectEntered_86;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_PlayAudioClipOnSelectExited
	bool ___m_PlayAudioClipOnSelectExited_87;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_AudioClipForOnSelectExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectExited_88;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_PlayAudioClipOnSelectCanceled
	bool ___m_PlayAudioClipOnSelectCanceled_89;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_AudioClipForOnSelectCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectCanceled_90;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_PlayAudioClipOnHoverEntered
	bool ___m_PlayAudioClipOnHoverEntered_91;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_AudioClipForOnHoverEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverEntered_92;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_PlayAudioClipOnHoverExited
	bool ___m_PlayAudioClipOnHoverExited_93;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_AudioClipForOnHoverExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverExited_94;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_PlayAudioClipOnHoverCanceled
	bool ___m_PlayAudioClipOnHoverCanceled_95;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_AudioClipForOnHoverCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverCanceled_96;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_AllowHoverAudioWhileSelecting
	bool ___m_AllowHoverAudioWhileSelecting_97;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_PlayHapticsOnSelectEntered
	bool ___m_PlayHapticsOnSelectEntered_98;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_HapticSelectEnterIntensity
	float ___m_HapticSelectEnterIntensity_99;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_HapticSelectEnterDuration
	float ___m_HapticSelectEnterDuration_100;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_PlayHapticsOnSelectExited
	bool ___m_PlayHapticsOnSelectExited_101;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_HapticSelectExitIntensity
	float ___m_HapticSelectExitIntensity_102;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_HapticSelectExitDuration
	float ___m_HapticSelectExitDuration_103;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_PlayHapticsOnSelectCanceled
	bool ___m_PlayHapticsOnSelectCanceled_104;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_HapticSelectCancelIntensity
	float ___m_HapticSelectCancelIntensity_105;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_HapticSelectCancelDuration
	float ___m_HapticSelectCancelDuration_106;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_PlayHapticsOnHoverEntered
	bool ___m_PlayHapticsOnHoverEntered_107;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_HapticHoverEnterIntensity
	float ___m_HapticHoverEnterIntensity_108;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_HapticHoverEnterDuration
	float ___m_HapticHoverEnterDuration_109;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_PlayHapticsOnHoverExited
	bool ___m_PlayHapticsOnHoverExited_110;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_HapticHoverExitIntensity
	float ___m_HapticHoverExitIntensity_111;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_HapticHoverExitDuration
	float ___m_HapticHoverExitDuration_112;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_PlayHapticsOnHoverCanceled
	bool ___m_PlayHapticsOnHoverCanceled_113;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_HapticHoverCancelIntensity
	float ___m_HapticHoverCancelIntensity_114;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_HapticHoverCancelDuration
	float ___m_HapticHoverCancelDuration_115;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::m_AllowHoverHapticsWhileSelecting
	bool ___m_AllowHoverHapticsWhileSelecting_116;
};

struct XRBaseInputInteractor_t704F8C3C7AD9AD8857D5D3AAFDF2F2E37A27BE46_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Interactables.IXRActivateInteractable> UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::s_ActivateTargets
	List_1_t4D55B31174BDF30C8D05A7FC6C010069F06BD3BC* ___s_ActivateTargets_74;
};

// UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable
struct XRGrabInteractable_tAE7E2F24377399C9B5159179E4B43EA6AA55531B  : public XRBaseInteractable_t76185BD6DF3BC86B3CDD82E6368C3C7157E39AE4
{
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_AttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AttachTransform_88;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_SecondaryAttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_SecondaryAttachTransform_89;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_UseDynamicAttach
	bool ___m_UseDynamicAttach_90;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_MatchAttachPosition
	bool ___m_MatchAttachPosition_91;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_MatchAttachRotation
	bool ___m_MatchAttachRotation_92;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_SnapToColliderVolume
	bool ___m_SnapToColliderVolume_93;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_ReinitializeDynamicAttachEverySingleGrab
	bool ___m_ReinitializeDynamicAttachEverySingleGrab_94;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_AttachEaseInTime
	float ___m_AttachEaseInTime_95;
	// UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable/MovementType UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_MovementType
	int32_t ___m_MovementType_96;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_VelocityDamping
	float ___m_VelocityDamping_97;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_VelocityScale
	float ___m_VelocityScale_98;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_AngularVelocityDamping
	float ___m_AngularVelocityDamping_99;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_AngularVelocityScale
	float ___m_AngularVelocityScale_100;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_TrackPosition
	bool ___m_TrackPosition_101;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_SmoothPosition
	bool ___m_SmoothPosition_102;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_SmoothPositionAmount
	float ___m_SmoothPositionAmount_103;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_TightenPosition
	float ___m_TightenPosition_104;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_TrackRotation
	bool ___m_TrackRotation_105;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_SmoothRotation
	bool ___m_SmoothRotation_106;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_SmoothRotationAmount
	float ___m_SmoothRotationAmount_107;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_TightenRotation
	float ___m_TightenRotation_108;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_TrackScale
	bool ___m_TrackScale_109;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_SmoothScale
	bool ___m_SmoothScale_110;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_SmoothScaleAmount
	float ___m_SmoothScaleAmount_111;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_TightenScale
	float ___m_TightenScale_112;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_ThrowOnDetach
	bool ___m_ThrowOnDetach_113;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_ThrowSmoothingDuration
	float ___m_ThrowSmoothingDuration_114;
	// UnityEngine.AnimationCurve UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_ThrowSmoothingCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_ThrowSmoothingCurve_115;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_ThrowVelocityScale
	float ___m_ThrowVelocityScale_116;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_ThrowAngularVelocityScale
	float ___m_ThrowAngularVelocityScale_117;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_ForceGravityOnDetach
	bool ___m_ForceGravityOnDetach_118;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_RetainTransformParent
	bool ___m_RetainTransformParent_119;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer> UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_StartingSingleGrabTransformers
	List_1_tCFCD970A7548BC894D178194E5028E3E294AF3B9* ___m_StartingSingleGrabTransformers_120;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer> UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_StartingMultipleGrabTransformers
	List_1_tCFCD970A7548BC894D178194E5028E3E294AF3B9* ___m_StartingMultipleGrabTransformers_121;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_AddDefaultGrabTransformers
	bool ___m_AddDefaultGrabTransformers_122;
	// UnityEngine.XR.Interaction.Toolkit.Attachment.InteractableFarAttachMode UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_FarAttachMode
	int32_t ___m_FarAttachMode_123;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.SmallRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Transformers.IXRGrabTransformer> UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_SingleGrabTransformers
	SmallRegistrationList_1_t748513BBF6769ED01AAD787FF7698EF51EBEF62D* ___m_SingleGrabTransformers_124;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.SmallRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Transformers.IXRGrabTransformer> UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_MultipleGrabTransformers
	SmallRegistrationList_1_t748513BBF6769ED01AAD787FF7698EF51EBEF62D* ___m_MultipleGrabTransformers_125;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Transformers.IXRGrabTransformer> UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_GrabTransformersAddedWhenGrabbed
	List_1_tB0C796BACCE72002824004B31D3AFE084C3BFC75* ___m_GrabTransformersAddedWhenGrabbed_126;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_GrabCountChanged
	bool ___m_GrabCountChanged_127;
	// System.ValueTuple`2<System.Int32,System.Int32> UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_GrabCountBeforeAndAfterChange
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_GrabCountBeforeAndAfterChange_128;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_IsProcessingGrabTransformers
	bool ___m_IsProcessingGrabTransformers_129;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_DropTransformersCount
	int32_t ___m_DropTransformersCount_130;
	// UnityEngine.Pose UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_TargetPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_TargetPose_132;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_TargetLocalScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_TargetLocalScale_133;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_IsTargetPoseDirty
	bool ___m_IsTargetPoseDirty_134;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_IsTargetLocalScaleDirty
	bool ___m_IsTargetLocalScaleDirty_135;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_CurrentAttachEaseTime
	float ___m_CurrentAttachEaseTime_136;
	// UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable/MovementType UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_CurrentMovementType
	int32_t ___m_CurrentMovementType_137;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_DetachInLateUpdate
	bool ___m_DetachInLateUpdate_138;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_DetachLinearVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_DetachLinearVelocity_139;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_DetachAngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_DetachAngularVelocity_140;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_ThrowSmoothingCurrentFrame
	int32_t ___m_ThrowSmoothingCurrentFrame_141;
	// System.Single[] UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_ThrowSmoothingFrameTimes
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_ThrowSmoothingFrameTimes_142;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_ThrowSmoothingLinearVelocityFrames
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_ThrowSmoothingLinearVelocityFrames_143;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_ThrowSmoothingAngularVelocityFrames
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_ThrowSmoothingAngularVelocityFrames_144;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_ThrowSmoothingFirstUpdate
	bool ___m_ThrowSmoothingFirstUpdate_145;
	// UnityEngine.Pose UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_LastThrowReferencePose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_LastThrowReferencePose_146;
	// UnityEngine.XR.Interaction.Toolkit.Gaze.IXRAimAssist UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_ThrowAssist
	RuntimeObject* ___m_ThrowAssist_147;
	// UnityEngine.Rigidbody UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_Rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___m_Rigidbody_148;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_WasKinematic
	bool ___m_WasKinematic_149;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_UsedGravity
	bool ___m_UsedGravity_150;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_OldLinearDamping
	float ___m_OldLinearDamping_151;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_OldAngularDamping
	float ___m_OldAngularDamping_152;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_IgnoringCharacterCollision
	bool ___m_IgnoringCharacterCollision_153;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_StopIgnoringCollisionInLateUpdate
	bool ___m_StopIgnoringCollisionInLateUpdate_154;
	// UnityEngine.CharacterController UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_SelectingCharacterController
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_SelectingCharacterController_155;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor> UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_SelectingCharacterInteractors
	HashSet_1_t91EA27B234497F73858A13093DC591352DFD339A* ___m_SelectingCharacterInteractors_156;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_RigidbodyColliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_RigidbodyColliders_157;
	// System.Collections.Generic.HashSet`1<UnityEngine.Collider> UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_CollidersThatAllowedCharacterCollision
	HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B* ___m_CollidersThatAllowedCharacterCollision_158;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_OriginalSceneParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_OriginalSceneParent_159;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.TeleportationMonitor UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_TeleportationMonitor
	TeleportationMonitor_tC9AB34520A1A0D6D2F18DD2067601DE1405C72C6* ___m_TeleportationMonitor_160;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor,UnityEngine.Transform> UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::m_DynamicAttachTransforms
	Dictionary_2_tF1266609C0E9EDEC0BE227973F4B2C73474967DD* ___m_DynamicAttachTransforms_161;
};

struct XRGrabInteractable_tAE7E2F24377399C9B5159179E4B43EA6AA55531B_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.Transformers.DropEventArgs> UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::s_DropEventArgs
	LinkedPool_1_t6A6017AF114EF397084F1333559D0DB9CCE28598* ___s_DropEventArgs_131;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.Transform> UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::s_DynamicAttachTransformPool
	LinkedPool_1_t903D30868AECB20DD006FC2E04DDC68D822C3450* ___s_DynamicAttachTransformPool_162;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::s_ProcessGrabTransformersMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessGrabTransformersMarker_163;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider
struct XRInteractableAffordanceStateProvider_tBF33F0A41B1960C8FE2CCAFC6228E07D8A459C98  : public BaseAffordanceStateProvider_t5721F9B16D6C029D832F8D6FA0A47326A581D443
{
	// UnityEngine.Object UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::m_InteractableSource
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_InteractableSource_15;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::m_IgnoreHoverEvents
	bool ___m_IgnoreHoverEvents_16;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::m_IgnoreHoverPriorityEvents
	bool ___m_IgnoreHoverPriorityEvents_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::m_IgnoreFocusEvents
	bool ___m_IgnoreFocusEvents_18;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::m_IgnoreSelectEvents
	bool ___m_IgnoreSelectEvents_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::m_IgnoreActivateEvents
	bool ___m_IgnoreActivateEvents_20;
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider/SelectClickAnimationMode UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::m_SelectClickAnimationMode
	int32_t ___m_SelectClickAnimationMode_21;
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider/ActivateClickAnimationMode UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::m_ActivateClickAnimationMode
	int32_t ___m_ActivateClickAnimationMode_22;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::m_ClickAnimationDuration
	float ___m_ClickAnimationDuration_23;
	// Unity.XR.CoreUtils.Datums.AnimationCurveDatumProperty UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::m_ClickAnimationCurve
	AnimationCurveDatumProperty_t3E647A9E4598F5D7E85766A3449759FA74DBC485* ___m_ClickAnimationCurve_24;
	// UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::m_Interactable
	RuntimeObject* ___m_Interactable_25;
	// UnityEngine.XR.Interaction.Toolkit.Interactables.IXRHoverInteractable UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::m_HoverInteractable
	RuntimeObject* ___m_HoverInteractable_26;
	// UnityEngine.XR.Interaction.Toolkit.Interactables.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::m_SelectInteractable
	RuntimeObject* ___m_SelectInteractable_27;
	// UnityEngine.XR.Interaction.Toolkit.Interactables.IXRFocusInteractable UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::m_FocusInteractable
	RuntimeObject* ___m_FocusInteractable_28;
	// UnityEngine.XR.Interaction.Toolkit.Interactables.IXRActivateInteractable UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::m_ActivateInteractable
	RuntimeObject* ___m_ActivateInteractable_29;
	// UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractionStrengthInteractable UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::m_InteractionStrengthInteractable
	RuntimeObject* ___m_InteractionStrengthInteractable_30;
	// UnityEngine.Coroutine UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::m_SelectedClickAnimation
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_SelectedClickAnimation_31;
	// UnityEngine.Coroutine UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::m_ActivatedClickAnimation
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_ActivatedClickAnimation_32;
	// UnityEngine.Coroutine UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::m_HoveredPriorityRoutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_HoveredPriorityRoutine_33;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::m_IsBoundToInteractionEvents
	bool ___m_IsBoundToInteractionEvents_34;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::m_IsActivated
	bool ___m_IsActivated_35;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::m_IsRegistered
	bool ___m_IsRegistered_36;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::m_IsHoveredPriority
	bool ___m_IsHoveredPriority_37;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::m_HasHoverInteractable
	bool ___m_HasHoverInteractable_38;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::m_HasSelectInteractable
	bool ___m_HasSelectInteractable_39;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::m_HasInteractionStrengthInteractable
	bool ___m_HasInteractionStrengthInteractable_40;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::m_HoveringPriorityInteractorCount
	int32_t ___m_HoveringPriorityInteractorCount_41;
};

// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider
struct DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A  : public ContinuousMoveProvider_t1F9AD0924053780B7CF1F5C80D672C5D850C47B9
{
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_HeadTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HeadTransform_28;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_LeftControllerTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LeftControllerTransform_29;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_RightControllerTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RightControllerTransform_30;
	// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_LeftHandMovementDirection
	int32_t ___m_LeftHandMovementDirection_31;
	// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_RightHandMovementDirection
	int32_t ___m_RightHandMovementDirection_32;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_CombinedTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CombinedTransform_33;
	// UnityEngine.Pose UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_LeftMovementPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_LeftMovementPose_34;
	// UnityEngine.Pose UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_RightMovementPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_RightMovementPose_35;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor
struct NearFarInteractor_t43B1C14C2D72CB717E3624B0759E265F5D215E9C  : public XRBaseInputInteractor_t704F8C3C7AD9AD8857D5D3AAFDF2F2E37A27BE46
{
	// UnityEngine.Object UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_InteractionAttachController
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_InteractionAttachController_117;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.UnityObjectReferenceCache`2<UnityEngine.XR.Interaction.Toolkit.Attachment.IInteractionAttachController,UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_InteractionAttachControllerObjectRef
	UnityObjectReferenceCache_2_t20A1D9441F1A77A21D178862E228CC9D482299A6* ___m_InteractionAttachControllerObjectRef_118;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_EnableNearCasting
	bool ___m_EnableNearCasting_119;
	// UnityEngine.Object UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_NearInteractionCaster
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_NearInteractionCaster_120;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.UnityObjectReferenceCache`2<UnityEngine.XR.Interaction.Toolkit.Interactors.Casters.IInteractionCaster,UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_NearCasterObjectRef
	UnityObjectReferenceCache_2_t0EFBCB93BA7F378B34012EAD24BDCF46C2D38A01* ___m_NearCasterObjectRef_121;
	// UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor/NearCasterSortingStrategy UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_NearCasterSortingStrategy
	int32_t ___m_NearCasterSortingStrategy_122;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_SortNearTargetsAfterTargetFilter
	bool ___m_SortNearTargetsAfterTargetFilter_123;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_EnableFarCasting
	bool ___m_EnableFarCasting_124;
	// UnityEngine.Object UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_FarInteractionCaster
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_FarInteractionCaster_125;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.UnityObjectReferenceCache`2<UnityEngine.XR.Interaction.Toolkit.Interactors.Casters.ICurveInteractionCaster,UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_FarCasterObjectRef
	UnityObjectReferenceCache_2_t0B8B40B163F469549CE5B2786AEE37072565B7C4* ___m_FarCasterObjectRef_126;
	// UnityEngine.XR.Interaction.Toolkit.Attachment.InteractorFarAttachMode UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_FarAttachMode
	int32_t ___m_FarAttachMode_127;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_EnableUIInteraction
	bool ___m_EnableUIInteraction_128;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_BlockUIOnInteractableSelection
	bool ___m_BlockUIOnInteractableSelection_129;
	// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEnterEvent UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_UIHoverEntered
	UIHoverEnterEvent_t4C957A3405A5D9CB867C5EC446620BB4BA7E7298* ___m_UIHoverEntered_130;
	// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverExitEvent UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_UIHoverExited
	UIHoverExitEvent_t63E5E9C921AFB8E2CB9CA4D32882DD4F62CD509B* ___m_UIHoverExited_131;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputButtonReader UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_UIPressInput
	XRInputButtonReader_t0727CFE55AD1B8ECEFCD382660D9AC0DA1639515* ___m_UIPressInput_132;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<UnityEngine.Vector2> UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_UIScrollInput
	XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* ___m_UIScrollInput_133;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableEnum`1<UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor/Region> UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_SelectionRegion
	BindableEnum_1_tCC6FC0E0347B92BE0D1BAD0F8C7DAD34D8AAE176* ___m_SelectionRegion_134;
	// UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor/Region UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_ValidTargetCastSource
	int32_t ___m_ValidTargetCastSource_135;
	// UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor/Region UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_SelectedTargetCastSource
	int32_t ___m_SelectedTargetCastSource_136;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_TargetColliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_TargetColliders_137;
	// System.Collections.Generic.List`1<UnityEngine.RaycastHit> UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_FarRayCastHits
	List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* ___m_FarRayCastHits_138;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_InternalValidTargets
	List_1_tC3F61ED5D2119F6F6D5E7C5F5662CB782CCD0724* ___m_InternalValidTargets_139;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Interactables.XRInteractableSnapVolume> UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_InteractableSnapVolumes
	List_1_t8895C4411EB12FA581B12FF7465DB05C89C0247C* ___m_InteractableSnapVolumes_140;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_PreFilteredTargets
	List_1_tC3F61ED5D2119F6F6D5E7C5F5662CB782CCD0724* ___m_PreFilteredTargets_141;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable,System.Int32> UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_FarTargetToIndexMap
	Dictionary_2_t4D1E2F15B85F862C4DDC2413C2A0E4028E667270* ___m_FarTargetToIndexMap_142;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_ReleasedNearInteractionThisFrame
	bool ___m_ReleasedNearInteractionThisFrame_143;
	// UnityEngine.XR.Interaction.Toolkit.UI.RegisteredUIInteractorCache UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_RegisteredUIInteractorCache
	RegisteredUIInteractorCache_t81419313AA113B206AF3FF94CD9D3B64A09CE413* ___m_RegisteredUIInteractorCache_144;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.UnityObjectReferenceCache`2<UnityEngine.XR.Interaction.Toolkit.UI.IUIModelUpdater,UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_UIModelUpdaterReferenceCache
	UnityObjectReferenceCache_2_tCF0F7C2D1AFDB9A63B5336AB49F47D39086C9CD6* ___m_UIModelUpdaterReferenceCache_145;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_HasValidRayHit
	bool ___m_HasValidRayHit_146;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_RayEndPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RayEndPoint_147;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_ValidHitIsUI
	bool ___m_ValidHitIsUI_148;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_ValidHitNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ValidHitNormal_149;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_NormalRelativeToInteractable
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_NormalRelativeToInteractable_150;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_RayEndTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RayEndTransform_151;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::m_AllowMultipleValidTargets
	bool ___m_AllowMultipleValidTargets_152;
};

// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume
struct TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0  : public BaseTeleportationInteractable_t56762CCCEAD36A86FD0B296FBC7CFBC261DEAB71
{
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume::m_AnchorTransforms
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___m_AnchorTransforms_87;
	// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettingsDatumProperty UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume::m_DestinationEvaluationSettings
	TeleportVolumeDestinationSettingsDatumProperty_tDD5453B35B45AEB0427BCD5BE987332B3CD14347* ___m_DestinationEvaluationSettings_88;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume::<destinationEvaluationProgress>k__BackingField
	float ___U3CdestinationEvaluationProgressU3Ek__BackingField_89;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume::<destinationAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CdestinationAnchorU3Ek__BackingField_90;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume> UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume::destinationAnchorChanged
	Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31* ___destinationAnchorChanged_91;
	// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.ITeleportationVolumeAnchorFilter UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume::m_DefaultAnchorFilterCache
	RuntimeObject* ___m_DefaultAnchorFilterCache_92;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume::m_WaitingToEvaluateDestination
	bool ___m_WaitingToEvaluateDestination_93;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume::m_WaitStartTime
	float ___m_WaitStartTime_94;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume::m_LastDestinationQueryTime
	float ___m_LastDestinationQueryTime_95;
};

// UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor
struct XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649  : public XRBaseInputInteractor_t704F8C3C7AD9AD8857D5D3AAFDF2F2E37A27BE46
{
	// UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor/LineType UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_LineType
	int32_t ___m_LineType_124;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_BlendVisualLinePoints
	bool ___m_BlendVisualLinePoints_125;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_MaxRaycastDistance
	float ___m_MaxRaycastDistance_126;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_RayOriginTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RayOriginTransform_127;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_ReferenceFrame
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ReferenceFrame_128;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_Velocity
	float ___m_Velocity_129;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_Acceleration
	float ___m_Acceleration_130;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_AdditionalGroundHeight
	float ___m_AdditionalGroundHeight_131;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_AdditionalFlightTime
	float ___m_AdditionalFlightTime_132;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_EndPointDistance
	float ___m_EndPointDistance_133;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_EndPointHeight
	float ___m_EndPointHeight_134;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_ControlPointDistance
	float ___m_ControlPointDistance_135;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_ControlPointHeight
	float ___m_ControlPointHeight_136;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_SampleFrequency
	int32_t ___m_SampleFrequency_137;
	// UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor/HitDetectionType UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_HitDetectionType
	int32_t ___m_HitDetectionType_138;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_SphereCastRadius
	float ___m_SphereCastRadius_139;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_ConeCastAngle
	float ___m_ConeCastAngle_140;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_RaycastMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_RaycastMask_141;
	// UnityEngine.QueryTriggerInteraction UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_RaycastTriggerInteraction
	int32_t ___m_RaycastTriggerInteraction_142;
	// UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor/QuerySnapVolumeInteraction UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_RaycastSnapVolumeInteraction
	int32_t ___m_RaycastSnapVolumeInteraction_143;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_HitClosestOnly
	bool ___m_HitClosestOnly_144;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_HoverToSelect
	bool ___m_HoverToSelect_145;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_HoverTimeToSelect
	float ___m_HoverTimeToSelect_146;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_AutoDeselect
	bool ___m_AutoDeselect_147;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_TimeToAutoDeselect
	float ___m_TimeToAutoDeselect_148;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_EnableUIInteraction
	bool ___m_EnableUIInteraction_149;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_BlockUIOnInteractableSelection
	bool ___m_BlockUIOnInteractableSelection_150;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_ManipulateAttachTransform
	bool ___m_ManipulateAttachTransform_151;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_UseForceGrab
	bool ___m_UseForceGrab_152;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_RotateSpeed
	float ___m_RotateSpeed_153;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_TranslateSpeed
	float ___m_TranslateSpeed_154;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_RotateReferenceFrame
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RotateReferenceFrame_155;
	// UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor/RotateMode UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_RotateMode
	int32_t ___m_RotateMode_156;
	// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEnterEvent UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_UIHoverEntered
	UIHoverEnterEvent_t4C957A3405A5D9CB867C5EC446620BB4BA7E7298* ___m_UIHoverEntered_157;
	// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverExitEvent UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_UIHoverExited
	UIHoverExitEvent_t63E5E9C921AFB8E2CB9CA4D32882DD4F62CD509B* ___m_UIHoverExited_158;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_EnableARRaycasting
	bool ___m_EnableARRaycasting_159;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_OccludeARHitsWith3DObjects
	bool ___m_OccludeARHitsWith3DObjects_160;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_OccludeARHitsWith2DObjects
	bool ___m_OccludeARHitsWith2DObjects_161;
	// UnityEngine.XR.Interaction.Toolkit.Interactors.ScaleMode UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_ScaleMode
	int32_t ___m_ScaleMode_162;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputButtonReader UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_UIPressInput
	XRInputButtonReader_t0727CFE55AD1B8ECEFCD382660D9AC0DA1639515* ___m_UIPressInput_163;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<UnityEngine.Vector2> UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_UIScrollInput
	XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* ___m_UIScrollInput_164;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<UnityEngine.Vector2> UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_TranslateManipulationInput
	XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* ___m_TranslateManipulationInput_165;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<UnityEngine.Vector2> UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_RotateManipulationInput
	XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* ___m_RotateManipulationInput_166;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<UnityEngine.Vector2> UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_DirectionalManipulationInput
	XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* ___m_DirectionalManipulationInput_167;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputButtonReader UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_ScaleToggleInput
	XRInputButtonReader_t0727CFE55AD1B8ECEFCD382660D9AC0DA1639515* ___m_ScaleToggleInput_168;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<UnityEngine.Vector2> UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_ScaleOverTimeInput
	XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* ___m_ScaleOverTimeInput_169;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<System.Single> UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_ScaleDistanceDeltaInput
	XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* ___m_ScaleDistanceDeltaInput_170;
	// UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::<currentNearestValidTarget>k__BackingField
	RuntimeObject* ___U3CcurrentNearestValidTargetU3Ek__BackingField_171;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::<rayEndPoint>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CrayEndPointU3Ek__BackingField_172;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::<rayEndTransform>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrayEndTransformU3Ek__BackingField_173;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::<scaleValue>k__BackingField
	float ___U3CscaleValueU3Ek__BackingField_174;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_HasRayOriginTransform
	bool ___m_HasRayOriginTransform_175;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_HasReferenceFrame
	bool ___m_HasReferenceFrame_176;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_ScaleInputActive
	bool ___m_ScaleInputActive_177;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_ValidTargets
	List_1_tC3F61ED5D2119F6F6D5E7C5F5662CB782CCD0724* ___m_ValidTargets_178;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_LastTimeHoveredObjectChanged
	float ___m_LastTimeHoveredObjectChanged_179;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_PassedHoverTimeToSelect
	bool ___m_PassedHoverTimeToSelect_180;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_LastTimeAutoSelected
	float ___m_LastTimeAutoSelected_181;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_PassedTimeToAutoDeselect
	bool ___m_PassedTimeToAutoDeselect_182;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_LastUIObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LastUIObject_183;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_LastTimeHoveredUIChanged
	float ___m_LastTimeHoveredUIChanged_184;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_HoverUISelectActive
	bool ___m_HoverUISelectActive_185;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_BlockUIAutoDeselect
	bool ___m_BlockUIAutoDeselect_186;
	// UnityEngine.RaycastHit[] UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_RaycastHits
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___m_RaycastHits_187;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_RaycastHitsCount
	int32_t ___m_RaycastHitsCount_188;
	// UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor/RaycastHitComparer UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_RaycastHitComparer
	RaycastHitComparer_tFAAC0D68E449ACF3BDD05D50F8CC6BEFF2B33B33* ___m_RaycastHitComparer_189;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor/SamplePoint> UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_SamplePoints
	List_1_t15F57185D4B9071FE0789904F8EC54114E4F8D6D* ___m_SamplePoints_190;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_SamplePointsFrameUpdated
	int32_t ___m_SamplePointsFrameUpdated_191;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_RaycastHitEndpointIndex
	int32_t ___m_RaycastHitEndpointIndex_192;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_UIRaycastHitEndpointIndex
	int32_t ___m_UIRaycastHitEndpointIndex_193;
	// Unity.Mathematics.float3[] UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_ControlPoints
	float3U5BU5D_t94C1DF28FA7E0FA017D0C77B720D9FF3519E0D45* ___m_ControlPoints_194;
	// Unity.Mathematics.float3[] UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_HitChordControlPoints
	float3U5BU5D_t94C1DF28FA7E0FA017D0C77B720D9FF3519E0D45* ___m_HitChordControlPoints_195;
	// UnityEngine.PhysicsScene UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_LocalPhysicsScene
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE ___m_LocalPhysicsScene_198;
	// UnityEngine.XR.Interaction.Toolkit.UI.RegisteredUIInteractorCache UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_RegisteredUIInteractorCache
	RegisteredUIInteractorCache_t81419313AA113B206AF3FF94CD9D3B64A09CE413* ___m_RegisteredUIInteractorCache_199;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_RaycastHitOccurred
	bool ___m_RaycastHitOccurred_200;
	// UnityEngine.RaycastHit UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_RaycastHit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___m_RaycastHit_201;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_UIRaycastHit
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___m_UIRaycastHit_202;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_IsUIHitClosest
	bool ___m_IsUIHitClosest_203;
	// UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_RaycastInteractable
	RuntimeObject* ___m_RaycastInteractable_204;
	// UnityEngine.XR.Interaction.Toolkit.ActionBasedController UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_ActionBasedController
	ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* ___m_ActionBasedController_205;
	// UnityEngine.XR.Interaction.Toolkit.XRController UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_DeviceBasedController
	XRController_t928E104C899E51FDE12C0A8AC68874587C46C28F* ___m_DeviceBasedController_206;
	// UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_ScreenSpaceController
	XRScreenSpaceController_t046F18C2FE01EB347832DB82D42C84131771FF17* ___m_ScreenSpaceController_207;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_IsActionBasedController
	bool ___m_IsActionBasedController_208;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_IsDeviceBasedController
	bool ___m_IsDeviceBasedController_209;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::m_IsScreenSpaceController
	bool ___m_IsScreenSpaceController_210;
};

struct XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::s_Results
	List_1_tC3F61ED5D2119F6F6D5E7C5F5662CB782CCD0724* ___s_Results_121;
	// UnityEngine.RaycastHit[] UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::s_SpherecastScratch
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___s_SpherecastScratch_122;
	// System.Collections.Generic.HashSet`1<UnityEngine.Collider> UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::s_OptimalHits
	HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B* ___s_OptimalHits_123;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor/SamplePoint> UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::s_ScratchSamplePoints
	List_1_t15F57185D4B9071FE0789904F8EC54114E4F8D6D* ___s_ScratchSamplePoints_196;
	// Unity.Mathematics.float3[] UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::s_ScratchControlPoints
	float3U5BU5D_t94C1DF28FA7E0FA017D0C77B720D9FF3519E0D45* ___s_ScratchControlPoints_197;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TValue Unity.XR.CoreUtils.Datums.DatumProperty`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatumProperty_2_get_Value_m84CD81963C65CDE4026846B3B0543E82FF01DB21_gshared (/*Unity.XR.CoreUtils.Datums.DatumProperty`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/DatumProperty_2_tCD4D1608037774DE058DBA370D45A039BA9E06E6* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentInParent_TisIl2CppFullySharedGenericAny_mC623E57DF1C1113E52B35DF8F5130A698B7174A5_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Utilities.ComponentLocatorUtility`1<System.Object>::TryFindComponent(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ComponentLocatorUtility_1_TryFindComponent_m59FF38DBD350EF6445AC2926CA31B99BDE6485D8_gshared (RuntimeObject** ___component0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m5CDE58421961A2EE0BCD97B9A4F3602910C2CE29_gshared (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mCF6F788014D8853604DCD25C8AFB5C342F032F9D_gshared (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030* __this, UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m3E97180D9D50BF43BC80B709B867B052DF0BDEDD_gshared (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030* __this, UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259* ___call0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// TValue UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::ReadValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_ReadValue_mFB37AAAB53CB16F2EEA26BCDF3A0023969C5A554_gshared (/*UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>*/XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor(System.String,UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader/InputSourceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_m8A6FE1E7C460CBD4EC6AE392547F9B5454503EFE_gshared (/*UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>*/XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, String_t* ___name0, int32_t ___inputSourceMode1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m1DAC2092CCCBD890743A0FF18E66E3390FC7871F_gshared (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg00, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m73E14DB94D21272EEE1E28E4D74704B0095D8064_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mE12E434B402CFEB49197444DE1D52A3AE4C7F6EE_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.HashSet`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mA764DCA3CB14CB2CBDF742A163492FF4DA515B63_gshared_inline (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m5E12B490550D90B0686D55F8F4E7B0506BD07120_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<TValue> UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923 ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_gshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mBA9853A226A9CB16F8FB74D21519A91A38E063E0_gshared (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_mAEF87A53D24C4DB2F6069E75CF1A5D66D5F4D13F_gshared (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA42BDA7B751B17DB4EC59F6995E3188780091966_gshared (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m8E9B7F6EE50FEF26FF7537F554B4F5E434F70550_gshared (Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___obj0, const RuntimeMethod* method) ;
// Unity.XR.CoreUtils.Bindings.IEventBinding Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BindableVariableBase_1_Subscribe_mB0E3C6493B26EBDDD8658EA7BF8A78E94232C28E_gshared (/*Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/BindableVariableBase_1_tF075B55161CD973AA28BB081CC7E13F360F44F90* __this, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___callback0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_Dispose_mEEC16F53ED4262F8F6D546E70314DD22218D50D1_gshared (/*UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>*/TweenableVariableAsyncBase_1_t7FD0BE25E95FFCEE9DE5FDBE93CBFB450DEBCD76* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::HandleTween(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_HandleTween_m5F5336AC691CDEC9F6045BF1EA3C8AF58B754CA9_gshared (/*UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC* __this, float ___tweenTarget0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_target(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_set_target_m1D3A94553B81300767EE030D4F2078434EA8935F_gshared (/*UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_type(UnityEngine.UI.Image/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_type_mECB8D34772AA393FFBC867B03D18EA0F1A8546BF (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m119FC84288B3E5166500AB8D976F6135420BCAEC (Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume::add_destinationAnchorChanged(System.Action`1<UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportationMultiAnchorVolume_add_destinationAnchorChanged_mFB365E430B9DF8C9F48465905563E149030C8C80 (TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* __this, Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume::remove_destinationAnchorChanged(System.Action`1<UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportationMultiAnchorVolume_remove_destinationAnchorChanged_mD878285F1E46919DDE67A207280D713F637E52E9 (TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* __this, Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume::get_destinationAnchor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* TeleportationMultiAnchorVolume_get_destinationAnchor_m8867AD0C9F209FBEAC8E14A53887547329C4D1E8_inline (TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle::PointAtTarget(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiAnchorTeleportReticle_PointAtTarget_m68DA8B5FE3864AEF55E72A3FCCC53E2805A16F9B (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___indicatorTransform0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition1, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume::get_destinationEvaluationProgress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TeleportationMultiAnchorVolume_get_destinationEvaluationProgress_mA00FA8BCF4AC4B9A68AEA8A12B38C90AC35B4021_inline (TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle::UpdatePotentialDestinationIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiAnchorTeleportReticle_UpdatePotentialDestinationIndicator_m514BE4CB5D1FCB70B038C8DAB9FFA001EA568506 (MultiAnchorTeleportReticle_t4D51659966078FEA51FBCD719B78BE3479F7A357* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettingsDatumProperty UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume::get_destinationEvaluationSettings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TeleportVolumeDestinationSettingsDatumProperty_tDD5453B35B45AEB0427BCD5BE987332B3CD14347* TeleportationMultiAnchorVolume_get_destinationEvaluationSettings_m7173078EC07F832CB26FFA81BDF531C3F6BC0D11_inline (TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* __this, const RuntimeMethod* method) ;
// TValue Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettings,UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettingsDatum>::get_Value()
inline TeleportVolumeDestinationSettings_t997F47ECBFA0D750BC9F96D8EF12222BD9F332C2* DatumProperty_2_get_Value_m2E6E6BAEAF37EBDC365555A571764C3E14842340 (DatumProperty_2_tB709D9E7EE778C6E558893216C422FB04F63078F* __this, const RuntimeMethod* method)
{
	TeleportVolumeDestinationSettings_t997F47ECBFA0D750BC9F96D8EF12222BD9F332C2* il2cppRetVal;
	((  void (*) (/*Unity.XR.CoreUtils.Datums.DatumProperty`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/DatumProperty_2_tCD4D1608037774DE058DBA370D45A039BA9E06E6*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))DatumProperty_2_get_Value_m84CD81963C65CDE4026846B3B0543E82FF01DB21_gshared)((DatumProperty_2_tCD4D1608037774DE058DBA370D45A039BA9E06E6*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettings::get_pollForDestinationChange()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TeleportVolumeDestinationSettings_get_pollForDestinationChange_m8B84DAB7771B97C759D574E6BF02CA1A6B79AAD9_inline (TeleportVolumeDestinationSettings_t997F47ECBFA0D750BC9F96D8EF12222BD9F332C2* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.ITeleportationVolumeAnchorFilter UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume::get_destinationEvaluationFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TeleportationMultiAnchorVolume_get_destinationEvaluationFilter_mB029DABA22AA9BB224FE18EF80D059D7F04BCEC5 (TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume::get_anchorTransforms()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* TeleportationMultiAnchorVolume_get_anchorTransforms_m0D5B37776E774893D31FB4BCE7A5159814E352F9_inline (TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upwards1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider>()
inline XRInteractableAffordanceStateProvider_tBF33F0A41B1960C8FE2CCAFC6228E07D8A459C98* Component_GetComponent_TisXRInteractableAffordanceStateProvider_tBF33F0A41B1960C8FE2CCAFC6228E07D8A459C98_m894CCED6E7CD12BF58675A601F33C47F63578BD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	XRInteractableAffordanceStateProvider_tBF33F0A41B1960C8FE2CCAFC6228E07D8A459C98* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::get_interactableSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* XRInteractableAffordanceStateProvider_get_interactableSource_m43E4BAA09BD771994E184DD45418EA28916B7FAE_inline (XRInteractableAffordanceStateProvider_tBF33F0A41B1960C8FE2CCAFC6228E07D8A459C98* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable>()
inline RuntimeObject* Component_GetComponentInParent_TisIXRInteractable_t094DA697CF40A061C2820FDE5B5838D08D7E9609_m1731D74F9EAB2EA20BB46A90D325A9B50C7E2DFC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponentInParent_TisIl2CppFullySharedGenericAny_mC623E57DF1C1113E52B35DF8F5130A698B7174A5_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::SetBoundInteractionReceiver(UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInteractableAffordanceStateProvider_SetBoundInteractionReceiver_m8BB7E035F18464884B8849E420F483F3FFCF537F (XRInteractableAffordanceStateProvider_tBF33F0A41B1960C8FE2CCAFC6228E07D8A459C98* __this, RuntimeObject* ___receiver0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Transform::IsChildOf(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transform_IsChildOf_mFE071BE1E775E825401FE0A9B9BE49E39D256CEA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Utilities.ComponentLocatorUtility`1<UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing.ClimbTeleportInteractor>::TryFindComponent(T&)
inline bool ComponentLocatorUtility_1_TryFindComponent_m95BCBE83B3C4A1C9218DFDF113FFACB3E8CDBCA7 (ClimbTeleportInteractor_t9AD38301B02FCB18FB1FB1B84192C05C731D1083** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (ClimbTeleportInteractor_t9AD38301B02FCB18FB1FB1B84192C05C731D1083**, const RuntimeMethod*))ComponentLocatorUtility_1_TryFindComponent_m59FF38DBD350EF6445AC2926CA31B99BDE6485D8_gshared)(___component0, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::get_hoverEntered()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* XRBaseInteractor_get_hoverEntered_m513A1A0A4F630E37B1C72C0AEAC851EAF9252EE1_inline (XRBaseInteractor_t4AF6FC9A7611B9417B4A43E11704AFF85B4A0FB4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4 (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m5CDE58421961A2EE0BCD97B9A4F3602910C2CE29_gshared)((UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008* __this, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, const RuntimeMethod*))UnityEvent_1_AddListener_mCF6F788014D8853604DCD25C8AFB5C342F032F9D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)___call0, method);
}
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::get_hoverExited()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* XRBaseInteractor_get_hoverExited_m06044A674CF3046BC7538BBB86A387C03D8AE459_inline (XRBaseInteractor_t4AF6FC9A7611B9417B4A43E11704AFF85B4A0FB4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8 (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m5CDE58421961A2EE0BCD97B9A4F3602910C2CE29_gshared)((UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722 (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26* __this, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, const RuntimeMethod*))UnityEvent_1_AddListener_mCF6F788014D8853604DCD25C8AFB5C342F032F9D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)___call0, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ClimbTeleportDestinationIndicator::HideIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClimbTeleportDestinationIndicator_HideIndicator_m75D683EB16C609A5B4A884E29AA507EDA2B070AC (ClimbTeleportDestinationIndicator_t95EC8E13B0E057810A00B57C40978485340B4458* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33 (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008* __this, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m3E97180D9D50BF43BC80B709B867B052DF0BDEDD_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78 (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26* __this, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m3E97180D9D50BF43BC80B709B867B052DF0BDEDD_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)___call0, method);
}
// UnityEngine.XR.Interaction.Toolkit.Interactables.IXRHoverInteractable UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs::get_interactableObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HoverEnterEventArgs_get_interactableObject_m62A4C0C6E6587F019618B675201AE325F8144B75 (HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ClimbTeleportDestinationIndicator::OnClimbTeleportDestinationAnchorChanged(UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClimbTeleportDestinationIndicator_OnClimbTeleportDestinationAnchorChanged_m959E66F69F6F86274CD38FF03814864A1D0A4C48 (ClimbTeleportDestinationIndicator_t95EC8E13B0E057810A00B57C40978485340B4458* __this, TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* ___teleportVolume0, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.Interactables.IXRHoverInteractable UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs::get_interactableObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HoverExitEventArgs_get_interactableObject_m5A2EBD9C9B801951CDC04BDEA40F0A9C1ED52830 (HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationProvider UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.BaseTeleportationInteractable::get_teleportationProvider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TeleportationProvider_t3FAF889EFC7631ED0DA49A1E0C4CAD650002A9E5* BaseTeleportationInteractable_get_teleportationProvider_m80FF22AB2B013021B56E36C74FA82EA819222E5D_inline (BaseTeleportationInteractable_t56762CCCEAD36A86FD0B296FBC7CFBC261DEAB71* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionMediator UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider::get_mediator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocomotionMediator_tFF0E600A153C909C211466942B7D4C3DA6105AD6* LocomotionProvider_get_mediator_m7ED478A25CC3F307D84C6A1F81ACC26231E94B5D_inline (LocomotionProvider_t359A39ECDB2224E3FF09583CF055A3D19A3557BD* __this, const RuntimeMethod* method) ;
// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionMediator::get_xrOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* LocomotionMediator_get_xrOrigin_mF16601BBA48F6C7D13E600FC6CD426D067582170 (LocomotionMediator_tFF0E600A153C909C211466942B7D4C3DA6105AD6* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera Unity.XR.CoreUtils.XROrigin::get_Camera()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* XROrigin_get_Camera_m8959027D616F5BD9AEAE3E41ADEE23BBC2CE3629_inline (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader::EnableDirectActionIfModeUsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_EnableDirectActionIfModeUsed_m6194760B90FB92168D6DDCC80C20DD180169ACB2 (XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader::DisableDirectActionIfModeUsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_DisableDirectActionIfModeUsed_m533212E2020FD7FA589B8B9F536BD7DC6E8048BC (XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<UnityEngine.Vector2>::ReadValue()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputValueReader_1_ReadValue_m5F62621C89CC35067EDFEAE1EBBE315554767369 (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method)
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 il2cppRetVal;
	((  void (*) (/*UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>*/XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))XRInputValueReader_1_ReadValue_mFB37AAAB53CB16F2EEA26BCDF3A0023969C5A554_gshared)((XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// TValue UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<System.Single>::ReadValue()
inline float XRInputValueReader_1_ReadValue_mAFA366F0FF0345B1A9F16C19F1815D10E427860D (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method)
{
	float il2cppRetVal;
	((  void (*) (/*UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>*/XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))XRInputValueReader_1_ReadValue_mFB37AAAB53CB16F2EEA26BCDF3A0023969C5A554_gshared)((XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<UnityEngine.Vector2>::.ctor(System.String,UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader/InputSourceMode)
inline void XRInputValueReader_1__ctor_mCCE3009EBDA5485C04EB7D2EDC884E3C4F0F185B (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, String_t* ___name0, int32_t ___inputSourceMode1, const RuntimeMethod* method)
{
	((  void (*) (/*UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>*/XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, String_t*, int32_t, const RuntimeMethod*))XRInputValueReader_1__ctor_m8A6FE1E7C460CBD4EC6AE392547F9B5454503EFE_gshared)((XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*)__this, ___name0, ___inputSourceMode1, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<System.Single>::.ctor(System.String,UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader/InputSourceMode)
inline void XRInputValueReader_1__ctor_m2D198A41FE129CDD40C6FDBF537BC35E3C4B6CFB (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, String_t* ___name0, int32_t ___inputSourceMode1, const RuntimeMethod* method)
{
	((  void (*) (/*UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>*/XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, String_t*, int32_t, const RuntimeMethod*))XRInputValueReader_1__ctor_m8A6FE1E7C460CBD4EC6AE392547F9B5454503EFE_gshared)((XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*)__this, ___name0, ___inputSourceMode1, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::UpdateLocomotionActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_UpdateLocomotionActions_m30001260A476F7ADC0E807ED5F906387BE78D517 (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::UpdateUIActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_UpdateUIActions_mEF86876690920BF2368EAD9D90BAB1D08E6F9791 (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEnterEvent UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::get_uiHoverEntered()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIHoverEnterEvent_t4C957A3405A5D9CB867C5EC446620BB4BA7E7298* NearFarInteractor_get_uiHoverEntered_m65F1C9ACE7F1CB3BB9ED747BADFA954AB92547C3_inline (NearFarInteractor_t43B1C14C2D72CB717E3624B0759E265F5D215E9C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mD4F2DD3BDD2495C5DBD9B73FDA365B7A05DBF472 (UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m5CDE58421961A2EE0BCD97B9A4F3602910C2CE29_gshared)((UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mFFC598528B87DB66F65FC395BA09A0319CD2BE0E (UnityEvent_1_tB85545AD30FFE5714BBEB3B52C9C13A9BEEDB057* __this, UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, const RuntimeMethod*))UnityEvent_1_AddListener_mCF6F788014D8853604DCD25C8AFB5C342F032F9D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)___call0, method);
}
// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverExitEvent UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::get_uiHoverExited()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIHoverExitEvent_t63E5E9C921AFB8E2CB9CA4D32882DD4F62CD509B* NearFarInteractor_get_uiHoverExited_m3AB20DCF61C075D2138CD150711808D13F0CD5E0_inline (NearFarInteractor_t43B1C14C2D72CB717E3624B0759E265F5D215E9C* __this, const RuntimeMethod* method) ;
// Unity.XR.CoreUtils.Bindings.Variables.IReadOnlyBindableVariable`1<UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor/Region> UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::get_selectionRegion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NearFarInteractor_get_selectionRegion_mAF70B4BAD5B46F12A8EE31F17313A82A7BE93394_inline (NearFarInteractor_t43B1C14C2D72CB717E3624B0759E265F5D215E9C* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor/Region>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mF08A1A6C71D02099C731EE6C46B17B1205BBCC6D (Action_1_tBE69AE2445D01D21514F8979242309AE250C59D3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, ___object0, ___method1, method);
}
// System.Void Unity.XR.CoreUtils.Bindings.BindingsGroup::AddBinding(Unity.XR.CoreUtils.Bindings.IEventBinding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingsGroup_AddBinding_m18697E73861A1C67DE0674F162B43CCE9E67C89B (BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* __this, RuntimeObject* ___binding0, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::get_selectEntered()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* XRBaseInteractor_get_selectEntered_mC85EF4187B4575CF00CE7E0957DE5D0E11FAA524_inline (XRBaseInteractor_t4AF6FC9A7611B9417B4A43E11704AFF85B4A0FB4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24 (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m5CDE58421961A2EE0BCD97B9A4F3602910C2CE29_gshared)((UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2 (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8* __this, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, const RuntimeMethod*))UnityEvent_1_AddListener_mCF6F788014D8853604DCD25C8AFB5C342F032F9D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)___call0, method);
}
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor::get_selectExited()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* XRBaseInteractor_get_selectExited_m680D2E90A7CAA747EB07AAE7427A287E7D49A370_inline (XRBaseInteractor_t4AF6FC9A7611B9417B4A43E11704AFF85B4A0FB4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40 (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m5CDE58421961A2EE0BCD97B9A4F3602910C2CE29_gshared)((UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602 (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B* __this, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, const RuntimeMethod*))UnityEvent_1_AddListener_mCF6F788014D8853604DCD25C8AFB5C342F032F9D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)___call0, method);
}
// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEnterEvent UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::get_uiHoverEntered()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIHoverEnterEvent_t4C957A3405A5D9CB867C5EC446620BB4BA7E7298* XRRayInteractor_get_uiHoverEntered_m22CB14AC1A11633A125A0EA0EC0099EC1476F03E_inline (XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverExitEvent UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::get_uiHoverExited()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIHoverExitEvent_t63E5E9C921AFB8E2CB9CA4D32882DD4F62CD509B* XRRayInteractor_get_uiHoverExited_m33429ECD32C826D9FA13A0E87C37B44CD63FDBB1_inline (XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::GetInputAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ControllerInputActionManager_GetInputAction_m2F95F2340B1602E3787F34FDA150C47AB95068AE (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57 (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.XR.CoreUtils.Bindings.BindingsGroup::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingsGroup_Clear_m092668459F10E46245228224D1334DAB089B72E3 (BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m01B6B9BBA6AC264F094CE87EA45D542DCAD7B59E (UnityEvent_1_tB85545AD30FFE5714BBEB3B52C9C13A9BEEDB057* __this, UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m3E97180D9D50BF43BC80B709B867B052DF0BDEDD_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8* __this, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m3E97180D9D50BF43BC80B709B867B052DF0BDEDD_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B* __this, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m3E97180D9D50BF43BC80B709B867B052DF0BDEDD_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)___call0, method);
}
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider>::Invoke(T0)
inline void UnityEvent_1_Invoke_m2DA1D95CA656B45F334764F0D14DC4FC105D3206 (UnityEvent_1_tA1590A7C4E6E0836296B3C1CD3F16A1819EB7117* __this, RuntimeObject* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))UnityEvent_1_Invoke_m1DAC2092CCCBD890743A0FF18E66E3390FC7871F_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, (Il2CppFullySharedGenericAny)___arg00, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::DisableTeleportActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_DisableTeleportActions_mAD8CBE42896874525C3181CF34C226C6584C06C8 (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputAction/CallbackContext::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* CallbackContext_get_action_mE1ABC0E3E19C045663AB8EDAB9A9205B8C181CE4 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.InputAction>::Add(T)
inline bool HashSet_1_Add_mFA65768161AFFCF3635EDD51B9D5A27E1ECC3E53 (HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))HashSet_1_Add_m73E14DB94D21272EEE1E28E4D74704B0095D8064_gshared)((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.InputAction>::Remove(T)
inline bool HashSet_1_Remove_mCD1D1786A37A068E7B80418B00BD4F2CBF2BEF0F (HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))HashSet_1_Remove_mE12E434B402CFEB49197444DE1D52A3AE4C7F6EE_gshared)((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.InputAction>::get_Count()
inline int32_t HashSet_1_get_Count_m830B4E1CB08A93B4C9803638B3AC2CB9925EB52E_inline (HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))HashSet_1_get_Count_mA764DCA3CB14CB2CBDF742A163492FF4DA515B63_gshared_inline)((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::DisableAllLocomotionActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_DisableAllLocomotionActions_m47F4F0FB199536B8B58DCB7E4248986C2A61C4EC (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::get_manipulateAttachTransform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRRayInteractor_get_manipulateAttachTransform_m1B52220691D700AEFFE0B8E8AEDD9BAA15DE960A_inline (XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs::get_deviceModel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackedDeviceModel_t38B1BA171F5602138D487005E134580213B4DBE8 UIHoverEventArgs_get_deviceModel_m89E4A51B73B17932351940327599EC37D74BCE95_inline (UIHoverEventArgs_tC712F3F829391F25C89B9951234415D4C354DC39* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::get_isScrollable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackedDeviceModel_get_isScrollable_m2ADDFD1E1BD1F28CDBD07D6970C5325FCD62A505_inline (TrackedDeviceModel_t38B1BA171F5602138D487005E134580213B4DBE8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::SetupInteractorEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_SetupInteractorEvents_m7F89872A6155BDE25310FD98301E0E80D41C277C (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::TeardownInteractorEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_TeardownInteractorEvents_m79A27CF5E55A5C7B53253C22644424811781A312 (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::SetEnabled(UnityEngine.InputSystem.InputActionReference,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_SetEnabled_m98E438A0CC133DBEBB41234928BFBD67B61BA81E (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, bool ___enabled1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::DisableAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_DisableAction_m3E33B9491354D8732C00E02CDA82B85426FB5091 (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::DisableMoveAndTurnActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_DisableMoveAndTurnActions_m231A4976FB2502A412F4C4A746A4AF42D1A28A0C (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::EnableAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_EnableAction_m17C9BE847C2BFD6A62C7B95D6CFD1994ADE16D84 (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputAction::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_get_enabled_mA1E3523D89FCD4649E787A4BFE9D5863674846FA (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_Disable_m72D1982F82457C6E003440BADD06989D399BDE50 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.InputAction>::.ctor()
inline void HashSet_1__ctor_mD28F97EDC08E91C2F50CDF8E86AF228489358EA7 (HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))HashSet_1__ctor_m5E12B490550D90B0686D55F8F4E7B0506BD07120_gshared)((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this, method);
}
// System.Void Unity.XR.CoreUtils.Bindings.BindingsGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingsGroup__ctor_m1EFD3F405050571D3A66F9B95E8FBC296866A716 (BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocomotionProvider_Awake_m00A71AF857A2EF25A15F194187D92509A19AD12F (LocomotionProvider_t359A39ECDB2224E3FF09583CF055A3D19A3557BD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.ContinuousMoveProvider::set_forwardSource(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ContinuousMoveProvider_set_forwardSource_m16B2571E7A28F8A79802D12165950AD59C9A5490_inline (ContinuousMoveProvider_t1F9AD0924053780B7CF1F5C80D672C5D850C47B9* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Pose Unity.XR.CoreUtils.TransformExtensions::GetWorldPose(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 TransformExtensions_GetWorldPose_m08E343202174666DFF9A07560AB1A72ACD0DDCF1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<UnityEngine.Vector2> UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.ContinuousMoveProvider::get_leftHandMoveInput()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* ContinuousMoveProvider_get_leftHandMoveInput_m2B7F6358E442942C20D0667A234A29BE0CBAEB8E_inline (ContinuousMoveProvider_t1F9AD0924053780B7CF1F5C80D672C5D850C47B9* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<UnityEngine.Vector2> UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.ContinuousMoveProvider::get_rightHandMoveInput()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* ContinuousMoveProvider_get_rightHandMoveInput_mAA26C39B1CC43915801850C74CF96888DA4CBB7B_inline (ContinuousMoveProvider_t1F9AD0924053780B7CF1F5C80D672C5D850C47B9* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.ContinuousMoveProvider::ComputeDesiredMove(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ContinuousMoveProvider_ComputeDesiredMove_mE4E902533BB6627AE8922B9EA5C8A55672B98C00 (ContinuousMoveProvider_t1F9AD0924053780B7CF1F5C80D672C5D850C47B9* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___input0, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.ContinuousMoveProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContinuousMoveProvider__ctor_m9715635046C759E4BC51B354BC316EB2BCF31888 (ContinuousMoveProvider_t1F9AD0924053780B7CF1F5C80D672C5D850C47B9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
inline void List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4 (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void UnityEngine.XR.InputDevices::GetDevicesWithCharacteristics(UnityEngine.XR.InputDeviceCharacteristics,System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_GetDevicesWithCharacteristics_m82F54DE2802FCE4EB730FCFBF8731CA91A27DEB0 (uint32_t ___desiredCharacteristics0, List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* ___inputDevices1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Count()
inline int32_t List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_inline (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.InputSystem::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA InputSystem_get_devices_mBE599285E43211ACE15248654A3E3D7DB42C85CA (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<TValue> UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>::GetEnumerator()
inline Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B ReadOnlyArray_1_GetEnumerator_m40DC2BB2BC3C855369753E8780E2B2DE6F38E88C (ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA* __this, const RuntimeMethod* method)
{
	Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923 il2cppRetVal = ((  Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923 (*) (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B*, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_gshared)((ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B*)__this, method);
	return il2cpp_codegen_cast_struct<Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B, Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923>(&il2cppRetVal);
}
// System.Void UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>::Dispose()
inline void Enumerator_Dispose_mF7167BCE82C30E7D09082FFCA3F3EFFD32B186CB (Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923*, const RuntimeMethod*))Enumerator_Dispose_mBA9853A226A9CB16F8FB74D21519A91A38E063E0_gshared)((Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923*)__this, method);
}
// TValue UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>::get_Current()
inline InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* Enumerator_get_Current_mFB31F2643918A411B2F1539CA180A763D0200945 (Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B* __this, const RuntimeMethod* method)
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* il2cppRetVal;
	((  void (*) (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_mAEF87A53D24C4DB2F6069E75CF1A5D66D5F4D13F_gshared)((Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.String UnityEngine.InputSystem.InputControl::get_layout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputControl_get_layout_mE6054F87BB94A1F1D06355E137A1840B2EFF7971 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>::MoveNext()
inline bool Enumerator_MoveNext_mFAC408E08BBD06FE731A9E84F5E79461F23EACBC (Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923*, const RuntimeMethod*))Enumerator_MoveNext_mA42BDA7B751B17DB4EC59F6995E3188780091966_gshared)((Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923*)__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.InputDevice>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9EFC6656FE579E4D72FFCA991DE5860FA28DD71E (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.InputDevices::add_deviceConnected(System.Action`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_add_deviceConnected_m0329DBAE47CA4A20778F7DCBA470FCF9A672E9C9 (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m23A4911D82F290811EDC6BFC315C339857526804 (Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m8E9B7F6EE50FEF26FF7537F554B4F5E434F70550_gshared)((Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8*)__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::add_onDeviceChange(System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_add_onDeviceChange_mC1BAF8DE08B2B3F6D0A98D80AE1E4FF5531C60FA (Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.InputDevices::remove_deviceConnected(System.Action`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_remove_deviceConnected_m52D0C5E73A9BBEEF775E21DF93DDF0DD4F7D1BB5 (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::remove_onDeviceChange(System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_remove_onDeviceChange_mD08F75C263C2D687B2E6E68E86105829075BF717 (Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___value0, const RuntimeMethod* method) ;
// UnityEngine.XR.InputDeviceCharacteristics UnityEngine.XR.InputDevice::get_characteristics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MaterialPipelineHandler::SetPipelineShaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPipelineHandler_SetPipelineShaders_mEF3C7714BCC13EEB99DD4D0AFF65BBB1C91AEF3E (MaterialPipelineHandler_t0FF80ADB33BB30721BC1DF67A7F59847C0582985* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.RenderPipelineAsset UnityEngine.Rendering.GraphicsSettings::get_currentRenderPipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* GraphicsSettings_get_currentRenderPipeline_mEC94DC23DE4F901D6A629E2DE882982686AF75F1 (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ShaderContainer>::GetEnumerator()
inline Enumerator_t1B566B4B8021293BDA76FB2466677DF975ACB8DF List_1_GetEnumerator_mEC725D71089D3258528F69087BB3D275111F60C8 (List_1_tAD47FE510B94D41F2CC47130BE91C52577397DD8* __this, const RuntimeMethod* method)
{
	Enumerator_t1B566B4B8021293BDA76FB2466677DF975ACB8DF il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ShaderContainer>::Dispose()
inline void Enumerator_Dispose_m8E4F22D5A95CD8650AE763B2C1E32275D765919E (Enumerator_t1B566B4B8021293BDA76FB2466677DF975ACB8DF* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ShaderContainer>::get_Current()
inline ShaderContainer_t5449FFD0589156259FBD0A40C97956BAB7A967C1* Enumerator_get_Current_m108DACDDBBFB5E6EED33A49351BE602DEEC6C44E_inline (Enumerator_t1B566B4B8021293BDA76FB2466677DF975ACB8DF* __this, const RuntimeMethod* method)
{
	ShaderContainer_t5449FFD0589156259FBD0A40C97956BAB7A967C1* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_shader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MaterialPipelineHandler::MarkMaterialModified(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPipelineHandler_MarkMaterialModified_mF5668D7CEF7CAA2E7DCBC7F31934D8D31000E6B9 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ShaderContainer>::MoveNext()
inline bool Enumerator_MoveNext_m6A20E0100D9D352AF8D1D6B6ACB174E846DCF156 (Enumerator_t1B566B4B8021293BDA76FB2466677DF975ACB8DF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::EnsureFacingCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_EnsureFacingCamera_mDE91C9175F12CB11CDED0B3C82D5D68ED9CAB7B5 (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::get_cameraToFace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ObjectSpawner_get_cameraToFace_m99ED804DC1AEAFF1FA3BE5D9CB96E15C17A907B8 (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_WorldToViewportPoint_m285523443225EDA79BBEF9C9EDD76B99CFED054B (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::get_isSpawnOptionRandomized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectSpawner_get_isSpawnOptionRandomized_m332805694C4805511AD6D8124E6038E3A5D59C2B (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.BurstMathUtility::ProjectOnPlane(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstMathUtility_ProjectOnPlane_m2C217BB9D02F0F29DF756819A072E4370A7245D8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vector0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___planeNormal1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___projectedVector2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis0, float ___angle1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.GameObject>::Invoke(T)
inline void Action_1_Invoke_mBF1852490A3A2C4508CEF22E3887E57A8E6C6E45_inline (Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)___obj0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer::OnLink(UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseGrabTransformer_OnLink_m1247B6C6DDCE2D06C9EC7030419772001072AFB6 (XRBaseGrabTransformer_t928B47DA234790117C35A173C92AF6A7776F48AE* __this, XRGrabInteractable_tAE7E2F24377399C9B5159179E4B43EA6AA55531B* ___grabInteractable0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseGrabTransformer__ctor_m30FA70FC5B6D1735315AA87624C8BFC6C80A517E (XRBaseGrabTransformer_t928B47DA234790117C35A173C92AF6A7776F48AE* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<UnityEngine.XR.Interaction.Toolkit.Filtering.IMultiPokeStateDataProvider>()
inline RuntimeObject* Component_GetComponentInParent_TisIMultiPokeStateDataProvider_tD966DFBE873FAF8D39E820B94A6795B4A2EFA73F_m547FA5110DC4523EAC78FD8D62A6E0EA8378AB58 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponentInParent_TisIl2CppFullySharedGenericAny_mC623E57DF1C1113E52B35DF8F5130A698B7174A5_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// T UnityEngine.Component::GetComponentInParent<UnityEngine.XR.Interaction.Toolkit.Filtering.IPokeStateDataProvider>()
inline RuntimeObject* Component_GetComponentInParent_TisIPokeStateDataProvider_t14F2B731F2979D1138EB70A11E36F274A23DC91C_m56533D22EBBEEE60BD440ECE3B5EF450D8F5DE62 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponentInParent_TisIl2CppFullySharedGenericAny_mC623E57DF1C1113E52B35DF8F5130A698B7174A5_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Action`1<Unity.Mathematics.float3>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mB233B0C3B645B249C912144F3F6EA0B343C5E5F0 (Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, ___object0, ___method1, method);
}
// Unity.XR.CoreUtils.Bindings.IEventBinding Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<Unity.Mathematics.float3>::Subscribe(System.Action`1<T>)
inline RuntimeObject* BindableVariableBase_1_Subscribe_mC4E18EDA53B1AF95B57D4D6976353EC198EA6608 (BindableVariableBase_1_t6E41640D2419E25E9579C521963F28A608530041* __this, Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B* ___callback0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (/*Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/BindableVariableBase_1_tF075B55161CD973AA28BB081CC7E13F360F44F90*, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, const RuntimeMethod*))BindableVariableBase_1_Subscribe_mB0E3C6493B26EBDDD8658EA7BF8A78E94232C28E_gshared)((BindableVariableBase_1_tF075B55161CD973AA28BB081CC7E13F360F44F90*)__this, (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)___callback0, method);
}
// System.Void System.Action`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m51E8C8F6D6AAA447F906F82CBA1114C86E69FF54 (Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1<Unity.Mathematics.float3>::Dispose()
inline void TweenableVariableAsyncBase_1_Dispose_m7D9825BEBF868FFDC835F08406D9E9AD17F53E32 (TweenableVariableAsyncBase_1_tBC224ABEF15BBD66D75B9D20BED7ADB1F273E430* __this, const RuntimeMethod* method)
{
	((  void (*) (/*UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>*/TweenableVariableAsyncBase_1_t7FD0BE25E95FFCEE9DE5FDBE93CBFB450DEBCD76*, const RuntimeMethod*))TweenableVariableAsyncBase_1_Dispose_mEEC16F53ED4262F8F6D546E70314DD22218D50D1_gshared)((TweenableVariableAsyncBase_1_t7FD0BE25E95FFCEE9DE5FDBE93CBFB450DEBCD76*)__this, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.Mathematics.float3>::HandleTween(System.Single)
inline void TweenableVariableBase_1_HandleTween_m61752C0D7316DD05AB1C8E10319F47902D4CDCD9 (TweenableVariableBase_1_t491314D6C5C1BEA5AFEAB55CCB93192270815F82* __this, float ___tweenTarget0, const RuntimeMethod* method)
{
	((  void (*) (/*UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC*, float, const RuntimeMethod*))TweenableVariableBase_1_HandleTween_m5F5336AC691CDEC9F6045BF1EA3C8AF58B754CA9_gshared)((TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC*)__this, ___tweenTarget0, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 Unity.Mathematics.float3::op_Implicit(Unity.Mathematics.float3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 float3_op_Implicit_m9CC301DFD67EEFAA15CA05E91913E862B22326F6 (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___v0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::get_target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* PokeStateData_get_target_m464672F352B73F0010B9829CA5C692505783091C_inline (PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::get_axisAlignedPokeInteractionPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PokeStateData_get_axisAlignedPokeInteractionPoint_mC3B4E6D1232B8A2E2A98374B3AA9976E29E67D43_inline (PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, float ___maxLength1, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.float3::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Implicit_mE1831A3AC179B7EB3236F8202EC8DD5CE05376AB (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.Mathematics.float3>::set_target(T)
inline void TweenableVariableBase_1_set_target_m3127A21F0C2EF40FA4604D603803BA53DE604337 (TweenableVariableBase_1_t491314D6C5C1BEA5AFEAB55CCB93192270815F82* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___value0, const RuntimeMethod* method)
{
	((  void (*) (/*UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))TweenableVariableBase_1_set_target_m1D3A94553B81300767EE030D4F2078434EA8935F_gshared)((TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC*)__this, (Il2CppFullySharedGenericAny)&___value0, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.Vector3TweenableVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3TweenableVariable__ctor_m22723734B74E394A833F2EEA06F910E45A91F042 (Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* IncrementUIText_get_text_mEE9AC522102D09B1CDE167EA4E3379C6405FCC4E (IncrementUIText_tF29B22345E086474C294CAFCFCEF0F336CA34359* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_Text_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText::set_text(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementUIText_set_text_m77A3581107A2AD2C94A2410B6E2AF024DA5E6A7F (IncrementUIText_tF29B22345E086474C294CAFCFCEF0F336CA34359* __this, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Text = value;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = ___value0;
		__this->___m_Text_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Text_4), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementUIText_Awake_mC97B06670534A04F0A2C68E119D8D1391236BA56 (IncrementUIText_tF29B22345E086474C294CAFCFCEF0F336CA34359* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE556C5D923A68B00D17767856C66003D52D6CEC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Text == null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_Text_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogWarning("Missing required Text component reference. Use the Inspector window to assign which Text component to increment.", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(_stringLiteralAE556C5D923A68B00D17767856C66003D52D6CEC, __this, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText::IncrementText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementUIText_IncrementText_m8E724ACEA196D506DEEA23752B3950D25883BFEA (IncrementUIText_tF29B22345E086474C294CAFCFCEF0F336CA34359* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Count += 1;
		int32_t L_0 = __this->___m_Count_5;
		__this->___m_Count_5 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (m_Text != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___m_Text_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// m_Text.text = m_Count.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___m_Text_4;
		int32_t* L_4 = (&__this->___m_Count_5);
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_4, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementUIText__ctor_m4699F30CF0F521FCC7C05391C13F1711B78CA9EA (IncrementUIText_tF29B22345E086474C294CAFCFCEF0F336CA34359* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle::get_timerProgressFilledImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* MultiAnchorTeleportReticle_get_timerProgressFilledImage_mD063D79A5AE6A4DF69A5124830AC65763421105F (MultiAnchorTeleportReticle_t4D51659966078FEA51FBCD719B78BE3479F7A357* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TimerProgressFilledImage;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___m_TimerProgressFilledImage_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle::set_timerProgressFilledImage(UnityEngine.UI.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiAnchorTeleportReticle_set_timerProgressFilledImage_mCD63152891F26C34BD99CF47040FA718C6047929 (MultiAnchorTeleportReticle_t4D51659966078FEA51FBCD719B78BE3479F7A357* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_TimerProgressFilledImage = value;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = ___value0;
		__this->___m_TimerProgressFilledImage_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TimerProgressFilledImage_4), (void*)L_0);
		return;
	}
}
// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle::get_destinationIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* MultiAnchorTeleportReticle_get_destinationIndicator_mD0B1C671B8D888D7FF748CCD05679AAED43FF6B3 (MultiAnchorTeleportReticle_t4D51659966078FEA51FBCD719B78BE3479F7A357* __this, const RuntimeMethod* method) 
{
	{
		// get => m_DestinationIndicator;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_DestinationIndicator_5;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle::set_destinationIndicator(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiAnchorTeleportReticle_set_destinationIndicator_mBC1CB49CF3D0023C6D8A416D8A2B73A670D074E8 (MultiAnchorTeleportReticle_t4D51659966078FEA51FBCD719B78BE3479F7A357* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_DestinationIndicator = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_DestinationIndicator_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DestinationIndicator_5), (void*)L_0);
		return;
	}
}
// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle::get_potentialDestinationIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* MultiAnchorTeleportReticle_get_potentialDestinationIndicator_m78CDBECFD55188EB14C08879A8760D65AAF64418 (MultiAnchorTeleportReticle_t4D51659966078FEA51FBCD719B78BE3479F7A357* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PotentialDestinationIndicator;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_PotentialDestinationIndicator_6;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle::set_potentialDestinationIndicator(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiAnchorTeleportReticle_set_potentialDestinationIndicator_m1079C828E069DE1448BA741C0892B45840C30775 (MultiAnchorTeleportReticle_t4D51659966078FEA51FBCD719B78BE3479F7A357* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_PotentialDestinationIndicator = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_PotentialDestinationIndicator_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PotentialDestinationIndicator_6), (void*)L_0);
		return;
	}
}
// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle::get_potentialIndicatorUpdateFrequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MultiAnchorTeleportReticle_get_potentialIndicatorUpdateFrequency_m1B6912BBE7610E4E3D1ACE1B23856D17B327729E (MultiAnchorTeleportReticle_t4D51659966078FEA51FBCD719B78BE3479F7A357* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PotentialIndicatorUpdateFrequency;
		float L_0 = __this->___m_PotentialIndicatorUpdateFrequency_7;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle::set_potentialIndicatorUpdateFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiAnchorTeleportReticle_set_potentialIndicatorUpdateFrequency_mF5A07CFC52577193DF9BCE39444CDF2861CD79C5 (MultiAnchorTeleportReticle_t4D51659966078FEA51FBCD719B78BE3479F7A357* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_PotentialIndicatorUpdateFrequency = value;
		float L_0 = ___value0;
		__this->___m_PotentialIndicatorUpdateFrequency_7 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle::OnReticleAttached(UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable,UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.IXRCustomReticleProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiAnchorTeleportReticle_OnReticleAttached_mE2646981377553ED97C69026FF7FF59495D12C97 (MultiAnchorTeleportReticle_t4D51659966078FEA51FBCD719B78BE3479F7A357* __this, XRBaseInteractable_t76185BD6DF3BC86B3CDD82E6368C3C7157E39AE4* ___interactable0, RuntimeObject* ___reticleProvider1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiAnchorTeleportReticle_OnDestinationAnchorChanged_mB76D507A3C08350961E25C93D15EAC90A3492A20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_AnchorVolume = interactable as TeleportationMultiAnchorVolume;
		XRBaseInteractable_t76185BD6DF3BC86B3CDD82E6368C3C7157E39AE4* L_0 = ___interactable0;
		__this->___m_AnchorVolume_8 = ((TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0*)IsInstClass((RuntimeObject*)L_0, TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnchorVolume_8), (void*)((TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0*)IsInstClass((RuntimeObject*)L_0, TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0_il2cpp_TypeInfo_var)));
		// m_PotentialDestinationIndicator.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___m_PotentialDestinationIndicator_6;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// m_DestinationIndicator.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___m_DestinationIndicator_5;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// m_TimerProgressFilledImage.type = Image.Type.Filled;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___m_TimerProgressFilledImage_4;
		NullCheck(L_3);
		Image_set_type_mECB8D34772AA393FFBC867B03D18EA0F1A8546BF(L_3, 3, NULL);
		// m_TimerProgressFilledImage.fillAmount = 0f;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___m_TimerProgressFilledImage_4;
		NullCheck(L_4);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_4, (0.0f), NULL);
		// if (m_AnchorVolume == null)
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_5 = __this->___m_AnchorVolume_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		// return;
		return;
	}

IL_004f:
	{
		// m_AnchorVolume.destinationAnchorChanged += OnDestinationAnchorChanged;
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_7 = __this->___m_AnchorVolume_8;
		Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31* L_8 = (Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31*)il2cpp_codegen_object_new(Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_1__ctor_m119FC84288B3E5166500AB8D976F6135420BCAEC(L_8, __this, (intptr_t)((void*)MultiAnchorTeleportReticle_OnDestinationAnchorChanged_mB76D507A3C08350961E25C93D15EAC90A3492A20_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		TeleportationMultiAnchorVolume_add_destinationAnchorChanged_mFB365E430B9DF8C9F48465905563E149030C8C80(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle::OnReticleDetaching()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiAnchorTeleportReticle_OnReticleDetaching_mB310FBFA67487393F22A7A3B5DDDEE71D34B5A97 (MultiAnchorTeleportReticle_t4D51659966078FEA51FBCD719B78BE3479F7A357* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiAnchorTeleportReticle_OnDestinationAnchorChanged_mB76D507A3C08350961E25C93D15EAC90A3492A20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_AnchorVolume == null)
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_0 = __this->___m_AnchorVolume_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// m_AnchorVolume.destinationAnchorChanged -= OnDestinationAnchorChanged;
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_2 = __this->___m_AnchorVolume_8;
		Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31* L_3 = (Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31*)il2cpp_codegen_object_new(Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m119FC84288B3E5166500AB8D976F6135420BCAEC(L_3, __this, (intptr_t)((void*)MultiAnchorTeleportReticle_OnDestinationAnchorChanged_mB76D507A3C08350961E25C93D15EAC90A3492A20_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		TeleportationMultiAnchorVolume_remove_destinationAnchorChanged_mD878285F1E46919DDE67A207280D713F637E52E9(L_2, L_3, NULL);
		// m_AnchorVolume = null;
		__this->___m_AnchorVolume_8 = (TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnchorVolume_8), (void*)(TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiAnchorTeleportReticle_Update_mAE39347D4801FCD736E53CD5FB27BB674EFEDDE4 (MultiAnchorTeleportReticle_t4D51659966078FEA51FBCD719B78BE3479F7A357* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	{
		// if (m_AnchorVolume == null)
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_0 = __this->___m_AnchorVolume_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// var destinationAnchor = m_AnchorVolume.destinationAnchor;
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_2 = __this->___m_AnchorVolume_8;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = TeleportationMultiAnchorVolume_get_destinationAnchor_m8867AD0C9F209FBEAC8E14A53887547329C4D1E8_inline(L_2, NULL);
		V_0 = L_3;
		// if (destinationAnchor != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// PointAtTarget(m_DestinationIndicator.transform, destinationAnchor.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___m_DestinationIndicator_5;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_0;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		MultiAnchorTeleportReticle_PointAtTarget_m68DA8B5FE3864AEF55E72A3FCCC53E2805A16F9B(L_7, L_9, NULL);
		// return;
		return;
	}

IL_003b:
	{
		// m_TimerProgressFilledImage.fillAmount = m_AnchorVolume.destinationEvaluationProgress;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___m_TimerProgressFilledImage_4;
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_11 = __this->___m_AnchorVolume_8;
		NullCheck(L_11);
		float L_12;
		L_12 = TeleportationMultiAnchorVolume_get_destinationEvaluationProgress_mA00FA8BCF4AC4B9A68AEA8A12B38C90AC35B4021_inline(L_11, NULL);
		NullCheck(L_10);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_10, L_12, NULL);
		// if (Time.time - m_LastPotentialIndicatorUpdateTime >= m_PotentialIndicatorUpdateFrequency)
		float L_13;
		L_13 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_14 = __this->___m_LastPotentialIndicatorUpdateTime_9;
		float L_15 = __this->___m_PotentialIndicatorUpdateFrequency_7;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_13, L_14))) >= ((float)L_15))))
		{
			goto IL_006b;
		}
	}
	{
		// UpdatePotentialDestinationIndicator();
		MultiAnchorTeleportReticle_UpdatePotentialDestinationIndicator_m514BE4CB5D1FCB70B038C8DAB9FFA001EA568506(__this, NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle::UpdatePotentialDestinationIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiAnchorTeleportReticle_UpdatePotentialDestinationIndicator_m514BE4CB5D1FCB70B038C8DAB9FFA001EA568506 (MultiAnchorTeleportReticle_t4D51659966078FEA51FBCD719B78BE3479F7A357* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatumProperty_2_get_Value_m2E6E6BAEAF37EBDC365555A571764C3E14842340_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITeleportationVolumeAnchorFilter_tEB8EF834201983BE3F798013E13B3C1E59CF8D06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	{
		// m_LastPotentialIndicatorUpdateTime = Time.time;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___m_LastPotentialIndicatorUpdateTime_9 = L_0;
		// if (!m_AnchorVolume.destinationEvaluationSettings.Value.pollForDestinationChange)
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_1 = __this->___m_AnchorVolume_8;
		NullCheck(L_1);
		TeleportVolumeDestinationSettingsDatumProperty_tDD5453B35B45AEB0427BCD5BE987332B3CD14347* L_2;
		L_2 = TeleportationMultiAnchorVolume_get_destinationEvaluationSettings_m7173078EC07F832CB26FFA81BDF531C3F6BC0D11_inline(L_1, NULL);
		NullCheck(L_2);
		TeleportVolumeDestinationSettings_t997F47ECBFA0D750BC9F96D8EF12222BD9F332C2* L_3;
		L_3 = DatumProperty_2_get_Value_m2E6E6BAEAF37EBDC365555A571764C3E14842340(L_2, DatumProperty_2_get_Value_m2E6E6BAEAF37EBDC365555A571764C3E14842340_RuntimeMethod_var);
		NullCheck(L_3);
		bool L_4;
		L_4 = TeleportVolumeDestinationSettings_get_pollForDestinationChange_m8B84DAB7771B97C759D574E6BF02CA1A6B79AAD9_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		// m_PotentialDestinationIndicator.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___m_PotentialDestinationIndicator_6;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// return;
		return;
	}

IL_002f:
	{
		// var potentialDestinationIndex = m_AnchorVolume.destinationEvaluationFilter.GetDestinationAnchorIndex(m_AnchorVolume);
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_6 = __this->___m_AnchorVolume_8;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = TeleportationMultiAnchorVolume_get_destinationEvaluationFilter_mB029DABA22AA9BB224FE18EF80D059D7F04BCEC5(L_6, NULL);
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_8 = __this->___m_AnchorVolume_8;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* >::Invoke(0 /* System.Int32 UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.ITeleportationVolumeAnchorFilter::GetDestinationAnchorIndex(UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume) */, ITeleportationVolumeAnchorFilter_tEB8EF834201983BE3F798013E13B3C1E59CF8D06_il2cpp_TypeInfo_var, L_7, L_8);
		V_0 = L_9;
		// var anchors = m_AnchorVolume.anchorTransforms;
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_10 = __this->___m_AnchorVolume_8;
		NullCheck(L_10);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_11;
		L_11 = TeleportationMultiAnchorVolume_get_anchorTransforms_m0D5B37776E774893D31FB4BCE7A5159814E352F9_inline(L_10, NULL);
		V_1 = L_11;
		// if (potentialDestinationIndex < 0 || potentialDestinationIndex >= anchors.Count)
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_13 = V_0;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_14, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_006c;
		}
	}

IL_005f:
	{
		// m_PotentialDestinationIndicator.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___m_PotentialDestinationIndicator_6;
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
		// return;
		return;
	}

IL_006c:
	{
		// var potentialDestination = anchors[potentialDestinationIndex];
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_17 = V_1;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_17, L_18, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		V_2 = L_19;
		// if (potentialDestination == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_008a;
		}
	}
	{
		// m_PotentialDestinationIndicator.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___m_PotentialDestinationIndicator_6;
		NullCheck(L_22);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)0, NULL);
		// return;
		return;
	}

IL_008a:
	{
		// m_PotentialDestinationIndicator.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___m_PotentialDestinationIndicator_6;
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)1, NULL);
		// PointAtTarget(m_PotentialDestinationIndicator.transform, potentialDestination.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___m_PotentialDestinationIndicator_6;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = V_2;
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		MultiAnchorTeleportReticle_PointAtTarget_m68DA8B5FE3864AEF55E72A3FCCC53E2805A16F9B(L_25, L_27, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle::OnDestinationAnchorChanged(UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiAnchorTeleportReticle_OnDestinationAnchorChanged_mB76D507A3C08350961E25C93D15EAC90A3492A20 (MultiAnchorTeleportReticle_t4D51659966078FEA51FBCD719B78BE3479F7A357* __this, TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* ___anchorVolume0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	{
		// var destinationAnchor = anchorVolume.destinationAnchor;
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_0 = ___anchorVolume0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = TeleportationMultiAnchorVolume_get_destinationAnchor_m8867AD0C9F209FBEAC8E14A53887547329C4D1E8_inline(L_0, NULL);
		V_0 = L_1;
		// if (destinationAnchor != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		// m_TimerProgressFilledImage.fillAmount = 1f;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___m_TimerProgressFilledImage_4;
		NullCheck(L_4);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_4, (1.0f), NULL);
		// m_PotentialDestinationIndicator.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___m_PotentialDestinationIndicator_6;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// m_DestinationIndicator.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___m_DestinationIndicator_5;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// PointAtTarget(m_DestinationIndicator.transform, destinationAnchor.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___m_DestinationIndicator_5;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_0;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		MultiAnchorTeleportReticle_PointAtTarget_m68DA8B5FE3864AEF55E72A3FCCC53E2805A16F9B(L_8, L_10, NULL);
		return;
	}

IL_004f:
	{
		// m_TimerProgressFilledImage.fillAmount = 0f;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___m_TimerProgressFilledImage_4;
		NullCheck(L_11);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_11, (0.0f), NULL);
		// m_DestinationIndicator.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___m_DestinationIndicator_5;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle::PointAtTarget(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiAnchorTeleportReticle_PointAtTarget_m68DA8B5FE3864AEF55E72A3FCCC53E2805A16F9B (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___indicatorTransform0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition1, const RuntimeMethod* method) 
{
	{
		// indicatorTransform.rotation = Quaternion.LookRotation(indicatorTransform.forward, targetPosition - indicatorTransform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___indicatorTransform0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___indicatorTransform0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___targetPosition1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___indicatorTransform0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_2, L_6, NULL);
		NullCheck(L_0);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_0, L_7, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiAnchorTeleportReticle__ctor_mDFD090626804291A85F87F65C0364E644E8C679C (MultiAnchorTeleportReticle_t4D51659966078FEA51FBCD719B78BE3479F7A357* __this, const RuntimeMethod* method) 
{
	{
		// float m_PotentialIndicatorUpdateFrequency = 0.1f;
		__this->___m_PotentialIndicatorUpdateFrequency_7 = (0.100000001f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.TeleportVolumeAnchorAffordanceStateLink::get_containingTeleportVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* TeleportVolumeAnchorAffordanceStateLink_get_containingTeleportVolume_m50181BF3B3149557E0CF16F51990B1976E2C8201 (TeleportVolumeAnchorAffordanceStateLink_t7DA616C919D93B9F3BAE4A646B8A1C035DE7C4AD* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ContainingTeleportVolume;
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_0 = __this->___m_ContainingTeleportVolume_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.TeleportVolumeAnchorAffordanceStateLink::set_containingTeleportVolume(UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportVolumeAnchorAffordanceStateLink_set_containingTeleportVolume_mF08BFFB658A0712D01C9EB600025553B72692499 (TeleportVolumeAnchorAffordanceStateLink_t7DA616C919D93B9F3BAE4A646B8A1C035DE7C4AD* __this, TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ContainingTeleportVolume = value;
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_0 = ___value0;
		__this->___m_ContainingTeleportVolume_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ContainingTeleportVolume_4), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.TeleportVolumeAnchorAffordanceStateLink::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportVolumeAnchorAffordanceStateLink_OnEnable_mD1762BF5B5F0755A68582819FB7DD085A8C84424 (TeleportVolumeAnchorAffordanceStateLink_t7DA616C919D93B9F3BAE4A646B8A1C035DE7C4AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisIXRInteractable_t094DA697CF40A061C2820FDE5B5838D08D7E9609_m1731D74F9EAB2EA20BB46A90D325A9B50C7E2DFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisXRInteractableAffordanceStateProvider_tBF33F0A41B1960C8FE2CCAFC6228E07D8A459C98_m894CCED6E7CD12BF58675A601F33C47F63578BD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractable_t094DA697CF40A061C2820FDE5B5838D08D7E9609_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportVolumeAnchorAffordanceStateLink_OnDestinationAnchorChanged_m4185B70F82A1436A3AFCEC0262D6D99F647FA737_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8283638E5854A54022BF2CFA5BA3EBEC021A10DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A6A18E5289758325C81123AD9F04DC1AF11E63A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF94527EDAE64E94D774AA53AC792C267D77F2755);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	TeleportVolumeAnchorAffordanceStateLink_t7DA616C919D93B9F3BAE4A646B8A1C035DE7C4AD* G_B6_0 = NULL;
	TeleportVolumeAnchorAffordanceStateLink_t7DA616C919D93B9F3BAE4A646B8A1C035DE7C4AD* G_B5_0 = NULL;
	TeleportVolumeAnchorAffordanceStateLink_t7DA616C919D93B9F3BAE4A646B8A1C035DE7C4AD* G_B7_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	TeleportVolumeAnchorAffordanceStateLink_t7DA616C919D93B9F3BAE4A646B8A1C035DE7C4AD* G_B8_1 = NULL;
	{
		// m_AffordanceStateProvider = GetComponent<XRInteractableAffordanceStateProvider>();
		XRInteractableAffordanceStateProvider_tBF33F0A41B1960C8FE2CCAFC6228E07D8A459C98* L_0;
		L_0 = Component_GetComponent_TisXRInteractableAffordanceStateProvider_tBF33F0A41B1960C8FE2CCAFC6228E07D8A459C98_m894CCED6E7CD12BF58675A601F33C47F63578BD8(__this, Component_GetComponent_TisXRInteractableAffordanceStateProvider_tBF33F0A41B1960C8FE2CCAFC6228E07D8A459C98_m894CCED6E7CD12BF58675A601F33C47F63578BD8_RuntimeMethod_var);
		__this->___m_AffordanceStateProvider_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AffordanceStateProvider_5), (void*)L_0);
		// if (m_AffordanceStateProvider == null)
		XRInteractableAffordanceStateProvider_tBF33F0A41B1960C8FE2CCAFC6228E07D8A459C98* L_1 = __this->___m_AffordanceStateProvider_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		// Debug.LogError($"Missing {nameof(XRInteractableAffordanceStateProvider)} on {gameObject.name}.", this);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralF94527EDAE64E94D774AA53AC792C267D77F2755, L_4, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(L_5, __this, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_0042:
	{
		// if (m_ContainingTeleportVolume == null)
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_6 = __this->___m_ContainingTeleportVolume_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0078;
		}
	}
	{
		// Debug.LogError($"Missing {nameof(TeleportationMultiAnchorVolume)} reference on {gameObject.name}.", this);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral8283638E5854A54022BF2CFA5BA3EBEC021A10DF, L_9, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(L_10, __this, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_0078:
	{
		// var interactableSource = m_AffordanceStateProvider.interactableSource;
		XRInteractableAffordanceStateProvider_tBF33F0A41B1960C8FE2CCAFC6228E07D8A459C98* L_11 = __this->___m_AffordanceStateProvider_5;
		NullCheck(L_11);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_12;
		L_12 = XRInteractableAffordanceStateProvider_get_interactableSource_m43E4BAA09BD771994E184DD45418EA28916B7FAE_inline(L_11, NULL);
		V_0 = L_12;
		// m_Interactable = interactableSource != null && interactableSource is IXRInteractable interactable
		//         ? interactable
		//         : m_AffordanceStateProvider.GetComponentInParent<IXRInteractable>();
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B5_0 = __this;
		if (!L_14)
		{
			G_B6_0 = __this;
			goto IL_0098;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_15 = V_0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_15, IXRInteractable_t094DA697CF40A061C2820FDE5B5838D08D7E9609_il2cpp_TypeInfo_var));
		RuntimeObject* L_16 = V_1;
		G_B6_0 = G_B5_0;
		if (L_16)
		{
			G_B7_0 = G_B5_0;
			goto IL_00a5;
		}
	}

IL_0098:
	{
		XRInteractableAffordanceStateProvider_tBF33F0A41B1960C8FE2CCAFC6228E07D8A459C98* L_17 = __this->___m_AffordanceStateProvider_5;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = Component_GetComponentInParent_TisIXRInteractable_t094DA697CF40A061C2820FDE5B5838D08D7E9609_m1731D74F9EAB2EA20BB46A90D325A9B50C7E2DFC(L_17, Component_GetComponentInParent_TisIXRInteractable_t094DA697CF40A061C2820FDE5B5838D08D7E9609_m1731D74F9EAB2EA20BB46A90D325A9B50C7E2DFC_RuntimeMethod_var);
		G_B8_0 = L_18;
		G_B8_1 = G_B6_0;
		goto IL_00a6;
	}

IL_00a5:
	{
		RuntimeObject* L_19 = V_1;
		G_B8_0 = L_19;
		G_B8_1 = G_B7_0;
	}

IL_00a6:
	{
		NullCheck(G_B8_1);
		G_B8_1->___m_Interactable_6 = G_B8_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_1->___m_Interactable_6), (void*)G_B8_0);
		// if (m_Interactable == null)
		RuntimeObject* L_20 = __this->___m_Interactable_6;
		if (L_20)
		{
			goto IL_00c6;
		}
	}
	{
		// Debug.LogError($"Interactable source must be an {nameof(IXRInteractable)}.", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(_stringLiteral9A6A18E5289758325C81123AD9F04DC1AF11E63A, __this, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_00c6:
	{
		// m_ContainingTeleportVolume.destinationAnchorChanged += OnDestinationAnchorChanged;
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_21 = __this->___m_ContainingTeleportVolume_4;
		Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31* L_22 = (Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31*)il2cpp_codegen_object_new(Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Action_1__ctor_m119FC84288B3E5166500AB8D976F6135420BCAEC(L_22, __this, (intptr_t)((void*)TeleportVolumeAnchorAffordanceStateLink_OnDestinationAnchorChanged_m4185B70F82A1436A3AFCEC0262D6D99F647FA737_RuntimeMethod_var), NULL);
		NullCheck(L_21);
		TeleportationMultiAnchorVolume_add_destinationAnchorChanged_mFB365E430B9DF8C9F48465905563E149030C8C80(L_21, L_22, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.TeleportVolumeAnchorAffordanceStateLink::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportVolumeAnchorAffordanceStateLink_OnDisable_m58CA83A985DC823547932982151C1558C3159903 (TeleportVolumeAnchorAffordanceStateLink_t7DA616C919D93B9F3BAE4A646B8A1C035DE7C4AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportVolumeAnchorAffordanceStateLink_OnDestinationAnchorChanged_m4185B70F82A1436A3AFCEC0262D6D99F647FA737_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_ContainingTeleportVolume != null)
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_0 = __this->___m_ContainingTeleportVolume_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// m_ContainingTeleportVolume.destinationAnchorChanged -= OnDestinationAnchorChanged;
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_2 = __this->___m_ContainingTeleportVolume_4;
		Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31* L_3 = (Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31*)il2cpp_codegen_object_new(Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m119FC84288B3E5166500AB8D976F6135420BCAEC(L_3, __this, (intptr_t)((void*)TeleportVolumeAnchorAffordanceStateLink_OnDestinationAnchorChanged_m4185B70F82A1436A3AFCEC0262D6D99F647FA737_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		TeleportationMultiAnchorVolume_remove_destinationAnchorChanged_mD878285F1E46919DDE67A207280D713F637E52E9(L_2, L_3, NULL);
	}

IL_0025:
	{
		// if (m_AffordanceStateProvider != null)
		XRInteractableAffordanceStateProvider_tBF33F0A41B1960C8FE2CCAFC6228E07D8A459C98* L_4 = __this->___m_AffordanceStateProvider_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		// m_AffordanceStateProvider.SetBoundInteractionReceiver(m_Interactable);
		XRInteractableAffordanceStateProvider_tBF33F0A41B1960C8FE2CCAFC6228E07D8A459C98* L_6 = __this->___m_AffordanceStateProvider_5;
		RuntimeObject* L_7 = __this->___m_Interactable_6;
		NullCheck(L_6);
		bool L_8;
		L_8 = XRInteractableAffordanceStateProvider_SetBoundInteractionReceiver_m8BB7E035F18464884B8849E420F483F3FFCF537F(L_6, L_7, NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.TeleportVolumeAnchorAffordanceStateLink::OnDestinationAnchorChanged(UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportVolumeAnchorAffordanceStateLink_OnDestinationAnchorChanged_m4185B70F82A1436A3AFCEC0262D6D99F647FA737 (TeleportVolumeAnchorAffordanceStateLink_t7DA616C919D93B9F3BAE4A646B8A1C035DE7C4AD* __this, TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* ___anchorVolume0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractable_t094DA697CF40A061C2820FDE5B5838D08D7E9609_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	XRInteractableAffordanceStateProvider_tBF33F0A41B1960C8FE2CCAFC6228E07D8A459C98* G_B4_0 = NULL;
	XRInteractableAffordanceStateProvider_tBF33F0A41B1960C8FE2CCAFC6228E07D8A459C98* G_B3_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	XRInteractableAffordanceStateProvider_tBF33F0A41B1960C8FE2CCAFC6228E07D8A459C98* G_B5_1 = NULL;
	{
		// var anchor = anchorVolume.destinationAnchor;
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_0 = ___anchorVolume0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = TeleportationMultiAnchorVolume_get_destinationAnchor_m8867AD0C9F209FBEAC8E14A53887547329C4D1E8_inline(L_0, NULL);
		V_0 = L_1;
		// if (anchor == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// m_AffordanceStateProvider.SetBoundInteractionReceiver(m_Interactable);
		XRInteractableAffordanceStateProvider_tBF33F0A41B1960C8FE2CCAFC6228E07D8A459C98* L_4 = __this->___m_AffordanceStateProvider_5;
		RuntimeObject* L_5 = __this->___m_Interactable_6;
		NullCheck(L_4);
		bool L_6;
		L_6 = XRInteractableAffordanceStateProvider_SetBoundInteractionReceiver_m8BB7E035F18464884B8849E420F483F3FFCF537F(L_4, L_5, NULL);
		// return;
		return;
	}

IL_0023:
	{
		// m_AffordanceStateProvider.SetBoundInteractionReceiver(
		//     anchor.IsChildOf(m_Interactable.transform)
		//         ? m_ContainingTeleportVolume
		//         : m_Interactable);
		XRInteractableAffordanceStateProvider_tBF33F0A41B1960C8FE2CCAFC6228E07D8A459C98* L_7 = __this->___m_AffordanceStateProvider_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_0;
		RuntimeObject* L_9 = __this->___m_Interactable_6;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(6 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable::get_transform() */, IXRInteractable_t094DA697CF40A061C2820FDE5B5838D08D7E9609_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_8);
		bool L_11;
		L_11 = Transform_IsChildOf_mFE071BE1E775E825401FE0A9B9BE49E39D256CEA(L_8, L_10, NULL);
		G_B3_0 = L_7;
		if (L_11)
		{
			G_B4_0 = L_7;
			goto IL_0044;
		}
	}
	{
		RuntimeObject* L_12 = __this->___m_Interactable_6;
		G_B5_0 = L_12;
		G_B5_1 = G_B3_0;
		goto IL_004c;
	}

IL_0044:
	{
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_13 = __this->___m_ContainingTeleportVolume_4;
		V_1 = L_13;
		RuntimeObject* L_14 = V_1;
		G_B5_0 = L_14;
		G_B5_1 = G_B4_0;
	}

IL_004c:
	{
		NullCheck(G_B5_1);
		bool L_15;
		L_15 = XRInteractableAffordanceStateProvider_SetBoundInteractionReceiver_m8BB7E035F18464884B8849E420F483F3FFCF537F(G_B5_1, G_B5_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.TeleportVolumeAnchorAffordanceStateLink::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportVolumeAnchorAffordanceStateLink__ctor_m940235326D23C91873B1F556E7ACBBF8BEB4CD7E (TeleportVolumeAnchorAffordanceStateLink_t7DA616C919D93B9F3BAE4A646B8A1C035DE7C4AD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing.ClimbTeleportInteractor UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ClimbTeleportDestinationIndicator::get_climbTeleportInteractor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ClimbTeleportInteractor_t9AD38301B02FCB18FB1FB1B84192C05C731D1083* ClimbTeleportDestinationIndicator_get_climbTeleportInteractor_m7D72326121F7F8D85696530CB3DBD74CC3B7EE91 (ClimbTeleportDestinationIndicator_t95EC8E13B0E057810A00B57C40978485340B4458* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ClimbTeleportInteractor;
		ClimbTeleportInteractor_t9AD38301B02FCB18FB1FB1B84192C05C731D1083* L_0 = __this->___m_ClimbTeleportInteractor_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ClimbTeleportDestinationIndicator::set_climbTeleportInteractor(UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing.ClimbTeleportInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClimbTeleportDestinationIndicator_set_climbTeleportInteractor_m73F00DFB7D342DD36A1AEFDD12EEF578A3338A43 (ClimbTeleportDestinationIndicator_t95EC8E13B0E057810A00B57C40978485340B4458* __this, ClimbTeleportInteractor_t9AD38301B02FCB18FB1FB1B84192C05C731D1083* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ClimbTeleportInteractor = value;
		ClimbTeleportInteractor_t9AD38301B02FCB18FB1FB1B84192C05C731D1083* L_0 = ___value0;
		__this->___m_ClimbTeleportInteractor_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ClimbTeleportInteractor_4), (void*)L_0);
		return;
	}
}
// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ClimbTeleportDestinationIndicator::get_pointerPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ClimbTeleportDestinationIndicator_get_pointerPrefab_m756EC38FEF6CD700628DE348CC9B9314DFFAE601 (ClimbTeleportDestinationIndicator_t95EC8E13B0E057810A00B57C40978485340B4458* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PointerPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_PointerPrefab_5;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ClimbTeleportDestinationIndicator::set_pointerPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClimbTeleportDestinationIndicator_set_pointerPrefab_mFF535081916EDD6A212C9426408A50622AE17119 (ClimbTeleportDestinationIndicator_t95EC8E13B0E057810A00B57C40978485340B4458* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_PointerPrefab = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_PointerPrefab_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PointerPrefab_5), (void*)L_0);
		return;
	}
}
// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ClimbTeleportDestinationIndicator::get_pointerDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ClimbTeleportDestinationIndicator_get_pointerDistance_m5570B990CFFDB453865B4300AA7DBD1004B091DD (ClimbTeleportDestinationIndicator_t95EC8E13B0E057810A00B57C40978485340B4458* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PointerDistance;
		float L_0 = __this->___m_PointerDistance_6;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ClimbTeleportDestinationIndicator::set_pointerDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClimbTeleportDestinationIndicator_set_pointerDistance_m4CC6EFB4A610F81F52733DE67108A00864667D8E (ClimbTeleportDestinationIndicator_t95EC8E13B0E057810A00B57C40978485340B4458* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_PointerDistance = value;
		float L_0 = ___value0;
		__this->___m_PointerDistance_6 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ClimbTeleportDestinationIndicator::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClimbTeleportDestinationIndicator_OnEnable_m8276E674B059917E933568878F7FBF12F83167A7 (ClimbTeleportDestinationIndicator_t95EC8E13B0E057810A00B57C40978485340B4458* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClimbTeleportDestinationIndicator_OnInteractorHoverEntered_mE5C10F13BAE27A02F1D23AAB83CB7BEEE503A566_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClimbTeleportDestinationIndicator_OnInteractorHoverExited_m0FD7540E9118A636666D699F21D07E3FD115BB27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentLocatorUtility_1_TryFindComponent_m95BCBE83B3C4A1C9218DFDF113FFACB3E8CDBCA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD37B382C1D3DE2BC274D3AF06C5B5C0484887B86);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_ClimbTeleportInteractor == null)
		ClimbTeleportInteractor_t9AD38301B02FCB18FB1FB1B84192C05C731D1083* L_0 = __this->___m_ClimbTeleportInteractor_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// if (!ComponentLocatorUtility<ClimbTeleportInteractor>.TryFindComponent(out m_ClimbTeleportInteractor))
		ClimbTeleportInteractor_t9AD38301B02FCB18FB1FB1B84192C05C731D1083** L_2 = (&__this->___m_ClimbTeleportInteractor_4);
		bool L_3;
		L_3 = ComponentLocatorUtility_1_TryFindComponent_m95BCBE83B3C4A1C9218DFDF113FFACB3E8CDBCA7(L_2, ComponentLocatorUtility_1_TryFindComponent_m95BCBE83B3C4A1C9218DFDF113FFACB3E8CDBCA7_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		// Debug.LogError($"Could not find {nameof(ClimbTeleportInteractor)} in scene.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralD37B382C1D3DE2BC274D3AF06C5B5C0484887B86, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_002d:
	{
		// m_ClimbTeleportInteractor.hoverEntered.AddListener(OnInteractorHoverEntered);
		ClimbTeleportInteractor_t9AD38301B02FCB18FB1FB1B84192C05C731D1083* L_4 = __this->___m_ClimbTeleportInteractor_4;
		NullCheck(L_4);
		HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* L_5;
		L_5 = XRBaseInteractor_get_hoverEntered_m513A1A0A4F630E37B1C72C0AEAC851EAF9252EE1_inline(L_4, NULL);
		UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* L_6 = (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*)il2cpp_codegen_object_new(UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4(L_6, __this, (intptr_t)((void*)ClimbTeleportDestinationIndicator_OnInteractorHoverEntered_mE5C10F13BAE27A02F1D23AAB83CB7BEEE503A566_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F(L_5, L_6, UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var);
		// m_ClimbTeleportInteractor.hoverExited.AddListener(OnInteractorHoverExited);
		ClimbTeleportInteractor_t9AD38301B02FCB18FB1FB1B84192C05C731D1083* L_7 = __this->___m_ClimbTeleportInteractor_4;
		NullCheck(L_7);
		HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* L_8;
		L_8 = XRBaseInteractor_get_hoverExited_m06044A674CF3046BC7538BBB86A387C03D8AE459_inline(L_7, NULL);
		UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* L_9 = (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*)il2cpp_codegen_object_new(UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8(L_9, __this, (intptr_t)((void*)ClimbTeleportDestinationIndicator_OnInteractorHoverExited_m0FD7540E9118A636666D699F21D07E3FD115BB27_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722(L_8, L_9, UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ClimbTeleportDestinationIndicator::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClimbTeleportDestinationIndicator_OnDisable_mE5FACA9EA0819CD24BC58AF06F4C348B89871664 (ClimbTeleportDestinationIndicator_t95EC8E13B0E057810A00B57C40978485340B4458* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClimbTeleportDestinationIndicator_OnClimbTeleportDestinationAnchorChanged_m959E66F69F6F86274CD38FF03814864A1D0A4C48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClimbTeleportDestinationIndicator_OnInteractorHoverEntered_mE5C10F13BAE27A02F1D23AAB83CB7BEEE503A566_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClimbTeleportDestinationIndicator_OnInteractorHoverExited_m0FD7540E9118A636666D699F21D07E3FD115BB27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HideIndicator();
		ClimbTeleportDestinationIndicator_HideIndicator_m75D683EB16C609A5B4A884E29AA507EDA2B070AC(__this, NULL);
		// if (m_ActiveTeleportVolume != null)
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_0 = __this->___m_ActiveTeleportVolume_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// m_ActiveTeleportVolume.destinationAnchorChanged -= OnClimbTeleportDestinationAnchorChanged;
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_2 = __this->___m_ActiveTeleportVolume_7;
		Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31* L_3 = (Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31*)il2cpp_codegen_object_new(Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m119FC84288B3E5166500AB8D976F6135420BCAEC(L_3, __this, (intptr_t)((void*)ClimbTeleportDestinationIndicator_OnClimbTeleportDestinationAnchorChanged_m959E66F69F6F86274CD38FF03814864A1D0A4C48_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		TeleportationMultiAnchorVolume_remove_destinationAnchorChanged_mD878285F1E46919DDE67A207280D713F637E52E9(L_2, L_3, NULL);
		// m_ActiveTeleportVolume = null;
		__this->___m_ActiveTeleportVolume_7 = (TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ActiveTeleportVolume_7), (void*)(TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0*)NULL);
	}

IL_0032:
	{
		// if (m_ClimbTeleportInteractor != null)
		ClimbTeleportInteractor_t9AD38301B02FCB18FB1FB1B84192C05C731D1083* L_4 = __this->___m_ClimbTeleportInteractor_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0078;
		}
	}
	{
		// m_ClimbTeleportInteractor.hoverEntered.RemoveListener(OnInteractorHoverEntered);
		ClimbTeleportInteractor_t9AD38301B02FCB18FB1FB1B84192C05C731D1083* L_6 = __this->___m_ClimbTeleportInteractor_4;
		NullCheck(L_6);
		HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* L_7;
		L_7 = XRBaseInteractor_get_hoverEntered_m513A1A0A4F630E37B1C72C0AEAC851EAF9252EE1_inline(L_6, NULL);
		UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* L_8 = (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*)il2cpp_codegen_object_new(UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4(L_8, __this, (intptr_t)((void*)ClimbTeleportDestinationIndicator_OnInteractorHoverEntered_mE5C10F13BAE27A02F1D23AAB83CB7BEEE503A566_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33(L_7, L_8, UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33_RuntimeMethod_var);
		// m_ClimbTeleportInteractor.hoverExited.RemoveListener(OnInteractorHoverExited);
		ClimbTeleportInteractor_t9AD38301B02FCB18FB1FB1B84192C05C731D1083* L_9 = __this->___m_ClimbTeleportInteractor_4;
		NullCheck(L_9);
		HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* L_10;
		L_10 = XRBaseInteractor_get_hoverExited_m06044A674CF3046BC7538BBB86A387C03D8AE459_inline(L_9, NULL);
		UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* L_11 = (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*)il2cpp_codegen_object_new(UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8(L_11, __this, (intptr_t)((void*)ClimbTeleportDestinationIndicator_OnInteractorHoverExited_m0FD7540E9118A636666D699F21D07E3FD115BB27_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78(L_10, L_11, UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78_RuntimeMethod_var);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ClimbTeleportDestinationIndicator::OnInteractorHoverEntered(UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClimbTeleportDestinationIndicator_OnInteractorHoverEntered_mE5C10F13BAE27A02F1D23AAB83CB7BEEE503A566 (ClimbTeleportDestinationIndicator_t95EC8E13B0E057810A00B57C40978485340B4458* __this, HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClimbTeleportDestinationIndicator_OnClimbTeleportDestinationAnchorChanged_m959E66F69F6F86274CD38FF03814864A1D0A4C48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* V_0 = NULL;
	{
		// if (m_ActiveTeleportVolume != null || !(args.interactableObject is TeleportationMultiAnchorVolume teleportVolume))
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_0 = __this->___m_ActiveTeleportVolume_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E* L_2 = ___args0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = HoverEnterEventArgs_get_interactableObject_m62A4C0C6E6587F019618B675201AE325F8144B75(L_2, NULL);
		V_0 = ((TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0*)IsInstClass((RuntimeObject*)L_3, TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0_il2cpp_TypeInfo_var));
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_4 = V_0;
		if (L_4)
		{
			goto IL_001e;
		}
	}

IL_001d:
	{
		// return;
		return;
	}

IL_001e:
	{
		// m_ActiveTeleportVolume = teleportVolume;
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_5 = V_0;
		__this->___m_ActiveTeleportVolume_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ActiveTeleportVolume_7), (void*)L_5);
		// if (m_ActiveTeleportVolume.destinationAnchor != null)
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_6 = __this->___m_ActiveTeleportVolume_7;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = TeleportationMultiAnchorVolume_get_destinationAnchor_m8867AD0C9F209FBEAC8E14A53887547329C4D1E8_inline(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		// OnClimbTeleportDestinationAnchorChanged(m_ActiveTeleportVolume);
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_9 = __this->___m_ActiveTeleportVolume_7;
		ClimbTeleportDestinationIndicator_OnClimbTeleportDestinationAnchorChanged_m959E66F69F6F86274CD38FF03814864A1D0A4C48(__this, L_9, NULL);
	}

IL_0044:
	{
		// m_ActiveTeleportVolume.destinationAnchorChanged += OnClimbTeleportDestinationAnchorChanged;
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_10 = __this->___m_ActiveTeleportVolume_7;
		Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31* L_11 = (Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31*)il2cpp_codegen_object_new(Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_m119FC84288B3E5166500AB8D976F6135420BCAEC(L_11, __this, (intptr_t)((void*)ClimbTeleportDestinationIndicator_OnClimbTeleportDestinationAnchorChanged_m959E66F69F6F86274CD38FF03814864A1D0A4C48_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		TeleportationMultiAnchorVolume_add_destinationAnchorChanged_mFB365E430B9DF8C9F48465905563E149030C8C80(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ClimbTeleportDestinationIndicator::OnInteractorHoverExited(UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClimbTeleportDestinationIndicator_OnInteractorHoverExited_m0FD7540E9118A636666D699F21D07E3FD115BB27 (ClimbTeleportDestinationIndicator_t95EC8E13B0E057810A00B57C40978485340B4458* __this, HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClimbTeleportDestinationIndicator_OnClimbTeleportDestinationAnchorChanged_m959E66F69F6F86274CD38FF03814864A1D0A4C48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* V_0 = NULL;
	{
		// if (!(args.interactableObject is TeleportationMultiAnchorVolume teleportVolume) || teleportVolume != m_ActiveTeleportVolume)
		HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = HoverExitEventArgs_get_interactableObject_m5A2EBD9C9B801951CDC04BDEA40F0A9C1ED52830(L_0, NULL);
		V_0 = ((TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0*)IsInstClass((RuntimeObject*)L_1, TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0_il2cpp_TypeInfo_var));
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_3 = V_0;
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_4 = __this->___m_ActiveTeleportVolume_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_001e;
		}
	}

IL_001d:
	{
		// return;
		return;
	}

IL_001e:
	{
		// HideIndicator();
		ClimbTeleportDestinationIndicator_HideIndicator_m75D683EB16C609A5B4A884E29AA507EDA2B070AC(__this, NULL);
		// m_ActiveTeleportVolume.destinationAnchorChanged -= OnClimbTeleportDestinationAnchorChanged;
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_6 = __this->___m_ActiveTeleportVolume_7;
		Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31* L_7 = (Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31*)il2cpp_codegen_object_new(Action_1_t3F0A0FBA4DF1005A2F3BF6F5A9AD5645222F8D31_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_m119FC84288B3E5166500AB8D976F6135420BCAEC(L_7, __this, (intptr_t)((void*)ClimbTeleportDestinationIndicator_OnClimbTeleportDestinationAnchorChanged_m959E66F69F6F86274CD38FF03814864A1D0A4C48_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		TeleportationMultiAnchorVolume_remove_destinationAnchorChanged_mD878285F1E46919DDE67A207280D713F637E52E9(L_6, L_7, NULL);
		// m_ActiveTeleportVolume = null;
		__this->___m_ActiveTeleportVolume_7 = (TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ActiveTeleportVolume_7), (void*)(TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ClimbTeleportDestinationIndicator::OnClimbTeleportDestinationAnchorChanged(UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClimbTeleportDestinationIndicator_OnClimbTeleportDestinationAnchorChanged_m959E66F69F6F86274CD38FF03814864A1D0A4C48 (ClimbTeleportDestinationIndicator_t95EC8E13B0E057810A00B57C40978485340B4458* __this, TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* ___teleportVolume0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// HideIndicator();
		ClimbTeleportDestinationIndicator_HideIndicator_m75D683EB16C609A5B4A884E29AA507EDA2B070AC(__this, NULL);
		// var destinationAnchor = teleportVolume.destinationAnchor;
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_0 = ___teleportVolume0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = TeleportationMultiAnchorVolume_get_destinationAnchor_m8867AD0C9F209FBEAC8E14A53887547329C4D1E8_inline(L_0, NULL);
		V_0 = L_1;
		// if (destinationAnchor == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// return;
		return;
	}

IL_0017:
	{
		// m_PointerInstance = Instantiate(m_PointerPrefab).transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___m_PointerPrefab_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		__this->___m_PointerInstance_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PointerInstance_8), (void*)L_6);
		// var cameraTrans = teleportVolume.teleportationProvider.mediator.xrOrigin.Camera.transform;
		TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* L_7 = ___teleportVolume0;
		NullCheck(L_7);
		TeleportationProvider_t3FAF889EFC7631ED0DA49A1E0C4CAD650002A9E5* L_8;
		L_8 = BaseTeleportationInteractable_get_teleportationProvider_m80FF22AB2B013021B56E36C74FA82EA819222E5D_inline(L_7, NULL);
		NullCheck(L_8);
		LocomotionMediator_tFF0E600A153C909C211466942B7D4C3DA6105AD6* L_9;
		L_9 = LocomotionProvider_get_mediator_m7ED478A25CC3F307D84C6A1F81ACC26231E94B5D_inline(L_8, NULL);
		NullCheck(L_9);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_10;
		L_10 = LocomotionMediator_get_xrOrigin_mF16601BBA48F6C7D13E600FC6CD426D067582170(L_9, NULL);
		NullCheck(L_10);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11;
		L_11 = XROrigin_get_Camera_m8959027D616F5BD9AEAE3E41ADEE23BBC2CE3629_inline(L_10, NULL);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		V_1 = L_12;
		// var cameraPosition = cameraTrans.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = V_1;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		V_2 = L_14;
		// var destinationPosition = destinationAnchor.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_0;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		V_3 = L_16;
		// var destinationDirectionInScreenSpace = cameraTrans.InverseTransformDirection(destinationPosition - cameraPosition);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_18, L_19, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575(L_17, L_20, NULL);
		V_4 = L_21;
		// destinationDirectionInScreenSpace.z = 0f;
		(&V_4)->___z_4 = (0.0f);
		// var pointerDirection = cameraTrans.TransformDirection(destinationDirectionInScreenSpace).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_4;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_22, L_23, NULL);
		V_6 = L_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_6), NULL);
		V_5 = L_25;
		// m_PointerInstance.position = destinationPosition - pointerDirection * m_PointerDistance;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___m_PointerInstance_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_5;
		float L_29 = __this->___m_PointerDistance_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_28, L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_27, L_30, NULL);
		NullCheck(L_26);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_26, L_31, NULL);
		// m_PointerInstance.rotation = Quaternion.LookRotation(pointerDirection, -cameraTrans.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->___m_PointerInstance_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = V_1;
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_35, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37;
		L_37 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_33, L_36, NULL);
		NullCheck(L_32);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_32, L_37, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ClimbTeleportDestinationIndicator::HideIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClimbTeleportDestinationIndicator_HideIndicator_m75D683EB16C609A5B4A884E29AA507EDA2B070AC (ClimbTeleportDestinationIndicator_t95EC8E13B0E057810A00B57C40978485340B4458* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_PointerInstance != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_PointerInstance_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// Destroy(m_PointerInstance.gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___m_PointerInstance_8;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ClimbTeleportDestinationIndicator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClimbTeleportDestinationIndicator__ctor_m58657562C63389620E972C16E3379BE5CF898D42 (ClimbTeleportDestinationIndicator_t95EC8E13B0E057810A00B57C40978485340B4458* __this, const RuntimeMethod* method) 
{
	{
		// float m_PointerDistance = 0.3f;
		__this->___m_PointerDistance_6 = (0.300000012f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerAnimator::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerAnimator_OnEnable_m49452C705735CDF9CC1C8B2B043B786CCAD06723 (ControllerAnimator_t4F826CECB4A9FBEFDD4EB07B4C5104EFDAFC0D88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral362752735A1275A35E486D0F84ACEF478DC7C88E);
		s_Il2CppMethodInitialized = true;
	}
	XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* G_B6_0 = NULL;
	XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* G_B5_0 = NULL;
	XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* G_B9_0 = NULL;
	XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* G_B8_0 = NULL;
	XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* G_B12_0 = NULL;
	XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* G_B11_0 = NULL;
	{
		// if (m_ThumbstickTransform == null || m_GripTransform == null || m_TriggerTransform == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_ThumbstickTransform_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___m_GripTransform_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___m_TriggerTransform_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_004d;
		}
	}

IL_002a:
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// Debug.LogWarning($"Controller Animator component missing references on {gameObject.name}", this);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral362752735A1275A35E486D0F84ACEF478DC7C88E, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(L_8, __this, NULL);
		// return;
		return;
	}

IL_004d:
	{
		// m_StickInput?.EnableDirectActionIfModeUsed();
		XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* L_9 = __this->___m_StickInput_6;
		XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* L_10 = L_9;
		G_B5_0 = L_10;
		if (L_10)
		{
			G_B6_0 = L_10;
			goto IL_0059;
		}
	}
	{
		goto IL_005e;
	}

IL_0059:
	{
		NullCheck(G_B6_0);
		XRInputValueReader_EnableDirectActionIfModeUsed_m6194760B90FB92168D6DDCC80C20DD180169ACB2(G_B6_0, NULL);
	}

IL_005e:
	{
		// m_TriggerInput?.EnableDirectActionIfModeUsed();
		XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* L_11 = __this->___m_TriggerInput_9;
		XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* L_12 = L_11;
		G_B8_0 = L_12;
		if (L_12)
		{
			G_B9_0 = L_12;
			goto IL_006a;
		}
	}
	{
		goto IL_006f;
	}

IL_006a:
	{
		NullCheck(G_B9_0);
		XRInputValueReader_EnableDirectActionIfModeUsed_m6194760B90FB92168D6DDCC80C20DD180169ACB2(G_B9_0, NULL);
	}

IL_006f:
	{
		// m_GripInput?.EnableDirectActionIfModeUsed();
		XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* L_13 = __this->___m_GripInput_12;
		XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* L_14 = L_13;
		G_B11_0 = L_14;
		if (L_14)
		{
			G_B12_0 = L_14;
			goto IL_007a;
		}
	}
	{
		return;
	}

IL_007a:
	{
		NullCheck(G_B12_0);
		XRInputValueReader_EnableDirectActionIfModeUsed_m6194760B90FB92168D6DDCC80C20DD180169ACB2(G_B12_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerAnimator::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerAnimator_OnDisable_m7C7FF729D582D65F7CDBD5F6E0744CDF1B512288 (ControllerAnimator_t4F826CECB4A9FBEFDD4EB07B4C5104EFDAFC0D88* __this, const RuntimeMethod* method) 
{
	XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* G_B2_0 = NULL;
	XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* G_B1_0 = NULL;
	XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* G_B5_0 = NULL;
	XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* G_B4_0 = NULL;
	XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* G_B8_0 = NULL;
	XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* G_B7_0 = NULL;
	{
		// m_StickInput?.DisableDirectActionIfModeUsed();
		XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* L_0 = __this->___m_StickInput_6;
		XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		XRInputValueReader_DisableDirectActionIfModeUsed_m533212E2020FD7FA589B8B9F536BD7DC6E8048BC(G_B2_0, NULL);
	}

IL_0011:
	{
		// m_TriggerInput?.DisableDirectActionIfModeUsed();
		XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* L_2 = __this->___m_TriggerInput_9;
		XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001d;
		}
	}
	{
		goto IL_0022;
	}

IL_001d:
	{
		NullCheck(G_B5_0);
		XRInputValueReader_DisableDirectActionIfModeUsed_m533212E2020FD7FA589B8B9F536BD7DC6E8048BC(G_B5_0, NULL);
	}

IL_0022:
	{
		// m_GripInput?.DisableDirectActionIfModeUsed();
		XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* L_4 = __this->___m_GripInput_12;
		XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* L_5 = L_4;
		G_B7_0 = L_5;
		if (L_5)
		{
			G_B8_0 = L_5;
			goto IL_002d;
		}
	}
	{
		return;
	}

IL_002d:
	{
		NullCheck(G_B8_0);
		XRInputValueReader_DisableDirectActionIfModeUsed_m533212E2020FD7FA589B8B9F536BD7DC6E8048BC(G_B8_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerAnimator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerAnimator_Update_m2FF0B6DD834D1214F437FDB1BFF80226B8732E2C (ControllerAnimator_t4F826CECB4A9FBEFDD4EB07B4C5104EFDAFC0D88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRInputValueReader_1_ReadValue_m5F62621C89CC35067EDFEAE1EBBE315554767369_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRInputValueReader_1_ReadValue_mAFA366F0FF0345B1A9F16C19F1815D10E427860D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (m_StickInput != null)
		XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* L_0 = __this->___m_StickInput_6;
		if (!L_0)
		{
			goto IL_004f;
		}
	}
	{
		// var stickVal = m_StickInput.ReadValue();
		XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* L_1 = __this->___m_StickInput_6;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = XRInputValueReader_1_ReadValue_m5F62621C89CC35067EDFEAE1EBBE315554767369(L_1, XRInputValueReader_1_ReadValue_m5F62621C89CC35067EDFEAE1EBBE315554767369_RuntimeMethod_var);
		V_0 = L_2;
		// m_ThumbstickTransform.localRotation = Quaternion.Euler(-stickVal.y * m_StickRotationRange.x, 0f, -stickVal.x * m_StickRotationRange.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_ThumbstickTransform_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (&__this->___m_StickRotationRange_5);
		float L_7 = L_6->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		float L_9 = L_8.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = (&__this->___m_StickRotationRange_5);
		float L_11 = L_10->___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(((float)il2cpp_codegen_multiply(((-L_5)), L_7)), (0.0f), ((float)il2cpp_codegen_multiply(((-L_9)), L_11)), NULL);
		NullCheck(L_3);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_3, L_12, NULL);
	}

IL_004f:
	{
		// if (m_TriggerInput != null)
		XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* L_13 = __this->___m_TriggerInput_9;
		if (!L_13)
		{
			goto IL_0099;
		}
	}
	{
		// var triggerVal = m_TriggerInput.ReadValue();
		XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* L_14 = __this->___m_TriggerInput_9;
		NullCheck(L_14);
		float L_15;
		L_15 = XRInputValueReader_1_ReadValue_mAFA366F0FF0345B1A9F16C19F1815D10E427860D(L_14, XRInputValueReader_1_ReadValue_mAFA366F0FF0345B1A9F16C19F1815D10E427860D_RuntimeMethod_var);
		V_1 = L_15;
		// m_TriggerTransform.localRotation = Quaternion.Euler(Mathf.Lerp(m_TriggerXAxisRotationRange.x, m_TriggerXAxisRotationRange.y, triggerVal), 0f, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___m_TriggerTransform_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17 = (&__this->___m_TriggerXAxisRotationRange_8);
		float L_18 = L_17->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = (&__this->___m_TriggerXAxisRotationRange_8);
		float L_20 = L_19->___y_1;
		float L_21 = V_1;
		float L_22;
		L_22 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_18, L_20, L_21, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_22, (0.0f), (0.0f), NULL);
		NullCheck(L_16);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_16, L_23, NULL);
	}

IL_0099:
	{
		// if (m_GripInput != null)
		XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* L_24 = __this->___m_GripInput_12;
		if (!L_24)
		{
			goto IL_00f1;
		}
	}
	{
		// var gripVal = m_GripInput.ReadValue();
		XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* L_25 = __this->___m_GripInput_12;
		NullCheck(L_25);
		float L_26;
		L_26 = XRInputValueReader_1_ReadValue_mAFA366F0FF0345B1A9F16C19F1815D10E427860D(L_25, XRInputValueReader_1_ReadValue_mAFA366F0FF0345B1A9F16C19F1815D10E427860D_RuntimeMethod_var);
		V_2 = L_26;
		// var currentPos = m_GripTransform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___m_GripTransform_10;
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_27, NULL);
		V_3 = L_28;
		// m_GripTransform.localPosition = new Vector3(Mathf.Lerp(m_GripRightRange.x, m_GripRightRange.y, gripVal), currentPos.y, currentPos.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = __this->___m_GripTransform_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_30 = (&__this->___m_GripRightRange_11);
		float L_31 = L_30->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_32 = (&__this->___m_GripRightRange_11);
		float L_33 = L_32->___y_1;
		float L_34 = V_2;
		float L_35;
		L_35 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_31, L_33, L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_3;
		float L_37 = L_36.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_3;
		float L_39 = L_38.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_40), L_35, L_37, L_39, /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_29, L_40, NULL);
	}

IL_00f1:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerAnimator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerAnimator__ctor_mF97513FB229FDBDD116366C0525E7CFF7E3E39C7 (ControllerAnimator_t4F826CECB4A9FBEFDD4EB07B4C5104EFDAFC0D88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRInputValueReader_1__ctor_m2D198A41FE129CDD40C6FDBF537BC35E3C4B6CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRInputValueReader_1__ctor_mCCE3009EBDA5485C04EB7D2EDC884E3C4F0F185B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC125AF6E50565398C00BBB6DCAB135E16BC99BC1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Vector2 m_StickRotationRange = new Vector2(30f, 30f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (30.0f), (30.0f), /*hidden argument*/NULL);
		__this->___m_StickRotationRange_5 = L_0;
		// XRInputValueReader<Vector2> m_StickInput = new XRInputValueReader<Vector2>("Thumbstick");
		XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* L_1 = (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0*)il2cpp_codegen_object_new(XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		XRInputValueReader_1__ctor_mCCE3009EBDA5485C04EB7D2EDC884E3C4F0F185B(L_1, _stringLiteralC125AF6E50565398C00BBB6DCAB135E16BC99BC1, 2, XRInputValueReader_1__ctor_mCCE3009EBDA5485C04EB7D2EDC884E3C4F0F185B_RuntimeMethod_var);
		__this->___m_StickInput_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_StickInput_6), (void*)L_1);
		// Vector2 m_TriggerXAxisRotationRange = new Vector2(0f, -15f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), (0.0f), (-15.0f), /*hidden argument*/NULL);
		__this->___m_TriggerXAxisRotationRange_8 = L_2;
		// XRInputValueReader<float> m_TriggerInput = new XRInputValueReader<float>("Trigger");
		XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* L_3 = (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5*)il2cpp_codegen_object_new(XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XRInputValueReader_1__ctor_m2D198A41FE129CDD40C6FDBF537BC35E3C4B6CFB(L_3, _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B, 2, XRInputValueReader_1__ctor_m2D198A41FE129CDD40C6FDBF537BC35E3C4B6CFB_RuntimeMethod_var);
		__this->___m_TriggerInput_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TriggerInput_9), (void*)L_3);
		// Vector2 m_GripRightRange = new Vector2(-0.0125f, -0.011f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), (-0.0125000002f), (-0.0109999999f), /*hidden argument*/NULL);
		__this->___m_GripRightRange_11 = L_4;
		// XRInputValueReader<float> m_GripInput = new XRInputValueReader<float>("Grip");
		XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* L_5 = (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5*)il2cpp_codegen_object_new(XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		XRInputValueReader_1__ctor_m2D198A41FE129CDD40C6FDBF537BC35E3C4B6CFB(L_5, _stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9, 2, XRInputValueReader_1__ctor_m2D198A41FE129CDD40C6FDBF537BC35E3C4B6CFB_RuntimeMethod_var);
		__this->___m_GripInput_12 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GripInput_12), (void*)L_5);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::get_smoothMotionEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControllerInputActionManager_get_smoothMotionEnabled_mC5C5B0DDFFB3B0C7CF992B514957970320126873 (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SmoothMotionEnabled;
		bool L_0 = __this->___m_SmoothMotionEnabled_13;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::set_smoothMotionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_set_smoothMotionEnabled_m914EA661A51A5360145D8F43F7672EC9296F1558 (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// m_SmoothMotionEnabled = value;
		bool L_0 = ___value0;
		__this->___m_SmoothMotionEnabled_13 = L_0;
		// UpdateLocomotionActions();
		ControllerInputActionManager_UpdateLocomotionActions_m30001260A476F7ADC0E807ED5F906387BE78D517(__this, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::get_smoothTurnEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControllerInputActionManager_get_smoothTurnEnabled_m8BA6BF2C1FAD34B8421ADC63FDAC051C753EB641 (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SmoothTurnEnabled;
		bool L_0 = __this->___m_SmoothTurnEnabled_14;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::set_smoothTurnEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_set_smoothTurnEnabled_m2B6FAA6FD9D16B5831A70012A6EAB7B3ED3A8CD0 (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// m_SmoothTurnEnabled = value;
		bool L_0 = ___value0;
		__this->___m_SmoothTurnEnabled_14 = L_0;
		// UpdateLocomotionActions();
		ControllerInputActionManager_UpdateLocomotionActions_m30001260A476F7ADC0E807ED5F906387BE78D517(__this, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::get_uiScrollingEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControllerInputActionManager_get_uiScrollingEnabled_mBA69FF5A5CA03AC72AB6E055F0CF7744F7491225 (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, const RuntimeMethod* method) 
{
	{
		// get => m_UIScrollingEnabled;
		bool L_0 = __this->___m_UIScrollingEnabled_16;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::set_uiScrollingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_set_uiScrollingEnabled_m8E2885761274BE5200ECBB0D7C1C65A83CA313D0 (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// m_UIScrollingEnabled = value;
		bool L_0 = ___value0;
		__this->___m_UIScrollingEnabled_16 = L_0;
		// UpdateUIActions();
		ControllerInputActionManager_UpdateUIActions_mEF86876690920BF2368EAD9D90BAB1D08E6F9791(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::SetupInteractorEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_SetupInteractorEvents_m7F89872A6155BDE25310FD98301E0E80D41C277C (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tBE69AE2445D01D21514F8979242309AE250C59D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerInputActionManager_OnCancelTeleport_m4BDF184D63E154479DDB39CEF5798CD7F69563DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerInputActionManager_OnNearFarSelectionRegionChanged_m726DFC0ACC75AB83814D394FFD8CD764EF071757_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerInputActionManager_OnRaySelectEntered_m05A00F5AC9CC73F9641F03CE853F21F20338B7B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerInputActionManager_OnRaySelectExited_m2043AA63005912E1603B0017B70B7A089888E0B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerInputActionManager_OnStartLocomotion_m2753A0F4D2ECB0DC422EEE2D1B6BEC4C149EE11C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerInputActionManager_OnStartTeleport_mE7F99274DE90EC5AD8234BB0D6010C5FC96AC9FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerInputActionManager_OnStopLocomotion_m19B6191B67AFEE79180D158CB052307E0ACF4B42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerInputActionManager_OnUIHoverEntered_m7747AA4001671507477941139B2049FF990A20D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerInputActionManager_OnUIHoverExited_m20EE4DA45F2465E8A6425E87F69020C5882533C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyBindableVariable_1_t1F2BE9E50402E707C90C41C06974ED824C410440_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mFFC598528B87DB66F65FC395BA09A0319CD2BE0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_0 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_1 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_2 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_3 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_4 = NULL;
	{
		// if (m_NearFarInteractor != null)
		NearFarInteractor_t43B1C14C2D72CB717E3624B0759E265F5D215E9C* L_0 = __this->___m_NearFarInteractor_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_006d;
		}
	}
	{
		// m_NearFarInteractor.uiHoverEntered.AddListener(OnUIHoverEntered);
		NearFarInteractor_t43B1C14C2D72CB717E3624B0759E265F5D215E9C* L_2 = __this->___m_NearFarInteractor_5;
		NullCheck(L_2);
		UIHoverEnterEvent_t4C957A3405A5D9CB867C5EC446620BB4BA7E7298* L_3;
		L_3 = NearFarInteractor_get_uiHoverEntered_m65F1C9ACE7F1CB3BB9ED747BADFA954AB92547C3_inline(L_2, NULL);
		UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7* L_4 = (UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7*)il2cpp_codegen_object_new(UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_mD4F2DD3BDD2495C5DBD9B73FDA365B7A05DBF472(L_4, __this, (intptr_t)((void*)ControllerInputActionManager_OnUIHoverEntered_m7747AA4001671507477941139B2049FF990A20D9_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_1_AddListener_mFFC598528B87DB66F65FC395BA09A0319CD2BE0E(L_3, L_4, UnityEvent_1_AddListener_mFFC598528B87DB66F65FC395BA09A0319CD2BE0E_RuntimeMethod_var);
		// m_NearFarInteractor.uiHoverExited.AddListener(OnUIHoverExited);
		NearFarInteractor_t43B1C14C2D72CB717E3624B0759E265F5D215E9C* L_5 = __this->___m_NearFarInteractor_5;
		NullCheck(L_5);
		UIHoverExitEvent_t63E5E9C921AFB8E2CB9CA4D32882DD4F62CD509B* L_6;
		L_6 = NearFarInteractor_get_uiHoverExited_m3AB20DCF61C075D2138CD150711808D13F0CD5E0_inline(L_5, NULL);
		UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7* L_7 = (UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7*)il2cpp_codegen_object_new(UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction_1__ctor_mD4F2DD3BDD2495C5DBD9B73FDA365B7A05DBF472(L_7, __this, (intptr_t)((void*)ControllerInputActionManager_OnUIHoverExited_m20EE4DA45F2465E8A6425E87F69020C5882533C4_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		UnityEvent_1_AddListener_mFFC598528B87DB66F65FC395BA09A0319CD2BE0E(L_6, L_7, UnityEvent_1_AddListener_mFFC598528B87DB66F65FC395BA09A0319CD2BE0E_RuntimeMethod_var);
		// m_BindingsGroup.AddBinding(m_NearFarInteractor.selectionRegion.Subscribe(OnNearFarSelectionRegionChanged));
		BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* L_8 = __this->___m_BindingsGroup_22;
		NearFarInteractor_t43B1C14C2D72CB717E3624B0759E265F5D215E9C* L_9 = __this->___m_NearFarInteractor_5;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = NearFarInteractor_get_selectionRegion_mAF70B4BAD5B46F12A8EE31F17313A82A7BE93394_inline(L_9, NULL);
		Action_1_tBE69AE2445D01D21514F8979242309AE250C59D3* L_11 = (Action_1_tBE69AE2445D01D21514F8979242309AE250C59D3*)il2cpp_codegen_object_new(Action_1_tBE69AE2445D01D21514F8979242309AE250C59D3_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_mF08A1A6C71D02099C731EE6C46B17B1205BBCC6D(L_11, __this, (intptr_t)((void*)ControllerInputActionManager_OnNearFarSelectionRegionChanged_m726DFC0ACC75AB83814D394FFD8CD764EF071757_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker1< RuntimeObject*, Action_1_tBE69AE2445D01D21514F8979242309AE250C59D3* >::Invoke(0 /* Unity.XR.CoreUtils.Bindings.IEventBinding Unity.XR.CoreUtils.Bindings.Variables.IReadOnlyBindableVariable`1<UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor/Region>::Subscribe(System.Action`1<T>) */, IReadOnlyBindableVariable_1_t1F2BE9E50402E707C90C41C06974ED824C410440_il2cpp_TypeInfo_var, L_10, L_11);
		NullCheck(L_8);
		BindingsGroup_AddBinding_m18697E73861A1C67DE0674F162B43CCE9E67C89B(L_8, L_12, NULL);
	}

IL_006d:
	{
		// if (m_RayInteractor != null)
		XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* L_13 = __this->___m_RayInteractor_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_00eb;
		}
	}
	{
		// m_RayInteractor.selectEntered.AddListener(OnRaySelectEntered);
		XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* L_15 = __this->___m_RayInteractor_4;
		NullCheck(L_15);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_16;
		L_16 = XRBaseInteractor_get_selectEntered_mC85EF4187B4575CF00CE7E0957DE5D0E11FAA524_inline(L_15, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_17 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_17, __this, (intptr_t)((void*)ControllerInputActionManager_OnRaySelectEntered_m05A00F5AC9CC73F9641F03CE853F21F20338B7B2_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_16, L_17, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		// m_RayInteractor.selectExited.AddListener(OnRaySelectExited);
		XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* L_18 = __this->___m_RayInteractor_4;
		NullCheck(L_18);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_19;
		L_19 = XRBaseInteractor_get_selectExited_m680D2E90A7CAA747EB07AAE7427A287E7D49A370_inline(L_18, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_20 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_20, __this, (intptr_t)((void*)ControllerInputActionManager_OnRaySelectExited_m2043AA63005912E1603B0017B70B7A089888E0B9_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_19, L_20, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		// m_RayInteractor.uiHoverEntered.AddListener(OnUIHoverEntered);
		XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* L_21 = __this->___m_RayInteractor_4;
		NullCheck(L_21);
		UIHoverEnterEvent_t4C957A3405A5D9CB867C5EC446620BB4BA7E7298* L_22;
		L_22 = XRRayInteractor_get_uiHoverEntered_m22CB14AC1A11633A125A0EA0EC0099EC1476F03E_inline(L_21, NULL);
		UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7* L_23 = (UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7*)il2cpp_codegen_object_new(UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		UnityAction_1__ctor_mD4F2DD3BDD2495C5DBD9B73FDA365B7A05DBF472(L_23, __this, (intptr_t)((void*)ControllerInputActionManager_OnUIHoverEntered_m7747AA4001671507477941139B2049FF990A20D9_RuntimeMethod_var), NULL);
		NullCheck(L_22);
		UnityEvent_1_AddListener_mFFC598528B87DB66F65FC395BA09A0319CD2BE0E(L_22, L_23, UnityEvent_1_AddListener_mFFC598528B87DB66F65FC395BA09A0319CD2BE0E_RuntimeMethod_var);
		// m_RayInteractor.uiHoverExited.AddListener(OnUIHoverExited);
		XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* L_24 = __this->___m_RayInteractor_4;
		NullCheck(L_24);
		UIHoverExitEvent_t63E5E9C921AFB8E2CB9CA4D32882DD4F62CD509B* L_25;
		L_25 = XRRayInteractor_get_uiHoverExited_m33429ECD32C826D9FA13A0E87C37B44CD63FDBB1_inline(L_24, NULL);
		UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7* L_26 = (UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7*)il2cpp_codegen_object_new(UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		UnityAction_1__ctor_mD4F2DD3BDD2495C5DBD9B73FDA365B7A05DBF472(L_26, __this, (intptr_t)((void*)ControllerInputActionManager_OnUIHoverExited_m20EE4DA45F2465E8A6425E87F69020C5882533C4_RuntimeMethod_var), NULL);
		NullCheck(L_25);
		UnityEvent_1_AddListener_mFFC598528B87DB66F65FC395BA09A0319CD2BE0E(L_25, L_26, UnityEvent_1_AddListener_mFFC598528B87DB66F65FC395BA09A0319CD2BE0E_RuntimeMethod_var);
	}

IL_00eb:
	{
		// var teleportModeAction = GetInputAction(m_TeleportMode);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_27 = __this->___m_TeleportMode_7;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_28;
		L_28 = ControllerInputActionManager_GetInputAction_m2F95F2340B1602E3787F34FDA150C47AB95068AE(L_27, NULL);
		V_0 = L_28;
		// if (teleportModeAction != null)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_29 = V_0;
		if (!L_29)
		{
			goto IL_0142;
		}
	}
	{
		// teleportModeAction.performed += OnStartTeleport;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_30 = V_0;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_31 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_31, __this, (intptr_t)((void*)ControllerInputActionManager_OnStartTeleport_mE7F99274DE90EC5AD8234BB0D6010C5FC96AC9FE_RuntimeMethod_var), NULL);
		NullCheck(L_30);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_30, L_31, NULL);
		// teleportModeAction.performed += OnStartLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_32 = V_0;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_33 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_33, __this, (intptr_t)((void*)ControllerInputActionManager_OnStartLocomotion_m2753A0F4D2ECB0DC422EEE2D1B6BEC4C149EE11C_RuntimeMethod_var), NULL);
		NullCheck(L_32);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_32, L_33, NULL);
		// teleportModeAction.canceled += OnCancelTeleport;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_34 = V_0;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_35 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_35, __this, (intptr_t)((void*)ControllerInputActionManager_OnCancelTeleport_m4BDF184D63E154479DDB39CEF5798CD7F69563DF_RuntimeMethod_var), NULL);
		NullCheck(L_34);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_34, L_35, NULL);
		// teleportModeAction.canceled += OnStopLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_36 = V_0;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_37 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_37, __this, (intptr_t)((void*)ControllerInputActionManager_OnStopLocomotion_m19B6191B67AFEE79180D158CB052307E0ACF4B42_RuntimeMethod_var), NULL);
		NullCheck(L_36);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_36, L_37, NULL);
	}

IL_0142:
	{
		// var teleportModeCancelAction = GetInputAction(m_TeleportModeCancel);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_38 = __this->___m_TeleportModeCancel_8;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_39;
		L_39 = ControllerInputActionManager_GetInputAction_m2F95F2340B1602E3787F34FDA150C47AB95068AE(L_38, NULL);
		V_1 = L_39;
		// if (teleportModeCancelAction != null)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_40 = V_1;
		if (!L_40)
		{
			goto IL_0163;
		}
	}
	{
		// teleportModeCancelAction.performed += OnCancelTeleport;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_41 = V_1;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_42 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_42, __this, (intptr_t)((void*)ControllerInputActionManager_OnCancelTeleport_m4BDF184D63E154479DDB39CEF5798CD7F69563DF_RuntimeMethod_var), NULL);
		NullCheck(L_41);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_41, L_42, NULL);
	}

IL_0163:
	{
		// var moveAction = GetInputAction(m_Move);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_43 = __this->___m_Move_11;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_44;
		L_44 = ControllerInputActionManager_GetInputAction_m2F95F2340B1602E3787F34FDA150C47AB95068AE(L_43, NULL);
		V_2 = L_44;
		// if (moveAction != null)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_45 = V_2;
		if (!L_45)
		{
			goto IL_0196;
		}
	}
	{
		// moveAction.started += OnStartLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_46 = V_2;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_47 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_47);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_47, __this, (intptr_t)((void*)ControllerInputActionManager_OnStartLocomotion_m2753A0F4D2ECB0DC422EEE2D1B6BEC4C149EE11C_RuntimeMethod_var), NULL);
		NullCheck(L_46);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_46, L_47, NULL);
		// moveAction.canceled += OnStopLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_48 = V_2;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_49 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_49, __this, (intptr_t)((void*)ControllerInputActionManager_OnStopLocomotion_m19B6191B67AFEE79180D158CB052307E0ACF4B42_RuntimeMethod_var), NULL);
		NullCheck(L_48);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_48, L_49, NULL);
	}

IL_0196:
	{
		// var turnAction = GetInputAction(m_Turn);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_50 = __this->___m_Turn_9;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_51;
		L_51 = ControllerInputActionManager_GetInputAction_m2F95F2340B1602E3787F34FDA150C47AB95068AE(L_50, NULL);
		V_3 = L_51;
		// if (turnAction != null)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_52 = V_3;
		if (!L_52)
		{
			goto IL_01c9;
		}
	}
	{
		// turnAction.started += OnStartLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_53 = V_3;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_54 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_54, __this, (intptr_t)((void*)ControllerInputActionManager_OnStartLocomotion_m2753A0F4D2ECB0DC422EEE2D1B6BEC4C149EE11C_RuntimeMethod_var), NULL);
		NullCheck(L_53);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_53, L_54, NULL);
		// turnAction.canceled += OnStopLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_55 = V_3;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_56 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_56, __this, (intptr_t)((void*)ControllerInputActionManager_OnStopLocomotion_m19B6191B67AFEE79180D158CB052307E0ACF4B42_RuntimeMethod_var), NULL);
		NullCheck(L_55);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_55, L_56, NULL);
	}

IL_01c9:
	{
		// var snapTurnAction = GetInputAction(m_SnapTurn);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_57 = __this->___m_SnapTurn_10;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_58;
		L_58 = ControllerInputActionManager_GetInputAction_m2F95F2340B1602E3787F34FDA150C47AB95068AE(L_57, NULL);
		V_4 = L_58;
		// if (snapTurnAction != null)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_59 = V_4;
		if (!L_59)
		{
			goto IL_0200;
		}
	}
	{
		// snapTurnAction.started += OnStartLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_60 = V_4;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_61 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_61);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_61, __this, (intptr_t)((void*)ControllerInputActionManager_OnStartLocomotion_m2753A0F4D2ECB0DC422EEE2D1B6BEC4C149EE11C_RuntimeMethod_var), NULL);
		NullCheck(L_60);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_60, L_61, NULL);
		// snapTurnAction.canceled += OnStopLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_62 = V_4;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_63 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_63);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_63, __this, (intptr_t)((void*)ControllerInputActionManager_OnStopLocomotion_m19B6191B67AFEE79180D158CB052307E0ACF4B42_RuntimeMethod_var), NULL);
		NullCheck(L_62);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_62, L_63, NULL);
	}

IL_0200:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::TeardownInteractorEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_TeardownInteractorEvents_m79A27CF5E55A5C7B53253C22644424811781A312 (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerInputActionManager_OnCancelTeleport_m4BDF184D63E154479DDB39CEF5798CD7F69563DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerInputActionManager_OnRaySelectEntered_m05A00F5AC9CC73F9641F03CE853F21F20338B7B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerInputActionManager_OnRaySelectExited_m2043AA63005912E1603B0017B70B7A089888E0B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerInputActionManager_OnStartLocomotion_m2753A0F4D2ECB0DC422EEE2D1B6BEC4C149EE11C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerInputActionManager_OnStartTeleport_mE7F99274DE90EC5AD8234BB0D6010C5FC96AC9FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerInputActionManager_OnStopLocomotion_m19B6191B67AFEE79180D158CB052307E0ACF4B42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerInputActionManager_OnUIHoverEntered_m7747AA4001671507477941139B2049FF990A20D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerInputActionManager_OnUIHoverExited_m20EE4DA45F2465E8A6425E87F69020C5882533C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m01B6B9BBA6AC264F094CE87EA45D542DCAD7B59E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_0 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_1 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_2 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_3 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_4 = NULL;
	{
		// m_BindingsGroup.Clear();
		BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* L_0 = __this->___m_BindingsGroup_22;
		NullCheck(L_0);
		BindingsGroup_Clear_m092668459F10E46245228224D1334DAB089B72E3(L_0, NULL);
		// if (m_NearFarInteractor != null)
		NearFarInteractor_t43B1C14C2D72CB717E3624B0759E265F5D215E9C* L_1 = __this->___m_NearFarInteractor_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		// m_NearFarInteractor.uiHoverEntered.RemoveListener(OnUIHoverEntered);
		NearFarInteractor_t43B1C14C2D72CB717E3624B0759E265F5D215E9C* L_3 = __this->___m_NearFarInteractor_5;
		NullCheck(L_3);
		UIHoverEnterEvent_t4C957A3405A5D9CB867C5EC446620BB4BA7E7298* L_4;
		L_4 = NearFarInteractor_get_uiHoverEntered_m65F1C9ACE7F1CB3BB9ED747BADFA954AB92547C3_inline(L_3, NULL);
		UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7* L_5 = (UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7*)il2cpp_codegen_object_new(UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mD4F2DD3BDD2495C5DBD9B73FDA365B7A05DBF472(L_5, __this, (intptr_t)((void*)ControllerInputActionManager_OnUIHoverEntered_m7747AA4001671507477941139B2049FF990A20D9_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_RemoveListener_m01B6B9BBA6AC264F094CE87EA45D542DCAD7B59E(L_4, L_5, UnityEvent_1_RemoveListener_m01B6B9BBA6AC264F094CE87EA45D542DCAD7B59E_RuntimeMethod_var);
		// m_NearFarInteractor.uiHoverExited.RemoveListener(OnUIHoverExited);
		NearFarInteractor_t43B1C14C2D72CB717E3624B0759E265F5D215E9C* L_6 = __this->___m_NearFarInteractor_5;
		NullCheck(L_6);
		UIHoverExitEvent_t63E5E9C921AFB8E2CB9CA4D32882DD4F62CD509B* L_7;
		L_7 = NearFarInteractor_get_uiHoverExited_m3AB20DCF61C075D2138CD150711808D13F0CD5E0_inline(L_6, NULL);
		UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7* L_8 = (UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7*)il2cpp_codegen_object_new(UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_1__ctor_mD4F2DD3BDD2495C5DBD9B73FDA365B7A05DBF472(L_8, __this, (intptr_t)((void*)ControllerInputActionManager_OnUIHoverExited_m20EE4DA45F2465E8A6425E87F69020C5882533C4_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_1_RemoveListener_m01B6B9BBA6AC264F094CE87EA45D542DCAD7B59E(L_7, L_8, UnityEvent_1_RemoveListener_m01B6B9BBA6AC264F094CE87EA45D542DCAD7B59E_RuntimeMethod_var);
	}

IL_0051:
	{
		// if (m_RayInteractor != null)
		XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* L_9 = __this->___m_RayInteractor_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_00cf;
		}
	}
	{
		// m_RayInteractor.selectEntered.RemoveListener(OnRaySelectEntered);
		XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* L_11 = __this->___m_RayInteractor_4;
		NullCheck(L_11);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_12;
		L_12 = XRBaseInteractor_get_selectEntered_mC85EF4187B4575CF00CE7E0957DE5D0E11FAA524_inline(L_11, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_13 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_13, __this, (intptr_t)((void*)ControllerInputActionManager_OnRaySelectEntered_m05A00F5AC9CC73F9641F03CE853F21F20338B7B2_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB(L_12, L_13, UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		// m_RayInteractor.selectExited.RemoveListener(OnRaySelectExited);
		XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* L_14 = __this->___m_RayInteractor_4;
		NullCheck(L_14);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_15;
		L_15 = XRBaseInteractor_get_selectExited_m680D2E90A7CAA747EB07AAE7427A287E7D49A370_inline(L_14, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_16 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_16, __this, (intptr_t)((void*)ControllerInputActionManager_OnRaySelectExited_m2043AA63005912E1603B0017B70B7A089888E0B9_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B(L_15, L_16, UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		// m_RayInteractor.uiHoverEntered.RemoveListener(OnUIHoverEntered);
		XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* L_17 = __this->___m_RayInteractor_4;
		NullCheck(L_17);
		UIHoverEnterEvent_t4C957A3405A5D9CB867C5EC446620BB4BA7E7298* L_18;
		L_18 = XRRayInteractor_get_uiHoverEntered_m22CB14AC1A11633A125A0EA0EC0099EC1476F03E_inline(L_17, NULL);
		UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7* L_19 = (UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7*)il2cpp_codegen_object_new(UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		UnityAction_1__ctor_mD4F2DD3BDD2495C5DBD9B73FDA365B7A05DBF472(L_19, __this, (intptr_t)((void*)ControllerInputActionManager_OnUIHoverEntered_m7747AA4001671507477941139B2049FF990A20D9_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		UnityEvent_1_RemoveListener_m01B6B9BBA6AC264F094CE87EA45D542DCAD7B59E(L_18, L_19, UnityEvent_1_RemoveListener_m01B6B9BBA6AC264F094CE87EA45D542DCAD7B59E_RuntimeMethod_var);
		// m_RayInteractor.uiHoverExited.RemoveListener(OnUIHoverExited);
		XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* L_20 = __this->___m_RayInteractor_4;
		NullCheck(L_20);
		UIHoverExitEvent_t63E5E9C921AFB8E2CB9CA4D32882DD4F62CD509B* L_21;
		L_21 = XRRayInteractor_get_uiHoverExited_m33429ECD32C826D9FA13A0E87C37B44CD63FDBB1_inline(L_20, NULL);
		UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7* L_22 = (UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7*)il2cpp_codegen_object_new(UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		UnityAction_1__ctor_mD4F2DD3BDD2495C5DBD9B73FDA365B7A05DBF472(L_22, __this, (intptr_t)((void*)ControllerInputActionManager_OnUIHoverExited_m20EE4DA45F2465E8A6425E87F69020C5882533C4_RuntimeMethod_var), NULL);
		NullCheck(L_21);
		UnityEvent_1_RemoveListener_m01B6B9BBA6AC264F094CE87EA45D542DCAD7B59E(L_21, L_22, UnityEvent_1_RemoveListener_m01B6B9BBA6AC264F094CE87EA45D542DCAD7B59E_RuntimeMethod_var);
	}

IL_00cf:
	{
		// var teleportModeAction = GetInputAction(m_TeleportMode);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_23 = __this->___m_TeleportMode_7;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_24;
		L_24 = ControllerInputActionManager_GetInputAction_m2F95F2340B1602E3787F34FDA150C47AB95068AE(L_23, NULL);
		V_0 = L_24;
		// if (teleportModeAction != null)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_25 = V_0;
		if (!L_25)
		{
			goto IL_0126;
		}
	}
	{
		// teleportModeAction.performed -= OnStartTeleport;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_26 = V_0;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_27 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_27, __this, (intptr_t)((void*)ControllerInputActionManager_OnStartTeleport_mE7F99274DE90EC5AD8234BB0D6010C5FC96AC9FE_RuntimeMethod_var), NULL);
		NullCheck(L_26);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_26, L_27, NULL);
		// teleportModeAction.performed -= OnStartLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_28 = V_0;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_29 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_29, __this, (intptr_t)((void*)ControllerInputActionManager_OnStartLocomotion_m2753A0F4D2ECB0DC422EEE2D1B6BEC4C149EE11C_RuntimeMethod_var), NULL);
		NullCheck(L_28);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_28, L_29, NULL);
		// teleportModeAction.canceled -= OnCancelTeleport;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_30 = V_0;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_31 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_31, __this, (intptr_t)((void*)ControllerInputActionManager_OnCancelTeleport_m4BDF184D63E154479DDB39CEF5798CD7F69563DF_RuntimeMethod_var), NULL);
		NullCheck(L_30);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_30, L_31, NULL);
		// teleportModeAction.canceled -= OnStopLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_32 = V_0;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_33 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_33, __this, (intptr_t)((void*)ControllerInputActionManager_OnStopLocomotion_m19B6191B67AFEE79180D158CB052307E0ACF4B42_RuntimeMethod_var), NULL);
		NullCheck(L_32);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_32, L_33, NULL);
	}

IL_0126:
	{
		// var teleportModeCancelAction = GetInputAction(m_TeleportModeCancel);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_34 = __this->___m_TeleportModeCancel_8;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_35;
		L_35 = ControllerInputActionManager_GetInputAction_m2F95F2340B1602E3787F34FDA150C47AB95068AE(L_34, NULL);
		V_1 = L_35;
		// if (teleportModeCancelAction != null)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_36 = V_1;
		if (!L_36)
		{
			goto IL_0147;
		}
	}
	{
		// teleportModeCancelAction.performed -= OnCancelTeleport;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_37 = V_1;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_38 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_38, __this, (intptr_t)((void*)ControllerInputActionManager_OnCancelTeleport_m4BDF184D63E154479DDB39CEF5798CD7F69563DF_RuntimeMethod_var), NULL);
		NullCheck(L_37);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_37, L_38, NULL);
	}

IL_0147:
	{
		// var moveAction = GetInputAction(m_Move);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_39 = __this->___m_Move_11;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_40;
		L_40 = ControllerInputActionManager_GetInputAction_m2F95F2340B1602E3787F34FDA150C47AB95068AE(L_39, NULL);
		V_2 = L_40;
		// if (moveAction != null)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_41 = V_2;
		if (!L_41)
		{
			goto IL_017a;
		}
	}
	{
		// moveAction.started -= OnStartLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_42 = V_2;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_43 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_43, __this, (intptr_t)((void*)ControllerInputActionManager_OnStartLocomotion_m2753A0F4D2ECB0DC422EEE2D1B6BEC4C149EE11C_RuntimeMethod_var), NULL);
		NullCheck(L_42);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_42, L_43, NULL);
		// moveAction.canceled -= OnStopLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_44 = V_2;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_45 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_45, __this, (intptr_t)((void*)ControllerInputActionManager_OnStopLocomotion_m19B6191B67AFEE79180D158CB052307E0ACF4B42_RuntimeMethod_var), NULL);
		NullCheck(L_44);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_44, L_45, NULL);
	}

IL_017a:
	{
		// var turnAction = GetInputAction(m_Turn);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_46 = __this->___m_Turn_9;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_47;
		L_47 = ControllerInputActionManager_GetInputAction_m2F95F2340B1602E3787F34FDA150C47AB95068AE(L_46, NULL);
		V_3 = L_47;
		// if (turnAction != null)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_48 = V_3;
		if (!L_48)
		{
			goto IL_01ad;
		}
	}
	{
		// turnAction.started -= OnStartLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_49 = V_3;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_50 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_50, __this, (intptr_t)((void*)ControllerInputActionManager_OnStartLocomotion_m2753A0F4D2ECB0DC422EEE2D1B6BEC4C149EE11C_RuntimeMethod_var), NULL);
		NullCheck(L_49);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_49, L_50, NULL);
		// turnAction.canceled -= OnStopLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_51 = V_3;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_52 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_52, __this, (intptr_t)((void*)ControllerInputActionManager_OnStopLocomotion_m19B6191B67AFEE79180D158CB052307E0ACF4B42_RuntimeMethod_var), NULL);
		NullCheck(L_51);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_51, L_52, NULL);
	}

IL_01ad:
	{
		// var snapTurnAction = GetInputAction(m_SnapTurn);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_53 = __this->___m_SnapTurn_10;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_54;
		L_54 = ControllerInputActionManager_GetInputAction_m2F95F2340B1602E3787F34FDA150C47AB95068AE(L_53, NULL);
		V_4 = L_54;
		// if (snapTurnAction != null)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_55 = V_4;
		if (!L_55)
		{
			goto IL_01e4;
		}
	}
	{
		// snapTurnAction.started -= OnStartLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_56 = V_4;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_57 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_57, __this, (intptr_t)((void*)ControllerInputActionManager_OnStartLocomotion_m2753A0F4D2ECB0DC422EEE2D1B6BEC4C149EE11C_RuntimeMethod_var), NULL);
		NullCheck(L_56);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_56, L_57, NULL);
		// snapTurnAction.canceled -= OnStopLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_58 = V_4;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_59 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_59, __this, (intptr_t)((void*)ControllerInputActionManager_OnStopLocomotion_m19B6191B67AFEE79180D158CB052307E0ACF4B42_RuntimeMethod_var), NULL);
		NullCheck(L_58);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_58, L_59, NULL);
	}

IL_01e4:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::OnStartTeleport(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_OnStartTeleport_mE7F99274DE90EC5AD8234BB0D6010C5FC96AC9FE (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyBindableVariable_1_t1F2BE9E50402E707C90C41C06974ED824C410440_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m2DA1D95CA656B45F334764F0D14DC4FC105D3206_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_1_tA1590A7C4E6E0836296B3C1CD3F16A1819EB7117* G_B9_0 = NULL;
	UnityEvent_1_tA1590A7C4E6E0836296B3C1CD3F16A1819EB7117* G_B8_0 = NULL;
	{
		// m_PostponedDeactivateTeleport = false;
		__this->___m_PostponedDeactivateTeleport_19 = (bool)0;
		// if (m_TeleportInteractor != null)
		XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* L_0 = __this->___m_TeleportInteractor_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// m_TeleportInteractor.gameObject.SetActive(true);
		XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* L_2 = __this->___m_TeleportInteractor_6;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
	}

IL_0026:
	{
		// if (m_RayInteractor != null)
		XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* L_4 = __this->___m_RayInteractor_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		// m_RayInteractor.gameObject.SetActive(false);
		XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* L_6 = __this->___m_RayInteractor_4;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
	}

IL_0045:
	{
		// if (m_NearFarInteractor != null && m_NearFarInteractor.selectionRegion.Value != NearFarInteractor.Region.Near)
		NearFarInteractor_t43B1C14C2D72CB717E3624B0759E265F5D215E9C* L_8 = __this->___m_NearFarInteractor_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		NearFarInteractor_t43B1C14C2D72CB717E3624B0759E265F5D215E9C* L_10 = __this->___m_NearFarInteractor_5;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = NearFarInteractor_get_selectionRegion_mAF70B4BAD5B46F12A8EE31F17313A82A7BE93394_inline(L_10, NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* T Unity.XR.CoreUtils.Bindings.Variables.IReadOnlyBindableVariable`1<UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor/Region>::get_Value() */, IReadOnlyBindableVariable_1_t1F2BE9E50402E707C90C41C06974ED824C410440_il2cpp_TypeInfo_var, L_11);
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_0077;
		}
	}
	{
		// m_NearFarInteractor.gameObject.SetActive(false);
		NearFarInteractor_t43B1C14C2D72CB717E3624B0759E265F5D215E9C* L_13 = __this->___m_NearFarInteractor_5;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
	}

IL_0077:
	{
		// m_RayInteractorChanged?.Invoke(m_TeleportInteractor);
		UnityEvent_1_tA1590A7C4E6E0836296B3C1CD3F16A1819EB7117* L_15 = __this->___m_RayInteractorChanged_17;
		UnityEvent_1_tA1590A7C4E6E0836296B3C1CD3F16A1819EB7117* L_16 = L_15;
		G_B8_0 = L_16;
		if (L_16)
		{
			G_B9_0 = L_16;
			goto IL_0082;
		}
	}
	{
		return;
	}

IL_0082:
	{
		XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* L_17 = __this->___m_TeleportInteractor_6;
		NullCheck(G_B9_0);
		UnityEvent_1_Invoke_m2DA1D95CA656B45F334764F0D14DC4FC105D3206(G_B9_0, L_17, UnityEvent_1_Invoke_m2DA1D95CA656B45F334764F0D14DC4FC105D3206_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::OnCancelTeleport(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_OnCancelTeleport_m4BDF184D63E154479DDB39CEF5798CD7F69563DF (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m2DA1D95CA656B45F334764F0D14DC4FC105D3206_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_1_tA1590A7C4E6E0836296B3C1CD3F16A1819EB7117* G_B6_0 = NULL;
	UnityEvent_1_tA1590A7C4E6E0836296B3C1CD3F16A1819EB7117* G_B5_0 = NULL;
	{
		// m_PostponedDeactivateTeleport = true;
		__this->___m_PostponedDeactivateTeleport_19 = (bool)1;
		// if (m_RayInteractor != null)
		XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* L_0 = __this->___m_RayInteractor_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// m_RayInteractor.gameObject.SetActive(true);
		XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* L_2 = __this->___m_RayInteractor_4;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
	}

IL_0026:
	{
		// if (m_NearFarInteractor != null)
		NearFarInteractor_t43B1C14C2D72CB717E3624B0759E265F5D215E9C* L_4 = __this->___m_NearFarInteractor_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		// m_NearFarInteractor.gameObject.SetActive(true);
		NearFarInteractor_t43B1C14C2D72CB717E3624B0759E265F5D215E9C* L_6 = __this->___m_NearFarInteractor_5;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
	}

IL_0045:
	{
		// m_RayInteractorChanged?.Invoke(m_RayInteractor);
		UnityEvent_1_tA1590A7C4E6E0836296B3C1CD3F16A1819EB7117* L_8 = __this->___m_RayInteractorChanged_17;
		UnityEvent_1_tA1590A7C4E6E0836296B3C1CD3F16A1819EB7117* L_9 = L_8;
		G_B5_0 = L_9;
		if (L_9)
		{
			G_B6_0 = L_9;
			goto IL_0050;
		}
	}
	{
		return;
	}

IL_0050:
	{
		XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* L_10 = __this->___m_RayInteractor_4;
		NullCheck(G_B6_0);
		UnityEvent_1_Invoke_m2DA1D95CA656B45F334764F0D14DC4FC105D3206(G_B6_0, L_10, UnityEvent_1_Invoke_m2DA1D95CA656B45F334764F0D14DC4FC105D3206_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::OnNearFarSelectionRegionChanged(UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor/Region)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_OnNearFarSelectionRegionChanged_m726DFC0ACC75AB83814D394FFD8CD764EF071757 (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, int32_t ___selectionRegion0, const RuntimeMethod* method) 
{
	{
		// if (selectionRegion == NearFarInteractor.Region.Far ||
		//     (selectionRegion == NearFarInteractor.Region.Near && !m_NearFarEnableTeleportDuringNearInteraction))
		int32_t L_0 = ___selectionRegion0;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___selectionRegion0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		bool L_2 = __this->___m_NearFarEnableTeleportDuringNearInteraction_15;
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0010:
	{
		// DisableTeleportActions();
		ControllerInputActionManager_DisableTeleportActions_mAD8CBE42896874525C3181CF34C226C6584C06C8(__this, NULL);
		return;
	}

IL_0017:
	{
		// UpdateLocomotionActions();
		ControllerInputActionManager_UpdateLocomotionActions_m30001260A476F7ADC0E807ED5F906387BE78D517(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::OnStartLocomotion(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_OnStartLocomotion_m2753A0F4D2ECB0DC422EEE2D1B6BEC4C149EE11C (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mFA65768161AFFCF3635EDD51B9D5A27E1ECC3E53_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_LocomotionUsers.Add(context.action);
		HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3* L_0 = __this->___m_LocomotionUsers_21;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = CallbackContext_get_action_mE1ABC0E3E19C045663AB8EDAB9A9205B8C181CE4((&___context0), NULL);
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Add_mFA65768161AFFCF3635EDD51B9D5A27E1ECC3E53(L_0, L_1, HashSet_1_Add_mFA65768161AFFCF3635EDD51B9D5A27E1ECC3E53_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::OnStopLocomotion(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_OnStopLocomotion_m19B6191B67AFEE79180D158CB052307E0ACF4B42 (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_mCD1D1786A37A068E7B80418B00BD4F2CBF2BEF0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_m830B4E1CB08A93B4C9803638B3AC2CB9925EB52E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_LocomotionUsers.Remove(context.action);
		HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3* L_0 = __this->___m_LocomotionUsers_21;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = CallbackContext_get_action_mE1ABC0E3E19C045663AB8EDAB9A9205B8C181CE4((&___context0), NULL);
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Remove_mCD1D1786A37A068E7B80418B00BD4F2CBF2BEF0F(L_0, L_1, HashSet_1_Remove_mCD1D1786A37A068E7B80418B00BD4F2CBF2BEF0F_RuntimeMethod_var);
		// if (m_LocomotionUsers.Count == 0 && m_HoveringScrollableUI)
		HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3* L_3 = __this->___m_LocomotionUsers_21;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = HashSet_1_get_Count_m830B4E1CB08A93B4C9803638B3AC2CB9925EB52E_inline(L_3, HashSet_1_get_Count_m830B4E1CB08A93B4C9803638B3AC2CB9925EB52E_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		bool L_5 = __this->___m_HoveringScrollableUI_20;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// DisableAllLocomotionActions();
		ControllerInputActionManager_DisableAllLocomotionActions_m47F4F0FB199536B8B58DCB7E4248986C2A61C4EC(__this, NULL);
		// UpdateUIActions();
		ControllerInputActionManager_UpdateUIActions_mEF86876690920BF2368EAD9D90BAB1D08E6F9791(__this, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::OnRaySelectEntered(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_OnRaySelectEntered_m05A00F5AC9CC73F9641F03CE853F21F20338B7B2 (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___args0, const RuntimeMethod* method) 
{
	{
		// if (m_RayInteractor.manipulateAttachTransform)
		XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* L_0 = __this->___m_RayInteractor_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = XRRayInteractor_get_manipulateAttachTransform_m1B52220691D700AEFFE0B8E8AEDD9BAA15DE960A_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// DisableAllLocomotionActions();
		ControllerInputActionManager_DisableAllLocomotionActions_m47F4F0FB199536B8B58DCB7E4248986C2A61C4EC(__this, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::OnRaySelectExited(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_OnRaySelectExited_m2043AA63005912E1603B0017B70B7A089888E0B9 (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___args0, const RuntimeMethod* method) 
{
	{
		// if (m_RayInteractor.manipulateAttachTransform)
		XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* L_0 = __this->___m_RayInteractor_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = XRRayInteractor_get_manipulateAttachTransform_m1B52220691D700AEFFE0B8E8AEDD9BAA15DE960A_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// UpdateLocomotionActions();
		ControllerInputActionManager_UpdateLocomotionActions_m30001260A476F7ADC0E807ED5F906387BE78D517(__this, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::OnUIHoverEntered(UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_OnUIHoverEntered_m7747AA4001671507477941139B2049FF990A20D9 (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, UIHoverEventArgs_tC712F3F829391F25C89B9951234415D4C354DC39* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_m830B4E1CB08A93B4C9803638B3AC2CB9925EB52E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TrackedDeviceModel_t38B1BA171F5602138D487005E134580213B4DBE8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* G_B2_0 = NULL;
	ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* G_B3_1 = NULL;
	{
		// m_HoveringScrollableUI = m_UIScrollingEnabled && args.deviceModel.isScrollable;
		bool L_0 = __this->___m_UIScrollingEnabled_16;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0019;
		}
	}
	{
		UIHoverEventArgs_tC712F3F829391F25C89B9951234415D4C354DC39* L_1 = ___args0;
		NullCheck(L_1);
		TrackedDeviceModel_t38B1BA171F5602138D487005E134580213B4DBE8 L_2;
		L_2 = UIHoverEventArgs_get_deviceModel_m89E4A51B73B17932351940327599EC37D74BCE95_inline(L_1, NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = TrackedDeviceModel_get_isScrollable_m2ADDFD1E1BD1F28CDBD07D6970C5325FCD62A505_inline((&V_0), NULL);
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_001a:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_HoveringScrollableUI_20 = (bool)G_B3_0;
		// UpdateUIActions();
		ControllerInputActionManager_UpdateUIActions_mEF86876690920BF2368EAD9D90BAB1D08E6F9791(__this, NULL);
		// if (m_HoveringScrollableUI && m_LocomotionUsers.Count == 0)
		bool L_4 = __this->___m_HoveringScrollableUI_20;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3* L_5 = __this->___m_LocomotionUsers_21;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = HashSet_1_get_Count_m830B4E1CB08A93B4C9803638B3AC2CB9925EB52E_inline(L_5, HashSet_1_get_Count_m830B4E1CB08A93B4C9803638B3AC2CB9925EB52E_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0040;
		}
	}
	{
		// DisableAllLocomotionActions();
		ControllerInputActionManager_DisableAllLocomotionActions_m47F4F0FB199536B8B58DCB7E4248986C2A61C4EC(__this, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::OnUIHoverExited(UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_OnUIHoverExited_m20EE4DA45F2465E8A6425E87F69020C5882533C4 (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, UIHoverEventArgs_tC712F3F829391F25C89B9951234415D4C354DC39* ___args0, const RuntimeMethod* method) 
{
	{
		// m_HoveringScrollableUI = false;
		__this->___m_HoveringScrollableUI_20 = (bool)0;
		// UpdateUIActions();
		ControllerInputActionManager_UpdateUIActions_mEF86876690920BF2368EAD9D90BAB1D08E6F9791(__this, NULL);
		// UpdateLocomotionActions();
		ControllerInputActionManager_UpdateLocomotionActions_m30001260A476F7ADC0E807ED5F906387BE78D517(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_OnEnable_m586389723ACA171B6FCCEAD6A29199719CE93BEC (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BCF8359B4696020E13074D2CCAD8107559B7426);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_RayInteractor != null && m_NearFarInteractor != null)
		XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* L_0 = __this->___m_RayInteractor_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		NearFarInteractor_t43B1C14C2D72CB717E3624B0759E265F5D215E9C* L_2 = __this->___m_NearFarInteractor_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.LogWarning("Both Ray Interactor and Near-Far Interactor are assigned. Only one should be assigned, not both. Clearing Ray Interactor.", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(_stringLiteral9BCF8359B4696020E13074D2CCAD8107559B7426, __this, NULL);
		// m_RayInteractor = null;
		__this->___m_RayInteractor_4 = (XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RayInteractor_4), (void*)(XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649*)NULL);
	}

IL_002e:
	{
		// if (m_TeleportInteractor != null)
		XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* L_4 = __this->___m_TeleportInteractor_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_004d;
		}
	}
	{
		// m_TeleportInteractor.gameObject.SetActive(false);
		XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* L_6 = __this->___m_TeleportInteractor_6;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
	}

IL_004d:
	{
		// if (m_StartCalled)
		bool L_8 = __this->___m_StartCalled_18;
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		// UpdateLocomotionActions();
		ControllerInputActionManager_UpdateLocomotionActions_m30001260A476F7ADC0E807ED5F906387BE78D517(__this, NULL);
		// UpdateUIActions();
		ControllerInputActionManager_UpdateUIActions_mEF86876690920BF2368EAD9D90BAB1D08E6F9791(__this, NULL);
	}

IL_0061:
	{
		// SetupInteractorEvents();
		ControllerInputActionManager_SetupInteractorEvents_m7F89872A6155BDE25310FD98301E0E80D41C277C(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_OnDisable_m55B68241562565CB1A82781F6AB3248B782CBB81 (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, const RuntimeMethod* method) 
{
	{
		// TeardownInteractorEvents();
		ControllerInputActionManager_TeardownInteractorEvents_m79A27CF5E55A5C7B53253C22644424811781A312(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_Start_mC31B95952910A659CD656DB3218E0DE4A0C62433 (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, const RuntimeMethod* method) 
{
	{
		// m_StartCalled = true;
		__this->___m_StartCalled_18 = (bool)1;
		// UpdateLocomotionActions();
		ControllerInputActionManager_UpdateLocomotionActions_m30001260A476F7ADC0E807ED5F906387BE78D517(__this, NULL);
		// UpdateUIActions();
		ControllerInputActionManager_UpdateUIActions_mEF86876690920BF2368EAD9D90BAB1D08E6F9791(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_Update_m2362D6218C9954DE9F3999CD842E94F86E5E58F9 (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_PostponedDeactivateTeleport)
		bool L_0 = __this->___m_PostponedDeactivateTeleport_19;
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		// if (m_TeleportInteractor != null)
		XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* L_1 = __this->___m_TeleportInteractor_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// m_TeleportInteractor.gameObject.SetActive(false);
		XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* L_3 = __this->___m_TeleportInteractor_6;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
	}

IL_0027:
	{
		// m_PostponedDeactivateTeleport = false;
		__this->___m_PostponedDeactivateTeleport_19 = (bool)0;
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::UpdateLocomotionActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_UpdateLocomotionActions_m30001260A476F7ADC0E807ED5F906387BE78D517 (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, const RuntimeMethod* method) 
{
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* G_B2_0 = NULL;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* G_B3_1 = NULL;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* G_B5_0 = NULL;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* G_B6_1 = NULL;
	{
		// SetEnabled(m_Move, m_SmoothMotionEnabled);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_Move_11;
		bool L_1 = __this->___m_SmoothMotionEnabled_13;
		ControllerInputActionManager_SetEnabled_m98E438A0CC133DBEBB41234928BFBD67B61BA81E(L_0, L_1, NULL);
		// SetEnabled(m_TeleportMode, !m_SmoothMotionEnabled);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = __this->___m_TeleportMode_7;
		bool L_3 = __this->___m_SmoothMotionEnabled_13;
		ControllerInputActionManager_SetEnabled_m98E438A0CC133DBEBB41234928BFBD67B61BA81E(L_2, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), NULL);
		// SetEnabled(m_TeleportModeCancel, !m_SmoothMotionEnabled);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_4 = __this->___m_TeleportModeCancel_8;
		bool L_5 = __this->___m_SmoothMotionEnabled_13;
		ControllerInputActionManager_SetEnabled_m98E438A0CC133DBEBB41234928BFBD67B61BA81E(L_4, (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0), NULL);
		// SetEnabled(m_Turn, !m_SmoothMotionEnabled && m_SmoothTurnEnabled);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_6 = __this->___m_Turn_9;
		bool L_7 = __this->___m_SmoothMotionEnabled_13;
		G_B1_0 = L_6;
		if (L_7)
		{
			G_B2_0 = L_6;
			goto IL_004f;
		}
	}
	{
		bool L_8 = __this->___m_SmoothTurnEnabled_14;
		G_B3_0 = ((int32_t)(L_8));
		G_B3_1 = G_B1_0;
		goto IL_0050;
	}

IL_004f:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0050:
	{
		ControllerInputActionManager_SetEnabled_m98E438A0CC133DBEBB41234928BFBD67B61BA81E(G_B3_1, (bool)G_B3_0, NULL);
		// SetEnabled(m_SnapTurn, !m_SmoothMotionEnabled && !m_SmoothTurnEnabled);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_9 = __this->___m_SnapTurn_10;
		bool L_10 = __this->___m_SmoothMotionEnabled_13;
		G_B4_0 = L_9;
		if (L_10)
		{
			G_B5_0 = L_9;
			goto IL_006e;
		}
	}
	{
		bool L_11 = __this->___m_SmoothTurnEnabled_14;
		G_B6_0 = ((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_006f;
	}

IL_006e:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_006f:
	{
		ControllerInputActionManager_SetEnabled_m98E438A0CC133DBEBB41234928BFBD67B61BA81E(G_B6_1, (bool)G_B6_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::DisableTeleportActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_DisableTeleportActions_mAD8CBE42896874525C3181CF34C226C6584C06C8 (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, const RuntimeMethod* method) 
{
	{
		// DisableAction(m_TeleportMode);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_TeleportMode_7;
		ControllerInputActionManager_DisableAction_m3E33B9491354D8732C00E02CDA82B85426FB5091(L_0, NULL);
		// DisableAction(m_TeleportModeCancel);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_1 = __this->___m_TeleportModeCancel_8;
		ControllerInputActionManager_DisableAction_m3E33B9491354D8732C00E02CDA82B85426FB5091(L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::DisableMoveAndTurnActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_DisableMoveAndTurnActions_m231A4976FB2502A412F4C4A746A4AF42D1A28A0C (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, const RuntimeMethod* method) 
{
	{
		// DisableAction(m_Move);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_Move_11;
		ControllerInputActionManager_DisableAction_m3E33B9491354D8732C00E02CDA82B85426FB5091(L_0, NULL);
		// DisableAction(m_Turn);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_1 = __this->___m_Turn_9;
		ControllerInputActionManager_DisableAction_m3E33B9491354D8732C00E02CDA82B85426FB5091(L_1, NULL);
		// DisableAction(m_SnapTurn);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = __this->___m_SnapTurn_10;
		ControllerInputActionManager_DisableAction_m3E33B9491354D8732C00E02CDA82B85426FB5091(L_2, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::DisableAllLocomotionActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_DisableAllLocomotionActions_m47F4F0FB199536B8B58DCB7E4248986C2A61C4EC (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, const RuntimeMethod* method) 
{
	{
		// DisableTeleportActions();
		ControllerInputActionManager_DisableTeleportActions_mAD8CBE42896874525C3181CF34C226C6584C06C8(__this, NULL);
		// DisableMoveAndTurnActions();
		ControllerInputActionManager_DisableMoveAndTurnActions_m231A4976FB2502A412F4C4A746A4AF42D1A28A0C(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::UpdateUIActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_UpdateUIActions_mEF86876690920BF2368EAD9D90BAB1D08E6F9791 (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_m830B4E1CB08A93B4C9803638B3AC2CB9925EB52E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* G_B3_0 = NULL;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* G_B1_0 = NULL;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* G_B4_1 = NULL;
	{
		// SetEnabled(m_UIScroll, m_UIScrollingEnabled && m_HoveringScrollableUI && m_LocomotionUsers.Count == 0);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_UIScroll_12;
		bool L_1 = __this->___m_UIScrollingEnabled_16;
		G_B1_0 = L_0;
		if (!L_1)
		{
			G_B3_0 = L_0;
			goto IL_0026;
		}
	}
	{
		bool L_2 = __this->___m_HoveringScrollableUI_20;
		G_B2_0 = G_B1_0;
		if (!L_2)
		{
			G_B3_0 = G_B1_0;
			goto IL_0026;
		}
	}
	{
		HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3* L_3 = __this->___m_LocomotionUsers_21;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = HashSet_1_get_Count_m830B4E1CB08A93B4C9803638B3AC2CB9925EB52E_inline(L_3, HashSet_1_get_Count_m830B4E1CB08A93B4C9803638B3AC2CB9925EB52E_RuntimeMethod_var);
		G_B4_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		G_B4_1 = G_B2_0;
		goto IL_0027;
	}

IL_0026:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0027:
	{
		ControllerInputActionManager_SetEnabled_m98E438A0CC133DBEBB41234928BFBD67B61BA81E(G_B4_1, (bool)G_B4_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::SetEnabled(UnityEngine.InputSystem.InputActionReference,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_SetEnabled_m98E438A0CC133DBEBB41234928BFBD67B61BA81E (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, bool ___enabled1, const RuntimeMethod* method) 
{
	{
		// if (enabled)
		bool L_0 = ___enabled1;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// EnableAction(actionReference);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_1 = ___actionReference0;
		ControllerInputActionManager_EnableAction_m17C9BE847C2BFD6A62C7B95D6CFD1994ADE16D84(L_1, NULL);
		return;
	}

IL_000a:
	{
		// DisableAction(actionReference);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = ___actionReference0;
		ControllerInputActionManager_DisableAction_m3E33B9491354D8732C00E02CDA82B85426FB5091(L_2, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::EnableAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_EnableAction_m17C9BE847C2BFD6A62C7B95D6CFD1994ADE16D84 (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, const RuntimeMethod* method) 
{
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_0 = NULL;
	{
		// var action = GetInputAction(actionReference);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = ___actionReference0;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = ControllerInputActionManager_GetInputAction_m2F95F2340B1602E3787F34FDA150C47AB95068AE(L_0, NULL);
		V_0 = L_1;
		// if (action != null && !action.enabled)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = InputAction_get_enabled_mA1E3523D89FCD4649E787A4BFE9D5863674846FA(L_3, NULL);
		if (L_4)
		{
			goto IL_0018;
		}
	}
	{
		// action.Enable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5 = V_0;
		NullCheck(L_5);
		InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68(L_5, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::DisableAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager_DisableAction_m3E33B9491354D8732C00E02CDA82B85426FB5091 (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, const RuntimeMethod* method) 
{
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_0 = NULL;
	{
		// var action = GetInputAction(actionReference);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = ___actionReference0;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = ControllerInputActionManager_GetInputAction_m2F95F2340B1602E3787F34FDA150C47AB95068AE(L_0, NULL);
		V_0 = L_1;
		// if (action != null && action.enabled)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = InputAction_get_enabled_mA1E3523D89FCD4649E787A4BFE9D5863674846FA(L_3, NULL);
		if (!L_4)
		{
			goto IL_0018;
		}
	}
	{
		// action.Disable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5 = V_0;
		NullCheck(L_5);
		InputAction_Disable_m72D1982F82457C6E003440BADD06989D399BDE50(L_5, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// UnityEngine.InputSystem.InputAction UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::GetInputAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ControllerInputActionManager_GetInputAction_m2F95F2340B1602E3787F34FDA150C47AB95068AE (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return actionReference != null ? actionReference.action : null;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = ___actionReference0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)NULL;
	}

IL_000b:
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = ___actionReference0;
		NullCheck(L_2);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_2, NULL);
		return L_3;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ControllerInputActionManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInputActionManager__ctor_m8102580D28779193EE0B8CE7C06313BDF217EBB7 (ControllerInputActionManager_t869A70AE3B62565ADCF8E113AFEF37D3B0DBE90B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mD28F97EDC08E91C2F50CDF8E86AF228489358EA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool m_NearFarEnableTeleportDuringNearInteraction = true;
		__this->___m_NearFarEnableTeleportDuringNearInteraction_15 = (bool)1;
		// bool m_UIScrollingEnabled = true;
		__this->___m_UIScrollingEnabled_16 = (bool)1;
		// readonly HashSet<InputAction> m_LocomotionUsers = new HashSet<InputAction>();
		HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3* L_0 = (HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3*)il2cpp_codegen_object_new(HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_mD28F97EDC08E91C2F50CDF8E86AF228489358EA7(L_0, HashSet_1__ctor_mD28F97EDC08E91C2F50CDF8E86AF228489358EA7_RuntimeMethod_var);
		__this->___m_LocomotionUsers_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LocomotionUsers_21), (void*)L_0);
		// readonly BindingsGroup m_BindingsGroup = new BindingsGroup();
		BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* L_1 = (BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A*)il2cpp_codegen_object_new(BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BindingsGroup__ctor_m1EFD3F405050571D3A66F9B95E8FBC296866A716(L_1, NULL);
		__this->___m_BindingsGroup_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_BindingsGroup_22), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DestroySelf::get_lifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DestroySelf_get_lifetime_m3AB080F878918FDBF5C39438374FBDDCD9E22458 (DestroySelf_tDC5BD53F0F2DA7DB2A559BAC50EA806440226B1F* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Lifetime;
		float L_0 = __this->___m_Lifetime_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DestroySelf::set_lifetime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroySelf_set_lifetime_mCB3CE0FF94854B5CB42D3C4E93C7783410123F3C (DestroySelf_tDC5BD53F0F2DA7DB2A559BAC50EA806440226B1F* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Lifetime = value;
		float L_0 = ___value0;
		__this->___m_Lifetime_4 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DestroySelf::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroySelf_Start_mDA06F1CBD548235D9376E609CD54DDD7AD50AFCB (DestroySelf_tDC5BD53F0F2DA7DB2A559BAC50EA806440226B1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject, m_Lifetime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		float L_1 = __this->___m_Lifetime_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DestroySelf::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroySelf__ctor_mE6AE809A5A18196F03764F925582D12C3AD8523F (DestroySelf_tDC5BD53F0F2DA7DB2A559BAC50EA806440226B1F* __this, const RuntimeMethod* method) 
{
	{
		// float m_Lifetime = 0.25f;
		__this->___m_Lifetime_4 = (0.25f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::get_headTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* DynamicMoveProvider_get_headTransform_m303EF17C689C6B515494F07F2259A0BA6B8D0605 (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HeadTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_HeadTransform_28;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::set_headTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider_set_headTransform_mCB442704F390FE95E70DE479145A5F2E2E138885 (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_HeadTransform = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___m_HeadTransform_28 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HeadTransform_28), (void*)L_0);
		return;
	}
}
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::get_leftControllerTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* DynamicMoveProvider_get_leftControllerTransform_mAA1DA9B68DEEA326FC1560FDADDF454DEC69C8A8 (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, const RuntimeMethod* method) 
{
	{
		// get => m_LeftControllerTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_LeftControllerTransform_29;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::set_leftControllerTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider_set_leftControllerTransform_mF1E47F46BFE01F5355FC71BD67DD1A9CFD2C3DB1 (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_LeftControllerTransform = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___m_LeftControllerTransform_29 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LeftControllerTransform_29), (void*)L_0);
		return;
	}
}
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::get_rightControllerTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* DynamicMoveProvider_get_rightControllerTransform_m6FAEE855A31155E21184B32D086F15CE9DA7C92E (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, const RuntimeMethod* method) 
{
	{
		// get => m_RightControllerTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_RightControllerTransform_30;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::set_rightControllerTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider_set_rightControllerTransform_mD138BE95DF4A34447A88F1817806C4BAE2239CFA (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_RightControllerTransform = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___m_RightControllerTransform_30 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RightControllerTransform_30), (void*)L_0);
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::get_leftHandMovementDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicMoveProvider_get_leftHandMovementDirection_m5D0D0D4A984DC0B0CAED6DE32722BE640296ABBF (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, const RuntimeMethod* method) 
{
	{
		// get => m_LeftHandMovementDirection;
		int32_t L_0 = __this->___m_LeftHandMovementDirection_31;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::set_leftHandMovementDirection(UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider_set_leftHandMovementDirection_mB73B1139104B7F11E0360C8E900789C0E05881F2 (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_LeftHandMovementDirection = value;
		int32_t L_0 = ___value0;
		__this->___m_LeftHandMovementDirection_31 = L_0;
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::get_rightHandMovementDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicMoveProvider_get_rightHandMovementDirection_m88088CD035CDA2ED6597F19DC5C93D8730089C7C (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, const RuntimeMethod* method) 
{
	{
		// get => m_RightHandMovementDirection;
		int32_t L_0 = __this->___m_RightHandMovementDirection_32;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::set_rightHandMovementDirection(UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider_set_rightHandMovementDirection_m985C438DA67D7479D5D0AA020A8EB411856E51E5 (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_RightHandMovementDirection = value;
		int32_t L_0 = ___value0;
		__this->___m_RightHandMovementDirection_32 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider_Awake_m3BAB88EE73C713431D822EB7323817318C4C0711 (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral011D3DCC095E581ECDB235DA85D0318CB7DAE281);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		LocomotionProvider_Awake_m00A71AF857A2EF25A15F194187D92509A19AD12F(__this, NULL);
		// m_CombinedTransform = new GameObject("[Dynamic Move Provider] Combined Forward Source").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral011D3DCC095E581ECDB235DA85D0318CB7DAE281, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		__this->___m_CombinedTransform_33 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CombinedTransform_33), (void*)L_1);
		// m_CombinedTransform.SetParent(transform, false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___m_CombinedTransform_33;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_2, L_3, (bool)0, NULL);
		// m_CombinedTransform.localPosition = Vector3.zero;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___m_CombinedTransform_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_4);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_4, L_5, NULL);
		// m_CombinedTransform.localRotation = Quaternion.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___m_CombinedTransform_33;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_6);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_6, L_7, NULL);
		// forwardSource = m_CombinedTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___m_CombinedTransform_33;
		ContinuousMoveProvider_set_forwardSource_m16B2571E7A28F8A79802D12165950AD59C9A5490_inline(__this, L_8, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::ComputeDesiredMove(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DynamicMoveProvider_ComputeDesiredMove_mADD1C5EB231A3EDA633059109A91BC4361274733 (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRInputValueReader_1_ReadValue_m5F62621C89CC35067EDFEAE1EBBE315554767369_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_5;
	memset((&V_5), 0, sizeof(V_5));
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* V_6 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_7 = NULL;
	int32_t V_8 = 0;
	{
		// if (input == Vector2.zero)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___input0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		bool L_2;
		L_2 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		return L_3;
	}

IL_0013:
	{
		// if (m_HeadTransform == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___m_HeadTransform_28;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0058;
		}
	}
	{
		// var xrOrigin = mediator.xrOrigin;
		LocomotionMediator_tFF0E600A153C909C211466942B7D4C3DA6105AD6* L_6;
		L_6 = LocomotionProvider_get_mediator_m7ED478A25CC3F307D84C6A1F81ACC26231E94B5D_inline(__this, NULL);
		NullCheck(L_6);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_7;
		L_7 = LocomotionMediator_get_xrOrigin_mF16601BBA48F6C7D13E600FC6CD426D067582170(L_6, NULL);
		V_6 = L_7;
		// if (xrOrigin != null)
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_8 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		// var xrCamera = xrOrigin.Camera;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_10 = V_6;
		NullCheck(L_10);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11;
		L_11 = XROrigin_get_Camera_m8959027D616F5BD9AEAE3E41ADEE23BBC2CE3629_inline(L_10, NULL);
		V_7 = L_11;
		// if (xrCamera != null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_0058;
		}
	}
	{
		// m_HeadTransform = xrCamera.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = V_7;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		__this->___m_HeadTransform_28 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HeadTransform_28), (void*)L_15);
	}

IL_0058:
	{
		// switch (m_LeftHandMovementDirection)
		int32_t L_16 = __this->___m_LeftHandMovementDirection_31;
		V_8 = L_16;
		int32_t L_17 = V_8;
		if (!L_17)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_18 = V_8;
		if ((((int32_t)L_18) == ((int32_t)1)))
		{
			goto IL_008c;
		}
	}
	{
		goto IL_00ab;
	}

IL_006b:
	{
		// if (m_HeadTransform != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___m_HeadTransform_28;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_20)
		{
			goto IL_00ab;
		}
	}
	{
		// m_LeftMovementPose = m_HeadTransform.GetWorldPose();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___m_HeadTransform_28;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_22;
		L_22 = TransformExtensions_GetWorldPose_m08E343202174666DFF9A07560AB1A72ACD0DDCF1(L_21, NULL);
		__this->___m_LeftMovementPose_34 = L_22;
		// break;
		goto IL_00ab;
	}

IL_008c:
	{
		// if (m_LeftControllerTransform != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___m_LeftControllerTransform_29;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_24)
		{
			goto IL_00ab;
		}
	}
	{
		// m_LeftMovementPose = m_LeftControllerTransform.GetWorldPose();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = __this->___m_LeftControllerTransform_29;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_26;
		L_26 = TransformExtensions_GetWorldPose_m08E343202174666DFF9A07560AB1A72ACD0DDCF1(L_25, NULL);
		__this->___m_LeftMovementPose_34 = L_26;
	}

IL_00ab:
	{
		// switch (m_RightHandMovementDirection)
		int32_t L_27 = __this->___m_RightHandMovementDirection_32;
		V_8 = L_27;
		int32_t L_28 = V_8;
		if (!L_28)
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_29 = V_8;
		if ((((int32_t)L_29) == ((int32_t)1)))
		{
			goto IL_00df;
		}
	}
	{
		goto IL_00fe;
	}

IL_00be:
	{
		// if (m_HeadTransform != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = __this->___m_HeadTransform_28;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_30, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_31)
		{
			goto IL_00fe;
		}
	}
	{
		// m_RightMovementPose = m_HeadTransform.GetWorldPose();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->___m_HeadTransform_28;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_33;
		L_33 = TransformExtensions_GetWorldPose_m08E343202174666DFF9A07560AB1A72ACD0DDCF1(L_32, NULL);
		__this->___m_RightMovementPose_35 = L_33;
		// break;
		goto IL_00fe;
	}

IL_00df:
	{
		// if (m_RightControllerTransform != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = __this->___m_RightControllerTransform_30;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_34, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_35)
		{
			goto IL_00fe;
		}
	}
	{
		// m_RightMovementPose = m_RightControllerTransform.GetWorldPose();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = __this->___m_RightControllerTransform_30;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_37;
		L_37 = TransformExtensions_GetWorldPose_m08E343202174666DFF9A07560AB1A72ACD0DDCF1(L_36, NULL);
		__this->___m_RightMovementPose_35 = L_37;
	}

IL_00fe:
	{
		// var leftHandValue = leftHandMoveInput.ReadValue();
		XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* L_38;
		L_38 = ContinuousMoveProvider_get_leftHandMoveInput_m2B7F6358E442942C20D0667A234A29BE0CBAEB8E_inline(__this, NULL);
		NullCheck(L_38);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = XRInputValueReader_1_ReadValue_m5F62621C89CC35067EDFEAE1EBBE315554767369(L_38, XRInputValueReader_1_ReadValue_m5F62621C89CC35067EDFEAE1EBBE315554767369_RuntimeMethod_var);
		V_0 = L_39;
		// var rightHandValue = rightHandMoveInput.ReadValue();
		XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* L_40;
		L_40 = ContinuousMoveProvider_get_rightHandMoveInput_mAA26C39B1CC43915801850C74CF96888DA4CBB7B_inline(__this, NULL);
		NullCheck(L_40);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		L_41 = XRInputValueReader_1_ReadValue_m5F62621C89CC35067EDFEAE1EBBE315554767369(L_40, XRInputValueReader_1_ReadValue_m5F62621C89CC35067EDFEAE1EBBE315554767369_RuntimeMethod_var);
		V_1 = L_41;
		// var totalSqrMagnitude = leftHandValue.sqrMagnitude + rightHandValue.sqrMagnitude;
		float L_42;
		L_42 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_0), NULL);
		float L_43;
		L_43 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_1), NULL);
		V_2 = ((float)il2cpp_codegen_add(L_42, L_43));
		// var leftHandBlend = 0.5f;
		V_3 = (0.5f);
		// if (totalSqrMagnitude > Mathf.Epsilon)
		float L_44 = V_2;
		float L_45 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		if ((!(((float)L_44) > ((float)L_45))))
		{
			goto IL_013e;
		}
	}
	{
		// leftHandBlend = leftHandValue.sqrMagnitude / totalSqrMagnitude;
		float L_46;
		L_46 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_0), NULL);
		float L_47 = V_2;
		V_3 = ((float)(L_46/L_47));
	}

IL_013e:
	{
		// var combinedPosition = Vector3.Lerp(m_RightMovementPose.position, m_LeftMovementPose.position, leftHandBlend);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_48 = (&__this->___m_RightMovementPose_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = L_48->___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_50 = (&__this->___m_LeftMovementPose_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = L_50->___position_0;
		float L_52 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_49, L_51, L_52, NULL);
		V_4 = L_53;
		// var combinedRotation = Quaternion.Slerp(m_RightMovementPose.rotation, m_LeftMovementPose.rotation, leftHandBlend);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_54 = (&__this->___m_RightMovementPose_35);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_55 = L_54->___rotation_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_56 = (&__this->___m_LeftMovementPose_34);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_57 = L_56->___rotation_1;
		float L_58 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_59;
		L_59 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_55, L_57, L_58, NULL);
		V_5 = L_59;
		// m_CombinedTransform.SetPositionAndRotation(combinedPosition, combinedRotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60 = __this->___m_CombinedTransform_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = V_5;
		NullCheck(L_60);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_60, L_61, L_62, NULL);
		// return base.ComputeDesiredMove(input);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63 = ___input0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = ContinuousMoveProvider_ComputeDesiredMove_mE4E902533BB6627AE8922B9EA5C8A55672B98C00(__this, L_63, NULL);
		return L_64;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider__ctor_mABE04D06EBE852E39DDBBB9A305090A5A7B04650 (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Pose m_LeftMovementPose = Pose.identity;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0;
		L_0 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		__this->___m_LeftMovementPose_34 = L_0;
		// Pose m_RightMovementPose = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		__this->___m_RightMovementPose_35 = L_1;
		ContinuousMoveProvider__ctor_m9715635046C759E4BC51B354BC316EB2BCF31888(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::get_fallbackIfEyeTrackingUnavailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GazeInputManager_get_fallbackIfEyeTrackingUnavailable_m4FB13F913AD2277E5F65AB7D7EF0729644F2D657 (GazeInputManager_t76600ACADAE6718BABD1166EBED065FFD8C90C83* __this, const RuntimeMethod* method) 
{
	{
		// get => m_FallbackIfEyeTrackingUnavailable;
		bool L_0 = __this->___m_FallbackIfEyeTrackingUnavailable_5;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::set_fallbackIfEyeTrackingUnavailable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInputManager_set_fallbackIfEyeTrackingUnavailable_mE6650150E8EC6483E35CF60782A877B7434DE288 (GazeInputManager_t76600ACADAE6718BABD1166EBED065FFD8C90C83* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_FallbackIfEyeTrackingUnavailable = value;
		bool L_0 = ___value0;
		__this->___m_FallbackIfEyeTrackingUnavailable_5 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInputManager_Awake_m913673B2763F78D3AC484A62A8CB66DC93CAF6B7 (GazeInputManager_t76600ACADAE6718BABD1166EBED065FFD8C90C83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF7167BCE82C30E7D09082FFCA3F3EFFD32B186CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFAC408E08BBD06FE731A9E84F5E79461F23EACBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFB31F2643918A411B2F1539CA180A763D0200945_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeInputManager_OnDeviceChange_m5A5EA7E87A46CAEC0CA21EA476B0DAEBB8F2885E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeInputManager_OnDeviceConnected_mFD98427178DBDAF1C7B406FEA28161D3186F2E68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_GetEnumerator_m40DC2BB2BC3C855369753E8780E2B2DE6F38E88C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08922C02E680D90FAAB0862833A88225C5A1F397);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91BEF5D9E8C19A7BAA9335746C74FFE9F0A218C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAC9FA4EA913C7FEEEFEEA8D8C3FEF0ADF872886);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF35C02D0118C69B6ADE22DDE2F7B35FDD2B1AD7C);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* V_0 = NULL;
	Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B V_1;
	memset((&V_1), 0, sizeof(V_1));
	ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var inputDeviceList = new List<InputDevice>();
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_0 = (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*)il2cpp_codegen_object_new(List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4(L_0, List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		V_0 = L_0;
		// InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.EyeTracking, inputDeviceList);
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_1 = V_0;
		InputDevices_GetDevicesWithCharacteristics_m82F54DE2802FCE4EB730FCFBF8731CA91A27DEB0(((int32_t)16), L_1, NULL);
		// if (inputDeviceList.Count > 0)
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_inline(L_2, List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		// Debug.Log("Eye tracking device found!", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(_stringLiteralCAC9FA4EA913C7FEEEFEEA8D8C3FEF0ADF872886, __this, NULL);
		// m_EyeTrackingDeviceFound = true;
		__this->___m_EyeTrackingDeviceFound_6 = (bool)1;
		// return;
		return;
	}

IL_002a:
	{
		// foreach (var device in InputSystem.InputSystem.devices)
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA L_4;
		L_4 = InputSystem_get_devices_mBE599285E43211ACE15248654A3E3D7DB42C85CA(NULL);
		V_2 = L_4;
		Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B L_5;
		L_5 = ReadOnlyArray_1_GetEnumerator_m40DC2BB2BC3C855369753E8780E2B2DE6F38E88C((&V_2), ReadOnlyArray_1_GetEnumerator_m40DC2BB2BC3C855369753E8780E2B2DE6F38E88C_RuntimeMethod_var);
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0071:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF7167BCE82C30E7D09082FFCA3F3EFFD32B186CB((&V_1), Enumerator_Dispose_mF7167BCE82C30E7D09082FFCA3F3EFFD32B186CB_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0066_1;
			}

IL_003a_1:
			{
				// foreach (var device in InputSystem.InputSystem.devices)
				InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_6;
				L_6 = Enumerator_get_Current_mFB31F2643918A411B2F1539CA180A763D0200945((&V_1), Enumerator_get_Current_mFB31F2643918A411B2F1539CA180A763D0200945_RuntimeMethod_var);
				// if (device.layout == k_EyeGazeLayoutName)
				NullCheck(L_6);
				String_t* L_7;
				L_7 = InputControl_get_layout_mE6054F87BB94A1F1D06355E137A1840B2EFF7971(L_6, NULL);
				bool L_8;
				L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralF35C02D0118C69B6ADE22DDE2F7B35FDD2B1AD7C, NULL);
				if (!L_8)
				{
					goto IL_0066_1;
				}
			}
			{
				// Debug.Log("Eye gaze device found!", this);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(_stringLiteral91BEF5D9E8C19A7BAA9335746C74FFE9F0A218C1, __this, NULL);
				// m_EyeTrackingDeviceFound = true;
				__this->___m_EyeTrackingDeviceFound_6 = (bool)1;
				// return;
				goto IL_00c3;
			}

IL_0066_1:
			{
				// foreach (var device in InputSystem.InputSystem.devices)
				bool L_9;
				L_9 = Enumerator_MoveNext_mFAC408E08BBD06FE731A9E84F5E79461F23EACBC((&V_1), Enumerator_MoveNext_mFAC408E08BBD06FE731A9E84F5E79461F23EACBC_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_003a_1;
				}
			}
			{
				goto IL_007f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007f:
	{
		// Debug.LogWarning($"Could not find a device that supports eye tracking on Awake. {this} has subscribed to device connected events and will activate the GameObject when an eye tracking device is connected.", this);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral08922C02E680D90FAAB0862833A88225C5A1F397, __this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(L_10, __this, NULL);
		// InputDevices.deviceConnected += OnDeviceConnected;
		Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* L_11 = (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC*)il2cpp_codegen_object_new(Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_m9EFC6656FE579E4D72FFCA991DE5860FA28DD71E(L_11, __this, (intptr_t)((void*)GazeInputManager_OnDeviceConnected_mFD98427178DBDAF1C7B406FEA28161D3186F2E68_RuntimeMethod_var), NULL);
		InputDevices_add_deviceConnected_m0329DBAE47CA4A20778F7DCBA470FCF9A672E9C9(L_11, NULL);
		// InputSystem.InputSystem.onDeviceChange += OnDeviceChange;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_12 = (Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)il2cpp_codegen_object_new(Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action_2__ctor_m23A4911D82F290811EDC6BFC315C339857526804(L_12, __this, (intptr_t)((void*)GazeInputManager_OnDeviceChange_m5A5EA7E87A46CAEC0CA21EA476B0DAEBB8F2885E_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_add_onDeviceChange_mC1BAF8DE08B2B3F6D0A98D80AE1E4FF5531C60FA(L_12, NULL);
		// gameObject.SetActive(m_FallbackIfEyeTrackingUnavailable);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_14 = __this->___m_FallbackIfEyeTrackingUnavailable_5;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, L_14, NULL);
	}

IL_00c3:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInputManager_OnDestroy_m3D9C35EE01B4439AE17459009DD257CC22B45A4A (GazeInputManager_t76600ACADAE6718BABD1166EBED065FFD8C90C83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeInputManager_OnDeviceChange_m5A5EA7E87A46CAEC0CA21EA476B0DAEBB8F2885E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeInputManager_OnDeviceConnected_mFD98427178DBDAF1C7B406FEA28161D3186F2E68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InputDevices.deviceConnected -= OnDeviceConnected;
		Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* L_0 = (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC*)il2cpp_codegen_object_new(Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m9EFC6656FE579E4D72FFCA991DE5860FA28DD71E(L_0, __this, (intptr_t)((void*)GazeInputManager_OnDeviceConnected_mFD98427178DBDAF1C7B406FEA28161D3186F2E68_RuntimeMethod_var), NULL);
		InputDevices_remove_deviceConnected_m52D0C5E73A9BBEEF775E21DF93DDF0DD4F7D1BB5(L_0, NULL);
		// InputSystem.InputSystem.onDeviceChange -= OnDeviceChange;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_1 = (Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)il2cpp_codegen_object_new(Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_2__ctor_m23A4911D82F290811EDC6BFC315C339857526804(L_1, __this, (intptr_t)((void*)GazeInputManager_OnDeviceChange_m5A5EA7E87A46CAEC0CA21EA476B0DAEBB8F2885E_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_remove_onDeviceChange_mD08F75C263C2D687B2E6E68E86105829075BF717(L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::OnDeviceConnected(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInputManager_OnDeviceConnected_mFD98427178DBDAF1C7B406FEA28161D3186F2E68 (GazeInputManager_t76600ACADAE6718BABD1166EBED065FFD8C90C83* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAC9FA4EA913C7FEEEFEEA8D8C3FEF0ADF872886);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_EyeTrackingDeviceFound || !inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.EyeTracking))
		bool L_0 = __this->___m_EyeTrackingDeviceFound_6;
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		uint32_t L_1;
		L_1 = InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB((&___inputDevice0), NULL);
		uint32_t L_2 = L_1;
		int32_t L_3 = ((int32_t)16);
		bool L_4 = il2cpp_codegen_enum_has_flag((uint32_t)L_2, (uint32_t)L_3);
		if (L_4)
		{
			goto IL_0023;
		}
	}

IL_0022:
	{
		// return;
		return;
	}

IL_0023:
	{
		// Debug.Log("Eye tracking device found!", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(_stringLiteralCAC9FA4EA913C7FEEEFEEA8D8C3FEF0ADF872886, __this, NULL);
		// m_EyeTrackingDeviceFound = true;
		__this->___m_EyeTrackingDeviceFound_6 = (bool)1;
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::OnDeviceChange(UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInputManager_OnDeviceChange_m5A5EA7E87A46CAEC0CA21EA476B0DAEBB8F2885E (GazeInputManager_t76600ACADAE6718BABD1166EBED065FFD8C90C83* __this, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, int32_t ___change1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91BEF5D9E8C19A7BAA9335746C74FFE9F0A218C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF35C02D0118C69B6ADE22DDE2F7B35FDD2B1AD7C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_EyeTrackingDeviceFound || change != InputDeviceChange.Added)
		bool L_0 = __this->___m_EyeTrackingDeviceFound_6;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___change1;
		if (!L_1)
		{
			goto IL_000c;
		}
	}

IL_000b:
	{
		// return;
		return;
	}

IL_000c:
	{
		// if (device.layout == k_EyeGazeLayoutName)
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_2 = ___device0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputControl_get_layout_mE6054F87BB94A1F1D06355E137A1840B2EFF7971(L_2, NULL);
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralF35C02D0118C69B6ADE22DDE2F7B35FDD2B1AD7C, NULL);
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		// Debug.Log("Eye gaze device found!", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(_stringLiteral91BEF5D9E8C19A7BAA9335746C74FFE9F0A218C1, __this, NULL);
		// m_EyeTrackingDeviceFound = true;
		__this->___m_EyeTrackingDeviceFound_6 = (bool)1;
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInputManager__ctor_m745DE4041AB26B99172061A4E8050A0FD507BEB8 (GazeInputManager_t76600ACADAE6718BABD1166EBED065FFD8C90C83* __this, const RuntimeMethod* method) 
{
	{
		// bool m_FallbackIfEyeTrackingUnavailable = true;
		__this->___m_FallbackIfEyeTrackingUnavailable_5 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ShaderContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderContainer__ctor_mF29C007F2040D9962D634F2759B88010EAF49D27 (ShaderContainer_t5449FFD0589156259FBD0A40C97956BAB7A967C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B4FEEFA76B93D58B6E47CD9FF76F6E287D0D321);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool useSRPShaderName = true;
		__this->___useSRPShaderName_1 = (bool)1;
		// public string scriptableRenderPipelineShaderName = "Universal Render Pipeline/Lit";
		__this->___scriptableRenderPipelineShaderName_2 = _stringLiteral9B4FEEFA76B93D58B6E47CD9FF76F6E287D0D321;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scriptableRenderPipelineShaderName_2), (void*)_stringLiteral9B4FEEFA76B93D58B6E47CD9FF76F6E287D0D321);
		// public bool useBuiltinShaderName = true;
		__this->___useBuiltinShaderName_4 = (bool)1;
		// public string builtInPipelineShaderName = "Standard";
		__this->___builtInPipelineShaderName_5 = _stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___builtInPipelineShaderName_5), (void*)_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MaterialPipelineHandler::AutoRefreshPipelineShaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPipelineHandler_AutoRefreshPipelineShaders_mBC841CD4975F098DAD78A5DE47C05DE3FCEF9DAD (MaterialPipelineHandler_t0FF80ADB33BB30721BC1DF67A7F59847C0582985* __this, const RuntimeMethod* method) 
{
	{
		// if (m_AutoRefreshShaders)
		bool L_0 = __this->___m_AutoRefreshShaders_5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// SetPipelineShaders();
		MaterialPipelineHandler_SetPipelineShaders_mEF3C7714BCC13EEB99DD4D0AFF65BBB1C91AEF3E(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MaterialPipelineHandler::SetPipelineShaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPipelineHandler_SetPipelineShaders_mEF3C7714BCC13EEB99DD4D0AFF65BBB1C91AEF3E (MaterialPipelineHandler_t0FF80ADB33BB30721BC1DF67A7F59847C0582985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8E4F22D5A95CD8650AE763B2C1E32275D765919E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6A20E0100D9D352AF8D1D6B6ACB174E846DCF156_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m108DACDDBBFB5E6EED33A49351BE602DEEC6C44E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mEC725D71089D3258528F69087BB3D275111F60C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t1B566B4B8021293BDA76FB2466677DF975ACB8DF V_1;
	memset((&V_1), 0, sizeof(V_1));
	ShaderContainer_t5449FFD0589156259FBD0A40C97956BAB7A967C1* V_2 = NULL;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_3 = NULL;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_4 = NULL;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_5 = NULL;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* G_B8_0 = NULL;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* G_B11_0 = NULL;
	{
		// if (m_ShaderContainers == null)
		List_1_tAD47FE510B94D41F2CC47130BE91C52577397DD8* L_0 = __this->___m_ShaderContainers_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// bool isBuiltinRenderPipeline = GraphicsSettings.currentRenderPipeline == null;
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_1;
		L_1 = GraphicsSettings_get_currentRenderPipeline_mEC94DC23DE4F901D6A629E2DE882982686AF75F1(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_2;
		// foreach (var info in m_ShaderContainers)
		List_1_tAD47FE510B94D41F2CC47130BE91C52577397DD8* L_3 = __this->___m_ShaderContainers_4;
		NullCheck(L_3);
		Enumerator_t1B566B4B8021293BDA76FB2466677DF975ACB8DF L_4;
		L_4 = List_1_GetEnumerator_mEC725D71089D3258528F69087BB3D275111F60C8(L_3, List_1_GetEnumerator_mEC725D71089D3258528F69087BB3D275111F60C8_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f2:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8E4F22D5A95CD8650AE763B2C1E32275D765919E((&V_1), Enumerator_Dispose_m8E4F22D5A95CD8650AE763B2C1E32275D765919E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00e4_1;
			}

IL_0026_1:
			{
				// foreach (var info in m_ShaderContainers)
				ShaderContainer_t5449FFD0589156259FBD0A40C97956BAB7A967C1* L_5;
				L_5 = Enumerator_get_Current_m108DACDDBBFB5E6EED33A49351BE602DEEC6C44E_inline((&V_1), Enumerator_get_Current_m108DACDDBBFB5E6EED33A49351BE602DEEC6C44E_RuntimeMethod_var);
				V_2 = L_5;
				// if (info.material == null)
				ShaderContainer_t5449FFD0589156259FBD0A40C97956BAB7A967C1* L_6 = V_2;
				NullCheck(L_6);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = L_6->___material_0;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_8;
				L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (L_8)
				{
					goto IL_00e4_1;
				}
			}
			{
				// Shader birpShader = info.useBuiltinShaderName ? Shader.Find(info.builtInPipelineShaderName) : info.builtInPipelineShader;
				ShaderContainer_t5449FFD0589156259FBD0A40C97956BAB7A967C1* L_9 = V_2;
				NullCheck(L_9);
				bool L_10 = L_9->___useBuiltinShaderName_4;
				if (L_10)
				{
					goto IL_004f_1;
				}
			}
			{
				ShaderContainer_t5449FFD0589156259FBD0A40C97956BAB7A967C1* L_11 = V_2;
				NullCheck(L_11);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_12 = L_11->___builtInPipelineShader_6;
				G_B8_0 = L_12;
				goto IL_005a_1;
			}

IL_004f_1:
			{
				ShaderContainer_t5449FFD0589156259FBD0A40C97956BAB7A967C1* L_13 = V_2;
				NullCheck(L_13);
				String_t* L_14 = L_13->___builtInPipelineShaderName_5;
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15;
				L_15 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(L_14, NULL);
				G_B8_0 = L_15;
			}

IL_005a_1:
			{
				V_3 = G_B8_0;
				// Shader srpShader = info.useSRPShaderName ? Shader.Find(info.scriptableRenderPipelineShaderName) : info.scriptableRenderPipelineShader;
				ShaderContainer_t5449FFD0589156259FBD0A40C97956BAB7A967C1* L_16 = V_2;
				NullCheck(L_16);
				bool L_17 = L_16->___useSRPShaderName_1;
				if (L_17)
				{
					goto IL_006b_1;
				}
			}
			{
				ShaderContainer_t5449FFD0589156259FBD0A40C97956BAB7A967C1* L_18 = V_2;
				NullCheck(L_18);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_19 = L_18->___scriptableRenderPipelineShader_3;
				G_B11_0 = L_19;
				goto IL_0076_1;
			}

IL_006b_1:
			{
				ShaderContainer_t5449FFD0589156259FBD0A40C97956BAB7A967C1* L_20 = V_2;
				NullCheck(L_20);
				String_t* L_21 = L_20->___scriptableRenderPipelineShaderName_2;
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_22;
				L_22 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(L_21, NULL);
				G_B11_0 = L_22;
			}

IL_0076_1:
			{
				V_4 = G_B11_0;
				// Shader currentShader = info.material.shader;
				ShaderContainer_t5449FFD0589156259FBD0A40C97956BAB7A967C1* L_23 = V_2;
				NullCheck(L_23);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24 = L_23->___material_0;
				NullCheck(L_24);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_25;
				L_25 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_24, NULL);
				V_5 = L_25;
				// if (isBuiltinRenderPipeline && birpShader != null && currentShader != birpShader)
				bool L_26 = V_0;
				if (!L_26)
				{
					goto IL_00b4_1;
				}
			}
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_27 = V_3;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_28;
				L_28 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_28)
				{
					goto IL_00b4_1;
				}
			}
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_29 = V_5;
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_30 = V_3;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_31;
				L_31 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_29, L_30, NULL);
				if (!L_31)
				{
					goto IL_00b4_1;
				}
			}
			{
				// info.material.shader = birpShader;
				ShaderContainer_t5449FFD0589156259FBD0A40C97956BAB7A967C1* L_32 = V_2;
				NullCheck(L_32);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_33 = L_32->___material_0;
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_34 = V_3;
				NullCheck(L_33);
				Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_33, L_34, NULL);
				// MarkMaterialModified(info.material);
				ShaderContainer_t5449FFD0589156259FBD0A40C97956BAB7A967C1* L_35 = V_2;
				NullCheck(L_35);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_36 = L_35->___material_0;
				MaterialPipelineHandler_MarkMaterialModified_mF5668D7CEF7CAA2E7DCBC7F31934D8D31000E6B9(L_36, NULL);
				goto IL_00e4_1;
			}

IL_00b4_1:
			{
				// else if (!isBuiltinRenderPipeline && srpShader != null && currentShader != srpShader )
				bool L_37 = V_0;
				if (L_37)
				{
					goto IL_00e4_1;
				}
			}
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_38 = V_4;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_39;
				L_39 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_38, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_39)
				{
					goto IL_00e4_1;
				}
			}
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_40 = V_5;
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_41 = V_4;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_42;
				L_42 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_40, L_41, NULL);
				if (!L_42)
				{
					goto IL_00e4_1;
				}
			}
			{
				// info.material.shader = srpShader;
				ShaderContainer_t5449FFD0589156259FBD0A40C97956BAB7A967C1* L_43 = V_2;
				NullCheck(L_43);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_44 = L_43->___material_0;
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_45 = V_4;
				NullCheck(L_44);
				Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_44, L_45, NULL);
				// MarkMaterialModified(info.material);
				ShaderContainer_t5449FFD0589156259FBD0A40C97956BAB7A967C1* L_46 = V_2;
				NullCheck(L_46);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_47 = L_46->___material_0;
				MaterialPipelineHandler_MarkMaterialModified_mF5668D7CEF7CAA2E7DCBC7F31934D8D31000E6B9(L_47, NULL);
			}

IL_00e4_1:
			{
				// foreach (var info in m_ShaderContainers)
				bool L_48;
				L_48 = Enumerator_MoveNext_m6A20E0100D9D352AF8D1D6B6ACB174E846DCF156((&V_1), Enumerator_MoveNext_m6A20E0100D9D352AF8D1D6B6ACB174E846DCF156_RuntimeMethod_var);
				if (L_48)
				{
					goto IL_0026_1;
				}
			}
			{
				goto IL_0100;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0100:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MaterialPipelineHandler::MarkMaterialModified(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPipelineHandler_MarkMaterialModified_mF5668D7CEF7CAA2E7DCBC7F31934D8D31000E6B9 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MaterialPipelineHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPipelineHandler__ctor_mD952562BA8163091463DB0F248CED8BA1527F265 (MaterialPipelineHandler_t0FF80ADB33BB30721BC1DF67A7F59847C0582985* __this, const RuntimeMethod* method) 
{
	{
		// bool m_AutoRefreshShaders = true;
		__this->___m_AutoRefreshShaders_5 = (bool)1;
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Camera UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::get_cameraToFace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ObjectSpawner_get_cameraToFace_m99ED804DC1AEAFF1FA3BE5D9CB96E15C17A907B8 (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, const RuntimeMethod* method) 
{
	{
		// EnsureFacingCamera();
		ObjectSpawner_EnsureFacingCamera_mDE91C9175F12CB11CDED0B3C82D5D68ED9CAB7B5(__this, NULL);
		// return m_CameraToFace;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___m_CameraToFace_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::set_cameraToFace(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_set_cameraToFace_m13429AE345196ACC129BFC53BA7DEEC6627F445C (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_CameraToFace = value;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___value0;
		__this->___m_CameraToFace_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CameraToFace_4), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::get_objectPrefabs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ObjectSpawner_get_objectPrefabs_mC013B08B69C29F13A750E8715FAB01E8681320CF (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ObjectPrefabs;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___m_ObjectPrefabs_5;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::set_objectPrefabs(System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_set_objectPrefabs_m7C706F87CB6076934AA85A8DC02C11C94DBC2DE3 (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ObjectPrefabs = value;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = ___value0;
		__this->___m_ObjectPrefabs_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectPrefabs_5), (void*)L_0);
		return;
	}
}
// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::get_spawnVisualizationPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectSpawner_get_spawnVisualizationPrefab_m005CB7E8829438D62559966C3175138AF6B8E7E2 (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SpawnVisualizationPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_SpawnVisualizationPrefab_6;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::set_spawnVisualizationPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_set_spawnVisualizationPrefab_mD4A5C8D799FCC9B21228E6055795C373AC896842 (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_SpawnVisualizationPrefab = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_SpawnVisualizationPrefab_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SpawnVisualizationPrefab_6), (void*)L_0);
		return;
	}
}
// System.Int32 UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::get_spawnOptionIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectSpawner_get_spawnOptionIndex_m8B127FEF82FD7AAB77E7D4F6EE3E869E25EFB254 (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SpawnOptionIndex;
		int32_t L_0 = __this->___m_SpawnOptionIndex_7;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::set_spawnOptionIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_set_spawnOptionIndex_m5984E7B1712BB73A2E982FE4487FCA033A922711 (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_SpawnOptionIndex = value;
		int32_t L_0 = ___value0;
		__this->___m_SpawnOptionIndex_7 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::get_isSpawnOptionRandomized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectSpawner_get_isSpawnOptionRandomized_m332805694C4805511AD6D8124E6038E3A5D59C2B (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool isSpawnOptionRandomized => m_SpawnOptionIndex < 0 || m_SpawnOptionIndex >= m_ObjectPrefabs.Count;
		int32_t L_0 = __this->___m_SpawnOptionIndex_7;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = __this->___m_SpawnOptionIndex_7;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___m_ObjectPrefabs_5;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_2, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0020:
	{
		return (bool)1;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::get_onlySpawnInView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectSpawner_get_onlySpawnInView_m4AE6CAF69146EE5F55128F520ED6C77FBF33B376 (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, const RuntimeMethod* method) 
{
	{
		// get => m_OnlySpawnInView;
		bool L_0 = __this->___m_OnlySpawnInView_8;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::set_onlySpawnInView(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_set_onlySpawnInView_m39467C97467506B3012A050F3849BC896ECFE07A (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_OnlySpawnInView = value;
		bool L_0 = ___value0;
		__this->___m_OnlySpawnInView_8 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::get_viewportPeriphery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ObjectSpawner_get_viewportPeriphery_m9D81A0039316F881F4F12D8F42E67ED86907DF8E (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ViewportPeriphery;
		float L_0 = __this->___m_ViewportPeriphery_9;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::set_viewportPeriphery(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_set_viewportPeriphery_mF79358BA74C413586E09E1DD628FC9A36EA948BA (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ViewportPeriphery = value;
		float L_0 = ___value0;
		__this->___m_ViewportPeriphery_9 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::get_applyRandomAngleAtSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectSpawner_get_applyRandomAngleAtSpawn_mEEF19E6B8A0232670426D51CE44AFD5C7D721289 (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ApplyRandomAngleAtSpawn;
		bool L_0 = __this->___m_ApplyRandomAngleAtSpawn_10;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::set_applyRandomAngleAtSpawn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_set_applyRandomAngleAtSpawn_m249E985B18D47F1280DA892475C0F8A743A172C8 (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ApplyRandomAngleAtSpawn = value;
		bool L_0 = ___value0;
		__this->___m_ApplyRandomAngleAtSpawn_10 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::get_spawnAngleRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ObjectSpawner_get_spawnAngleRange_mA5AB99C204A4669D2805081FF2B27F2C6CFB97B6 (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SpawnAngleRange;
		float L_0 = __this->___m_SpawnAngleRange_11;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::set_spawnAngleRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_set_spawnAngleRange_m5CA22E8E5559EAE3CAFED5E7E5D114DFD5E22EFE (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_SpawnAngleRange = value;
		float L_0 = ___value0;
		__this->___m_SpawnAngleRange_11 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::get_spawnAsChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectSpawner_get_spawnAsChildren_m4498447AB9BD7DA4F8B6B31E2C8FF0F3A25D6483 (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SpawnAsChildren;
		bool L_0 = __this->___m_SpawnAsChildren_12;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::set_spawnAsChildren(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_set_spawnAsChildren_mF600D54942D35CF9B9BF4A6F8D53843AC65EDD32 (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_SpawnAsChildren = value;
		bool L_0 = ___value0;
		__this->___m_SpawnAsChildren_12 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::add_objectSpawned(System.Action`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_add_objectSpawned_m6283F4141293DABF487C47EE6D77A54E4A7C1808 (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* V_0 = NULL;
	Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* V_1 = NULL;
	Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* V_2 = NULL;
	{
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_0 = __this->___objectSpawned_13;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_1 = V_0;
		V_1 = L_1;
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_2 = V_1;
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*)Castclass((RuntimeObject*)L_4, Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C_il2cpp_TypeInfo_var));
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C** L_5 = (&__this->___objectSpawned_13);
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_6 = V_2;
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_7 = V_1;
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_9 = V_0;
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*)L_9) == ((RuntimeObject*)(Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::remove_objectSpawned(System.Action`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_remove_objectSpawned_mE95E288198D756A164416D64782A9468099DE0B5 (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* V_0 = NULL;
	Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* V_1 = NULL;
	Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* V_2 = NULL;
	{
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_0 = __this->___objectSpawned_13;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_1 = V_0;
		V_1 = L_1;
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_2 = V_1;
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*)Castclass((RuntimeObject*)L_4, Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C_il2cpp_TypeInfo_var));
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C** L_5 = (&__this->___objectSpawned_13);
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_6 = V_2;
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_7 = V_1;
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_9 = V_0;
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*)L_9) == ((RuntimeObject*)(Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_Awake_mCFDE2E8399B486248DD536633294AC9627F1B9A8 (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, const RuntimeMethod* method) 
{
	{
		// EnsureFacingCamera();
		ObjectSpawner_EnsureFacingCamera_mDE91C9175F12CB11CDED0B3C82D5D68ED9CAB7B5(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::EnsureFacingCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_EnsureFacingCamera_mDE91C9175F12CB11CDED0B3C82D5D68ED9CAB7B5 (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_CameraToFace == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___m_CameraToFace_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// m_CameraToFace = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->___m_CameraToFace_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CameraToFace_4), (void*)L_2);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::RandomizeSpawnOption()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_RandomizeSpawnOption_mAAB168851C517000BFFEE2EB598D0DE478BB0FC7 (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, const RuntimeMethod* method) 
{
	{
		// m_SpawnOptionIndex = -1;
		__this->___m_SpawnOptionIndex_7 = (-1);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::TrySpawnObject(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectSpawner_TrySpawnObject_mBE0345EF7F3D3EF69F20321A4190214DB09D65B1 (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___spawnPoint0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___spawnNormal1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	int32_t G_B10_0 = 0;
	Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* G_B18_0 = NULL;
	Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* G_B17_0 = NULL;
	{
		// if (m_OnlySpawnInView)
		bool L_0 = __this->___m_OnlySpawnInView_8;
		if (!L_0)
		{
			goto IL_0068;
		}
	}
	{
		// var inViewMin = m_ViewportPeriphery;
		float L_1 = __this->___m_ViewportPeriphery_9;
		V_4 = L_1;
		// var inViewMax = 1f - m_ViewportPeriphery;
		float L_2 = __this->___m_ViewportPeriphery_9;
		V_5 = ((float)il2cpp_codegen_subtract((1.0f), L_2));
		// var pointInViewportSpace = cameraToFace.WorldToViewportPoint(spawnPoint);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = ObjectSpawner_get_cameraToFace_m99ED804DC1AEAFF1FA3BE5D9CB96E15C17A907B8(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___spawnPoint0;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Camera_WorldToViewportPoint_m285523443225EDA79BBEF9C9EDD76B99CFED054B(L_3, L_4, NULL);
		V_6 = L_5;
		// if (pointInViewportSpace.z < 0f || pointInViewportSpace.x > inViewMax || pointInViewportSpace.x < inViewMin ||
		//     pointInViewportSpace.y > inViewMax || pointInViewportSpace.y < inViewMin)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_6;
		float L_7 = L_6.___z_4;
		if ((((float)L_7) < ((float)(0.0f))))
		{
			goto IL_0066;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_6;
		float L_9 = L_8.___x_2;
		float L_10 = V_5;
		if ((((float)L_9) > ((float)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_6;
		float L_12 = L_11.___x_2;
		float L_13 = V_4;
		if ((((float)L_12) < ((float)L_13)))
		{
			goto IL_0066;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_6;
		float L_15 = L_14.___y_3;
		float L_16 = V_5;
		if ((((float)L_15) > ((float)L_16)))
		{
			goto IL_0066;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_6;
		float L_18 = L_17.___y_3;
		float L_19 = V_4;
		if ((!(((float)L_18) < ((float)L_19))))
		{
			goto IL_0068;
		}
	}

IL_0066:
	{
		// return false;
		return (bool)0;
	}

IL_0068:
	{
		// var objectIndex = isSpawnOptionRandomized ? Random.Range(0, m_ObjectPrefabs.Count) : m_SpawnOptionIndex;
		bool L_20;
		L_20 = ObjectSpawner_get_isSpawnOptionRandomized_m332805694C4805511AD6D8124E6038E3A5D59C2B(__this, NULL);
		if (L_20)
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_21 = __this->___m_SpawnOptionIndex_7;
		G_B10_0 = L_21;
		goto IL_0089;
	}

IL_0078:
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_22 = __this->___m_ObjectPrefabs_5;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_22, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_24;
		L_24 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_23, NULL);
		G_B10_0 = L_24;
	}

IL_0089:
	{
		V_0 = G_B10_0;
		// var newObject = Instantiate(m_ObjectPrefabs[objectIndex]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_25 = __this->___m_ObjectPrefabs_5;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_25, L_26, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_27, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_1 = L_28;
		// if (m_SpawnAsChildren)
		bool L_29 = __this->___m_SpawnAsChildren_12;
		if (!L_29)
		{
			goto IL_00b5;
		}
	}
	{
		// newObject.transform.parent = transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = V_1;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_31);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_31, L_32, NULL);
	}

IL_00b5:
	{
		// newObject.transform.position = spawnPoint;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = V_1;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = ___spawnPoint0;
		NullCheck(L_34);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_34, L_35, NULL);
		// EnsureFacingCamera();
		ObjectSpawner_EnsureFacingCamera_mDE91C9175F12CB11CDED0B3C82D5D68ED9CAB7B5(__this, NULL);
		// var facePosition = m_CameraToFace.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_36 = __this->___m_CameraToFace_4;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_36, NULL);
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		// var forward = facePosition - spawnPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = ___spawnPoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_38, L_39, NULL);
		V_2 = L_40;
		// BurstMathUtility.ProjectOnPlane(forward, spawnNormal, out var projectedForward);
		BurstMathUtility_ProjectOnPlane_m2C217BB9D02F0F29DF756819A072E4370A7245D8((&V_2), (&___spawnNormal1), (&V_3), NULL);
		// newObject.transform.rotation = Quaternion.LookRotation(projectedForward, spawnNormal);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = V_1;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = ___spawnNormal1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_45;
		L_45 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_43, L_44, NULL);
		NullCheck(L_42);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_42, L_45, NULL);
		// if (m_ApplyRandomAngleAtSpawn)
		bool L_46 = __this->___m_ApplyRandomAngleAtSpawn_10;
		if (!L_46)
		{
			goto IL_0129;
		}
	}
	{
		// var randomRotation = Random.Range(-m_SpawnAngleRange, m_SpawnAngleRange);
		float L_47 = __this->___m_SpawnAngleRange_11;
		float L_48 = __this->___m_SpawnAngleRange_11;
		float L_49;
		L_49 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_47)), L_48, NULL);
		V_7 = L_49;
		// newObject.transform.Rotate(Vector3.up, randomRotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = V_1;
		NullCheck(L_50);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_50, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_53 = V_7;
		NullCheck(L_51);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_51, L_52, L_53, NULL);
	}

IL_0129:
	{
		// if (m_SpawnVisualizationPrefab != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = __this->___m_SpawnVisualizationPrefab_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_54, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_55)
		{
			goto IL_015e;
		}
	}
	{
		// var visualizationTrans = Instantiate(m_SpawnVisualizationPrefab).transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = __this->___m_SpawnVisualizationPrefab_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57;
		L_57 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_56, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		NullCheck(L_57);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_57, NULL);
		// visualizationTrans.position = spawnPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59 = L_58;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = ___spawnPoint0;
		NullCheck(L_59);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_59, L_60, NULL);
		// visualizationTrans.rotation = newObject.transform.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61 = V_1;
		NullCheck(L_61);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
		L_62 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_61, NULL);
		NullCheck(L_62);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_63;
		L_63 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_62, NULL);
		NullCheck(L_59);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_59, L_63, NULL);
	}

IL_015e:
	{
		// objectSpawned?.Invoke(newObject);
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_64 = __this->___objectSpawned_13;
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_65 = L_64;
		G_B17_0 = L_65;
		if (L_65)
		{
			G_B18_0 = L_65;
			goto IL_016a;
		}
	}
	{
		goto IL_0170;
	}

IL_016a:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66 = V_1;
		NullCheck(G_B18_0);
		Action_1_Invoke_mBF1852490A3A2C4508CEF22E3887E57A8E6C6E45_inline(G_B18_0, L_66, NULL);
	}

IL_0170:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner__ctor_m1A51792399FE9484F9E6061BC6736BF2E561544C (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<GameObject> m_ObjectPrefabs = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___m_ObjectPrefabs_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectPrefabs_5), (void*)L_0);
		// int m_SpawnOptionIndex = -1;
		__this->___m_SpawnOptionIndex_7 = (-1);
		// bool m_OnlySpawnInView = true;
		__this->___m_OnlySpawnInView_8 = (bool)1;
		// float m_ViewportPeriphery = 0.15f;
		__this->___m_ViewportPeriphery_9 = (0.150000006f);
		// bool m_ApplyRandomAngleAtSpawn = true;
		__this->___m_ApplyRandomAngleAtSpawn_10 = (bool)1;
		// float m_SpawnAngleRange = 45f;
		__this->___m_SpawnAngleRange_11 = (45.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer/RegistrationMode UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.RotationAxisLockGrabTransformer::get_registrationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RotationAxisLockGrabTransformer_get_registrationMode_m4EA3B5C5617C6806B213DBEED7CC012BDD916948 (RotationAxisLockGrabTransformer_t607B7577937EE7AD454A59499B6266FBA4832DD7* __this, const RuntimeMethod* method) 
{
	{
		// protected override RegistrationMode registrationMode => RegistrationMode.SingleAndMultiple;
		return (int32_t)(3);
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.RotationAxisLockGrabTransformer::OnLink(UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationAxisLockGrabTransformer_OnLink_mB4AC8C03388F85A0180CB0A76714EA8FF4A2A351 (RotationAxisLockGrabTransformer_t607B7577937EE7AD454A59499B6266FBA4832DD7* __this, XRGrabInteractable_tAE7E2F24377399C9B5159179E4B43EA6AA55531B* ___grabInteractable0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// base.OnLink(grabInteractable);
		XRGrabInteractable_tAE7E2F24377399C9B5159179E4B43EA6AA55531B* L_0 = ___grabInteractable0;
		XRBaseGrabTransformer_OnLink_m1247B6C6DDCE2D06C9EC7030419772001072AFB6(__this, L_0, NULL);
		// m_InitialEulerRotation = grabInteractable.transform.rotation.eulerAngles;
		XRGrabInteractable_tAE7E2F24377399C9B5159179E4B43EA6AA55531B* L_1 = ___grabInteractable0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_2, NULL);
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		__this->___m_InitialEulerRotation_5 = L_4;
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.RotationAxisLockGrabTransformer::Process(UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable,UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase,UnityEngine.Pose&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationAxisLockGrabTransformer_Process_m1B7B430C528A8537AC850EF66AF21D4C5032B08A (RotationAxisLockGrabTransformer_t607B7577937EE7AD454A59499B6266FBA4832DD7* __this, XRGrabInteractable_tAE7E2F24377399C9B5159179E4B43EA6AA55531B* ___grabInteractable0, int32_t ___updatePhase1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___targetPose2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___localScale3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 newRotationEuler = targetPose.rotation.eulerAngles;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___targetPose2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_1 = (&L_0->___rotation_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_1, NULL);
		V_0 = L_2;
		// if ((m_PermittedRotationAxis & XRGeneralGrabTransformer.ManipulationAxes.X) == 0)
		int32_t L_3 = __this->___m_PermittedRotationAxis_4;
		if (((int32_t)((int32_t)L_3&1)))
		{
			goto IL_0028;
		}
	}
	{
		// newRotationEuler.x = m_InitialEulerRotation.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___m_InitialEulerRotation_5);
		float L_5 = L_4->___x_2;
		(&V_0)->___x_2 = L_5;
	}

IL_0028:
	{
		// if ((m_PermittedRotationAxis & XRGeneralGrabTransformer.ManipulationAxes.Y) == 0)
		int32_t L_6 = __this->___m_PermittedRotationAxis_4;
		if (((int32_t)((int32_t)L_6&2)))
		{
			goto IL_0044;
		}
	}
	{
		// newRotationEuler.y = m_InitialEulerRotation.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___m_InitialEulerRotation_5);
		float L_8 = L_7->___y_3;
		(&V_0)->___y_3 = L_8;
	}

IL_0044:
	{
		// if ((m_PermittedRotationAxis & XRGeneralGrabTransformer.ManipulationAxes.Z) == 0)
		int32_t L_9 = __this->___m_PermittedRotationAxis_4;
		if (((int32_t)((int32_t)L_9&4)))
		{
			goto IL_0060;
		}
	}
	{
		// newRotationEuler.z = m_InitialEulerRotation.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = (&__this->___m_InitialEulerRotation_5);
		float L_11 = L_10->___z_4;
		(&V_0)->___z_4 = L_11;
	}

IL_0060:
	{
		// targetPose.rotation = Quaternion.Euler(newRotationEuler);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_12 = ___targetPose2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_13, NULL);
		L_12->___rotation_1 = L_14;
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.RotationAxisLockGrabTransformer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationAxisLockGrabTransformer__ctor_mBDFC675D3576106237A9260DB4140B42869A6612 (RotationAxisLockGrabTransformer_t607B7577937EE7AD454A59499B6266FBA4832DD7* __this, const RuntimeMethod* method) 
{
	{
		// XRGeneralGrabTransformer.ManipulationAxes m_PermittedRotationAxis = XRGeneralGrabTransformer.ManipulationAxes.All;
		__this->___m_PermittedRotationAxis_4 = 7;
		XRBaseGrabTransformer__ctor_m30FA70FC5B6D1735315AA87624C8BFC6C80A517E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::get_pokeFollowTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRPokeFollowAffordance_get_pokeFollowTransform_m73344435C2867D159F2F7E02F49376F558087F1E (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PokeFollowTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_PokeFollowTransform_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::set_pokeFollowTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_set_pokeFollowTransform_m349E957CDD31FC13ABF0136717A3CACDD1451546 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_PokeFollowTransform = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___m_PokeFollowTransform_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PokeFollowTransform_4), (void*)L_0);
		return;
	}
}
// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::get_smoothingSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRPokeFollowAffordance_get_smoothingSpeed_m6DA02413915676F5754E172BAF1C07C0C517BB75 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SmoothingSpeed;
		float L_0 = __this->___m_SmoothingSpeed_5;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::set_smoothingSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_set_smoothingSpeed_m6F6EDC78B71DE4F9223FB1DC41EA3EB1FBEC210D (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_SmoothingSpeed = value;
		float L_0 = ___value0;
		__this->___m_SmoothingSpeed_5 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::get_returnToInitialPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPokeFollowAffordance_get_returnToInitialPosition_m8D6FC7BDF8A2419ACEAF06B9E46321416A22412A (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ReturnToInitialPosition;
		bool L_0 = __this->___m_ReturnToInitialPosition_6;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::set_returnToInitialPosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_set_returnToInitialPosition_m77573EFC79B33125B097570F60A87EBA1BA1BA91 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ReturnToInitialPosition = value;
		bool L_0 = ___value0;
		__this->___m_ReturnToInitialPosition_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::get_applyIfChildIsTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPokeFollowAffordance_get_applyIfChildIsTarget_m1023FE2DD7E8622125AB3E6261B00B38DC1CA302 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ApplyIfChildIsTarget;
		bool L_0 = __this->___m_ApplyIfChildIsTarget_7;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::set_applyIfChildIsTarget(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_set_applyIfChildIsTarget_mBBE196D3022D66890463276AAFDFB54444A0BFE2 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ApplyIfChildIsTarget = value;
		bool L_0 = ___value0;
		__this->___m_ApplyIfChildIsTarget_7 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::get_clampToMaxDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPokeFollowAffordance_get_clampToMaxDistance_m6F811E71D7755E06CC1F40B6566FACE71EADC78C (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ClampToMaxDistance;
		bool L_0 = __this->___m_ClampToMaxDistance_8;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::set_clampToMaxDistance(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_set_clampToMaxDistance_mD0D40453025EF106A1D04AD65A8FC4315B83AA2E (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ClampToMaxDistance = value;
		bool L_0 = ___value0;
		__this->___m_ClampToMaxDistance_8 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::get_maxDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRPokeFollowAffordance_get_maxDistance_m72B9FC2D76C8CE120CAFA3C35A30CB7E61711F5D (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MaxDistance;
		float L_0 = __this->___m_MaxDistance_9;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::set_maxDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_set_maxDistance_m10822A5C3A8814B606594E089B6E8CBB4268AC49 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_MaxDistance = value;
		float L_0 = ___value0;
		__this->___m_MaxDistance_9 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::get_initialPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRPokeFollowAffordance_get_initialPosition_m2076FCE50726A24B4A56CEA94A5AE7CC2BFE7401 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_InitialPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_InitialPosition_14;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::set_initialPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_set_initialPosition_mDEC89AA206367BCE6753B8BB9DAC0D3272B3947A (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_InitialPosition = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___m_InitialPosition_14 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_Awake_m610BBBA2BD47341BB933845C9C005C3C5211F342 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisIMultiPokeStateDataProvider_tD966DFBE873FAF8D39E820B94A6795B4A2EFA73F_m547FA5110DC4523EAC78FD8D62A6E0EA8378AB58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisIPokeStateDataProvider_t14F2B731F2979D1138EB70A11E36F274A23DC91C_m56533D22EBBEEE60BD440ECE3B5EF450D8F5DE62_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_MultiPokeStateDataProvider = GetComponentInParent<IMultiPokeStateDataProvider>();
		RuntimeObject* L_0;
		L_0 = Component_GetComponentInParent_TisIMultiPokeStateDataProvider_tD966DFBE873FAF8D39E820B94A6795B4A2EFA73F_m547FA5110DC4523EAC78FD8D62A6E0EA8378AB58(__this, Component_GetComponentInParent_TisIMultiPokeStateDataProvider_tD966DFBE873FAF8D39E820B94A6795B4A2EFA73F_m547FA5110DC4523EAC78FD8D62A6E0EA8378AB58_RuntimeMethod_var);
		__this->___m_MultiPokeStateDataProvider_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MultiPokeStateDataProvider_11), (void*)L_0);
		// if(m_MultiPokeStateDataProvider == null)
		RuntimeObject* L_1 = __this->___m_MultiPokeStateDataProvider_11;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		// m_PokeDataProvider = GetComponentInParent<IPokeStateDataProvider>();
		RuntimeObject* L_2;
		L_2 = Component_GetComponentInParent_TisIPokeStateDataProvider_t14F2B731F2979D1138EB70A11E36F274A23DC91C_m56533D22EBBEEE60BD440ECE3B5EF450D8F5DE62(__this, Component_GetComponentInParent_TisIPokeStateDataProvider_t14F2B731F2979D1138EB70A11E36F274A23DC91C_m56533D22EBBEEE60BD440ECE3B5EF450D8F5DE62_RuntimeMethod_var);
		__this->___m_PokeDataProvider_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PokeDataProvider_10), (void*)L_2);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_Start_m4499F1A6DA2148644B4AE565B55C82612943C8F9 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindableVariableBase_1_Subscribe_mC4E18EDA53B1AF95B57D4D6976353EC198EA6608_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultiPokeStateDataProvider_tD966DFBE873FAF8D39E820B94A6795B4A2EFA73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPokeStateDataProvider_t14F2B731F2979D1138EB70A11E36F274A23DC91C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyBindableVariable_1_tD608177C44612AEF9CD25AEDCA15F1734DD0E073_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPokeFollowAffordance_OnPokeStateDataUpdated_m47E524438FBC3D238855A42C176A43355387137F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPokeFollowAffordance_OnTransformTweenableVariableUpdated_m45F75BBA331A940327AD949A7C0939F24F6B57B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral675D495E61C139628601D1F560A558803C58CB67);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_PokeFollowTransform != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_PokeFollowTransform_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_00aa;
		}
	}
	{
		// m_InitialPosition = m_PokeFollowTransform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___m_PokeFollowTransform_4;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_2, NULL);
		__this->___m_InitialPosition_14 = L_3;
		// m_BindingsGroup.AddBinding(m_TransformTweenableVariable.Subscribe(OnTransformTweenableVariableUpdated));
		BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* L_4 = __this->___m_BindingsGroup_13;
		Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* L_5 = __this->___m_TransformTweenableVariable_12;
		Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B* L_6 = (Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B*)il2cpp_codegen_object_new(Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_mB233B0C3B645B249C912144F3F6EA0B343C5E5F0(L_6, __this, (intptr_t)((void*)XRPokeFollowAffordance_OnTransformTweenableVariableUpdated_m45F75BBA331A940327AD949A7C0939F24F6B57B2_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = BindableVariableBase_1_Subscribe_mC4E18EDA53B1AF95B57D4D6976353EC198EA6608(L_5, L_6, BindableVariableBase_1_Subscribe_mC4E18EDA53B1AF95B57D4D6976353EC198EA6608_RuntimeMethod_var);
		NullCheck(L_4);
		BindingsGroup_AddBinding_m18697E73861A1C67DE0674F162B43CCE9E67C89B(L_4, L_7, NULL);
		// if(m_MultiPokeStateDataProvider != null)
		RuntimeObject* L_8 = __this->___m_MultiPokeStateDataProvider_11;
		if (!L_8)
		{
			goto IL_007a;
		}
	}
	{
		// m_BindingsGroup.AddBinding(m_MultiPokeStateDataProvider.GetPokeStateDataForTarget(transform).Subscribe(OnPokeStateDataUpdated));
		BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* L_9 = __this->___m_BindingsGroup_13;
		RuntimeObject* L_10 = __this->___m_MultiPokeStateDataProvider_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker1< RuntimeObject*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(0 /* Unity.XR.CoreUtils.Bindings.Variables.IReadOnlyBindableVariable`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData> UnityEngine.XR.Interaction.Toolkit.Filtering.IMultiPokeStateDataProvider::GetPokeStateDataForTarget(UnityEngine.Transform) */, IMultiPokeStateDataProvider_tD966DFBE873FAF8D39E820B94A6795B4A2EFA73F_il2cpp_TypeInfo_var, L_10, L_11);
		Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8* L_13 = (Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8*)il2cpp_codegen_object_new(Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Action_1__ctor_m51E8C8F6D6AAA447F906F82CBA1114C86E69FF54(L_13, __this, (intptr_t)((void*)XRPokeFollowAffordance_OnPokeStateDataUpdated_m47E524438FBC3D238855A42C176A43355387137F_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker1< RuntimeObject*, Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8* >::Invoke(0 /* Unity.XR.CoreUtils.Bindings.IEventBinding Unity.XR.CoreUtils.Bindings.Variables.IReadOnlyBindableVariable`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>::Subscribe(System.Action`1<T>) */, IReadOnlyBindableVariable_1_tD608177C44612AEF9CD25AEDCA15F1734DD0E073_il2cpp_TypeInfo_var, L_12, L_13);
		NullCheck(L_9);
		BindingsGroup_AddBinding_m18697E73861A1C67DE0674F162B43CCE9E67C89B(L_9, L_14, NULL);
		return;
	}

IL_007a:
	{
		// else if(m_PokeDataProvider != null)
		RuntimeObject* L_15 = __this->___m_PokeDataProvider_10;
		if (!L_15)
		{
			goto IL_00c2;
		}
	}
	{
		// m_BindingsGroup.AddBinding(m_PokeDataProvider.pokeStateData.SubscribeAndUpdate(OnPokeStateDataUpdated));
		BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* L_16 = __this->___m_BindingsGroup_13;
		RuntimeObject* L_17 = __this->___m_PokeDataProvider_10;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Unity.XR.CoreUtils.Bindings.Variables.IReadOnlyBindableVariable`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData> UnityEngine.XR.Interaction.Toolkit.Filtering.IPokeStateDataProvider::get_pokeStateData() */, IPokeStateDataProvider_t14F2B731F2979D1138EB70A11E36F274A23DC91C_il2cpp_TypeInfo_var, L_17);
		Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8* L_19 = (Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8*)il2cpp_codegen_object_new(Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Action_1__ctor_m51E8C8F6D6AAA447F906F82CBA1114C86E69FF54(L_19, __this, (intptr_t)((void*)XRPokeFollowAffordance_OnPokeStateDataUpdated_m47E524438FBC3D238855A42C176A43355387137F_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker1< RuntimeObject*, Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8* >::Invoke(1 /* Unity.XR.CoreUtils.Bindings.IEventBinding Unity.XR.CoreUtils.Bindings.Variables.IReadOnlyBindableVariable`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>::SubscribeAndUpdate(System.Action`1<T>) */, IReadOnlyBindableVariable_1_tD608177C44612AEF9CD25AEDCA15F1734DD0E073_il2cpp_TypeInfo_var, L_18, L_19);
		NullCheck(L_16);
		BindingsGroup_AddBinding_m18697E73861A1C67DE0674F162B43CCE9E67C89B(L_16, L_20, NULL);
		return;
	}

IL_00aa:
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// Debug.LogWarning($"Missing Poke Follow Transform assignment on {this}. Disabling component.", this);
		String_t* L_21;
		L_21 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral675D495E61C139628601D1F560A558803C58CB67, __this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(L_21, __this, NULL);
	}

IL_00c2:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_OnDestroy_mE345311D68D5D9E9877A7384691B230B1B0073FB (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenableVariableAsyncBase_1_Dispose_m7D9825BEBF868FFDC835F08406D9E9AD17F53E32_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* G_B2_0 = NULL;
	Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* G_B1_0 = NULL;
	{
		// m_BindingsGroup.Clear();
		BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* L_0 = __this->___m_BindingsGroup_13;
		NullCheck(L_0);
		BindingsGroup_Clear_m092668459F10E46245228224D1334DAB089B72E3(L_0, NULL);
		// m_TransformTweenableVariable?.Dispose();
		Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* L_1 = __this->___m_TransformTweenableVariable_12;
		Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		NullCheck(G_B2_0);
		TweenableVariableAsyncBase_1_Dispose_m7D9825BEBF868FFDC835F08406D9E9AD17F53E32(G_B2_0, TweenableVariableAsyncBase_1_Dispose_m7D9825BEBF868FFDC835F08406D9E9AD17F53E32_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_LateUpdate_m4C59B8156DE2AF9D63A61A9E523A059A41DD9099 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenableVariableBase_1_HandleTween_m61752C0D7316DD05AB1C8E10319F47902D4CDCD9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* G_B4_0 = NULL;
	Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* G_B5_1 = NULL;
	{
		// if (m_IsFirstFrame)
		bool L_0 = __this->___m_IsFirstFrame_15;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// m_TransformTweenableVariable.HandleTween(1f);
		Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* L_1 = __this->___m_TransformTweenableVariable_12;
		NullCheck(L_1);
		TweenableVariableBase_1_HandleTween_m61752C0D7316DD05AB1C8E10319F47902D4CDCD9(L_1, (1.0f), TweenableVariableBase_1_HandleTween_m61752C0D7316DD05AB1C8E10319F47902D4CDCD9_RuntimeMethod_var);
		// m_IsFirstFrame = false;
		__this->___m_IsFirstFrame_15 = (bool)0;
		// return;
		return;
	}

IL_0020:
	{
		// m_TransformTweenableVariable.HandleTween(m_SmoothingSpeed > 0f ? Time.deltaTime * m_SmoothingSpeed : 1f);
		Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* L_2 = __this->___m_TransformTweenableVariable_12;
		float L_3 = __this->___m_SmoothingSpeed_5;
		G_B3_0 = L_2;
		if ((((float)L_3) > ((float)(0.0f))))
		{
			G_B4_0 = L_2;
			goto IL_003a;
		}
	}
	{
		G_B5_0 = (1.0f);
		G_B5_1 = G_B3_0;
		goto IL_0046;
	}

IL_003a:
	{
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_5 = __this->___m_SmoothingSpeed_5;
		G_B5_0 = ((float)il2cpp_codegen_multiply(L_4, L_5));
		G_B5_1 = G_B4_0;
	}

IL_0046:
	{
		NullCheck(G_B5_1);
		TweenableVariableBase_1_HandleTween_m61752C0D7316DD05AB1C8E10319F47902D4CDCD9(G_B5_1, G_B5_0, TweenableVariableBase_1_HandleTween_m61752C0D7316DD05AB1C8E10319F47902D4CDCD9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::OnTransformTweenableVariableUpdated(Unity.Mathematics.float3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_OnTransformTweenableVariableUpdated_m45F75BBA331A940327AD949A7C0939F24F6B57B2 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___position0, const RuntimeMethod* method) 
{
	{
		// m_PokeFollowTransform.localPosition = position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_PokeFollowTransform_4;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1 = ___position0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = float3_op_Implicit_m9CC301DFD67EEFAA15CA05E91913E862B22326F6(L_1, NULL);
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::OnPokeStateDataUpdated(UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_OnPokeStateDataUpdated_m47E524438FBC3D238855A42C176A43355387137F (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032 ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenableVariableBase_1_set_target_m3127A21F0C2EF40FA4604D603803BA53DE604337_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B5_0 = 0;
	{
		// var pokeTarget = data.target;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = PokeStateData_get_target_m464672F352B73F0010B9829CA5C692505783091C_inline((&___data0), NULL);
		V_0 = L_0;
		// var applyFollow = m_ApplyIfChildIsTarget
		//     ? pokeTarget != null && pokeTarget.IsChildOf(transform)
		//     : pokeTarget == transform;
		bool L_1 = __this->___m_ApplyIfChildIsTarget_7;
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, L_3, NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0036;
	}

IL_001e:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		bool L_9;
		L_9 = Transform_IsChildOf_mFE071BE1E775E825401FE0A9B9BE49E39D256CEA(L_7, L_8, NULL);
		G_B5_0 = ((int32_t)(L_9));
		goto IL_0036;
	}

IL_0035:
	{
		G_B5_0 = 0;
	}

IL_0036:
	{
		// if (applyFollow)
		if (!G_B5_0)
		{
			goto IL_0083;
		}
	}
	{
		// var targetPosition = pokeTarget.InverseTransformPoint(data.axisAlignedPokeInteractionPoint);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = PokeStateData_get_axisAlignedPokeInteractionPoint_mC3B4E6D1232B8A2E2A98374B3AA9976E29E67D43_inline((&___data0), NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_10, L_11, NULL);
		V_1 = L_12;
		// if (m_ClampToMaxDistance && targetPosition.sqrMagnitude > m_MaxDistance * m_MaxDistance)
		bool L_13 = __this->___m_ClampToMaxDistance_8;
		if (!L_13)
		{
			goto IL_0071;
		}
	}
	{
		float L_14;
		L_14 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_1), NULL);
		float L_15 = __this->___m_MaxDistance_9;
		float L_16 = __this->___m_MaxDistance_9;
		if ((!(((float)L_14) > ((float)((float)il2cpp_codegen_multiply(L_15, L_16))))))
		{
			goto IL_0071;
		}
	}
	{
		// targetPosition = Vector3.ClampMagnitude(targetPosition, m_MaxDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		float L_18 = __this->___m_MaxDistance_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline(L_17, L_18, NULL);
		V_1 = L_19;
	}

IL_0071:
	{
		// m_TransformTweenableVariable.target = targetPosition;
		Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* L_20 = __this->___m_TransformTweenableVariable_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_22;
		L_22 = float3_op_Implicit_mE1831A3AC179B7EB3236F8202EC8DD5CE05376AB(L_21, NULL);
		NullCheck(L_20);
		TweenableVariableBase_1_set_target_m3127A21F0C2EF40FA4604D603803BA53DE604337(L_20, L_22, TweenableVariableBase_1_set_target_m3127A21F0C2EF40FA4604D603803BA53DE604337_RuntimeMethod_var);
		return;
	}

IL_0083:
	{
		// else if (m_ReturnToInitialPosition)
		bool L_23 = __this->___m_ReturnToInitialPosition_6;
		if (!L_23)
		{
			goto IL_00a1;
		}
	}
	{
		// m_TransformTweenableVariable.target = m_InitialPosition;
		Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* L_24 = __this->___m_TransformTweenableVariable_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = __this->___m_InitialPosition_14;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26;
		L_26 = float3_op_Implicit_mE1831A3AC179B7EB3236F8202EC8DD5CE05376AB(L_25, NULL);
		NullCheck(L_24);
		TweenableVariableBase_1_set_target_m3127A21F0C2EF40FA4604D603803BA53DE604337(L_24, L_26, TweenableVariableBase_1_set_target_m3127A21F0C2EF40FA4604D603803BA53DE604337_RuntimeMethod_var);
	}

IL_00a1:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::ResetFollowTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_ResetFollowTransform_m56E4E198D3EBA4057BD93763D169309CF7910E80 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_ClampToMaxDistance || m_PokeFollowTransform == null)
		bool L_0 = __this->___m_ClampToMaxDistance_8;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___m_PokeFollowTransform_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// return;
		return;
	}

IL_0017:
	{
		// m_PokeFollowTransform.localPosition = m_InitialPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_PokeFollowTransform_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___m_InitialPosition_14;
		NullCheck(L_3);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance__ctor_mCBB6E96BA2E8B60AE508F619BFDBC0BAAD5CEBE5 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float m_SmoothingSpeed = 16f;
		__this->___m_SmoothingSpeed_5 = (16.0f);
		// bool m_ReturnToInitialPosition = true;
		__this->___m_ReturnToInitialPosition_6 = (bool)1;
		// bool m_ApplyIfChildIsTarget = true;
		__this->___m_ApplyIfChildIsTarget_7 = (bool)1;
		// readonly Vector3TweenableVariable m_TransformTweenableVariable = new Vector3TweenableVariable();
		Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* L_0 = (Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5*)il2cpp_codegen_object_new(Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Vector3TweenableVariable__ctor_m22723734B74E394A833F2EEA06F910E45A91F042(L_0, NULL);
		__this->___m_TransformTweenableVariable_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TransformTweenableVariable_12), (void*)L_0);
		// readonly BindingsGroup m_BindingsGroup = new BindingsGroup();
		BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* L_1 = (BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A*)il2cpp_codegen_object_new(BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BindingsGroup__ctor_m1EFD3F405050571D3A66F9B95E8FBC296866A716(L_1, NULL);
		__this->___m_BindingsGroup_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_BindingsGroup_13), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* TeleportationMultiAnchorVolume_get_destinationAnchor_m8867AD0C9F209FBEAC8E14A53887547329C4D1E8_inline (TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* __this, const RuntimeMethod* method) 
{
	{
		// public Transform destinationAnchor { get; private set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CdestinationAnchorU3Ek__BackingField_90;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TeleportationMultiAnchorVolume_get_destinationEvaluationProgress_mA00FA8BCF4AC4B9A68AEA8A12B38C90AC35B4021_inline (TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* __this, const RuntimeMethod* method) 
{
	{
		// public float destinationEvaluationProgress { get; private set; }
		float L_0 = __this->___U3CdestinationEvaluationProgressU3Ek__BackingField_89;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TeleportVolumeDestinationSettingsDatumProperty_tDD5453B35B45AEB0427BCD5BE987332B3CD14347* TeleportationMultiAnchorVolume_get_destinationEvaluationSettings_m7173078EC07F832CB26FFA81BDF531C3F6BC0D11_inline (TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* __this, const RuntimeMethod* method) 
{
	{
		// get => m_DestinationEvaluationSettings;
		TeleportVolumeDestinationSettingsDatumProperty_tDD5453B35B45AEB0427BCD5BE987332B3CD14347* L_0 = __this->___m_DestinationEvaluationSettings_88;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TeleportVolumeDestinationSettings_get_pollForDestinationChange_m8B84DAB7771B97C759D574E6BF02CA1A6B79AAD9_inline (TeleportVolumeDestinationSettings_t997F47ECBFA0D750BC9F96D8EF12222BD9F332C2* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PollForDestinationChange;
		bool L_0 = __this->___m_PollForDestinationChange_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* TeleportationMultiAnchorVolume_get_anchorTransforms_m0D5B37776E774893D31FB4BCE7A5159814E352F9_inline (TeleportationMultiAnchorVolume_t98D1407484A7F4510AA049568E4E07D3B93B70D0* __this, const RuntimeMethod* method) 
{
	{
		// public List<Transform> anchorTransforms => m_AnchorTransforms;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = __this->___m_AnchorTransforms_87;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* XRInteractableAffordanceStateProvider_get_interactableSource_m43E4BAA09BD771994E184DD45418EA28916B7FAE_inline (XRInteractableAffordanceStateProvider_tBF33F0A41B1960C8FE2CCAFC6228E07D8A459C98* __this, const RuntimeMethod* method) 
{
	{
		// get => m_InteractableSource;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->___m_InteractableSource_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* XRBaseInteractor_get_hoverEntered_m513A1A0A4F630E37B1C72C0AEAC851EAF9252EE1_inline (XRBaseInteractor_t4AF6FC9A7611B9417B4A43E11704AFF85B4A0FB4* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HoverEntered;
		HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* L_0 = __this->___m_HoverEntered_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* XRBaseInteractor_get_hoverExited_m06044A674CF3046BC7538BBB86A387C03D8AE459_inline (XRBaseInteractor_t4AF6FC9A7611B9417B4A43E11704AFF85B4A0FB4* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HoverExited;
		HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* L_0 = __this->___m_HoverExited_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TeleportationProvider_t3FAF889EFC7631ED0DA49A1E0C4CAD650002A9E5* BaseTeleportationInteractable_get_teleportationProvider_m80FF22AB2B013021B56E36C74FA82EA819222E5D_inline (BaseTeleportationInteractable_t56762CCCEAD36A86FD0B296FBC7CFBC261DEAB71* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TeleportationProvider;
		TeleportationProvider_t3FAF889EFC7631ED0DA49A1E0C4CAD650002A9E5* L_0 = __this->___m_TeleportationProvider_77;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocomotionMediator_tFF0E600A153C909C211466942B7D4C3DA6105AD6* LocomotionProvider_get_mediator_m7ED478A25CC3F307D84C6A1F81ACC26231E94B5D_inline (LocomotionProvider_t359A39ECDB2224E3FF09583CF055A3D19A3557BD* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Mediator;
		LocomotionMediator_tFF0E600A153C909C211466942B7D4C3DA6105AD6* L_0 = __this->___m_Mediator_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* XROrigin_get_Camera_m8959027D616F5BD9AEAE3E41ADEE23BBC2CE3629_inline (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Camera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___m_Camera_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIHoverEnterEvent_t4C957A3405A5D9CB867C5EC446620BB4BA7E7298* NearFarInteractor_get_uiHoverEntered_m65F1C9ACE7F1CB3BB9ED747BADFA954AB92547C3_inline (NearFarInteractor_t43B1C14C2D72CB717E3624B0759E265F5D215E9C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_UIHoverEntered;
		UIHoverEnterEvent_t4C957A3405A5D9CB867C5EC446620BB4BA7E7298* L_0 = __this->___m_UIHoverEntered_130;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIHoverExitEvent_t63E5E9C921AFB8E2CB9CA4D32882DD4F62CD509B* NearFarInteractor_get_uiHoverExited_m3AB20DCF61C075D2138CD150711808D13F0CD5E0_inline (NearFarInteractor_t43B1C14C2D72CB717E3624B0759E265F5D215E9C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_UIHoverExited;
		UIHoverExitEvent_t63E5E9C921AFB8E2CB9CA4D32882DD4F62CD509B* L_0 = __this->___m_UIHoverExited_131;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NearFarInteractor_get_selectionRegion_mAF70B4BAD5B46F12A8EE31F17313A82A7BE93394_inline (NearFarInteractor_t43B1C14C2D72CB717E3624B0759E265F5D215E9C* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyBindableVariable<Region> selectionRegion => m_SelectionRegion;
		BindableEnum_1_tCC6FC0E0347B92BE0D1BAD0F8C7DAD34D8AAE176* L_0 = __this->___m_SelectionRegion_134;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* XRBaseInteractor_get_selectEntered_mC85EF4187B4575CF00CE7E0957DE5D0E11FAA524_inline (XRBaseInteractor_t4AF6FC9A7611B9417B4A43E11704AFF85B4A0FB4* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectEntered;
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0 = __this->___m_SelectEntered_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* XRBaseInteractor_get_selectExited_m680D2E90A7CAA747EB07AAE7427A287E7D49A370_inline (XRBaseInteractor_t4AF6FC9A7611B9417B4A43E11704AFF85B4A0FB4* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectExited;
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_0 = __this->___m_SelectExited_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIHoverEnterEvent_t4C957A3405A5D9CB867C5EC446620BB4BA7E7298* XRRayInteractor_get_uiHoverEntered_m22CB14AC1A11633A125A0EA0EC0099EC1476F03E_inline (XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* __this, const RuntimeMethod* method) 
{
	{
		// get => m_UIHoverEntered;
		UIHoverEnterEvent_t4C957A3405A5D9CB867C5EC446620BB4BA7E7298* L_0 = __this->___m_UIHoverEntered_157;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIHoverExitEvent_t63E5E9C921AFB8E2CB9CA4D32882DD4F62CD509B* XRRayInteractor_get_uiHoverExited_m33429ECD32C826D9FA13A0E87C37B44CD63FDBB1_inline (XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* __this, const RuntimeMethod* method) 
{
	{
		// get => m_UIHoverExited;
		UIHoverExitEvent_t63E5E9C921AFB8E2CB9CA4D32882DD4F62CD509B* L_0 = __this->___m_UIHoverExited_158;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRRayInteractor_get_manipulateAttachTransform_m1B52220691D700AEFFE0B8E8AEDD9BAA15DE960A_inline (XRRayInteractor_tDB7FC857A50F0B25DE4CEC0EE930242BB7380649* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ManipulateAttachTransform;
		bool L_0 = __this->___m_ManipulateAttachTransform_151;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackedDeviceModel_t38B1BA171F5602138D487005E134580213B4DBE8 UIHoverEventArgs_get_deviceModel_m89E4A51B73B17932351940327599EC37D74BCE95_inline (UIHoverEventArgs_tC712F3F829391F25C89B9951234415D4C354DC39* __this, const RuntimeMethod* method) 
{
	{
		// public TrackedDeviceModel deviceModel { get; set; }
		TrackedDeviceModel_t38B1BA171F5602138D487005E134580213B4DBE8 L_0 = __this->___U3CdeviceModelU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackedDeviceModel_get_isScrollable_m2ADDFD1E1BD1F28CDBD07D6970C5325FCD62A505_inline (TrackedDeviceModel_t38B1BA171F5602138D487005E134580213B4DBE8* __this, const RuntimeMethod* method) 
{
	{
		// public bool isScrollable { get; set; }
		bool L_0 = __this->___U3CisScrollableU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ContinuousMoveProvider_set_forwardSource_m16B2571E7A28F8A79802D12165950AD59C9A5490_inline (ContinuousMoveProvider_t1F9AD0924053780B7CF1F5C80D672C5D850C47B9* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ForwardSource = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___m_ForwardSource_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ForwardSource_20), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* ContinuousMoveProvider_get_leftHandMoveInput_m2B7F6358E442942C20D0667A234A29BE0CBAEB8E_inline (ContinuousMoveProvider_t1F9AD0924053780B7CF1F5C80D672C5D850C47B9* __this, const RuntimeMethod* method) 
{
	{
		// get => m_LeftHandMoveInput;
		XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* L_0 = __this->___m_LeftHandMoveInput_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* ContinuousMoveProvider_get_rightHandMoveInput_mAA26C39B1CC43915801850C74CF96888DA4CBB7B_inline (ContinuousMoveProvider_t1F9AD0924053780B7CF1F5C80D672C5D850C47B9* __this, const RuntimeMethod* method) 
{
	{
		// get => m_RightHandMoveInput;
		XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* L_0 = __this->___m_RightHandMoveInput_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* PokeStateData_get_target_m464672F352B73F0010B9829CA5C692505783091C_inline (PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032* __this, const RuntimeMethod* method) 
{
	{
		// public Transform target { get; set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CtargetU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PokeStateData_get_axisAlignedPokeInteractionPoint_mC3B4E6D1232B8A2E2A98374B3AA9976E29E67D43_inline (PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 axisAlignedPokeInteractionPoint { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, float ___maxLength1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___vector0), NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = ___maxLength1;
		float L_3 = ___maxLength1;
		V_1 = (bool)((((float)L_1) > ((float)((float)il2cpp_codegen_multiply(L_2, L_3))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		float L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)L_5));
		V_2 = ((float)L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___vector0;
		float L_8 = L_7.___x_2;
		float L_9 = V_2;
		V_3 = ((float)(L_8/L_9));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___y_3;
		float L_12 = V_2;
		V_4 = ((float)(L_11/L_12));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___vector0;
		float L_14 = L_13.___z_4;
		float L_15 = V_2;
		V_5 = ((float)(L_14/L_15));
		float L_16 = V_3;
		float L_17 = ___maxLength1;
		float L_18 = V_4;
		float L_19 = ___maxLength1;
		float L_20 = V_5;
		float L_21 = ___maxLength1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), ((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)), ((float)il2cpp_codegen_multiply(L_20, L_21)), /*hidden argument*/NULL);
		V_6 = L_22;
		goto IL_0053;
	}

IL_004e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___vector0;
		V_6 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_6;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mA764DCA3CB14CB2CBDF742A163492FF4DA515B63_gshared_inline (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}

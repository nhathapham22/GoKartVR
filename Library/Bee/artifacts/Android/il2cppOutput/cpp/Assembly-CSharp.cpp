#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose>
struct Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter>
struct ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter>
struct ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct HashSet_1_t442C406BB3DAA0091640BF5E45C6E255DCE9BC88;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct HashSet_1_t393CE008A524DA1CCED603B4564BFAB7574A9EDF;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>
struct LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs>
struct LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable>
struct List_1_tAB2FD3FF9900A585A26C6DC2D8EE94D30F2AECCA;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable>
struct List_1_t02510C493B34D49F210C22C40442D863A08509CB;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint>
struct List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// Audio
struct Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// BoostPad
struct BoostPad_tBDFFD0A671EE92D89709BA6711FD7DE95B39542F;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// CollisionAudioControl
struct CollisionAudioControl_tE4324E7CB61462576380CB2E8F1DD11397002AA4;
// ColorChange
struct ColorChange_t4FE34D8D450BF12148F5E87E82E8DF2775E79E4B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Countdown
struct Countdown_t5ED13CAA4900EDB87B032B0C83826D6E4C192129;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameEndOverlay
struct GameEndOverlay_t97D7F31660FF9E820B034605FC51FC41D182DDE6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// HapticController
struct HapticController_tE2052EFD5B04BEAD1FE8AAE8C876F04654EEE995;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractable
struct IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable
struct IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735;
// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter
struct IXRTargetFilter_t51750E0C671ECA90F38CC75BCD395285E61D2778;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// KartController
struct KartController_tC7FC623824537D9DA9B794F403D2F688D0757423;
// KartEngineAudio
struct KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MenuManager
struct MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MuscAudioSettingsToggle
struct MuscAudioSettingsToggle_t9959C6F231B1E38A1B2BBF1D127448A5EA9C46DB;
// MusicAudioSettingsToggle
struct MusicAudioSettingsToggle_t6F4293A2E9AD82DCDA48163953FEC6727E0C0F73;
// MusicControl
struct MusicControl_t7A811B941D113BF9D1C4E98EC9842C9A727AA4E6;
// MusicScript
struct MusicScript_tEEB0A217279048BA96B8957DFBDE7FEDD5079265;
// MusicToggle
struct MusicToggle_tBC0DADF4CF2CDD4252C10F9A099EC8B7EBDCADF6;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ObstacleToggleAudio
struct ObstacleToggleAudio_tBA0EBC11DD0C2358493ACBCF0E4C1E4E0E70225C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// ProxAudio
struct ProxAudio_tB3CB2E943E9F5B4720ED11A55C2BAC8D30C6AD57;
// RaceResultDisplay
struct RaceResultDisplay_tC801B506E3EA61B7CF254E9BC501C7692E14D3FF;
// RacerScript
struct RacerScript_t4419949F9EC2F3921F38209894DC692CA92F0D50;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// SliderValue
struct SliderValue_t634BB82D3EFE8B00A33BCE9927CBB2B5F70C9AA8;
// SoundSettings
struct SoundSettings_tF96E8E4062A24B2D0FADA9F1951DA818A4CE5DF9;
// SpeechAudioSettingsToggle
struct SpeechAudioSettingsToggle_t72FFCC656BFAC403C87F9A90A6165F8B9C1D1092;
// SpeechControl
struct SpeechControl_t5063815B7C25F2B7E4D540B195AC751E02DB8914;
// SpeechScript
struct SpeechScript_t0379C9399679C9AF27CE3BA40CFF844239F89AC0;
// SpeechToggle
struct SpeechToggle_t84130DAB3085AEA55832B2D8DD85A6E4A72E4FCC;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// WrongWay
struct WrongWay_t0D977F92437C5CEE273E9EF2CB0A3A8618AFE9FC;
// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6;
// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter
struct XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F;
// UnityEngine.XR.Interaction.Toolkit.XRControllerState
struct XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD;
// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent
struct XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2;
// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76;
// UnityEngine.XR.Interaction.Toolkit.UI.XRUIInputModule
struct XRUIInputModule_tA641266A2621C1465F3C5433D747428A4CDA72F0;
// inGameMenu
struct inGameMenu_tE2A29E971086F67AA1C8727447DAA11EE88BDCA4;
// materialchange
struct materialchange_t9F61BC955D7584547B471FA988094044512FD06E;
// obstacletoggle
struct obstacletoggle_t3B29415C052DC4B0744DD8DCF0449F5618D5B07F;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// Countdown/<CountdownCoroutine>d__6
struct U3CCountdownCoroutineU3Ed__6_t8CF132CBCCB1B0136DBF16764BE92C21CFF128A3;
// KartController/<DisableTurboBoostAfterDelay>d__31
struct U3CDisableTurboBoostAfterDelayU3Ed__31_t94A547D8E7ACE48755B0FD9C3C62245F113D8839;
// KartController/<EnableMovementAfterDelay>d__28
struct U3CEnableMovementAfterDelayU3Ed__28_tA7220F6444B49FD3DEA5748294DCE5664E1102A4;
// KartController/<EnableTurboCooldownAfterDelay>d__32
struct U3CEnableTurboCooldownAfterDelayU3Ed__32_t3B2F8A4F7E4B0EEA300C1332C0B42935E47ECD45;
// KartEngineAudio/<FadeInIdle2Volume>d__18
struct U3CFadeInIdle2VolumeU3Ed__18_t6A3EE5BDD5543078646783DE4B6CE4F165EA121A;
// KartEngineAudio/<FadeOutIdle2Volume>d__19
struct U3CFadeOutIdle2VolumeU3Ed__19_t72048F7F9F93FFFA07CC33E223C279AB4C62704C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// MuscAudioSettingsToggle/<ChangeMuteStatus>d__7
struct U3CChangeMuteStatusU3Ed__7_t8BF0B4F05EBE5B77D5CFEB62C8B8E5D840C7ED90;
// ObstacleToggleAudio/<ChangeStatus>d__7
struct U3CChangeStatusU3Ed__7_tBD82D746E034EB3A4D111203BC8CB70667B173E4;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// SpeechAudioSettingsToggle/<ChangeMuteStatus>d__6
struct U3CChangeMuteStatusU3Ed__6_tBC12C85E28EC6CDC2D8F10773B490F996E4B8013;
// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/RaycastHitComparer
struct RaycastHitComparer_tC59C36D577B7426F5EE8E3AE65B988F953757E9D;

IL2CPP_EXTERN_C RuntimeClass* Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CChangeMuteStatusU3Ed__6_tBC12C85E28EC6CDC2D8F10773B490F996E4B8013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CChangeMuteStatusU3Ed__7_t8BF0B4F05EBE5B77D5CFEB62C8B8E5D840C7ED90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CChangeStatusU3Ed__7_tBD82D746E034EB3A4D111203BC8CB70667B173E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCountdownCoroutineU3Ed__6_t8CF132CBCCB1B0136DBF16764BE92C21CFF128A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDisableTurboBoostAfterDelayU3Ed__31_t94A547D8E7ACE48755B0FD9C3C62245F113D8839_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEnableMovementAfterDelayU3Ed__28_tA7220F6444B49FD3DEA5748294DCE5664E1102A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEnableTurboCooldownAfterDelayU3Ed__32_t3B2F8A4F7E4B0EEA300C1332C0B42935E47ECD45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeInIdle2VolumeU3Ed__18_t6A3EE5BDD5543078646783DE4B6CE4F165EA121A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeOutIdle2VolumeU3Ed__19_t72048F7F9F93FFFA07CC33E223C279AB4C62704C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0AC447D4BCDFC1A5E8C4AA1BBA95326FCC92BEC9;
IL2CPP_EXTERN_C String_t* _stringLiteral1A4D3AA769B0C42987ECC664D15D995161A345F8;
IL2CPP_EXTERN_C String_t* _stringLiteral1BAEE56D6871F5FA35FE0FF6A81FC506155E0CDB;
IL2CPP_EXTERN_C String_t* _stringLiteral1D990510D154979B7426FBE2F254B39A1907A056;
IL2CPP_EXTERN_C String_t* _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE;
IL2CPP_EXTERN_C String_t* _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2;
IL2CPP_EXTERN_C String_t* _stringLiteral23FD7E6AA6D494BD8A2E7FE0CAFA87497A25B1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748;
IL2CPP_EXTERN_C String_t* _stringLiteral25D1388FEC241BDE86FA5E308075CE0F474C82DE;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2D8EB490215320D24D2C7DC45C415EA2F7EA22E3;
IL2CPP_EXTERN_C String_t* _stringLiteral2FDFA88503F50E300AE45098B09A76361E8EBFA9;
IL2CPP_EXTERN_C String_t* _stringLiteral32862D354F22551B8383F1877BB378A66A06549A;
IL2CPP_EXTERN_C String_t* _stringLiteral35055F67F0394563019772C9A74E996E0C65DB3D;
IL2CPP_EXTERN_C String_t* _stringLiteral353891B2ED86A3F78B9C5E69012B5A9ED3406AAF;
IL2CPP_EXTERN_C String_t* _stringLiteral375520D15E5666B97D26C9FD05821F1650B2C60B;
IL2CPP_EXTERN_C String_t* _stringLiteral3B3C9B272FDF645AFAA44EA0F880D990DC940576;
IL2CPP_EXTERN_C String_t* _stringLiteral3BB14169AF50C84BC740DD088E91274F831F6C02;
IL2CPP_EXTERN_C String_t* _stringLiteral3C74E54EA8CD2FD6C499D702D868922635689D1C;
IL2CPP_EXTERN_C String_t* _stringLiteral3D7A380F57A3C3781379B5934E57D022B32CE3C1;
IL2CPP_EXTERN_C String_t* _stringLiteral43FDFD729FD0D77F97F5EAB2065180AF69EFCDFC;
IL2CPP_EXTERN_C String_t* _stringLiteral4D29A8AD2EFCC6AC23C7DD46B26DA62C660E8A37;
IL2CPP_EXTERN_C String_t* _stringLiteral57BCA31F16691BBED219CEAED25B6E566883AC72;
IL2CPP_EXTERN_C String_t* _stringLiteral5A849E254C636D1660D078F52565623DDD57966A;
IL2CPP_EXTERN_C String_t* _stringLiteral6304D939B5E7316D4FC90ABDBA87526905C62FAD;
IL2CPP_EXTERN_C String_t* _stringLiteral6BFD1DBEE76067C7A3266DF23AC53B499CAE13C1;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteral70933958120FAC92DE3FA30E8B268B6610F147CD;
IL2CPP_EXTERN_C String_t* _stringLiteral726B9AED97EC52BBF20E87CB205EB35039A6E204;
IL2CPP_EXTERN_C String_t* _stringLiteral760865C55F22E06913EE529E43E0A4EC6D4C2957;
IL2CPP_EXTERN_C String_t* _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287;
IL2CPP_EXTERN_C String_t* _stringLiteral784B6616C757B5A2E1845341468BCCBF16F7EEFC;
IL2CPP_EXTERN_C String_t* _stringLiteral78D958E853E9A979645D55A90BE243CCAC59E1B6;
IL2CPP_EXTERN_C String_t* _stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC;
IL2CPP_EXTERN_C String_t* _stringLiteral7F54B3AA75720888F63FABC5B561F62BF5869916;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral87A19D9D9BEAF266AFAEDA65E6984669105FAC93;
IL2CPP_EXTERN_C String_t* _stringLiteral8BD93A9B6A71E73DB6D08498DC47742AA6EBAB1F;
IL2CPP_EXTERN_C String_t* _stringLiteral9754B0BB16C9F1175FA015CB1DA2FB319D8D6B28;
IL2CPP_EXTERN_C String_t* _stringLiteral99581A5687F41CEEB66F59D92090CDC6687D4529;
IL2CPP_EXTERN_C String_t* _stringLiteral9AB696A37604D665DC97134DBEE44CFE70451B1A;
IL2CPP_EXTERN_C String_t* _stringLiteral9C111E1EF7622B381034EA303CD2B8465119C421;
IL2CPP_EXTERN_C String_t* _stringLiteral9EAA5D3B540EDAAC8DA7917FA6B7B3D852C64587;
IL2CPP_EXTERN_C String_t* _stringLiteralA1A878BFFC5EAA40AFC915E8BB359CEADBED734E;
IL2CPP_EXTERN_C String_t* _stringLiteralA242E0EF74FB38B86DC60AEF5C5EF280284E5543;
IL2CPP_EXTERN_C String_t* _stringLiteralA48288971A4ACA3F589C6A926C5B32D8133E5EB7;
IL2CPP_EXTERN_C String_t* _stringLiteralA72A6D98DB3099AD5FB556ACCC64996C46216EDD;
IL2CPP_EXTERN_C String_t* _stringLiteralA8D4EC931E2C9BF198F0BDF104985E7020D7327C;
IL2CPP_EXTERN_C String_t* _stringLiteralAF344379D2073374A8BD9DDC14B2158CD228CF42;
IL2CPP_EXTERN_C String_t* _stringLiteralB02EB758D6BC1BE3C84E663264539CC282CB8283;
IL2CPP_EXTERN_C String_t* _stringLiteralB5793A0486CA0270FF49AD51E2176B4E15A6F700;
IL2CPP_EXTERN_C String_t* _stringLiteralBE7F3283AB38C04A948A8B5958011B75418A94DC;
IL2CPP_EXTERN_C String_t* _stringLiteralBFC46C74E19CC5E32FCCE7975B2A3FF940AA5D6F;
IL2CPP_EXTERN_C String_t* _stringLiteralBFC95FF421C97E8993C552BB3C87315D70CE3E3F;
IL2CPP_EXTERN_C String_t* _stringLiteralC4DC82DD22CE5006E713D328EEF77553293F9906;
IL2CPP_EXTERN_C String_t* _stringLiteralCE0AB031D54D343290E5ED4B5D59DD5F9DB84DED;
IL2CPP_EXTERN_C String_t* _stringLiteralD4D13C29F7C7E7A94282996234457ADFD7DB6206;
IL2CPP_EXTERN_C String_t* _stringLiteralD7C67FA7AB1AA11DB00E435412ED77B978CB932A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA8CBBE64EBDC47E61D65CA8C0A6FAF8052B3558;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
IL2CPP_EXTERN_C String_t* _stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralF46C5C24530AD91ECA8AA60CF0B75CE19FC75EFE;
IL2CPP_EXTERN_C String_t* _stringLiteralF88654428863D4AFEF30DEFF3E71D791EF1A2E9A;
IL2CPP_EXTERN_C String_t* _stringLiteralFC9972A6536A73074BEE8654D068F8820228545B;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisKartController_tC7FC623824537D9DA9B794F403D2F688D0757423_m07A06D55357F17C0E11D72B113002D1CADC2BD38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MuscAudioSettingsToggle_ToggleMusicAudio_m8D2750205CB687A6245CC7DB115BDA246617E711_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MusicAudioSettingsToggle_ToggleMusicAudio_mBD5FE142FCB66AD8F700EC9B76983D08D4A34BFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MusicToggle_OnSliderValueChanged_m6382739409D6A10DDDDC58E54401A3240666FC7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObstacleToggleAudio_ToggleObstacleState_mAA68B8CDB88927B5F65D70EBFF76C7F10C16CC7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechAudioSettingsToggle_ToggleSpeechAudio_m830AA1529E8E5D3517D900421A2BCDD76830BB44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechToggle_OnSliderValueChanged_m393D6CD8A4D1329D8C94824ADDE7AC1B29E8CB2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CChangeMuteStatusU3Ed__6_System_Collections_IEnumerator_Reset_m7A49E209DEA664A4FF0D57BC324674AD73A98FDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CChangeMuteStatusU3Ed__7_System_Collections_IEnumerator_Reset_mBB725BE0D370C573F7D3323E76C2FBB3B5E2680D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CChangeStatusU3Ed__7_System_Collections_IEnumerator_Reset_m133054CC7C04C55518E58635276BE03E9D9EC794_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCountdownCoroutineU3Ed__6_System_Collections_IEnumerator_Reset_m869FDF707B5BCA4FD912845124ABBF54B540C640_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDisableTurboBoostAfterDelayU3Ed__31_System_Collections_IEnumerator_Reset_mC343C12D9D889F044E25A2E7268FF6A44FDFF116_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEnableMovementAfterDelayU3Ed__28_System_Collections_IEnumerator_Reset_mC0DD7115B09F6DB33309C5D2C98DE10F0FE8CE8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEnableTurboCooldownAfterDelayU3Ed__32_System_Collections_IEnumerator_Reset_m170EF7F48E71CA324C7F71F7FC6B7100C7A1F031_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeInIdle2VolumeU3Ed__18_System_Collections_IEnumerator_Reset_m037CAE9EA6B6BA24CD76447BAD7FB7E2B66BDE47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeOutIdle2VolumeU3Ed__19_System_Collections_IEnumerator_Reset_m1170F7F42D8385FEAF7C015A9D0485F87BD3DCD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* obstacletoggle_OnSliderValueChanged_m1BED84106D21F2E8E237406D5576F694EC6A1213_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Countdown/<CountdownCoroutine>d__6
struct U3CCountdownCoroutineU3Ed__6_t8CF132CBCCB1B0136DBF16764BE92C21CFF128A3  : public RuntimeObject
{
	// System.Int32 Countdown/<CountdownCoroutine>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Countdown/<CountdownCoroutine>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Countdown Countdown/<CountdownCoroutine>d__6::<>4__this
	Countdown_t5ED13CAA4900EDB87B032B0C83826D6E4C192129* ___U3CU3E4__this_2;
};

// KartController/<DisableTurboBoostAfterDelay>d__31
struct U3CDisableTurboBoostAfterDelayU3Ed__31_t94A547D8E7ACE48755B0FD9C3C62245F113D8839  : public RuntimeObject
{
	// System.Int32 KartController/<DisableTurboBoostAfterDelay>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object KartController/<DisableTurboBoostAfterDelay>d__31::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// KartController KartController/<DisableTurboBoostAfterDelay>d__31::<>4__this
	KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* ___U3CU3E4__this_2;
};

// KartController/<EnableMovementAfterDelay>d__28
struct U3CEnableMovementAfterDelayU3Ed__28_tA7220F6444B49FD3DEA5748294DCE5664E1102A4  : public RuntimeObject
{
	// System.Int32 KartController/<EnableMovementAfterDelay>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object KartController/<EnableMovementAfterDelay>d__28::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// KartController KartController/<EnableMovementAfterDelay>d__28::<>4__this
	KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* ___U3CU3E4__this_2;
};

// KartController/<EnableTurboCooldownAfterDelay>d__32
struct U3CEnableTurboCooldownAfterDelayU3Ed__32_t3B2F8A4F7E4B0EEA300C1332C0B42935E47ECD45  : public RuntimeObject
{
	// System.Int32 KartController/<EnableTurboCooldownAfterDelay>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object KartController/<EnableTurboCooldownAfterDelay>d__32::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// KartController KartController/<EnableTurboCooldownAfterDelay>d__32::<>4__this
	KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* ___U3CU3E4__this_2;
};

// KartEngineAudio/<FadeInIdle2Volume>d__18
struct U3CFadeInIdle2VolumeU3Ed__18_t6A3EE5BDD5543078646783DE4B6CE4F165EA121A  : public RuntimeObject
{
	// System.Int32 KartEngineAudio/<FadeInIdle2Volume>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object KartEngineAudio/<FadeInIdle2Volume>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// KartEngineAudio KartEngineAudio/<FadeInIdle2Volume>d__18::<>4__this
	KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* ___U3CU3E4__this_2;
	// System.Single KartEngineAudio/<FadeInIdle2Volume>d__18::<timer>5__2
	float ___U3CtimerU3E5__2_3;
};

// KartEngineAudio/<FadeOutIdle2Volume>d__19
struct U3CFadeOutIdle2VolumeU3Ed__19_t72048F7F9F93FFFA07CC33E223C279AB4C62704C  : public RuntimeObject
{
	// System.Int32 KartEngineAudio/<FadeOutIdle2Volume>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object KartEngineAudio/<FadeOutIdle2Volume>d__19::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// KartEngineAudio KartEngineAudio/<FadeOutIdle2Volume>d__19::<>4__this
	KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* ___U3CU3E4__this_2;
	// System.Single KartEngineAudio/<FadeOutIdle2Volume>d__19::<timer>5__2
	float ___U3CtimerU3E5__2_3;
	// System.Single KartEngineAudio/<FadeOutIdle2Volume>d__19::<originalVolume>5__3
	float ___U3CoriginalVolumeU3E5__3_4;
};

// MuscAudioSettingsToggle/<ChangeMuteStatus>d__7
struct U3CChangeMuteStatusU3Ed__7_t8BF0B4F05EBE5B77D5CFEB62C8B8E5D840C7ED90  : public RuntimeObject
{
	// System.Int32 MuscAudioSettingsToggle/<ChangeMuteStatus>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MuscAudioSettingsToggle/<ChangeMuteStatus>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single MuscAudioSettingsToggle/<ChangeMuteStatus>d__7::value
	float ___value_2;
};

// ObstacleToggleAudio/<ChangeStatus>d__7
struct U3CChangeStatusU3Ed__7_tBD82D746E034EB3A4D111203BC8CB70667B173E4  : public RuntimeObject
{
	// System.Int32 ObstacleToggleAudio/<ChangeStatus>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ObstacleToggleAudio/<ChangeStatus>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single ObstacleToggleAudio/<ChangeStatus>d__7::value
	float ___value_2;
};

// SpeechAudioSettingsToggle/<ChangeMuteStatus>d__6
struct U3CChangeMuteStatusU3Ed__6_tBC12C85E28EC6CDC2D8F10773B490F996E4B8013  : public RuntimeObject
{
	// System.Int32 SpeechAudioSettingsToggle/<ChangeMuteStatus>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SpeechAudioSettingsToggle/<ChangeMuteStatus>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single SpeechAudioSettingsToggle/<ChangeMuteStatus>d__6::value
	float ___value_2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
struct InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 
{
	// System.UInt32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Bits
	uint32_t ___m_Bits_0;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Mask
	int32_t ___m_Mask_1;
};

// UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB 
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Value
	float ___m_Value_0;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Active
	bool ___m_Active_1;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_ActivatedThisFrame
	bool ___m_ActivatedThisFrame_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_DeactivatedThisFrame
	bool ___m_DeactivatedThisFrame_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_pinvoke
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_com
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.PhysicsScene
struct PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE 
{
	// System.Int32 UnityEngine.PhysicsScene::m_Handle
	int32_t ___m_Handle_0;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Audio
struct Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource Audio::mainMenuMusic
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___mainMenuMusic_5;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BoostPad
struct BoostPad_tBDFFD0A671EE92D89709BA6711FD7DE95B39542F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// CollisionAudioControl
struct CollisionAudioControl_tE4324E7CB61462576380CB2E8F1DD11397002AA4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip CollisionAudioControl::defaultClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___defaultClip_4;
	// UnityEngine.AudioClip CollisionAudioControl::obstacleClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___obstacleClip_5;
	// UnityEngine.AudioClip CollisionAudioControl::wallClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___wallClip_6;
	// UnityEngine.AudioClip CollisionAudioControl::rumbleStripClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___rumbleStripClip_7;
	// UnityEngine.AudioClip CollisionAudioControl::boostPad
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___boostPad_8;
	// UnityEngine.AudioSource CollisionAudioControl::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_9;
};

// ColorChange
struct ColorChange_t4FE34D8D450BF12148F5E87E82E8DF2775E79E4B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text ColorChange::t
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___t_4;
};

// Countdown
struct Countdown_t5ED13CAA4900EDB87B032B0C83826D6E4C192129  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Countdown::countDown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___countDown_4;
	// UnityEngine.AudioSource Countdown::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_5;
	// UnityEngine.AudioClip[] Countdown::countdownSounds
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___countdownSounds_6;
	// System.Single Countdown::countdownDuration
	float ___countdownDuration_7;
	// System.Boolean Countdown::startGameOnCountdownEnd
	bool ___startGameOnCountdownEnd_8;
};

// GameEndOverlay
struct GameEndOverlay_t97D7F31660FF9E820B034605FC51FC41D182DDE6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GameEndOverlay::gameEndTimeDisplay
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameEndTimeDisplay_4;
	// UnityEngine.AudioSource GameEndOverlay::gameEndAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___gameEndAudioSource_5;
	// UnityEngine.AudioClip GameEndOverlay::gameEndAudio
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___gameEndAudio_6;
	// System.Single GameEndOverlay::laptime
	float ___laptime_7;
	// System.Single GameEndOverlay::besttime
	float ___besttime_8;
	// System.Single GameEndOverlay::totalTime
	float ___totalTime_9;
	// System.Int32 GameEndOverlay::laps
	int32_t ___laps_10;
	// System.Int32 GameEndOverlay::checkpoint1Counter
	int32_t ___checkpoint1Counter_11;
	// System.Int32 GameEndOverlay::checkpoint2Counter
	int32_t ___checkpoint2Counter_12;
	// System.Boolean GameEndOverlay::startTimer
	bool ___startTimer_13;
	// System.Int32 GameEndOverlay::finishedRace
	int32_t ___finishedRace_14;
	// System.Int32 GameEndOverlay::lapCount
	int32_t ___lapCount_15;
	// UnityEngine.UI.Text GameEndOverlay::Ltime
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Ltime_16;
	// UnityEngine.UI.Text GameEndOverlay::Btime
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Btime_17;
	// UnityEngine.UI.Text GameEndOverlay::LapsText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___LapsText_18;
	// UnityEngine.UI.Text GameEndOverlay::Ttime
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Ttime_19;
	// System.Int32 GameEndOverlay::checkpointCount
	int32_t ___checkpointCount_20;
	// System.Boolean GameEndOverlay::checkpoint1
	bool ___checkpoint1_21;
	// System.Boolean GameEndOverlay::checkpoint2
	bool ___checkpoint2_22;
	// System.Boolean GameEndOverlay::checkpoint3
	bool ___checkpoint3_23;
	// System.Boolean GameEndOverlay::checkpoint4
	bool ___checkpoint4_24;
	// System.Boolean GameEndOverlay::checkpoint5
	bool ___checkpoint5_25;
	// System.Boolean GameEndOverlay::checkpoint6
	bool ___checkpoint6_26;
	// System.Boolean GameEndOverlay::checkpoint7
	bool ___checkpoint7_27;
	// System.Boolean GameEndOverlay::checkpoint8
	bool ___checkpoint8_28;
	// System.Boolean GameEndOverlay::checkpoint9
	bool ___checkpoint9_29;
	// System.Boolean GameEndOverlay::checkpoint10
	bool ___checkpoint10_30;
	// System.Boolean GameEndOverlay::checkpoint11
	bool ___checkpoint11_31;
	// System.Boolean GameEndOverlay::canTrigger
	bool ___canTrigger_32;
	// System.Boolean GameEndOverlay::raceFinished
	bool ___raceFinished_33;
	// System.Int32 GameEndOverlay::requiredLaps
	int32_t ___requiredLaps_34;
};

// HapticController
struct HapticController_tE2052EFD5B04BEAD1FE8AAE8C876F04654EEE995  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController HapticController::leftController
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___leftController_4;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController HapticController::rightController
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___rightController_5;
	// System.Single HapticController::defaultAmplitude
	float ___defaultAmplitude_6;
	// System.Single HapticController::defaultDuration
	float ___defaultDuration_7;
};

// KartController
struct KartController_tC7FC623824537D9DA9B794F403D2F688D0757423  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single KartController::speed
	float ___speed_4;
	// System.Single KartController::turnSpeed
	float ___turnSpeed_5;
	// System.Single KartController::turboBoost
	float ___turboBoost_6;
	// System.Boolean KartController::isTurboBoosting
	bool ___isTurboBoosting_7;
	// System.Single KartController::turboDuration
	float ___turboDuration_8;
	// System.Single KartController::turboCooldown
	float ___turboCooldown_9;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController KartController::leftController
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___leftController_10;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController KartController::rightController
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___rightController_11;
	// System.Single KartController::defaultAmplitude
	float ___defaultAmplitude_12;
	// System.Single KartController::defaultDuration
	float ___defaultDuration_13;
	// UnityEngine.AudioSource KartController::boostReady
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___boostReady_14;
	// UnityEngine.AudioSource KartController::gameMusic
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___gameMusic_15;
	// UnityEngine.AudioSource KartController::boostPadAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___boostPadAudio_16;
	// UnityEngine.AudioSource KartController::startingAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___startingAudio_17;
	// UnityEngine.Rigidbody KartController::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_18;
	// System.Boolean KartController::isBoostPadSoundPlaying
	bool ___isBoostPadSoundPlaying_19;
	// System.Boolean KartController::canMove
	bool ___canMove_20;
	// System.Boolean KartController::raceOver
	bool ___raceOver_21;
	// System.Int32 KartController::lapCount
	int32_t ___lapCount_22;
	// UnityEngine.GameObject KartController::TurboIndicatorRed
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TurboIndicatorRed_23;
	// UnityEngine.GameObject KartController::TurboIndicatorGreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TurboIndicatorGreen_24;
	// UnityEngine.Coroutine KartController::turboCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___turboCoroutine_25;
	// UnityEngine.UI.Text KartController::three
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___three_26;
	// UnityEngine.UI.Text KartController::two
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___two_27;
	// UnityEngine.UI.Text KartController::one
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___one_28;
	// UnityEngine.UI.Text KartController::go
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___go_29;
};

// KartEngineAudio
struct KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource KartEngineAudio::gokartIdleAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___gokartIdleAudio_4;
	// UnityEngine.AudioSource KartEngineAudio::gokartIdle2Audio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___gokartIdle2Audio_5;
	// UnityEngine.AudioSource KartEngineAudio::turboBoostAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___turboBoostAudio_6;
	// System.Single KartEngineAudio::fadeDuration
	float ___fadeDuration_7;
	// System.Boolean KartEngineAudio::isMoving
	bool ___isMoving_8;
	// System.Boolean KartEngineAudio::isForwardPressed
	bool ___isForwardPressed_9;
	// System.Boolean KartEngineAudio::isSpacePressed
	bool ___isSpacePressed_10;
	// System.Single KartEngineAudio::idle2Volume
	float ___idle2Volume_11;
	// System.Single KartEngineAudio::turboBoostVolume
	float ___turboBoostVolume_12;
	// System.Single KartEngineAudio::fadeTimer
	float ___fadeTimer_13;
	// UnityEngine.Rigidbody KartEngineAudio::kartRigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___kartRigidbody_14;
	// System.Single KartEngineAudio::minPitch
	float ___minPitch_15;
	// System.Single KartEngineAudio::maxPitch
	float ___maxPitch_16;
	// System.Single KartEngineAudio::minSpeed
	float ___minSpeed_17;
	// System.Single KartEngineAudio::maxSpeed
	float ___maxSpeed_18;
	// System.Single KartEngineAudio::speedToPitchRatio
	float ___speedToPitchRatio_19;
};

// MenuManager
struct MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 MenuManager::menuoption
	int32_t ___menuoption_4;
	// UnityEngine.GameObject MenuManager::GameMusic
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GameMusic_5;
	// UnityEngine.GameObject MenuManager::GameFinishMusic
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GameFinishMusic_6;
	// UnityEngine.GameObject MenuManager::MainMenuMusic
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MainMenuMusic_7;
};

// MuscAudioSettingsToggle
struct MuscAudioSettingsToggle_t9959C6F231B1E38A1B2BBF1D127448A5EA9C46DB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider MuscAudioSettingsToggle::musicAudioSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___musicAudioSlider_4;
	// UnityEngine.AudioSource MuscAudioSettingsToggle::audioSourceoff
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSourceoff_5;
	// UnityEngine.AudioSource MuscAudioSettingsToggle::audioSourceon
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSourceon_6;
};

// MusicAudioSettingsToggle
struct MusicAudioSettingsToggle_t6F4293A2E9AD82DCDA48163953FEC6727E0C0F73  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider MusicAudioSettingsToggle::musicAudioSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___musicAudioSlider_4;
	// UnityEngine.AudioSource MusicAudioSettingsToggle::audioSourceoff
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSourceoff_5;
	// System.String MusicAudioSettingsToggle::toggle
	String_t* ___toggle_6;
};

// MusicControl
struct MusicControl_t7A811B941D113BF9D1C4E98EC9842C9A727AA4E6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource MusicControl::musicAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___musicAudio_4;
	// System.Boolean MusicControl::isMusicMuted
	bool ___isMusicMuted_5;
};

// MusicScript
struct MusicScript_tEEB0A217279048BA96B8957DFBDE7FEDD5079265  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single MusicScript::mastervolume
	float ___mastervolume_4;
	// UnityEngine.UI.Slider MusicScript::musicVolumeSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___musicVolumeSlider_5;
	// System.String MusicScript::musicSliderKey
	String_t* ___musicSliderKey_6;
	// System.Single MusicScript::defaultMusicVolume
	float ___defaultMusicVolume_7;
};

// MusicToggle
struct MusicToggle_tBC0DADF4CF2CDD4252C10F9A099EC8B7EBDCADF6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource MusicToggle::audioSourceon
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSourceon_4;
	// UnityEngine.UI.Slider MusicToggle::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_5;
};

// ObstacleToggleAudio
struct ObstacleToggleAudio_tBA0EBC11DD0C2358493ACBCF0E4C1E4E0E70225C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider ObstacleToggleAudio::obstacleAudioSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___obstacleAudioSlider_4;
	// UnityEngine.AudioSource ObstacleToggleAudio::audioSourceoff
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSourceoff_5;
	// UnityEngine.AudioSource ObstacleToggleAudio::audioSourceon
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSourceon_6;
};

// ProxAudio
struct ProxAudio_tB3CB2E943E9F5B4720ED11A55C2BAC8D30C6AD57  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ProxAudio::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_4;
	// UnityEngine.GameObject ProxAudio::obstacle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obstacle_5;
	// UnityEngine.AudioSource ProxAudio::approachingAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___approachingAudio_6;
	// UnityEngine.AudioSource ProxAudio::nearbyAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___nearbyAudio_7;
	// System.Single ProxAudio::approachingThreshold
	float ___approachingThreshold_8;
	// System.Single ProxAudio::nearbyThreshold
	float ___nearbyThreshold_9;
	// System.Boolean ProxAudio::isNearby
	bool ___isNearby_10;
};

// RaceResultDisplay
struct RaceResultDisplay_tC801B506E3EA61B7CF254E9BC501C7692E14D3FF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text RaceResultDisplay::raceTimeText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___raceTimeText_4;
	// UnityEngine.UI.Text RaceResultDisplay::lapTimeText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___lapTimeText_5;
	// UnityEngine.UI.Text RaceResultDisplay::countdownText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___countdownText_6;
	// System.Single RaceResultDisplay::countdownDuration
	float ___countdownDuration_7;
	// System.Single RaceResultDisplay::countdownTimer
	float ___countdownTimer_8;
	// System.Boolean RaceResultDisplay::isCountdownActive
	bool ___isCountdownActive_9;
};

// RacerScript
struct RacerScript_t4419949F9EC2F3921F38209894DC692CA92F0D50  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single RacerScript::laptime
	float ___laptime_4;
	// System.Single RacerScript::besttime
	float ___besttime_5;
	// System.Single RacerScript::totalTime
	float ___totalTime_6;
	// System.Int32 RacerScript::laps
	int32_t ___laps_7;
	// System.Int32 RacerScript::checkpoint1Counter
	int32_t ___checkpoint1Counter_8;
	// System.Int32 RacerScript::checkpoint2Counter
	int32_t ___checkpoint2Counter_9;
	// System.Boolean RacerScript::startTimer
	bool ___startTimer_10;
	// System.Int32 RacerScript::finishedRace
	int32_t ___finishedRace_11;
	// System.Int32 RacerScript::lapCount
	int32_t ___lapCount_12;
	// System.Boolean RacerScript::enableObstalces
	bool ___enableObstalces_13;
	// UnityEngine.GameObject RacerScript::leftControllerObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___leftControllerObject_14;
	// UnityEngine.GameObject RacerScript::rightControllerObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rightControllerObject_15;
	// UnityEngine.UI.Text RacerScript::Ltime
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Ltime_16;
	// UnityEngine.UI.Text RacerScript::Btime
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Btime_17;
	// UnityEngine.UI.Text RacerScript::LapsText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___LapsText_18;
	// UnityEngine.UI.Text RacerScript::Ttime
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Ttime_19;
	// UnityEngine.UI.Text RacerScript::BtimePullThrough
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___BtimePullThrough_20;
	// UnityEngine.UI.Text RacerScript::TtimePullThrough
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TtimePullThrough_21;
	// UnityEngine.GameObject RacerScript::raceResultDisplay
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___raceResultDisplay_22;
	// UnityEngine.GameObject RacerScript::TimerBackground
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TimerBackground_23;
	// UnityEngine.GameObject RacerScript::BoostBackground
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BoostBackground_24;
	// UnityEngine.GameObject RacerScript::Obstacles
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Obstacles_25;
	// System.Int32 RacerScript::checkpointCount
	int32_t ___checkpointCount_26;
	// System.Boolean RacerScript::checkpoint1
	bool ___checkpoint1_27;
	// System.Boolean RacerScript::checkpoint2
	bool ___checkpoint2_28;
	// System.Boolean RacerScript::checkpoint3
	bool ___checkpoint3_29;
	// System.Boolean RacerScript::checkpoint4
	bool ___checkpoint4_30;
	// System.Boolean RacerScript::checkpoint5
	bool ___checkpoint5_31;
	// System.Boolean RacerScript::checkpoint6
	bool ___checkpoint6_32;
	// System.Boolean RacerScript::checkpoint7
	bool ___checkpoint7_33;
	// System.Boolean RacerScript::checkpoint8
	bool ___checkpoint8_34;
	// System.Boolean RacerScript::checkpoint9
	bool ___checkpoint9_35;
	// System.Boolean RacerScript::checkpoint10
	bool ___checkpoint10_36;
	// System.Boolean RacerScript::checkpoint11
	bool ___checkpoint11_37;
	// System.Boolean RacerScript::canTrigger
	bool ___canTrigger_38;
	// System.Boolean RacerScript::raceFinished
	bool ___raceFinished_39;
	// System.Int32 RacerScript::requiredLaps
	int32_t ___requiredLaps_40;
};

// SliderValue
struct SliderValue_t634BB82D3EFE8B00A33BCE9927CBB2B5F70C9AA8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider SliderValue::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_4;
	// TMPro.TextMeshProUGUI SliderValue::Text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___Text_5;
};

// SoundSettings
struct SoundSettings_tF96E8E4062A24B2D0FADA9F1951DA818A4CE5DF9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider SoundSettings::masterVolumeSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___masterVolumeSlider_4;
	// System.String SoundSettings::masterSliderKey
	String_t* ___masterSliderKey_5;
	// System.Single SoundSettings::defaultMasterVolume
	float ___defaultMasterVolume_6;
};

// SpeechAudioSettingsToggle
struct SpeechAudioSettingsToggle_t72FFCC656BFAC403C87F9A90A6165F8B9C1D1092  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider SpeechAudioSettingsToggle::speechAudioSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___speechAudioSlider_4;
	// UnityEngine.AudioSource SpeechAudioSettingsToggle::audioSourceoff
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSourceoff_5;
	// System.String SpeechAudioSettingsToggle::toggle
	String_t* ___toggle_6;
};

// SpeechControl
struct SpeechControl_t5063815B7C25F2B7E4D540B195AC751E02DB8914  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource SpeechControl::speechAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___speechAudio_4;
	// System.Boolean SpeechControl::isSpeechMuted
	bool ___isSpeechMuted_5;
};

// SpeechScript
struct SpeechScript_t0379C9399679C9AF27CE3BA40CFF844239F89AC0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single SpeechScript::mastervolume
	float ___mastervolume_4;
	// UnityEngine.UI.Slider SpeechScript::speechVolumeSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___speechVolumeSlider_5;
	// System.String SpeechScript::speechSliderKey
	String_t* ___speechSliderKey_6;
	// System.Single SpeechScript::defaultSpeechVolume
	float ___defaultSpeechVolume_7;
};

// SpeechToggle
struct SpeechToggle_t84130DAB3085AEA55832B2D8DD85A6E4A72E4FCC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource SpeechToggle::audioSourceon
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSourceon_4;
	// UnityEngine.UI.Slider SpeechToggle::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// WrongWay
struct WrongWay_t0D977F92437C5CEE273E9EF2CB0A3A8618AFE9FC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean WrongWay::startTimer
	bool ___startTimer_4;
	// System.Boolean WrongWay::canTrigger
	bool ___canTrigger_5;
	// System.Boolean WrongWay::drivingWrongWay
	bool ___drivingWrongWay_6;
	// System.Int32 WrongWay::id
	int32_t ___id_7;
	// UnityEngine.GameObject WrongWay::wrongWay
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___wrongWay_8;
	// UnityEngine.AudioSource WrongWay::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_9;
	// UnityEngine.AudioClip WrongWay::wrongWayAduio
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___wrongWayAduio_10;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController/UpdateType UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UpdateTrackingType
	int32_t ___m_UpdateTrackingType_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputTracking
	bool ___m_EnableInputTracking_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputActions
	bool ___m_EnableInputActions_6;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelPrefab
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelPrefab_7;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelParent_8;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_Model
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Model_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_AnimateModel
	bool ___m_AnimateModel_10;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelSelectTransition
	String_t* ___m_ModelSelectTransition_11;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelDeSelectTransition
	String_t* ___m_ModelDeSelectTransition_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HideControllerModel
	bool ___m_HideControllerModel_13;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_SelectInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_SelectInteractionState_14;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ActivateInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_ActivateInteractionState_15;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UIPressInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_UIPressInteractionState_16;
	// UnityEngine.XR.Interaction.Toolkit.XRControllerState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ControllerState
	XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50* ___m_ControllerState_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_CreateControllerState
	bool ___m_CreateControllerState_18;
	// UnityEngine.Animator UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_ModelAnimator_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HasWarnedAnimatorMissing
	bool ___m_HasWarnedAnimatorMissing_20;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_PerformSetup
	bool ___m_PerformSetup_21;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlDeadzone>k__BackingField
	float ___U3CanchorControlDeadzoneU3Ek__BackingField_22;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlOffAxisDeadzone>k__BackingField
	float ___U3CanchorControlOffAxisDeadzoneU3Ek__BackingField_23;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::registered
	Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5* ___registered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::unregistered
	Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0* ___unregistered_5;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_6;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_7;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_8;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AttachTransform_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_KeepSelectedTargetValid
	bool ___m_KeepSelectedTargetValid_10;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectedInteractable
	XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* ___m_StartingSelectedInteractable_11;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingTargetFilter
	XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F* ___m_StartingTargetFilter_12;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_13;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_14;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_15;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_16;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_TargetFilter
	RuntimeObject* ___m_TargetFilter_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowHover
	bool ___m_AllowHover_18;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowSelect
	bool ___m_AllowSelect_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_IsPerformingManualInteraction
	bool ___m_IsPerformingManualInteraction_20;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<interactablesHovered>k__BackingField
	List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0* ___U3CinteractablesHoveredU3Ek__BackingField_21;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<interactablesSelected>k__BackingField
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___U3CinteractablesSelectedU3Ek__BackingField_22;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<firstInteractableSelected>k__BackingField
	RuntimeObject* ___U3CfirstInteractableSelectedU3Ek__BackingField_23;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingHoverFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingHoverFilters_24;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverFilters
	ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5* ___m_HoverFilters_25;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingSelectFilters_26;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectFilters
	ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8* ___m_SelectFilters_27;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_AttachPoseOnSelect_28;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LocalAttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_LocalAttachPoseOnSelect_29;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_UnorderedInteractablesHovered
	HashSet_1_t442C406BB3DAA0091640BF5E45C6E255DCE9BC88* ___m_UnorderedInteractablesHovered_30;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_UnorderedInteractablesSelected
	HashSet_1_t393CE008A524DA1CCED603B4564BFAB7574A9EDF* ___m_UnorderedInteractablesSelected_31;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_ManualInteractionInteractable
	RuntimeObject* ___m_ManualInteractionInteractable_32;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_33;
	// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetPriorityMode>k__BackingField
	int32_t ___U3CtargetPriorityModeU3Ek__BackingField_35;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetsForSelection>k__BackingField
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___U3CtargetsForSelectionU3Ek__BackingField_36;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverEntered_37;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverExited_38;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectEntered_39;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectExited_40;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<hoverTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3ChoverTargetsU3Ek__BackingField_41;
};

// inGameMenu
struct inGameMenu_tE2A29E971086F67AA1C8727447DAA11EE88BDCA4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 inGameMenu::playagain
	int32_t ___playagain_4;
	// System.Int32 inGameMenu::nextlevel
	int32_t ___nextlevel_5;
};

// materialchange
struct materialchange_t9F61BC955D7584547B471FA988094044512FD06E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject materialchange::cart
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cart_4;
	// UnityEngine.Material materialchange::BaseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___BaseMaterial_5;
	// UnityEngine.Material materialchange::ChangeMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ChangeMaterial_6;
	// System.Single materialchange::distanceThreshold
	float ___distanceThreshold_7;
	// UnityEngine.GameObject[] materialchange::objectsToChange
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___objectsToChange_8;
};

// obstacletoggle
struct obstacletoggle_t3B29415C052DC4B0744DD8DCF0449F5618D5B07F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider obstacletoggle::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_4;
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor
struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E  : public XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor/InputTriggerType UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_SelectActionTrigger
	int32_t ___m_SelectActionTrigger_42;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HideControllerOnSelect
	bool ___m_HideControllerOnSelect_43;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoveredActivate
	bool ___m_AllowHoveredActivate_44;
	// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_TargetPriorityMode
	int32_t ___m_TargetPriorityMode_45;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectEntered
	bool ___m_PlayAudioClipOnSelectEntered_46;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectEntered_47;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectExited
	bool ___m_PlayAudioClipOnSelectExited_48;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectExited_49;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectCanceled
	bool ___m_PlayAudioClipOnSelectCanceled_50;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectCanceled_51;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverEntered
	bool ___m_PlayAudioClipOnHoverEntered_52;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverEntered_53;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverExited
	bool ___m_PlayAudioClipOnHoverExited_54;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverExited_55;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverCanceled
	bool ___m_PlayAudioClipOnHoverCanceled_56;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverCanceled_57;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoverAudioWhileSelecting
	bool ___m_AllowHoverAudioWhileSelecting_58;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectEntered
	bool ___m_PlayHapticsOnSelectEntered_59;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterIntensity
	float ___m_HapticSelectEnterIntensity_60;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterDuration
	float ___m_HapticSelectEnterDuration_61;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectExited
	bool ___m_PlayHapticsOnSelectExited_62;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitIntensity
	float ___m_HapticSelectExitIntensity_63;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitDuration
	float ___m_HapticSelectExitDuration_64;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectCanceled
	bool ___m_PlayHapticsOnSelectCanceled_65;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelIntensity
	float ___m_HapticSelectCancelIntensity_66;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelDuration
	float ___m_HapticSelectCancelDuration_67;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverEntered
	bool ___m_PlayHapticsOnHoverEntered_68;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterIntensity
	float ___m_HapticHoverEnterIntensity_69;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterDuration
	float ___m_HapticHoverEnterDuration_70;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverExited
	bool ___m_PlayHapticsOnHoverExited_71;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitIntensity
	float ___m_HapticHoverExitIntensity_72;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitDuration
	float ___m_HapticHoverExitDuration_73;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverCanceled
	bool ___m_PlayHapticsOnHoverCanceled_74;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelIntensity
	float ___m_HapticHoverCancelIntensity_75;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelDuration
	float ___m_HapticHoverCancelDuration_76;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoverHapticsWhileSelecting
	bool ___m_AllowHoverHapticsWhileSelecting_77;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowActivate
	bool ___m_AllowActivate_78;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_Controller
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___m_Controller_79;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ActivateEventArgs
	LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01* ___m_ActivateEventArgs_80;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_DeactivateEventArgs
	LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B* ___m_DeactivateEventArgs_81;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectActive
	bool ___m_ToggleSelectActive_83;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectDeactivatedThisFrame
	bool ___m_ToggleSelectDeactivatedThisFrame_84;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_WaitingForSelectDeactivate
	bool ___m_WaitingForSelectDeactivate_85;
	// UnityEngine.AudioSource UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_EffectsAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_EffectsAudioSource_86;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::<validTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3CvalidTargetsU3Ek__BackingField_87;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76  : public XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E
{
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/LineType UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LineType
	int32_t ___m_LineType_92;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_BlendVisualLinePoints
	bool ___m_BlendVisualLinePoints_93;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_MaxRaycastDistance
	float ___m_MaxRaycastDistance_94;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RayOriginTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RayOriginTransform_95;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ReferenceFrame
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ReferenceFrame_96;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_Velocity
	float ___m_Velocity_97;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_Acceleration
	float ___m_Acceleration_98;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AdditionalGroundHeight
	float ___m_AdditionalGroundHeight_99;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AdditionalFlightTime
	float ___m_AdditionalFlightTime_100;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EndPointDistance
	float ___m_EndPointDistance_101;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EndPointHeight
	float ___m_EndPointHeight_102;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPointDistance
	float ___m_ControlPointDistance_103;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPointHeight
	float ___m_ControlPointHeight_104;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SampleFrequency
	int32_t ___m_SampleFrequency_105;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/HitDetectionType UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitDetectionType
	int32_t ___m_HitDetectionType_106;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SphereCastRadius
	float ___m_SphereCastRadius_107;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_RaycastMask_108;
	// UnityEngine.QueryTriggerInteraction UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastTriggerInteraction
	int32_t ___m_RaycastTriggerInteraction_109;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitClosestOnly
	bool ___m_HitClosestOnly_110;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HoverToSelect
	bool ___m_HoverToSelect_111;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HoverTimeToSelect
	float ___m_HoverTimeToSelect_112;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EnableUIInteraction
	bool ___m_EnableUIInteraction_113;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AllowAnchorControl
	bool ___m_AllowAnchorControl_114;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UseForceGrab
	bool ___m_UseForceGrab_115;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RotateSpeed
	float ___m_RotateSpeed_116;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_TranslateSpeed
	float ___m_TranslateSpeed_117;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AnchorRotateReferenceFrame
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AnchorRotateReferenceFrame_118;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/AnchorRotationMode UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AnchorRotationMode
	int32_t ___m_AnchorRotationMode_119;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ValidTargets
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___m_ValidTargets_120;
	// UnityEngine.XR.Interaction.Toolkit.UI.XRUIInputModule UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_InputModule
	XRUIInputModule_tA641266A2621C1465F3C5433D747428A4CDA72F0* ___m_InputModule_121;
	// UnityEngine.XR.Interaction.Toolkit.UI.XRUIInputModule UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RegisteredInputModule
	XRUIInputModule_tA641266A2621C1465F3C5433D747428A4CDA72F0* ___m_RegisteredInputModule_122;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_CurrentNearestObject
	RuntimeObject* ___m_CurrentNearestObject_123;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LastTimeHoveredObjectChanged
	float ___m_LastTimeHoveredObjectChanged_124;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_PassedHoverTimeToSelect
	bool ___m_PassedHoverTimeToSelect_125;
	// UnityEngine.RaycastHit[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHits
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___m_RaycastHits_126;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitsCount
	int32_t ___m_RaycastHitsCount_127;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/RaycastHitComparer UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitComparer
	RaycastHitComparer_tC59C36D577B7426F5EE8E3AE65B988F953757E9D* ___m_RaycastHitComparer_128;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SamplePoints
	List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD* ___m_SamplePoints_129;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SamplePointsFrameUpdated
	int32_t ___m_SamplePointsFrameUpdated_130;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitEndpointIndex
	int32_t ___m_RaycastHitEndpointIndex_131;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UIRaycastHitEndpointIndex
	int32_t ___m_UIRaycastHitEndpointIndex_132;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_ControlPoints_133;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitChordControlPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_HitChordControlPoints_134;
	// UnityEngine.PhysicsScene UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LocalPhysicsScene
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE ___m_LocalPhysicsScene_137;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

// <Module>

// <Module>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Countdown/<CountdownCoroutine>d__6

// Countdown/<CountdownCoroutine>d__6

// KartController/<DisableTurboBoostAfterDelay>d__31

// KartController/<DisableTurboBoostAfterDelay>d__31

// KartController/<EnableMovementAfterDelay>d__28

// KartController/<EnableMovementAfterDelay>d__28

// KartController/<EnableTurboCooldownAfterDelay>d__32

// KartController/<EnableTurboCooldownAfterDelay>d__32

// KartEngineAudio/<FadeInIdle2Volume>d__18

// KartEngineAudio/<FadeInIdle2Volume>d__18

// KartEngineAudio/<FadeOutIdle2Volume>d__19

// KartEngineAudio/<FadeOutIdle2Volume>d__19

// MuscAudioSettingsToggle/<ChangeMuteStatus>d__7

// MuscAudioSettingsToggle/<ChangeMuteStatus>d__7

// ObstacleToggleAudio/<ChangeStatus>d__7

// ObstacleToggleAudio/<ChangeStatus>d__7

// SpeechAudioSettingsToggle/<ChangeMuteStatus>d__6

// SpeechAudioSettingsToggle/<ChangeMuteStatus>d__6

// UnityEngine.Events.UnityEvent`1<System.Single>

// UnityEngine.Events.UnityEvent`1<System.Single>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Single

// System.Single

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.Collision

// UnityEngine.Collision

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.UI.Slider/SliderEvent

// UnityEngine.UI.Slider/SliderEvent

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Events.UnityAction`1<System.Single>

// UnityEngine.Events.UnityAction`1<System.Single>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Audio
struct Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF_StaticFields
{
	// Audio Audio::instance
	Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF* ___instance_4;
};

// Audio

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// BoostPad

// BoostPad

// CollisionAudioControl

// CollisionAudioControl

// ColorChange

// ColorChange

// Countdown

// Countdown

// GameEndOverlay

// GameEndOverlay

// HapticController

// HapticController

// KartController

// KartController

// KartEngineAudio

// KartEngineAudio

// MenuManager

// MenuManager

// MuscAudioSettingsToggle

// MuscAudioSettingsToggle

// MusicAudioSettingsToggle

// MusicAudioSettingsToggle

// MusicControl

// MusicControl

// MusicScript

// MusicScript

// MusicToggle

// MusicToggle

// ObstacleToggleAudio

// ObstacleToggleAudio

// ProxAudio

// ProxAudio

// RaceResultDisplay

// RaceResultDisplay

// RacerScript

// RacerScript

// SliderValue

// SliderValue

// SoundSettings

// SoundSettings

// SpeechAudioSettingsToggle

// SpeechAudioSettingsToggle

// SpeechControl

// SpeechControl

// SpeechScript

// SpeechScript

// SpeechToggle

// SpeechToggle

// WrongWay

// WrongWay

// UnityEngine.XR.Interaction.Toolkit.XRBaseController

// UnityEngine.XR.Interaction.Toolkit.XRBaseController

// inGameMenu

// inGameMenu

// materialchange

// materialchange

// obstacletoggle

// obstacletoggle

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.Slider

// UnityEngine.UI.Slider

// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_Results
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___s_Results_88;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_ScratchSamplePoints
	List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD* ___s_ScratchSamplePoints_135;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_ScratchControlPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_ScratchControlPoints_136;
};

// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5_gshared (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___0_call, const RuntimeMethod* method) ;

// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<KartController>()
inline KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* Component_GetComponent_TisKartController_tC7FC623824537D9DA9B794F403D2F688D0757423_m07A06D55357F17C0E11D72B113002D1CADC2BD38 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void KartController::EnableTurboBoost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KartController_EnableTurboBoost_mFE6BAB9E2CCBA15D35C25E6C1E75355EF4871AAD (KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* __this, const RuntimeMethod* method) ;
// System.Void KartController::DisableTurboBoost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KartController_DisableTurboBoost_m3D0BFB20AC84642C478BA9733B402B41A6E7F7F8 (KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Collections.IEnumerator Countdown::CountdownCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Countdown_CountdownCoroutine_mE2BAABF98AF2FD445DF126D5937ED76B9C5D6686 (Countdown_t5ED13CAA4900EDB87B032B0C83826D6E4C192129* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void Countdown/<CountdownCoroutine>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountdownCoroutineU3Ed__6__ctor_m955543BC3B44003DF309A7A18AB59CE0E4DBF96C (U3CCountdownCoroutineU3Ed__6_t8CF132CBCCB1B0136DBF16764BE92C21CFF128A3* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_methodName, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void GameEndOverlay::DisplayEndResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEndOverlay_DisplayEndResults_m98A6EE6E9517604B36B1D14E60983183D1CB606A (GameEndOverlay_t97D7F31660FF9E820B034605FC51FC41D182DDE6* __this, const RuntimeMethod* method) ;
// System.Void GameEndOverlay::StopTotalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEndOverlay_StopTotalTime_mE9B2F270BDC92BF74510FFD8CD2C4D6B479CFBEF (GameEndOverlay_t97D7F31660FF9E820B034605FC51FC41D182DDE6* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void HapticController::SendHaptics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_SendHaptics_mD74D94C170CC62B60088F363E574C58B48A777C1 (HapticController_tE2052EFD5B04BEAD1FE8AAE8C876F04654EEE995* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_angularDrag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularDrag_m4193B04EEFCA831DB99E29E98F778957557F130C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator KartController::EnableMovementAfterDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KartController_EnableMovementAfterDelay_m5AE7841B1E8EA0F2B889FD1885E86DC2280A648E (KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* __this, const RuntimeMethod* method) ;
// System.Void KartController/<EnableMovementAfterDelay>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableMovementAfterDelayU3Ed__28__ctor_mDE67D600D18B0EB16AE38D8C5B638F071299AD93 (U3CEnableMovementAfterDelayU3Ed__28_tA7220F6444B49FD3DEA5748294DCE5664E1102A4* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void KartController::SendHaptics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KartController_SendHaptics_m9ED959E164F0CF5053AC0BF4EFBF5F64B6812F22 (KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___0_routine, const RuntimeMethod* method) ;
// System.Collections.IEnumerator KartController::DisableTurboBoostAfterDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KartController_DisableTurboBoostAfterDelay_m09AF057367F0AF64209176F4D7A26CE3B9849C50 (KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator KartController::EnableTurboCooldownAfterDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KartController_EnableTurboCooldownAfterDelay_mAB957E7588E0ACA5F8AF6468447F6ECCAD815B3B (KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* __this, const RuntimeMethod* method) ;
// System.Void KartController/<DisableTurboBoostAfterDelay>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableTurboBoostAfterDelayU3Ed__31__ctor_m58D7AA0C248BACF306382F65CBAF0E9E6139E11C (U3CDisableTurboBoostAfterDelayU3Ed__31_t94A547D8E7ACE48755B0FD9C3C62245F113D8839* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void KartController/<EnableTurboCooldownAfterDelay>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableTurboCooldownAfterDelayU3Ed__32__ctor_mDA8B155F18810125C68A32F69A75E6E99A960359 (U3CEnableTurboCooldownAfterDelayU3Ed__32_t3B2F8A4F7E4B0EEA300C1332C0B42935E47ECD45* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_force, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_axis, float ___1_angle, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator KartEngineAudio::FadeInIdle2Volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KartEngineAudio_FadeInIdle2Volume_m73260F85F471293130DC91CE65216BDDED673E46 (KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator KartEngineAudio::FadeOutIdle2Volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KartEngineAudio_FadeOutIdle2Volume_mB546E8AEC9F2C048138E9F726A821DF74ADCBD4B (KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void KartEngineAudio/<FadeInIdle2Volume>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInIdle2VolumeU3Ed__18__ctor_m12A162582C0978AF93D6B91461C8F56AF3C670C5 (U3CFadeInIdle2VolumeU3Ed__18_t6A3EE5BDD5543078646783DE4B6CE4F165EA121A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void KartEngineAudio/<FadeOutIdle2Volume>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutIdle2VolumeU3Ed__19__ctor_mFA16A54B4FC404EC4A1858B3314D7268BEF1CD0E (U3CFadeOutIdle2VolumeU3Ed__19_t72048F7F9F93FFFA07CC33E223C279AB4C62704C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Slider>()
inline Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D (String_t* ___0_key, int32_t ___1_defaultValue, const RuntimeMethod* method) ;
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5 (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, const RuntimeMethod*))UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_gshared)(__this, ___0_call, method);
}
// System.Void MuscAudioSettingsToggle::ToggleAudioOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MuscAudioSettingsToggle_ToggleAudioOff_m29A74BB2731A4C5C2DEBD91454E61B837EEA58DE (MuscAudioSettingsToggle_t9959C6F231B1E38A1B2BBF1D127448A5EA9C46DB* __this, const RuntimeMethod* method) ;
// System.Void MuscAudioSettingsToggle::ToggleAudioOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MuscAudioSettingsToggle_ToggleAudioOn_m7BA17ABF21D82ED4AA74E8EC2F1A7BE1673EBB0B (MuscAudioSettingsToggle_t9959C6F231B1E38A1B2BBF1D127448A5EA9C46DB* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MuscAudioSettingsToggle::ChangeMuteStatus(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MuscAudioSettingsToggle_ChangeMuteStatus_mD6C0339334629694A8B03636E70174EBA1D5F494 (MuscAudioSettingsToggle_t9959C6F231B1E38A1B2BBF1D127448A5EA9C46DB* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void MuscAudioSettingsToggle/<ChangeMuteStatus>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeMuteStatusU3Ed__7__ctor_mB27F7A2B3E19BE83D1086F6C2B146B4BF875F472 (U3CChangeMuteStatusU3Ed__7_t8BF0B4F05EBE5B77D5CFEB62C8B8E5D840C7ED90* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE (const RuntimeMethod* method) ;
// System.Void MusicAudioSettingsToggle::ToggleAudioOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicAudioSettingsToggle_ToggleAudioOff_m5FEDE7318E9DBBFB2CA8D1FE789A3342E3382839 (MusicAudioSettingsToggle_t6F4293A2E9AD82DCDA48163953FEC6727E0C0F73* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_mute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_m4A9B511E92C8BDEBB64D9B2557126FB030895A4D (String_t* ___0_key, float ___1_defaultValue, const RuntimeMethod* method) ;
// System.Void MusicScript::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicScript_Load_m60AE640028C5D65DB2FDFFFAD34F03F1BF9FA606 (MusicScript_tEEB0A217279048BA96B8957DFBDE7FEDD5079265* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285 (String_t* ___0_key, float ___1_value, const RuntimeMethod* method) ;
// System.Void MusicScript::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicScript_Save_mDF0BFA462311C9D564F11A9FEC782815CCD95574 (MusicScript_tEEB0A217279048BA96B8957DFBDE7FEDD5079265* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void MusicToggle::ToggleAudioOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicToggle_ToggleAudioOn_m76FAEF003909ABD791A5353F60D004E7FB2474D6 (MusicToggle_tBC0DADF4CF2CDD4252C10F9A099EC8B7EBDCADF6* __this, const RuntimeMethod* method) ;
// System.Void ObstacleToggleAudio::ToggleAudioOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleToggleAudio_ToggleAudioOff_mC6BB3AB9392616C25449F642EB8A3B2A9F318FE9 (ObstacleToggleAudio_tBA0EBC11DD0C2358493ACBCF0E4C1E4E0E70225C* __this, const RuntimeMethod* method) ;
// System.Void ObstacleToggleAudio::ToggleAudioOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleToggleAudio_ToggleAudioOn_m8A5875AB0C9A115515F7E68D23F25F051DFAC274 (ObstacleToggleAudio_tBA0EBC11DD0C2358493ACBCF0E4C1E4E0E70225C* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ObstacleToggleAudio::ChangeStatus(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObstacleToggleAudio_ChangeStatus_m52B8819FB9DE7D23719FD7ECF29B068357AAE5B5 (ObstacleToggleAudio_tBA0EBC11DD0C2358493ACBCF0E4C1E4E0E70225C* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void ObstacleToggleAudio/<ChangeStatus>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeStatusU3Ed__7__ctor_mF4BD10633A12C2D8732A9F22C2671E5DABD8B2E7 (U3CChangeStatusU3Ed__7_tBD82D746E034EB3A4D111203BC8CB70667B173E4* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_dir, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) ;
// System.Void RaceResultDisplay::StartRace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaceResultDisplay_StartRace_mC9C4512B396E2A34522F28AB4B034CB405C41471 (RaceResultDisplay_tC801B506E3EA61B7CF254E9BC501C7692E14D3FF* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___0_f, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor>()
inline XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void RacerScript::StopTotalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RacerScript_StopTotalTime_mF7EEFC10D5701BD3EE431E3B919F4386080673E5 (RacerScript_t4419949F9EC2F3921F38209894DC692CA92F0D50* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void SoundSettings::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundSettings_Load_m6C4681B2EF2E59F20B8FFED156F5FB25BAC5CF3D (SoundSettings_tF96E8E4062A24B2D0FADA9F1951DA818A4CE5DF9* __this, const RuntimeMethod* method) ;
// System.Void SoundSettings::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundSettings_Save_m8A01326A90FAEDE417B8C5485633372C8D11FC40 (SoundSettings_tF96E8E4062A24B2D0FADA9F1951DA818A4CE5DF9* __this, const RuntimeMethod* method) ;
// System.Void SpeechAudioSettingsToggle::ToggleAudioOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechAudioSettingsToggle_ToggleAudioOff_mC2717CBCAABBB71AE1F8685622F0683EC14A3841 (SpeechAudioSettingsToggle_t72FFCC656BFAC403C87F9A90A6165F8B9C1D1092* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SpeechAudioSettingsToggle::ChangeMuteStatus(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpeechAudioSettingsToggle_ChangeMuteStatus_mB58E56618C487C7DE818F077A7831852AEA7F127 (SpeechAudioSettingsToggle_t72FFCC656BFAC403C87F9A90A6165F8B9C1D1092* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void SpeechAudioSettingsToggle/<ChangeMuteStatus>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeMuteStatusU3Ed__6__ctor_mBDC37346052B4FC2298FD37981A6BEB1A43F8771 (U3CChangeMuteStatusU3Ed__6_tBC12C85E28EC6CDC2D8F10773B490F996E4B8013* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void SpeechScript::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechScript_Load_m926D29FC960AA1A31F131ED770CE8A74EA387A6A (SpeechScript_t0379C9399679C9AF27CE3BA40CFF844239F89AC0* __this, const RuntimeMethod* method) ;
// System.Void SpeechScript::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechScript_Save_m0176B35BAE23D607897FBA195C67523320A82DE3 (SpeechScript_t0379C9399679C9AF27CE3BA40CFF844239F89AC0* __this, const RuntimeMethod* method) ;
// System.Void SpeechToggle::ToggleAudioOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToggle_ToggleAudioOn_m8B1A4E4B4D9B7B4B0D588D38F36E01B0FF24D1AB (SpeechToggle_t84130DAB3085AEA55832B2D8DD85A6E4A72E4FCC* __this, const RuntimeMethod* method) ;
// System.Void WrongWay::<OnTriggerEnter>g__RightWay|7_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrongWay_U3COnTriggerEnterU3Eg__RightWayU7C7_1_m228D7AB0F1CB77173DA8D884DF5AB054355BF7AE (WrongWay_t0D977F92437C5CEE273E9EF2CB0A3A8618AFE9FC* __this, const RuntimeMethod* method) ;
// System.Void WrongWay::<OnTriggerEnter>g__WrongWay|7_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrongWay_U3COnTriggerEnterU3Eg__WrongWayU7C7_0_mFAE6A4B330BB310496CBA6838C508F3F290713EF (WrongWay_t0D977F92437C5CEE273E9EF2CB0A3A8618AFE9FC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
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
// System.Void BoostPad::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoostPad_OnTriggerEnter_mF485414B94E20ABE1668687D3EC2B9DB54DB8B2A (BoostPad_tBDFFD0A671EE92D89709BA6711FD7DE95B39542F* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisKartController_tC7FC623824537D9DA9B794F403D2F688D0757423_m07A06D55357F17C0E11D72B113002D1CADC2BD38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D29A8AD2EFCC6AC23C7DD46B26DA62C660E8A37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral726B9AED97EC52BBF20E87CB205EB35039A6E204);
		s_Il2CppMethodInitialized = true;
	}
	KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* V_0 = NULL;
	{
		// Debug.Log("Kart entered boost pad trigger");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral4D29A8AD2EFCC6AC23C7DD46B26DA62C660E8A37, NULL);
		// KartController kartController = other.GetComponent<KartController>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_1;
		L_1 = Component_GetComponent_TisKartController_tC7FC623824537D9DA9B794F403D2F688D0757423_m07A06D55357F17C0E11D72B113002D1CADC2BD38(L_0, Component_GetComponent_TisKartController_tC7FC623824537D9DA9B794F403D2F688D0757423_m07A06D55357F17C0E11D72B113002D1CADC2BD38_RuntimeMethod_var);
		V_0 = L_1;
		// if (kartController != null)
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// kartController.EnableTurboBoost();
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_4 = V_0;
		NullCheck(L_4);
		KartController_EnableTurboBoost_mFE6BAB9E2CCBA15D35C25E6C1E75355EF4871AAD(L_4, NULL);
		// Debug.Log("Turbo boost enabled for the kart");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral726B9AED97EC52BBF20E87CB205EB35039A6E204, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void BoostPad::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoostPad_OnTriggerExit_m59A961FF313138D4A0C31634A753A28E6EFBB590 (BoostPad_tBDFFD0A671EE92D89709BA6711FD7DE95B39542F* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisKartController_tC7FC623824537D9DA9B794F403D2F688D0757423_m07A06D55357F17C0E11D72B113002D1CADC2BD38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D990510D154979B7426FBE2F254B39A1907A056);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA8CBBE64EBDC47E61D65CA8C0A6FAF8052B3558);
		s_Il2CppMethodInitialized = true;
	}
	KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* V_0 = NULL;
	{
		// Debug.Log("Kart exited boost pad trigger");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1D990510D154979B7426FBE2F254B39A1907A056, NULL);
		// KartController kartController = other.GetComponent<KartController>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_1;
		L_1 = Component_GetComponent_TisKartController_tC7FC623824537D9DA9B794F403D2F688D0757423_m07A06D55357F17C0E11D72B113002D1CADC2BD38(L_0, Component_GetComponent_TisKartController_tC7FC623824537D9DA9B794F403D2F688D0757423_m07A06D55357F17C0E11D72B113002D1CADC2BD38_RuntimeMethod_var);
		V_0 = L_1;
		// if (kartController != null)
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// kartController.DisableTurboBoost();
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_4 = V_0;
		NullCheck(L_4);
		KartController_DisableTurboBoost_m3D0BFB20AC84642C478BA9733B402B41A6E7F7F8(L_4, NULL);
		// Debug.Log("Turbo boost disabled for the kart");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralDA8CBBE64EBDC47E61D65CA8C0A6FAF8052B3558, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void BoostPad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoostPad__ctor_m6774D7DB3FA16149C2A5DCF42BD7FF234279996F (BoostPad_tBDFFD0A671EE92D89709BA6711FD7DE95B39542F* __this, const RuntimeMethod* method) 
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
// System.Void Audio::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_Awake_m986C6C6813C794727BB3B0CEA4D1344C1D87E4B0 (Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance != this)
		Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF* L_0 = ((Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF_StaticFields*)il2cpp_codegen_static_fields_for(Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF* L_2 = ((Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF_StaticFields*)il2cpp_codegen_static_fields_for(Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, __this, NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		// return;
		return;
	}

IL_0026:
	{
		// instance = this;
		((Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF_StaticFields*)il2cpp_codegen_static_fields_for(Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF_StaticFields*)il2cpp_codegen_static_fields_for(Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// mainMenuMusic = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5;
		L_5 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___mainMenuMusic_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainMenuMusic_5), (void*)L_5);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_6, NULL);
		// }
		return;
	}
}
// System.Void Audio::PlayMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_PlayMusic_m67F2371EC76AF36FC5EA7F5AE1EC6D43ECD455C8 (Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF* __this, const RuntimeMethod* method) 
{
	{
		// mainMenuMusic.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___mainMenuMusic_5;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void Audio::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_Update_m984ECC185C811C50694A9E3315454C5F3BB5678F (Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AB696A37604D665DC97134DBEE44CFE70451B1A);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (SceneManager.GetActiveScene().name.Equals("Test"))
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_1, _stringLiteral9AB696A37604D665DC97134DBEE44CFE70451B1A, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// mainMenuMusic.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___mainMenuMusic_5;
		NullCheck(L_3);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_3, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Audio::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio__ctor_m77A1146A37D12C6FE8759416FFCC7B3C4DE470EB (Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF* __this, const RuntimeMethod* method) 
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
// System.Void CollisionAudioControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionAudioControl_Start_mD8A89148D5E4C155D0DA95F95E13EB6489D3DBCE (CollisionAudioControl_tE4324E7CB61462576380CB2E8F1DD11397002AA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFC46C74E19CC5E32FCCE7975B2A3FF940AA5D6F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_9), (void*)L_0);
		// if (audioSource == null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___audioSource_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		// Debug.LogError("1 AudioSource component not found on object: " + gameObject.name);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBFC46C74E19CC5E32FCCE7975B2A3FF940AA5D6F, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_5, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void CollisionAudioControl::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionAudioControl_OnCollisionEnter_mFCB83D81EFCF0EE88F3C97518EE1DD106C8A3A0C (CollisionAudioControl_tE4324E7CB61462576380CB2E8F1DD11397002AA4* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AC447D4BCDFC1A5E8C4AA1BBA95326FCC92BEC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23FD7E6AA6D494BD8A2E7FE0CAFA87497A25B1BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (audioSource == null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// Debug.LogError("2 AudioSource component not found on object: " + gameObject.name);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0AC447D4BCDFC1A5E8C4AA1BBA95326FCC92BEC9, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_4, NULL);
		// return;
		return;
	}

IL_0029:
	{
		// if (collision.gameObject.CompareTag("Obstacle"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_5 = ___0_collision;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_5, NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_6, _stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900, NULL);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		// audioSource.PlayOneShot(obstacleClip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = __this->___audioSource_9;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = __this->___obstacleClip_5;
		NullCheck(L_8);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_8, L_9, NULL);
		return;
	}

IL_004d:
	{
		// else if (collision.gameObject.CompareTag("rumbleStrip"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_10 = ___0_collision;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_11, _stringLiteral23FD7E6AA6D494BD8A2E7FE0CAFA87497A25B1BE, NULL);
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		// audioSource.PlayOneShot(rumbleStripClip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_13 = __this->___audioSource_9;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_14 = __this->___rumbleStripClip_7;
		NullCheck(L_13);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_13, L_14, NULL);
		return;
	}

IL_0071:
	{
		// else if (collision.gameObject.CompareTag("Wall"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_15 = ___0_collision;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_15, NULL);
		NullCheck(L_16);
		bool L_17;
		L_17 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_16, _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287, NULL);
		if (!L_17)
		{
			goto IL_0095;
		}
	}
	{
		// audioSource.PlayOneShot(wallClip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_18 = __this->___audioSource_9;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_19 = __this->___wallClip_6;
		NullCheck(L_18);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_18, L_19, NULL);
		return;
	}

IL_0095:
	{
		// audioSource.PlayOneShot(defaultClip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_20 = __this->___audioSource_9;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_21 = __this->___defaultClip_4;
		NullCheck(L_20);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_20, L_21, NULL);
		// }
		return;
	}
}
// System.Void CollisionAudioControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionAudioControl__ctor_mAC70A9C9FD3FE2989C963A8EA956CD0F9230E98E (CollisionAudioControl_tE4324E7CB61462576380CB2E8F1DD11397002AA4* __this, const RuntimeMethod* method) 
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
// System.Void ColorChange::changeColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChange_changeColor_m2F605EC55541276C4012CB5453710EDFE0AAEE2E (ColorChange_t4FE34D8D450BF12148F5E87E82E8DF2775E79E4B* __this, const RuntimeMethod* method) 
{
	{
		// t.color = Color.red;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___t_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void ColorChange::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChange__ctor_m3E128E0C85951AA888492A7CA54304503843762F (ColorChange_t4FE34D8D450BF12148F5E87E82E8DF2775E79E4B* __this, const RuntimeMethod* method) 
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
// System.Void Countdown::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Countdown_Start_mFC01CF26D7C1B8CF52DA71A1711DEDAFF1754BDD (Countdown_t5ED13CAA4900EDB87B032B0C83826D6E4C192129* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(CountdownCoroutine());
		RuntimeObject* L_0;
		L_0 = Countdown_CountdownCoroutine_mE2BAABF98AF2FD445DF126D5937ED76B9C5D6686(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Countdown::CountdownCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Countdown_CountdownCoroutine_mE2BAABF98AF2FD445DF126D5937ED76B9C5D6686 (Countdown_t5ED13CAA4900EDB87B032B0C83826D6E4C192129* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCountdownCoroutineU3Ed__6_t8CF132CBCCB1B0136DBF16764BE92C21CFF128A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCountdownCoroutineU3Ed__6_t8CF132CBCCB1B0136DBF16764BE92C21CFF128A3* L_0 = (U3CCountdownCoroutineU3Ed__6_t8CF132CBCCB1B0136DBF16764BE92C21CFF128A3*)il2cpp_codegen_object_new(U3CCountdownCoroutineU3Ed__6_t8CF132CBCCB1B0136DBF16764BE92C21CFF128A3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCountdownCoroutineU3Ed__6__ctor_m955543BC3B44003DF309A7A18AB59CE0E4DBF96C(L_0, 0, NULL);
		U3CCountdownCoroutineU3Ed__6_t8CF132CBCCB1B0136DBF16764BE92C21CFF128A3* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Countdown::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Countdown__ctor_m54AD77AF098F758C37EC2CFEE0BB64497E77B8E7 (Countdown_t5ED13CAA4900EDB87B032B0C83826D6E4C192129* __this, const RuntimeMethod* method) 
{
	{
		// public float countdownDuration = 3.0f; // Countdown duration in seconds
		__this->___countdownDuration_7 = (3.0f);
		// public bool startGameOnCountdownEnd = true; // Whether to start the game automatically after the countdown
		__this->___startGameOnCountdownEnd_8 = (bool)1;
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
// System.Void Countdown/<CountdownCoroutine>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountdownCoroutineU3Ed__6__ctor_m955543BC3B44003DF309A7A18AB59CE0E4DBF96C (U3CCountdownCoroutineU3Ed__6_t8CF132CBCCB1B0136DBF16764BE92C21CFF128A3* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Countdown/<CountdownCoroutine>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountdownCoroutineU3Ed__6_System_IDisposable_Dispose_m74DA4EEF4B30D15D15A1378AE5EE436E6652D34B (U3CCountdownCoroutineU3Ed__6_t8CF132CBCCB1B0136DBF16764BE92C21CFF128A3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Countdown/<CountdownCoroutine>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCountdownCoroutineU3Ed__6_MoveNext_m8DE3B3294577A33FF8D7A2519F1C50DACB696A52 (U3CCountdownCoroutineU3Ed__6_t8CF132CBCCB1B0136DBF16764BE92C21CFF128A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78D958E853E9A979645D55A90BE243CCAC59E1B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA242E0EF74FB38B86DC60AEF5C5EF280284E5543);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Countdown_t5ED13CAA4900EDB87B032B0C83826D6E4C192129* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Countdown_t5ED13CAA4900EDB87B032B0C83826D6E4C192129* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_005a;
			}
			case 2:
			{
				goto IL_00ae;
			}
			case 3:
			{
				goto IL_00f6;
			}
			case 4:
			{
				goto IL_013e;
			}
			case 5:
			{
				goto IL_018d;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// countDown.SetActive(false);
		Countdown_t5ED13CAA4900EDB87B032B0C83826D6E4C192129* L_3 = V_1;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3->___countDown_4;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// yield return new WaitForSeconds(1.0f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// audioSource.PlayOneShot(countdownSounds[0]);
		Countdown_t5ED13CAA4900EDB87B032B0C83826D6E4C192129* L_6 = V_1;
		NullCheck(L_6);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = L_6->___audioSource_5;
		Countdown_t5ED13CAA4900EDB87B032B0C83826D6E4C192129* L_8 = V_1;
		NullCheck(L_8);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_9 = L_8->___countdownSounds_6;
		NullCheck(L_9);
		int32_t L_10 = 0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_7, L_11, NULL);
		// countDown.SetActive(true);
		Countdown_t5ED13CAA4900EDB87B032B0C83826D6E4C192129* L_12 = V_1;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12->___countDown_4;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		// countDown.GetComponent<Text>().text = "3";
		Countdown_t5ED13CAA4900EDB87B032B0C83826D6E4C192129* L_14 = V_1;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = L_14->___countDown_4;
		NullCheck(L_15);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16;
		L_16 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_15, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		// yield return new WaitForSeconds(1.0f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_17 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_17, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00ae:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// audioSource.PlayOneShot(countdownSounds[1]);
		Countdown_t5ED13CAA4900EDB87B032B0C83826D6E4C192129* L_18 = V_1;
		NullCheck(L_18);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_19 = L_18->___audioSource_5;
		Countdown_t5ED13CAA4900EDB87B032B0C83826D6E4C192129* L_20 = V_1;
		NullCheck(L_20);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_21 = L_20->___countdownSounds_6;
		NullCheck(L_21);
		int32_t L_22 = 1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_19);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_19, L_23, NULL);
		// countDown.GetComponent<Text>().text = "2";
		Countdown_t5ED13CAA4900EDB87B032B0C83826D6E4C192129* L_24 = V_1;
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = L_24->___countDown_4;
		NullCheck(L_25);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_26;
		L_26 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_25, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		NullCheck(L_26);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		// yield return new WaitForSeconds(1.0f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_27 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_27, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_27);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_00f6:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// audioSource.PlayOneShot(countdownSounds[2]);
		Countdown_t5ED13CAA4900EDB87B032B0C83826D6E4C192129* L_28 = V_1;
		NullCheck(L_28);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_29 = L_28->___audioSource_5;
		Countdown_t5ED13CAA4900EDB87B032B0C83826D6E4C192129* L_30 = V_1;
		NullCheck(L_30);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_31 = L_30->___countdownSounds_6;
		NullCheck(L_31);
		int32_t L_32 = 2;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_29);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_29, L_33, NULL);
		// countDown.GetComponent<Text>().text = "1";
		Countdown_t5ED13CAA4900EDB87B032B0C83826D6E4C192129* L_34 = V_1;
		NullCheck(L_34);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = L_34->___countDown_4;
		NullCheck(L_35);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_36;
		L_36 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_35, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		NullCheck(L_36);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_36, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		// yield return new WaitForSeconds(1.0f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_37 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_37, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_37);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_013e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// audioSource.PlayOneShot(countdownSounds[3]);
		Countdown_t5ED13CAA4900EDB87B032B0C83826D6E4C192129* L_38 = V_1;
		NullCheck(L_38);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_39 = L_38->___audioSource_5;
		Countdown_t5ED13CAA4900EDB87B032B0C83826D6E4C192129* L_40 = V_1;
		NullCheck(L_40);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_41 = L_40->___countdownSounds_6;
		NullCheck(L_41);
		int32_t L_42 = 3;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_39);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_39, L_43, NULL);
		// countDown.GetComponent<Text>().text = "Go!";
		Countdown_t5ED13CAA4900EDB87B032B0C83826D6E4C192129* L_44 = V_1;
		NullCheck(L_44);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = L_44->___countDown_4;
		NullCheck(L_45);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_46;
		L_46 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_45, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		NullCheck(L_46);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_46, _stringLiteral78D958E853E9A979645D55A90BE243CCAC59E1B6);
		// yield return new WaitForSeconds(countdownDuration - 3.0f);
		Countdown_t5ED13CAA4900EDB87B032B0C83826D6E4C192129* L_47 = V_1;
		NullCheck(L_47);
		float L_48 = L_47->___countdownDuration_7;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_49 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_49, ((float)il2cpp_codegen_subtract(L_48, (3.0f))), NULL);
		__this->___U3CU3E2__current_1 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_49);
		__this->___U3CU3E1__state_0 = 5;
		return (bool)1;
	}

IL_018d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// countDown.SetActive(false);
		Countdown_t5ED13CAA4900EDB87B032B0C83826D6E4C192129* L_50 = V_1;
		NullCheck(L_50);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = L_50->___countDown_4;
		NullCheck(L_51);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_51, (bool)0, NULL);
		// if (startGameOnCountdownEnd)
		Countdown_t5ED13CAA4900EDB87B032B0C83826D6E4C192129* L_52 = V_1;
		NullCheck(L_52);
		bool L_53 = L_52->___startGameOnCountdownEnd_8;
		if (!L_53)
		{
			goto IL_01b8;
		}
	}
	{
		// gameObject.SendMessage("StartGame");
		Countdown_t5ED13CAA4900EDB87B032B0C83826D6E4C192129* L_54 = V_1;
		NullCheck(L_54);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55;
		L_55 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_54, NULL);
		NullCheck(L_55);
		GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E(L_55, _stringLiteralA242E0EF74FB38B86DC60AEF5C5EF280284E5543, NULL);
	}

IL_01b8:
	{
		// }
		return (bool)0;
	}
}
// System.Object Countdown/<CountdownCoroutine>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCountdownCoroutineU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m34DFC4F235B9435A6F3653F372F4F1D51713E73C (U3CCountdownCoroutineU3Ed__6_t8CF132CBCCB1B0136DBF16764BE92C21CFF128A3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Countdown/<CountdownCoroutine>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountdownCoroutineU3Ed__6_System_Collections_IEnumerator_Reset_m869FDF707B5BCA4FD912845124ABBF54B540C640 (U3CCountdownCoroutineU3Ed__6_t8CF132CBCCB1B0136DBF16764BE92C21CFF128A3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCountdownCoroutineU3Ed__6_System_Collections_IEnumerator_Reset_m869FDF707B5BCA4FD912845124ABBF54B540C640_RuntimeMethod_var)));
	}
}
// System.Object Countdown/<CountdownCoroutine>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCountdownCoroutineU3Ed__6_System_Collections_IEnumerator_get_Current_mD97FD5406FB95BDB5A7424AC172AC2DCBE972619 (U3CCountdownCoroutineU3Ed__6_t8CF132CBCCB1B0136DBF16764BE92C21CFF128A3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void GameEndOverlay::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEndOverlay_Start_mCA9BB4862ABA9F0B858B523D9A3DA2722B9145D8 (GameEndOverlay_t97D7F31660FF9E820B034605FC51FC41D182DDE6* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GameEndOverlay::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEndOverlay_Update_mB8839387D7592312BACC8A6051A526CC9CA0D8C9 (GameEndOverlay_t97D7F31660FF9E820B034605FC51FC41D182DDE6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D7A380F57A3C3781379B5934E57D022B32CE3C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6304D939B5E7316D4FC90ABDBA87526905C62FAD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (startTimer == true && !raceFinished)
		bool L_0 = __this->___startTimer_13;
		if (!L_0)
		{
			goto IL_00b6;
		}
	}
	{
		bool L_1 = __this->___raceFinished_33;
		if (L_1)
		{
			goto IL_00b6;
		}
	}
	{
		// laptime = laptime + Time.deltaTime;// this is the timer running deltaTime
		float L_2 = __this->___laptime_7;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___laptime_7 = ((float)il2cpp_codegen_add(L_2, L_3));
		// totalTime = totalTime + Time.deltaTime;// this is the total time for the run
		float L_4 = __this->___totalTime_9;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___totalTime_9 = ((float)il2cpp_codegen_add(L_4, L_5));
		// Ttime.text = totalTime.ToString("F2");// this is the time for the total
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___Ttime_19;
		float* L_7 = (&__this->___totalTime_9);
		String_t* L_8;
		L_8 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_7, _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_8);
		// Ltime.text = "Lap Time: " + laptime.ToString("F2");// this is the print out for the text in the corner of the canvas
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___Ltime_16;
		float* L_10 = (&__this->___laptime_7);
		String_t* L_11;
		L_11 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_10, _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3D7A380F57A3C3781379B5934E57D022B32CE3C1, L_11, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_12);
		// LapsText.text = "Lap: " + laps.ToString();// this is the laps text on the canvas
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___LapsText_18;
		int32_t* L_14 = (&__this->___laps_10);
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6304D939B5E7316D4FC90ABDBA87526905C62FAD, L_15, NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_16);
		// if (laps == requiredLaps) // If the required number of laps is completed, stop the race
		int32_t L_17 = __this->___laps_10;
		int32_t L_18 = __this->___requiredLaps_34;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_00b6;
		}
	}
	{
		// raceFinished = true;
		__this->___raceFinished_33 = (bool)1;
		// startTimer = false;
		__this->___startTimer_13 = (bool)0;
	}

IL_00b6:
	{
		// }
		return;
	}
}
// System.Void GameEndOverlay::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEndOverlay_OnTriggerEnter_m52050E22DA66214261E3B8515163CCB6F932433E (GameEndOverlay_t97D7F31660FF9E820B034605FC51FC41D182DDE6* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4D3AA769B0C42987ECC664D15D995161A345F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BAEE56D6871F5FA35FE0FF6A81FC506155E0CDB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25D1388FEC241BDE86FA5E308075CE0F474C82DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FDFA88503F50E300AE45098B09A76361E8EBFA9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral353891B2ED86A3F78B9C5E69012B5A9ED3406AAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D7A380F57A3C3781379B5934E57D022B32CE3C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43FDFD729FD0D77F97F5EAB2065180AF69EFCDFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57BCA31F16691BBED219CEAED25B6E566883AC72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BFD1DBEE76067C7A3266DF23AC53B499CAE13C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70933958120FAC92DE3FA30E8B268B6610F147CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F54B3AA75720888F63FABC5B561F62BF5869916);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9754B0BB16C9F1175FA015CB1DA2FB319D8D6B28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C111E1EF7622B381034EA303CD2B8465119C421);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF344379D2073374A8BD9DDC14B2158CD228CF42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4DC82DD22CE5006E713D328EEF77553293F9906);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC9972A6536A73074BEE8654D068F8820228545B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.name == "StartFinish")// find game object with the name StartFinish
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral25D1388FEC241BDE86FA5E308075CE0F474C82DE, NULL);
		if (!L_3)
		{
			goto IL_01e1;
		}
	}
	{
		// if (startTimer == false)//start the timer in the stopped position awaiting start
		bool L_4 = __this->___startTimer_13;
		if (L_4)
		{
			goto IL_009e;
		}
	}
	{
		// startTimer = true;// start the timer here
		__this->___startTimer_13 = (bool)1;
		// laptime = 0;
		__this->___laptime_7 = (0.0f);
		// if (canTrigger == true)
		bool L_5 = __this->___canTrigger_32;
		if (!L_5)
		{
			goto IL_004a;
		}
	}
	{
		// laps++;//add laps to counter here
		int32_t L_6 = __this->___laps_10;
		__this->___laps_10 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_004a:
	{
		// checkpoint1 = false;// start with checkpoint 1 as false
		__this->___checkpoint1_21 = (bool)0;
		// checkpoint2 = false;// start with chechpoint 2 as false
		__this->___checkpoint2_22 = (bool)0;
		// checkpoint3 = false;
		__this->___checkpoint3_23 = (bool)0;
		// checkpoint4 = false;
		__this->___checkpoint4_24 = (bool)0;
		// checkpoint5 = false;
		__this->___checkpoint5_25 = (bool)0;
		// checkpoint6 = false;
		__this->___checkpoint6_26 = (bool)0;
		// checkpoint7 = false;
		__this->___checkpoint7_27 = (bool)0;
		// checkpoint8 = false;
		__this->___checkpoint8_28 = (bool)0;
		// checkpoint9 = false;
		__this->___checkpoint9_29 = (bool)0;
		// checkpoint10 = false;
		__this->___checkpoint10_30 = (bool)0;
		// checkpoint11 = false;
		__this->___checkpoint11_31 = (bool)0;
		// canTrigger = false;
		__this->___canTrigger_32 = (bool)0;
	}

IL_009e:
	{
		// if (checkpoint1 == true && checkpoint2 == true && checkpoint3 == true && checkpoint4 == true && checkpoint5 == true && checkpoint6 == true && checkpoint7 == true && checkpoint8 == true && checkpoint9 == true && checkpoint10 == true && checkpoint11 == true)
		bool L_7 = __this->___checkpoint1_21;
		if (!L_7)
		{
			goto IL_01e1;
		}
	}
	{
		bool L_8 = __this->___checkpoint2_22;
		if (!L_8)
		{
			goto IL_01e1;
		}
	}
	{
		bool L_9 = __this->___checkpoint3_23;
		if (!L_9)
		{
			goto IL_01e1;
		}
	}
	{
		bool L_10 = __this->___checkpoint4_24;
		if (!L_10)
		{
			goto IL_01e1;
		}
	}
	{
		bool L_11 = __this->___checkpoint5_25;
		if (!L_11)
		{
			goto IL_01e1;
		}
	}
	{
		bool L_12 = __this->___checkpoint6_26;
		if (!L_12)
		{
			goto IL_01e1;
		}
	}
	{
		bool L_13 = __this->___checkpoint7_27;
		if (!L_13)
		{
			goto IL_01e1;
		}
	}
	{
		bool L_14 = __this->___checkpoint8_28;
		if (!L_14)
		{
			goto IL_01e1;
		}
	}
	{
		bool L_15 = __this->___checkpoint9_29;
		if (!L_15)
		{
			goto IL_01e1;
		}
	}
	{
		bool L_16 = __this->___checkpoint10_30;
		if (!L_16)
		{
			goto IL_01e1;
		}
	}
	{
		bool L_17 = __this->___checkpoint11_31;
		if (!L_17)
		{
			goto IL_01e1;
		}
	}
	{
		// startTimer = false;
		__this->___startTimer_13 = (bool)0;
		// if (besttime == 0)
		float L_18 = __this->___besttime_8;
		if ((!(((float)L_18) == ((float)(0.0f)))))
		{
			goto IL_0137;
		}
	}
	{
		// besttime = laptime;
		float L_19 = __this->___laptime_7;
		__this->___besttime_8 = L_19;
	}

IL_0137:
	{
		// if (laptime < besttime)
		float L_20 = __this->___laptime_7;
		float L_21 = __this->___besttime_8;
		if ((!(((float)L_20) < ((float)L_21))))
		{
			goto IL_0151;
		}
	}
	{
		// besttime = laptime;
		float L_22 = __this->___laptime_7;
		__this->___besttime_8 = L_22;
	}

IL_0151:
	{
		// Btime.text = "Best Time: " + besttime.ToString("F2");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_23 = __this->___Btime_17;
		float* L_24 = (&__this->___besttime_8);
		String_t* L_25;
		L_25 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_24, _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		String_t* L_26;
		L_26 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral70933958120FAC92DE3FA30E8B268B6610F147CD, L_25, NULL);
		NullCheck(L_23);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_26);
		// if (laps == finishedRace)
		int32_t L_27 = __this->___laps_10;
		int32_t L_28 = __this->___finishedRace_14;
		if ((!(((uint32_t)L_27) == ((uint32_t)L_28))))
		{
			goto IL_01e1;
		}
	}
	{
		// startTimer = false;
		__this->___startTimer_13 = (bool)0;
		// laptime = 0;
		__this->___laptime_7 = (0.0f);
		// Ltime.text = "Lap Time: " + laptime.ToString("F2");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_29 = __this->___Ltime_16;
		float* L_30 = (&__this->___laptime_7);
		String_t* L_31;
		L_31 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_30, _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		String_t* L_32;
		L_32 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3D7A380F57A3C3781379B5934E57D022B32CE3C1, L_31, NULL);
		NullCheck(L_29);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, L_32);
		// LapsText.text = "Race Over" + laps.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_33 = __this->___LapsText_18;
		int32_t* L_34 = (&__this->___laps_10);
		String_t* L_35;
		L_35 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_34, NULL);
		String_t* L_36;
		L_36 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9754B0BB16C9F1175FA015CB1DA2FB319D8D6B28, L_35, NULL);
		NullCheck(L_33);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_33, L_36);
		// DisplayEndResults();
		GameEndOverlay_DisplayEndResults_m98A6EE6E9517604B36B1D14E60983183D1CB606A(__this, NULL);
	}

IL_01e1:
	{
		// if (other.gameObject.name == "checkpoint1")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_37 = ___0_other;
		NullCheck(L_37);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_37, NULL);
		NullCheck(L_38);
		String_t* L_39;
		L_39 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_38, NULL);
		bool L_40;
		L_40 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_39, _stringLiteral353891B2ED86A3F78B9C5E69012B5A9ED3406AAF, NULL);
		if (!L_40)
		{
			goto IL_0209;
		}
	}
	{
		// checkpoint1 = true;
		__this->___checkpoint1_21 = (bool)1;
		// Debug.Log("checkpoint1");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral353891B2ED86A3F78B9C5E69012B5A9ED3406AAF, NULL);
	}

IL_0209:
	{
		// if (other.gameObject.name == "checkpoint2")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_41 = ___0_other;
		NullCheck(L_41);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42;
		L_42 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_41, NULL);
		NullCheck(L_42);
		String_t* L_43;
		L_43 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_42, NULL);
		bool L_44;
		L_44 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_43, _stringLiteral2FDFA88503F50E300AE45098B09A76361E8EBFA9, NULL);
		if (!L_44)
		{
			goto IL_0231;
		}
	}
	{
		// checkpoint2 = true;
		__this->___checkpoint2_22 = (bool)1;
		// Debug.Log("checkpoint2");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2FDFA88503F50E300AE45098B09A76361E8EBFA9, NULL);
	}

IL_0231:
	{
		// if (other.gameObject.name == "checkpoint3")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_45 = ___0_other;
		NullCheck(L_45);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46;
		L_46 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_45, NULL);
		NullCheck(L_46);
		String_t* L_47;
		L_47 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_46, NULL);
		bool L_48;
		L_48 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_47, _stringLiteral43FDFD729FD0D77F97F5EAB2065180AF69EFCDFC, NULL);
		if (!L_48)
		{
			goto IL_0259;
		}
	}
	{
		// checkpoint3 = true;
		__this->___checkpoint3_23 = (bool)1;
		// Debug.Log("checkpoint3");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral43FDFD729FD0D77F97F5EAB2065180AF69EFCDFC, NULL);
	}

IL_0259:
	{
		// if (other.gameObject.name == "checkpoint4")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_49 = ___0_other;
		NullCheck(L_49);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50;
		L_50 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_49, NULL);
		NullCheck(L_50);
		String_t* L_51;
		L_51 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_50, NULL);
		bool L_52;
		L_52 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_51, _stringLiteral6BFD1DBEE76067C7A3266DF23AC53B499CAE13C1, NULL);
		if (!L_52)
		{
			goto IL_0281;
		}
	}
	{
		// checkpoint4 = true;
		__this->___checkpoint4_24 = (bool)1;
		// Debug.Log("checkpoint4");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6BFD1DBEE76067C7A3266DF23AC53B499CAE13C1, NULL);
	}

IL_0281:
	{
		// if (other.gameObject.name == "checkpoint5")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_53 = ___0_other;
		NullCheck(L_53);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54;
		L_54 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_53, NULL);
		NullCheck(L_54);
		String_t* L_55;
		L_55 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_54, NULL);
		bool L_56;
		L_56 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_55, _stringLiteralAF344379D2073374A8BD9DDC14B2158CD228CF42, NULL);
		if (!L_56)
		{
			goto IL_02a9;
		}
	}
	{
		// checkpoint5 = true;
		__this->___checkpoint5_25 = (bool)1;
		// Debug.Log("checkpoint5");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralAF344379D2073374A8BD9DDC14B2158CD228CF42, NULL);
	}

IL_02a9:
	{
		// if (other.gameObject.name == "checkpoint6")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_57 = ___0_other;
		NullCheck(L_57);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58;
		L_58 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_57, NULL);
		NullCheck(L_58);
		String_t* L_59;
		L_59 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_58, NULL);
		bool L_60;
		L_60 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_59, _stringLiteral1BAEE56D6871F5FA35FE0FF6A81FC506155E0CDB, NULL);
		if (!L_60)
		{
			goto IL_02d1;
		}
	}
	{
		// checkpoint6 = true;
		__this->___checkpoint6_26 = (bool)1;
		// Debug.Log("checkpoint6");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1BAEE56D6871F5FA35FE0FF6A81FC506155E0CDB, NULL);
	}

IL_02d1:
	{
		// if (other.gameObject.name == "checkpoint7")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_61 = ___0_other;
		NullCheck(L_61);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62;
		L_62 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_61, NULL);
		NullCheck(L_62);
		String_t* L_63;
		L_63 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_62, NULL);
		bool L_64;
		L_64 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_63, _stringLiteral57BCA31F16691BBED219CEAED25B6E566883AC72, NULL);
		if (!L_64)
		{
			goto IL_02f9;
		}
	}
	{
		// checkpoint7 = true;
		__this->___checkpoint7_27 = (bool)1;
		// Debug.Log("checkpoint7");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral57BCA31F16691BBED219CEAED25B6E566883AC72, NULL);
	}

IL_02f9:
	{
		// if (other.gameObject.name == "checkpoint8")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_65 = ___0_other;
		NullCheck(L_65);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66;
		L_66 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_65, NULL);
		NullCheck(L_66);
		String_t* L_67;
		L_67 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_66, NULL);
		bool L_68;
		L_68 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_67, _stringLiteral7F54B3AA75720888F63FABC5B561F62BF5869916, NULL);
		if (!L_68)
		{
			goto IL_0321;
		}
	}
	{
		// checkpoint8 = true;
		__this->___checkpoint8_28 = (bool)1;
		// Debug.Log("checkpoint8");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7F54B3AA75720888F63FABC5B561F62BF5869916, NULL);
	}

IL_0321:
	{
		// if (other.gameObject.name == "checkpoint9")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_69 = ___0_other;
		NullCheck(L_69);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_70;
		L_70 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_69, NULL);
		NullCheck(L_70);
		String_t* L_71;
		L_71 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_70, NULL);
		bool L_72;
		L_72 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_71, _stringLiteral9C111E1EF7622B381034EA303CD2B8465119C421, NULL);
		if (!L_72)
		{
			goto IL_0349;
		}
	}
	{
		// checkpoint9 = true;
		__this->___checkpoint9_29 = (bool)1;
		// Debug.Log("checkpoint9");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9C111E1EF7622B381034EA303CD2B8465119C421, NULL);
	}

IL_0349:
	{
		// if (other.gameObject.name == "checkpoint10")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_73 = ___0_other;
		NullCheck(L_73);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_74;
		L_74 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_73, NULL);
		NullCheck(L_74);
		String_t* L_75;
		L_75 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_74, NULL);
		bool L_76;
		L_76 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_75, _stringLiteral1A4D3AA769B0C42987ECC664D15D995161A345F8, NULL);
		if (!L_76)
		{
			goto IL_0371;
		}
	}
	{
		// checkpoint10 = true;
		__this->___checkpoint10_30 = (bool)1;
		// Debug.Log("checkpoint10");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1A4D3AA769B0C42987ECC664D15D995161A345F8, NULL);
	}

IL_0371:
	{
		// if (other.gameObject.name == "checkpoint11")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_77 = ___0_other;
		NullCheck(L_77);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78;
		L_78 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_77, NULL);
		NullCheck(L_78);
		String_t* L_79;
		L_79 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_78, NULL);
		bool L_80;
		L_80 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_79, _stringLiteralC4DC82DD22CE5006E713D328EEF77553293F9906, NULL);
		if (!L_80)
		{
			goto IL_0399;
		}
	}
	{
		// checkpoint11 = true;
		__this->___checkpoint11_31 = (bool)1;
		// Debug.Log("checkpoint11");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralC4DC82DD22CE5006E713D328EEF77553293F9906, NULL);
	}

IL_0399:
	{
		// if (other.gameObject.name == "StartFinish")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_81 = ___0_other;
		NullCheck(L_81);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_82;
		L_82 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_81, NULL);
		NullCheck(L_82);
		String_t* L_83;
		L_83 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_82, NULL);
		bool L_84;
		L_84 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_83, _stringLiteral25D1388FEC241BDE86FA5E308075CE0F474C82DE, NULL);
		if (!L_84)
		{
			goto IL_03ba;
		}
	}
	{
		// Debug.Log("Start Finish Line Crossed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralFC9972A6536A73074BEE8654D068F8820228545B, NULL);
	}

IL_03ba:
	{
		// }
		return;
	}
}
// System.Void GameEndOverlay::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEndOverlay_OnTriggerExit_m722A9F0F2CFE1C04B4E09BD3199694EC66D60B53 (GameEndOverlay_t97D7F31660FF9E820B034605FC51FC41D182DDE6* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25D1388FEC241BDE86FA5E308075CE0F474C82DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.name == "StartFinish")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral25D1388FEC241BDE86FA5E308075CE0F474C82DE, NULL);
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		// canTrigger = true;
		__this->___canTrigger_32 = (bool)1;
		// if (laps == lapCount)
		int32_t L_4 = __this->___laps_10;
		int32_t L_5 = __this->___lapCount_15;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0040;
		}
	}
	{
		// startTimer = false;
		__this->___startTimer_13 = (bool)0;
		// StopTotalTime();
		GameEndOverlay_StopTotalTime_mE9B2F270BDC92BF74510FFD8CD2C4D6B479CFBEF(__this, NULL);
		// finishedRace = 1;
		__this->___finishedRace_14 = 1;
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void GameEndOverlay::StopTotalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEndOverlay_StopTotalTime_mE9B2F270BDC92BF74510FFD8CD2C4D6B479CFBEF (GameEndOverlay_t97D7F31660FF9E820B034605FC51FC41D182DDE6* __this, const RuntimeMethod* method) 
{
	{
		// totalTime = totalTime - laptime;
		float L_0 = __this->___totalTime_9;
		float L_1 = __this->___laptime_7;
		__this->___totalTime_9 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// laptime = 0;
		__this->___laptime_7 = (0.0f);
		// }
		return;
	}
}
// System.Void GameEndOverlay::DisplayEndResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEndOverlay_DisplayEndResults_m98A6EE6E9517604B36B1D14E60983183D1CB606A (GameEndOverlay_t97D7F31660FF9E820B034605FC51FC41D182DDE6* __this, const RuntimeMethod* method) 
{
	{
		// gameEndTimeDisplay.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameEndTimeDisplay_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameEndOverlay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEndOverlay__ctor_m787D9CC2F410CEF3B14194F87DDE42ADC9151845 (GameEndOverlay_t97D7F31660FF9E820B034605FC51FC41D182DDE6* __this, const RuntimeMethod* method) 
{
	{
		// public int finishedRace = 4;
		__this->___finishedRace_14 = 4;
		// private bool canTrigger = true;
		__this->___canTrigger_32 = (bool)1;
		// private int requiredLaps = 4; // The number of laps required to finish the race
		__this->___requiredLaps_34 = 4;
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
// System.Void HapticController::SendHaptics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_SendHaptics_mD74D94C170CC62B60088F363E574C58B48A777C1 (HapticController_tE2052EFD5B04BEAD1FE8AAE8C876F04654EEE995* __this, const RuntimeMethod* method) 
{
	{
		// leftController.SendHapticImpulse(defaultAmplitude, defaultDuration);
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_0 = __this->___leftController_4;
		float L_1 = __this->___defaultAmplitude_6;
		float L_2 = __this->___defaultDuration_7;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, float, float >::Invoke(15 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::SendHapticImpulse(System.Single,System.Single) */, L_0, L_1, L_2);
		// rightController.SendHapticImpulse(defaultAmplitude, defaultDuration);
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_4 = __this->___rightController_5;
		float L_5 = __this->___defaultAmplitude_6;
		float L_6 = __this->___defaultDuration_7;
		NullCheck(L_4);
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, float, float >::Invoke(15 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::SendHapticImpulse(System.Single,System.Single) */, L_4, L_5, L_6);
		// }
		return;
	}
}
// System.Void HapticController::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_OnCollisionEnter_m9E0D2085D7582C96DD941E024D5339C4E1C3AF53 (HapticController_tE2052EFD5B04BEAD1FE8AAE8C876F04654EEE995* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23FD7E6AA6D494BD8A2E7FE0CAFA87497A25B1BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Obstacle" || collision.gameObject.tag == "rumbleStrip")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900, NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_4 = ___0_collision;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral23FD7E6AA6D494BD8A2E7FE0CAFA87497A25B1BE, NULL);
		if (!L_7)
		{
			goto IL_0034;
		}
	}

IL_002e:
	{
		// SendHaptics();
		HapticController_SendHaptics_mD74D94C170CC62B60088F363E574C58B48A777C1(__this, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void HapticController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController__ctor_m4A5BF91A601EB2013A930C8B3487511488EC63C6 (HapticController_tE2052EFD5B04BEAD1FE8AAE8C876F04654EEE995* __this, const RuntimeMethod* method) 
{
	{
		// public float defaultAmplitude = 0.2f;
		__this->___defaultAmplitude_6 = (0.200000003f);
		// public float defaultDuration = 0.2f;
		__this->___defaultDuration_7 = (0.200000003f);
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
// System.Void inGameMenu::Replay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void inGameMenu_Replay_mDA846727A647D94D318F7B9099C797B3DBD8AD9B (inGameMenu_tE2A29E971086F67AA1C8727447DAA11EE88BDCA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(playagain);
		int32_t L_0 = __this->___playagain_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_0, NULL);
		// }
		return;
	}
}
// System.Void inGameMenu::MainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void inGameMenu_MainMenu_mC079DB1EF55B47DC3937227E76712E6465CA4F4B (inGameMenu_tE2A29E971086F67AA1C8727447DAA11EE88BDCA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// }
		return;
	}
}
// System.Void inGameMenu::NextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void inGameMenu_NextLevel_m18050402F91AB62CED4F540A9FE451E40BC16331 (inGameMenu_tE2A29E971086F67AA1C8727447DAA11EE88BDCA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(nextlevel);
		int32_t L_0 = __this->___nextlevel_5;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_0, NULL);
		// }
		return;
	}
}
// System.Void inGameMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void inGameMenu__ctor_mF95A24EED909DB6938CBD7AE1C88425B45EC372A (inGameMenu_tE2A29E971086F67AA1C8727447DAA11EE88BDCA4* __this, const RuntimeMethod* method) 
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
// System.Void KartController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KartController_Start_m1A9380B9E0779FCFA12BB4BC8AE9D3B1C083A749 (KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_18), (void*)L_0);
		// rb.angularDrag = 0.5f;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___rb_18;
		NullCheck(L_1);
		Rigidbody_set_angularDrag_m4193B04EEFCA831DB99E29E98F778957557F130C(L_1, (0.5f), NULL);
		// StartCoroutine(EnableMovementAfterDelay());
		RuntimeObject* L_2;
		L_2 = KartController_EnableMovementAfterDelay_m5AE7841B1E8EA0F2B889FD1885E86DC2280A648E(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void KartController::SendHaptics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KartController_SendHaptics_m9ED959E164F0CF5053AC0BF4EFBF5F64B6812F22 (KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* __this, const RuntimeMethod* method) 
{
	{
		// leftController.SendHapticImpulse(defaultAmplitude, defaultDuration);
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_0 = __this->___leftController_10;
		float L_1 = __this->___defaultAmplitude_12;
		float L_2 = __this->___defaultDuration_13;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, float, float >::Invoke(15 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::SendHapticImpulse(System.Single,System.Single) */, L_0, L_1, L_2);
		// rightController.SendHapticImpulse(defaultAmplitude, defaultDuration);
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_4 = __this->___rightController_11;
		float L_5 = __this->___defaultAmplitude_12;
		float L_6 = __this->___defaultDuration_13;
		NullCheck(L_4);
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, float, float >::Invoke(15 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::SendHapticImpulse(System.Single,System.Single) */, L_4, L_5, L_6);
		// }
		return;
	}
}
// System.Collections.IEnumerator KartController::EnableMovementAfterDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KartController_EnableMovementAfterDelay_m5AE7841B1E8EA0F2B889FD1885E86DC2280A648E (KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnableMovementAfterDelayU3Ed__28_tA7220F6444B49FD3DEA5748294DCE5664E1102A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEnableMovementAfterDelayU3Ed__28_tA7220F6444B49FD3DEA5748294DCE5664E1102A4* L_0 = (U3CEnableMovementAfterDelayU3Ed__28_tA7220F6444B49FD3DEA5748294DCE5664E1102A4*)il2cpp_codegen_object_new(U3CEnableMovementAfterDelayU3Ed__28_tA7220F6444B49FD3DEA5748294DCE5664E1102A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CEnableMovementAfterDelayU3Ed__28__ctor_mDE67D600D18B0EB16AE38D8C5B638F071299AD93(L_0, 0, NULL);
		U3CEnableMovementAfterDelayU3Ed__28_tA7220F6444B49FD3DEA5748294DCE5664E1102A4* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void KartController::EnableTurboBoost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KartController_EnableTurboBoost_mFE6BAB9E2CCBA15D35C25E6C1E75355EF4871AAD (KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* __this, const RuntimeMethod* method) 
{
	{
		// if (isTurboBoosting)
		bool L_0 = __this->___isTurboBoosting_7;
		if (!L_0)
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
		// SendHaptics();
		KartController_SendHaptics_m9ED959E164F0CF5053AC0BF4EFBF5F64B6812F22(__this, NULL);
		// isTurboBoosting = true;
		__this->___isTurboBoosting_7 = (bool)1;
		// if (turboCoroutine != null)
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1 = __this->___turboCoroutine_25;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// StopCoroutine(turboCoroutine);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2 = __this->___turboCoroutine_25;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_2, NULL);
	}

IL_002a:
	{
		// turboCoroutine = StartCoroutine(DisableTurboBoostAfterDelay());
		RuntimeObject* L_3;
		L_3 = KartController_DisableTurboBoostAfterDelay_m09AF057367F0AF64209176F4D7A26CE3B9849C50(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		__this->___turboCoroutine_25 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___turboCoroutine_25), (void*)L_4);
		// }
		return;
	}
}
// System.Void KartController::DisableTurboBoost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KartController_DisableTurboBoost_m3D0BFB20AC84642C478BA9733B402B41A6E7F7F8 (KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* __this, const RuntimeMethod* method) 
{
	{
		// if (!isTurboBoosting)
		bool L_0 = __this->___isTurboBoosting_7;
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
		// isTurboBoosting = false;
		__this->___isTurboBoosting_7 = (bool)0;
		// if (turboCoroutine != null)
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1 = __this->___turboCoroutine_25;
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		// StopCoroutine(turboCoroutine);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2 = __this->___turboCoroutine_25;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_2, NULL);
		// turboCoroutine = StartCoroutine(EnableTurboCooldownAfterDelay());
		RuntimeObject* L_3;
		L_3 = KartController_EnableTurboCooldownAfterDelay_mAB957E7588E0ACA5F8AF6468447F6ECCAD815B3B(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		__this->___turboCoroutine_25 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___turboCoroutine_25), (void*)L_4);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator KartController::DisableTurboBoostAfterDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KartController_DisableTurboBoostAfterDelay_m09AF057367F0AF64209176F4D7A26CE3B9849C50 (KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDisableTurboBoostAfterDelayU3Ed__31_t94A547D8E7ACE48755B0FD9C3C62245F113D8839_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDisableTurboBoostAfterDelayU3Ed__31_t94A547D8E7ACE48755B0FD9C3C62245F113D8839* L_0 = (U3CDisableTurboBoostAfterDelayU3Ed__31_t94A547D8E7ACE48755B0FD9C3C62245F113D8839*)il2cpp_codegen_object_new(U3CDisableTurboBoostAfterDelayU3Ed__31_t94A547D8E7ACE48755B0FD9C3C62245F113D8839_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDisableTurboBoostAfterDelayU3Ed__31__ctor_m58D7AA0C248BACF306382F65CBAF0E9E6139E11C(L_0, 0, NULL);
		U3CDisableTurboBoostAfterDelayU3Ed__31_t94A547D8E7ACE48755B0FD9C3C62245F113D8839* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator KartController::EnableTurboCooldownAfterDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KartController_EnableTurboCooldownAfterDelay_mAB957E7588E0ACA5F8AF6468447F6ECCAD815B3B (KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnableTurboCooldownAfterDelayU3Ed__32_t3B2F8A4F7E4B0EEA300C1332C0B42935E47ECD45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEnableTurboCooldownAfterDelayU3Ed__32_t3B2F8A4F7E4B0EEA300C1332C0B42935E47ECD45* L_0 = (U3CEnableTurboCooldownAfterDelayU3Ed__32_t3B2F8A4F7E4B0EEA300C1332C0B42935E47ECD45*)il2cpp_codegen_object_new(U3CEnableTurboCooldownAfterDelayU3Ed__32_t3B2F8A4F7E4B0EEA300C1332C0B42935E47ECD45_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CEnableTurboCooldownAfterDelayU3Ed__32__ctor_mDA8B155F18810125C68A32F69A75E6E99A960359(L_0, 0, NULL);
		U3CEnableTurboCooldownAfterDelayU3Ed__32_t3B2F8A4F7E4B0EEA300C1332C0B42935E47ECD45* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void KartController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KartController_FixedUpdate_m75318C43A3B580CE32EF1BC3212A10BF7E80E4CE (KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (!canMove || raceOver) // Disable movement if canMove is false or raceOver is true
		bool L_0 = __this->___canMove_20;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___raceOver_21;
		if (!L_1)
		{
			goto IL_0036;
		}
	}

IL_0010:
	{
		// rb.velocity = Vector3.Lerp(rb.velocity, Vector3.zero, 0.1f); // Gradually decrease the kart's speed until it comes to a stop
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = __this->___rb_18;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___rb_18;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_4, L_5, (0.100000001f), NULL);
		NullCheck(L_2);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_2, L_6, NULL);
		// return;
		return;
	}

IL_0036:
	{
		// float horizontalInput = Input.GetAxis("Horizontal");
		float L_7;
		L_7 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = L_7;
		// float forwardInput = Input.GetAxis("Vertical");
		float L_8;
		L_8 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_1 = L_8;
		// if (Input.GetKeyDown(KeyCode.Joystick2Button0))
		bool L_9;
		L_9 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)370), NULL);
		if (!L_9)
		{
			goto IL_0076;
		}
	}
	{
		// EnableTurboBoost();
		KartController_EnableTurboBoost_mFE6BAB9E2CCBA15D35C25E6C1E75355EF4871AAD(__this, NULL);
		// TurboIndicatorRed.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___TurboIndicatorRed_23;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// TurboIndicatorGreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___TurboIndicatorGreen_24;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
	}

IL_0076:
	{
		// Vector3 force = transform.forward * speed * forwardInput;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_12, NULL);
		float L_14 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, L_14, NULL);
		float L_16 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_16, NULL);
		V_2 = L_17;
		// if (isTurboBoosting)
		bool L_18 = __this->___isTurboBoosting_7;
		if (!L_18)
		{
			goto IL_00a8;
		}
	}
	{
		// force *= turboBoost;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_2;
		float L_20 = __this->___turboBoost_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, L_20, NULL);
		V_2 = L_21;
	}

IL_00a8:
	{
		// rb.AddForce(force, ForceMode.Acceleration);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_22 = __this->___rb_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_2;
		NullCheck(L_22);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_22, L_23, 5, NULL);
		// if (rb.velocity.magnitude > 0.1f)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_24 = __this->___rb_18;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_24, NULL);
		V_3 = L_25;
		float L_26;
		L_26 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_3), NULL);
		if ((!(((float)L_26) > ((float)(0.100000001f)))))
		{
			goto IL_00ed;
		}
	}
	{
		// transform.Rotate(Vector3.up, Time.deltaTime * turnSpeed * horizontalInput);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_29;
		L_29 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_30 = __this->___turnSpeed_5;
		float L_31 = V_0;
		NullCheck(L_27);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_27, L_28, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_29, L_30)), L_31)), NULL);
	}

IL_00ed:
	{
		// }
		return;
	}
}
// System.Void KartController::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KartController_OnTriggerEnter_mE957A6A5FDA99C0258EBD99FBB8FB952D6B6400C (KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25D1388FEC241BDE86FA5E308075CE0F474C82DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35055F67F0394563019772C9A74E996E0C65DB3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("StartFinish") && lapCount == 2) // Check for the finish line and lap count
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteral25D1388FEC241BDE86FA5E308075CE0F474C82DE, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2 = __this->___lapCount_22;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0025;
		}
	}
	{
		// raceOver = true;
		__this->___raceOver_21 = (bool)1;
		// canMove = false;
		__this->___canMove_20 = (bool)0;
		return;
	}

IL_0025:
	{
		// else if (other.CompareTag("CheckpointObject")) // Checkpoint reached, increment lap count
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___0_other;
		NullCheck(L_3);
		bool L_4;
		L_4 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_3, _stringLiteral35055F67F0394563019772C9A74E996E0C65DB3D, NULL);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		// lapCount++;
		int32_t L_5 = __this->___lapCount_22;
		__this->___lapCount_22 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void KartController::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KartController_OnTriggerExit_mEA322B4F4EC435A63F371838097F987DCAF792E4 (KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25D1388FEC241BDE86FA5E308075CE0F474C82DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("StartFinish") && lapCount == 2) // Check for the finish line and lap count
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteral25D1388FEC241BDE86FA5E308075CE0F474C82DE, NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_2 = __this->___lapCount_22;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0034;
		}
	}
	{
		// raceOver = true;
		__this->___raceOver_21 = (bool)1;
		// canMove = false;
		__this->___canMove_20 = (bool)0;
		// rb.velocity = Vector3.zero; // Set velocity to zero to bring the kart to a halt
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___rb_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_3);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_3, L_4, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void KartController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KartController__ctor_mF2DE86F939FC72560A145A7DF5EFCDBEB6CA3009 (KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 5.0f;
		__this->___speed_4 = (5.0f);
		// public float turnSpeed = 10.0f;
		__this->___turnSpeed_5 = (10.0f);
		// public float turboBoost = 2.0f;
		__this->___turboBoost_6 = (2.0f);
		// public float turboDuration = 3.0f;
		__this->___turboDuration_8 = (3.0f);
		// public float turboCooldown = 3.0f;
		__this->___turboCooldown_9 = (3.0f);
		// public float defaultAmplitude = 0.5f;
		__this->___defaultAmplitude_12 = (0.5f);
		// public float defaultDuration = 0.5f;
		__this->___defaultDuration_13 = (0.5f);
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
// System.Void KartController/<EnableMovementAfterDelay>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableMovementAfterDelayU3Ed__28__ctor_mDE67D600D18B0EB16AE38D8C5B638F071299AD93 (U3CEnableMovementAfterDelayU3Ed__28_tA7220F6444B49FD3DEA5748294DCE5664E1102A4* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void KartController/<EnableMovementAfterDelay>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableMovementAfterDelayU3Ed__28_System_IDisposable_Dispose_mDC1DBE3BCA777BD5D9E92D72482FB4E67B94B39C (U3CEnableMovementAfterDelayU3Ed__28_tA7220F6444B49FD3DEA5748294DCE5664E1102A4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean KartController/<EnableMovementAfterDelay>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnableMovementAfterDelayU3Ed__28_MoveNext_m24B78F63B2D79AB1040EE75176975895D2CDED4B (U3CEnableMovementAfterDelayU3Ed__28_tA7220F6444B49FD3DEA5748294DCE5664E1102A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_004e;
			}
			case 2:
			{
				goto IL_007f;
			}
			case 3:
			{
				goto IL_00c1;
			}
			case 4:
			{
				goto IL_0103;
			}
			case 5:
			{
				goto IL_0145;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(2.15f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (2.1500001f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// three.gameObject.SetActive(true);
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_4 = V_1;
		NullCheck(L_4);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = L_4->___three_26;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// yield return new WaitForSeconds(1.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (1.10000002f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_007f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// three.gameObject.SetActive(false);
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_8 = V_1;
		NullCheck(L_8);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = L_8->___three_26;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// two.gameObject.SetActive(true);
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_11 = V_1;
		NullCheck(L_11);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = L_11->___two_27;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		// yield return new WaitForSeconds(1.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_14 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_14, (1.10000002f), NULL);
		__this->___U3CU3E2__current_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_14);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_00c1:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// two.gameObject.SetActive(false);
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_15 = V_1;
		NullCheck(L_15);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = L_15->___two_27;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
		// one.gameObject.SetActive(true);
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_18 = V_1;
		NullCheck(L_18);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19 = L_18->___one_28;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_19, NULL);
		NullCheck(L_20);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)1, NULL);
		// yield return new WaitForSeconds(1.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_21 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_21, (1.5f), NULL);
		__this->___U3CU3E2__current_1 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_21);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_0103:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// one.gameObject.SetActive(false);
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_22 = V_1;
		NullCheck(L_22);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_23 = L_22->___one_28;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_23, NULL);
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)0, NULL);
		// go.gameObject.SetActive(true);
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_25 = V_1;
		NullCheck(L_25);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_26 = L_25->___go_29;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_26, NULL);
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)1, NULL);
		// yield return new WaitForSeconds(1.25f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_28 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_28, (1.25f), NULL);
		__this->___U3CU3E2__current_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_28);
		__this->___U3CU3E1__state_0 = 5;
		return (bool)1;
	}

IL_0145:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// go.gameObject.SetActive(false);
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_29 = V_1;
		NullCheck(L_29);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = L_29->___go_29;
		NullCheck(L_30);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_30, NULL);
		NullCheck(L_31);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_31, (bool)0, NULL);
		// canMove = true; // Enable kart movement
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_32 = V_1;
		NullCheck(L_32);
		L_32->___canMove_20 = (bool)1;
		// gameMusic.Play();
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_33 = V_1;
		NullCheck(L_33);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_34 = L_33->___gameMusic_15;
		NullCheck(L_34);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_34, NULL);
		// }
		return (bool)0;
	}
}
// System.Object KartController/<EnableMovementAfterDelay>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnableMovementAfterDelayU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3F96112B98F1E63E7680B35099F1D2CA2D93EC9A (U3CEnableMovementAfterDelayU3Ed__28_tA7220F6444B49FD3DEA5748294DCE5664E1102A4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void KartController/<EnableMovementAfterDelay>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableMovementAfterDelayU3Ed__28_System_Collections_IEnumerator_Reset_mC0DD7115B09F6DB33309C5D2C98DE10F0FE8CE8A (U3CEnableMovementAfterDelayU3Ed__28_tA7220F6444B49FD3DEA5748294DCE5664E1102A4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEnableMovementAfterDelayU3Ed__28_System_Collections_IEnumerator_Reset_mC0DD7115B09F6DB33309C5D2C98DE10F0FE8CE8A_RuntimeMethod_var)));
	}
}
// System.Object KartController/<EnableMovementAfterDelay>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnableMovementAfterDelayU3Ed__28_System_Collections_IEnumerator_get_Current_mA29CF72063A83BD1CBD07334E8926957C25AA943 (U3CEnableMovementAfterDelayU3Ed__28_tA7220F6444B49FD3DEA5748294DCE5664E1102A4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void KartController/<DisableTurboBoostAfterDelay>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableTurboBoostAfterDelayU3Ed__31__ctor_m58D7AA0C248BACF306382F65CBAF0E9E6139E11C (U3CDisableTurboBoostAfterDelayU3Ed__31_t94A547D8E7ACE48755B0FD9C3C62245F113D8839* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void KartController/<DisableTurboBoostAfterDelay>d__31::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableTurboBoostAfterDelayU3Ed__31_System_IDisposable_Dispose_m7AB307ECBB3DB1730D774DEA7B9C5F6428874ADA (U3CDisableTurboBoostAfterDelayU3Ed__31_t94A547D8E7ACE48755B0FD9C3C62245F113D8839* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean KartController/<DisableTurboBoostAfterDelay>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDisableTurboBoostAfterDelayU3Ed__31_MoveNext_mF15237A533BB3612CFF6DC699D2F6E932CBECE39 (U3CDisableTurboBoostAfterDelayU3Ed__31_t94A547D8E7ACE48755B0FD9C3C62245F113D8839* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(turboDuration); // Wait for the turbo duration
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___turboDuration_8;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isTurboBoosting = false;
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_7 = V_1;
		NullCheck(L_7);
		L_7->___isTurboBoosting_7 = (bool)0;
		// turboCoroutine = StartCoroutine(EnableTurboCooldownAfterDelay());
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_8 = V_1;
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_9 = V_1;
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_10 = V_1;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = KartController_EnableTurboCooldownAfterDelay_mAB957E7588E0ACA5F8AF6468447F6ECCAD815B3B(L_10, NULL);
		NullCheck(L_9);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_12;
		L_12 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_9, L_11, NULL);
		NullCheck(L_8);
		L_8->___turboCoroutine_25 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___turboCoroutine_25), (void*)L_12);
		// }
		return (bool)0;
	}
}
// System.Object KartController/<DisableTurboBoostAfterDelay>d__31::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisableTurboBoostAfterDelayU3Ed__31_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF15D883A852AC2E202C7077BE99D7CBCFBB18AC1 (U3CDisableTurboBoostAfterDelayU3Ed__31_t94A547D8E7ACE48755B0FD9C3C62245F113D8839* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void KartController/<DisableTurboBoostAfterDelay>d__31::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableTurboBoostAfterDelayU3Ed__31_System_Collections_IEnumerator_Reset_mC343C12D9D889F044E25A2E7268FF6A44FDFF116 (U3CDisableTurboBoostAfterDelayU3Ed__31_t94A547D8E7ACE48755B0FD9C3C62245F113D8839* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDisableTurboBoostAfterDelayU3Ed__31_System_Collections_IEnumerator_Reset_mC343C12D9D889F044E25A2E7268FF6A44FDFF116_RuntimeMethod_var)));
	}
}
// System.Object KartController/<DisableTurboBoostAfterDelay>d__31::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisableTurboBoostAfterDelayU3Ed__31_System_Collections_IEnumerator_get_Current_m41135DE7D7FA55045D1257918EB5251F14356A57 (U3CDisableTurboBoostAfterDelayU3Ed__31_t94A547D8E7ACE48755B0FD9C3C62245F113D8839* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void KartController/<EnableTurboCooldownAfterDelay>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableTurboCooldownAfterDelayU3Ed__32__ctor_mDA8B155F18810125C68A32F69A75E6E99A960359 (U3CEnableTurboCooldownAfterDelayU3Ed__32_t3B2F8A4F7E4B0EEA300C1332C0B42935E47ECD45* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void KartController/<EnableTurboCooldownAfterDelay>d__32::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableTurboCooldownAfterDelayU3Ed__32_System_IDisposable_Dispose_mA9ED8654A79FDFF138C585C841E52698D8AA7E2E (U3CEnableTurboCooldownAfterDelayU3Ed__32_t3B2F8A4F7E4B0EEA300C1332C0B42935E47ECD45* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean KartController/<EnableTurboCooldownAfterDelay>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnableTurboCooldownAfterDelayU3Ed__32_MoveNext_mCAF9C12DF4EB3AA84BC692FC81A5C085E565879C (U3CEnableTurboCooldownAfterDelayU3Ed__32_t3B2F8A4F7E4B0EEA300C1332C0B42935E47ECD45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0050;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// TurboIndicatorRed.SetActive(true); // Show red indicator
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_4 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___TurboIndicatorRed_23;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// TurboIndicatorGreen.SetActive(false); // Hide green indicator
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_6 = V_1;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___TurboIndicatorGreen_24;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// yield return new WaitForSeconds(turboCooldown); // Wait for the turbo cooldown duration
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_8 = V_1;
		NullCheck(L_8);
		float L_9 = L_8->___turboCooldown_9;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_10 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_10, L_9, NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0050:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// TurboIndicatorRed.SetActive(false); // Hide red indicator
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_11 = V_1;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___TurboIndicatorRed_23;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// TurboIndicatorGreen.SetActive(true); // Show green indicator
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_13 = V_1;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_13->___TurboIndicatorGreen_24;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
		// boostReady.Play();
		KartController_tC7FC623824537D9DA9B794F403D2F688D0757423* L_15 = V_1;
		NullCheck(L_15);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_16 = L_15->___boostReady_14;
		NullCheck(L_16);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_16, NULL);
		// }
		return (bool)0;
	}
}
// System.Object KartController/<EnableTurboCooldownAfterDelay>d__32::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnableTurboCooldownAfterDelayU3Ed__32_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE9895C3568D51AADFABEF066DBA348645E0E76D6 (U3CEnableTurboCooldownAfterDelayU3Ed__32_t3B2F8A4F7E4B0EEA300C1332C0B42935E47ECD45* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void KartController/<EnableTurboCooldownAfterDelay>d__32::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableTurboCooldownAfterDelayU3Ed__32_System_Collections_IEnumerator_Reset_m170EF7F48E71CA324C7F71F7FC6B7100C7A1F031 (U3CEnableTurboCooldownAfterDelayU3Ed__32_t3B2F8A4F7E4B0EEA300C1332C0B42935E47ECD45* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEnableTurboCooldownAfterDelayU3Ed__32_System_Collections_IEnumerator_Reset_m170EF7F48E71CA324C7F71F7FC6B7100C7A1F031_RuntimeMethod_var)));
	}
}
// System.Object KartController/<EnableTurboCooldownAfterDelay>d__32::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnableTurboCooldownAfterDelayU3Ed__32_System_Collections_IEnumerator_get_Current_mC1BC1CA2B6F2D64B5934D6E97EBFC28C478008E7 (U3CEnableTurboCooldownAfterDelayU3Ed__32_t3B2F8A4F7E4B0EEA300C1332C0B42935E47ECD45* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void KartEngineAudio::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KartEngineAudio_Start_mDDFE7D62ADAC5101431AB3ACA1A8F685A0F5EC18 (KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// kartRigidbody = transform.parent.GetComponent<Rigidbody>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		NullCheck(L_1);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_1, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___kartRigidbody_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kartRigidbody_14), (void*)L_2);
		// idle2Volume = 0f;
		__this->___idle2Volume_11 = (0.0f);
		// turboBoostVolume = 0f;
		__this->___turboBoostVolume_12 = (0.0f);
		// speedToPitchRatio = (maxPitch - minPitch) / (maxSpeed - minSpeed);
		float L_3 = __this->___maxPitch_16;
		float L_4 = __this->___minPitch_15;
		float L_5 = __this->___maxSpeed_18;
		float L_6 = __this->___minSpeed_17;
		__this->___speedToPitchRatio_19 = ((float)(((float)il2cpp_codegen_subtract(L_3, L_4))/((float)il2cpp_codegen_subtract(L_5, L_6))));
		// }
		return;
	}
}
// System.Void KartEngineAudio::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KartEngineAudio_Update_mB30D9DCCC8AB967DD3062D6DAC32126B2E5BD912 (KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (!gokartIdleAudio.isPlaying)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___gokartIdleAudio_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// gokartIdleAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___gokartIdleAudio_4;
		NullCheck(L_2);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
	}

IL_0018:
	{
		// isMoving = kartRigidbody.velocity.magnitude > 0.1f;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___kartRigidbody_14;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_3, NULL);
		V_2 = L_4;
		float L_5;
		L_5 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		__this->___isMoving_8 = (bool)((((float)L_5) > ((float)(0.100000001f)))? 1 : 0);
		// if (isMoving)
		bool L_6 = __this->___isMoving_8;
		if (!L_6)
		{
			goto IL_005e;
		}
	}
	{
		// if (!isForwardPressed)
		bool L_7 = __this->___isForwardPressed_9;
		if (L_7)
		{
			goto IL_007a;
		}
	}
	{
		// StartCoroutine(FadeInIdle2Volume());
		RuntimeObject* L_8;
		L_8 = KartEngineAudio_FadeInIdle2Volume_m73260F85F471293130DC91CE65216BDDED673E46(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_8, NULL);
		// isForwardPressed = true;
		__this->___isForwardPressed_9 = (bool)1;
		goto IL_007a;
	}

IL_005e:
	{
		// if (isForwardPressed)
		bool L_10 = __this->___isForwardPressed_9;
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		// StartCoroutine(FadeOutIdle2Volume());
		RuntimeObject* L_11;
		L_11 = KartEngineAudio_FadeOutIdle2Volume_mB546E8AEC9F2C048138E9F726A821DF74ADCBD4B(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_12;
		L_12 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_11, NULL);
		// isForwardPressed = false;
		__this->___isForwardPressed_9 = (bool)0;
	}

IL_007a:
	{
		// if (idle2Volume > 0f && !gokartIdle2Audio.isPlaying)
		float L_13 = __this->___idle2Volume_11;
		if ((!(((float)L_13) > ((float)(0.0f)))))
		{
			goto IL_009f;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14 = __this->___gokartIdle2Audio_5;
		NullCheck(L_14);
		bool L_15;
		L_15 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_14, NULL);
		if (L_15)
		{
			goto IL_009f;
		}
	}
	{
		// gokartIdle2Audio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_16 = __this->___gokartIdle2Audio_5;
		NullCheck(L_16);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_16, NULL);
	}

IL_009f:
	{
		// if (Input.GetKeyDown(KeyCode.Joystick2Button0))
		bool L_17;
		L_17 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)370), NULL);
		if (!L_17)
		{
			goto IL_00c7;
		}
	}
	{
		// if (!isSpacePressed)
		bool L_18 = __this->___isSpacePressed_10;
		if (L_18)
		{
			goto IL_00e2;
		}
	}
	{
		// turboBoostAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_19 = __this->___turboBoostAudio_6;
		NullCheck(L_19);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_19, NULL);
		// isSpacePressed = true;
		__this->___isSpacePressed_10 = (bool)1;
		goto IL_00e2;
	}

IL_00c7:
	{
		// else if (Input.GetKeyUp(KeyCode.Joystick2Button0))
		bool L_20;
		L_20 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(((int32_t)370), NULL);
		if (!L_20)
		{
			goto IL_00e2;
		}
	}
	{
		// if (isSpacePressed)
		bool L_21 = __this->___isSpacePressed_10;
		if (!L_21)
		{
			goto IL_00e2;
		}
	}
	{
		// isSpacePressed = false;
		__this->___isSpacePressed_10 = (bool)0;
	}

IL_00e2:
	{
		// float carSpeed = kartRigidbody.velocity.magnitude;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_22 = __this->___kartRigidbody_14;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_22, NULL);
		V_2 = L_23;
		float L_24;
		L_24 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		V_0 = L_24;
		// float targetPitch = minPitch + (carSpeed - minSpeed) * speedToPitchRatio;
		float L_25 = __this->___minPitch_15;
		float L_26 = V_0;
		float L_27 = __this->___minSpeed_17;
		float L_28 = __this->___speedToPitchRatio_19;
		V_1 = ((float)il2cpp_codegen_add(L_25, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_27)), L_28))));
		// gokartIdleAudio.pitch = targetPitch;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_29 = __this->___gokartIdleAudio_4;
		float L_30 = V_1;
		NullCheck(L_29);
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_29, L_30, NULL);
		// gokartIdle2Audio.pitch = targetPitch;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_31 = __this->___gokartIdle2Audio_5;
		float L_32 = V_1;
		NullCheck(L_31);
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_31, L_32, NULL);
		// turboBoostAudio.pitch = targetPitch;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_33 = __this->___turboBoostAudio_6;
		float L_34 = V_1;
		NullCheck(L_33);
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_33, L_34, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator KartEngineAudio::FadeInIdle2Volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KartEngineAudio_FadeInIdle2Volume_m73260F85F471293130DC91CE65216BDDED673E46 (KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeInIdle2VolumeU3Ed__18_t6A3EE5BDD5543078646783DE4B6CE4F165EA121A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeInIdle2VolumeU3Ed__18_t6A3EE5BDD5543078646783DE4B6CE4F165EA121A* L_0 = (U3CFadeInIdle2VolumeU3Ed__18_t6A3EE5BDD5543078646783DE4B6CE4F165EA121A*)il2cpp_codegen_object_new(U3CFadeInIdle2VolumeU3Ed__18_t6A3EE5BDD5543078646783DE4B6CE4F165EA121A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeInIdle2VolumeU3Ed__18__ctor_m12A162582C0978AF93D6B91461C8F56AF3C670C5(L_0, 0, NULL);
		U3CFadeInIdle2VolumeU3Ed__18_t6A3EE5BDD5543078646783DE4B6CE4F165EA121A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator KartEngineAudio::FadeOutIdle2Volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KartEngineAudio_FadeOutIdle2Volume_mB546E8AEC9F2C048138E9F726A821DF74ADCBD4B (KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeOutIdle2VolumeU3Ed__19_t72048F7F9F93FFFA07CC33E223C279AB4C62704C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeOutIdle2VolumeU3Ed__19_t72048F7F9F93FFFA07CC33E223C279AB4C62704C* L_0 = (U3CFadeOutIdle2VolumeU3Ed__19_t72048F7F9F93FFFA07CC33E223C279AB4C62704C*)il2cpp_codegen_object_new(U3CFadeOutIdle2VolumeU3Ed__19_t72048F7F9F93FFFA07CC33E223C279AB4C62704C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeOutIdle2VolumeU3Ed__19__ctor_mFA16A54B4FC404EC4A1858B3314D7268BEF1CD0E(L_0, 0, NULL);
		U3CFadeOutIdle2VolumeU3Ed__19_t72048F7F9F93FFFA07CC33E223C279AB4C62704C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void KartEngineAudio::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KartEngineAudio__ctor_m2AB8555083FFA0140F5EE93A4FB97E1CBCA16F2F (KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* __this, const RuntimeMethod* method) 
{
	{
		// public float fadeDuration = 1f;  // Duration in seconds for the volume to fade
		__this->___fadeDuration_7 = (1.0f);
		// private float minPitch = 1f;
		__this->___minPitch_15 = (1.0f);
		// private float maxPitch = 3f;
		__this->___maxPitch_16 = (3.0f);
		// private float maxSpeed = 50f;
		__this->___maxSpeed_18 = (50.0f);
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
// System.Void KartEngineAudio/<FadeInIdle2Volume>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInIdle2VolumeU3Ed__18__ctor_m12A162582C0978AF93D6B91461C8F56AF3C670C5 (U3CFadeInIdle2VolumeU3Ed__18_t6A3EE5BDD5543078646783DE4B6CE4F165EA121A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void KartEngineAudio/<FadeInIdle2Volume>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInIdle2VolumeU3Ed__18_System_IDisposable_Dispose_m8898240C1240CA7D0E7D3EBFB7C0EA4E6D9162E3 (U3CFadeInIdle2VolumeU3Ed__18_t6A3EE5BDD5543078646783DE4B6CE4F165EA121A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean KartEngineAudio/<FadeInIdle2Volume>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeInIdle2VolumeU3Ed__18_MoveNext_mA063C9265ED3045CC6F2F93CE5312203F31F31C9 (U3CFadeInIdle2VolumeU3Ed__18_t6A3EE5BDD5543078646783DE4B6CE4F165EA121A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0080;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float timer = 0f;
		__this->___U3CtimerU3E5__2_3 = (0.0f);
		goto IL_0087;
	}

IL_002b:
	{
		// timer += Time.deltaTime;
		float L_4 = __this->___U3CtimerU3E5__2_3;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtimerU3E5__2_3 = ((float)il2cpp_codegen_add(L_4, L_5));
		// idle2Volume = Mathf.Lerp(0f, 0.2f, timer / fadeDuration);
		KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* L_6 = V_1;
		float L_7 = __this->___U3CtimerU3E5__2_3;
		KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* L_8 = V_1;
		NullCheck(L_8);
		float L_9 = L_8->___fadeDuration_7;
		float L_10;
		L_10 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((0.0f), (0.200000003f), ((float)(L_7/L_9)), NULL);
		NullCheck(L_6);
		L_6->___idle2Volume_11 = L_10;
		// gokartIdle2Audio.volume = idle2Volume;
		KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* L_11 = V_1;
		NullCheck(L_11);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = L_11->___gokartIdle2Audio_5;
		KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* L_13 = V_1;
		NullCheck(L_13);
		float L_14 = L_13->___idle2Volume_11;
		NullCheck(L_12);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_12, L_14, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0080:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0087:
	{
		// while (timer < fadeDuration)
		float L_15 = __this->___U3CtimerU3E5__2_3;
		KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* L_16 = V_1;
		NullCheck(L_16);
		float L_17 = L_16->___fadeDuration_7;
		if ((((float)L_15) < ((float)L_17)))
		{
			goto IL_002b;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object KartEngineAudio/<FadeInIdle2Volume>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInIdle2VolumeU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4794F787E54398ABA217D44A18BEB12878125A1F (U3CFadeInIdle2VolumeU3Ed__18_t6A3EE5BDD5543078646783DE4B6CE4F165EA121A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void KartEngineAudio/<FadeInIdle2Volume>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInIdle2VolumeU3Ed__18_System_Collections_IEnumerator_Reset_m037CAE9EA6B6BA24CD76447BAD7FB7E2B66BDE47 (U3CFadeInIdle2VolumeU3Ed__18_t6A3EE5BDD5543078646783DE4B6CE4F165EA121A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeInIdle2VolumeU3Ed__18_System_Collections_IEnumerator_Reset_m037CAE9EA6B6BA24CD76447BAD7FB7E2B66BDE47_RuntimeMethod_var)));
	}
}
// System.Object KartEngineAudio/<FadeInIdle2Volume>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInIdle2VolumeU3Ed__18_System_Collections_IEnumerator_get_Current_mEF624E31F06F596503B780D3ED24C6D820BA4BEE (U3CFadeInIdle2VolumeU3Ed__18_t6A3EE5BDD5543078646783DE4B6CE4F165EA121A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void KartEngineAudio/<FadeOutIdle2Volume>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutIdle2VolumeU3Ed__19__ctor_mFA16A54B4FC404EC4A1858B3314D7268BEF1CD0E (U3CFadeOutIdle2VolumeU3Ed__19_t72048F7F9F93FFFA07CC33E223C279AB4C62704C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void KartEngineAudio/<FadeOutIdle2Volume>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutIdle2VolumeU3Ed__19_System_IDisposable_Dispose_mCB16EF28B630BE612B9C99ABAFCBAA9696770253 (U3CFadeOutIdle2VolumeU3Ed__19_t72048F7F9F93FFFA07CC33E223C279AB4C62704C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean KartEngineAudio/<FadeOutIdle2Volume>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeOutIdle2VolumeU3Ed__19_MoveNext_m28F511959DAD76589903EED3ABB1C6301ECF59E8 (U3CFadeOutIdle2VolumeU3Ed__19_t72048F7F9F93FFFA07CC33E223C279AB4C62704C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_008d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float timer = 0f;
		__this->___U3CtimerU3E5__2_3 = (0.0f);
		// float originalVolume = idle2Volume;
		KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___idle2Volume_11;
		__this->___U3CoriginalVolumeU3E5__3_4 = L_5;
		goto IL_0094;
	}

IL_0037:
	{
		// timer += Time.deltaTime;
		float L_6 = __this->___U3CtimerU3E5__2_3;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtimerU3E5__2_3 = ((float)il2cpp_codegen_add(L_6, L_7));
		// idle2Volume = Mathf.Lerp(originalVolume, 0f, timer / fadeDuration);
		KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* L_8 = V_1;
		float L_9 = __this->___U3CoriginalVolumeU3E5__3_4;
		float L_10 = __this->___U3CtimerU3E5__2_3;
		KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* L_11 = V_1;
		NullCheck(L_11);
		float L_12 = L_11->___fadeDuration_7;
		float L_13;
		L_13 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_9, (0.0f), ((float)(L_10/L_12)), NULL);
		NullCheck(L_8);
		L_8->___idle2Volume_11 = L_13;
		// gokartIdle2Audio.volume = idle2Volume;
		KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* L_14 = V_1;
		NullCheck(L_14);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_15 = L_14->___gokartIdle2Audio_5;
		KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* L_16 = V_1;
		NullCheck(L_16);
		float L_17 = L_16->___idle2Volume_11;
		NullCheck(L_15);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_15, L_17, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_008d:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0094:
	{
		// while (timer < fadeDuration)
		float L_18 = __this->___U3CtimerU3E5__2_3;
		KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* L_19 = V_1;
		NullCheck(L_19);
		float L_20 = L_19->___fadeDuration_7;
		if ((((float)L_18) < ((float)L_20)))
		{
			goto IL_0037;
		}
	}
	{
		// gokartIdle2Audio.Stop();
		KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* L_21 = V_1;
		NullCheck(L_21);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_22 = L_21->___gokartIdle2Audio_5;
		NullCheck(L_22);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_22, NULL);
		// idle2Volume = 0f;
		KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* L_23 = V_1;
		NullCheck(L_23);
		L_23->___idle2Volume_11 = (0.0f);
		// gokartIdle2Audio.volume = idle2Volume;
		KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* L_24 = V_1;
		NullCheck(L_24);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_25 = L_24->___gokartIdle2Audio_5;
		KartEngineAudio_t3F0DA357A51C74FD418BE13F9B75AF3DE84A56B1* L_26 = V_1;
		NullCheck(L_26);
		float L_27 = L_26->___idle2Volume_11;
		NullCheck(L_25);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_25, L_27, NULL);
		// }
		return (bool)0;
	}
}
// System.Object KartEngineAudio/<FadeOutIdle2Volume>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeOutIdle2VolumeU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1767713244CFAD7FC584EAF6178BAB2CB424DE81 (U3CFadeOutIdle2VolumeU3Ed__19_t72048F7F9F93FFFA07CC33E223C279AB4C62704C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void KartEngineAudio/<FadeOutIdle2Volume>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutIdle2VolumeU3Ed__19_System_Collections_IEnumerator_Reset_m1170F7F42D8385FEAF7C015A9D0485F87BD3DCD6 (U3CFadeOutIdle2VolumeU3Ed__19_t72048F7F9F93FFFA07CC33E223C279AB4C62704C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeOutIdle2VolumeU3Ed__19_System_Collections_IEnumerator_Reset_m1170F7F42D8385FEAF7C015A9D0485F87BD3DCD6_RuntimeMethod_var)));
	}
}
// System.Object KartEngineAudio/<FadeOutIdle2Volume>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeOutIdle2VolumeU3Ed__19_System_Collections_IEnumerator_get_Current_mD13DB973F06BF6DCF3189D1D232E1E219895EE4E (U3CFadeOutIdle2VolumeU3Ed__19_t72048F7F9F93FFFA07CC33E223C279AB4C62704C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void materialchange::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void materialchange_Awake_mD948D925F44A9024C9CD737031218A35DAFDCBBB (materialchange_t9F61BC955D7584547B471FA988094044512FD06E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE0AB031D54D343290E5ED4B5D59DD5F9DB84DED);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject gameObject1 = GameObject.Find("GoCart");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralCE0AB031D54D343290E5ED4B5D59DD5F9DB84DED, NULL);
		V_0 = L_0;
		// cart = gameObject1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		__this->___cart_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cart_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void materialchange::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void materialchange_Update_mDB399D38F45D834E91E1488664CCCE0691C0EC1C (materialchange_t9F61BC955D7584547B471FA988094044512FD06E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_3 = NULL;
	{
		// foreach (GameObject obj in objectsToChange)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___objectsToChange_8;
		V_0 = L_0;
		V_1 = 0;
		goto IL_005c;
	}

IL_000b:
	{
		// foreach (GameObject obj in objectsToChange)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// float distance = Vector3.Distance(cart.transform.position, obj.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___cart_4;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_2;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11;
		L_11 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_7, L_10, NULL);
		// Renderer rend = obj.GetComponent<Renderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_2;
		NullCheck(L_12);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_13;
		L_13 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_12, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		V_3 = L_13;
		// if (distance < distanceThreshold)
		float L_14 = __this->___distanceThreshold_7;
		if ((!(((float)L_11) < ((float)L_14))))
		{
			goto IL_004c;
		}
	}
	{
		// rend.material = ChangeMaterial;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_15 = V_3;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = __this->___ChangeMaterial_6;
		NullCheck(L_15);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_15, L_16, NULL);
		goto IL_0058;
	}

IL_004c:
	{
		// rend.material = BaseMaterial;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_17 = V_3;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___BaseMaterial_5;
		NullCheck(L_17);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_17, L_18, NULL);
	}

IL_0058:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005c:
	{
		// foreach (GameObject obj in objectsToChange)
		int32_t L_20 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = V_0;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void materialchange::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void materialchange__ctor_m93D8874FD8F269FB9D49E1290DC80C34458BC7F7 (materialchange_t9F61BC955D7584547B471FA988094044512FD06E* __this, const RuntimeMethod* method) 
{
	{
		// public float distanceThreshold = 5f;
		__this->___distanceThreshold_7 = (5.0f);
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
// System.Void MenuManager::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_QuitGame_m0D5FC887CD47175D152C439A544655208B6647DD (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void MenuManager::MainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_MainMenu_mA69E323F96C18157037A98687CA44C101DE7D537 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameFinishMusic != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___GameFinishMusic_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(GameFinishMusic);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___GameFinishMusic_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0019:
	{
		// SceneManager.LoadScene(menuoption);
		int32_t L_3 = __this->___menuoption_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_3, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_StartGame_m24E9FA197C3694B75918B1103C9C2400CAD67BC4 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameFinishMusic != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___GameFinishMusic_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(GameFinishMusic);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___GameFinishMusic_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0019:
	{
		// if (MainMenuMusic != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___MainMenuMusic_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// Destroy(MainMenuMusic);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___MainMenuMusic_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
	}

IL_0032:
	{
		// SceneManager.LoadScene(menuoption);
		int32_t L_6 = __this->___menuoption_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_6, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::howToplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_howToplay_mFB18F0BECDE015AEBC9C6E850FA7327E1B1E2777 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(menuoption);
		int32_t L_0 = __this->___menuoption_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_0, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_settings_m697DBF727E05B62464AC02FA75AB292219D63CA7 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(menuoption);
		int32_t L_0 = __this->___menuoption_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_0, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::Gameover()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Gameover_m8A2D79415E45BE0BB3F6808D078A0476A1837A6F (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(menuoption);
		int32_t L_0 = __this->___menuoption_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_0, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::Credits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Credits_m76EF052191C88CF5148A05387D085DED9FF56CD3 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(menuoption);
		int32_t L_0 = __this->___menuoption_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_0, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager__ctor_m07A22DFDD90E3164393F8BDE06DAEF5AFA786CF2 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
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
// System.Void MuscAudioSettingsToggle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MuscAudioSettingsToggle_Start_m7DCA1417FF5CA6296175DBE9B3F978C1145A27E5 (MuscAudioSettingsToggle_t9959C6F231B1E38A1B2BBF1D127448A5EA9C46DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MuscAudioSettingsToggle_ToggleMusicAudio_m8D2750205CB687A6245CC7DB115BDA246617E711_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99581A5687F41CEEB66F59D92090CDC6687D4529);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFC95FF421C97E8993C552BB3C87315D70CE3E3F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// musicAudioSlider = GetComponent<Slider>();
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0;
		L_0 = Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA(__this, Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		__this->___musicAudioSlider_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___musicAudioSlider_4), (void*)L_0);
		// if (musicAudioSlider != null)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___musicAudioSlider_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		// int toggleState = PlayerPrefs.GetInt("MusicAudioMuted", 1);
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteralBFC95FF421C97E8993C552BB3C87315D70CE3E3F, 1, NULL);
		V_0 = L_3;
		// musicAudioSlider.value = toggleState;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___musicAudioSlider_4;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, ((float)L_5));
		// musicAudioSlider.onValueChanged.AddListener(ToggleMusicAudio);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->___musicAudioSlider_4;
		NullCheck(L_6);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_7;
		L_7 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_6, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_8 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_8, __this, (intptr_t)((void*)MuscAudioSettingsToggle_ToggleMusicAudio_m8D2750205CB687A6245CC7DB115BDA246617E711_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_7, L_8, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		return;
	}

IL_0050:
	{
		// Debug.LogError("Slider component not found on the same game object as MusicAudioSettingsToggle script.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral99581A5687F41CEEB66F59D92090CDC6687D4529, NULL);
		// }
		return;
	}
}
// System.Void MuscAudioSettingsToggle::ToggleMusicAudio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MuscAudioSettingsToggle_ToggleMusicAudio_m8D2750205CB687A6245CC7DB115BDA246617E711 (MuscAudioSettingsToggle_t9959C6F231B1E38A1B2BBF1D127448A5EA9C46DB* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// if (value == 0f)
		float L_0 = ___0_value;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0010;
		}
	}
	{
		// ToggleAudioOff();
		MuscAudioSettingsToggle_ToggleAudioOff_m29A74BB2731A4C5C2DEBD91454E61B837EEA58DE(__this, NULL);
		goto IL_0016;
	}

IL_0010:
	{
		// ToggleAudioOn();
		MuscAudioSettingsToggle_ToggleAudioOn_m7BA17ABF21D82ED4AA74E8EC2F1A7BE1673EBB0B(__this, NULL);
	}

IL_0016:
	{
		// StartCoroutine(ChangeMuteStatus(value));
		float L_1 = ___0_value;
		RuntimeObject* L_2;
		L_2 = MuscAudioSettingsToggle_ChangeMuteStatus_mD6C0339334629694A8B03636E70174EBA1D5F494(__this, L_1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void MuscAudioSettingsToggle::ToggleAudioOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MuscAudioSettingsToggle_ToggleAudioOff_m29A74BB2731A4C5C2DEBD91454E61B837EEA58DE (MuscAudioSettingsToggle_t9959C6F231B1E38A1B2BBF1D127448A5EA9C46DB* __this, const RuntimeMethod* method) 
{
	{
		// audioSourceoff.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSourceoff_5;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void MuscAudioSettingsToggle::ToggleAudioOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MuscAudioSettingsToggle_ToggleAudioOn_m7BA17ABF21D82ED4AA74E8EC2F1A7BE1673EBB0B (MuscAudioSettingsToggle_t9959C6F231B1E38A1B2BBF1D127448A5EA9C46DB* __this, const RuntimeMethod* method) 
{
	{
		// audioSourceon.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSourceon_6;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator MuscAudioSettingsToggle::ChangeMuteStatus(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MuscAudioSettingsToggle_ChangeMuteStatus_mD6C0339334629694A8B03636E70174EBA1D5F494 (MuscAudioSettingsToggle_t9959C6F231B1E38A1B2BBF1D127448A5EA9C46DB* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CChangeMuteStatusU3Ed__7_t8BF0B4F05EBE5B77D5CFEB62C8B8E5D840C7ED90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CChangeMuteStatusU3Ed__7_t8BF0B4F05EBE5B77D5CFEB62C8B8E5D840C7ED90* L_0 = (U3CChangeMuteStatusU3Ed__7_t8BF0B4F05EBE5B77D5CFEB62C8B8E5D840C7ED90*)il2cpp_codegen_object_new(U3CChangeMuteStatusU3Ed__7_t8BF0B4F05EBE5B77D5CFEB62C8B8E5D840C7ED90_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CChangeMuteStatusU3Ed__7__ctor_mB27F7A2B3E19BE83D1086F6C2B146B4BF875F472(L_0, 0, NULL);
		U3CChangeMuteStatusU3Ed__7_t8BF0B4F05EBE5B77D5CFEB62C8B8E5D840C7ED90* L_1 = L_0;
		float L_2 = ___0_value;
		NullCheck(L_1);
		L_1->___value_2 = L_2;
		return L_1;
	}
}
// System.Void MuscAudioSettingsToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MuscAudioSettingsToggle__ctor_m89BD4B3FA56F996B87FA4348BD5491E0C3E81630 (MuscAudioSettingsToggle_t9959C6F231B1E38A1B2BBF1D127448A5EA9C46DB* __this, const RuntimeMethod* method) 
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
// System.Void MuscAudioSettingsToggle/<ChangeMuteStatus>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeMuteStatusU3Ed__7__ctor_mB27F7A2B3E19BE83D1086F6C2B146B4BF875F472 (U3CChangeMuteStatusU3Ed__7_t8BF0B4F05EBE5B77D5CFEB62C8B8E5D840C7ED90* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MuscAudioSettingsToggle/<ChangeMuteStatus>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeMuteStatusU3Ed__7_System_IDisposable_Dispose_m91FF2FCDC0CAC4F63A0681150EC3E0945E889466 (U3CChangeMuteStatusU3Ed__7_t8BF0B4F05EBE5B77D5CFEB62C8B8E5D840C7ED90* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MuscAudioSettingsToggle/<ChangeMuteStatus>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CChangeMuteStatusU3Ed__7_MoveNext_mCB652605EABDE54DF49CE89C047BCCF37A988191 (U3CChangeMuteStatusU3Ed__7_t8BF0B4F05EBE5B77D5CFEB62C8B8E5D840C7ED90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFC95FF421C97E8993C552BB3C87315D70CE3E3F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (value < .5f)
		float L_3 = __this->___value_2;
		if ((!(((float)L_3) < ((float)(0.5f)))))
		{
			goto IL_0044;
		}
	}
	{
		// yield return new WaitForSeconds(2);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003d:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0044:
	{
		// PlayerPrefs.SetInt("MusicAudioMuted", (int)value);
		float L_5 = __this->___value_2;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralBFC95FF421C97E8993C552BB3C87315D70CE3E3F, il2cpp_codegen_cast_double_to_int<int32_t>(L_5), NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// }
		return (bool)0;
	}
}
// System.Object MuscAudioSettingsToggle/<ChangeMuteStatus>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CChangeMuteStatusU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m64C0932B7D34731E3B12D3E91D904587D1868BFA (U3CChangeMuteStatusU3Ed__7_t8BF0B4F05EBE5B77D5CFEB62C8B8E5D840C7ED90* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MuscAudioSettingsToggle/<ChangeMuteStatus>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeMuteStatusU3Ed__7_System_Collections_IEnumerator_Reset_mBB725BE0D370C573F7D3323E76C2FBB3B5E2680D (U3CChangeMuteStatusU3Ed__7_t8BF0B4F05EBE5B77D5CFEB62C8B8E5D840C7ED90* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CChangeMuteStatusU3Ed__7_System_Collections_IEnumerator_Reset_mBB725BE0D370C573F7D3323E76C2FBB3B5E2680D_RuntimeMethod_var)));
	}
}
// System.Object MuscAudioSettingsToggle/<ChangeMuteStatus>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CChangeMuteStatusU3Ed__7_System_Collections_IEnumerator_get_Current_m366CB514512B5107017EEFA547539D9447F60A3C (U3CChangeMuteStatusU3Ed__7_t8BF0B4F05EBE5B77D5CFEB62C8B8E5D840C7ED90* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void MusicAudioSettingsToggle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicAudioSettingsToggle_Start_m2AE911320E2A3FC6A38E5F54C657ABCF432EE6E9 (MusicAudioSettingsToggle_t6F4293A2E9AD82DCDA48163953FEC6727E0C0F73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MusicAudioSettingsToggle_ToggleMusicAudio_mBD5FE142FCB66AD8F700EC9B76983D08D4A34BFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral760865C55F22E06913EE529E43E0A4EC6D4C2957);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99581A5687F41CEEB66F59D92090CDC6687D4529);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFC95FF421C97E8993C552BB3C87315D70CE3E3F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// musicAudioSlider = GetComponent<Slider>();
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0;
		L_0 = Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA(__this, Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		__this->___musicAudioSlider_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___musicAudioSlider_4), (void*)L_0);
		// if (musicAudioSlider != null)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___musicAudioSlider_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0068;
		}
	}
	{
		// int toggleState = PlayerPrefs.GetInt("MusicAudioMuted", 1);
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteralBFC95FF421C97E8993C552BB3C87315D70CE3E3F, 1, NULL);
		V_0 = L_3;
		// musicAudioSlider.value = toggleState;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___musicAudioSlider_4;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, ((float)L_5));
		// musicAudioSlider.onValueChanged.AddListener(ToggleMusicAudio);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->___musicAudioSlider_4;
		NullCheck(L_6);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_7;
		L_7 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_6, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_8 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_8, __this, (intptr_t)((void*)MusicAudioSettingsToggle_ToggleMusicAudio_mBD5FE142FCB66AD8F700EC9B76983D08D4A34BFB_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_7, L_8, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// toggle = toggleState.ToString();
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		__this->___toggle_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toggle_6), (void*)L_9);
		// PlayerPrefs.SetInt("toggle",1);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral760865C55F22E06913EE529E43E0A4EC6D4C2957, 1, NULL);
		return;
	}

IL_0068:
	{
		// Debug.LogError("Slider component not found on the same game object as MusicAudioSettingsToggle script.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral99581A5687F41CEEB66F59D92090CDC6687D4529, NULL);
		// }
		return;
	}
}
// System.Void MusicAudioSettingsToggle::ToggleMusicAudio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicAudioSettingsToggle_ToggleMusicAudio_mBD5FE142FCB66AD8F700EC9B76983D08D4A34BFB (MusicAudioSettingsToggle_t6F4293A2E9AD82DCDA48163953FEC6727E0C0F73* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFC95FF421C97E8993C552BB3C87315D70CE3E3F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == 0f)
		float L_0 = ___0_value;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_000e;
		}
	}
	{
		// ToggleAudioOff();
		MusicAudioSettingsToggle_ToggleAudioOff_m5FEDE7318E9DBBFB2CA8D1FE789A3342E3382839(__this, NULL);
	}

IL_000e:
	{
		// PlayerPrefs.SetInt("MusicAudioMuted", (int)value);
		float L_1 = ___0_value;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralBFC95FF421C97E8993C552BB3C87315D70CE3E3F, il2cpp_codegen_cast_double_to_int<int32_t>(L_1), NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// }
		return;
	}
}
// System.Void MusicAudioSettingsToggle::ToggleAudioOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicAudioSettingsToggle_ToggleAudioOff_m5FEDE7318E9DBBFB2CA8D1FE789A3342E3382839 (MusicAudioSettingsToggle_t6F4293A2E9AD82DCDA48163953FEC6727E0C0F73* __this, const RuntimeMethod* method) 
{
	{
		// audioSourceoff.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSourceoff_5;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void MusicAudioSettingsToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicAudioSettingsToggle__ctor_m112B2BAF838741600C6DDE688854C33571EFB907 (MusicAudioSettingsToggle_t6F4293A2E9AD82DCDA48163953FEC6727E0C0F73* __this, const RuntimeMethod* method) 
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
// System.Void MusicControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicControl_Update_m94E6AACB79D5772EC4647D3AA3AA85EC25423507 (MusicControl_t7A811B941D113BF9D1C4E98EC9842C9A727AA4E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5793A0486CA0270FF49AD51E2176B4E15A6F700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFC95FF421C97E8993C552BB3C87315D70CE3E3F);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// int toggleState = PlayerPrefs.GetInt("MusicAudioMuted", 1);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteralBFC95FF421C97E8993C552BB3C87315D70CE3E3F, 1, NULL);
		// if (toggleState == 0)
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		// if (!isMusicMuted)
		bool L_1 = __this->___isMusicMuted_5;
		if (L_1)
		{
			goto IL_0060;
		}
	}
	{
		// musicAudio.mute=true;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___musicAudio_4;
		NullCheck(L_2);
		AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09(L_2, (bool)1, NULL);
		// isMusicMuted = true;
		__this->___isMusicMuted_5 = (bool)1;
		return;
	}

IL_0029:
	{
		// float volume = PlayerPrefs.GetFloat("MusicVolume", 1f);
		float L_3;
		L_3 = PlayerPrefs_GetFloat_m4A9B511E92C8BDEBB64D9B2557126FB030895A4D(_stringLiteralB5793A0486CA0270FF49AD51E2176B4E15A6F700, (1.0f), NULL);
		V_0 = L_3;
		// if (isMusicMuted)
		bool L_4 = __this->___isMusicMuted_5;
		if (!L_4)
		{
			goto IL_0054;
		}
	}
	{
		// musicAudio.mute = false;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->___musicAudio_4;
		NullCheck(L_5);
		AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09(L_5, (bool)0, NULL);
		// isMusicMuted = false;
		__this->___isMusicMuted_5 = (bool)0;
	}

IL_0054:
	{
		// musicAudio.volume = volume;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___musicAudio_4;
		float L_7 = V_0;
		NullCheck(L_6);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_6, L_7, NULL);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void MusicControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicControl__ctor_mFD93CE3399B217CBBB35A5625F33F842B1F4C848 (MusicControl_t7A811B941D113BF9D1C4E98EC9842C9A727AA4E6* __this, const RuntimeMethod* method) 
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
// System.Void MusicScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicScript_Start_mDE9D2FBE2F5FA874C274ED5B6A7B786E5EF99C9C (MusicScript_tEEB0A217279048BA96B8957DFBDE7FEDD5079265* __this, const RuntimeMethod* method) 
{
	{
		// Load();
		MusicScript_Load_m60AE640028C5D65DB2FDFFFAD34F03F1BF9FA606(__this, NULL);
		// }
		return;
	}
}
// System.Void MusicScript::changeVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicScript_changeVolume_m1C448113492EBCAD1DEDB573A1AA39CEDD2A2A29 (MusicScript_tEEB0A217279048BA96B8957DFBDE7FEDD5079265* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5793A0486CA0270FF49AD51E2176B4E15A6F700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4D13C29F7C7E7A94282996234457ADFD7DB6206);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float musicVolume = mastervolume * musicVolumeSlider.value;
		float L_0 = __this->___mastervolume_4;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___musicVolumeSlider_5;
		NullCheck(L_1);
		float L_2;
		L_2 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		V_0 = ((float)il2cpp_codegen_multiply(L_0, L_2));
		// PlayerPrefs.SetFloat("MusicVolume", musicVolume);//goes to a different script
		float L_3 = V_0;
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteralB5793A0486CA0270FF49AD51E2176B4E15A6F700, L_3, NULL);
		// PlayerPrefs.SetFloat("MusicSlider", musicVolumeSlider.value);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___musicVolumeSlider_5;
		NullCheck(L_4);
		float L_5;
		L_5 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_4);
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteralD4D13C29F7C7E7A94282996234457ADFD7DB6206, L_5, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// Save();
		MusicScript_Save_mDF0BFA462311C9D564F11A9FEC782815CCD95574(__this, NULL);
		// }
		return;
	}
}
// System.Void MusicScript::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicScript_Load_m60AE640028C5D65DB2FDFFFAD34F03F1BF9FA606 (MusicScript_tEEB0A217279048BA96B8957DFBDE7FEDD5079265* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4D13C29F7C7E7A94282996234457ADFD7DB6206);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!PlayerPrefs.HasKey(musicSliderKey))
		String_t* L_0 = __this->___musicSliderKey_6;
		bool L_1;
		L_1 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(L_0, NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// PlayerPrefs.SetFloat(musicSliderKey, defaultMusicVolume);
		String_t* L_2 = __this->___musicSliderKey_6;
		float L_3 = __this->___defaultMusicVolume_7;
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(L_2, L_3, NULL);
	}

IL_001e:
	{
		// musicVolumeSlider.value = PlayerPrefs.GetFloat("MusicSlider");
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___musicVolumeSlider_5;
		float L_5;
		L_5 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteralD4D13C29F7C7E7A94282996234457ADFD7DB6206, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, L_5);
		// mastervolume = PlayerPrefs.GetFloat("MasterVolume");//playerprefs
		float L_6;
		L_6 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC, NULL);
		__this->___mastervolume_4 = L_6;
		// }
		return;
	}
}
// System.Void MusicScript::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicScript_Save_mDF0BFA462311C9D564F11A9FEC782815CCD95574 (MusicScript_tEEB0A217279048BA96B8957DFBDE7FEDD5079265* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4D13C29F7C7E7A94282996234457ADFD7DB6206);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetFloat("MusicSlider", musicVolumeSlider.value);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___musicVolumeSlider_5;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteralD4D13C29F7C7E7A94282996234457ADFD7DB6206, L_1, NULL);
		// }
		return;
	}
}
// System.Void MusicScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicScript_Update_m62776DB2014CB16BB4A77F9EDC14AEF6623613A6 (MusicScript_tEEB0A217279048BA96B8957DFBDE7FEDD5079265* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5793A0486CA0270FF49AD51E2176B4E15A6F700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4D13C29F7C7E7A94282996234457ADFD7DB6206);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// mastervolume = PlayerPrefs.GetFloat("MasterVolume");//playerprefs
		float L_0;
		L_0 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC, NULL);
		__this->___mastervolume_4 = L_0;
		// float musicVolume = mastervolume * musicVolumeSlider.value;
		float L_1 = __this->___mastervolume_4;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___musicVolumeSlider_5;
		NullCheck(L_2);
		float L_3;
		L_3 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_2);
		V_0 = ((float)il2cpp_codegen_multiply(L_1, L_3));
		// PlayerPrefs.SetFloat("MusicVolume", musicVolume);//goes to a different script
		float L_4 = V_0;
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteralB5793A0486CA0270FF49AD51E2176B4E15A6F700, L_4, NULL);
		// PlayerPrefs.SetFloat("MusicSlider", musicVolumeSlider.value);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = __this->___musicVolumeSlider_5;
		NullCheck(L_5);
		float L_6;
		L_6 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_5);
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteralD4D13C29F7C7E7A94282996234457ADFD7DB6206, L_6, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// Save();
		MusicScript_Save_mDF0BFA462311C9D564F11A9FEC782815CCD95574(__this, NULL);
		// }
		return;
	}
}
// System.Void MusicScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicScript__ctor_m809DBEABD2938C774C76CB8F239366C745FFA07E (MusicScript_tEEB0A217279048BA96B8957DFBDE7FEDD5079265* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4D13C29F7C7E7A94282996234457ADFD7DB6206);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string musicSliderKey = "MusicSlider";
		__this->___musicSliderKey_6 = _stringLiteralD4D13C29F7C7E7A94282996234457ADFD7DB6206;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___musicSliderKey_6), (void*)_stringLiteralD4D13C29F7C7E7A94282996234457ADFD7DB6206);
		// float defaultMusicVolume = 0.5f;
		__this->___defaultMusicVolume_7 = (0.5f);
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
// System.Void MusicToggle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicToggle_Start_m415B9EE7229159FD0E2BCFC0041B10D9739ECD7E (MusicToggle_tBC0DADF4CF2CDD4252C10F9A099EC8B7EBDCADF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MusicToggle_OnSliderValueChanged_m6382739409D6A10DDDDC58E54401A3240666FC7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// slider = GetComponent<Slider>();
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0;
		L_0 = Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA(__this, Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		__this->___slider_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slider_5), (void*)L_0);
		// slider.onValueChanged.AddListener(OnSliderValueChanged);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___slider_5;
		NullCheck(L_1);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_2;
		L_2 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_1, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_3 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_3, __this, (intptr_t)((void*)MusicToggle_OnSliderValueChanged_m6382739409D6A10DDDDC58E54401A3240666FC7A_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_2, L_3, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MusicToggle::OnSliderValueChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicToggle_OnSliderValueChanged_m6382739409D6A10DDDDC58E54401A3240666FC7A (MusicToggle_tBC0DADF4CF2CDD4252C10F9A099EC8B7EBDCADF6* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// if (value > 0f)
		float L_0 = ___0_value;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_000e;
		}
	}
	{
		// ToggleAudioOn();
		MusicToggle_ToggleAudioOn_m76FAEF003909ABD791A5353F60D004E7FB2474D6(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void MusicToggle::ToggleAudioOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicToggle_ToggleAudioOn_m76FAEF003909ABD791A5353F60D004E7FB2474D6 (MusicToggle_tBC0DADF4CF2CDD4252C10F9A099EC8B7EBDCADF6* __this, const RuntimeMethod* method) 
{
	{
		// audioSourceon.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSourceon_4;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void MusicToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicToggle__ctor_m0F288334C5BB7A186C1C89BA674C31776571D25F (MusicToggle_tBC0DADF4CF2CDD4252C10F9A099EC8B7EBDCADF6* __this, const RuntimeMethod* method) 
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
// System.Void obstacletoggle::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void obstacletoggle_Awake_m9E565D544B66F5CE1C60F054975A7E46153FB4D5 (obstacletoggle_t3B29415C052DC4B0744DD8DCF0449F5618D5B07F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&obstacletoggle_OnSliderValueChanged_m1BED84106D21F2E8E237406D5576F694EC6A1213_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// slider = GetComponent<Slider>();
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0;
		L_0 = Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA(__this, Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		__this->___slider_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slider_4), (void*)L_0);
		// slider.onValueChanged.AddListener(OnSliderValueChanged);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___slider_4;
		NullCheck(L_1);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_2;
		L_2 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_1, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_3 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_3, __this, (intptr_t)((void*)obstacletoggle_OnSliderValueChanged_m1BED84106D21F2E8E237406D5576F694EC6A1213_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_2, L_3, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void obstacletoggle::OnSliderValueChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void obstacletoggle_OnSliderValueChanged_m1BED84106D21F2E8E237406D5576F694EC6A1213 (obstacletoggle_t3B29415C052DC4B0744DD8DCF0449F5618D5B07F* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EAA5D3B540EDAAC8DA7917FA6B7B3D852C64587);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("ObstacleToggleState", (int)value);
		float L_0 = ___0_value;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral9EAA5D3B540EDAAC8DA7917FA6B7B3D852C64587, il2cpp_codegen_cast_double_to_int<int32_t>(L_0), NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// }
		return;
	}
}
// System.Void obstacletoggle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void obstacletoggle_Start_m762FEC4E2DADF65B1BE1F44DC4331DC7BF3CCF53 (obstacletoggle_t3B29415C052DC4B0744DD8DCF0449F5618D5B07F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EAA5D3B540EDAAC8DA7917FA6B7B3D852C64587);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int toggleState = PlayerPrefs.GetInt("ObstacleToggleState", 1);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteral9EAA5D3B540EDAAC8DA7917FA6B7B3D852C64587, 1, NULL);
		V_0 = L_0;
		// slider.value = toggleState;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___slider_4;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, ((float)L_2));
		// }
		return;
	}
}
// System.Void obstacletoggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void obstacletoggle__ctor_m7B459557CA116B7B49A5316910E19BD577152DE9 (obstacletoggle_t3B29415C052DC4B0744DD8DCF0449F5618D5B07F* __this, const RuntimeMethod* method) 
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
// System.Void ObstacleToggleAudio::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleToggleAudio_Start_m16DEBACBC4CC84525D307D832112A7DF0A7A023C (ObstacleToggleAudio_tBA0EBC11DD0C2358493ACBCF0E4C1E4E0E70225C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObstacleToggleAudio_ToggleObstacleState_mAA68B8CDB88927B5F65D70EBFF76C7F10C16CC7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obstacleAudioSlider = GetComponent<Slider>();
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0;
		L_0 = Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA(__this, Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		__this->___obstacleAudioSlider_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___obstacleAudioSlider_4), (void*)L_0);
		// obstacleAudioSlider.onValueChanged.AddListener(ToggleObstacleState);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___obstacleAudioSlider_4;
		NullCheck(L_1);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_2;
		L_2 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_1, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_3 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_3, __this, (intptr_t)((void*)ObstacleToggleAudio_ToggleObstacleState_mAA68B8CDB88927B5F65D70EBFF76C7F10C16CC7B_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_2, L_3, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ObstacleToggleAudio::ToggleObstacleState(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleToggleAudio_ToggleObstacleState_mAA68B8CDB88927B5F65D70EBFF76C7F10C16CC7B (ObstacleToggleAudio_tBA0EBC11DD0C2358493ACBCF0E4C1E4E0E70225C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// if (value == 0f)
		float L_0 = ___0_value;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_000e;
		}
	}
	{
		// ToggleAudioOff();
		ObstacleToggleAudio_ToggleAudioOff_mC6BB3AB9392616C25449F642EB8A3B2A9F318FE9(__this, NULL);
	}

IL_000e:
	{
		// if (value>=.5f)
		float L_1 = ___0_value;
		if ((!(((float)L_1) >= ((float)(0.5f)))))
		{
			goto IL_001c;
		}
	}
	{
		// ToggleAudioOn();
		ObstacleToggleAudio_ToggleAudioOn_m8A5875AB0C9A115515F7E68D23F25F051DFAC274(__this, NULL);
	}

IL_001c:
	{
		// StartCoroutine(ChangeStatus(value));
		float L_2 = ___0_value;
		RuntimeObject* L_3;
		L_3 = ObstacleToggleAudio_ChangeStatus_m52B8819FB9DE7D23719FD7ECF29B068357AAE5B5(__this, L_2, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void ObstacleToggleAudio::ToggleAudioOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleToggleAudio_ToggleAudioOff_mC6BB3AB9392616C25449F642EB8A3B2A9F318FE9 (ObstacleToggleAudio_tBA0EBC11DD0C2358493ACBCF0E4C1E4E0E70225C* __this, const RuntimeMethod* method) 
{
	{
		// audioSourceoff.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSourceoff_5;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void ObstacleToggleAudio::ToggleAudioOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleToggleAudio_ToggleAudioOn_m8A5875AB0C9A115515F7E68D23F25F051DFAC274 (ObstacleToggleAudio_tBA0EBC11DD0C2358493ACBCF0E4C1E4E0E70225C* __this, const RuntimeMethod* method) 
{
	{
		// audioSourceon.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSourceon_6;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ObstacleToggleAudio::ChangeStatus(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObstacleToggleAudio_ChangeStatus_m52B8819FB9DE7D23719FD7ECF29B068357AAE5B5 (ObstacleToggleAudio_tBA0EBC11DD0C2358493ACBCF0E4C1E4E0E70225C* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CChangeStatusU3Ed__7_tBD82D746E034EB3A4D111203BC8CB70667B173E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CChangeStatusU3Ed__7_tBD82D746E034EB3A4D111203BC8CB70667B173E4* L_0 = (U3CChangeStatusU3Ed__7_tBD82D746E034EB3A4D111203BC8CB70667B173E4*)il2cpp_codegen_object_new(U3CChangeStatusU3Ed__7_tBD82D746E034EB3A4D111203BC8CB70667B173E4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CChangeStatusU3Ed__7__ctor_mF4BD10633A12C2D8732A9F22C2671E5DABD8B2E7(L_0, 0, NULL);
		U3CChangeStatusU3Ed__7_tBD82D746E034EB3A4D111203BC8CB70667B173E4* L_1 = L_0;
		float L_2 = ___0_value;
		NullCheck(L_1);
		L_1->___value_2 = L_2;
		return L_1;
	}
}
// System.Void ObstacleToggleAudio::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleToggleAudio__ctor_m2CF2D6A7E9AE3783DE33FCE43CE1B3FD2EBCFE26 (ObstacleToggleAudio_tBA0EBC11DD0C2358493ACBCF0E4C1E4E0E70225C* __this, const RuntimeMethod* method) 
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
// System.Void ObstacleToggleAudio/<ChangeStatus>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeStatusU3Ed__7__ctor_mF4BD10633A12C2D8732A9F22C2671E5DABD8B2E7 (U3CChangeStatusU3Ed__7_tBD82D746E034EB3A4D111203BC8CB70667B173E4* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ObstacleToggleAudio/<ChangeStatus>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeStatusU3Ed__7_System_IDisposable_Dispose_mB65AFA23E5C322F1AAADC41D206222E8F9385B95 (U3CChangeStatusU3Ed__7_tBD82D746E034EB3A4D111203BC8CB70667B173E4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ObstacleToggleAudio/<ChangeStatus>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CChangeStatusU3Ed__7_MoveNext_m832AFEDA6012458A10D05E257B913AFC5F3A309D (U3CChangeStatusU3Ed__7_tBD82D746E034EB3A4D111203BC8CB70667B173E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (value < .5f)
		float L_3 = __this->___value_2;
		if ((!(((float)L_3) < ((float)(0.5f)))))
		{
			goto IL_0044;
		}
	}
	{
		// yield return new WaitForSeconds(2);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003d:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0044:
	{
		// }
		return (bool)0;
	}
}
// System.Object ObstacleToggleAudio/<ChangeStatus>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CChangeStatusU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAA18EAA387B8A448C0EFFD7F0B306907AD66C5FF (U3CChangeStatusU3Ed__7_tBD82D746E034EB3A4D111203BC8CB70667B173E4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ObstacleToggleAudio/<ChangeStatus>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeStatusU3Ed__7_System_Collections_IEnumerator_Reset_m133054CC7C04C55518E58635276BE03E9D9EC794 (U3CChangeStatusU3Ed__7_tBD82D746E034EB3A4D111203BC8CB70667B173E4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CChangeStatusU3Ed__7_System_Collections_IEnumerator_Reset_m133054CC7C04C55518E58635276BE03E9D9EC794_RuntimeMethod_var)));
	}
}
// System.Object ObstacleToggleAudio/<ChangeStatus>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CChangeStatusU3Ed__7_System_Collections_IEnumerator_get_Current_m1351DF097E9960017BD1CA946D0339A2BC4D868F (U3CChangeStatusU3Ed__7_tBD82D746E034EB3A4D111203BC8CB70667B173E4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void ProxAudio::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxAudio_Update_mD5834CE1B35E6AE8BD8A7B7B4A877B6C2EEBB5CF (ProxAudio_tB3CB2E943E9F5B4720ED11A55C2BAC8D30C6AD57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// Vector3 toObstacle = obstacle.transform.position - player.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___obstacle_5;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___player_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_5, NULL);
		V_0 = L_6;
		// float dotProduct = Vector3.Dot(player.transform.forward, toObstacle.normalized);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___player_4;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		float L_11;
		L_11 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_9, L_10, NULL);
		// float distance = toObstacle.magnitude;
		float L_12;
		L_12 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		V_1 = L_12;
		// if (dotProduct > 0f)
		if ((!(((float)L_11) > ((float)(0.0f)))))
		{
			goto IL_00b3;
		}
	}
	{
		// if (distance < approachingThreshold && !approachingAudio.isPlaying)
		float L_13 = V_1;
		float L_14 = __this->___approachingThreshold_8;
		if ((!(((float)L_13) < ((float)L_14))))
		{
			goto IL_0072;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_15 = __this->___approachingAudio_6;
		NullCheck(L_15);
		bool L_16;
		L_16 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_15, NULL);
		if (L_16)
		{
			goto IL_0072;
		}
	}
	{
		// approachingAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_17 = __this->___approachingAudio_6;
		NullCheck(L_17);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_17, NULL);
	}

IL_0072:
	{
		// if (distance < nearbyThreshold)
		float L_18 = V_1;
		float L_19 = __this->___nearbyThreshold_9;
		if ((!(((float)L_18) < ((float)L_19))))
		{
			goto IL_0097;
		}
	}
	{
		// if (!isNearby)
		bool L_20 = __this->___isNearby_10;
		if (L_20)
		{
			goto IL_00be;
		}
	}
	{
		// nearbyAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_21 = __this->___nearbyAudio_7;
		NullCheck(L_21);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_21, NULL);
		// isNearby = true;
		__this->___isNearby_10 = (bool)1;
		goto IL_00be;
	}

IL_0097:
	{
		// if (isNearby)
		bool L_22 = __this->___isNearby_10;
		if (!L_22)
		{
			goto IL_00be;
		}
	}
	{
		// nearbyAudio.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_23 = __this->___nearbyAudio_7;
		NullCheck(L_23);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_23, NULL);
		// isNearby = false;
		__this->___isNearby_10 = (bool)0;
		goto IL_00be;
	}

IL_00b3:
	{
		// approachingAudio.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_24 = __this->___approachingAudio_6;
		NullCheck(L_24);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_24, NULL);
	}

IL_00be:
	{
		// Debug.DrawRay(player.transform.position, toObstacle, Color.red);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___player_4;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29;
		L_29 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53(L_27, L_28, L_29, NULL);
		// }
		return;
	}
}
// System.Void ProxAudio::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxAudio__ctor_m70CB836FFE4CD070036FC31A3C4548ED7758E453 (ProxAudio_tB3CB2E943E9F5B4720ED11A55C2BAC8D30C6AD57* __this, const RuntimeMethod* method) 
{
	{
		// public float approachingThreshold = 20f;
		__this->___approachingThreshold_8 = (20.0f);
		// public float nearbyThreshold = 5f;
		__this->___nearbyThreshold_9 = (5.0f);
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
// System.Void RaceResultDisplay::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaceResultDisplay_Start_m914729B2826372D39C6A5FE5CA87768909F62CD1 (RaceResultDisplay_tC801B506E3EA61B7CF254E9BC501C7692E14D3FF* __this, const RuntimeMethod* method) 
{
	{
		// countdownText.gameObject.SetActive(false);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___countdownText_6;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void RaceResultDisplay::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaceResultDisplay_Update_mADDBA0F776CE138567C91DE39DF6E2F8373DC021 (RaceResultDisplay_tC801B506E3EA61B7CF254E9BC501C7692E14D3FF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (isCountdownActive)
		bool L_0 = __this->___isCountdownActive_9;
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		// countdownTimer -= Time.deltaTime;
		float L_1 = __this->___countdownTimer_8;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___countdownTimer_8 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// if (countdownTimer <= 0f)
		float L_3 = __this->___countdownTimer_8;
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_002e;
		}
	}
	{
		// StartRace();
		RaceResultDisplay_StartRace_mC9C4512B396E2A34522F28AB4B034CB405C41471(__this, NULL);
		return;
	}

IL_002e:
	{
		// int countdownValue = Mathf.CeilToInt(countdownTimer);
		float L_4 = __this->___countdownTimer_8;
		int32_t L_5;
		L_5 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(L_4, NULL);
		V_0 = L_5;
		// countdownText.text = countdownValue.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___countdownText_6;
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_7);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void RaceResultDisplay::StartCountdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaceResultDisplay_StartCountdown_m795E569C628AFEDB60E31254CDBE29BAC52C4C6D (RaceResultDisplay_tC801B506E3EA61B7CF254E9BC501C7692E14D3FF* __this, const RuntimeMethod* method) 
{
	{
		// countdownText.gameObject.SetActive(true);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___countdownText_6;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// countdownTimer = countdownDuration;
		float L_2 = __this->___countdownDuration_7;
		__this->___countdownTimer_8 = L_2;
		// isCountdownActive = true;
		__this->___isCountdownActive_9 = (bool)1;
		// }
		return;
	}
}
// System.Void RaceResultDisplay::StartRace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaceResultDisplay_StartRace_mC9C4512B396E2A34522F28AB4B034CB405C41471 (RaceResultDisplay_tC801B506E3EA61B7CF254E9BC501C7692E14D3FF* __this, const RuntimeMethod* method) 
{
	{
		// countdownText.gameObject.SetActive(false);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___countdownText_6;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void RaceResultDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaceResultDisplay__ctor_mE02D35E4A6088A9CF58831906083F30C9D85CFCF (RaceResultDisplay_tC801B506E3EA61B7CF254E9BC501C7692E14D3FF* __this, const RuntimeMethod* method) 
{
	{
		// private float countdownDuration = 3f;
		__this->___countdownDuration_7 = (3.0f);
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
// System.Void RacerScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RacerScript_Start_mCD801E78128B515537A19D26BF99690ABBE8DA71 (RacerScript_t4419949F9EC2F3921F38209894DC692CA92F0D50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EAA5D3B540EDAAC8DA7917FA6B7B3D852C64587);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int toggleState = PlayerPrefs.GetInt("ObstacleToggleState", 1);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteral9EAA5D3B540EDAAC8DA7917FA6B7B3D852C64587, 1, NULL);
		// if (toggleState == 1)
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		// enableObstalces = true;
		__this->___enableObstalces_13 = (bool)1;
		// Obstacles.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Obstacles_25;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		return;
	}

IL_0022:
	{
		// enableObstalces = false;
		__this->___enableObstalces_13 = (bool)0;
		// Obstacles.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___Obstacles_25;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void RacerScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RacerScript_Update_m8D20C438710F6251175CCE679DB98B16E630E05A (RacerScript_t4419949F9EC2F3921F38209894DC692CA92F0D50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B3C9B272FDF645AFAA44EA0F880D990DC940576);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D7A380F57A3C3781379B5934E57D022B32CE3C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6304D939B5E7316D4FC90ABDBA87526905C62FAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7C67FA7AB1AA11DB00E435412ED77B978CB932A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (laps == 2)
		int32_t L_0 = __this->___laps_7;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_001d;
		}
	}
	{
		// if (enableObstalces == true)
		bool L_1 = __this->___enableObstalces_13;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// Obstacles.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___Obstacles_25;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
	}

IL_001d:
	{
		// if (startTimer == true && !raceFinished)
		bool L_3 = __this->___startTimer_10;
		if (!L_3)
		{
			goto IL_015d;
		}
	}
	{
		bool L_4 = __this->___raceFinished_39;
		if (L_4)
		{
			goto IL_015d;
		}
	}
	{
		// laptime = laptime + Time.deltaTime;// this is the timer running deltaTime
		float L_5 = __this->___laptime_4;
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___laptime_4 = ((float)il2cpp_codegen_add(L_5, L_6));
		// totalTime = totalTime + Time.deltaTime;// this is the total time for the run
		float L_7 = __this->___totalTime_6;
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___totalTime_6 = ((float)il2cpp_codegen_add(L_7, L_8));
		// Ttime.text = totalTime.ToString("F2");// this is the time for the total
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___Ttime_19;
		float* L_10 = (&__this->___totalTime_6);
		String_t* L_11;
		L_11 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_10, _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_11);
		// Ltime.text = "Lap Time: " + laptime.ToString("F2");// this is the print out for the text in the corner of the canvas
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___Ltime_16;
		float* L_13 = (&__this->___laptime_4);
		String_t* L_14;
		L_14 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_13, _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3D7A380F57A3C3781379B5934E57D022B32CE3C1, L_14, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_15);
		// LapsText.text = "Lap: " + laps.ToString();// this is the laps text on the canvas
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->___LapsText_18;
		int32_t* L_17 = (&__this->___laps_7);
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_17, NULL);
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6304D939B5E7316D4FC90ABDBA87526905C62FAD, L_18, NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_19);
		// if (laps == requiredLaps) // If the required number of laps is completed, stop the race
		int32_t L_20 = __this->___laps_7;
		int32_t L_21 = __this->___requiredLaps_40;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_015d;
		}
	}
	{
		// raceFinished = true;
		__this->___raceFinished_39 = (bool)1;
		// startTimer = false;
		__this->___startTimer_10 = (bool)0;
		// TtimePullThrough.text = "Total Race Time: " + totalTime.ToString("F2") + "s";// this is the time for the total
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_22 = __this->___TtimePullThrough_21;
		float* L_23 = (&__this->___totalTime_6);
		String_t* L_24;
		L_24 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_23, _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		String_t* L_25;
		L_25 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralD7C67FA7AB1AA11DB00E435412ED77B978CB932A, L_24, _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465, NULL);
		NullCheck(L_22);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, L_25);
		// BtimePullThrough.text = "Best Lap Time: " + besttime.ToString("F2") + "s";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_26 = __this->___BtimePullThrough_20;
		float* L_27 = (&__this->___besttime_5);
		String_t* L_28;
		L_28 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_27, _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		String_t* L_29;
		L_29 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral3B3C9B272FDF645AFAA44EA0F880D990DC940576, L_28, _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465, NULL);
		NullCheck(L_26);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, L_29);
		// raceResultDisplay.gameObject.SetActive(true); // enable/show race results
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___raceResultDisplay_22;
		NullCheck(L_30);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_30, NULL);
		NullCheck(L_31);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_31, (bool)1, NULL);
		// TimerBackground.gameObject.SetActive(false); // disable/hide race stats available during game play
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___TimerBackground_23;
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_32, NULL);
		NullCheck(L_33);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)0, NULL);
		// BoostBackground.gameObject.SetActive(false); // disable/hide race stats available during game play
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = __this->___BoostBackground_24;
		NullCheck(L_34);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_34, NULL);
		NullCheck(L_35);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)0, NULL);
	}

IL_015d:
	{
		// }
		return;
	}
}
// System.Void RacerScript::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RacerScript_OnTriggerEnter_mD8228B1073C5AB98FF1A064FA886AB958A2D9F22 (RacerScript_t4419949F9EC2F3921F38209894DC692CA92F0D50* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4D3AA769B0C42987ECC664D15D995161A345F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BAEE56D6871F5FA35FE0FF6A81FC506155E0CDB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25D1388FEC241BDE86FA5E308075CE0F474C82DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FDFA88503F50E300AE45098B09A76361E8EBFA9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral353891B2ED86A3F78B9C5E69012B5A9ED3406AAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D7A380F57A3C3781379B5934E57D022B32CE3C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43FDFD729FD0D77F97F5EAB2065180AF69EFCDFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57BCA31F16691BBED219CEAED25B6E566883AC72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BFD1DBEE76067C7A3266DF23AC53B499CAE13C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70933958120FAC92DE3FA30E8B268B6610F147CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F54B3AA75720888F63FABC5B561F62BF5869916);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9754B0BB16C9F1175FA015CB1DA2FB319D8D6B28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C111E1EF7622B381034EA303CD2B8465119C421);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF344379D2073374A8BD9DDC14B2158CD228CF42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4DC82DD22CE5006E713D328EEF77553293F9906);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC9972A6536A73074BEE8654D068F8820228545B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.name == "StartFinish")// find game object with the name StartFinish
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral25D1388FEC241BDE86FA5E308075CE0F474C82DE, NULL);
		if (!L_3)
		{
			goto IL_01fd;
		}
	}
	{
		// if (startTimer == false)//start the timer in the stopped position awaiting start
		bool L_4 = __this->___startTimer_10;
		if (L_4)
		{
			goto IL_009e;
		}
	}
	{
		// startTimer = true;// start the timer here
		__this->___startTimer_10 = (bool)1;
		// laptime = 0;
		__this->___laptime_4 = (0.0f);
		// if (canTrigger == true)
		bool L_5 = __this->___canTrigger_38;
		if (!L_5)
		{
			goto IL_004a;
		}
	}
	{
		// laps++;//add laps to counter here
		int32_t L_6 = __this->___laps_7;
		__this->___laps_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_004a:
	{
		// checkpoint1 = false;// start with checkpoint 1 as false
		__this->___checkpoint1_27 = (bool)0;
		// checkpoint2 = false;// start with chechpoint 2 as false
		__this->___checkpoint2_28 = (bool)0;
		// checkpoint3 = false;
		__this->___checkpoint3_29 = (bool)0;
		// checkpoint4 = false;
		__this->___checkpoint4_30 = (bool)0;
		// checkpoint5 = false;
		__this->___checkpoint5_31 = (bool)0;
		// checkpoint6 = false;
		__this->___checkpoint6_32 = (bool)0;
		// checkpoint7 = false;
		__this->___checkpoint7_33 = (bool)0;
		// checkpoint8 = false;
		__this->___checkpoint8_34 = (bool)0;
		// checkpoint9 = false;
		__this->___checkpoint9_35 = (bool)0;
		// checkpoint10 = false;
		__this->___checkpoint10_36 = (bool)0;
		// checkpoint11 = false;
		__this->___checkpoint11_37 = (bool)0;
		// canTrigger = false;
		__this->___canTrigger_38 = (bool)0;
	}

IL_009e:
	{
		// if (checkpoint1 == true && checkpoint2 == true && checkpoint3 == true && checkpoint4 == true && checkpoint5 == true && checkpoint6 == true && checkpoint7 == true && checkpoint8 == true && checkpoint9 == true && checkpoint10 == true && checkpoint11 == true)
		bool L_7 = __this->___checkpoint1_27;
		if (!L_7)
		{
			goto IL_01fd;
		}
	}
	{
		bool L_8 = __this->___checkpoint2_28;
		if (!L_8)
		{
			goto IL_01fd;
		}
	}
	{
		bool L_9 = __this->___checkpoint3_29;
		if (!L_9)
		{
			goto IL_01fd;
		}
	}
	{
		bool L_10 = __this->___checkpoint4_30;
		if (!L_10)
		{
			goto IL_01fd;
		}
	}
	{
		bool L_11 = __this->___checkpoint5_31;
		if (!L_11)
		{
			goto IL_01fd;
		}
	}
	{
		bool L_12 = __this->___checkpoint6_32;
		if (!L_12)
		{
			goto IL_01fd;
		}
	}
	{
		bool L_13 = __this->___checkpoint7_33;
		if (!L_13)
		{
			goto IL_01fd;
		}
	}
	{
		bool L_14 = __this->___checkpoint8_34;
		if (!L_14)
		{
			goto IL_01fd;
		}
	}
	{
		bool L_15 = __this->___checkpoint9_35;
		if (!L_15)
		{
			goto IL_01fd;
		}
	}
	{
		bool L_16 = __this->___checkpoint10_36;
		if (!L_16)
		{
			goto IL_01fd;
		}
	}
	{
		bool L_17 = __this->___checkpoint11_37;
		if (!L_17)
		{
			goto IL_01fd;
		}
	}
	{
		// startTimer = false;
		__this->___startTimer_10 = (bool)0;
		// if (besttime == 0)
		float L_18 = __this->___besttime_5;
		if ((!(((float)L_18) == ((float)(0.0f)))))
		{
			goto IL_0137;
		}
	}
	{
		// besttime = laptime;
		float L_19 = __this->___laptime_4;
		__this->___besttime_5 = L_19;
	}

IL_0137:
	{
		// if (laptime < besttime)
		float L_20 = __this->___laptime_4;
		float L_21 = __this->___besttime_5;
		if ((!(((float)L_20) < ((float)L_21))))
		{
			goto IL_0151;
		}
	}
	{
		// besttime = laptime;
		float L_22 = __this->___laptime_4;
		__this->___besttime_5 = L_22;
	}

IL_0151:
	{
		// Btime.text = "Best Time: " + besttime.ToString("F2");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_23 = __this->___Btime_17;
		float* L_24 = (&__this->___besttime_5);
		String_t* L_25;
		L_25 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_24, _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		String_t* L_26;
		L_26 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral70933958120FAC92DE3FA30E8B268B6610F147CD, L_25, NULL);
		NullCheck(L_23);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_26);
		// if (laps == finishedRace)
		int32_t L_27 = __this->___laps_7;
		int32_t L_28 = __this->___finishedRace_11;
		if ((!(((uint32_t)L_27) == ((uint32_t)L_28))))
		{
			goto IL_01fd;
		}
	}
	{
		// startTimer = false;
		__this->___startTimer_10 = (bool)0;
		// laptime = 0;
		__this->___laptime_4 = (0.0f);
		// Ltime.text = "Lap Time: " + laptime.ToString("F2");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_29 = __this->___Ltime_16;
		float* L_30 = (&__this->___laptime_4);
		String_t* L_31;
		L_31 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_30, _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		String_t* L_32;
		L_32 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3D7A380F57A3C3781379B5934E57D022B32CE3C1, L_31, NULL);
		NullCheck(L_29);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, L_32);
		// LapsText.text = "Race Over" + laps.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_33 = __this->___LapsText_18;
		int32_t* L_34 = (&__this->___laps_7);
		String_t* L_35;
		L_35 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_34, NULL);
		String_t* L_36;
		L_36 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9754B0BB16C9F1175FA015CB1DA2FB319D8D6B28, L_35, NULL);
		NullCheck(L_33);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_33, L_36);
		// leftControllerObject.GetComponent<XRRayInteractor>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___leftControllerObject_14;
		NullCheck(L_37);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_38;
		L_38 = GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62(L_37, GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62_RuntimeMethod_var);
		NullCheck(L_38);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_38, (bool)1, NULL);
		// rightControllerObject.GetComponent<XRRayInteractor>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___rightControllerObject_15;
		NullCheck(L_39);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_40;
		L_40 = GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62(L_39, GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62_RuntimeMethod_var);
		NullCheck(L_40);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_40, (bool)1, NULL);
	}

IL_01fd:
	{
		// if (other.gameObject.name == "checkpoint1")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_41 = ___0_other;
		NullCheck(L_41);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42;
		L_42 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_41, NULL);
		NullCheck(L_42);
		String_t* L_43;
		L_43 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_42, NULL);
		bool L_44;
		L_44 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_43, _stringLiteral353891B2ED86A3F78B9C5E69012B5A9ED3406AAF, NULL);
		if (!L_44)
		{
			goto IL_0225;
		}
	}
	{
		// checkpoint1 = true;
		__this->___checkpoint1_27 = (bool)1;
		// Debug.Log("checkpoint1");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral353891B2ED86A3F78B9C5E69012B5A9ED3406AAF, NULL);
	}

IL_0225:
	{
		// if (other.gameObject.name == "checkpoint2")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_45 = ___0_other;
		NullCheck(L_45);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46;
		L_46 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_45, NULL);
		NullCheck(L_46);
		String_t* L_47;
		L_47 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_46, NULL);
		bool L_48;
		L_48 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_47, _stringLiteral2FDFA88503F50E300AE45098B09A76361E8EBFA9, NULL);
		if (!L_48)
		{
			goto IL_024d;
		}
	}
	{
		// checkpoint2 = true;
		__this->___checkpoint2_28 = (bool)1;
		// Debug.Log("checkpoint2");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2FDFA88503F50E300AE45098B09A76361E8EBFA9, NULL);
	}

IL_024d:
	{
		// if (other.gameObject.name == "checkpoint3")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_49 = ___0_other;
		NullCheck(L_49);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50;
		L_50 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_49, NULL);
		NullCheck(L_50);
		String_t* L_51;
		L_51 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_50, NULL);
		bool L_52;
		L_52 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_51, _stringLiteral43FDFD729FD0D77F97F5EAB2065180AF69EFCDFC, NULL);
		if (!L_52)
		{
			goto IL_0275;
		}
	}
	{
		// checkpoint3 = true;
		__this->___checkpoint3_29 = (bool)1;
		// Debug.Log("checkpoint3");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral43FDFD729FD0D77F97F5EAB2065180AF69EFCDFC, NULL);
	}

IL_0275:
	{
		// if (other.gameObject.name == "checkpoint4")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_53 = ___0_other;
		NullCheck(L_53);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54;
		L_54 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_53, NULL);
		NullCheck(L_54);
		String_t* L_55;
		L_55 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_54, NULL);
		bool L_56;
		L_56 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_55, _stringLiteral6BFD1DBEE76067C7A3266DF23AC53B499CAE13C1, NULL);
		if (!L_56)
		{
			goto IL_029d;
		}
	}
	{
		// checkpoint4 = true;
		__this->___checkpoint4_30 = (bool)1;
		// Debug.Log("checkpoint4");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6BFD1DBEE76067C7A3266DF23AC53B499CAE13C1, NULL);
	}

IL_029d:
	{
		// if (other.gameObject.name == "checkpoint5")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_57 = ___0_other;
		NullCheck(L_57);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58;
		L_58 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_57, NULL);
		NullCheck(L_58);
		String_t* L_59;
		L_59 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_58, NULL);
		bool L_60;
		L_60 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_59, _stringLiteralAF344379D2073374A8BD9DDC14B2158CD228CF42, NULL);
		if (!L_60)
		{
			goto IL_02c5;
		}
	}
	{
		// checkpoint5 = true;
		__this->___checkpoint5_31 = (bool)1;
		// Debug.Log("checkpoint5");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralAF344379D2073374A8BD9DDC14B2158CD228CF42, NULL);
	}

IL_02c5:
	{
		// if (other.gameObject.name == "checkpoint6")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_61 = ___0_other;
		NullCheck(L_61);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62;
		L_62 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_61, NULL);
		NullCheck(L_62);
		String_t* L_63;
		L_63 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_62, NULL);
		bool L_64;
		L_64 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_63, _stringLiteral1BAEE56D6871F5FA35FE0FF6A81FC506155E0CDB, NULL);
		if (!L_64)
		{
			goto IL_02ed;
		}
	}
	{
		// checkpoint6 = true;
		__this->___checkpoint6_32 = (bool)1;
		// Debug.Log("checkpoint6");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1BAEE56D6871F5FA35FE0FF6A81FC506155E0CDB, NULL);
	}

IL_02ed:
	{
		// if (other.gameObject.name == "checkpoint7")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_65 = ___0_other;
		NullCheck(L_65);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66;
		L_66 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_65, NULL);
		NullCheck(L_66);
		String_t* L_67;
		L_67 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_66, NULL);
		bool L_68;
		L_68 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_67, _stringLiteral57BCA31F16691BBED219CEAED25B6E566883AC72, NULL);
		if (!L_68)
		{
			goto IL_0315;
		}
	}
	{
		// checkpoint7 = true;
		__this->___checkpoint7_33 = (bool)1;
		// Debug.Log("checkpoint7");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral57BCA31F16691BBED219CEAED25B6E566883AC72, NULL);
	}

IL_0315:
	{
		// if (other.gameObject.name == "checkpoint8")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_69 = ___0_other;
		NullCheck(L_69);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_70;
		L_70 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_69, NULL);
		NullCheck(L_70);
		String_t* L_71;
		L_71 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_70, NULL);
		bool L_72;
		L_72 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_71, _stringLiteral7F54B3AA75720888F63FABC5B561F62BF5869916, NULL);
		if (!L_72)
		{
			goto IL_033d;
		}
	}
	{
		// checkpoint8 = true;
		__this->___checkpoint8_34 = (bool)1;
		// Debug.Log("checkpoint8");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7F54B3AA75720888F63FABC5B561F62BF5869916, NULL);
	}

IL_033d:
	{
		// if (other.gameObject.name == "checkpoint9")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_73 = ___0_other;
		NullCheck(L_73);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_74;
		L_74 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_73, NULL);
		NullCheck(L_74);
		String_t* L_75;
		L_75 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_74, NULL);
		bool L_76;
		L_76 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_75, _stringLiteral9C111E1EF7622B381034EA303CD2B8465119C421, NULL);
		if (!L_76)
		{
			goto IL_0365;
		}
	}
	{
		// checkpoint9 = true;
		__this->___checkpoint9_35 = (bool)1;
		// Debug.Log("checkpoint9");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9C111E1EF7622B381034EA303CD2B8465119C421, NULL);
	}

IL_0365:
	{
		// if (other.gameObject.name == "checkpoint10")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_77 = ___0_other;
		NullCheck(L_77);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78;
		L_78 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_77, NULL);
		NullCheck(L_78);
		String_t* L_79;
		L_79 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_78, NULL);
		bool L_80;
		L_80 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_79, _stringLiteral1A4D3AA769B0C42987ECC664D15D995161A345F8, NULL);
		if (!L_80)
		{
			goto IL_038d;
		}
	}
	{
		// checkpoint10 = true;
		__this->___checkpoint10_36 = (bool)1;
		// Debug.Log("checkpoint10");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1A4D3AA769B0C42987ECC664D15D995161A345F8, NULL);
	}

IL_038d:
	{
		// if (other.gameObject.name == "checkpoint11")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_81 = ___0_other;
		NullCheck(L_81);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_82;
		L_82 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_81, NULL);
		NullCheck(L_82);
		String_t* L_83;
		L_83 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_82, NULL);
		bool L_84;
		L_84 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_83, _stringLiteralC4DC82DD22CE5006E713D328EEF77553293F9906, NULL);
		if (!L_84)
		{
			goto IL_03b5;
		}
	}
	{
		// checkpoint11 = true;
		__this->___checkpoint11_37 = (bool)1;
		// Debug.Log("checkpoint11");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralC4DC82DD22CE5006E713D328EEF77553293F9906, NULL);
	}

IL_03b5:
	{
		// if (other.gameObject.name == "StartFinish")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_85 = ___0_other;
		NullCheck(L_85);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_86;
		L_86 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_85, NULL);
		NullCheck(L_86);
		String_t* L_87;
		L_87 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_86, NULL);
		bool L_88;
		L_88 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_87, _stringLiteral25D1388FEC241BDE86FA5E308075CE0F474C82DE, NULL);
		if (!L_88)
		{
			goto IL_03d6;
		}
	}
	{
		// Debug.Log("Start Finish Line Crossed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralFC9972A6536A73074BEE8654D068F8820228545B, NULL);
	}

IL_03d6:
	{
		// }
		return;
	}
}
// System.Void RacerScript::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RacerScript_OnTriggerExit_mB89C70082F33832F715393C91A33E4C0DA91A88C (RacerScript_t4419949F9EC2F3921F38209894DC692CA92F0D50* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25D1388FEC241BDE86FA5E308075CE0F474C82DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.name == "StartFinish")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral25D1388FEC241BDE86FA5E308075CE0F474C82DE, NULL);
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		// canTrigger = true;
		__this->___canTrigger_38 = (bool)1;
		// if (laps == lapCount)
		int32_t L_4 = __this->___laps_7;
		int32_t L_5 = __this->___lapCount_12;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0040;
		}
	}
	{
		// startTimer = false;
		__this->___startTimer_10 = (bool)0;
		// StopTotalTime();
		RacerScript_StopTotalTime_mF7EEFC10D5701BD3EE431E3B919F4386080673E5(__this, NULL);
		// finishedRace = 1;
		__this->___finishedRace_11 = 1;
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void RacerScript::StopTotalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RacerScript_StopTotalTime_mF7EEFC10D5701BD3EE431E3B919F4386080673E5 (RacerScript_t4419949F9EC2F3921F38209894DC692CA92F0D50* __this, const RuntimeMethod* method) 
{
	{
		// totalTime = totalTime - laptime;
		float L_0 = __this->___totalTime_6;
		float L_1 = __this->___laptime_4;
		__this->___totalTime_6 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// laptime = 0;
		__this->___laptime_4 = (0.0f);
		// }
		return;
	}
}
// System.Void RacerScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RacerScript__ctor_m5E23F2B0BA5B1827FB301387B422D18E9E9B4E74 (RacerScript_t4419949F9EC2F3921F38209894DC692CA92F0D50* __this, const RuntimeMethod* method) 
{
	{
		// public int finishedRace = 4;
		__this->___finishedRace_11 = 4;
		// private bool canTrigger = true;
		__this->___canTrigger_38 = (bool)1;
		// private int requiredLaps = 4; // The number of laps required to finish the race
		__this->___requiredLaps_40 = 4;
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
// System.Void SliderValue::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderValue_Update_mB08E9B0A642507B596DAF590AE3F1C219F05B971 (SliderValue_t634BB82D3EFE8B00A33BCE9927CBB2B5F70C9AA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float value = Mathf.Round(slider.value * 100f); // Map value to range of 0-100
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___slider_4;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		float L_2;
		L_2 = bankers_roundf(((float)il2cpp_codegen_multiply(L_1, (100.0f))));
		V_0 = L_2;
		// Text.text = value.ToString() + "%";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___Text_5;
		String_t* L_4;
		L_4 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_5);
		// }
		return;
	}
}
// System.Void SliderValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderValue__ctor_mC2359CB664B6859C3DE1739BBC3CE3009E6681AC (SliderValue_t634BB82D3EFE8B00A33BCE9927CBB2B5F70C9AA8* __this, const RuntimeMethod* method) 
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
// System.Void SoundSettings::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundSettings_Start_mE79BB6B45E970196085E22273525E92479805258 (SoundSettings_tF96E8E4062A24B2D0FADA9F1951DA818A4CE5DF9* __this, const RuntimeMethod* method) 
{
	{
		// Load();
		SoundSettings_Load_m6C4681B2EF2E59F20B8FFED156F5FB25BAC5CF3D(__this, NULL);
		// }
		return;
	}
}
// System.Void SoundSettings::changeVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundSettings_changeVolume_mAE5BC7359D633BDE4BCF411627366192C6333323 (SoundSettings_tF96E8E4062A24B2D0FADA9F1951DA818A4CE5DF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BB14169AF50C84BC740DD088E91274F831F6C02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetFloat("MasterSlider", masterVolumeSlider.value);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___masterVolumeSlider_4;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteral3BB14169AF50C84BC740DD088E91274F831F6C02, L_1, NULL);
		// PlayerPrefs.SetFloat("MasterVolume", masterVolumeSlider.value);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___masterVolumeSlider_4;
		NullCheck(L_2);
		float L_3;
		L_3 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_2);
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC, L_3, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// Save();
		SoundSettings_Save_m8A01326A90FAEDE417B8C5485633372C8D11FC40(__this, NULL);
		// }
		return;
	}
}
// System.Void SoundSettings::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundSettings_Load_m6C4681B2EF2E59F20B8FFED156F5FB25BAC5CF3D (SoundSettings_tF96E8E4062A24B2D0FADA9F1951DA818A4CE5DF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BB14169AF50C84BC740DD088E91274F831F6C02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!PlayerPrefs.HasKey(masterSliderKey))
		String_t* L_0 = __this->___masterSliderKey_5;
		bool L_1;
		L_1 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(L_0, NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// PlayerPrefs.SetFloat(masterSliderKey, defaultMasterVolume);
		String_t* L_2 = __this->___masterSliderKey_5;
		float L_3 = __this->___defaultMasterVolume_6;
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(L_2, L_3, NULL);
	}

IL_001e:
	{
		// masterVolumeSlider.value = PlayerPrefs.GetFloat("MasterSlider");
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___masterVolumeSlider_4;
		float L_5;
		L_5 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteral3BB14169AF50C84BC740DD088E91274F831F6C02, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, L_5);
		// PlayerPrefs.SetFloat("MasterVolume", masterVolumeSlider.value);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->___masterVolumeSlider_4;
		NullCheck(L_6);
		float L_7;
		L_7 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_6);
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC, L_7, NULL);
		// }
		return;
	}
}
// System.Void SoundSettings::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundSettings_Save_m8A01326A90FAEDE417B8C5485633372C8D11FC40 (SoundSettings_tF96E8E4062A24B2D0FADA9F1951DA818A4CE5DF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BB14169AF50C84BC740DD088E91274F831F6C02);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetFloat("MasterSlider", masterVolumeSlider.value);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___masterVolumeSlider_4;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteral3BB14169AF50C84BC740DD088E91274F831F6C02, L_1, NULL);
		// }
		return;
	}
}
// System.Void SoundSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundSettings__ctor_m9136A902F1B6F3BCEF739967281A075D6850C0E6 (SoundSettings_tF96E8E4062A24B2D0FADA9F1951DA818A4CE5DF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BB14169AF50C84BC740DD088E91274F831F6C02);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string masterSliderKey = "MasterSlider";
		__this->___masterSliderKey_5 = _stringLiteral3BB14169AF50C84BC740DD088E91274F831F6C02;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___masterSliderKey_5), (void*)_stringLiteral3BB14169AF50C84BC740DD088E91274F831F6C02);
		// float defaultMasterVolume = 0.5f;
		__this->___defaultMasterVolume_6 = (0.5f);
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
// System.Void SpeechAudioSettingsToggle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechAudioSettingsToggle_Start_m375B7ADCEECF6BC11FB3E3C5F54E51092CEAA514 (SpeechAudioSettingsToggle_t72FFCC656BFAC403C87F9A90A6165F8B9C1D1092* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechAudioSettingsToggle_ToggleSpeechAudio_m830AA1529E8E5D3517D900421A2BCDD76830BB44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral760865C55F22E06913EE529E43E0A4EC6D4C2957);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BD93A9B6A71E73DB6D08498DC47742AA6EBAB1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF88654428863D4AFEF30DEFF3E71D791EF1A2E9A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// speechAudioSlider = GetComponent<Slider>();
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0;
		L_0 = Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA(__this, Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		__this->___speechAudioSlider_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___speechAudioSlider_4), (void*)L_0);
		// if (speechAudioSlider != null)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___speechAudioSlider_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0068;
		}
	}
	{
		// int toggleState = PlayerPrefs.GetInt("SpeechAudioMuted", 1);
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteral8BD93A9B6A71E73DB6D08498DC47742AA6EBAB1F, 1, NULL);
		V_0 = L_3;
		// speechAudioSlider.value = toggleState;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___speechAudioSlider_4;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, ((float)L_5));
		// speechAudioSlider.onValueChanged.AddListener(ToggleSpeechAudio);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->___speechAudioSlider_4;
		NullCheck(L_6);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_7;
		L_7 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_6, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_8 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_8, __this, (intptr_t)((void*)SpeechAudioSettingsToggle_ToggleSpeechAudio_m830AA1529E8E5D3517D900421A2BCDD76830BB44_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_7, L_8, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// toggle = toggleState.ToString();
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		__this->___toggle_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toggle_6), (void*)L_9);
		// PlayerPrefs.SetInt("toggle", 1);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral760865C55F22E06913EE529E43E0A4EC6D4C2957, 1, NULL);
		return;
	}

IL_0068:
	{
		// Debug.LogError("Slider component not found on the same game object as SpeechAudioSettingsToggle script.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralF88654428863D4AFEF30DEFF3E71D791EF1A2E9A, NULL);
		// }
		return;
	}
}
// System.Void SpeechAudioSettingsToggle::ToggleSpeechAudio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechAudioSettingsToggle_ToggleSpeechAudio_m830AA1529E8E5D3517D900421A2BCDD76830BB44 (SpeechAudioSettingsToggle_t72FFCC656BFAC403C87F9A90A6165F8B9C1D1092* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// if (value==0f)
		float L_0 = ___0_value;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_000e;
		}
	}
	{
		// ToggleAudioOff();
		SpeechAudioSettingsToggle_ToggleAudioOff_mC2717CBCAABBB71AE1F8685622F0683EC14A3841(__this, NULL);
	}

IL_000e:
	{
		// StartCoroutine(ChangeMuteStatus(value));
		float L_1 = ___0_value;
		RuntimeObject* L_2;
		L_2 = SpeechAudioSettingsToggle_ChangeMuteStatus_mB58E56618C487C7DE818F077A7831852AEA7F127(__this, L_1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void SpeechAudioSettingsToggle::ToggleAudioOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechAudioSettingsToggle_ToggleAudioOff_mC2717CBCAABBB71AE1F8685622F0683EC14A3841 (SpeechAudioSettingsToggle_t72FFCC656BFAC403C87F9A90A6165F8B9C1D1092* __this, const RuntimeMethod* method) 
{
	{
		// audioSourceoff.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSourceoff_5;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SpeechAudioSettingsToggle::ChangeMuteStatus(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpeechAudioSettingsToggle_ChangeMuteStatus_mB58E56618C487C7DE818F077A7831852AEA7F127 (SpeechAudioSettingsToggle_t72FFCC656BFAC403C87F9A90A6165F8B9C1D1092* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CChangeMuteStatusU3Ed__6_tBC12C85E28EC6CDC2D8F10773B490F996E4B8013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CChangeMuteStatusU3Ed__6_tBC12C85E28EC6CDC2D8F10773B490F996E4B8013* L_0 = (U3CChangeMuteStatusU3Ed__6_tBC12C85E28EC6CDC2D8F10773B490F996E4B8013*)il2cpp_codegen_object_new(U3CChangeMuteStatusU3Ed__6_tBC12C85E28EC6CDC2D8F10773B490F996E4B8013_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CChangeMuteStatusU3Ed__6__ctor_mBDC37346052B4FC2298FD37981A6BEB1A43F8771(L_0, 0, NULL);
		U3CChangeMuteStatusU3Ed__6_tBC12C85E28EC6CDC2D8F10773B490F996E4B8013* L_1 = L_0;
		float L_2 = ___0_value;
		NullCheck(L_1);
		L_1->___value_2 = L_2;
		return L_1;
	}
}
// System.Void SpeechAudioSettingsToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechAudioSettingsToggle__ctor_mFD54A17253BAB1EAE4FB54E0F6E9D59FADFB494F (SpeechAudioSettingsToggle_t72FFCC656BFAC403C87F9A90A6165F8B9C1D1092* __this, const RuntimeMethod* method) 
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
// System.Void SpeechAudioSettingsToggle/<ChangeMuteStatus>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeMuteStatusU3Ed__6__ctor_mBDC37346052B4FC2298FD37981A6BEB1A43F8771 (U3CChangeMuteStatusU3Ed__6_tBC12C85E28EC6CDC2D8F10773B490F996E4B8013* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SpeechAudioSettingsToggle/<ChangeMuteStatus>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeMuteStatusU3Ed__6_System_IDisposable_Dispose_m1F36546B49164E3B2370EF4A75F7D6C414FF9D81 (U3CChangeMuteStatusU3Ed__6_tBC12C85E28EC6CDC2D8F10773B490F996E4B8013* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SpeechAudioSettingsToggle/<ChangeMuteStatus>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CChangeMuteStatusU3Ed__6_MoveNext_mF4208CF0046C171B337C65F4BC989542567A3152 (U3CChangeMuteStatusU3Ed__6_tBC12C85E28EC6CDC2D8F10773B490F996E4B8013* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BD93A9B6A71E73DB6D08498DC47742AA6EBAB1F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (value<.5f)
		float L_3 = __this->___value_2;
		if ((!(((float)L_3) < ((float)(0.5f)))))
		{
			goto IL_0044;
		}
	}
	{
		// yield return new WaitForSeconds(2);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003d:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0044:
	{
		// PlayerPrefs.SetInt("SpeechAudioMuted", (int)value);
		float L_5 = __this->___value_2;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral8BD93A9B6A71E73DB6D08498DC47742AA6EBAB1F, il2cpp_codegen_cast_double_to_int<int32_t>(L_5), NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// }
		return (bool)0;
	}
}
// System.Object SpeechAudioSettingsToggle/<ChangeMuteStatus>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CChangeMuteStatusU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5EDED295D307BBBEF2F4A2970D60641B85A1504B (U3CChangeMuteStatusU3Ed__6_tBC12C85E28EC6CDC2D8F10773B490F996E4B8013* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SpeechAudioSettingsToggle/<ChangeMuteStatus>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeMuteStatusU3Ed__6_System_Collections_IEnumerator_Reset_m7A49E209DEA664A4FF0D57BC324674AD73A98FDC (U3CChangeMuteStatusU3Ed__6_tBC12C85E28EC6CDC2D8F10773B490F996E4B8013* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CChangeMuteStatusU3Ed__6_System_Collections_IEnumerator_Reset_m7A49E209DEA664A4FF0D57BC324674AD73A98FDC_RuntimeMethod_var)));
	}
}
// System.Object SpeechAudioSettingsToggle/<ChangeMuteStatus>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CChangeMuteStatusU3Ed__6_System_Collections_IEnumerator_get_Current_mC8C4C0DE3130260502E804D713D8BA4D0ED4B4CC (U3CChangeMuteStatusU3Ed__6_tBC12C85E28EC6CDC2D8F10773B490F996E4B8013* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void SpeechControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechControl_Update_m3BB6C365B4854A4C7A371F1BC512E27041D215B4 (SpeechControl_t5063815B7C25F2B7E4D540B195AC751E02DB8914* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BD93A9B6A71E73DB6D08498DC47742AA6EBAB1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE7F3283AB38C04A948A8B5958011B75418A94DC);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// int toggleState = PlayerPrefs.GetInt("SpeechAudioMuted", 1);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteral8BD93A9B6A71E73DB6D08498DC47742AA6EBAB1F, 1, NULL);
		// if (toggleState == 0)
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		// if (!isSpeechMuted)
		bool L_1 = __this->___isSpeechMuted_5;
		if (L_1)
		{
			goto IL_0060;
		}
	}
	{
		// speechAudio.mute = true;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___speechAudio_4;
		NullCheck(L_2);
		AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09(L_2, (bool)1, NULL);
		// isSpeechMuted = true;
		__this->___isSpeechMuted_5 = (bool)1;
		return;
	}

IL_0029:
	{
		// float volume= PlayerPrefs.GetFloat("SpeechVolume", 1f);
		float L_3;
		L_3 = PlayerPrefs_GetFloat_m4A9B511E92C8BDEBB64D9B2557126FB030895A4D(_stringLiteralBE7F3283AB38C04A948A8B5958011B75418A94DC, (1.0f), NULL);
		V_0 = L_3;
		// if (isSpeechMuted)
		bool L_4 = __this->___isSpeechMuted_5;
		if (!L_4)
		{
			goto IL_0054;
		}
	}
	{
		// speechAudio.mute = false;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->___speechAudio_4;
		NullCheck(L_5);
		AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09(L_5, (bool)0, NULL);
		// isSpeechMuted = false;
		__this->___isSpeechMuted_5 = (bool)0;
	}

IL_0054:
	{
		// speechAudio.volume = volume;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___speechAudio_4;
		float L_7 = V_0;
		NullCheck(L_6);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_6, L_7, NULL);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void SpeechControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechControl__ctor_mAF90D0EBA22A562431D98DF1B012A9E96524DDDD (SpeechControl_t5063815B7C25F2B7E4D540B195AC751E02DB8914* __this, const RuntimeMethod* method) 
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
// System.Void SpeechScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechScript_Start_m48F2ADFE248EA1FECFA6888F6331ADE837B14D32 (SpeechScript_t0379C9399679C9AF27CE3BA40CFF844239F89AC0* __this, const RuntimeMethod* method) 
{
	{
		// Load();
		SpeechScript_Load_m926D29FC960AA1A31F131ED770CE8A74EA387A6A(__this, NULL);
		// }
		return;
	}
}
// System.Void SpeechScript::changeVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechScript_changeVolume_m28DD7DCACF5105B15B69ADA408F1332B78821A68 (SpeechScript_t0379C9399679C9AF27CE3BA40CFF844239F89AC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A849E254C636D1660D078F52565623DDD57966A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE7F3283AB38C04A948A8B5958011B75418A94DC);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// mastervolume = PlayerPrefs.GetFloat("MasterVolume");
		float L_0;
		L_0 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC, NULL);
		__this->___mastervolume_4 = L_0;
		// float speechVolume = mastervolume * speechVolumeSlider.value;
		float L_1 = __this->___mastervolume_4;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___speechVolumeSlider_5;
		NullCheck(L_2);
		float L_3;
		L_3 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_2);
		V_0 = ((float)il2cpp_codegen_multiply(L_1, L_3));
		// PlayerPrefs.SetFloat("SpeechVolume", speechVolume);//goes to a different script
		float L_4 = V_0;
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteralBE7F3283AB38C04A948A8B5958011B75418A94DC, L_4, NULL);
		// PlayerPrefs.SetFloat("SpeechSlider", speechVolumeSlider.value);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = __this->___speechVolumeSlider_5;
		NullCheck(L_5);
		float L_6;
		L_6 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_5);
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteral5A849E254C636D1660D078F52565623DDD57966A, L_6, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// Save();
		SpeechScript_Save_m0176B35BAE23D607897FBA195C67523320A82DE3(__this, NULL);
		// }
		return;
	}
}
// System.Void SpeechScript::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechScript_Load_m926D29FC960AA1A31F131ED770CE8A74EA387A6A (SpeechScript_t0379C9399679C9AF27CE3BA40CFF844239F89AC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A849E254C636D1660D078F52565623DDD57966A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!PlayerPrefs.HasKey(speechSliderKey))
		String_t* L_0 = __this->___speechSliderKey_6;
		bool L_1;
		L_1 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(L_0, NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// PlayerPrefs.SetFloat(speechSliderKey, defaultSpeechVolume);
		String_t* L_2 = __this->___speechSliderKey_6;
		float L_3 = __this->___defaultSpeechVolume_7;
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(L_2, L_3, NULL);
	}

IL_001e:
	{
		// speechVolumeSlider.value = PlayerPrefs.GetFloat("SpeechSlider");
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___speechVolumeSlider_5;
		float L_5;
		L_5 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteral5A849E254C636D1660D078F52565623DDD57966A, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, L_5);
		// mastervolume = PlayerPrefs.GetFloat("MasterVolume");//playerprefs
		float L_6;
		L_6 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC, NULL);
		__this->___mastervolume_4 = L_6;
		// }
		return;
	}
}
// System.Void SpeechScript::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechScript_Save_m0176B35BAE23D607897FBA195C67523320A82DE3 (SpeechScript_t0379C9399679C9AF27CE3BA40CFF844239F89AC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A849E254C636D1660D078F52565623DDD57966A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetFloat("SpeechSlider", speechVolumeSlider.value);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___speechVolumeSlider_5;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteral5A849E254C636D1660D078F52565623DDD57966A, L_1, NULL);
		// }
		return;
	}
}
// System.Void SpeechScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechScript_Update_m04F18362B307C635B16A03596ABFD9E115BFF620 (SpeechScript_t0379C9399679C9AF27CE3BA40CFF844239F89AC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A849E254C636D1660D078F52565623DDD57966A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE7F3283AB38C04A948A8B5958011B75418A94DC);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// mastervolume = PlayerPrefs.GetFloat("MasterVolume");//playerprefs
		float L_0;
		L_0 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC, NULL);
		__this->___mastervolume_4 = L_0;
		// float speechVolume = mastervolume * speechVolumeSlider.value;
		float L_1 = __this->___mastervolume_4;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___speechVolumeSlider_5;
		NullCheck(L_2);
		float L_3;
		L_3 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_2);
		V_0 = ((float)il2cpp_codegen_multiply(L_1, L_3));
		// PlayerPrefs.SetFloat("SpeechVolume", speechVolume);//goes to a different script
		float L_4 = V_0;
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteralBE7F3283AB38C04A948A8B5958011B75418A94DC, L_4, NULL);
		// PlayerPrefs.SetFloat("SpeechSlider", speechVolumeSlider.value);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = __this->___speechVolumeSlider_5;
		NullCheck(L_5);
		float L_6;
		L_6 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_5);
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteral5A849E254C636D1660D078F52565623DDD57966A, L_6, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// Save();
		SpeechScript_Save_m0176B35BAE23D607897FBA195C67523320A82DE3(__this, NULL);
		// }
		return;
	}
}
// System.Void SpeechScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechScript__ctor_m6F98E3B698038BCA17E3D6B0ABF6F71567B98F80 (SpeechScript_t0379C9399679C9AF27CE3BA40CFF844239F89AC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A849E254C636D1660D078F52565623DDD57966A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string speechSliderKey = "SpeechSlider";
		__this->___speechSliderKey_6 = _stringLiteral5A849E254C636D1660D078F52565623DDD57966A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___speechSliderKey_6), (void*)_stringLiteral5A849E254C636D1660D078F52565623DDD57966A);
		// float defaultSpeechVolume = 0.5f;
		__this->___defaultSpeechVolume_7 = (0.5f);
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
// System.Void SpeechToggle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToggle_Start_m78BB1AAFDEBC8EECA61E1DA8BE6B1FD28D97A012 (SpeechToggle_t84130DAB3085AEA55832B2D8DD85A6E4A72E4FCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechToggle_OnSliderValueChanged_m393D6CD8A4D1329D8C94824ADDE7AC1B29E8CB2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// slider = GetComponent<Slider>();
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0;
		L_0 = Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA(__this, Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		__this->___slider_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slider_5), (void*)L_0);
		// slider.onValueChanged.AddListener(OnSliderValueChanged);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___slider_5;
		NullCheck(L_1);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_2;
		L_2 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_1, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_3 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_3, __this, (intptr_t)((void*)SpeechToggle_OnSliderValueChanged_m393D6CD8A4D1329D8C94824ADDE7AC1B29E8CB2E_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_2, L_3, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SpeechToggle::OnSliderValueChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToggle_OnSliderValueChanged_m393D6CD8A4D1329D8C94824ADDE7AC1B29E8CB2E (SpeechToggle_t84130DAB3085AEA55832B2D8DD85A6E4A72E4FCC* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// if (value>0f)
		float L_0 = ___0_value;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_000e;
		}
	}
	{
		// ToggleAudioOn();
		SpeechToggle_ToggleAudioOn_m8B1A4E4B4D9B7B4B0D588D38F36E01B0FF24D1AB(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void SpeechToggle::ToggleAudioOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToggle_ToggleAudioOn_m8B1A4E4B4D9B7B4B0D588D38F36E01B0FF24D1AB (SpeechToggle_t84130DAB3085AEA55832B2D8DD85A6E4A72E4FCC* __this, const RuntimeMethod* method) 
{
	{
		// audioSourceon.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSourceon_4;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void SpeechToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToggle__ctor_m2D76BDAE3AA9DF0F050A1B43D7D9C24541AD9B66 (SpeechToggle_t84130DAB3085AEA55832B2D8DD85A6E4A72E4FCC* __this, const RuntimeMethod* method) 
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
// System.Void WrongWay::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrongWay_OnTriggerEnter_mEAC8F56A66AA8CC0F5E42F9F413AC81A5D78D384 (WrongWay_t0D977F92437C5CEE273E9EF2CB0A3A8618AFE9FC* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4D3AA769B0C42987ECC664D15D995161A345F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BAEE56D6871F5FA35FE0FF6A81FC506155E0CDB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25D1388FEC241BDE86FA5E308075CE0F474C82DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D8EB490215320D24D2C7DC45C415EA2F7EA22E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FDFA88503F50E300AE45098B09A76361E8EBFA9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32862D354F22551B8383F1877BB378A66A06549A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral353891B2ED86A3F78B9C5E69012B5A9ED3406AAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral375520D15E5666B97D26C9FD05821F1650B2C60B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C74E54EA8CD2FD6C499D702D868922635689D1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43FDFD729FD0D77F97F5EAB2065180AF69EFCDFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57BCA31F16691BBED219CEAED25B6E566883AC72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BFD1DBEE76067C7A3266DF23AC53B499CAE13C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral784B6616C757B5A2E1845341468BCCBF16F7EEFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F54B3AA75720888F63FABC5B561F62BF5869916);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87A19D9D9BEAF266AFAEDA65E6984669105FAC93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C111E1EF7622B381034EA303CD2B8465119C421);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1A878BFFC5EAA40AFC915E8BB359CEADBED734E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA48288971A4ACA3F589C6A926C5B32D8133E5EB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA72A6D98DB3099AD5FB556ACCC64996C46216EDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8D4EC931E2C9BF198F0BDF104985E7020D7327C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF344379D2073374A8BD9DDC14B2158CD228CF42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02EB758D6BC1BE3C84E663264539CC282CB8283);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4DC82DD22CE5006E713D328EEF77553293F9906);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF46C5C24530AD91ECA8AA60CF0B75CE19FC75EFE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.name == "StartFinish")// find game object with the name StartFinish
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral25D1388FEC241BDE86FA5E308075CE0F474C82DE, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// if (startTimer == false)//start the timer in the stopped position awaiting start
		bool L_4 = __this->___startTimer_4;
		if (L_4)
		{
			goto IL_0035;
		}
	}
	{
		// startTimer = true;// start the timer here
		__this->___startTimer_4 = (bool)1;
		// id = 11; // set id to start the tracker
		__this->___id_7 = ((int32_t)11);
		// canTrigger = false;
		__this->___canTrigger_5 = (bool)0;
	}

IL_0035:
	{
		// if (other.gameObject.name == "checkpoint1")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___0_other;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral353891B2ED86A3F78B9C5E69012B5A9ED3406AAF, NULL);
		if (!L_8)
		{
			goto IL_00d7;
		}
	}
	{
		// wrongWay.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___wrongWay_8;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// Debug.Log("id should be 11: " + id);
		int32_t* L_10 = (&__this->___id_7);
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_10, NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral375520D15E5666B97D26C9FD05821F1650B2C60B, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_12, NULL);
		// if (id == 11)
		int32_t L_13 = __this->___id_7;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_00af;
		}
	}
	{
		// id = 1;
		__this->___id_7 = 1;
		// Debug.Log("id should be 1: " + id);
		int32_t* L_14 = (&__this->___id_7);
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral32862D354F22551B8383F1877BB378A66A06549A, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_16, NULL);
		// RightWay();
		WrongWay_U3COnTriggerEnterU3Eg__RightWayU7C7_1_m228D7AB0F1CB77173DA8D884DF5AB054355BF7AE(__this, NULL);
		// drivingWrongWay = false;
		__this->___drivingWrongWay_6 = (bool)0;
		goto IL_00d7;
	}

IL_00af:
	{
		// Debug.Log("Wrong Way!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA8D4EC931E2C9BF198F0BDF104985E7020D7327C, NULL);
		// WrongWay();
		WrongWay_U3COnTriggerEnterU3Eg__WrongWayU7C7_0_mFAE6A4B330BB310496CBA6838C508F3F290713EF(__this, NULL);
		// audioSource.PlayOneShot(wrongWayAduio);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_17 = __this->___audioSource_9;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_18 = __this->___wrongWayAduio_10;
		NullCheck(L_17);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_17, L_18, NULL);
		// drivingWrongWay = true;
		__this->___drivingWrongWay_6 = (bool)1;
	}

IL_00d7:
	{
		// if (other.gameObject.name == "checkpoint2")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_19 = ___0_other;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_19, NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_20, NULL);
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral2FDFA88503F50E300AE45098B09A76361E8EBFA9, NULL);
		if (!L_22)
		{
			goto IL_0156;
		}
	}
	{
		// wrongWay.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___wrongWay_8;
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)0, NULL);
		// Debug.Log("id should be 1: " + id);
		int32_t* L_24 = (&__this->___id_7);
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_24, NULL);
		String_t* L_26;
		L_26 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral32862D354F22551B8383F1877BB378A66A06549A, L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_26, NULL);
		// if (id == 1)
		int32_t L_27 = __this->___id_7;
		if ((!(((uint32_t)L_27) == ((uint32_t)1))))
		{
			goto IL_0146;
		}
	}
	{
		// id = 2;
		__this->___id_7 = 2;
		// Debug.Log("id should be 2: " + id);
		int32_t* L_28 = (&__this->___id_7);
		String_t* L_29;
		L_29 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_28, NULL);
		String_t* L_30;
		L_30 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF46C5C24530AD91ECA8AA60CF0B75CE19FC75EFE, L_29, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_30, NULL);
		// RightWay();
		WrongWay_U3COnTriggerEnterU3Eg__RightWayU7C7_1_m228D7AB0F1CB77173DA8D884DF5AB054355BF7AE(__this, NULL);
		goto IL_0156;
	}

IL_0146:
	{
		// Debug.Log("Wrong Way!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA8D4EC931E2C9BF198F0BDF104985E7020D7327C, NULL);
		// WrongWay();
		WrongWay_U3COnTriggerEnterU3Eg__WrongWayU7C7_0_mFAE6A4B330BB310496CBA6838C508F3F290713EF(__this, NULL);
	}

IL_0156:
	{
		// if (other.gameObject.name == "checkpoint3")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_31 = ___0_other;
		NullCheck(L_31);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_31, NULL);
		NullCheck(L_32);
		String_t* L_33;
		L_33 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_32, NULL);
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral43FDFD729FD0D77F97F5EAB2065180AF69EFCDFC, NULL);
		if (!L_34)
		{
			goto IL_01d5;
		}
	}
	{
		// wrongWay.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___wrongWay_8;
		NullCheck(L_35);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)0, NULL);
		// Debug.Log("id should be 2: " + id);
		int32_t* L_36 = (&__this->___id_7);
		String_t* L_37;
		L_37 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_36, NULL);
		String_t* L_38;
		L_38 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF46C5C24530AD91ECA8AA60CF0B75CE19FC75EFE, L_37, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_38, NULL);
		// if (id == 2)
		int32_t L_39 = __this->___id_7;
		if ((!(((uint32_t)L_39) == ((uint32_t)2))))
		{
			goto IL_01c5;
		}
	}
	{
		// id = 3;
		__this->___id_7 = 3;
		// Debug.Log("id should be 3: " + id);
		int32_t* L_40 = (&__this->___id_7);
		String_t* L_41;
		L_41 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_40, NULL);
		String_t* L_42;
		L_42 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2D8EB490215320D24D2C7DC45C415EA2F7EA22E3, L_41, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_42, NULL);
		// RightWay();
		WrongWay_U3COnTriggerEnterU3Eg__RightWayU7C7_1_m228D7AB0F1CB77173DA8D884DF5AB054355BF7AE(__this, NULL);
		goto IL_01d5;
	}

IL_01c5:
	{
		// Debug.Log("Wrong Way!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA8D4EC931E2C9BF198F0BDF104985E7020D7327C, NULL);
		// WrongWay();
		WrongWay_U3COnTriggerEnterU3Eg__WrongWayU7C7_0_mFAE6A4B330BB310496CBA6838C508F3F290713EF(__this, NULL);
	}

IL_01d5:
	{
		// if (other.gameObject.name == "checkpoint4")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_43 = ___0_other;
		NullCheck(L_43);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44;
		L_44 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_43, NULL);
		NullCheck(L_44);
		String_t* L_45;
		L_45 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_44, NULL);
		bool L_46;
		L_46 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_45, _stringLiteral6BFD1DBEE76067C7A3266DF23AC53B499CAE13C1, NULL);
		if (!L_46)
		{
			goto IL_0254;
		}
	}
	{
		// wrongWay.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = __this->___wrongWay_8;
		NullCheck(L_47);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_47, (bool)0, NULL);
		// Debug.Log("id should be 3: " + id);
		int32_t* L_48 = (&__this->___id_7);
		String_t* L_49;
		L_49 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_48, NULL);
		String_t* L_50;
		L_50 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2D8EB490215320D24D2C7DC45C415EA2F7EA22E3, L_49, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_50, NULL);
		// if (id == 3)
		int32_t L_51 = __this->___id_7;
		if ((!(((uint32_t)L_51) == ((uint32_t)3))))
		{
			goto IL_0244;
		}
	}
	{
		// id = 4;
		__this->___id_7 = 4;
		// Debug.Log("id should be 4: " + id);
		int32_t* L_52 = (&__this->___id_7);
		String_t* L_53;
		L_53 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_52, NULL);
		String_t* L_54;
		L_54 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral87A19D9D9BEAF266AFAEDA65E6984669105FAC93, L_53, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_54, NULL);
		// RightWay();
		WrongWay_U3COnTriggerEnterU3Eg__RightWayU7C7_1_m228D7AB0F1CB77173DA8D884DF5AB054355BF7AE(__this, NULL);
		goto IL_0254;
	}

IL_0244:
	{
		// Debug.Log("Wrong Way!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA8D4EC931E2C9BF198F0BDF104985E7020D7327C, NULL);
		// WrongWay();
		WrongWay_U3COnTriggerEnterU3Eg__WrongWayU7C7_0_mFAE6A4B330BB310496CBA6838C508F3F290713EF(__this, NULL);
	}

IL_0254:
	{
		// if (other.gameObject.name == "checkpoint5")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_55 = ___0_other;
		NullCheck(L_55);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56;
		L_56 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_55, NULL);
		NullCheck(L_56);
		String_t* L_57;
		L_57 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_56, NULL);
		bool L_58;
		L_58 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_57, _stringLiteralAF344379D2073374A8BD9DDC14B2158CD228CF42, NULL);
		if (!L_58)
		{
			goto IL_02d3;
		}
	}
	{
		// wrongWay.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = __this->___wrongWay_8;
		NullCheck(L_59);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_59, (bool)0, NULL);
		// Debug.Log("id should be 4: " + id);
		int32_t* L_60 = (&__this->___id_7);
		String_t* L_61;
		L_61 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_60, NULL);
		String_t* L_62;
		L_62 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral87A19D9D9BEAF266AFAEDA65E6984669105FAC93, L_61, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_62, NULL);
		// if (id == 4)
		int32_t L_63 = __this->___id_7;
		if ((!(((uint32_t)L_63) == ((uint32_t)4))))
		{
			goto IL_02c3;
		}
	}
	{
		// id = 5;
		__this->___id_7 = 5;
		// Debug.Log("id should be 5: " + id);
		int32_t* L_64 = (&__this->___id_7);
		String_t* L_65;
		L_65 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_64, NULL);
		String_t* L_66;
		L_66 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral784B6616C757B5A2E1845341468BCCBF16F7EEFC, L_65, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_66, NULL);
		// RightWay();
		WrongWay_U3COnTriggerEnterU3Eg__RightWayU7C7_1_m228D7AB0F1CB77173DA8D884DF5AB054355BF7AE(__this, NULL);
		goto IL_02d3;
	}

IL_02c3:
	{
		// Debug.Log("Wrong Way!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA8D4EC931E2C9BF198F0BDF104985E7020D7327C, NULL);
		// WrongWay();
		WrongWay_U3COnTriggerEnterU3Eg__WrongWayU7C7_0_mFAE6A4B330BB310496CBA6838C508F3F290713EF(__this, NULL);
	}

IL_02d3:
	{
		// if (other.gameObject.name == "checkpoint6")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_67 = ___0_other;
		NullCheck(L_67);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68;
		L_68 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_67, NULL);
		NullCheck(L_68);
		String_t* L_69;
		L_69 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_68, NULL);
		bool L_70;
		L_70 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_69, _stringLiteral1BAEE56D6871F5FA35FE0FF6A81FC506155E0CDB, NULL);
		if (!L_70)
		{
			goto IL_0352;
		}
	}
	{
		// wrongWay.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = __this->___wrongWay_8;
		NullCheck(L_71);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_71, (bool)0, NULL);
		// Debug.Log("id should be 5: " + id);
		int32_t* L_72 = (&__this->___id_7);
		String_t* L_73;
		L_73 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_72, NULL);
		String_t* L_74;
		L_74 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral784B6616C757B5A2E1845341468BCCBF16F7EEFC, L_73, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_74, NULL);
		// if (id == 5)
		int32_t L_75 = __this->___id_7;
		if ((!(((uint32_t)L_75) == ((uint32_t)5))))
		{
			goto IL_0342;
		}
	}
	{
		// id = 6;
		__this->___id_7 = 6;
		// Debug.Log("id should be 6: " + id);
		int32_t* L_76 = (&__this->___id_7);
		String_t* L_77;
		L_77 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_76, NULL);
		String_t* L_78;
		L_78 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA1A878BFFC5EAA40AFC915E8BB359CEADBED734E, L_77, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_78, NULL);
		// RightWay();
		WrongWay_U3COnTriggerEnterU3Eg__RightWayU7C7_1_m228D7AB0F1CB77173DA8D884DF5AB054355BF7AE(__this, NULL);
		goto IL_0352;
	}

IL_0342:
	{
		// Debug.Log("Wrong Way!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA8D4EC931E2C9BF198F0BDF104985E7020D7327C, NULL);
		// WrongWay();
		WrongWay_U3COnTriggerEnterU3Eg__WrongWayU7C7_0_mFAE6A4B330BB310496CBA6838C508F3F290713EF(__this, NULL);
	}

IL_0352:
	{
		// if (other.gameObject.name == "checkpoint7")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_79 = ___0_other;
		NullCheck(L_79);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80;
		L_80 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_79, NULL);
		NullCheck(L_80);
		String_t* L_81;
		L_81 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_80, NULL);
		bool L_82;
		L_82 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_81, _stringLiteral57BCA31F16691BBED219CEAED25B6E566883AC72, NULL);
		if (!L_82)
		{
			goto IL_03d1;
		}
	}
	{
		// wrongWay.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_83 = __this->___wrongWay_8;
		NullCheck(L_83);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_83, (bool)0, NULL);
		// Debug.Log("id should be 6: " + id);
		int32_t* L_84 = (&__this->___id_7);
		String_t* L_85;
		L_85 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_84, NULL);
		String_t* L_86;
		L_86 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA1A878BFFC5EAA40AFC915E8BB359CEADBED734E, L_85, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_86, NULL);
		// if (id == 6)
		int32_t L_87 = __this->___id_7;
		if ((!(((uint32_t)L_87) == ((uint32_t)6))))
		{
			goto IL_03c1;
		}
	}
	{
		// id = 7;
		__this->___id_7 = 7;
		// Debug.Log("id should be 7: " + id);
		int32_t* L_88 = (&__this->___id_7);
		String_t* L_89;
		L_89 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_88, NULL);
		String_t* L_90;
		L_90 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3C74E54EA8CD2FD6C499D702D868922635689D1C, L_89, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_90, NULL);
		// RightWay();
		WrongWay_U3COnTriggerEnterU3Eg__RightWayU7C7_1_m228D7AB0F1CB77173DA8D884DF5AB054355BF7AE(__this, NULL);
		goto IL_03d1;
	}

IL_03c1:
	{
		// Debug.Log("Wrong Way!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA8D4EC931E2C9BF198F0BDF104985E7020D7327C, NULL);
		// WrongWay();
		WrongWay_U3COnTriggerEnterU3Eg__WrongWayU7C7_0_mFAE6A4B330BB310496CBA6838C508F3F290713EF(__this, NULL);
	}

IL_03d1:
	{
		// if (other.gameObject.name == "checkpoint8")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_91 = ___0_other;
		NullCheck(L_91);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_92;
		L_92 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_91, NULL);
		NullCheck(L_92);
		String_t* L_93;
		L_93 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_92, NULL);
		bool L_94;
		L_94 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_93, _stringLiteral7F54B3AA75720888F63FABC5B561F62BF5869916, NULL);
		if (!L_94)
		{
			goto IL_0450;
		}
	}
	{
		// wrongWay.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_95 = __this->___wrongWay_8;
		NullCheck(L_95);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_95, (bool)0, NULL);
		// Debug.Log("id should be 7: " + id);
		int32_t* L_96 = (&__this->___id_7);
		String_t* L_97;
		L_97 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_96, NULL);
		String_t* L_98;
		L_98 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3C74E54EA8CD2FD6C499D702D868922635689D1C, L_97, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_98, NULL);
		// if (id == 7)
		int32_t L_99 = __this->___id_7;
		if ((!(((uint32_t)L_99) == ((uint32_t)7))))
		{
			goto IL_0440;
		}
	}
	{
		// id = 8;
		__this->___id_7 = 8;
		// Debug.Log("id should be 8: " + id);
		int32_t* L_100 = (&__this->___id_7);
		String_t* L_101;
		L_101 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_100, NULL);
		String_t* L_102;
		L_102 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB02EB758D6BC1BE3C84E663264539CC282CB8283, L_101, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_102, NULL);
		// RightWay();
		WrongWay_U3COnTriggerEnterU3Eg__RightWayU7C7_1_m228D7AB0F1CB77173DA8D884DF5AB054355BF7AE(__this, NULL);
		goto IL_0450;
	}

IL_0440:
	{
		// Debug.Log("Wrong Way!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA8D4EC931E2C9BF198F0BDF104985E7020D7327C, NULL);
		// WrongWay();
		WrongWay_U3COnTriggerEnterU3Eg__WrongWayU7C7_0_mFAE6A4B330BB310496CBA6838C508F3F290713EF(__this, NULL);
	}

IL_0450:
	{
		// if (other.gameObject.name == "checkpoint9")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_103 = ___0_other;
		NullCheck(L_103);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_104;
		L_104 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_103, NULL);
		NullCheck(L_104);
		String_t* L_105;
		L_105 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_104, NULL);
		bool L_106;
		L_106 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_105, _stringLiteral9C111E1EF7622B381034EA303CD2B8465119C421, NULL);
		if (!L_106)
		{
			goto IL_04d0;
		}
	}
	{
		// wrongWay.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_107 = __this->___wrongWay_8;
		NullCheck(L_107);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_107, (bool)0, NULL);
		// Debug.Log("id should be 8: " + id);
		int32_t* L_108 = (&__this->___id_7);
		String_t* L_109;
		L_109 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_108, NULL);
		String_t* L_110;
		L_110 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB02EB758D6BC1BE3C84E663264539CC282CB8283, L_109, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_110, NULL);
		// if (id == 8)
		int32_t L_111 = __this->___id_7;
		if ((!(((uint32_t)L_111) == ((uint32_t)8))))
		{
			goto IL_04c0;
		}
	}
	{
		// id = 9;
		__this->___id_7 = ((int32_t)9);
		// Debug.Log("id should be 9: " + id);
		int32_t* L_112 = (&__this->___id_7);
		String_t* L_113;
		L_113 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_112, NULL);
		String_t* L_114;
		L_114 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA48288971A4ACA3F589C6A926C5B32D8133E5EB7, L_113, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_114, NULL);
		// RightWay();
		WrongWay_U3COnTriggerEnterU3Eg__RightWayU7C7_1_m228D7AB0F1CB77173DA8D884DF5AB054355BF7AE(__this, NULL);
		goto IL_04d0;
	}

IL_04c0:
	{
		// Debug.Log("Wrong Way!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA8D4EC931E2C9BF198F0BDF104985E7020D7327C, NULL);
		// WrongWay();
		WrongWay_U3COnTriggerEnterU3Eg__WrongWayU7C7_0_mFAE6A4B330BB310496CBA6838C508F3F290713EF(__this, NULL);
	}

IL_04d0:
	{
		// if (other.gameObject.name == "checkpoint10")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_115 = ___0_other;
		NullCheck(L_115);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_116;
		L_116 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_115, NULL);
		NullCheck(L_116);
		String_t* L_117;
		L_117 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_116, NULL);
		bool L_118;
		L_118 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_117, _stringLiteral1A4D3AA769B0C42987ECC664D15D995161A345F8, NULL);
		if (!L_118)
		{
			goto IL_0551;
		}
	}
	{
		// wrongWay.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_119 = __this->___wrongWay_8;
		NullCheck(L_119);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_119, (bool)0, NULL);
		// Debug.Log("id should be 9: " + id);
		int32_t* L_120 = (&__this->___id_7);
		String_t* L_121;
		L_121 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_120, NULL);
		String_t* L_122;
		L_122 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA48288971A4ACA3F589C6A926C5B32D8133E5EB7, L_121, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_122, NULL);
		// if (id == 9)
		int32_t L_123 = __this->___id_7;
		if ((!(((uint32_t)L_123) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0541;
		}
	}
	{
		// id = 10;
		__this->___id_7 = ((int32_t)10);
		// Debug.Log("id should be 10: " + id);
		int32_t* L_124 = (&__this->___id_7);
		String_t* L_125;
		L_125 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_124, NULL);
		String_t* L_126;
		L_126 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA72A6D98DB3099AD5FB556ACCC64996C46216EDD, L_125, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_126, NULL);
		// RightWay();
		WrongWay_U3COnTriggerEnterU3Eg__RightWayU7C7_1_m228D7AB0F1CB77173DA8D884DF5AB054355BF7AE(__this, NULL);
		goto IL_0551;
	}

IL_0541:
	{
		// Debug.Log("Wrong Way!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA8D4EC931E2C9BF198F0BDF104985E7020D7327C, NULL);
		// WrongWay();
		WrongWay_U3COnTriggerEnterU3Eg__WrongWayU7C7_0_mFAE6A4B330BB310496CBA6838C508F3F290713EF(__this, NULL);
	}

IL_0551:
	{
		// if (other.gameObject.name == "checkpoint11")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_127 = ___0_other;
		NullCheck(L_127);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_128;
		L_128 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_127, NULL);
		NullCheck(L_128);
		String_t* L_129;
		L_129 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_128, NULL);
		bool L_130;
		L_130 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_129, _stringLiteralC4DC82DD22CE5006E713D328EEF77553293F9906, NULL);
		if (!L_130)
		{
			goto IL_05d1;
		}
	}
	{
		// wrongWay.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_131 = __this->___wrongWay_8;
		NullCheck(L_131);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_131, (bool)0, NULL);
		// Debug.Log("id should be 10: " + id);
		int32_t* L_132 = (&__this->___id_7);
		String_t* L_133;
		L_133 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_132, NULL);
		String_t* L_134;
		L_134 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA72A6D98DB3099AD5FB556ACCC64996C46216EDD, L_133, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_134, NULL);
		// if (id == 10)
		int32_t L_135 = __this->___id_7;
		if ((!(((uint32_t)L_135) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_05c1;
		}
	}
	{
		// id = 11;
		__this->___id_7 = ((int32_t)11);
		// Debug.Log("id should be 11: " + id);
		int32_t* L_136 = (&__this->___id_7);
		String_t* L_137;
		L_137 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_136, NULL);
		String_t* L_138;
		L_138 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral375520D15E5666B97D26C9FD05821F1650B2C60B, L_137, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_138, NULL);
		// RightWay();
		WrongWay_U3COnTriggerEnterU3Eg__RightWayU7C7_1_m228D7AB0F1CB77173DA8D884DF5AB054355BF7AE(__this, NULL);
		return;
	}

IL_05c1:
	{
		// Debug.Log("Wrong Way!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA8D4EC931E2C9BF198F0BDF104985E7020D7327C, NULL);
		// WrongWay();
		WrongWay_U3COnTriggerEnterU3Eg__WrongWayU7C7_0_mFAE6A4B330BB310496CBA6838C508F3F290713EF(__this, NULL);
	}

IL_05d1:
	{
		// }
		return;
	}
}
// System.Void WrongWay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrongWay__ctor_mBF91760F98908EA15651FD9235A2FCA6BB379BC3 (WrongWay_t0D977F92437C5CEE273E9EF2CB0A3A8618AFE9FC* __this, const RuntimeMethod* method) 
{
	{
		// private bool canTrigger = true;
		__this->___canTrigger_5 = (bool)1;
		// [SerializeField] int id = 11; // current checkpoint id
		__this->___id_7 = ((int32_t)11);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void WrongWay::<OnTriggerEnter>g__WrongWay|7_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrongWay_U3COnTriggerEnterU3Eg__WrongWayU7C7_0_mFAE6A4B330BB310496CBA6838C508F3F290713EF (WrongWay_t0D977F92437C5CEE273E9EF2CB0A3A8618AFE9FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8D4EC931E2C9BF198F0BDF104985E7020D7327C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// wrongWay.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___wrongWay_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// wrongWay.GetComponent<Text>().text = "Wrong Way!";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___wrongWay_8;
		NullCheck(L_1);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2;
		L_2 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_1, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteralA8D4EC931E2C9BF198F0BDF104985E7020D7327C);
		// }
		return;
	}
}
// System.Void WrongWay::<OnTriggerEnter>g__RightWay|7_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrongWay_U3COnTriggerEnterU3Eg__RightWayU7C7_1_m228D7AB0F1CB77173DA8D884DF5AB054355BF7AE (WrongWay_t0D977F92437C5CEE273E9EF2CB0A3A8618AFE9FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// wrongWay.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___wrongWay_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// wrongWay.GetComponent<Text>().text = "";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___wrongWay_8;
		NullCheck(L_1);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2;
		L_2 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_1, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) 
{
	{
		// public SliderEvent onValueChanged { get { return m_OnValueChanged; } set { m_OnValueChanged = value; } }
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_0 = __this->___m_OnValueChanged_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = ceil(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
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
		float L_2 = ___0_value;
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
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
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

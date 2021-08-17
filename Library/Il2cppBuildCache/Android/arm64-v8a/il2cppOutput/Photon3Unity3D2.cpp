#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`2<System.Net.IPAddress,System.String>
struct Func_2_t07AA32ABA3AA42B99EB1A0D449B0292901F35822;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_t95750B1CF3F7626EC7AB30893A86E08F445DD75D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>
struct KeyCollection_tA998D765590D33F85EB3DE2B7074233953998022;
// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedList_1_t6BFAB45CE8F5E02251E98CC80900D73A2E2406EE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>
struct List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E;
// System.Collections.Generic.List`1<System.Threading.Thread>
struct List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118;
// System.Collections.Generic.Queue`1<System.Byte[]>
struct Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.CmdLogItem>
struct Queue_1_t67B822E02741DA6A0AA5F2E94A72003CFB7DB4E1;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer>
struct Queue_1_t1B8990BCE711180A9F2244DB55468B6976FE940E;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct Queue_1_tDF0DA55465AF25D26AC05C3437EE16FBAE54C507;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Object>
struct ValueCollection_t34CD6712C06BB62D73CFFB44390425C11A63AB16;
// System.Collections.Generic.Dictionary`2/Entry<System.Byte,System.Object>[]
struct EntryU5BU5D_t615ACEB7BB0C90B6E4CC324A2EAA23513755256E;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// ExitGames.Client.Photon.StreamBuffer[]
struct StreamBufferU5BU5D_tEDD1D13632CB1530563C0C843631564903913620;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Threading.Thread[]
struct ThreadU5BU5D_t9AB1EEE437F00EABE533CB2261E519C3976BD81F;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// ExitGames.Client.Photon.PeerBase/MyAction[]
struct MyActionU5BU5D_t5776E0715307D30669D1514A27DD3DDE548B82D0;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// ExitGames.Client.Photon.EventData
struct EventData_t11440FEE431D8D89E49B53C772D4F1A0EBD552E8;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Photon.SocketServer.Security.ICryptoProvider
struct ICryptoProvider_t4FD0F975131B5A2CD38D000AE63D97EC1BBFDEB3;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_tE7041BC66B6BF1AA33D5AF6E25E984CDDF5A9E07;
// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// ExitGames.Client.Photon.IProtocol
struct IProtocol_tC0E4162EB71727CF15421A41CBE61A6749AEC038;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// ExitGames.Client.Photon.NCommand
struct NCommand_t553C3C7A444F8F77EF29B4AD80B8195F6062C77A;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_tAE1B48415762EE27262D2A378D7EA01589DDBBB9;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09;
// ExitGames.Client.Photon.SocketTcp
struct SocketTcp_t442BEC8A2E0A99ECE1B2C6FF9FCDA8128154A435;
// ExitGames.Client.Photon.StreamBuffer
struct StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// ExitGames.Client.Photon.TPeer
struct TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Threading.ThreadStart
struct ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// ExitGames.Client.Photon.IPhotonSocket/<>c
struct U3CU3Ec_tB89977FB627163CFBA741E910E7E398AA25B3A8B;
// ExitGames.Client.Photon.PeerBase/<>c__DisplayClass104_0
struct U3CU3Ec__DisplayClass104_0_t4C95060B628C5F305CE87721EF1DE6452F9BD841;
// ExitGames.Client.Photon.PeerBase/<>c__DisplayClass105_0
struct U3CU3Ec__DisplayClass105_0_t691800BBB8BD0790F9236EBE594D75C9111D712B;
// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_t999C526EA1710EB0A054212C5495A3A286E2B5A7;
// ExitGames.Client.Photon.SupportClass/<>c
struct U3CU3Ec_tB8255EE4323FA3DA77B2CAD19B56F38688143AD1;
// ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t24E2D9FF9DF170096AE55682917C60F08A7E2BFA;
// ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate
struct IntegerMillisecondsDelegate_t958909BBBB5EE26474934A254FAC11B1C5BE4567;

IL2CPP_EXTERN_C RuntimeClass* AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionStateValue_t81F9EDBDC21FF79C6013A20B90A9CE7A49570A95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeliveryMode_tF32D749B1B3B54D61B751129E38FE02739DA8AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICryptoProvider_t4FD0F975131B5A2CD38D000AE63D97EC1BBFDEB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPhotonPeerListener_tE7041BC66B6BF1AA33D5AF6E25E984CDDF5A9E07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntegerMillisecondsDelegate_t958909BBBB5EE26474934A254FAC11B1C5BE4567_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MyAction_t999C526EA1710EB0A054212C5495A3A286E2B5A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonCodes_tE53B2AC61C3792AD7BB906424F243B342EB5E0D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Protocol_tC5BEBC831E1E1605DDED083FF8603C5907AE9D7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketTcp_t442BEC8A2E0A99ECE1B2C6FF9FCDA8128154A435_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadSafeRandom_tA68B671F85FF4A73E10BF8162827618D6BDCBCD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t24E2D9FF9DF170096AE55682917C60F08A7E2BFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB8255EE4323FA3DA77B2CAD19B56F38688143AD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB89977FB627163CFBA741E910E7E398AA25B3A8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Version_tE02BCCBEBFC3C855DC5B2D605B5C24F1831FA756_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tB1C5C8E3240FE7BDACAA801F7D131056ACA33838____6668D4903321030E42A6CE59AB96ADD9D0214FAC_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tB1C5C8E3240FE7BDACAA801F7D131056ACA33838____BDD25AA451AB045AA8B8B8A3D219233235E2305B_4_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0236BACCD260A20F0738D0E7EDBB60850D17B36A;
IL2CPP_EXTERN_C String_t* _stringLiteral070D193C86BF98D0196B0B2AB6F7CF0437FEF24B;
IL2CPP_EXTERN_C String_t* _stringLiteral0844A3E92F62DCD91CD00D9084B9DB82474F02CA;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466;
IL2CPP_EXTERN_C String_t* _stringLiteral331681871198787BC7941BD421E635F40B86CE38;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral5A22EC4707797C7AF782D7EE636368480C673139;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral7320E85A8DE6C28D8BEFAC38D01CE66FADFE0968;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral75D46515E5FA1E41165D1F1235FDED4C00F15F43;
IL2CPP_EXTERN_C String_t* _stringLiteral872DE60CB2239200B569B73387AEE6DEF5D86F24;
IL2CPP_EXTERN_C String_t* _stringLiteral8CBACC8665E098574C09F925D61F052BBB7E22B8;
IL2CPP_EXTERN_C String_t* _stringLiteral908BEA1D5D8065EACBEE7F2EC16BAE6A218408FB;
IL2CPP_EXTERN_C String_t* _stringLiteral919A195066BDFAFE43F7191F4F6DE66CCB82EF97;
IL2CPP_EXTERN_C String_t* _stringLiteral9CDB75C7B635278885D0B7EA4B060ED5D6CDDC2B;
IL2CPP_EXTERN_C String_t* _stringLiteralA11767B3AA037BEA810EDDF4B485E8DEC8406BC8;
IL2CPP_EXTERN_C String_t* _stringLiteralA1C16855D8192424FC88BE50A772F28AFBF3D5E6;
IL2CPP_EXTERN_C String_t* _stringLiteralAAF8F05C11CD4B88A9CDCF0903EAA82BF03A32B6;
IL2CPP_EXTERN_C String_t* _stringLiteralAC74A02B4CEED8538DF27EC8749B19526C0B8E0A;
IL2CPP_EXTERN_C String_t* _stringLiteralAD1E171FE9E55598FC5280CDCCB06C8AA67B5883;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C String_t* _stringLiteralEB3AA2628BF342A84CE7EB2AD8B7E300B7A91D26;
IL2CPP_EXTERN_C String_t* _stringLiteralF09647061E14A6AB82D0FE232AB0BC1838440C6D;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8EAE235A8AA510698BE04B4EC44DCA6979E58D29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m383F9AF12DF2593726E7F63FE9438E8ECEA542BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7047B900C688EC39A7AFB8E6BCE0525B48C7EACF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m5E6DF73A36A66925E4C3DCFF1568BCAC513D1DCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m36355704B10200ABC2B12900E77E4A9987640F3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD5BDAA1D4B15B17B05FB9CECD1A239F2FDEB5130_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF4F192665FB9D652A220E87BD65C5EFF1AA3476D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF58904EE64D37FF9290FAF23599FF3948FE67494_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7D8E89642684CA38BF575AC3ECC0F96EDD408B03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_m83F66337973B90D44B04DA1302077D6CCA463BCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m2EA4ED50C9D3AFC5608B9ACDF7C611D244872F0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m9A36F31681FA1AAB298A833220B6B7D2F48F82C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m7970BCC9C6190DE84A9EAE57CF52472B3795380A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m77A700976BCE8508C7EEC542FA014BB67577F610_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m1D55723B47270D04849E24BC09480DCD17C0CEBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m2FE6A24124300A57983A93DAFBFC4BF64684B9C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TPeer_EnqueueMessageAsPayload_m480655D1B92E0A2B6170FABC895AA5BAEAD538E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__20_0_mAA27F56F08D89303BE04C2D65E003909F6202508_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CStartBackgroundCallsU3Eb__0_m02C07252B3BE448DB18DAAB0996ED91D637B7CBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Hashtable_t8A4662B5C322B2F53CAAC05C306EEA688CE2A937_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t615ACEB7BB0C90B6E4CC324A2EAA23513755256E* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tA998D765590D33F85EB3DE2B7074233953998022 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t34CD6712C06BB62D73CFFB44390425C11A63AB16 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___entries_1)); }
	inline EntryU5BU5D_t615ACEB7BB0C90B6E4CC324A2EAA23513755256E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t615ACEB7BB0C90B6E4CC324A2EAA23513755256E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t615ACEB7BB0C90B6E4CC324A2EAA23513755256E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___keys_7)); }
	inline KeyCollection_tA998D765590D33F85EB3DE2B7074233953998022 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tA998D765590D33F85EB3DE2B7074233953998022 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tA998D765590D33F85EB3DE2B7074233953998022 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___values_8)); }
	inline ValueCollection_t34CD6712C06BB62D73CFFB44390425C11A63AB16 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t34CD6712C06BB62D73CFFB44390425C11A63AB16 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t34CD6712C06BB62D73CFFB44390425C11A63AB16 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>
struct List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StreamBufferU5BU5D_tEDD1D13632CB1530563C0C843631564903913620* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E, ____items_1)); }
	inline StreamBufferU5BU5D_tEDD1D13632CB1530563C0C843631564903913620* get__items_1() const { return ____items_1; }
	inline StreamBufferU5BU5D_tEDD1D13632CB1530563C0C843631564903913620** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StreamBufferU5BU5D_tEDD1D13632CB1530563C0C843631564903913620* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StreamBufferU5BU5D_tEDD1D13632CB1530563C0C843631564903913620* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E_StaticFields, ____emptyArray_5)); }
	inline StreamBufferU5BU5D_tEDD1D13632CB1530563C0C843631564903913620* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StreamBufferU5BU5D_tEDD1D13632CB1530563C0C843631564903913620** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StreamBufferU5BU5D_tEDD1D13632CB1530563C0C843631564903913620* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Threading.Thread>
struct List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ThreadU5BU5D_t9AB1EEE437F00EABE533CB2261E519C3976BD81F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118, ____items_1)); }
	inline ThreadU5BU5D_t9AB1EEE437F00EABE533CB2261E519C3976BD81F* get__items_1() const { return ____items_1; }
	inline ThreadU5BU5D_t9AB1EEE437F00EABE533CB2261E519C3976BD81F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ThreadU5BU5D_t9AB1EEE437F00EABE533CB2261E519C3976BD81F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ThreadU5BU5D_t9AB1EEE437F00EABE533CB2261E519C3976BD81F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118_StaticFields, ____emptyArray_5)); }
	inline ThreadU5BU5D_t9AB1EEE437F00EABE533CB2261E519C3976BD81F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ThreadU5BU5D_t9AB1EEE437F00EABE533CB2261E519C3976BD81F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ThreadU5BU5D_t9AB1EEE437F00EABE533CB2261E519C3976BD81F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Byte[]>
struct Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4, ____array_0)); }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* get__array_0() const { return ____array_0; }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct Queue_1_tDF0DA55465AF25D26AC05C3437EE16FBAE54C507  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	MyActionU5BU5D_t5776E0715307D30669D1514A27DD3DDE548B82D0* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tDF0DA55465AF25D26AC05C3437EE16FBAE54C507, ____array_0)); }
	inline MyActionU5BU5D_t5776E0715307D30669D1514A27DD3DDE548B82D0* get__array_0() const { return ____array_0; }
	inline MyActionU5BU5D_t5776E0715307D30669D1514A27DD3DDE548B82D0** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(MyActionU5BU5D_t5776E0715307D30669D1514A27DD3DDE548B82D0* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tDF0DA55465AF25D26AC05C3437EE16FBAE54C507, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tDF0DA55465AF25D26AC05C3437EE16FBAE54C507, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tDF0DA55465AF25D26AC05C3437EE16FBAE54C507, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tDF0DA55465AF25D26AC05C3437EE16FBAE54C507, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tDF0DA55465AF25D26AC05C3437EE16FBAE54C507, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// ExitGames.Client.Photon.IProtocol
struct IProtocol_tC0E4162EB71727CF15421A41CBE61A6749AEC038  : public RuntimeObject
{
public:

public:
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700  : public RuntimeObject
{
public:
	// System.Boolean ExitGames.Client.Photon.NetworkSimulationSet::isSimulationEnabled
	bool ___isSimulationEnabled_0;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::outgoingLag
	int32_t ___outgoingLag_1;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::outgoingJitter
	int32_t ___outgoingJitter_2;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::outgoingLossPercentage
	int32_t ___outgoingLossPercentage_3;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::incomingLag
	int32_t ___incomingLag_4;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::incomingJitter
	int32_t ___incomingJitter_5;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::incomingLossPercentage
	int32_t ___incomingLossPercentage_6;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.NetworkSimulationSet::peerBase
	PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * ___peerBase_7;
	// System.Threading.Thread ExitGames.Client.Photon.NetworkSimulationSet::netSimThread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___netSimThread_8;
	// System.Threading.ManualResetEvent ExitGames.Client.Photon.NetworkSimulationSet::NetSimManualResetEvent
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___NetSimManualResetEvent_9;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::<LostPackagesOut>k__BackingField
	int32_t ___U3CLostPackagesOutU3Ek__BackingField_10;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::<LostPackagesIn>k__BackingField
	int32_t ___U3CLostPackagesInU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_isSimulationEnabled_0() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700, ___isSimulationEnabled_0)); }
	inline bool get_isSimulationEnabled_0() const { return ___isSimulationEnabled_0; }
	inline bool* get_address_of_isSimulationEnabled_0() { return &___isSimulationEnabled_0; }
	inline void set_isSimulationEnabled_0(bool value)
	{
		___isSimulationEnabled_0 = value;
	}

	inline static int32_t get_offset_of_outgoingLag_1() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700, ___outgoingLag_1)); }
	inline int32_t get_outgoingLag_1() const { return ___outgoingLag_1; }
	inline int32_t* get_address_of_outgoingLag_1() { return &___outgoingLag_1; }
	inline void set_outgoingLag_1(int32_t value)
	{
		___outgoingLag_1 = value;
	}

	inline static int32_t get_offset_of_outgoingJitter_2() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700, ___outgoingJitter_2)); }
	inline int32_t get_outgoingJitter_2() const { return ___outgoingJitter_2; }
	inline int32_t* get_address_of_outgoingJitter_2() { return &___outgoingJitter_2; }
	inline void set_outgoingJitter_2(int32_t value)
	{
		___outgoingJitter_2 = value;
	}

	inline static int32_t get_offset_of_outgoingLossPercentage_3() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700, ___outgoingLossPercentage_3)); }
	inline int32_t get_outgoingLossPercentage_3() const { return ___outgoingLossPercentage_3; }
	inline int32_t* get_address_of_outgoingLossPercentage_3() { return &___outgoingLossPercentage_3; }
	inline void set_outgoingLossPercentage_3(int32_t value)
	{
		___outgoingLossPercentage_3 = value;
	}

	inline static int32_t get_offset_of_incomingLag_4() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700, ___incomingLag_4)); }
	inline int32_t get_incomingLag_4() const { return ___incomingLag_4; }
	inline int32_t* get_address_of_incomingLag_4() { return &___incomingLag_4; }
	inline void set_incomingLag_4(int32_t value)
	{
		___incomingLag_4 = value;
	}

	inline static int32_t get_offset_of_incomingJitter_5() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700, ___incomingJitter_5)); }
	inline int32_t get_incomingJitter_5() const { return ___incomingJitter_5; }
	inline int32_t* get_address_of_incomingJitter_5() { return &___incomingJitter_5; }
	inline void set_incomingJitter_5(int32_t value)
	{
		___incomingJitter_5 = value;
	}

	inline static int32_t get_offset_of_incomingLossPercentage_6() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700, ___incomingLossPercentage_6)); }
	inline int32_t get_incomingLossPercentage_6() const { return ___incomingLossPercentage_6; }
	inline int32_t* get_address_of_incomingLossPercentage_6() { return &___incomingLossPercentage_6; }
	inline void set_incomingLossPercentage_6(int32_t value)
	{
		___incomingLossPercentage_6 = value;
	}

	inline static int32_t get_offset_of_peerBase_7() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700, ___peerBase_7)); }
	inline PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * get_peerBase_7() const { return ___peerBase_7; }
	inline PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E ** get_address_of_peerBase_7() { return &___peerBase_7; }
	inline void set_peerBase_7(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * value)
	{
		___peerBase_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peerBase_7), (void*)value);
	}

	inline static int32_t get_offset_of_netSimThread_8() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700, ___netSimThread_8)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_netSimThread_8() const { return ___netSimThread_8; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_netSimThread_8() { return &___netSimThread_8; }
	inline void set_netSimThread_8(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___netSimThread_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___netSimThread_8), (void*)value);
	}

	inline static int32_t get_offset_of_NetSimManualResetEvent_9() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700, ___NetSimManualResetEvent_9)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_NetSimManualResetEvent_9() const { return ___NetSimManualResetEvent_9; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_NetSimManualResetEvent_9() { return &___NetSimManualResetEvent_9; }
	inline void set_NetSimManualResetEvent_9(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___NetSimManualResetEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetSimManualResetEvent_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLostPackagesOutU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700, ___U3CLostPackagesOutU3Ek__BackingField_10)); }
	inline int32_t get_U3CLostPackagesOutU3Ek__BackingField_10() const { return ___U3CLostPackagesOutU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CLostPackagesOutU3Ek__BackingField_10() { return &___U3CLostPackagesOutU3Ek__BackingField_10; }
	inline void set_U3CLostPackagesOutU3Ek__BackingField_10(int32_t value)
	{
		___U3CLostPackagesOutU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CLostPackagesInU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700, ___U3CLostPackagesInU3Ek__BackingField_11)); }
	inline int32_t get_U3CLostPackagesInU3Ek__BackingField_11() const { return ___U3CLostPackagesInU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CLostPackagesInU3Ek__BackingField_11() { return &___U3CLostPackagesInU3Ek__BackingField_11; }
	inline void set_U3CLostPackagesInU3Ek__BackingField_11(int32_t value)
	{
		___U3CLostPackagesInU3Ek__BackingField_11 = value;
	}
};


// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_tAE1B48415762EE27262D2A378D7EA01589DDBBB9  : public RuntimeObject
{
public:
	// System.Byte ExitGames.Client.Photon.OperationResponse::OperationCode
	uint8_t ___OperationCode_0;
	// System.Int16 ExitGames.Client.Photon.OperationResponse::ReturnCode
	int16_t ___ReturnCode_1;
	// System.String ExitGames.Client.Photon.OperationResponse::DebugMessage
	String_t* ___DebugMessage_2;
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.OperationResponse::Parameters
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * ___Parameters_3;

public:
	inline static int32_t get_offset_of_OperationCode_0() { return static_cast<int32_t>(offsetof(OperationResponse_tAE1B48415762EE27262D2A378D7EA01589DDBBB9, ___OperationCode_0)); }
	inline uint8_t get_OperationCode_0() const { return ___OperationCode_0; }
	inline uint8_t* get_address_of_OperationCode_0() { return &___OperationCode_0; }
	inline void set_OperationCode_0(uint8_t value)
	{
		___OperationCode_0 = value;
	}

	inline static int32_t get_offset_of_ReturnCode_1() { return static_cast<int32_t>(offsetof(OperationResponse_tAE1B48415762EE27262D2A378D7EA01589DDBBB9, ___ReturnCode_1)); }
	inline int16_t get_ReturnCode_1() const { return ___ReturnCode_1; }
	inline int16_t* get_address_of_ReturnCode_1() { return &___ReturnCode_1; }
	inline void set_ReturnCode_1(int16_t value)
	{
		___ReturnCode_1 = value;
	}

	inline static int32_t get_offset_of_DebugMessage_2() { return static_cast<int32_t>(offsetof(OperationResponse_tAE1B48415762EE27262D2A378D7EA01589DDBBB9, ___DebugMessage_2)); }
	inline String_t* get_DebugMessage_2() const { return ___DebugMessage_2; }
	inline String_t** get_address_of_DebugMessage_2() { return &___DebugMessage_2; }
	inline void set_DebugMessage_2(String_t* value)
	{
		___DebugMessage_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DebugMessage_2), (void*)value);
	}

	inline static int32_t get_offset_of_Parameters_3() { return static_cast<int32_t>(offsetof(OperationResponse_tAE1B48415762EE27262D2A378D7EA01589DDBBB9, ___Parameters_3)); }
	inline Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * get_Parameters_3() const { return ___Parameters_3; }
	inline Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A ** get_address_of_Parameters_3() { return &___Parameters_3; }
	inline void set_Parameters_3(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * value)
	{
		___Parameters_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Parameters_3), (void*)value);
	}
};


// ExitGames.Client.Photon.PhotonCodes
struct PhotonCodes_tE53B2AC61C3792AD7BB906424F243B342EB5E0D4  : public RuntimeObject
{
public:

public:
};

struct PhotonCodes_tE53B2AC61C3792AD7BB906424F243B342EB5E0D4_StaticFields
{
public:
	// System.Byte ExitGames.Client.Photon.PhotonCodes::ClientKey
	uint8_t ___ClientKey_0;
	// System.Byte ExitGames.Client.Photon.PhotonCodes::ModeKey
	uint8_t ___ModeKey_1;
	// System.Byte ExitGames.Client.Photon.PhotonCodes::ServerKey
	uint8_t ___ServerKey_2;
	// System.Byte ExitGames.Client.Photon.PhotonCodes::InitEncryption
	uint8_t ___InitEncryption_3;
	// System.Byte ExitGames.Client.Photon.PhotonCodes::Ping
	uint8_t ___Ping_4;

public:
	inline static int32_t get_offset_of_ClientKey_0() { return static_cast<int32_t>(offsetof(PhotonCodes_tE53B2AC61C3792AD7BB906424F243B342EB5E0D4_StaticFields, ___ClientKey_0)); }
	inline uint8_t get_ClientKey_0() const { return ___ClientKey_0; }
	inline uint8_t* get_address_of_ClientKey_0() { return &___ClientKey_0; }
	inline void set_ClientKey_0(uint8_t value)
	{
		___ClientKey_0 = value;
	}

	inline static int32_t get_offset_of_ModeKey_1() { return static_cast<int32_t>(offsetof(PhotonCodes_tE53B2AC61C3792AD7BB906424F243B342EB5E0D4_StaticFields, ___ModeKey_1)); }
	inline uint8_t get_ModeKey_1() const { return ___ModeKey_1; }
	inline uint8_t* get_address_of_ModeKey_1() { return &___ModeKey_1; }
	inline void set_ModeKey_1(uint8_t value)
	{
		___ModeKey_1 = value;
	}

	inline static int32_t get_offset_of_ServerKey_2() { return static_cast<int32_t>(offsetof(PhotonCodes_tE53B2AC61C3792AD7BB906424F243B342EB5E0D4_StaticFields, ___ServerKey_2)); }
	inline uint8_t get_ServerKey_2() const { return ___ServerKey_2; }
	inline uint8_t* get_address_of_ServerKey_2() { return &___ServerKey_2; }
	inline void set_ServerKey_2(uint8_t value)
	{
		___ServerKey_2 = value;
	}

	inline static int32_t get_offset_of_InitEncryption_3() { return static_cast<int32_t>(offsetof(PhotonCodes_tE53B2AC61C3792AD7BB906424F243B342EB5E0D4_StaticFields, ___InitEncryption_3)); }
	inline uint8_t get_InitEncryption_3() const { return ___InitEncryption_3; }
	inline uint8_t* get_address_of_InitEncryption_3() { return &___InitEncryption_3; }
	inline void set_InitEncryption_3(uint8_t value)
	{
		___InitEncryption_3 = value;
	}

	inline static int32_t get_offset_of_Ping_4() { return static_cast<int32_t>(offsetof(PhotonCodes_tE53B2AC61C3792AD7BB906424F243B342EB5E0D4_StaticFields, ___Ping_4)); }
	inline uint8_t get_Ping_4() const { return ___Ping_4; }
	inline uint8_t* get_address_of_Ping_4() { return &___Ping_4; }
	inline void set_Ping_4(uint8_t value)
	{
		___Ping_4 = value;
	}
};


// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_3;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_4;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___SeedArray_5;

public:
	inline static int32_t get_offset_of_inext_3() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inext_3)); }
	inline int32_t get_inext_3() const { return ___inext_3; }
	inline int32_t* get_address_of_inext_3() { return &___inext_3; }
	inline void set_inext_3(int32_t value)
	{
		___inext_3 = value;
	}

	inline static int32_t get_offset_of_inextp_4() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inextp_4)); }
	inline int32_t get_inextp_4() const { return ___inextp_4; }
	inline int32_t* get_address_of_inextp_4() { return &___inextp_4; }
	inline void set_inextp_4(int32_t value)
	{
		___inextp_4 = value;
	}

	inline static int32_t get_offset_of_SeedArray_5() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___SeedArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_SeedArray_5() const { return ___SeedArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_SeedArray_5() { return &___SeedArray_5; }
	inline void set_SeedArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___SeedArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_5), (void*)value);
	}
};


// ExitGames.Client.Photon.StreamBuffer
struct StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.StreamBuffer::pos
	int32_t ___pos_1;
	// System.Int32 ExitGames.Client.Photon.StreamBuffer::len
	int32_t ___len_2;
	// System.Byte[] ExitGames.Client.Photon.StreamBuffer::buf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_3;

public:
	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC, ___pos_1)); }
	inline int32_t get_pos_1() const { return ___pos_1; }
	inline int32_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(int32_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_len_2() { return static_cast<int32_t>(offsetof(StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC, ___len_2)); }
	inline int32_t get_len_2() const { return ___len_2; }
	inline int32_t* get_address_of_len_2() { return &___len_2; }
	inline void set_len_2(int32_t value)
	{
		___len_2 = value;
	}

	inline static int32_t get_offset_of_buf_3() { return static_cast<int32_t>(offsetof(StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC, ___buf_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_3() const { return ___buf_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_3() { return &___buf_3; }
	inline void set_buf_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_3), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// ExitGames.Client.Photon.SupportClass
struct SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362  : public RuntimeObject
{
public:

public:
};

struct SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Threading.Thread> ExitGames.Client.Photon.SupportClass::threadList
	List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * ___threadList_0;
	// ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate ExitGames.Client.Photon.SupportClass::IntegerMilliseconds
	IntegerMillisecondsDelegate_t958909BBBB5EE26474934A254FAC11B1C5BE4567 * ___IntegerMilliseconds_1;
	// System.UInt32[] ExitGames.Client.Photon.SupportClass::crcLookupTable
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___crcLookupTable_2;

public:
	inline static int32_t get_offset_of_threadList_0() { return static_cast<int32_t>(offsetof(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_StaticFields, ___threadList_0)); }
	inline List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * get_threadList_0() const { return ___threadList_0; }
	inline List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 ** get_address_of_threadList_0() { return &___threadList_0; }
	inline void set_threadList_0(List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * value)
	{
		___threadList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___threadList_0), (void*)value);
	}

	inline static int32_t get_offset_of_IntegerMilliseconds_1() { return static_cast<int32_t>(offsetof(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_StaticFields, ___IntegerMilliseconds_1)); }
	inline IntegerMillisecondsDelegate_t958909BBBB5EE26474934A254FAC11B1C5BE4567 * get_IntegerMilliseconds_1() const { return ___IntegerMilliseconds_1; }
	inline IntegerMillisecondsDelegate_t958909BBBB5EE26474934A254FAC11B1C5BE4567 ** get_address_of_IntegerMilliseconds_1() { return &___IntegerMilliseconds_1; }
	inline void set_IntegerMilliseconds_1(IntegerMillisecondsDelegate_t958909BBBB5EE26474934A254FAC11B1C5BE4567 * value)
	{
		___IntegerMilliseconds_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IntegerMilliseconds_1), (void*)value);
	}

	inline static int32_t get_offset_of_crcLookupTable_2() { return static_cast<int32_t>(offsetof(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_StaticFields, ___crcLookupTable_2)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_crcLookupTable_2() const { return ___crcLookupTable_2; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_crcLookupTable_2() { return &___crcLookupTable_2; }
	inline void set_crcLookupTable_2(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___crcLookupTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crcLookupTable_2), (void*)value);
	}
};


// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<PackageHeaderSize>k__BackingField
	int32_t ___U3CPackageHeaderSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ReliableCommandCount>k__BackingField
	int32_t ___U3CReliableCommandCountU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<UnreliableCommandCount>k__BackingField
	int32_t ___U3CUnreliableCommandCountU3Ek__BackingField_2;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<FragmentCommandCount>k__BackingField
	int32_t ___U3CFragmentCommandCountU3Ek__BackingField_3;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ControlCommandCount>k__BackingField
	int32_t ___U3CControlCommandCountU3Ek__BackingField_4;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TotalPacketCount>k__BackingField
	int32_t ___U3CTotalPacketCountU3Ek__BackingField_5;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TotalCommandsInPackets>k__BackingField
	int32_t ___U3CTotalCommandsInPacketsU3Ek__BackingField_6;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ReliableCommandBytes>k__BackingField
	int32_t ___U3CReliableCommandBytesU3Ek__BackingField_7;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<UnreliableCommandBytes>k__BackingField
	int32_t ___U3CUnreliableCommandBytesU3Ek__BackingField_8;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<FragmentCommandBytes>k__BackingField
	int32_t ___U3CFragmentCommandBytesU3Ek__BackingField_9;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ControlCommandBytes>k__BackingField
	int32_t ___U3CControlCommandBytesU3Ek__BackingField_10;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TimestampOfLastAck>k__BackingField
	int32_t ___U3CTimestampOfLastAckU3Ek__BackingField_11;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TimestampOfLastReliableCommand>k__BackingField
	int32_t ___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CPackageHeaderSizeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0, ___U3CPackageHeaderSizeU3Ek__BackingField_0)); }
	inline int32_t get_U3CPackageHeaderSizeU3Ek__BackingField_0() const { return ___U3CPackageHeaderSizeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CPackageHeaderSizeU3Ek__BackingField_0() { return &___U3CPackageHeaderSizeU3Ek__BackingField_0; }
	inline void set_U3CPackageHeaderSizeU3Ek__BackingField_0(int32_t value)
	{
		___U3CPackageHeaderSizeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CReliableCommandCountU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0, ___U3CReliableCommandCountU3Ek__BackingField_1)); }
	inline int32_t get_U3CReliableCommandCountU3Ek__BackingField_1() const { return ___U3CReliableCommandCountU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CReliableCommandCountU3Ek__BackingField_1() { return &___U3CReliableCommandCountU3Ek__BackingField_1; }
	inline void set_U3CReliableCommandCountU3Ek__BackingField_1(int32_t value)
	{
		___U3CReliableCommandCountU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CUnreliableCommandCountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0, ___U3CUnreliableCommandCountU3Ek__BackingField_2)); }
	inline int32_t get_U3CUnreliableCommandCountU3Ek__BackingField_2() const { return ___U3CUnreliableCommandCountU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CUnreliableCommandCountU3Ek__BackingField_2() { return &___U3CUnreliableCommandCountU3Ek__BackingField_2; }
	inline void set_U3CUnreliableCommandCountU3Ek__BackingField_2(int32_t value)
	{
		___U3CUnreliableCommandCountU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CFragmentCommandCountU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0, ___U3CFragmentCommandCountU3Ek__BackingField_3)); }
	inline int32_t get_U3CFragmentCommandCountU3Ek__BackingField_3() const { return ___U3CFragmentCommandCountU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CFragmentCommandCountU3Ek__BackingField_3() { return &___U3CFragmentCommandCountU3Ek__BackingField_3; }
	inline void set_U3CFragmentCommandCountU3Ek__BackingField_3(int32_t value)
	{
		___U3CFragmentCommandCountU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CControlCommandCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0, ___U3CControlCommandCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CControlCommandCountU3Ek__BackingField_4() const { return ___U3CControlCommandCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CControlCommandCountU3Ek__BackingField_4() { return &___U3CControlCommandCountU3Ek__BackingField_4; }
	inline void set_U3CControlCommandCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CControlCommandCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CTotalPacketCountU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0, ___U3CTotalPacketCountU3Ek__BackingField_5)); }
	inline int32_t get_U3CTotalPacketCountU3Ek__BackingField_5() const { return ___U3CTotalPacketCountU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CTotalPacketCountU3Ek__BackingField_5() { return &___U3CTotalPacketCountU3Ek__BackingField_5; }
	inline void set_U3CTotalPacketCountU3Ek__BackingField_5(int32_t value)
	{
		___U3CTotalPacketCountU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CTotalCommandsInPacketsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0, ___U3CTotalCommandsInPacketsU3Ek__BackingField_6)); }
	inline int32_t get_U3CTotalCommandsInPacketsU3Ek__BackingField_6() const { return ___U3CTotalCommandsInPacketsU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CTotalCommandsInPacketsU3Ek__BackingField_6() { return &___U3CTotalCommandsInPacketsU3Ek__BackingField_6; }
	inline void set_U3CTotalCommandsInPacketsU3Ek__BackingField_6(int32_t value)
	{
		___U3CTotalCommandsInPacketsU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CReliableCommandBytesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0, ___U3CReliableCommandBytesU3Ek__BackingField_7)); }
	inline int32_t get_U3CReliableCommandBytesU3Ek__BackingField_7() const { return ___U3CReliableCommandBytesU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CReliableCommandBytesU3Ek__BackingField_7() { return &___U3CReliableCommandBytesU3Ek__BackingField_7; }
	inline void set_U3CReliableCommandBytesU3Ek__BackingField_7(int32_t value)
	{
		___U3CReliableCommandBytesU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CUnreliableCommandBytesU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0, ___U3CUnreliableCommandBytesU3Ek__BackingField_8)); }
	inline int32_t get_U3CUnreliableCommandBytesU3Ek__BackingField_8() const { return ___U3CUnreliableCommandBytesU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CUnreliableCommandBytesU3Ek__BackingField_8() { return &___U3CUnreliableCommandBytesU3Ek__BackingField_8; }
	inline void set_U3CUnreliableCommandBytesU3Ek__BackingField_8(int32_t value)
	{
		___U3CUnreliableCommandBytesU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CFragmentCommandBytesU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0, ___U3CFragmentCommandBytesU3Ek__BackingField_9)); }
	inline int32_t get_U3CFragmentCommandBytesU3Ek__BackingField_9() const { return ___U3CFragmentCommandBytesU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CFragmentCommandBytesU3Ek__BackingField_9() { return &___U3CFragmentCommandBytesU3Ek__BackingField_9; }
	inline void set_U3CFragmentCommandBytesU3Ek__BackingField_9(int32_t value)
	{
		___U3CFragmentCommandBytesU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CControlCommandBytesU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0, ___U3CControlCommandBytesU3Ek__BackingField_10)); }
	inline int32_t get_U3CControlCommandBytesU3Ek__BackingField_10() const { return ___U3CControlCommandBytesU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CControlCommandBytesU3Ek__BackingField_10() { return &___U3CControlCommandBytesU3Ek__BackingField_10; }
	inline void set_U3CControlCommandBytesU3Ek__BackingField_10(int32_t value)
	{
		___U3CControlCommandBytesU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CTimestampOfLastAckU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0, ___U3CTimestampOfLastAckU3Ek__BackingField_11)); }
	inline int32_t get_U3CTimestampOfLastAckU3Ek__BackingField_11() const { return ___U3CTimestampOfLastAckU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CTimestampOfLastAckU3Ek__BackingField_11() { return &___U3CTimestampOfLastAckU3Ek__BackingField_11; }
	inline void set_U3CTimestampOfLastAckU3Ek__BackingField_11(int32_t value)
	{
		___U3CTimestampOfLastAckU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CTimestampOfLastReliableCommandU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0, ___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12)); }
	inline int32_t get_U3CTimestampOfLastReliableCommandU3Ek__BackingField_12() const { return ___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CTimestampOfLastReliableCommandU3Ek__BackingField_12() { return &___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12; }
	inline void set_U3CTimestampOfLastReliableCommandU3Ek__BackingField_12(int32_t value)
	{
		___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12 = value;
	}
};


// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::timeOfLastDispatchCall
	int32_t ___timeOfLastDispatchCall_0;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::timeOfLastSendCall
	int32_t ___timeOfLastSendCall_1;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<OperationByteCount>k__BackingField
	int32_t ___U3COperationByteCountU3Ek__BackingField_2;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<OperationCount>k__BackingField
	int32_t ___U3COperationCountU3Ek__BackingField_3;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<ResultByteCount>k__BackingField
	int32_t ___U3CResultByteCountU3Ek__BackingField_4;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<ResultCount>k__BackingField
	int32_t ___U3CResultCountU3Ek__BackingField_5;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<EventByteCount>k__BackingField
	int32_t ___U3CEventByteCountU3Ek__BackingField_6;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<EventCount>k__BackingField
	int32_t ___U3CEventCountU3Ek__BackingField_7;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestOpResponseCallback>k__BackingField
	int32_t ___U3CLongestOpResponseCallbackU3Ek__BackingField_8;
	// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestOpResponseCallbackOpCode>k__BackingField
	uint8_t ___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestEventCallback>k__BackingField
	int32_t ___U3CLongestEventCallbackU3Ek__BackingField_10;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestMessageCallback>k__BackingField
	int32_t ___U3CLongestMessageCallbackU3Ek__BackingField_11;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestRawMessageCallback>k__BackingField
	int32_t ___U3CLongestRawMessageCallbackU3Ek__BackingField_12;
	// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestEventCallbackCode>k__BackingField
	uint8_t ___U3CLongestEventCallbackCodeU3Ek__BackingField_13;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestDeltaBetweenDispatching>k__BackingField
	int32_t ___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestDeltaBetweenSending>k__BackingField
	int32_t ___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<DispatchIncomingCommandsCalls>k__BackingField
	int32_t ___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<SendOutgoingCommandsCalls>k__BackingField
	int32_t ___U3CSendOutgoingCommandsCallsU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_timeOfLastDispatchCall_0() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94, ___timeOfLastDispatchCall_0)); }
	inline int32_t get_timeOfLastDispatchCall_0() const { return ___timeOfLastDispatchCall_0; }
	inline int32_t* get_address_of_timeOfLastDispatchCall_0() { return &___timeOfLastDispatchCall_0; }
	inline void set_timeOfLastDispatchCall_0(int32_t value)
	{
		___timeOfLastDispatchCall_0 = value;
	}

	inline static int32_t get_offset_of_timeOfLastSendCall_1() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94, ___timeOfLastSendCall_1)); }
	inline int32_t get_timeOfLastSendCall_1() const { return ___timeOfLastSendCall_1; }
	inline int32_t* get_address_of_timeOfLastSendCall_1() { return &___timeOfLastSendCall_1; }
	inline void set_timeOfLastSendCall_1(int32_t value)
	{
		___timeOfLastSendCall_1 = value;
	}

	inline static int32_t get_offset_of_U3COperationByteCountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94, ___U3COperationByteCountU3Ek__BackingField_2)); }
	inline int32_t get_U3COperationByteCountU3Ek__BackingField_2() const { return ___U3COperationByteCountU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3COperationByteCountU3Ek__BackingField_2() { return &___U3COperationByteCountU3Ek__BackingField_2; }
	inline void set_U3COperationByteCountU3Ek__BackingField_2(int32_t value)
	{
		___U3COperationByteCountU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3COperationCountU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94, ___U3COperationCountU3Ek__BackingField_3)); }
	inline int32_t get_U3COperationCountU3Ek__BackingField_3() const { return ___U3COperationCountU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3COperationCountU3Ek__BackingField_3() { return &___U3COperationCountU3Ek__BackingField_3; }
	inline void set_U3COperationCountU3Ek__BackingField_3(int32_t value)
	{
		___U3COperationCountU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CResultByteCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94, ___U3CResultByteCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CResultByteCountU3Ek__BackingField_4() const { return ___U3CResultByteCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CResultByteCountU3Ek__BackingField_4() { return &___U3CResultByteCountU3Ek__BackingField_4; }
	inline void set_U3CResultByteCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CResultByteCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CResultCountU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94, ___U3CResultCountU3Ek__BackingField_5)); }
	inline int32_t get_U3CResultCountU3Ek__BackingField_5() const { return ___U3CResultCountU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CResultCountU3Ek__BackingField_5() { return &___U3CResultCountU3Ek__BackingField_5; }
	inline void set_U3CResultCountU3Ek__BackingField_5(int32_t value)
	{
		___U3CResultCountU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CEventByteCountU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94, ___U3CEventByteCountU3Ek__BackingField_6)); }
	inline int32_t get_U3CEventByteCountU3Ek__BackingField_6() const { return ___U3CEventByteCountU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CEventByteCountU3Ek__BackingField_6() { return &___U3CEventByteCountU3Ek__BackingField_6; }
	inline void set_U3CEventByteCountU3Ek__BackingField_6(int32_t value)
	{
		___U3CEventByteCountU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CEventCountU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94, ___U3CEventCountU3Ek__BackingField_7)); }
	inline int32_t get_U3CEventCountU3Ek__BackingField_7() const { return ___U3CEventCountU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CEventCountU3Ek__BackingField_7() { return &___U3CEventCountU3Ek__BackingField_7; }
	inline void set_U3CEventCountU3Ek__BackingField_7(int32_t value)
	{
		___U3CEventCountU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CLongestOpResponseCallbackU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94, ___U3CLongestOpResponseCallbackU3Ek__BackingField_8)); }
	inline int32_t get_U3CLongestOpResponseCallbackU3Ek__BackingField_8() const { return ___U3CLongestOpResponseCallbackU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CLongestOpResponseCallbackU3Ek__BackingField_8() { return &___U3CLongestOpResponseCallbackU3Ek__BackingField_8; }
	inline void set_U3CLongestOpResponseCallbackU3Ek__BackingField_8(int32_t value)
	{
		___U3CLongestOpResponseCallbackU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94, ___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9)); }
	inline uint8_t get_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9() const { return ___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9; }
	inline uint8_t* get_address_of_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9() { return &___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9; }
	inline void set_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9(uint8_t value)
	{
		___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CLongestEventCallbackU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94, ___U3CLongestEventCallbackU3Ek__BackingField_10)); }
	inline int32_t get_U3CLongestEventCallbackU3Ek__BackingField_10() const { return ___U3CLongestEventCallbackU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CLongestEventCallbackU3Ek__BackingField_10() { return &___U3CLongestEventCallbackU3Ek__BackingField_10; }
	inline void set_U3CLongestEventCallbackU3Ek__BackingField_10(int32_t value)
	{
		___U3CLongestEventCallbackU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CLongestMessageCallbackU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94, ___U3CLongestMessageCallbackU3Ek__BackingField_11)); }
	inline int32_t get_U3CLongestMessageCallbackU3Ek__BackingField_11() const { return ___U3CLongestMessageCallbackU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CLongestMessageCallbackU3Ek__BackingField_11() { return &___U3CLongestMessageCallbackU3Ek__BackingField_11; }
	inline void set_U3CLongestMessageCallbackU3Ek__BackingField_11(int32_t value)
	{
		___U3CLongestMessageCallbackU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CLongestRawMessageCallbackU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94, ___U3CLongestRawMessageCallbackU3Ek__BackingField_12)); }
	inline int32_t get_U3CLongestRawMessageCallbackU3Ek__BackingField_12() const { return ___U3CLongestRawMessageCallbackU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CLongestRawMessageCallbackU3Ek__BackingField_12() { return &___U3CLongestRawMessageCallbackU3Ek__BackingField_12; }
	inline void set_U3CLongestRawMessageCallbackU3Ek__BackingField_12(int32_t value)
	{
		___U3CLongestRawMessageCallbackU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CLongestEventCallbackCodeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94, ___U3CLongestEventCallbackCodeU3Ek__BackingField_13)); }
	inline uint8_t get_U3CLongestEventCallbackCodeU3Ek__BackingField_13() const { return ___U3CLongestEventCallbackCodeU3Ek__BackingField_13; }
	inline uint8_t* get_address_of_U3CLongestEventCallbackCodeU3Ek__BackingField_13() { return &___U3CLongestEventCallbackCodeU3Ek__BackingField_13; }
	inline void set_U3CLongestEventCallbackCodeU3Ek__BackingField_13(uint8_t value)
	{
		___U3CLongestEventCallbackCodeU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94, ___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14)); }
	inline int32_t get_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14() const { return ___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14() { return &___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14; }
	inline void set_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14(int32_t value)
	{
		___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94, ___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15)); }
	inline int32_t get_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15() const { return ___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15() { return &___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15; }
	inline void set_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15(int32_t value)
	{
		___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94, ___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16)); }
	inline int32_t get_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16() const { return ___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16() { return &___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16; }
	inline void set_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16(int32_t value)
	{
		___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94, ___U3CSendOutgoingCommandsCallsU3Ek__BackingField_17)); }
	inline int32_t get_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17() const { return ___U3CSendOutgoingCommandsCallsU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17() { return &___U3CSendOutgoingCommandsCallsU3Ek__BackingField_17; }
	inline void set_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17(int32_t value)
	{
		___U3CSendOutgoingCommandsCallsU3Ek__BackingField_17 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// ExitGames.Client.Photon.Version
struct Version_tE02BCCBEBFC3C855DC5B2D605B5C24F1831FA756  : public RuntimeObject
{
public:

public:
};

struct Version_tE02BCCBEBFC3C855DC5B2D605B5C24F1831FA756_StaticFields
{
public:
	// System.Byte[] ExitGames.Client.Photon.Version::clientVersion
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___clientVersion_0;

public:
	inline static int32_t get_offset_of_clientVersion_0() { return static_cast<int32_t>(offsetof(Version_tE02BCCBEBFC3C855DC5B2D605B5C24F1831FA756_StaticFields, ___clientVersion_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_clientVersion_0() const { return ___clientVersion_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_clientVersion_0() { return &___clientVersion_0; }
	inline void set_clientVersion_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___clientVersion_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientVersion_0), (void*)value);
	}
};


// ExitGames.Client.Photon.IPhotonSocket/<>c
struct U3CU3Ec_tB89977FB627163CFBA741E910E7E398AA25B3A8B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB89977FB627163CFBA741E910E7E398AA25B3A8B_StaticFields
{
public:
	// ExitGames.Client.Photon.IPhotonSocket/<>c ExitGames.Client.Photon.IPhotonSocket/<>c::<>9
	U3CU3Ec_tB89977FB627163CFBA741E910E7E398AA25B3A8B * ___U3CU3E9_0;
	// System.Func`2<System.Net.IPAddress,System.String> ExitGames.Client.Photon.IPhotonSocket/<>c::<>9__50_0
	Func_2_t07AA32ABA3AA42B99EB1A0D449B0292901F35822 * ___U3CU3E9__50_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB89977FB627163CFBA741E910E7E398AA25B3A8B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB89977FB627163CFBA741E910E7E398AA25B3A8B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB89977FB627163CFBA741E910E7E398AA25B3A8B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB89977FB627163CFBA741E910E7E398AA25B3A8B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__50_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB89977FB627163CFBA741E910E7E398AA25B3A8B_StaticFields, ___U3CU3E9__50_0_1)); }
	inline Func_2_t07AA32ABA3AA42B99EB1A0D449B0292901F35822 * get_U3CU3E9__50_0_1() const { return ___U3CU3E9__50_0_1; }
	inline Func_2_t07AA32ABA3AA42B99EB1A0D449B0292901F35822 ** get_address_of_U3CU3E9__50_0_1() { return &___U3CU3E9__50_0_1; }
	inline void set_U3CU3E9__50_0_1(Func_2_t07AA32ABA3AA42B99EB1A0D449B0292901F35822 * value)
	{
		___U3CU3E9__50_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__50_0_1), (void*)value);
	}
};


// ExitGames.Client.Photon.SupportClass/<>c
struct U3CU3Ec_tB8255EE4323FA3DA77B2CAD19B56F38688143AD1  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB8255EE4323FA3DA77B2CAD19B56F38688143AD1_StaticFields
{
public:
	// ExitGames.Client.Photon.SupportClass/<>c ExitGames.Client.Photon.SupportClass/<>c::<>9
	U3CU3Ec_tB8255EE4323FA3DA77B2CAD19B56F38688143AD1 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB8255EE4323FA3DA77B2CAD19B56F38688143AD1_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB8255EE4323FA3DA77B2CAD19B56F38688143AD1 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB8255EE4323FA3DA77B2CAD19B56F38688143AD1 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB8255EE4323FA3DA77B2CAD19B56F38688143AD1 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t24E2D9FF9DF170096AE55682917C60F08A7E2BFA  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::millisecondsInterval
	int32_t ___millisecondsInterval_0;
	// System.Func`1<System.Boolean> ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::myThread
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___myThread_1;

public:
	inline static int32_t get_offset_of_millisecondsInterval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t24E2D9FF9DF170096AE55682917C60F08A7E2BFA, ___millisecondsInterval_0)); }
	inline int32_t get_millisecondsInterval_0() const { return ___millisecondsInterval_0; }
	inline int32_t* get_address_of_millisecondsInterval_0() { return &___millisecondsInterval_0; }
	inline void set_millisecondsInterval_0(int32_t value)
	{
		___millisecondsInterval_0 = value;
	}

	inline static int32_t get_offset_of_myThread_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t24E2D9FF9DF170096AE55682917C60F08A7E2BFA, ___myThread_1)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_myThread_1() const { return ___myThread_1; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_myThread_1() { return &___myThread_1; }
	inline void set_myThread_1(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___myThread_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myThread_1), (void*)value);
	}
};


// ExitGames.Client.Photon.SupportClass/ThreadSafeRandom
struct ThreadSafeRandom_tA68B671F85FF4A73E10BF8162827618D6BDCBCD7  : public RuntimeObject
{
public:

public:
};

struct ThreadSafeRandom_tA68B671F85FF4A73E10BF8162827618D6BDCBCD7_StaticFields
{
public:
	// System.Random ExitGames.Client.Photon.SupportClass/ThreadSafeRandom::_r
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ____r_0;

public:
	inline static int32_t get_offset_of__r_0() { return static_cast<int32_t>(offsetof(ThreadSafeRandom_tA68B671F85FF4A73E10BF8162827618D6BDCBCD7_StaticFields, ____r_0)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get__r_0() const { return ____r_0; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of__r_0() { return &____r_0; }
	inline void set__r_0(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		____r_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____r_0), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___internal_thread_6)); }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1212
struct __StaticArrayInitTypeSizeU3D1212_t24A4B5419466CF2A5177F82924131BD47EE7167B 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1212_t24A4B5419466CF2A5177F82924131BD47EE7167B__padding[1212];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_tBE7FC0ADEB722B5903F913377381199A364090D8 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_tBE7FC0ADEB722B5903F913377381199A364090D8__padding[128];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192
struct __StaticArrayInitTypeSizeU3D192_tA913119FF977562E195B2F1256CE8A6ABC6066BC 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D192_tA913119FF977562E195B2F1256CE8A6ABC6066BC__padding[192];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct __StaticArrayInitTypeSizeU3D9_t437840F3800066DFA96ED7917DFA665EDD6ABEA2 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_t437840F3800066DFA96ED7917DFA665EDD6ABEA2__padding[9];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
struct __StaticArrayInitTypeSizeU3D96_tDD326BF772C901780BC973C0DA486B1D84649608 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_tDD326BF772C901780BC973C0DA486B1D84649608__padding[96];
	};

public:
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tB1C5C8E3240FE7BDACAA801F7D131056ACA33838  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_tB1C5C8E3240FE7BDACAA801F7D131056ACA33838_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::4989E5469B40416DC5AFB739C747E32B40CC5C77
	__StaticArrayInitTypeSizeU3D96_tDD326BF772C901780BC973C0DA486B1D84649608  ___4989E5469B40416DC5AFB739C747E32B40CC5C77_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192 <PrivateImplementationDetails>::49ECABA9727A1AF0636082C467485A1A9A04B669
	__StaticArrayInitTypeSizeU3D192_tA913119FF977562E195B2F1256CE8A6ABC6066BC  ___49ECABA9727A1AF0636082C467485A1A9A04B669_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::6668D4903321030E42A6CE59AB96ADD9D0214FAC
	__StaticArrayInitTypeSizeU3D9_t437840F3800066DFA96ED7917DFA665EDD6ABEA2  ___6668D4903321030E42A6CE59AB96ADD9D0214FAC_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1212 <PrivateImplementationDetails>::AEAF34DCCF141E917F02F7768DAEA80AA2B13B95
	__StaticArrayInitTypeSizeU3D1212_t24A4B5419466CF2A5177F82924131BD47EE7167B  ___AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_3;
	// System.Int32 <PrivateImplementationDetails>::BDD25AA451AB045AA8B8B8A3D219233235E2305B
	int32_t ___BDD25AA451AB045AA8B8B8A3D219233235E2305B_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::C033BD4351FBA3732545EA2E016D52B0FC3E69EC
	__StaticArrayInitTypeSizeU3D128_tBE7FC0ADEB722B5903F913377381199A364090D8  ___C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5;
	// System.Int64 <PrivateImplementationDetails>::C5E8AB60ED9C473EBFB92E52109524A608BCFBE2
	int64_t ___C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6;

public:
	inline static int32_t get_offset_of_U34989E5469B40416DC5AFB739C747E32B40CC5C77_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tB1C5C8E3240FE7BDACAA801F7D131056ACA33838_StaticFields, ___4989E5469B40416DC5AFB739C747E32B40CC5C77_0)); }
	inline __StaticArrayInitTypeSizeU3D96_tDD326BF772C901780BC973C0DA486B1D84649608  get_U34989E5469B40416DC5AFB739C747E32B40CC5C77_0() const { return ___4989E5469B40416DC5AFB739C747E32B40CC5C77_0; }
	inline __StaticArrayInitTypeSizeU3D96_tDD326BF772C901780BC973C0DA486B1D84649608 * get_address_of_U34989E5469B40416DC5AFB739C747E32B40CC5C77_0() { return &___4989E5469B40416DC5AFB739C747E32B40CC5C77_0; }
	inline void set_U34989E5469B40416DC5AFB739C747E32B40CC5C77_0(__StaticArrayInitTypeSizeU3D96_tDD326BF772C901780BC973C0DA486B1D84649608  value)
	{
		___4989E5469B40416DC5AFB739C747E32B40CC5C77_0 = value;
	}

	inline static int32_t get_offset_of_U349ECABA9727A1AF0636082C467485A1A9A04B669_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tB1C5C8E3240FE7BDACAA801F7D131056ACA33838_StaticFields, ___49ECABA9727A1AF0636082C467485A1A9A04B669_1)); }
	inline __StaticArrayInitTypeSizeU3D192_tA913119FF977562E195B2F1256CE8A6ABC6066BC  get_U349ECABA9727A1AF0636082C467485A1A9A04B669_1() const { return ___49ECABA9727A1AF0636082C467485A1A9A04B669_1; }
	inline __StaticArrayInitTypeSizeU3D192_tA913119FF977562E195B2F1256CE8A6ABC6066BC * get_address_of_U349ECABA9727A1AF0636082C467485A1A9A04B669_1() { return &___49ECABA9727A1AF0636082C467485A1A9A04B669_1; }
	inline void set_U349ECABA9727A1AF0636082C467485A1A9A04B669_1(__StaticArrayInitTypeSizeU3D192_tA913119FF977562E195B2F1256CE8A6ABC6066BC  value)
	{
		___49ECABA9727A1AF0636082C467485A1A9A04B669_1 = value;
	}

	inline static int32_t get_offset_of_U36668D4903321030E42A6CE59AB96ADD9D0214FAC_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tB1C5C8E3240FE7BDACAA801F7D131056ACA33838_StaticFields, ___6668D4903321030E42A6CE59AB96ADD9D0214FAC_2)); }
	inline __StaticArrayInitTypeSizeU3D9_t437840F3800066DFA96ED7917DFA665EDD6ABEA2  get_U36668D4903321030E42A6CE59AB96ADD9D0214FAC_2() const { return ___6668D4903321030E42A6CE59AB96ADD9D0214FAC_2; }
	inline __StaticArrayInitTypeSizeU3D9_t437840F3800066DFA96ED7917DFA665EDD6ABEA2 * get_address_of_U36668D4903321030E42A6CE59AB96ADD9D0214FAC_2() { return &___6668D4903321030E42A6CE59AB96ADD9D0214FAC_2; }
	inline void set_U36668D4903321030E42A6CE59AB96ADD9D0214FAC_2(__StaticArrayInitTypeSizeU3D9_t437840F3800066DFA96ED7917DFA665EDD6ABEA2  value)
	{
		___6668D4903321030E42A6CE59AB96ADD9D0214FAC_2 = value;
	}

	inline static int32_t get_offset_of_AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tB1C5C8E3240FE7BDACAA801F7D131056ACA33838_StaticFields, ___AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_3)); }
	inline __StaticArrayInitTypeSizeU3D1212_t24A4B5419466CF2A5177F82924131BD47EE7167B  get_AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_3() const { return ___AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_3; }
	inline __StaticArrayInitTypeSizeU3D1212_t24A4B5419466CF2A5177F82924131BD47EE7167B * get_address_of_AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_3() { return &___AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_3; }
	inline void set_AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_3(__StaticArrayInitTypeSizeU3D1212_t24A4B5419466CF2A5177F82924131BD47EE7167B  value)
	{
		___AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_3 = value;
	}

	inline static int32_t get_offset_of_BDD25AA451AB045AA8B8B8A3D219233235E2305B_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tB1C5C8E3240FE7BDACAA801F7D131056ACA33838_StaticFields, ___BDD25AA451AB045AA8B8B8A3D219233235E2305B_4)); }
	inline int32_t get_BDD25AA451AB045AA8B8B8A3D219233235E2305B_4() const { return ___BDD25AA451AB045AA8B8B8A3D219233235E2305B_4; }
	inline int32_t* get_address_of_BDD25AA451AB045AA8B8B8A3D219233235E2305B_4() { return &___BDD25AA451AB045AA8B8B8A3D219233235E2305B_4; }
	inline void set_BDD25AA451AB045AA8B8B8A3D219233235E2305B_4(int32_t value)
	{
		___BDD25AA451AB045AA8B8B8A3D219233235E2305B_4 = value;
	}

	inline static int32_t get_offset_of_C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tB1C5C8E3240FE7BDACAA801F7D131056ACA33838_StaticFields, ___C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5)); }
	inline __StaticArrayInitTypeSizeU3D128_tBE7FC0ADEB722B5903F913377381199A364090D8  get_C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5() const { return ___C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5; }
	inline __StaticArrayInitTypeSizeU3D128_tBE7FC0ADEB722B5903F913377381199A364090D8 * get_address_of_C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5() { return &___C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5; }
	inline void set_C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5(__StaticArrayInitTypeSizeU3D128_tBE7FC0ADEB722B5903F913377381199A364090D8  value)
	{
		___C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5 = value;
	}

	inline static int32_t get_offset_of_C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tB1C5C8E3240FE7BDACAA801F7D131056ACA33838_StaticFields, ___C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6)); }
	inline int64_t get_C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6() const { return ___C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6; }
	inline int64_t* get_address_of_C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6() { return &___C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6; }
	inline void set_C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6(int64_t value)
	{
		___C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6 = value;
	}
};


// System.Net.Sockets.AddressFamily
struct AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.ConnectionProtocol
struct ConnectionProtocol_tBE00B9E9C4D060782F0021BF81B02C25615F0139 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionProtocol_tBE00B9E9C4D060782F0021BF81B02C25615F0139, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.ConnectionStateValue
struct ConnectionStateValue_t81F9EDBDC21FF79C6013A20B90A9CE7A49570A95 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionStateValue::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionStateValue_t81F9EDBDC21FF79C6013A20B90A9CE7A49570A95, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.DebugLevel
struct DebugLevel_tD722F8608A81F591D52B9E1FAECA063D63DD69DB 
{
public:
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugLevel_tD722F8608A81F591D52B9E1FAECA063D63DD69DB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// ExitGames.Client.Photon.DeliveryMode
struct DeliveryMode_tF32D749B1B3B54D61B751129E38FE02739DA8AAB 
{
public:
	// System.Int32 ExitGames.Client.Photon.DeliveryMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeliveryMode_tF32D749B1B3B54D61B751129E38FE02739DA8AAB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.EgMessageType
struct EgMessageType_tD50986F40F247BF9FE6BA412FDE335B4ADBF6316 
{
public:
	// System.Byte ExitGames.Client.Photon.EgMessageType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EgMessageType_tD50986F40F247BF9FE6BA412FDE335B4ADBF6316, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// ExitGames.Client.Photon.PhotonSocketError
struct PhotonSocketError_tBCB8B0BCA8405B1B114F3B24F1E7713E962B2D6D 
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonSocketError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PhotonSocketError_tBCB8B0BCA8405B1B114F3B24F1E7713E962B2D6D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.PhotonSocketState
struct PhotonSocketState_tADDEC6004FA80ABAC80665B520C27AC709AD77A7 
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonSocketState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PhotonSocketState_tADDEC6004FA80ABAC80665B520C27AC709AD77A7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// ExitGames.Client.Photon.StatusCode
struct StatusCode_t93C78886408B516D9F0AC021C5F50FAE8E103094 
{
public:
	// System.Int32 ExitGames.Client.Photon.StatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusCode_t93C78886408B516D9F0AC021C5F50FAE8E103094, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.Protocol16/GpType
struct GpType_t9EDD1287CEA6F576294DBA6C8FE78F35EE4008BD 
{
public:
	// System.Byte ExitGames.Client.Photon.Protocol16/GpType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GpType_t9EDD1287CEA6F576294DBA6C8FE78F35EE4008BD, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.Protocol18/GpType
struct GpType_t50A9ECB4BCA41AB05E5B129196A84B131C2BFB25 
{
public:
	// System.Byte ExitGames.Client.Photon.Protocol18/GpType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GpType_t50A9ECB4BCA41AB05E5B129196A84B131C2BFB25, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToString_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Numbers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Any_0)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Loopback_1)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loopback_1), (void*)value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Broadcast_2), (void*)value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___None_3)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_None_3() const { return ___None_3; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_3), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_7), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Loopback_8), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6None_9), (void*)value);
	}
};


// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.IPhotonSocket::peerBase
	PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * ___peerBase_0;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.IPhotonSocket::Protocol
	uint8_t ___Protocol_1;
	// System.Boolean ExitGames.Client.Photon.IPhotonSocket::PollReceive
	bool ___PollReceive_2;
	// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_3;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_4;
	// System.Int32 ExitGames.Client.Photon.IPhotonSocket::<ServerPort>k__BackingField
	int32_t ___U3CServerPortU3Ek__BackingField_6;
	// System.Boolean ExitGames.Client.Photon.IPhotonSocket::<AddressResolvedAsIpv6>k__BackingField
	bool ___U3CAddressResolvedAsIpv6U3Ek__BackingField_7;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<UrlProtocol>k__BackingField
	String_t* ___U3CUrlProtocolU3Ek__BackingField_8;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<UrlPath>k__BackingField
	String_t* ___U3CUrlPathU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_peerBase_0() { return static_cast<int32_t>(offsetof(IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450, ___peerBase_0)); }
	inline PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * get_peerBase_0() const { return ___peerBase_0; }
	inline PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E ** get_address_of_peerBase_0() { return &___peerBase_0; }
	inline void set_peerBase_0(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * value)
	{
		___peerBase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peerBase_0), (void*)value);
	}

	inline static int32_t get_offset_of_Protocol_1() { return static_cast<int32_t>(offsetof(IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450, ___Protocol_1)); }
	inline uint8_t get_Protocol_1() const { return ___Protocol_1; }
	inline uint8_t* get_address_of_Protocol_1() { return &___Protocol_1; }
	inline void set_Protocol_1(uint8_t value)
	{
		___Protocol_1 = value;
	}

	inline static int32_t get_offset_of_PollReceive_2() { return static_cast<int32_t>(offsetof(IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450, ___PollReceive_2)); }
	inline bool get_PollReceive_2() const { return ___PollReceive_2; }
	inline bool* get_address_of_PollReceive_2() { return &___PollReceive_2; }
	inline void set_PollReceive_2(bool value)
	{
		___PollReceive_2 = value;
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450, ___U3CStateU3Ek__BackingField_3)); }
	inline int32_t get_U3CStateU3Ek__BackingField_3() const { return ___U3CStateU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_3() { return &___U3CStateU3Ek__BackingField_3; }
	inline void set_U3CStateU3Ek__BackingField_3(int32_t value)
	{
		___U3CStateU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CServerAddressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450, ___U3CServerAddressU3Ek__BackingField_4)); }
	inline String_t* get_U3CServerAddressU3Ek__BackingField_4() const { return ___U3CServerAddressU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CServerAddressU3Ek__BackingField_4() { return &___U3CServerAddressU3Ek__BackingField_4; }
	inline void set_U3CServerAddressU3Ek__BackingField_4(String_t* value)
	{
		___U3CServerAddressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServerAddressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerPortU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450, ___U3CServerPortU3Ek__BackingField_6)); }
	inline int32_t get_U3CServerPortU3Ek__BackingField_6() const { return ___U3CServerPortU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CServerPortU3Ek__BackingField_6() { return &___U3CServerPortU3Ek__BackingField_6; }
	inline void set_U3CServerPortU3Ek__BackingField_6(int32_t value)
	{
		___U3CServerPortU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CAddressResolvedAsIpv6U3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450, ___U3CAddressResolvedAsIpv6U3Ek__BackingField_7)); }
	inline bool get_U3CAddressResolvedAsIpv6U3Ek__BackingField_7() const { return ___U3CAddressResolvedAsIpv6U3Ek__BackingField_7; }
	inline bool* get_address_of_U3CAddressResolvedAsIpv6U3Ek__BackingField_7() { return &___U3CAddressResolvedAsIpv6U3Ek__BackingField_7; }
	inline void set_U3CAddressResolvedAsIpv6U3Ek__BackingField_7(bool value)
	{
		___U3CAddressResolvedAsIpv6U3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CUrlProtocolU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450, ___U3CUrlProtocolU3Ek__BackingField_8)); }
	inline String_t* get_U3CUrlProtocolU3Ek__BackingField_8() const { return ___U3CUrlProtocolU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CUrlProtocolU3Ek__BackingField_8() { return &___U3CUrlProtocolU3Ek__BackingField_8; }
	inline void set_U3CUrlProtocolU3Ek__BackingField_8(String_t* value)
	{
		___U3CUrlProtocolU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUrlProtocolU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUrlPathU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450, ___U3CUrlPathU3Ek__BackingField_9)); }
	inline String_t* get_U3CUrlPathU3Ek__BackingField_9() const { return ___U3CUrlPathU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CUrlPathU3Ek__BackingField_9() { return &___U3CUrlPathU3Ek__BackingField_9; }
	inline void set_U3CUrlPathU3Ek__BackingField_9(String_t* value)
	{
		___U3CUrlPathU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUrlPathU3Ek__BackingField_9), (void*)value);
	}
};

struct IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_StaticFields
{
public:
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ServerIpAddress>k__BackingField
	String_t* ___U3CServerIpAddressU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CServerIpAddressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_StaticFields, ___U3CServerIpAddressU3Ek__BackingField_5)); }
	inline String_t* get_U3CServerIpAddressU3Ek__BackingField_5() const { return ___U3CServerIpAddressU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CServerIpAddressU3Ek__BackingField_5() { return &___U3CServerIpAddressU3Ek__BackingField_5; }
	inline void set_U3CServerIpAddressU3Ek__BackingField_5(String_t* value)
	{
		___U3CServerIpAddressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServerIpAddressU3Ek__BackingField_5), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
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

// ExitGames.Client.Photon.PeerBase
struct PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.PhotonPeer ExitGames.Client.Photon.PeerBase::photonPeer
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273 * ___photonPeer_0;
	// ExitGames.Client.Photon.IProtocol ExitGames.Client.Photon.PeerBase::SerializationProtocol
	IProtocol_tC0E4162EB71727CF15421A41CBE61A6749AEC038 * ___SerializationProtocol_1;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PeerBase::usedTransportProtocol
	uint8_t ___usedTransportProtocol_2;
	// ExitGames.Client.Photon.IPhotonSocket ExitGames.Client.Photon.PeerBase::PhotonSocket
	IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450 * ___PhotonSocket_3;
	// System.String ExitGames.Client.Photon.PeerBase::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_4;
	// ExitGames.Client.Photon.ConnectionStateValue ExitGames.Client.Photon.PeerBase::peerConnectionState
	uint8_t ___peerConnectionState_5;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountLastOperation
	int32_t ___ByteCountLastOperation_6;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountCurrentDispatch
	int32_t ___ByteCountCurrentDispatch_7;
	// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.PeerBase::CommandInCurrentDispatch
	NCommand_t553C3C7A444F8F77EF29B4AD80B8195F6062C77A * ___CommandInCurrentDispatch_8;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByCrc
	int32_t ___packetLossByCrc_9;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByChallenge
	int32_t ___packetLossByChallenge_10;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction> ExitGames.Client.Photon.PeerBase::ActionQueue
	Queue_1_tDF0DA55465AF25D26AC05C3437EE16FBAE54C507 * ___ActionQueue_11;
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerID
	int16_t ___peerID_12;
	// System.Int32 ExitGames.Client.Photon.PeerBase::serverTimeOffset
	int32_t ___serverTimeOffset_13;
	// System.Boolean ExitGames.Client.Photon.PeerBase::serverTimeOffsetIsAvailable
	bool ___serverTimeOffsetIsAvailable_14;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTime
	int32_t ___roundTripTime_15;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTimeVariance
	int32_t ___roundTripTimeVariance_16;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lastRoundTripTime
	int32_t ___lastRoundTripTime_17;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lowestRoundTripTime
	int32_t ___lowestRoundTripTime_18;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lastRoundTripTimeVariance
	int32_t ___lastRoundTripTimeVariance_19;
	// System.Int32 ExitGames.Client.Photon.PeerBase::highestRoundTripTimeVariance
	int32_t ___highestRoundTripTimeVariance_20;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timestampOfLastReceive
	int32_t ___timestampOfLastReceive_21;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesOut
	int64_t ___bytesOut_23;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesIn
	int64_t ___bytesIn_24;
	// System.Object ExitGames.Client.Photon.PeerBase::CustomInitData
	RuntimeObject * ___CustomInitData_25;
	// System.String ExitGames.Client.Photon.PeerBase::AppId
	String_t* ___AppId_26;
	// ExitGames.Client.Photon.EventData ExitGames.Client.Photon.PeerBase::reusableEventData
	EventData_t11440FEE431D8D89E49B53C772D4F1A0EBD552E8 * ___reusableEventData_27;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeBase
	int32_t ___timeBase_28;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeoutInt
	int32_t ___timeoutInt_29;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastAckReceive
	int32_t ___timeLastAckReceive_30;
	// System.Int32 ExitGames.Client.Photon.PeerBase::longestSentCall
	int32_t ___longestSentCall_31;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendAck
	int32_t ___timeLastSendAck_32;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendOutgoing
	int32_t ___timeLastSendOutgoing_33;
	// System.Boolean ExitGames.Client.Photon.PeerBase::ApplicationIsInitialized
	bool ___ApplicationIsInitialized_34;
	// System.Boolean ExitGames.Client.Photon.PeerBase::isEncryptionAvailable
	bool ___isEncryptionAvailable_35;
	// System.Int32 ExitGames.Client.Photon.PeerBase::outgoingCommandsInStream
	int32_t ___outgoingCommandsInStream_36;
	// Photon.SocketServer.Security.ICryptoProvider ExitGames.Client.Photon.PeerBase::CryptoProvider
	RuntimeObject* ___CryptoProvider_38;
	// System.Random ExitGames.Client.Photon.PeerBase::lagRandomizer
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___lagRandomizer_39;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListOutgoing
	LinkedList_1_t6BFAB45CE8F5E02251E98CC80900D73A2E2406EE * ___NetSimListOutgoing_40;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListIncoming
	LinkedList_1_t6BFAB45CE8F5E02251E98CC80900D73A2E2406EE * ___NetSimListIncoming_41;
	// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::networkSimulationSettings
	NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700 * ___networkSimulationSettings_42;
	// System.Int32 ExitGames.Client.Photon.PeerBase::TrafficPackageHeaderSize
	int32_t ___TrafficPackageHeaderSize_43;
	// System.Int32 ExitGames.Client.Photon.PeerBase::commandLogSize
	int32_t ___commandLogSize_44;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.CmdLogItem> ExitGames.Client.Photon.PeerBase::CommandLog
	Queue_1_t67B822E02741DA6A0AA5F2E94A72003CFB7DB4E1 * ___CommandLog_45;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.CmdLogItem> ExitGames.Client.Photon.PeerBase::InReliableLog
	Queue_1_t67B822E02741DA6A0AA5F2E94A72003CFB7DB4E1 * ___InReliableLog_46;

public:
	inline static int32_t get_offset_of_photonPeer_0() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___photonPeer_0)); }
	inline PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273 * get_photonPeer_0() const { return ___photonPeer_0; }
	inline PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273 ** get_address_of_photonPeer_0() { return &___photonPeer_0; }
	inline void set_photonPeer_0(PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273 * value)
	{
		___photonPeer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonPeer_0), (void*)value);
	}

	inline static int32_t get_offset_of_SerializationProtocol_1() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___SerializationProtocol_1)); }
	inline IProtocol_tC0E4162EB71727CF15421A41CBE61A6749AEC038 * get_SerializationProtocol_1() const { return ___SerializationProtocol_1; }
	inline IProtocol_tC0E4162EB71727CF15421A41CBE61A6749AEC038 ** get_address_of_SerializationProtocol_1() { return &___SerializationProtocol_1; }
	inline void set_SerializationProtocol_1(IProtocol_tC0E4162EB71727CF15421A41CBE61A6749AEC038 * value)
	{
		___SerializationProtocol_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SerializationProtocol_1), (void*)value);
	}

	inline static int32_t get_offset_of_usedTransportProtocol_2() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___usedTransportProtocol_2)); }
	inline uint8_t get_usedTransportProtocol_2() const { return ___usedTransportProtocol_2; }
	inline uint8_t* get_address_of_usedTransportProtocol_2() { return &___usedTransportProtocol_2; }
	inline void set_usedTransportProtocol_2(uint8_t value)
	{
		___usedTransportProtocol_2 = value;
	}

	inline static int32_t get_offset_of_PhotonSocket_3() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___PhotonSocket_3)); }
	inline IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450 * get_PhotonSocket_3() const { return ___PhotonSocket_3; }
	inline IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450 ** get_address_of_PhotonSocket_3() { return &___PhotonSocket_3; }
	inline void set_PhotonSocket_3(IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450 * value)
	{
		___PhotonSocket_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PhotonSocket_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerAddressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___U3CServerAddressU3Ek__BackingField_4)); }
	inline String_t* get_U3CServerAddressU3Ek__BackingField_4() const { return ___U3CServerAddressU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CServerAddressU3Ek__BackingField_4() { return &___U3CServerAddressU3Ek__BackingField_4; }
	inline void set_U3CServerAddressU3Ek__BackingField_4(String_t* value)
	{
		___U3CServerAddressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServerAddressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_peerConnectionState_5() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___peerConnectionState_5)); }
	inline uint8_t get_peerConnectionState_5() const { return ___peerConnectionState_5; }
	inline uint8_t* get_address_of_peerConnectionState_5() { return &___peerConnectionState_5; }
	inline void set_peerConnectionState_5(uint8_t value)
	{
		___peerConnectionState_5 = value;
	}

	inline static int32_t get_offset_of_ByteCountLastOperation_6() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___ByteCountLastOperation_6)); }
	inline int32_t get_ByteCountLastOperation_6() const { return ___ByteCountLastOperation_6; }
	inline int32_t* get_address_of_ByteCountLastOperation_6() { return &___ByteCountLastOperation_6; }
	inline void set_ByteCountLastOperation_6(int32_t value)
	{
		___ByteCountLastOperation_6 = value;
	}

	inline static int32_t get_offset_of_ByteCountCurrentDispatch_7() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___ByteCountCurrentDispatch_7)); }
	inline int32_t get_ByteCountCurrentDispatch_7() const { return ___ByteCountCurrentDispatch_7; }
	inline int32_t* get_address_of_ByteCountCurrentDispatch_7() { return &___ByteCountCurrentDispatch_7; }
	inline void set_ByteCountCurrentDispatch_7(int32_t value)
	{
		___ByteCountCurrentDispatch_7 = value;
	}

	inline static int32_t get_offset_of_CommandInCurrentDispatch_8() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___CommandInCurrentDispatch_8)); }
	inline NCommand_t553C3C7A444F8F77EF29B4AD80B8195F6062C77A * get_CommandInCurrentDispatch_8() const { return ___CommandInCurrentDispatch_8; }
	inline NCommand_t553C3C7A444F8F77EF29B4AD80B8195F6062C77A ** get_address_of_CommandInCurrentDispatch_8() { return &___CommandInCurrentDispatch_8; }
	inline void set_CommandInCurrentDispatch_8(NCommand_t553C3C7A444F8F77EF29B4AD80B8195F6062C77A * value)
	{
		___CommandInCurrentDispatch_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CommandInCurrentDispatch_8), (void*)value);
	}

	inline static int32_t get_offset_of_packetLossByCrc_9() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___packetLossByCrc_9)); }
	inline int32_t get_packetLossByCrc_9() const { return ___packetLossByCrc_9; }
	inline int32_t* get_address_of_packetLossByCrc_9() { return &___packetLossByCrc_9; }
	inline void set_packetLossByCrc_9(int32_t value)
	{
		___packetLossByCrc_9 = value;
	}

	inline static int32_t get_offset_of_packetLossByChallenge_10() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___packetLossByChallenge_10)); }
	inline int32_t get_packetLossByChallenge_10() const { return ___packetLossByChallenge_10; }
	inline int32_t* get_address_of_packetLossByChallenge_10() { return &___packetLossByChallenge_10; }
	inline void set_packetLossByChallenge_10(int32_t value)
	{
		___packetLossByChallenge_10 = value;
	}

	inline static int32_t get_offset_of_ActionQueue_11() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___ActionQueue_11)); }
	inline Queue_1_tDF0DA55465AF25D26AC05C3437EE16FBAE54C507 * get_ActionQueue_11() const { return ___ActionQueue_11; }
	inline Queue_1_tDF0DA55465AF25D26AC05C3437EE16FBAE54C507 ** get_address_of_ActionQueue_11() { return &___ActionQueue_11; }
	inline void set_ActionQueue_11(Queue_1_tDF0DA55465AF25D26AC05C3437EE16FBAE54C507 * value)
	{
		___ActionQueue_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActionQueue_11), (void*)value);
	}

	inline static int32_t get_offset_of_peerID_12() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___peerID_12)); }
	inline int16_t get_peerID_12() const { return ___peerID_12; }
	inline int16_t* get_address_of_peerID_12() { return &___peerID_12; }
	inline void set_peerID_12(int16_t value)
	{
		___peerID_12 = value;
	}

	inline static int32_t get_offset_of_serverTimeOffset_13() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___serverTimeOffset_13)); }
	inline int32_t get_serverTimeOffset_13() const { return ___serverTimeOffset_13; }
	inline int32_t* get_address_of_serverTimeOffset_13() { return &___serverTimeOffset_13; }
	inline void set_serverTimeOffset_13(int32_t value)
	{
		___serverTimeOffset_13 = value;
	}

	inline static int32_t get_offset_of_serverTimeOffsetIsAvailable_14() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___serverTimeOffsetIsAvailable_14)); }
	inline bool get_serverTimeOffsetIsAvailable_14() const { return ___serverTimeOffsetIsAvailable_14; }
	inline bool* get_address_of_serverTimeOffsetIsAvailable_14() { return &___serverTimeOffsetIsAvailable_14; }
	inline void set_serverTimeOffsetIsAvailable_14(bool value)
	{
		___serverTimeOffsetIsAvailable_14 = value;
	}

	inline static int32_t get_offset_of_roundTripTime_15() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___roundTripTime_15)); }
	inline int32_t get_roundTripTime_15() const { return ___roundTripTime_15; }
	inline int32_t* get_address_of_roundTripTime_15() { return &___roundTripTime_15; }
	inline void set_roundTripTime_15(int32_t value)
	{
		___roundTripTime_15 = value;
	}

	inline static int32_t get_offset_of_roundTripTimeVariance_16() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___roundTripTimeVariance_16)); }
	inline int32_t get_roundTripTimeVariance_16() const { return ___roundTripTimeVariance_16; }
	inline int32_t* get_address_of_roundTripTimeVariance_16() { return &___roundTripTimeVariance_16; }
	inline void set_roundTripTimeVariance_16(int32_t value)
	{
		___roundTripTimeVariance_16 = value;
	}

	inline static int32_t get_offset_of_lastRoundTripTime_17() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___lastRoundTripTime_17)); }
	inline int32_t get_lastRoundTripTime_17() const { return ___lastRoundTripTime_17; }
	inline int32_t* get_address_of_lastRoundTripTime_17() { return &___lastRoundTripTime_17; }
	inline void set_lastRoundTripTime_17(int32_t value)
	{
		___lastRoundTripTime_17 = value;
	}

	inline static int32_t get_offset_of_lowestRoundTripTime_18() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___lowestRoundTripTime_18)); }
	inline int32_t get_lowestRoundTripTime_18() const { return ___lowestRoundTripTime_18; }
	inline int32_t* get_address_of_lowestRoundTripTime_18() { return &___lowestRoundTripTime_18; }
	inline void set_lowestRoundTripTime_18(int32_t value)
	{
		___lowestRoundTripTime_18 = value;
	}

	inline static int32_t get_offset_of_lastRoundTripTimeVariance_19() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___lastRoundTripTimeVariance_19)); }
	inline int32_t get_lastRoundTripTimeVariance_19() const { return ___lastRoundTripTimeVariance_19; }
	inline int32_t* get_address_of_lastRoundTripTimeVariance_19() { return &___lastRoundTripTimeVariance_19; }
	inline void set_lastRoundTripTimeVariance_19(int32_t value)
	{
		___lastRoundTripTimeVariance_19 = value;
	}

	inline static int32_t get_offset_of_highestRoundTripTimeVariance_20() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___highestRoundTripTimeVariance_20)); }
	inline int32_t get_highestRoundTripTimeVariance_20() const { return ___highestRoundTripTimeVariance_20; }
	inline int32_t* get_address_of_highestRoundTripTimeVariance_20() { return &___highestRoundTripTimeVariance_20; }
	inline void set_highestRoundTripTimeVariance_20(int32_t value)
	{
		___highestRoundTripTimeVariance_20 = value;
	}

	inline static int32_t get_offset_of_timestampOfLastReceive_21() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___timestampOfLastReceive_21)); }
	inline int32_t get_timestampOfLastReceive_21() const { return ___timestampOfLastReceive_21; }
	inline int32_t* get_address_of_timestampOfLastReceive_21() { return &___timestampOfLastReceive_21; }
	inline void set_timestampOfLastReceive_21(int32_t value)
	{
		___timestampOfLastReceive_21 = value;
	}

	inline static int32_t get_offset_of_bytesOut_23() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___bytesOut_23)); }
	inline int64_t get_bytesOut_23() const { return ___bytesOut_23; }
	inline int64_t* get_address_of_bytesOut_23() { return &___bytesOut_23; }
	inline void set_bytesOut_23(int64_t value)
	{
		___bytesOut_23 = value;
	}

	inline static int32_t get_offset_of_bytesIn_24() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___bytesIn_24)); }
	inline int64_t get_bytesIn_24() const { return ___bytesIn_24; }
	inline int64_t* get_address_of_bytesIn_24() { return &___bytesIn_24; }
	inline void set_bytesIn_24(int64_t value)
	{
		___bytesIn_24 = value;
	}

	inline static int32_t get_offset_of_CustomInitData_25() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___CustomInitData_25)); }
	inline RuntimeObject * get_CustomInitData_25() const { return ___CustomInitData_25; }
	inline RuntimeObject ** get_address_of_CustomInitData_25() { return &___CustomInitData_25; }
	inline void set_CustomInitData_25(RuntimeObject * value)
	{
		___CustomInitData_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomInitData_25), (void*)value);
	}

	inline static int32_t get_offset_of_AppId_26() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___AppId_26)); }
	inline String_t* get_AppId_26() const { return ___AppId_26; }
	inline String_t** get_address_of_AppId_26() { return &___AppId_26; }
	inline void set_AppId_26(String_t* value)
	{
		___AppId_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppId_26), (void*)value);
	}

	inline static int32_t get_offset_of_reusableEventData_27() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___reusableEventData_27)); }
	inline EventData_t11440FEE431D8D89E49B53C772D4F1A0EBD552E8 * get_reusableEventData_27() const { return ___reusableEventData_27; }
	inline EventData_t11440FEE431D8D89E49B53C772D4F1A0EBD552E8 ** get_address_of_reusableEventData_27() { return &___reusableEventData_27; }
	inline void set_reusableEventData_27(EventData_t11440FEE431D8D89E49B53C772D4F1A0EBD552E8 * value)
	{
		___reusableEventData_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reusableEventData_27), (void*)value);
	}

	inline static int32_t get_offset_of_timeBase_28() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___timeBase_28)); }
	inline int32_t get_timeBase_28() const { return ___timeBase_28; }
	inline int32_t* get_address_of_timeBase_28() { return &___timeBase_28; }
	inline void set_timeBase_28(int32_t value)
	{
		___timeBase_28 = value;
	}

	inline static int32_t get_offset_of_timeoutInt_29() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___timeoutInt_29)); }
	inline int32_t get_timeoutInt_29() const { return ___timeoutInt_29; }
	inline int32_t* get_address_of_timeoutInt_29() { return &___timeoutInt_29; }
	inline void set_timeoutInt_29(int32_t value)
	{
		___timeoutInt_29 = value;
	}

	inline static int32_t get_offset_of_timeLastAckReceive_30() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___timeLastAckReceive_30)); }
	inline int32_t get_timeLastAckReceive_30() const { return ___timeLastAckReceive_30; }
	inline int32_t* get_address_of_timeLastAckReceive_30() { return &___timeLastAckReceive_30; }
	inline void set_timeLastAckReceive_30(int32_t value)
	{
		___timeLastAckReceive_30 = value;
	}

	inline static int32_t get_offset_of_longestSentCall_31() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___longestSentCall_31)); }
	inline int32_t get_longestSentCall_31() const { return ___longestSentCall_31; }
	inline int32_t* get_address_of_longestSentCall_31() { return &___longestSentCall_31; }
	inline void set_longestSentCall_31(int32_t value)
	{
		___longestSentCall_31 = value;
	}

	inline static int32_t get_offset_of_timeLastSendAck_32() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___timeLastSendAck_32)); }
	inline int32_t get_timeLastSendAck_32() const { return ___timeLastSendAck_32; }
	inline int32_t* get_address_of_timeLastSendAck_32() { return &___timeLastSendAck_32; }
	inline void set_timeLastSendAck_32(int32_t value)
	{
		___timeLastSendAck_32 = value;
	}

	inline static int32_t get_offset_of_timeLastSendOutgoing_33() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___timeLastSendOutgoing_33)); }
	inline int32_t get_timeLastSendOutgoing_33() const { return ___timeLastSendOutgoing_33; }
	inline int32_t* get_address_of_timeLastSendOutgoing_33() { return &___timeLastSendOutgoing_33; }
	inline void set_timeLastSendOutgoing_33(int32_t value)
	{
		___timeLastSendOutgoing_33 = value;
	}

	inline static int32_t get_offset_of_ApplicationIsInitialized_34() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___ApplicationIsInitialized_34)); }
	inline bool get_ApplicationIsInitialized_34() const { return ___ApplicationIsInitialized_34; }
	inline bool* get_address_of_ApplicationIsInitialized_34() { return &___ApplicationIsInitialized_34; }
	inline void set_ApplicationIsInitialized_34(bool value)
	{
		___ApplicationIsInitialized_34 = value;
	}

	inline static int32_t get_offset_of_isEncryptionAvailable_35() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___isEncryptionAvailable_35)); }
	inline bool get_isEncryptionAvailable_35() const { return ___isEncryptionAvailable_35; }
	inline bool* get_address_of_isEncryptionAvailable_35() { return &___isEncryptionAvailable_35; }
	inline void set_isEncryptionAvailable_35(bool value)
	{
		___isEncryptionAvailable_35 = value;
	}

	inline static int32_t get_offset_of_outgoingCommandsInStream_36() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___outgoingCommandsInStream_36)); }
	inline int32_t get_outgoingCommandsInStream_36() const { return ___outgoingCommandsInStream_36; }
	inline int32_t* get_address_of_outgoingCommandsInStream_36() { return &___outgoingCommandsInStream_36; }
	inline void set_outgoingCommandsInStream_36(int32_t value)
	{
		___outgoingCommandsInStream_36 = value;
	}

	inline static int32_t get_offset_of_CryptoProvider_38() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___CryptoProvider_38)); }
	inline RuntimeObject* get_CryptoProvider_38() const { return ___CryptoProvider_38; }
	inline RuntimeObject** get_address_of_CryptoProvider_38() { return &___CryptoProvider_38; }
	inline void set_CryptoProvider_38(RuntimeObject* value)
	{
		___CryptoProvider_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CryptoProvider_38), (void*)value);
	}

	inline static int32_t get_offset_of_lagRandomizer_39() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___lagRandomizer_39)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_lagRandomizer_39() const { return ___lagRandomizer_39; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_lagRandomizer_39() { return &___lagRandomizer_39; }
	inline void set_lagRandomizer_39(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___lagRandomizer_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lagRandomizer_39), (void*)value);
	}

	inline static int32_t get_offset_of_NetSimListOutgoing_40() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___NetSimListOutgoing_40)); }
	inline LinkedList_1_t6BFAB45CE8F5E02251E98CC80900D73A2E2406EE * get_NetSimListOutgoing_40() const { return ___NetSimListOutgoing_40; }
	inline LinkedList_1_t6BFAB45CE8F5E02251E98CC80900D73A2E2406EE ** get_address_of_NetSimListOutgoing_40() { return &___NetSimListOutgoing_40; }
	inline void set_NetSimListOutgoing_40(LinkedList_1_t6BFAB45CE8F5E02251E98CC80900D73A2E2406EE * value)
	{
		___NetSimListOutgoing_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetSimListOutgoing_40), (void*)value);
	}

	inline static int32_t get_offset_of_NetSimListIncoming_41() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___NetSimListIncoming_41)); }
	inline LinkedList_1_t6BFAB45CE8F5E02251E98CC80900D73A2E2406EE * get_NetSimListIncoming_41() const { return ___NetSimListIncoming_41; }
	inline LinkedList_1_t6BFAB45CE8F5E02251E98CC80900D73A2E2406EE ** get_address_of_NetSimListIncoming_41() { return &___NetSimListIncoming_41; }
	inline void set_NetSimListIncoming_41(LinkedList_1_t6BFAB45CE8F5E02251E98CC80900D73A2E2406EE * value)
	{
		___NetSimListIncoming_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetSimListIncoming_41), (void*)value);
	}

	inline static int32_t get_offset_of_networkSimulationSettings_42() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___networkSimulationSettings_42)); }
	inline NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700 * get_networkSimulationSettings_42() const { return ___networkSimulationSettings_42; }
	inline NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700 ** get_address_of_networkSimulationSettings_42() { return &___networkSimulationSettings_42; }
	inline void set_networkSimulationSettings_42(NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700 * value)
	{
		___networkSimulationSettings_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkSimulationSettings_42), (void*)value);
	}

	inline static int32_t get_offset_of_TrafficPackageHeaderSize_43() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___TrafficPackageHeaderSize_43)); }
	inline int32_t get_TrafficPackageHeaderSize_43() const { return ___TrafficPackageHeaderSize_43; }
	inline int32_t* get_address_of_TrafficPackageHeaderSize_43() { return &___TrafficPackageHeaderSize_43; }
	inline void set_TrafficPackageHeaderSize_43(int32_t value)
	{
		___TrafficPackageHeaderSize_43 = value;
	}

	inline static int32_t get_offset_of_commandLogSize_44() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___commandLogSize_44)); }
	inline int32_t get_commandLogSize_44() const { return ___commandLogSize_44; }
	inline int32_t* get_address_of_commandLogSize_44() { return &___commandLogSize_44; }
	inline void set_commandLogSize_44(int32_t value)
	{
		___commandLogSize_44 = value;
	}

	inline static int32_t get_offset_of_CommandLog_45() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___CommandLog_45)); }
	inline Queue_1_t67B822E02741DA6A0AA5F2E94A72003CFB7DB4E1 * get_CommandLog_45() const { return ___CommandLog_45; }
	inline Queue_1_t67B822E02741DA6A0AA5F2E94A72003CFB7DB4E1 ** get_address_of_CommandLog_45() { return &___CommandLog_45; }
	inline void set_CommandLog_45(Queue_1_t67B822E02741DA6A0AA5F2E94A72003CFB7DB4E1 * value)
	{
		___CommandLog_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CommandLog_45), (void*)value);
	}

	inline static int32_t get_offset_of_InReliableLog_46() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E, ___InReliableLog_46)); }
	inline Queue_1_t67B822E02741DA6A0AA5F2E94A72003CFB7DB4E1 * get_InReliableLog_46() const { return ___InReliableLog_46; }
	inline Queue_1_t67B822E02741DA6A0AA5F2E94A72003CFB7DB4E1 ** get_address_of_InReliableLog_46() { return &___InReliableLog_46; }
	inline void set_InReliableLog_46(Queue_1_t67B822E02741DA6A0AA5F2E94A72003CFB7DB4E1 * value)
	{
		___InReliableLog_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InReliableLog_46), (void*)value);
	}
};

struct PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E_StaticFields
{
public:
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerCount
	int16_t ___peerCount_22;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer> ExitGames.Client.Photon.PeerBase::MessageBufferPool
	Queue_1_t1B8990BCE711180A9F2244DB55468B6976FE940E * ___MessageBufferPool_37;

public:
	inline static int32_t get_offset_of_peerCount_22() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E_StaticFields, ___peerCount_22)); }
	inline int16_t get_peerCount_22() const { return ___peerCount_22; }
	inline int16_t* get_address_of_peerCount_22() { return &___peerCount_22; }
	inline void set_peerCount_22(int16_t value)
	{
		___peerCount_22 = value;
	}

	inline static int32_t get_offset_of_MessageBufferPool_37() { return static_cast<int32_t>(offsetof(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E_StaticFields, ___MessageBufferPool_37)); }
	inline Queue_1_t1B8990BCE711180A9F2244DB55468B6976FE940E * get_MessageBufferPool_37() const { return ___MessageBufferPool_37; }
	inline Queue_1_t1B8990BCE711180A9F2244DB55468B6976FE940E ** get_address_of_MessageBufferPool_37() { return &___MessageBufferPool_37; }
	inline void set_MessageBufferPool_37(Queue_1_t1B8990BCE711180A9F2244DB55468B6976FE940E * value)
	{
		___MessageBufferPool_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageBufferPool_37), (void*)value);
	}
};


// ExitGames.Client.Photon.SendOptions
struct SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11 
{
public:
	// ExitGames.Client.Photon.DeliveryMode ExitGames.Client.Photon.SendOptions::DeliveryMode
	int32_t ___DeliveryMode_2;
	// System.Boolean ExitGames.Client.Photon.SendOptions::Encrypt
	bool ___Encrypt_3;
	// System.Byte ExitGames.Client.Photon.SendOptions::Channel
	uint8_t ___Channel_4;

public:
	inline static int32_t get_offset_of_DeliveryMode_2() { return static_cast<int32_t>(offsetof(SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11, ___DeliveryMode_2)); }
	inline int32_t get_DeliveryMode_2() const { return ___DeliveryMode_2; }
	inline int32_t* get_address_of_DeliveryMode_2() { return &___DeliveryMode_2; }
	inline void set_DeliveryMode_2(int32_t value)
	{
		___DeliveryMode_2 = value;
	}

	inline static int32_t get_offset_of_Encrypt_3() { return static_cast<int32_t>(offsetof(SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11, ___Encrypt_3)); }
	inline bool get_Encrypt_3() const { return ___Encrypt_3; }
	inline bool* get_address_of_Encrypt_3() { return &___Encrypt_3; }
	inline void set_Encrypt_3(bool value)
	{
		___Encrypt_3 = value;
	}

	inline static int32_t get_offset_of_Channel_4() { return static_cast<int32_t>(offsetof(SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11, ___Channel_4)); }
	inline uint8_t get_Channel_4() const { return ___Channel_4; }
	inline uint8_t* get_address_of_Channel_4() { return &___Channel_4; }
	inline void set_Channel_4(uint8_t value)
	{
		___Channel_4 = value;
	}
};

struct SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11_StaticFields
{
public:
	// ExitGames.Client.Photon.SendOptions ExitGames.Client.Photon.SendOptions::SendReliable
	SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11  ___SendReliable_0;
	// ExitGames.Client.Photon.SendOptions ExitGames.Client.Photon.SendOptions::SendUnreliable
	SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11  ___SendUnreliable_1;

public:
	inline static int32_t get_offset_of_SendReliable_0() { return static_cast<int32_t>(offsetof(SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11_StaticFields, ___SendReliable_0)); }
	inline SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11  get_SendReliable_0() const { return ___SendReliable_0; }
	inline SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11 * get_address_of_SendReliable_0() { return &___SendReliable_0; }
	inline void set_SendReliable_0(SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11  value)
	{
		___SendReliable_0 = value;
	}

	inline static int32_t get_offset_of_SendUnreliable_1() { return static_cast<int32_t>(offsetof(SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11_StaticFields, ___SendUnreliable_1)); }
	inline SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11  get_SendUnreliable_1() const { return ___SendUnreliable_1; }
	inline SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11 * get_address_of_SendUnreliable_1() { return &___SendUnreliable_1; }
	inline void set_SendUnreliable_1(SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11  value)
	{
		___SendUnreliable_1 = value;
	}
};

// Native definition for P/Invoke marshalling of ExitGames.Client.Photon.SendOptions
struct SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11_marshaled_pinvoke
{
	int32_t ___DeliveryMode_2;
	int32_t ___Encrypt_3;
	uint8_t ___Channel_4;
};
// Native definition for COM marshalling of ExitGames.Client.Photon.SendOptions
struct SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11_marshaled_com
{
	int32_t ___DeliveryMode_2;
	int32_t ___Encrypt_3;
	uint8_t ___Channel_4;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// ExitGames.Client.Photon.PeerBase/<>c__DisplayClass104_0
struct U3CU3Ec__DisplayClass104_0_t4C95060B628C5F305CE87721EF1DE6452F9BD841  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PeerBase/<>c__DisplayClass104_0::level
	uint8_t ___level_0;
	// System.String ExitGames.Client.Photon.PeerBase/<>c__DisplayClass104_0::debugReturn
	String_t* ___debugReturn_1;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PeerBase/<>c__DisplayClass104_0::<>4__this
	PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_level_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass104_0_t4C95060B628C5F305CE87721EF1DE6452F9BD841, ___level_0)); }
	inline uint8_t get_level_0() const { return ___level_0; }
	inline uint8_t* get_address_of_level_0() { return &___level_0; }
	inline void set_level_0(uint8_t value)
	{
		___level_0 = value;
	}

	inline static int32_t get_offset_of_debugReturn_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass104_0_t4C95060B628C5F305CE87721EF1DE6452F9BD841, ___debugReturn_1)); }
	inline String_t* get_debugReturn_1() const { return ___debugReturn_1; }
	inline String_t** get_address_of_debugReturn_1() { return &___debugReturn_1; }
	inline void set_debugReturn_1(String_t* value)
	{
		___debugReturn_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugReturn_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass104_0_t4C95060B628C5F305CE87721EF1DE6452F9BD841, ___U3CU3E4__this_2)); }
	inline PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// ExitGames.Client.Photon.PeerBase/<>c__DisplayClass105_0
struct U3CU3Ec__DisplayClass105_0_t691800BBB8BD0790F9236EBE594D75C9111D712B  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.StatusCode ExitGames.Client.Photon.PeerBase/<>c__DisplayClass105_0::statusValue
	int32_t ___statusValue_0;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PeerBase/<>c__DisplayClass105_0::<>4__this
	PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_statusValue_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass105_0_t691800BBB8BD0790F9236EBE594D75C9111D712B, ___statusValue_0)); }
	inline int32_t get_statusValue_0() const { return ___statusValue_0; }
	inline int32_t* get_address_of_statusValue_0() { return &___statusValue_0; }
	inline void set_statusValue_0(int32_t value)
	{
		___statusValue_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass105_0_t691800BBB8BD0790F9236EBE594D75C9111D712B, ___U3CU3E4__this_1)); }
	inline PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// ExitGames.Client.Photon.SocketTcp
struct SocketTcp_t442BEC8A2E0A99ECE1B2C6FF9FCDA8128154A435  : public IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450
{
public:
	// System.Net.Sockets.Socket ExitGames.Client.Photon.SocketTcp::sock
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___sock_10;
	// System.Object ExitGames.Client.Photon.SocketTcp::syncer
	RuntimeObject * ___syncer_11;

public:
	inline static int32_t get_offset_of_sock_10() { return static_cast<int32_t>(offsetof(SocketTcp_t442BEC8A2E0A99ECE1B2C6FF9FCDA8128154A435, ___sock_10)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_sock_10() const { return ___sock_10; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_sock_10() { return &___sock_10; }
	inline void set_sock_10(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___sock_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sock_10), (void*)value);
	}

	inline static int32_t get_offset_of_syncer_11() { return static_cast<int32_t>(offsetof(SocketTcp_t442BEC8A2E0A99ECE1B2C6FF9FCDA8128154A435, ___syncer_11)); }
	inline RuntimeObject * get_syncer_11() const { return ___syncer_11; }
	inline RuntimeObject ** get_address_of_syncer_11() { return &___syncer_11; }
	inline void set_syncer_11(RuntimeObject * value)
	{
		___syncer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncer_11), (void*)value);
	}
};


// ExitGames.Client.Photon.TPeer
struct TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2  : public PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E
{
public:
	// System.Collections.Generic.Queue`1<System.Byte[]> ExitGames.Client.Photon.TPeer::incomingList
	Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * ___incomingList_47;
	// System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer> ExitGames.Client.Photon.TPeer::outgoingStream
	List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E * ___outgoingStream_48;
	// System.Int32 ExitGames.Client.Photon.TPeer::lastPingResult
	int32_t ___lastPingResult_49;
	// System.Byte[] ExitGames.Client.Photon.TPeer::pingRequest
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___pingRequest_50;
	// System.Byte[] ExitGames.Client.Photon.TPeer::messageHeader
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___messageHeader_53;
	// System.Boolean ExitGames.Client.Photon.TPeer::DoFraming
	bool ___DoFraming_54;

public:
	inline static int32_t get_offset_of_incomingList_47() { return static_cast<int32_t>(offsetof(TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2, ___incomingList_47)); }
	inline Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * get_incomingList_47() const { return ___incomingList_47; }
	inline Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 ** get_address_of_incomingList_47() { return &___incomingList_47; }
	inline void set_incomingList_47(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * value)
	{
		___incomingList_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___incomingList_47), (void*)value);
	}

	inline static int32_t get_offset_of_outgoingStream_48() { return static_cast<int32_t>(offsetof(TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2, ___outgoingStream_48)); }
	inline List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E * get_outgoingStream_48() const { return ___outgoingStream_48; }
	inline List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E ** get_address_of_outgoingStream_48() { return &___outgoingStream_48; }
	inline void set_outgoingStream_48(List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E * value)
	{
		___outgoingStream_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outgoingStream_48), (void*)value);
	}

	inline static int32_t get_offset_of_lastPingResult_49() { return static_cast<int32_t>(offsetof(TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2, ___lastPingResult_49)); }
	inline int32_t get_lastPingResult_49() const { return ___lastPingResult_49; }
	inline int32_t* get_address_of_lastPingResult_49() { return &___lastPingResult_49; }
	inline void set_lastPingResult_49(int32_t value)
	{
		___lastPingResult_49 = value;
	}

	inline static int32_t get_offset_of_pingRequest_50() { return static_cast<int32_t>(offsetof(TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2, ___pingRequest_50)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_pingRequest_50() const { return ___pingRequest_50; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_pingRequest_50() { return &___pingRequest_50; }
	inline void set_pingRequest_50(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___pingRequest_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pingRequest_50), (void*)value);
	}

	inline static int32_t get_offset_of_messageHeader_53() { return static_cast<int32_t>(offsetof(TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2, ___messageHeader_53)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_messageHeader_53() const { return ___messageHeader_53; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_messageHeader_53() { return &___messageHeader_53; }
	inline void set_messageHeader_53(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___messageHeader_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageHeader_53), (void*)value);
	}

	inline static int32_t get_offset_of_DoFraming_54() { return static_cast<int32_t>(offsetof(TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2, ___DoFraming_54)); }
	inline bool get_DoFraming_54() const { return ___DoFraming_54; }
	inline bool* get_address_of_DoFraming_54() { return &___DoFraming_54; }
	inline void set_DoFraming_54(bool value)
	{
		___DoFraming_54 = value;
	}
};

struct TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2_StaticFields
{
public:
	// System.Byte[] ExitGames.Client.Photon.TPeer::tcpFramedMessageHead
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___tcpFramedMessageHead_51;
	// System.Byte[] ExitGames.Client.Photon.TPeer::tcpMsgHead
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___tcpMsgHead_52;

public:
	inline static int32_t get_offset_of_tcpFramedMessageHead_51() { return static_cast<int32_t>(offsetof(TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2_StaticFields, ___tcpFramedMessageHead_51)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_tcpFramedMessageHead_51() const { return ___tcpFramedMessageHead_51; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_tcpFramedMessageHead_51() { return &___tcpFramedMessageHead_51; }
	inline void set_tcpFramedMessageHead_51(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___tcpFramedMessageHead_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcpFramedMessageHead_51), (void*)value);
	}

	inline static int32_t get_offset_of_tcpMsgHead_52() { return static_cast<int32_t>(offsetof(TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2_StaticFields, ___tcpMsgHead_52)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_tcpMsgHead_52() const { return ___tcpMsgHead_52; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_tcpMsgHead_52() { return &___tcpMsgHead_52; }
	inline void set_tcpMsgHead_52(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___tcpMsgHead_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcpMsgHead_52), (void*)value);
	}
};


// System.Threading.ThreadAbortException
struct ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Threading.ThreadStart
struct ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687  : public MulticastDelegate_t
{
public:

public:
};


// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_t999C526EA1710EB0A054212C5495A3A286E2B5A7  : public MulticastDelegate_t
{
public:

public:
};


// ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate
struct IntegerMillisecondsDelegate_t958909BBBB5EE26474934A254FAC11B1C5BE4567  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m3B357BA0DCB9E5A38ACBDFCA728A40E7F83104FF_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m123D9273AFF968BD5C248D721870170B26FBEF6C_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_gshared (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_gshared (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m8EAE235A8AA510698BE04B4EC44DCA6979E58D29_gshared (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, uint8_t ___key0, const RuntimeMethod* method);
// !0 System.Func`1<System.Boolean>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, const RuntimeMethod* method);

// System.Int32 ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntegerMillisecondsDelegate_Invoke_m196327B8AE60B153F6454C50145FC7BBDFF7EB42 (IntegerMillisecondsDelegate_t958909BBBB5EE26474934A254FAC11B1C5BE4567 * __this, const RuntimeMethod* method);
// System.Byte ExitGames.Client.Photon.SupportClass::StartBackgroundCalls(System.Func`1<System.Boolean>,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SupportClass_StartBackgroundCalls_m238AC8CAEFEECAED80F344BF4E934FCF65F2DE5A (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___myThread0, int32_t ___millisecondsInterval1, String_t* ___taskName2, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m7D6A2EBC8882B7D0774C7C377E76CF894825D1CA (U3CU3Ec__DisplayClass6_0_t24E2D9FF9DF170096AE55682917C60F08A7E2BFA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Threading.Thread>::.ctor()
inline void List_1__ctor_m36355704B10200ABC2B12900E77E4A9987640F3C (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * ___start0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_Name_m920049DFD1306F42613F13CF7AD74C03661F4BAE (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Threading.Thread>::Add(!0)
inline void List_1_Add_m383F9AF12DF2593726E7F63FE9438E8ECEA542BA (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * __this, Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 *, Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Threading.Thread>::get_Count()
inline int32_t List_1_get_Count_mF4F192665FB9D652A220E87BD65C5EFF1AA3476D_inline (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Diagnostics.Debug::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_WriteLine_m2B08D80ABA95E71F063FA07FB6BF1771C7799ED0 (String_t* ___message0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception,System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportClass_WriteStackTrace_mF196E1ED6FE99993B5D8E26F047540E5A66D3C33 (Exception_t * ___throwable0, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___stream1, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_DictionaryToString_m7684B367ABB643DFCAC8498D4EEB1A840E9B7905 (RuntimeObject* ___dictionary0, bool ___includeTypes1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_DictionaryToString_mB1977CA265674BF53196A7C411CFB6D3ECD2EA3D (RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8846EB11F0A221BDE237DE041D17764B36065404 (String_t* ___separator0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m97C4AAABA51FCC2D426BD22FE05BEC045AB9D6F8 (StringBuilder_t * __this, String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m37B348187DD9186C2451ACCA3DBC4ABCD4632AD4 (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String System.BitConverter::ToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BitConverter_ToString_mD476DB63219FD7C7FFB472ABEB04A8BB2D171F30 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method);
// System.UInt32[] ExitGames.Client.Photon.SupportClass::InitializeTable(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* SupportClass_InitializeTable_m71983997999EE0687E842EE8D4D049A895844E4A (uint32_t ___polynomial0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegerMillisecondsDelegate__ctor_m138899B61ACAC535B706D6892E8E28EAC8AD4A60 (IntegerMillisecondsDelegate_t958909BBBB5EE26474934A254FAC11B1C5BE4567 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::.ctor(System.Int32)
inline void Queue_1__ctor_m77A700976BCE8508C7EEC542FA014BB67577F610 (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 *, int32_t, const RuntimeMethod*))Queue_1__ctor_m3B357BA0DCB9E5A38ACBDFCA728A40E7F83104FF_gshared)(__this, ___capacity0, method);
}
// System.Void ExitGames.Client.Photon.PeerBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase__ctor_mD1CFA277559C226324EF50B90FF3FBBAC5DA1EA1 (PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::InitPeerBase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_InitPeerBase_mD53EBAFDA95AAA9BE8DC2160AD389F89CA9F05DD (PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.SupportClass::GetTickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportClass_GetTickCount_m9ABD9A7385EBFF006EB92D74B5B467FD5C0C9012 (const RuntimeMethod* method);
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PeerBase::get_Listener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PeerBase_get_Listener_m1DCFEB26A1C6BE40D0EEE86403CD2DC06BA1C681 (PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PeerBase::get_debugOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PeerBase_get_debugOut_mB5C207AA32961864BEB55E582ABBB7263BCE9B66 (PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::set_ServerAddress(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PeerBase_set_ServerAddress_m382F91B33DF6DEAEBB5191B9C6AB34049FD616CD_inline (PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>::.ctor()
inline void List_1__ctor_mD5BDAA1D4B15B17B05FB9CECD1A239F2FDEB5130 (List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.String ExitGames.Client.Photon.PeerBase::PepareWebSocketUrl(System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PeerBase_PepareWebSocketUrl_m01BDDAB502FEFD213D36C7CCA4A990D27FFC4AC8 (PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * __this, String_t* ___serverAddress0, String_t* ___appId1, RuntimeObject * ___customData2, const RuntimeMethod* method);
// System.Type ExitGames.Client.Photon.PeerBase::get_SocketImplementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * PeerBase_get_SocketImplementation_m66836868AB28FE98065630CAC091FE4605D27CA4 (PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * __this, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_mF3E09E8AC19EE563314B326117091D4B9CC918C1 (Type_t * ___type0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SocketTcp::.ctor(ExitGames.Client.Photon.PeerBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketTcp__ctor_m02E701621D61260F354E0F6F4FC646F27497A4AB (SocketTcp_t442BEC8A2E0A99ECE1B2C6FF9FCDA8128154A435 * __this, PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * ___npeer0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PeerBase::get_ServerAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PeerBase_get_ServerAddress_mA7E7F80FEE805DBB212AF7E558A2845131FDDB54_inline (PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * __this, const RuntimeMethod* method);
// System.Byte[] ExitGames.Client.Photon.PeerBase::PrepareConnectData(System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PeerBase_PrepareConnectData_mD92E78E5461EF272550BA8940524365C2DE83A64 (PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * __this, String_t* ___serverAddress0, String_t* ___appID1, RuntimeObject * ___custom2, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TPeer::EnqueueInit(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_EnqueueInit_m35B68D85F2033D2E7163D14E47195FBAF0308089 (TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::Clear()
inline void Queue_1_Clear_m83F66337973B90D44B04DA1302077D6CCA463BCB (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 *, const RuntimeMethod*))Queue_1_Clear_m123D9273AFF968BD5C248D721870170B26FBEF6C_gshared)(__this, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueStatusCallback(ExitGames.Client.Photon.StatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_EnqueueStatusCallback_m28B11BAB18D89DE7F2413A7F46340267284C23FE (PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * __this, int32_t ___statusValue0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TPeer::SendPing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_SendPing_m5B3334141A4FEAC6178877D9D030BD441E795FBB (TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.StreamBuffer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer__ctor_mDE0E35A8373609C3722758E8C7D7322A1B5221CB (StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.Int32,System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Protocol_Serialize_mBB40326BF07AF6F14CEEB6C23ED398E17BBC6D3C (int32_t ___value0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___target1, int32_t* ___targetOffset2, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.StreamBuffer::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_Write_mE1C64B5B595A3AA6EF66660318FC90AC6CC52246 (StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___srcOffset1, int32_t ___count2, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.PeerBase::get_TrafficStatsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PeerBase_get_TrafficStatsEnabled_m8F3D3788A0FD1636063D2D95BE8D48061FC92BBA (PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PeerBase::get_TrafficStatsOutgoing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * PeerBase_get_TrafficStatsOutgoing_m662C45F57ACCD645FC9A34B5C115633FE471819C (PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalPacketCount_mE015927A5D7C83F3CC6995555A1F3A6A154105A8_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalPacketCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_TotalPacketCount_m3CFB7931269E8D1C9AB2510F7AE2B1C05EF06B3D_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandsInPackets()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalCommandsInPackets_m80ECAC905B710985007A4C48F9E74626BA99F6C5_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalCommandsInPackets(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_TotalCommandsInPackets_m5AE4B9EDDDEF6027FC766797392726661FA54B44_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.StreamBuffer::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamBuffer_get_Length_mE70463117B815D185ABE8613781768CCACBF089F (StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::CountControlCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountControlCommand_mE2F32C4D8EF6BFDD863C7B862C5EB903FE0367AE (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.TPeer::EnqueueMessageAsPayload(ExitGames.Client.Photon.DeliveryMode,ExitGames.Client.Photon.StreamBuffer,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_EnqueueMessageAsPayload_m480655D1B92E0A2B6170FABC895AA5BAEAD538E3 (TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2 * __this, int32_t ___deliveryMode0, StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * ___opMessage1, uint8_t ___channelId2, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.PeerBase::get_DisconnectTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PeerBase_get_DisconnectTimeout_mA856807DE5DC872500C9E9A3A3D67AB172313BE2 (PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyAction__ctor_mB8AED83465187F3390933B44BE20506A07CA3EC6 (MyAction_t999C526EA1710EB0A054212C5495A3A286E2B5A7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueActionForDispatch(ExitGames.Client.Photon.PeerBase/MyAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_EnqueueActionForDispatch_m0D04CDBECD49612CE0D3B93A8CBA7ABBCE17EB5A (PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * __this, MyAction_t999C526EA1710EB0A054212C5495A3A286E2B5A7 * ___action0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::get_Count()
inline int32_t Queue_1_get_Count_m2FE6A24124300A57983A93DAFBFC4BF64684B9C5_inline (Queue_1_tDF0DA55465AF25D26AC05C3437EE16FBAE54C507 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tDF0DA55465AF25D26AC05C3437EE16FBAE54C507 *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::Dequeue()
inline MyAction_t999C526EA1710EB0A054212C5495A3A286E2B5A7 * Queue_1_Dequeue_m9A36F31681FA1AAB298A833220B6B7D2F48F82C4 (Queue_1_tDF0DA55465AF25D26AC05C3437EE16FBAE54C507 * __this, const RuntimeMethod* method)
{
	return ((  MyAction_t999C526EA1710EB0A054212C5495A3A286E2B5A7 * (*) (Queue_1_tDF0DA55465AF25D26AC05C3437EE16FBAE54C507 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyAction_Invoke_mC7066013EF06857D846113377E2E32A757042FF6 (MyAction_t999C526EA1710EB0A054212C5495A3A286E2B5A7 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Byte[]>::get_Count()
inline int32_t Queue_1_get_Count_m1D55723B47270D04849E24BC09480DCD17C0CEBA_inline (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<System.Byte[]>::Dequeue()
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Queue_1_Dequeue_m2EA4ED50C9D3AFC5608B9ACDF7C611D244872F0D (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Void ExitGames.Client.Photon.StreamBuffer::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer__ctor_m18CBC08040B194E7AA12A461D2FAE4B5B25D42E6 (StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf0, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPhotonSocket_get_Connected_m8B1174D39F7FC4A9D012632539426A5C07239AEA (IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.PeerBase::get_timeInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PeerBase_get_timeInt_m1C1EA7888172F7824EE77A54453EB8B72C93B136 (PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.PeerBase::get_timePingInterval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PeerBase_get_timePingInterval_m8EB05695E1B570E4B77F714454BF25AB8409E7AF (PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>::get_Item(System.Int32)
inline StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * List_1_get_Item_m7D8E89642684CA38BF575AC3ECC0F96EDD408B03_inline (List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * (*) (List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Byte[] ExitGames.Client.Photon.StreamBuffer::GetBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* StreamBuffer_GetBuffer_m8385F8BB37D9FC42CEBC7D570C4AB0C5B683BB69 (StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TPeer::SendData(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_SendData_mE38E69A40EF1881B017BC69B8F865479B5799F6A (TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___length1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::MessageBufferPoolPut(ExitGames.Client.Photon.StreamBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_MessageBufferPoolPut_m47B1892CB150AA3ACA8ACD75B10699622EB0AFBD (StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * ___buff0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>::get_Count()
inline int32_t List_1_get_Count_mF58904EE64D37FF9290FAF23599FF3948FE67494_inline (List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>::Clear()
inline void List_1_Clear_m5E6DF73A36A66925E4C3DCFF1568BCAC513D1DCC (List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306 (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// System.Byte ExitGames.Client.Photon.PeerBase::get_ChannelCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PeerBase_get_ChannelCount_m4BB3F47841456DC6CD1E2FDCFE562B0863E85F4A (PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.StreamBuffer ExitGames.Client.Photon.PeerBase::MessageBufferPoolGet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * PeerBase_MessageBufferPoolGet_m1E94428DF1DDAB2F6F717DA2AB4034E53BAE3E4D (const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.StreamBuffer::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_SetLength_m3D863EBEB173128C45E80AF92CF1B6673DA69308 (StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, RuntimeObject * ___actualValue1, String_t* ___message2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>::Add(!0)
inline void List_1_Add_m7047B900C688EC39A7AFB8E6BCE0525B48C7EACF (List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E * __this, StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E *, StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void ExitGames.Client.Photon.TrafficStats::CountUnreliableOpCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountUnreliableOpCommand_m12897AA8891D616B0125A622778D7AC72E6E56C0 (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::CountReliableOpCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountReliableOpCommand_m01CD502B04E64A7473DC5DD7149A6BDB74774AB9 (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___size0, const RuntimeMethod* method);
// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PeerBase::get_TrafficStatsGameLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * PeerBase_get_TrafficStatsGameLevel_mC2470C3D8D2936013C54CCAA18C7A0B295B3F908 (PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::CountOperation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_CountOperation_mAB20D5FB2AFEE0EC8203088578F0BC2BF726CF97 (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___operationBytes0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
inline void Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, const RuntimeMethod*))Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1)
inline void Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947 (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, uint8_t, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_gshared)(__this, ___key0, ___value1, method);
}
// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::get_NetworkSimulationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700 * PeerBase_get_NetworkSimulationSettings_m4E168D29353AC621A131E164FB6CFB18AA80AC59 (PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.NetworkSimulationSet::get_IsSimulationEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkSimulationSet_get_IsSimulationEnabled_mBCADB18F7FDDBEB9180AF35FC6F8EE4D7B4E2F9B (NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700 * __this, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::SendNetworkSimulated(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_SendNetworkSimulated_m7D75E76265B2773C2652CFCA910D81EC63BFF70B (PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___dataToSend0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportClass_WriteStackTrace_mD48BDF2B5DE3369F38344B2EAB4D4CB0D6A20011 (Exception_t * ___throwable0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_EnqueueDebugReturn_m676F69CDB0F8D8A0769317D956BFBD261131C56D (PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * __this, uint8_t ___level0, String_t* ___debugReturn1, const RuntimeMethod* method);
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PeerBase::get_TrafficStatsIncoming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * PeerBase_get_TrafficStatsIncoming_m5F2EE48E5998705D7B9B78CF246C58C6BF56B2E1 (PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::Enqueue(!0)
inline void Queue_1_Enqueue_m7970BCC9C6190DE84A9EAE57CF52472B3795380A (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// System.Void ExitGames.Client.Photon.TPeer::ReadPingResult(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_ReadPingResult_m03581F37A167C19D2D2E7F9331A2FE4C77E18BCF (TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inbuff0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.Protocol::Deserialize(System.Int32&,System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Protocol_Deserialize_m3C9D0C997DE5CCC58A566C86C4878DBA72FC72A7 (int32_t* ___value0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___source1, int32_t* ___offset2, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::UpdateRoundTripTimeAndVariance(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_UpdateRoundTripTimeAndVariance_m34177356E4AC29BBE0A5D4F47736AC2D5FF66626 (PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * __this, int32_t ___lastRoundtripTime0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_m8EAE235A8AA510698BE04B4EC44DCA6979E58D29 (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, uint8_t ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, uint8_t, const RuntimeMethod*))Dictionary_2_get_Item_m8EAE235A8AA510698BE04B4EC44DCA6979E58D29_gshared)(__this, ___key0, method);
}
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_PackageHeaderSize(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_PackageHeaderSize_m629EA88CE88D1D789514B9C29CADDB7BFE3EEEB8_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandBytes_m3C2A887D6C82747DD5AC700B3A37C9A5DCC829BB_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandBytes_m5BBE27DD24E1342E13AFF3B9E004EC14FC14D2DB_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandBytes_m1F3C837FF7B6EFEA99200911BCC1FB98B5675A36_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandBytes_mE1A2ED6660E5461C485A31CEF992F83FB276D9CA_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalCommandBytes_mF4AE201B413BF80FD1A61BBE792DDCF61B553D41 (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_PackageHeaderSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_PackageHeaderSize_mB017BAC94EF63BECD84CB481AABC4289F730FD52_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandBytes(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandBytes_mBC8E2A1FFD5F68EC38657FC2E7040EB3261069E5_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandCount_mB9D4A64BDA2ACFB1A56E557D54F02058166EE6DD_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandCount_m16832B6129692177B3B74081CA123A313E91CD44_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandBytes(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandBytes_m95BCBE6564514DD194D5BC756C37780DA704BAC0_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandCount_m472DFAF2E34589749224D616AC8D47BF4843A630_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandCount_mA40960EA03CDFBCCF5BC8B44C40457B00F86E086_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandBytes(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandBytes_mEE5260D4BAE8902322E5B9DAABE37D478DF81F27_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandCount_mCBA1C05C361436F087E46C091431822B17BED70F_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandCount_m672E7A069071E1CD0034DCE5756B74EB6AA141DB_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandBytes(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandBytes_m3D74AACBAC53D6F1B9FB1D2DDA6518614B94EA53_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandCount_mEDE6B288153489A720CED23BAA3DA931A69B0C73_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandCount_m18BC1184FFBBDACAF2D17DB72EF76DC72EE05876_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalPacketBytes_mD6F0AF8743A19E389FE5A3CE54D592295C73FC6D (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_OperationByteCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationByteCount_mB64819EFCB70B6572CFBE4E1515138C1B2FCF581_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_OperationByteCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationByteCount_mEDB98137732D5E621BA1BA643E329227259E1DAA_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_OperationCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationCount_mE7CE76E1D7A0AF79321923D3E919312258C8FE4F_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_OperationCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationCount_m297655F7E10B3E0F0B13C5EA462617743B66B142_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_ResultByteCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultByteCount_m2653884EC6249526DEDCFDC8B84261891FA92DB4_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_ResultByteCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultByteCount_m64FDA75C563C79CD52F5ACBCBA10F5D789EF90A0_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_ResultCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultCount_m1459D5FC1B895A843319C41876EC39BA5543D53D_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_ResultCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultCount_mE73872DDF66BE2774DB8EFFAC85695D68259E861_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_EventByteCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventByteCount_m92B49AB91772BB93DA89415377959EF2D08F2364_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_EventByteCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventByteCount_m0CC6103A37777150CC1BAD50C677E49377116657_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_EventCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventCount_m1E8D33401FF5A990C3B0A49D6D82A9A20E97BFD0_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_EventCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventCount_mD29E0AC16A1664F6E53C02376102D0641314FAE6_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestOpResponseCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestOpResponseCallback_m4F647D059F912765CDB7CF638A8AAF1ACAD92103_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestOpResponseCallback(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallback_m1FD030542D606D20E6D85B7BC9BC651ED078D2EC_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestOpResponseCallbackOpCode(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m9BB3DB3CB2CB11ADC1ACC5BBB01CA519307072CC_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestEventCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestEventCallback_mB4D58DB2D26D19CC3ADF7F1823CDC7A1176269FD_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestEventCallback(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallback_m903E43D16BF2BF993A00703639BBF2DA907AE95C_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestEventCallbackCode(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallbackCode_m5A0E46AA270DE92380201706B2263E35343AB21D_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestMessageCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestMessageCallback_m468BA5CAB531399A069CB10E78F4E6FA09749585_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestMessageCallback(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestMessageCallback_m318984DDF76D09D7CEA1B55058B943E09DBB8CEA_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestRawMessageCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestRawMessageCallback_mF5772661A2462E874AB2E42FB54DE7A53E037FC0_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestRawMessageCallback(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestRawMessageCallback_mBA68F54737D0469F336800B225B2763D13338F8C_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenDispatching()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m0015D2B4A9D8D1033C690F1CC39DBA4F5EEE6012_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestDeltaBetweenDispatching(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_m809211B35F40E1353F14E1C98445F77CA1F295DC_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_DispatchIncomingCommandsCalls()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_mC35B5253CF22E6E5FD1C791796AE22F56DDEB4A4_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_DispatchIncomingCommandsCalls(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_m31072490D8A152338F9BFB699E34F4FBECA78150_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenSending()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m9B503973DE53D4DBDCD95F1B6DC0D47884605B13_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestDeltaBetweenSending(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m31F1FF20EFE1B569B5C9CC1BAE7920F2D4219A38_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_SendOutgoingCommandsCalls()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m1DBA253FEDA2BEEFE80D33F37B2D4B6B950E3DE3_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_SendOutgoingCommandsCalls(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_m004140F666BCF1D4030D2E0EC61B03EA599F7C3A_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB54933CAC49CEFE56FB6DB70940682194AF13AA7 (U3CU3Ec_tB89977FB627163CFBA741E910E7E398AA25B3A8B * __this, const RuntimeMethod* method);
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SupportClass/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB738A6B0DFB96F5185C25C5E24ACA274A3522556 (U3CU3Ec_tB8255EE4323FA3DA77B2CAD19B56F38688143AD1 * __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E (const RuntimeMethod* method);
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC (int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// !0 System.Func`1<System.Boolean>::Invoke()
inline bool Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, const RuntimeMethod*))Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_gshared)(__this, method);
}
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05 (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 ExitGames.Client.Photon.SupportClass::GetTickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportClass_GetTickCount_m9ABD9A7385EBFF006EB92D74B5B467FD5C0C9012 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		IntegerMillisecondsDelegate_t958909BBBB5EE26474934A254FAC11B1C5BE4567 * L_0 = ((SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var))->get_IntegerMilliseconds_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = IntegerMillisecondsDelegate_Invoke_m196327B8AE60B153F6454C50145FC7BBDFF7EB42(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Byte ExitGames.Client.Photon.SupportClass::CallInBackground(System.Func`1<System.Boolean>,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SupportClass_CallInBackground_m48B4725CEACDC4337CAC9F4C1B6168CC3D7D2298 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___myThread0, int32_t ___millisecondsInterval1, String_t* ___taskName2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_0 = ___myThread0;
		int32_t L_1 = ___millisecondsInterval1;
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		uint8_t L_2;
		L_2 = SupportClass_StartBackgroundCalls_m238AC8CAEFEECAED80F344BF4E934FCF65F2DE5A(L_0, L_1, (String_t*)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		uint8_t L_3 = V_0;
		return L_3;
	}
}
// System.Byte ExitGames.Client.Photon.SupportClass::StartBackgroundCalls(System.Func`1<System.Boolean>,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SupportClass_StartBackgroundCalls_m238AC8CAEFEECAED80F344BF4E934FCF65F2DE5A (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___myThread0, int32_t ___millisecondsInterval1, String_t* ___taskName2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m383F9AF12DF2593726E7F63FE9438E8ECEA542BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m36355704B10200ABC2B12900E77E4A9987640F3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF4F192665FB9D652A220E87BD65C5EFF1AA3476D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CStartBackgroundCallsU3Eb__0_m02C07252B3BE448DB18DAAB0996ED91D637B7CBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_t24E2D9FF9DF170096AE55682917C60F08A7E2BFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_t24E2D9FF9DF170096AE55682917C60F08A7E2BFA * V_0 = NULL;
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	uint8_t V_4 = 0x0;
	{
		U3CU3Ec__DisplayClass6_0_t24E2D9FF9DF170096AE55682917C60F08A7E2BFA * L_0 = (U3CU3Ec__DisplayClass6_0_t24E2D9FF9DF170096AE55682917C60F08A7E2BFA *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t24E2D9FF9DF170096AE55682917C60F08A7E2BFA_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass6_0__ctor_m7D6A2EBC8882B7D0774C7C377E76CF894825D1CA(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_t24E2D9FF9DF170096AE55682917C60F08A7E2BFA * L_1 = V_0;
		int32_t L_2 = ___millisecondsInterval1;
		NullCheck(L_1);
		L_1->set_millisecondsInterval_0(L_2);
		U3CU3Ec__DisplayClass6_0_t24E2D9FF9DF170096AE55682917C60F08A7E2BFA * L_3 = V_0;
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_4 = ___myThread0;
		NullCheck(L_3);
		L_3->set_myThread_1(L_4);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * L_5 = ((SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var))->get_threadList_0();
		V_2 = (bool)((((RuntimeObject*)(List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 *)L_5) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * L_7 = (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 *)il2cpp_codegen_object_new(List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118_il2cpp_TypeInfo_var);
		List_1__ctor_m36355704B10200ABC2B12900E77E4A9987640F3C(L_7, /*hidden argument*/List_1__ctor_m36355704B10200ABC2B12900E77E4A9987640F3C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		((SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var))->set_threadList_0(L_7);
	}

IL_002d:
	{
		U3CU3Ec__DisplayClass6_0_t24E2D9FF9DF170096AE55682917C60F08A7E2BFA * L_8 = V_0;
		ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_9 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass6_0_U3CStartBackgroundCallsU3Eb__0_m02C07252B3BE448DB18DAAB0996ED91D637B7CBA_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_10 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_10, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t* L_11 = ___taskName2;
		bool L_12;
		L_12 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_11, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0056;
		}
	}
	{
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_14 = V_1;
		String_t* L_15 = ___taskName2;
		NullCheck(L_14);
		Thread_set_Name_m920049DFD1306F42613F13CF7AD74C03661F4BAE(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0056:
	{
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_16 = V_1;
		NullCheck(L_16);
		Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0(L_16, (bool)1, /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_17 = V_1;
		NullCheck(L_17);
		Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * L_18 = ((SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var))->get_threadList_0();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_19 = V_1;
		NullCheck(L_18);
		List_1_Add_m383F9AF12DF2593726E7F63FE9438E8ECEA542BA(L_18, L_19, /*hidden argument*/List_1_Add_m383F9AF12DF2593726E7F63FE9438E8ECEA542BA_RuntimeMethod_var);
		List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * L_20 = ((SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var))->get_threadList_0();
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_mF4F192665FB9D652A220E87BD65C5EFF1AA3476D_inline(L_20, /*hidden argument*/List_1_get_Count_mF4F192665FB9D652A220E87BD65C5EFF1AA3476D_RuntimeMethod_var);
		V_4 = (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1))));
		goto IL_0082;
	}

IL_0082:
	{
		uint8_t L_22 = V_4;
		return L_22;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception,System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportClass_WriteStackTrace_mF196E1ED6FE99993B5D8E26F047540E5A66D3C33 (Exception_t * ___throwable0, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___stream1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = ___stream1;
		V_0 = (bool)((!(((RuntimeObject*)(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_2 = ___stream1;
		Exception_t * L_3 = ___throwable0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(19 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_2, L_4);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_5 = ___stream1;
		Exception_t * L_6 = ___throwable0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_6);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(19 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_5, L_7);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_8 = ___stream1;
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(10 /* System.Void System.IO.TextWriter::Flush() */, L_8);
		goto IL_0048;
	}

IL_002e:
	{
		Exception_t * L_9 = ___throwable0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		Debug_WriteLine_m2B08D80ABA95E71F063FA07FB6BF1771C7799ED0(L_10, /*hidden argument*/NULL);
		Exception_t * L_11 = ___throwable0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_11);
		Debug_WriteLine_m2B08D80ABA95E71F063FA07FB6BF1771C7799ED0(L_12, /*hidden argument*/NULL);
	}

IL_0048:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportClass_WriteStackTrace_mD48BDF2B5DE3369F38344B2EAB4D4CB0D6A20011 (Exception_t * ___throwable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = ___throwable0;
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		SupportClass_WriteStackTrace_mF196E1ED6FE99993B5D8E26F047540E5A66D3C33(L_0, (TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_DictionaryToString_mB1977CA265674BF53196A7C411CFB6D3ECD2EA3D (RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = SupportClass_DictionaryToString_m7684B367ABB643DFCAC8498D4EEB1A840E9B7905(L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_DictionaryToString_m7684B367ABB643DFCAC8498D4EEB1A840E9B7905 (RuntimeObject* ___dictionary0, bool ___includeTypes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_t8A4662B5C322B2F53CAAC05C306EEA688CE2A937_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0236BACCD260A20F0738D0E7EDBB60850D17B36A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral331681871198787BC7941BD421E635F40B86CE38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A22EC4707797C7AF782D7EE636368480C673139);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD1E171FE9E55598FC5280CDCCB06C8AA67B5883);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B12_0 = 0;
	{
		RuntimeObject* L_0 = ___dictionary0;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		V_4 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		goto IL_01d3;
	}

IL_0016:
	{
		StringBuilder_t * L_2 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		StringBuilder_t * L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_t * L_4;
		L_4 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_3, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, /*hidden argument*/NULL);
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_6);
		V_5 = L_7;
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0199;
		}

IL_003b:
		{
			RuntimeObject* L_8 = V_5;
			NullCheck(L_8);
			RuntimeObject * L_9;
			L_9 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_8);
			V_6 = L_9;
			StringBuilder_t * L_10 = V_0;
			NullCheck(L_10);
			int32_t L_11;
			L_11 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_10, /*hidden argument*/NULL);
			V_7 = (bool)((((int32_t)L_11) > ((int32_t)1))? 1 : 0);
			bool L_12 = V_7;
			if (!L_12)
			{
				goto IL_0062;
			}
		}

IL_0054:
		{
			StringBuilder_t * L_13 = V_0;
			NullCheck(L_13);
			StringBuilder_t * L_14;
			L_14 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_13, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
		}

IL_0062:
		{
			RuntimeObject* L_15 = ___dictionary0;
			RuntimeObject * L_16 = V_6;
			NullCheck(L_15);
			RuntimeObject * L_17;
			L_17 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_15, L_16);
			V_8 = (bool)((((RuntimeObject*)(RuntimeObject *)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_18 = V_8;
			if (!L_18)
			{
				goto IL_0088;
			}
		}

IL_0073:
		{
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_20;
			L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_19, /*hidden argument*/NULL);
			V_1 = L_20;
			V_2 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
			goto IL_00a6;
		}

IL_0088:
		{
			RuntimeObject* L_21 = ___dictionary0;
			RuntimeObject * L_22 = V_6;
			NullCheck(L_21);
			RuntimeObject * L_23;
			L_23 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_21, L_22);
			NullCheck(L_23);
			Type_t * L_24;
			L_24 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_23, /*hidden argument*/NULL);
			V_1 = L_24;
			RuntimeObject* L_25 = ___dictionary0;
			RuntimeObject * L_26 = V_6;
			NullCheck(L_25);
			RuntimeObject * L_27;
			L_27 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_25, L_26);
			NullCheck(L_27);
			String_t* L_28;
			L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
			V_2 = L_28;
		}

IL_00a6:
		{
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_29 = { reinterpret_cast<intptr_t> (IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_30;
			L_30 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_29, /*hidden argument*/NULL);
			Type_t * L_31 = V_1;
			if ((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_31)))
			{
				goto IL_00c2;
			}
		}

IL_00b3:
		{
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_32 = { reinterpret_cast<intptr_t> (Hashtable_t8A4662B5C322B2F53CAAC05C306EEA688CE2A937_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_33;
			L_33 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_32, /*hidden argument*/NULL);
			Type_t * L_34 = V_1;
			G_B12_0 = ((((RuntimeObject*)(Type_t *)L_33) == ((RuntimeObject*)(Type_t *)L_34))? 1 : 0);
			goto IL_00c3;
		}

IL_00c2:
		{
			G_B12_0 = 1;
		}

IL_00c3:
		{
			V_9 = (bool)G_B12_0;
			bool L_35 = V_9;
			if (!L_35)
			{
				goto IL_00de;
			}
		}

IL_00c9:
		{
			RuntimeObject* L_36 = ___dictionary0;
			RuntimeObject * L_37 = V_6;
			NullCheck(L_36);
			RuntimeObject * L_38;
			L_38 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_36, L_37);
			IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
			String_t* L_39;
			L_39 = SupportClass_DictionaryToString_mB1977CA265674BF53196A7C411CFB6D3ECD2EA3D(((RuntimeObject*)Castclass((RuntimeObject*)L_38, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			V_2 = L_39;
		}

IL_00de:
		{
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_40 = { reinterpret_cast<intptr_t> (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_41;
			L_41 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_40, /*hidden argument*/NULL);
			Type_t * L_42 = V_1;
			V_10 = (bool)((((RuntimeObject*)(Type_t *)L_41) == ((RuntimeObject*)(Type_t *)L_42))? 1 : 0);
			bool L_43 = V_10;
			if (!L_43)
			{
				goto IL_0115;
			}
		}

IL_00f1:
		{
			RuntimeObject* L_44 = ___dictionary0;
			RuntimeObject * L_45 = V_6;
			NullCheck(L_44);
			RuntimeObject * L_46;
			L_46 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_44, L_45);
			String_t* L_47;
			L_47 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, ((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)Castclass((RuntimeObject*)L_46, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			String_t* L_48;
			L_48 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral5A22EC4707797C7AF782D7EE636368480C673139, L_47, /*hidden argument*/NULL);
			V_2 = L_48;
		}

IL_0115:
		{
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_50;
			L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_49, /*hidden argument*/NULL);
			Type_t * L_51 = V_1;
			V_11 = (bool)((((RuntimeObject*)(Type_t *)L_50) == ((RuntimeObject*)(Type_t *)L_51))? 1 : 0);
			bool L_52 = V_11;
			if (!L_52)
			{
				goto IL_0149;
			}
		}

IL_0128:
		{
			RuntimeObject* L_53 = ___dictionary0;
			RuntimeObject * L_54 = V_6;
			NullCheck(L_53);
			RuntimeObject * L_55;
			L_55 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_53, L_54);
			NullCheck(((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_55, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var)));
			int32_t L_56 = ((int32_t)((int32_t)(((RuntimeArray*)((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_55, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var)))->max_length)));
			RuntimeObject * L_57 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_56);
			String_t* L_58;
			L_58 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralAD1E171FE9E55598FC5280CDCCB06C8AA67B5883, L_57, /*hidden argument*/NULL);
			V_2 = L_58;
		}

IL_0149:
		{
			bool L_59 = ___includeTypes1;
			V_12 = L_59;
			bool L_60 = V_12;
			if (!L_60)
			{
				goto IL_0187;
			}
		}

IL_0150:
		{
			StringBuilder_t * L_61 = V_0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_62 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_63 = L_62;
			RuntimeObject * L_64 = V_6;
			NullCheck(L_64);
			Type_t * L_65;
			L_65 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_64, /*hidden argument*/NULL);
			NullCheck(L_65);
			String_t* L_66;
			L_66 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_65);
			NullCheck(L_63);
			ArrayElementTypeCheck (L_63, L_66);
			(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_66);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_67 = L_63;
			RuntimeObject * L_68 = V_6;
			NullCheck(L_67);
			ArrayElementTypeCheck (L_67, L_68);
			(L_67)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_68);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_69 = L_67;
			Type_t * L_70 = V_1;
			NullCheck(L_70);
			String_t* L_71;
			L_71 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_70);
			NullCheck(L_69);
			ArrayElementTypeCheck (L_69, L_71);
			(L_69)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_71);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_72 = L_69;
			String_t* L_73 = V_2;
			NullCheck(L_72);
			ArrayElementTypeCheck (L_72, L_73);
			(L_72)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_73);
			NullCheck(L_61);
			StringBuilder_t * L_74;
			L_74 = StringBuilder_AppendFormat_m97C4AAABA51FCC2D426BD22FE05BEC045AB9D6F8(L_61, _stringLiteral331681871198787BC7941BD421E635F40B86CE38, L_72, /*hidden argument*/NULL);
			goto IL_0198;
		}

IL_0187:
		{
			StringBuilder_t * L_75 = V_0;
			RuntimeObject * L_76 = V_6;
			String_t* L_77 = V_2;
			NullCheck(L_75);
			StringBuilder_t * L_78;
			L_78 = StringBuilder_AppendFormat_m37B348187DD9186C2451ACCA3DBC4ABCD4632AD4(L_75, _stringLiteral0236BACCD260A20F0738D0E7EDBB60850D17B36A, L_76, L_77, /*hidden argument*/NULL);
		}

IL_0198:
		{
		}

IL_0199:
		{
			RuntimeObject* L_79 = V_5;
			NullCheck(L_79);
			bool L_80;
			L_80 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_79);
			if (L_80)
			{
				goto IL_003b;
			}
		}

IL_01a5:
		{
			IL2CPP_LEAVE(0x1BD, FINALLY_01a7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01a7;
	}

FINALLY_01a7:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_81 = V_5;
			V_13 = ((RuntimeObject*)IsInst((RuntimeObject*)L_81, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_82 = V_13;
			if (!L_82)
			{
				goto IL_01bc;
			}
		}

IL_01b4:
		{
			RuntimeObject* L_83 = V_13;
			NullCheck(L_83);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_83);
		}

IL_01bc:
		{
			IL2CPP_END_FINALLY(423)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(423)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1BD, IL_01bd)
	}

IL_01bd:
	{
		StringBuilder_t * L_84 = V_0;
		NullCheck(L_84);
		StringBuilder_t * L_85;
		L_85 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_84, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, /*hidden argument*/NULL);
		StringBuilder_t * L_86 = V_0;
		NullCheck(L_86);
		String_t* L_87;
		L_87 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_86);
		V_4 = L_87;
		goto IL_01d3;
	}

IL_01d3:
	{
		String_t* L_88 = V_4;
		return L_88;
	}
}
// System.String ExitGames.Client.Photon.SupportClass::ByteArrayToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_ByteArrayToString_m3AD74FEBC4F4F36B6BFF0750CE004293FDEC75D2 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___list0;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_1 = L_2;
		goto IL_001b;
	}

IL_0012:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___list0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = BitConverter_ToString_mD476DB63219FD7C7FFB472ABEB04A8BB2D171F30(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.UInt32[] ExitGames.Client.Photon.SupportClass::InitializeTable(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* SupportClass_InitializeTable_m71983997999EE0687E842EE8D4D049A895844E4A (uint32_t ___polynomial0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_0 = NULL;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_7 = NULL;
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		V_0 = L_0;
		V_1 = 0;
		goto IL_004c;
	}

IL_0010:
	{
		int32_t L_1 = V_1;
		V_2 = L_1;
		V_3 = 0;
		goto IL_0039;
	}

IL_0017:
	{
		uint32_t L_2 = V_2;
		V_4 = (bool)((((int32_t)((int32_t)((int32_t)L_2&(int32_t)1))) == ((int32_t)1))? 1 : 0);
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		uint32_t L_4 = V_2;
		uint32_t L_5 = ___polynomial0;
		V_2 = ((int32_t)((int32_t)((int32_t)((uint32_t)L_4>>1))^(int32_t)L_5));
		goto IL_0034;
	}

IL_002e:
	{
		uint32_t L_6 = V_2;
		V_2 = ((int32_t)((uint32_t)L_6>>1));
	}

IL_0034:
	{
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0039:
	{
		int32_t L_8 = V_3;
		V_5 = (bool)((((int32_t)L_8) < ((int32_t)8))? 1 : 0);
		bool L_9 = V_5;
		if (L_9)
		{
			goto IL_0017;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_10 = V_0;
		int32_t L_11 = V_1;
		uint32_t L_12 = V_2;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)L_12);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_004c:
	{
		int32_t L_14 = V_1;
		V_6 = (bool)((((int32_t)L_14) < ((int32_t)((int32_t)256)))? 1 : 0);
		bool L_15 = V_6;
		if (L_15)
		{
			goto IL_0010;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_16 = V_0;
		V_7 = L_16;
		goto IL_005f;
	}

IL_005f:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_17 = V_7;
		return L_17;
	}
}
// System.UInt32 ExitGames.Client.Photon.SupportClass::CalculateCrc(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SupportClass_CalculateCrc_m0226853BB00AB96AF4C7A3FDEB9C818D0FCB125F (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	uint32_t V_5 = 0;
	{
		V_0 = (-1);
		V_1 = ((int32_t)-306674912);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = ((SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var))->get_crcLookupTable_2();
		V_2 = (bool)((((RuntimeObject*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		uint32_t L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_3;
		L_3 = SupportClass_InitializeTable_m71983997999EE0687E842EE8D4D049A895844E4A(L_2, /*hidden argument*/NULL);
		((SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var))->set_crcLookupTable_2(L_3);
	}

IL_0022:
	{
		V_3 = 0;
		goto IL_0042;
	}

IL_0026:
	{
		uint32_t L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_5 = ((SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var))->get_crcLookupTable_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___buffer0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		uint32_t L_10 = V_0;
		NullCheck(L_5);
		int32_t L_11 = ((int32_t)((int32_t)L_9^(int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)255)))));
		uint32_t L_12 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)((int32_t)((int32_t)((uint32_t)L_4>>8))^(int32_t)L_12));
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0042:
	{
		int32_t L_14 = V_3;
		int32_t L_15 = ___length1;
		V_4 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_4;
		if (L_16)
		{
			goto IL_0026;
		}
	}
	{
		uint32_t L_17 = V_0;
		V_5 = L_17;
		goto IL_0051;
	}

IL_0051:
	{
		uint32_t L_18 = V_5;
		return L_18;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportClass__cctor_m1F8F8B30559CBDA89088EB48E0C06D264E41BD98 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegerMillisecondsDelegate_t958909BBBB5EE26474934A254FAC11B1C5BE4567_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__20_0_mAA27F56F08D89303BE04C2D65E003909F6202508_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB8255EE4323FA3DA77B2CAD19B56F38688143AD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB8255EE4323FA3DA77B2CAD19B56F38688143AD1_il2cpp_TypeInfo_var);
		U3CU3Ec_tB8255EE4323FA3DA77B2CAD19B56F38688143AD1 * L_0 = ((U3CU3Ec_tB8255EE4323FA3DA77B2CAD19B56F38688143AD1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB8255EE4323FA3DA77B2CAD19B56F38688143AD1_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		IntegerMillisecondsDelegate_t958909BBBB5EE26474934A254FAC11B1C5BE4567 * L_1 = (IntegerMillisecondsDelegate_t958909BBBB5EE26474934A254FAC11B1C5BE4567 *)il2cpp_codegen_object_new(IntegerMillisecondsDelegate_t958909BBBB5EE26474934A254FAC11B1C5BE4567_il2cpp_TypeInfo_var);
		IntegerMillisecondsDelegate__ctor_m138899B61ACAC535B706D6892E8E28EAC8AD4A60(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__20_0_mAA27F56F08D89303BE04C2D65E003909F6202508_RuntimeMethod_var), /*hidden argument*/NULL);
		((SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var))->set_IntegerMilliseconds_1(L_1);
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
// System.Void ExitGames.Client.Photon.TPeer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer__ctor_m9B3577155AA1FA3A8BA58D9CB7B69A67F5C358E4 (TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m77A700976BCE8508C7EEC542FA014BB67577F610_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_0 = (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 *)il2cpp_codegen_object_new(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4_il2cpp_TypeInfo_var);
		Queue_1__ctor_m77A700976BCE8508C7EEC542FA014BB67577F610(L_0, ((int32_t)32), /*hidden argument*/Queue_1__ctor_m77A700976BCE8508C7EEC542FA014BB67577F610_RuntimeMethod_var);
		__this->set_incomingList_47(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)240));
		__this->set_pingRequest_50(L_2);
		__this->set_DoFraming_54((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E_il2cpp_TypeInfo_var);
		PeerBase__ctor_mD1CFA277559C226324EF50B90FF3FBBAC5DA1EA1(__this, /*hidden argument*/NULL);
		((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->set_TrafficPackageHeaderSize_43(0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::InitPeerBase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_InitPeerBase_mDD1F9FD24FF0798AC718A788B8BA44CFE57374CF (TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m77A700976BCE8508C7EEC542FA014BB67577F610_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PeerBase_InitPeerBase_mD53EBAFDA95AAA9BE8DC2160AD389F89CA9F05DD(__this, /*hidden argument*/NULL);
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_0 = (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 *)il2cpp_codegen_object_new(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4_il2cpp_TypeInfo_var);
		Queue_1__ctor_m77A700976BCE8508C7EEC542FA014BB67577F610(L_0, ((int32_t)32), /*hidden argument*/Queue_1__ctor_m77A700976BCE8508C7EEC542FA014BB67577F610_RuntimeMethod_var);
		__this->set_incomingList_47(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = SupportClass_GetTickCount_m9ABD9A7385EBFF006EB92D74B5B467FD5C0C9012(/*hidden argument*/NULL);
		((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->set_timestampOfLastReceive_21(L_1);
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::Connect(System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_Connect_mA7E4900440F84A055894ED1ADA26C78C07EE8E88 (TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2 * __this, String_t* ___serverAddress0, String_t* ___appID1, RuntimeObject * ___customData2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_tE7041BC66B6BF1AA33D5AF6E25E984CDDF5A9E07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD5BDAA1D4B15B17B05FB9CECD1A239F2FDEB5130_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketTcp_t442BEC8A2E0A99ECE1B2C6FF9FCDA8128154A435_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7320E85A8DE6C28D8BEFAC38D01CE66FADFE0968);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA11767B3AA037BEA810EDDF4B485E8DEC8406BC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB3AA2628BF342A84CE7EB2AD8B7E300B7A91D26);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2 * G_B16_0 = NULL;
	TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2 * G_B15_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B17_0 = NULL;
	TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2 * G_B17_1 = NULL;
	{
		uint8_t L_0 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_peerConnectionState_5();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = PeerBase_get_Listener_m1DCFEB26A1C6BE40D0EEE86403CD2DC06BA1C681(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tE7041BC66B6BF1AA33D5AF6E25E984CDDF5A9E07_il2cpp_TypeInfo_var, L_2, 2, _stringLiteral7320E85A8DE6C28D8BEFAC38D01CE66FADFE0968);
		V_1 = (bool)0;
		goto IL_0140;
	}

IL_0028:
	{
		uint8_t L_3;
		L_3 = PeerBase_get_debugOut_mB5C207AA32961864BEB55E582ABBB7263BCE9B66(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_5;
		L_5 = PeerBase_get_Listener_m1DCFEB26A1C6BE40D0EEE86403CD2DC06BA1C681(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tE7041BC66B6BF1AA33D5AF6E25E984CDDF5A9E07_il2cpp_TypeInfo_var, L_5, 5, _stringLiteralEB3AA2628BF342A84CE7EB2AD8B7E300B7A91D26);
	}

IL_004c:
	{
		String_t* L_6 = ___serverAddress0;
		PeerBase_set_ServerAddress_m382F91B33DF6DEAEBB5191B9C6AB34049FD616CD_inline(__this, L_6, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(4 /* System.Void ExitGames.Client.Photon.PeerBase::InitPeerBase() */, __this);
		List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E * L_7 = (List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E *)il2cpp_codegen_object_new(List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E_il2cpp_TypeInfo_var);
		List_1__ctor_mD5BDAA1D4B15B17B05FB9CECD1A239F2FDEB5130(L_7, /*hidden argument*/List_1__ctor_mD5BDAA1D4B15B17B05FB9CECD1A239F2FDEB5130_RuntimeMethod_var);
		__this->set_outgoingStream_48(L_7);
		uint8_t L_8 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_usedTransportProtocol_2();
		if ((((int32_t)L_8) == ((int32_t)4)))
		{
			goto IL_007a;
		}
	}
	{
		uint8_t L_9 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_usedTransportProtocol_2();
		G_B7_0 = ((((int32_t)L_9) == ((int32_t)5))? 1 : 0);
		goto IL_007b;
	}

IL_007a:
	{
		G_B7_0 = 1;
	}

IL_007b:
	{
		V_3 = (bool)G_B7_0;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_008c;
		}
	}
	{
		String_t* L_11 = ___serverAddress0;
		String_t* L_12 = ___appID1;
		RuntimeObject * L_13 = ___customData2;
		String_t* L_14;
		L_14 = PeerBase_PepareWebSocketUrl_m01BDDAB502FEFD213D36C7CCA4A990D27FFC4AC8(__this, L_11, L_12, L_13, /*hidden argument*/NULL);
		___serverAddress0 = L_14;
	}

IL_008c:
	{
		Type_t * L_15;
		L_15 = PeerBase_get_SocketImplementation_m66836868AB28FE98065630CAC091FE4605D27CA4(__this, /*hidden argument*/NULL);
		V_4 = (bool)((!(((RuntimeObject*)(Type_t *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_00bf;
		}
	}
	{
		Type_t * L_17;
		L_17 = PeerBase_get_SocketImplementation_m66836868AB28FE98065630CAC091FE4605D27CA4(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, __this);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)__this);
		RuntimeObject * L_20;
		L_20 = Activator_CreateInstance_mF3E09E8AC19EE563314B326117091D4B9CC918C1(L_17, L_19, /*hidden argument*/NULL);
		((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->set_PhotonSocket_3(((IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450 *)CastclassClass((RuntimeObject*)L_20, IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_il2cpp_TypeInfo_var)));
		goto IL_00cd;
	}

IL_00bf:
	{
		SocketTcp_t442BEC8A2E0A99ECE1B2C6FF9FCDA8128154A435 * L_21 = (SocketTcp_t442BEC8A2E0A99ECE1B2C6FF9FCDA8128154A435 *)il2cpp_codegen_object_new(SocketTcp_t442BEC8A2E0A99ECE1B2C6FF9FCDA8128154A435_il2cpp_TypeInfo_var);
		SocketTcp__ctor_m02E701621D61260F354E0F6F4FC646F27497A4AB(L_21, __this, /*hidden argument*/NULL);
		((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->set_PhotonSocket_3(L_21);
	}

IL_00cd:
	{
		IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450 * L_22 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_PhotonSocket_3();
		V_5 = (bool)((((RuntimeObject*)(IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450 *)L_22) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_00fe;
		}
	}
	{
		RuntimeObject* L_24;
		L_24 = PeerBase_get_Listener_m1DCFEB26A1C6BE40D0EEE86403CD2DC06BA1C681(__this, /*hidden argument*/NULL);
		Type_t * L_25;
		L_25 = PeerBase_get_SocketImplementation_m66836868AB28FE98065630CAC091FE4605D27CA4(__this, /*hidden argument*/NULL);
		String_t* L_26;
		L_26 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteralA11767B3AA037BEA810EDDF4B485E8DEC8406BC8, L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tE7041BC66B6BF1AA33D5AF6E25E984CDDF5A9E07_il2cpp_TypeInfo_var, L_24, 1, L_26);
		V_1 = (bool)0;
		goto IL_0140;
	}

IL_00fe:
	{
		bool L_27 = __this->get_DoFraming_54();
		G_B15_0 = __this;
		if (L_27)
		{
			G_B16_0 = __this;
			goto IL_010e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = ((TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2_StaticFields*)il2cpp_codegen_static_fields_for(TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2_il2cpp_TypeInfo_var))->get_tcpMsgHead_52();
		G_B17_0 = L_28;
		G_B17_1 = G_B15_0;
		goto IL_0113;
	}

IL_010e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = ((TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2_StaticFields*)il2cpp_codegen_static_fields_for(TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2_il2cpp_TypeInfo_var))->get_tcpFramedMessageHead_51();
		G_B17_0 = L_29;
		G_B17_1 = G_B16_0;
	}

IL_0113:
	{
		NullCheck(G_B17_1);
		G_B17_1->set_messageHeader_53(G_B17_0);
		IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450 * L_30 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_PhotonSocket_3();
		NullCheck(L_30);
		bool L_31;
		L_31 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean ExitGames.Client.Photon.IPhotonSocket::Connect() */, L_30);
		V_6 = L_31;
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_0135;
		}
	}
	{
		((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->set_peerConnectionState_5(1);
		V_1 = (bool)1;
		goto IL_0140;
	}

IL_0135:
	{
		((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->set_peerConnectionState_5(0);
		V_1 = (bool)0;
		goto IL_0140;
	}

IL_0140:
	{
		bool L_33 = V_1;
		return L_33;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::OnConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_OnConnect_m0BD3C18E2DBBBADCC0DB6D1188E2F3305C59DAD6 (TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = SupportClass_GetTickCount_m9ABD9A7385EBFF006EB92D74B5B467FD5C0C9012(/*hidden argument*/NULL);
		__this->set_lastPingResult_49(L_0);
		String_t* L_1;
		L_1 = PeerBase_get_ServerAddress_mA7E7F80FEE805DBB212AF7E558A2845131FDDB54_inline(__this, /*hidden argument*/NULL);
		String_t* L_2 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_AppId_26();
		RuntimeObject * L_3 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_CustomInitData_25();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = PeerBase_PrepareConnectData_mD92E78E5461EF272550BA8940524365C2DE83A64(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		TPeer_EnqueueInit_m35B68D85F2033D2E7163D14E47195FBAF0308089(__this, L_5, /*hidden argument*/NULL);
		bool L_6;
		L_6 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean ExitGames.Client.Photon.PeerBase::SendOutgoingCommands() */, __this);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_Disconnect_mF0A871EBEC296C8EC00115DCC439329D5E4F21B4 (TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_tE7041BC66B6BF1AA33D5AF6E25E984CDDF5A9E07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral070D193C86BF98D0196B0B2AB6F7CF0437FEF24B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		uint8_t L_0 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_peerConnectionState_5();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		uint8_t L_1 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_peerConnectionState_5();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		goto IL_0047;
	}

IL_001c:
	{
		uint8_t L_3;
		L_3 = PeerBase_get_debugOut_mB5C207AA32961864BEB55E582ABBB7263BCE9B66(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_5;
		L_5 = PeerBase_get_Listener_m1DCFEB26A1C6BE40D0EEE86403CD2DC06BA1C681(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tE7041BC66B6BF1AA33D5AF6E25E984CDDF5A9E07_il2cpp_TypeInfo_var, L_5, 5, _stringLiteral070D193C86BF98D0196B0B2AB6F7CF0437FEF24B);
	}

IL_0040:
	{
		VirtActionInvoker0::Invoke(8 /* System.Void ExitGames.Client.Photon.PeerBase::StopConnection() */, __this);
	}

IL_0047:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::StopConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_StopConnection_m076A37319CB299C21E8AECE16F3ADCAFB2C64B8B (TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_m83F66337973B90D44B04DA1302077D6CCA463BCB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->set_peerConnectionState_5(4);
		IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450 * L_0 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_PhotonSocket_3();
		V_0 = (bool)((!(((RuntimeObject*)(IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450 * L_2 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_PhotonSocket_3();
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean ExitGames.Client.Photon.IPhotonSocket::Disconnect() */, L_2);
	}

IL_0023:
	{
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_4 = __this->get_incomingList_47();
		V_1 = L_4;
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_5 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_5, /*hidden argument*/NULL);
	}

IL_0031:
	try
	{ // begin try (depth: 1)
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_6 = __this->get_incomingList_47();
		NullCheck(L_6);
		Queue_1_Clear_m83F66337973B90D44B04DA1302077D6CCA463BCB(L_6, /*hidden argument*/Queue_1_Clear_m83F66337973B90D44B04DA1302077D6CCA463BCB_RuntimeMethod_var);
		IL2CPP_LEAVE(0x49, FINALLY_0041);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_7 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(65)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x49, IL_0049)
	}

IL_0049:
	{
		((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->set_peerConnectionState_5(0);
		PeerBase_EnqueueStatusCallback_m28B11BAB18D89DE7F2413A7F46340267284C23FE(__this, ((int32_t)1025), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::FetchServerTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_FetchServerTimestamp_mBFA41BD0DB23D82A0961CA40D119115A36D842FF (TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionStateValue_t81F9EDBDC21FF79C6013A20B90A9CE7A49570A95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_tE7041BC66B6BF1AA33D5AF6E25E984CDDF5A9E07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0844A3E92F62DCD91CD00D9084B9DB82474F02CA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		uint8_t L_0 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_peerConnectionState_5();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		uint8_t L_2;
		L_2 = PeerBase_get_debugOut_mB5C207AA32961864BEB55E582ABBB7263BCE9B66(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_4;
		L_4 = PeerBase_get_Listener_m1DCFEB26A1C6BE40D0EEE86403CD2DC06BA1C681(__this, /*hidden argument*/NULL);
		uint8_t L_5 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_peerConnectionState_5();
		uint8_t L_6 = L_5;
		RuntimeObject * L_7 = Box(ConnectionStateValue_t81F9EDBDC21FF79C6013A20B90A9CE7A49570A95_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteral0844A3E92F62DCD91CD00D9084B9DB82474F02CA, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tE7041BC66B6BF1AA33D5AF6E25E984CDDF5A9E07_il2cpp_TypeInfo_var, L_4, 3, L_8);
	}

IL_0046:
	{
		RuntimeObject* L_9;
		L_9 = PeerBase_get_Listener_m1DCFEB26A1C6BE40D0EEE86403CD2DC06BA1C681(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::OnStatusChanged(ExitGames.Client.Photon.StatusCode) */, IPhotonPeerListener_tE7041BC66B6BF1AA33D5AF6E25E984CDDF5A9E07_il2cpp_TypeInfo_var, L_9, ((int32_t)1030));
		goto IL_0067;
	}

IL_0059:
	{
		TPeer_SendPing_m5B3334141A4FEAC6178877D9D030BD441E795FBB(__this, /*hidden argument*/NULL);
		((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->set_serverTimeOffsetIsAvailable_14((bool)0);
	}

IL_0067:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::EnqueueInit(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_EnqueueInit_m35B68D85F2033D2E7163D14E47195FBAF0308089 (TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_tC5BEBC831E1E1605DDED083FF8603C5907AE9D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		bool L_0 = __this->get_DoFraming_54();
		V_3 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_00b7;
	}

IL_0014:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___data0;
		NullCheck(L_2);
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_3 = (StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC *)il2cpp_codegen_object_new(StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC_il2cpp_TypeInfo_var);
		StreamBuffer__ctor_mDE0E35A8373609C3722758E8C7D7322A1B5221CB(L_3, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), (int32_t)((int32_t)32))), /*hidden argument*/NULL);
		V_0 = L_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)7);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)251));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)1);
		V_1 = L_6;
		V_2 = 1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___data0;
		NullCheck(L_7);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_1;
		NullCheck(L_8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Protocol_tC5BEBC831E1E1605DDED083FF8603C5907AE9D7D_il2cpp_TypeInfo_var);
		Protocol_Serialize_mBB40326BF07AF6F14CEEB6C23ED398E17BBC6D3C(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))), (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))), L_9, (int32_t*)(&V_2), /*hidden argument*/NULL);
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_10 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_1;
		NullCheck(L_12);
		NullCheck(L_10);
		StreamBuffer_Write_mE1C64B5B595A3AA6EF66660318FC90AC6CC52246(L_10, L_11, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))), /*hidden argument*/NULL);
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_13 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = ___data0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = ___data0;
		NullCheck(L_15);
		NullCheck(L_13);
		StreamBuffer_Write_mE1C64B5B595A3AA6EF66660318FC90AC6CC52246(L_13, L_14, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))), /*hidden argument*/NULL);
		bool L_16;
		L_16 = PeerBase_get_TrafficStatsEnabled_m8F3D3788A0FD1636063D2D95BE8D48061FC92BBA(__this, /*hidden argument*/NULL);
		V_4 = L_16;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * L_18;
		L_18 = PeerBase_get_TrafficStatsOutgoing_m662C45F57ACCD645FC9A34B5C115633FE471819C(__this, /*hidden argument*/NULL);
		TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * L_19 = L_18;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = TrafficStats_get_TotalPacketCount_mE015927A5D7C83F3CC6995555A1F3A6A154105A8_inline(L_19, /*hidden argument*/NULL);
		V_5 = L_20;
		int32_t L_21 = V_5;
		NullCheck(L_19);
		TrafficStats_set_TotalPacketCount_m3CFB7931269E8D1C9AB2510F7AE2B1C05EF06B3D_inline(L_19, ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)), /*hidden argument*/NULL);
		TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * L_22;
		L_22 = PeerBase_get_TrafficStatsOutgoing_m662C45F57ACCD645FC9A34B5C115633FE471819C(__this, /*hidden argument*/NULL);
		TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * L_23 = L_22;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = TrafficStats_get_TotalCommandsInPackets_m80ECAC905B710985007A4C48F9E74626BA99F6C5_inline(L_23, /*hidden argument*/NULL);
		V_5 = L_24;
		int32_t L_25 = V_5;
		NullCheck(L_23);
		TrafficStats_set_TotalCommandsInPackets_m5AE4B9EDDDEF6027FC766797392726661FA54B44_inline(L_23, ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1)), /*hidden argument*/NULL);
		TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * L_26;
		L_26 = PeerBase_get_TrafficStatsOutgoing_m662C45F57ACCD645FC9A34B5C115633FE471819C(__this, /*hidden argument*/NULL);
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = StreamBuffer_get_Length_mE70463117B815D185ABE8613781768CCACBF089F(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		TrafficStats_CountControlCommand_mE2F32C4D8EF6BFDD863C7B862C5EB903FE0367AE(L_26, L_28, /*hidden argument*/NULL);
	}

IL_00ad:
	{
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_29 = V_0;
		bool L_30;
		L_30 = TPeer_EnqueueMessageAsPayload_m480655D1B92E0A2B6170FABC895AA5BAEAD538E3(__this, 1, L_29, (uint8_t)0, /*hidden argument*/NULL);
	}

IL_00b7:
	{
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::DispatchIncomingCommands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_DispatchIncomingCommands_m14382B82B108C79E3B852A8617A02205C1140A20 (TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MyAction_t999C526EA1710EB0A054212C5495A3A286E2B5A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m2EA4ED50C9D3AFC5608B9ACDF7C611D244872F0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m9A36F31681FA1AAB298A833220B6B7D2F48F82C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m1D55723B47270D04849E24BC09480DCD17C0CEBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m2FE6A24124300A57983A93DAFBFC4BF64684B9C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MyAction_t999C526EA1710EB0A054212C5495A3A286E2B5A7 * V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	bool V_2 = false;
	Queue_1_tDF0DA55465AF25D26AC05C3437EE16FBAE54C507 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	int32_t G_B3_0 = 0;
	{
		uint8_t L_0 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_peerConnectionState_5();
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = SupportClass_GetTickCount_m9ABD9A7385EBFF006EB92D74B5B467FD5C0C9012(/*hidden argument*/NULL);
		int32_t L_2 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_timestampOfLastReceive_21();
		int32_t L_3;
		L_3 = PeerBase_get_DisconnectTimeout_mA856807DE5DC872500C9E9A3A3D67AB172313BE2(__this, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2))) > ((int32_t)L_3))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 0;
	}

IL_0021:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		PeerBase_EnqueueStatusCallback_m28B11BAB18D89DE7F2413A7F46340267284C23FE(__this, ((int32_t)1040), /*hidden argument*/NULL);
		MyAction_t999C526EA1710EB0A054212C5495A3A286E2B5A7 * L_5 = (MyAction_t999C526EA1710EB0A054212C5495A3A286E2B5A7 *)il2cpp_codegen_object_new(MyAction_t999C526EA1710EB0A054212C5495A3A286E2B5A7_il2cpp_TypeInfo_var);
		MyAction__ctor_mB8AED83465187F3390933B44BE20506A07CA3EC6(L_5, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 7)), /*hidden argument*/NULL);
		PeerBase_EnqueueActionForDispatch_m0D04CDBECD49612CE0D3B93A8CBA7ABBCE17EB5A(__this, L_5, /*hidden argument*/NULL);
	}

IL_0047:
	{
		goto IL_0092;
	}

IL_0049:
	{
		Queue_1_tDF0DA55465AF25D26AC05C3437EE16FBAE54C507 * L_6 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_ActionQueue_11();
		V_3 = L_6;
		Queue_1_tDF0DA55465AF25D26AC05C3437EE16FBAE54C507 * L_7 = V_3;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_7, /*hidden argument*/NULL);
	}

IL_0058:
	try
	{ // begin try (depth: 1)
		{
			Queue_1_tDF0DA55465AF25D26AC05C3437EE16FBAE54C507 * L_8 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_ActionQueue_11();
			NullCheck(L_8);
			int32_t L_9;
			L_9 = Queue_1_get_Count_m2FE6A24124300A57983A93DAFBFC4BF64684B9C5_inline(L_8, /*hidden argument*/Queue_1_get_Count_m2FE6A24124300A57983A93DAFBFC4BF64684B9C5_RuntimeMethod_var);
			V_4 = (bool)((((int32_t)((((int32_t)L_9) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_10 = V_4;
			if (!L_10)
			{
				goto IL_0073;
			}
		}

IL_0070:
		{
			IL2CPP_LEAVE(0x97, FINALLY_0082);
		}

IL_0073:
		{
			Queue_1_tDF0DA55465AF25D26AC05C3437EE16FBAE54C507 * L_11 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_ActionQueue_11();
			NullCheck(L_11);
			MyAction_t999C526EA1710EB0A054212C5495A3A286E2B5A7 * L_12;
			L_12 = Queue_1_Dequeue_m9A36F31681FA1AAB298A833220B6B7D2F48F82C4(L_11, /*hidden argument*/Queue_1_Dequeue_m9A36F31681FA1AAB298A833220B6B7D2F48F82C4_RuntimeMethod_var);
			V_0 = L_12;
			IL2CPP_LEAVE(0x8A, FINALLY_0082);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0082;
	}

FINALLY_0082:
	{ // begin finally (depth: 1)
		Queue_1_tDF0DA55465AF25D26AC05C3437EE16FBAE54C507 * L_13 = V_3;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(130)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(130)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x97, IL_0097)
		IL2CPP_JUMP_TBL(0x8A, IL_008a)
	}

IL_008a:
	{
		MyAction_t999C526EA1710EB0A054212C5495A3A286E2B5A7 * L_14 = V_0;
		NullCheck(L_14);
		MyAction_Invoke_mC7066013EF06857D846113377E2E32A757042FF6(L_14, /*hidden argument*/NULL);
	}

IL_0092:
	{
		V_5 = (bool)1;
		goto IL_0049;
	}

IL_0097:
	{
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_15 = __this->get_incomingList_47();
		V_6 = L_15;
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_16 = V_6;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_16, /*hidden argument*/NULL);
	}

IL_00a7:
	try
	{ // begin try (depth: 1)
		{
			Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_17 = __this->get_incomingList_47();
			NullCheck(L_17);
			int32_t L_18;
			L_18 = Queue_1_get_Count_m1D55723B47270D04849E24BC09480DCD17C0CEBA_inline(L_17, /*hidden argument*/Queue_1_get_Count_m1D55723B47270D04849E24BC09480DCD17C0CEBA_RuntimeMethod_var);
			V_7 = (bool)((((int32_t)((((int32_t)L_18) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_19 = V_7;
			if (!L_19)
			{
				goto IL_00c5;
			}
		}

IL_00bf:
		{
			V_8 = (bool)0;
			IL2CPP_LEAVE(0xF8, FINALLY_00d4);
		}

IL_00c5:
		{
			Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_20 = __this->get_incomingList_47();
			NullCheck(L_20);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21;
			L_21 = Queue_1_Dequeue_m2EA4ED50C9D3AFC5608B9ACDF7C611D244872F0D(L_20, /*hidden argument*/Queue_1_Dequeue_m2EA4ED50C9D3AFC5608B9ACDF7C611D244872F0D_RuntimeMethod_var);
			V_1 = L_21;
			IL2CPP_LEAVE(0xDD, FINALLY_00d4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d4;
	}

FINALLY_00d4:
	{ // begin finally (depth: 1)
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_22 = V_6;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_22, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(212)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(212)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF8, IL_00f8)
		IL2CPP_JUMP_TBL(0xDD, IL_00dd)
	}

IL_00dd:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = V_1;
		NullCheck(L_23);
		((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->set_ByteCountCurrentDispatch_7(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))), (int32_t)3)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = V_1;
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_25 = (StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC *)il2cpp_codegen_object_new(StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC_il2cpp_TypeInfo_var);
		StreamBuffer__ctor_m18CBC08040B194E7AA12A461D2FAE4B5B25D42E6(L_25, L_24, /*hidden argument*/NULL);
		bool L_26;
		L_26 = VirtFuncInvoker1< bool, StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * >::Invoke(16 /* System.Boolean ExitGames.Client.Photon.PeerBase::DeserializeMessageAndCallback(ExitGames.Client.Photon.StreamBuffer) */, __this, L_25);
		V_8 = L_26;
		goto IL_00f8;
	}

IL_00f8:
	{
		bool L_27 = V_8;
		return L_27;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::SendOutgoingCommands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_SendOutgoingCommands_m155371E73660A7F9DECFF672EF1BD5A752AE1CF3 (TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5E6DF73A36A66925E4C3DCFF1568BCAC513D1DCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF58904EE64D37FF9290FAF23599FF3948FE67494_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7D8E89642684CA38BF575AC3ECC0F96EDD408B03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E * V_4 = NULL;
	int32_t V_5 = 0;
	StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * V_6 = NULL;
	bool V_7 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B7_0 = 0;
	{
		uint8_t L_0 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_peerConnectionState_5();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_00f0;
	}

IL_0016:
	{
		IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450 * L_2 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_PhotonSocket_3();
		NullCheck(L_2);
		bool L_3;
		L_3 = IPhotonSocket_get_Connected_m8B1174D39F7FC4A9D012632539426A5C07239AEA(L_2, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_00f0;
	}

IL_0030:
	{
		int32_t L_5;
		L_5 = PeerBase_get_timeInt_m1C1EA7888172F7824EE77A54453EB8B72C93B136(__this, /*hidden argument*/NULL);
		((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->set_timeLastSendOutgoing_33(L_5);
		uint8_t L_6 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_peerConnectionState_5();
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = SupportClass_GetTickCount_m9ABD9A7385EBFF006EB92D74B5B467FD5C0C9012(/*hidden argument*/NULL);
		int32_t L_8 = __this->get_lastPingResult_49();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = il2cpp_codegen_abs(((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8)));
		int32_t L_10;
		L_10 = PeerBase_get_timePingInterval_m8EB05695E1B570E4B77F714454BF25AB8409E7AF(__this, /*hidden argument*/NULL);
		G_B7_0 = ((((int32_t)L_9) > ((int32_t)L_10))? 1 : 0);
		goto IL_0061;
	}

IL_0060:
	{
		G_B7_0 = 0;
	}

IL_0061:
	{
		V_3 = (bool)G_B7_0;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_006e;
		}
	}
	{
		TPeer_SendPing_m5B3334141A4FEAC6178877D9D030BD441E795FBB(__this, /*hidden argument*/NULL);
	}

IL_006e:
	{
		List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E * L_12 = __this->get_outgoingStream_48();
		V_4 = L_12;
		List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E * L_13 = V_4;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_13, /*hidden argument*/NULL);
	}

IL_007e:
	try
	{ // begin try (depth: 1)
		{
			V_5 = 0;
			goto IL_00b8;
		}

IL_0084:
		{
			List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E * L_14 = __this->get_outgoingStream_48();
			int32_t L_15 = V_5;
			NullCheck(L_14);
			StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_16;
			L_16 = List_1_get_Item_m7D8E89642684CA38BF575AC3ECC0F96EDD408B03_inline(L_14, L_15, /*hidden argument*/List_1_get_Item_m7D8E89642684CA38BF575AC3ECC0F96EDD408B03_RuntimeMethod_var);
			V_6 = L_16;
			StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_17 = V_6;
			NullCheck(L_17);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18;
			L_18 = StreamBuffer_GetBuffer_m8385F8BB37D9FC42CEBC7D570C4AB0C5B683BB69(L_17, /*hidden argument*/NULL);
			StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_19 = V_6;
			NullCheck(L_19);
			int32_t L_20;
			L_20 = StreamBuffer_get_Length_mE70463117B815D185ABE8613781768CCACBF089F(L_19, /*hidden argument*/NULL);
			TPeer_SendData_mE38E69A40EF1881B017BC69B8F865479B5799F6A(__this, L_18, L_20, /*hidden argument*/NULL);
			StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_21 = V_6;
			IL2CPP_RUNTIME_CLASS_INIT(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E_il2cpp_TypeInfo_var);
			PeerBase_MessageBufferPoolPut_m47B1892CB150AA3ACA8ACD75B10699622EB0AFBD(L_21, /*hidden argument*/NULL);
			int32_t L_22 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		}

IL_00b8:
		{
			int32_t L_23 = V_5;
			List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E * L_24 = __this->get_outgoingStream_48();
			NullCheck(L_24);
			int32_t L_25;
			L_25 = List_1_get_Count_mF58904EE64D37FF9290FAF23599FF3948FE67494_inline(L_24, /*hidden argument*/List_1_get_Count_mF58904EE64D37FF9290FAF23599FF3948FE67494_RuntimeMethod_var);
			V_7 = (bool)((((int32_t)L_23) < ((int32_t)L_25))? 1 : 0);
			bool L_26 = V_7;
			if (L_26)
			{
				goto IL_0084;
			}
		}

IL_00cd:
		{
			List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E * L_27 = __this->get_outgoingStream_48();
			NullCheck(L_27);
			List_1_Clear_m5E6DF73A36A66925E4C3DCFF1568BCAC513D1DCC(L_27, /*hidden argument*/List_1_Clear_m5E6DF73A36A66925E4C3DCFF1568BCAC513D1DCC_RuntimeMethod_var);
			((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->set_outgoingCommandsInStream_36(0);
			IL2CPP_LEAVE(0xEC, FINALLY_00e3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e3;
	}

FINALLY_00e3:
	{ // begin finally (depth: 1)
		List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E * L_28 = V_4;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_28, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(227)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(227)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xEC, IL_00ec)
	}

IL_00ec:
	{
		V_1 = (bool)0;
		goto IL_00f0;
	}

IL_00f0:
	{
		bool L_29 = V_1;
		return L_29;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::SendAcksOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_SendAcksOnly_m9518C232E87EB48092CC85D29270AFEC9D3745E5 (TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450 * L_0 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_PhotonSocket_3();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450 * L_1 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_PhotonSocket_3();
		NullCheck(L_1);
		bool L_2;
		L_2 = IPhotonSocket_get_Connected_m8B1174D39F7FC4A9D012632539426A5C07239AEA(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0054;
	}

IL_0023:
	{
		uint8_t L_4 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_peerConnectionState_5();
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = SupportClass_GetTickCount_m9ABD9A7385EBFF006EB92D74B5B467FD5C0C9012(/*hidden argument*/NULL);
		int32_t L_6 = __this->get_lastPingResult_49();
		int32_t L_7;
		L_7 = PeerBase_get_timePingInterval_m8EB05695E1B570E4B77F714454BF25AB8409E7AF(__this, /*hidden argument*/NULL);
		G_B8_0 = ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6))) > ((int32_t)L_7))? 1 : 0);
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = (bool)G_B8_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		TPeer_SendPing_m5B3334141A4FEAC6178877D9D030BD441E795FBB(__this, /*hidden argument*/NULL);
	}

IL_0050:
	{
		V_1 = (bool)0;
		goto IL_0054;
	}

IL_0054:
	{
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::EnqueueOperation(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Byte,ExitGames.Client.Photon.SendOptions,ExitGames.Client.Photon.EgMessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_EnqueueOperation_m3CA87F39B745531AF8F6E42A90348125F7FD537E (TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2 * __this, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * ___parameters0, uint8_t ___opCode1, SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11  ___sendParams2, uint8_t ___messageType3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionStateValue_t81F9EDBDC21FF79C6013A20B90A9CE7A49570A95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_tE7041BC66B6BF1AA33D5AF6E25E984CDDF5A9E07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75D46515E5FA1E41165D1F1235FDED4C00F15F43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CBACC8665E098574C09F925D61F052BBB7E22B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDB75C7B635278885D0B7EA4B060ED5D6CDDC2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1C16855D8192424FC88BE50A772F28AFBF3D5E6);
		s_Il2CppMethodInitialized = true;
	}
	StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		uint8_t L_0 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_peerConnectionState_5();
		V_1 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_007b;
		}
	}
	{
		uint8_t L_2;
		L_2 = PeerBase_get_debugOut_mB5C207AA32961864BEB55E582ABBB7263BCE9B66(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0063;
		}
	}
	{
		RuntimeObject* L_4;
		L_4 = PeerBase_get_Listener_m1DCFEB26A1C6BE40D0EEE86403CD2DC06BA1C681(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralA1C16855D8192424FC88BE50A772F28AFBF3D5E6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralA1C16855D8192424FC88BE50A772F28AFBF3D5E6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_6;
		uint8_t L_8 = ___opCode1;
		uint8_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_7;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral8CBACC8665E098574C09F925D61F052BBB7E22B8);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral8CBACC8665E098574C09F925D61F052BBB7E22B8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_11;
		uint8_t L_13 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_peerConnectionState_5();
		uint8_t L_14 = L_13;
		RuntimeObject * L_15 = Box(ConnectionStateValue_t81F9EDBDC21FF79C6013A20B90A9CE7A49570A95_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		String_t* L_16;
		L_16 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_12, /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tE7041BC66B6BF1AA33D5AF6E25E984CDDF5A9E07_il2cpp_TypeInfo_var, L_4, 1, L_16);
	}

IL_0063:
	{
		RuntimeObject* L_17;
		L_17 = PeerBase_get_Listener_m1DCFEB26A1C6BE40D0EEE86403CD2DC06BA1C681(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::OnStatusChanged(ExitGames.Client.Photon.StatusCode) */, IPhotonPeerListener_tE7041BC66B6BF1AA33D5AF6E25E984CDDF5A9E07_il2cpp_TypeInfo_var, L_17, ((int32_t)1030));
		V_3 = (bool)0;
		goto IL_012f;
	}

IL_007b:
	{
		SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11  L_18 = ___sendParams2;
		uint8_t L_19 = L_18.get_Channel_4();
		uint8_t L_20;
		L_20 = PeerBase_get_ChannelCount_m4BB3F47841456DC6CD1E2FDCFE562B0863E85F4A(__this, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0108;
		}
	}
	{
		uint8_t L_22;
		L_22 = PeerBase_get_debugOut_mB5C207AA32961864BEB55E582ABBB7263BCE9B66(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_22) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_00f3;
		}
	}
	{
		RuntimeObject* L_24;
		L_24 = PeerBase_get_Listener_m1DCFEB26A1C6BE40D0EEE86403CD2DC06BA1C681(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral75D46515E5FA1E41165D1F1235FDED4C00F15F43);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral75D46515E5FA1E41165D1F1235FDED4C00F15F43);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = L_26;
		SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11  L_28 = ___sendParams2;
		uint8_t L_29 = L_28.get_Channel_4();
		uint8_t L_30 = L_29;
		RuntimeObject * L_31 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_31);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_31);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_32 = L_27;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral9CDB75C7B635278885D0B7EA4B060ED5D6CDDC2B);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral9CDB75C7B635278885D0B7EA4B060ED5D6CDDC2B);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_33 = L_32;
		uint8_t L_34;
		L_34 = PeerBase_get_ChannelCount_m4BB3F47841456DC6CD1E2FDCFE562B0863E85F4A(__this, /*hidden argument*/NULL);
		uint8_t L_35 = L_34;
		RuntimeObject * L_36 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_36);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_37 = L_33;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		String_t* L_38;
		L_38 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_37, /*hidden argument*/NULL);
		NullCheck(L_24);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tE7041BC66B6BF1AA33D5AF6E25E984CDDF5A9E07_il2cpp_TypeInfo_var, L_24, 1, L_38);
	}

IL_00f3:
	{
		RuntimeObject* L_39;
		L_39 = PeerBase_get_Listener_m1DCFEB26A1C6BE40D0EEE86403CD2DC06BA1C681(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::OnStatusChanged(ExitGames.Client.Photon.StatusCode) */, IPhotonPeerListener_tE7041BC66B6BF1AA33D5AF6E25E984CDDF5A9E07_il2cpp_TypeInfo_var, L_39, ((int32_t)1030));
		V_3 = (bool)0;
		goto IL_012f;
	}

IL_0108:
	{
		uint8_t L_40 = ___opCode1;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_41 = ___parameters0;
		uint8_t L_42 = ___messageType3;
		SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11  L_43 = ___sendParams2;
		bool L_44 = L_43.get_Encrypt_3();
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_45;
		L_45 = VirtFuncInvoker4< StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC *, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, uint8_t, bool >::Invoke(11 /* ExitGames.Client.Photon.StreamBuffer ExitGames.Client.Photon.PeerBase::SerializeOperationToMessage(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.EgMessageType,System.Boolean) */, __this, L_40, L_41, L_42, L_44);
		V_0 = L_45;
		SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11  L_46 = ___sendParams2;
		int32_t L_47 = L_46.get_DeliveryMode_2();
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_48 = V_0;
		SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11  L_49 = ___sendParams2;
		uint8_t L_50 = L_49.get_Channel_4();
		bool L_51;
		L_51 = TPeer_EnqueueMessageAsPayload_m480655D1B92E0A2B6170FABC895AA5BAEAD538E3(__this, L_47, L_48, L_50, /*hidden argument*/NULL);
		V_3 = L_51;
		goto IL_012f;
	}

IL_012f:
	{
		bool L_52 = V_3;
		return L_52;
	}
}
// ExitGames.Client.Photon.StreamBuffer ExitGames.Client.Photon.TPeer::SerializeOperationToMessage(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.EgMessageType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * TPeer_SerializeOperationToMessage_mB29BC8C1E84CA76F1AB8FDB45F5223D8AC189F0E (TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2 * __this, uint8_t ___opCode0, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * ___parameters1, uint8_t ___messageType2, bool ___encrypt3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICryptoProvider_t4FD0F975131B5A2CD38D000AE63D97EC1BBFDEB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_tC5BEBC831E1E1605DDED083FF8603C5907AE9D7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * V_9 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E_il2cpp_TypeInfo_var);
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_0;
		L_0 = PeerBase_MessageBufferPoolGet_m1E94428DF1DDAB2F6F717DA2AB4034E53BAE3E4D(/*hidden argument*/NULL);
		V_0 = L_0;
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_1 = V_0;
		NullCheck(L_1);
		StreamBuffer_SetLength_m3D863EBEB173128C45E80AF92CF1B6673DA69308(L_1, ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		bool L_2 = ___encrypt3;
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_4 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = __this->get_messageHeader_53();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_messageHeader_53();
		NullCheck(L_6);
		NullCheck(L_4);
		StreamBuffer_Write_mE1C64B5B595A3AA6EF66660318FC90AC6CC52246(L_4, L_5, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), /*hidden argument*/NULL);
	}

IL_0031:
	{
		IProtocol_tC0E4162EB71727CF15421A41CBE61A6749AEC038 * L_7 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_SerializationProtocol_1();
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_8 = V_0;
		uint8_t L_9 = ___opCode0;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_10 = ___parameters1;
		NullCheck(L_7);
		VirtActionInvoker4< StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC *, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, bool >::Invoke(10 /* System.Void ExitGames.Client.Photon.IProtocol::SerializeOperationRequest(ExitGames.Client.Photon.StreamBuffer,System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean) */, L_7, L_8, L_9, L_10, (bool)0);
		bool L_11 = ___encrypt3;
		V_3 = L_11;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0090;
		}
	}
	{
		RuntimeObject* L_13 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_CryptoProvider_38();
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_14 = V_0;
		NullCheck(L_14);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15;
		L_15 = StreamBuffer_GetBuffer_m8385F8BB37D9FC42CEBC7D570C4AB0C5B683BB69(L_14, /*hidden argument*/NULL);
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = StreamBuffer_get_Length_mE70463117B815D185ABE8613781768CCACBF089F(L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18;
		L_18 = InterfaceFuncInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(2 /* System.Byte[] Photon.SocketServer.Security.ICryptoProvider::Encrypt(System.Byte[],System.Int32,System.Int32) */, ICryptoProvider_t4FD0F975131B5A2CD38D000AE63D97EC1BBFDEB3_il2cpp_TypeInfo_var, L_13, L_15, 0, L_17);
		V_4 = L_18;
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_19 = V_0;
		NullCheck(L_19);
		StreamBuffer_SetLength_m3D863EBEB173128C45E80AF92CF1B6673DA69308(L_19, ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_20 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = __this->get_messageHeader_53();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = __this->get_messageHeader_53();
		NullCheck(L_22);
		NullCheck(L_20);
		StreamBuffer_Write_mE1C64B5B595A3AA6EF66660318FC90AC6CC52246(L_20, L_21, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))), /*hidden argument*/NULL);
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_23 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = V_4;
		NullCheck(L_25);
		NullCheck(L_23);
		StreamBuffer_Write_mE1C64B5B595A3AA6EF66660318FC90AC6CC52246(L_23, L_24, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))), /*hidden argument*/NULL);
	}

IL_0090:
	{
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_26 = V_0;
		NullCheck(L_26);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27;
		L_27 = StreamBuffer_GetBuffer_m8385F8BB37D9FC42CEBC7D570C4AB0C5B683BB69(L_26, /*hidden argument*/NULL);
		V_1 = L_27;
		uint8_t L_28 = ___messageType2;
		V_5 = (bool)((((int32_t)((((int32_t)L_28) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_5;
		if (!L_29)
		{
			goto IL_00b3;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = __this->get_messageHeader_53();
		NullCheck(L_31);
		uint8_t L_32 = ___messageType2;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))), (int32_t)1))), (uint8_t)L_32);
	}

IL_00b3:
	{
		bool L_33 = ___encrypt3;
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_00dc;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36 = __this->get_messageHeader_53();
		NullCheck(L_36);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_37 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = __this->get_messageHeader_53();
		NullCheck(L_38);
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length))), (int32_t)1));
		uint8_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))), (int32_t)1))), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_40|(int32_t)((int32_t)128))))));
	}

IL_00dc:
	{
		bool L_41 = __this->get_DoFraming_54();
		V_7 = L_41;
		bool L_42 = V_7;
		if (!L_42)
		{
			goto IL_00fc;
		}
	}
	{
		V_8 = 1;
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_43 = V_0;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = StreamBuffer_get_Length_mE70463117B815D185ABE8613781768CCACBF089F(L_43, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_45 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Protocol_tC5BEBC831E1E1605DDED083FF8603C5907AE9D7D_il2cpp_TypeInfo_var);
		Protocol_Serialize_mBB40326BF07AF6F14CEEB6C23ED398E17BBC6D3C(L_44, L_45, (int32_t*)(&V_8), /*hidden argument*/NULL);
	}

IL_00fc:
	{
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_46 = V_0;
		V_9 = L_46;
		goto IL_0101;
	}

IL_0101:
	{
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_47 = V_9;
		return L_47;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::EnqueueMessageAsPayload(ExitGames.Client.Photon.DeliveryMode,ExitGames.Client.Photon.StreamBuffer,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_EnqueueMessageAsPayload_m480655D1B92E0A2B6170FABC895AA5BAEAD538E3 (TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2 * __this, int32_t ___deliveryMode0, StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * ___opMessage1, uint8_t ___channelId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7047B900C688EC39A7AFB8E6BCE0525B48C7EACF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_4 = NULL;
	int32_t V_5 = 0;
	List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E * V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_0 = ___opMessage1;
		V_1 = (bool)((((RuntimeObject*)(StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0119;
	}

IL_0011:
	{
		bool L_2 = __this->get_DoFraming_54();
		V_3 = L_2;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0074;
		}
	}
	{
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_4 = ___opMessage1;
		NullCheck(L_4);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
		L_5 = StreamBuffer_GetBuffer_m8385F8BB37D9FC42CEBC7D570C4AB0C5B683BB69(L_4, /*hidden argument*/NULL);
		V_4 = L_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_4;
		uint8_t L_7 = ___channelId2;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)L_7);
		int32_t L_8 = ___deliveryMode0;
		V_5 = L_8;
		int32_t L_9 = V_5;
		switch (L_9)
		{
			case 0:
			{
				goto IL_0045;
			}
			case 1:
			{
				goto IL_004c;
			}
			case 2:
			{
				goto IL_0053;
			}
			case 3:
			{
				goto IL_005a;
			}
		}
	}
	{
		goto IL_0061;
	}

IL_0045:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_4;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)0);
		goto IL_0073;
	}

IL_004c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_4;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)1);
		goto IL_0073;
	}

IL_0053:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_4;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)2);
		goto IL_0073;
	}

IL_005a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_4;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)3);
		goto IL_0073;
	}

IL_0061:
	{
		int32_t L_14 = ___deliveryMode0;
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeliveryMode_tF32D749B1B3B54D61B751129E38FE02739DA8AAB_il2cpp_TypeInfo_var)), &L_15);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_17 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAC74A02B4CEED8538DF27EC8749B19526C0B8E0A)), L_16, (String_t*)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TPeer_EnqueueMessageAsPayload_m480655D1B92E0A2B6170FABC895AA5BAEAD538E3_RuntimeMethod_var)));
	}

IL_0073:
	{
	}

IL_0074:
	{
		List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E * L_18 = __this->get_outgoingStream_48();
		V_6 = L_18;
		List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E * L_19 = V_6;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_19, /*hidden argument*/NULL);
	}

IL_0084:
	try
	{ // begin try (depth: 1)
		List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E * L_20 = __this->get_outgoingStream_48();
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_21 = ___opMessage1;
		NullCheck(L_20);
		List_1_Add_m7047B900C688EC39A7AFB8E6BCE0525B48C7EACF(L_20, L_21, /*hidden argument*/List_1_Add_m7047B900C688EC39A7AFB8E6BCE0525B48C7EACF_RuntimeMethod_var);
		int32_t L_22 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_outgoingCommandsInStream_36();
		((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->set_outgoingCommandsInStream_36(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)));
		IL2CPP_LEAVE(0xAC, FINALLY_00a3);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a3;
	}

FINALLY_00a3:
	{ // begin finally (depth: 1)
		List_1_t1BB65664F3854510D2F86D6BA5E3864ABB674A2E * L_23 = V_6;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_23, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(163)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(163)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
	}

IL_00ac:
	{
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_24 = ___opMessage1;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = StreamBuffer_get_Length_mE70463117B815D185ABE8613781768CCACBF089F(L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		int32_t L_26 = V_0;
		((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->set_ByteCountLastOperation_6(L_26);
		bool L_27;
		L_27 = PeerBase_get_TrafficStatsEnabled_m8F3D3788A0FD1636063D2D95BE8D48061FC92BBA(__this, /*hidden argument*/NULL);
		V_7 = L_27;
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_0115;
		}
	}
	{
		int32_t L_29 = ___deliveryMode0;
		V_8 = L_29;
		int32_t L_30 = V_8;
		if (!L_30)
		{
			goto IL_00d7;
		}
	}
	{
		goto IL_00d0;
	}

IL_00d0:
	{
		int32_t L_31 = V_8;
		if ((((int32_t)L_31) == ((int32_t)1)))
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00f5;
	}

IL_00d7:
	{
		TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * L_32;
		L_32 = PeerBase_get_TrafficStatsOutgoing_m662C45F57ACCD645FC9A34B5C115633FE471819C(__this, /*hidden argument*/NULL);
		int32_t L_33 = V_0;
		NullCheck(L_32);
		TrafficStats_CountUnreliableOpCommand_m12897AA8891D616B0125A622778D7AC72E6E56C0(L_32, L_33, /*hidden argument*/NULL);
		goto IL_0107;
	}

IL_00e6:
	{
		TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * L_34;
		L_34 = PeerBase_get_TrafficStatsOutgoing_m662C45F57ACCD645FC9A34B5C115633FE471819C(__this, /*hidden argument*/NULL);
		int32_t L_35 = V_0;
		NullCheck(L_34);
		TrafficStats_CountReliableOpCommand_m01CD502B04E64A7473DC5DD7149A6BDB74774AB9(L_34, L_35, /*hidden argument*/NULL);
		goto IL_0107;
	}

IL_00f5:
	{
		int32_t L_36 = ___deliveryMode0;
		int32_t L_37 = L_36;
		RuntimeObject * L_38 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeliveryMode_tF32D749B1B3B54D61B751129E38FE02739DA8AAB_il2cpp_TypeInfo_var)), &L_37);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_39 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_39, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral872DE60CB2239200B569B73387AEE6DEF5D86F24)), L_38, (String_t*)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TPeer_EnqueueMessageAsPayload_m480655D1B92E0A2B6170FABC895AA5BAEAD538E3_RuntimeMethod_var)));
	}

IL_0107:
	{
		TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * L_40;
		L_40 = PeerBase_get_TrafficStatsGameLevel_mC2470C3D8D2936013C54CCAA18C7A0B295B3F908(__this, /*hidden argument*/NULL);
		int32_t L_41 = V_0;
		NullCheck(L_40);
		TrafficStatsGameLevel_CountOperation_mAB20D5FB2AFEE0EC8203088578F0BC2BF726CF97(L_40, L_41, /*hidden argument*/NULL);
	}

IL_0115:
	{
		V_2 = (bool)1;
		goto IL_0119;
	}

IL_0119:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::SendPing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_SendPing_m5B3334141A4FEAC6178877D9D030BD441E795FBB (TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonCodes_tE53B2AC61C3792AD7BB906424F243B342EB5E0D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_tC5BEBC831E1E1605DDED083FF8603C5907AE9D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11  V_2;
	memset((&V_2), 0, sizeof(V_2));
	StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * V_3 = NULL;
	SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = SupportClass_GetTickCount_m9ABD9A7385EBFF006EB92D74B5B467FD5C0C9012(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		__this->set_lastPingResult_49(L_1);
		bool L_2 = __this->get_DoFraming_54();
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0092;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11 ));
		(&V_4)->set_DeliveryMode_2(1);
		SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11  L_4 = V_4;
		V_2 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonCodes_tE53B2AC61C3792AD7BB906424F243B342EB5E0D4_il2cpp_TypeInfo_var);
		uint8_t L_5 = ((PhotonCodes_tE53B2AC61C3792AD7BB906424F243B342EB5E0D4_StaticFields*)il2cpp_codegen_static_fields_for(PhotonCodes_tE53B2AC61C3792AD7BB906424F243B342EB5E0D4_il2cpp_TypeInfo_var))->get_Ping_4();
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_6 = (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *)il2cpp_codegen_object_new(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C(L_6, /*hidden argument*/Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_7 = L_6;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_7, (uint8_t)1, L_10, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		SendOptions_t68CA4EDD9FB8257C11EB61D1057DFF5AC6E5FB11  L_11 = V_2;
		bool L_12 = L_11.get_Encrypt_3();
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_13;
		L_13 = VirtFuncInvoker4< StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC *, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, uint8_t, bool >::Invoke(11 /* ExitGames.Client.Photon.StreamBuffer ExitGames.Client.Photon.PeerBase::SerializeOperationToMessage(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.EgMessageType,System.Boolean) */, __this, L_5, L_7, 6, L_12);
		V_3 = L_13;
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_14 = V_3;
		NullCheck(L_14);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15;
		L_15 = StreamBuffer_GetBuffer_m8385F8BB37D9FC42CEBC7D570C4AB0C5B683BB69(L_14, /*hidden argument*/NULL);
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_16 = V_3;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = StreamBuffer_get_Length_mE70463117B815D185ABE8613781768CCACBF089F(L_16, /*hidden argument*/NULL);
		TPeer_SendData_mE38E69A40EF1881B017BC69B8F865479B5799F6A(__this, L_15, L_17, /*hidden argument*/NULL);
		bool L_18;
		L_18 = PeerBase_get_TrafficStatsEnabled_m8F3D3788A0FD1636063D2D95BE8D48061FC92BBA(__this, /*hidden argument*/NULL);
		V_5 = L_18;
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_0088;
		}
	}
	{
		TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * L_20;
		L_20 = PeerBase_get_TrafficStatsOutgoing_m662C45F57ACCD645FC9A34B5C115633FE471819C(__this, /*hidden argument*/NULL);
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_21 = V_3;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = StreamBuffer_get_Length_mE70463117B815D185ABE8613781768CCACBF089F(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		TrafficStats_CountControlCommand_mE2F32C4D8EF6BFDD863C7B862C5EB903FE0367AE(L_20, L_22, /*hidden argument*/NULL);
	}

IL_0088:
	{
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_23 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E_il2cpp_TypeInfo_var);
		PeerBase_MessageBufferPoolPut_m47B1892CB150AA3ACA8ACD75B10699622EB0AFBD(L_23, /*hidden argument*/NULL);
		goto IL_00dd;
	}

IL_0092:
	{
		V_6 = 1;
		int32_t L_24 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = __this->get_pingRequest_50();
		IL2CPP_RUNTIME_CLASS_INIT(Protocol_tC5BEBC831E1E1605DDED083FF8603C5907AE9D7D_il2cpp_TypeInfo_var);
		Protocol_Serialize_mBB40326BF07AF6F14CEEB6C23ED398E17BBC6D3C(L_24, L_25, (int32_t*)(&V_6), /*hidden argument*/NULL);
		bool L_26;
		L_26 = PeerBase_get_TrafficStatsEnabled_m8F3D3788A0FD1636063D2D95BE8D48061FC92BBA(__this, /*hidden argument*/NULL);
		V_7 = L_26;
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_00c7;
		}
	}
	{
		TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * L_28;
		L_28 = PeerBase_get_TrafficStatsOutgoing_m662C45F57ACCD645FC9A34B5C115633FE471819C(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = __this->get_pingRequest_50();
		NullCheck(L_29);
		NullCheck(L_28);
		TrafficStats_CountControlCommand_mE2F32C4D8EF6BFDD863C7B862C5EB903FE0367AE(L_28, ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))), /*hidden argument*/NULL);
	}

IL_00c7:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = __this->get_pingRequest_50();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = __this->get_pingRequest_50();
		NullCheck(L_31);
		TPeer_SendData_mE38E69A40EF1881B017BC69B8F865479B5799F6A(__this, L_30, ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))), /*hidden argument*/NULL);
	}

IL_00dd:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::SendData(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_SendData_mE38E69A40EF1881B017BC69B8F865479B5799F6A (TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	Exception_t * V_4 = NULL;
	bool V_5 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			int64_t L_0 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_bytesOut_23();
			int32_t L_1 = ___length1;
			((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->set_bytesOut_23(((int64_t)il2cpp_codegen_add((int64_t)L_0, (int64_t)((int64_t)((int64_t)L_1)))));
			bool L_2;
			L_2 = PeerBase_get_TrafficStatsEnabled_m8F3D3788A0FD1636063D2D95BE8D48061FC92BBA(__this, /*hidden argument*/NULL);
			V_0 = L_2;
			bool L_3 = V_0;
			if (!L_3)
			{
				goto IL_004c;
			}
		}

IL_001b:
		{
			TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * L_4;
			L_4 = PeerBase_get_TrafficStatsOutgoing_m662C45F57ACCD645FC9A34B5C115633FE471819C(__this, /*hidden argument*/NULL);
			TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * L_5 = L_4;
			NullCheck(L_5);
			int32_t L_6;
			L_6 = TrafficStats_get_TotalPacketCount_mE015927A5D7C83F3CC6995555A1F3A6A154105A8_inline(L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			int32_t L_7 = V_1;
			NullCheck(L_5);
			TrafficStats_set_TotalPacketCount_m3CFB7931269E8D1C9AB2510F7AE2B1C05EF06B3D_inline(L_5, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)), /*hidden argument*/NULL);
			TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * L_8;
			L_8 = PeerBase_get_TrafficStatsOutgoing_m662C45F57ACCD645FC9A34B5C115633FE471819C(__this, /*hidden argument*/NULL);
			TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * L_9 = L_8;
			NullCheck(L_9);
			int32_t L_10;
			L_10 = TrafficStats_get_TotalCommandsInPackets_m80ECAC905B710985007A4C48F9E74626BA99F6C5_inline(L_9, /*hidden argument*/NULL);
			int32_t L_11 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_outgoingCommandsInStream_36();
			NullCheck(L_9);
			TrafficStats_set_TotalCommandsInPackets_m5AE4B9EDDDEF6027FC766797392726661FA54B44_inline(L_9, ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11)), /*hidden argument*/NULL);
		}

IL_004c:
		{
			NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700 * L_12;
			L_12 = PeerBase_get_NetworkSimulationSettings_m4E168D29353AC621A131E164FB6CFB18AA80AC59(__this, /*hidden argument*/NULL);
			NullCheck(L_12);
			bool L_13;
			L_13 = NetworkSimulationSet_get_IsSimulationEnabled_mBCADB18F7FDDBEB9180AF35FC6F8EE4D7B4E2F9B(L_12, /*hidden argument*/NULL);
			V_2 = L_13;
			bool L_14 = V_2;
			if (!L_14)
			{
				goto IL_0079;
			}
		}

IL_005b:
		{
			int32_t L_15 = ___length1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_15);
			V_3 = L_16;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = ___data0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = V_3;
			int32_t L_19 = ___length1;
			Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_17, 0, (RuntimeArray *)(RuntimeArray *)L_18, 0, L_19, /*hidden argument*/NULL);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = V_3;
			PeerBase_SendNetworkSimulated_m7D75E76265B2773C2652CFCA910D81EC63BFF70B(__this, L_20, /*hidden argument*/NULL);
			goto IL_0089;
		}

IL_0079:
		{
			IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450 * L_21 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_PhotonSocket_3();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = ___data0;
			int32_t L_23 = ___length1;
			NullCheck(L_21);
			int32_t L_24;
			L_24 = VirtFuncInvoker2< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(6 /* ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.IPhotonSocket::Send(System.Byte[],System.Int32) */, L_21, L_22, L_23);
		}

IL_0089:
		{
			goto IL_00c2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008c;
		}
		throw e;
	}

CATCH_008c:
	{ // begin catch(System.Exception)
		{
			V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			uint8_t L_25;
			L_25 = PeerBase_get_debugOut_mB5C207AA32961864BEB55E582ABBB7263BCE9B66(__this, /*hidden argument*/NULL);
			V_5 = (bool)((((int32_t)((((int32_t)L_25) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_26 = V_5;
			if (!L_26)
			{
				goto IL_00b7;
			}
		}

IL_00a1:
		{
			RuntimeObject* L_27;
			L_27 = PeerBase_get_Listener_m1DCFEB26A1C6BE40D0EEE86403CD2DC06BA1C681(__this, /*hidden argument*/NULL);
			Exception_t * L_28 = V_4;
			NullCheck(L_28);
			String_t* L_29;
			L_29 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_28);
			NullCheck(L_27);
			InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IPhotonPeerListener_tE7041BC66B6BF1AA33D5AF6E25E984CDDF5A9E07_il2cpp_TypeInfo_var)), L_27, 1, L_29);
		}

IL_00b7:
		{
			Exception_t * L_30 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var)));
			SupportClass_WriteStackTrace_mD48BDF2B5DE3369F38344B2EAB4D4CB0D6A20011(L_30, /*hidden argument*/NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00c2;
		}
	} // end catch (depth: 1)

IL_00c2:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::ReceiveIncomingCommands(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_ReceiveIncomingCommands_m64AE6A605D4595A6AC816F2E871B2B2ACE7CD74B (TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inbuff0, int32_t ___dataLength1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonCodes_tE53B2AC61C3792AD7BB906424F243B342EB5E0D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m7970BCC9C6190DE84A9EAE57CF52472B3795380A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral919A195066BDFAFE43F7191F4F6DE66CCB82EF97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAF8F05C11CD4B88A9CDCF0903EAA82BF03A32B6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_7 = NULL;
	bool V_8 = false;
	Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B10_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___inbuff0;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		uint8_t L_2;
		L_2 = PeerBase_get_debugOut_mB5C207AA32961864BEB55E582ABBB7263BCE9B66(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		PeerBase_EnqueueDebugReturn_m676F69CDB0F8D8A0769317D956BFBD261131C56D(__this, 1, _stringLiteralAAF8F05C11CD4B88A9CDCF0903EAA82BF03A32B6, /*hidden argument*/NULL);
	}

IL_0029:
	{
		goto IL_0166;
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = SupportClass_GetTickCount_m9ABD9A7385EBFF006EB92D74B5B467FD5C0C9012(/*hidden argument*/NULL);
		((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->set_timestampOfLastReceive_21(L_4);
		int64_t L_5 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_bytesIn_24();
		int32_t L_6 = ___dataLength1;
		((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->set_bytesIn_24(((int64_t)il2cpp_codegen_add((int64_t)L_5, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)7)))))));
		bool L_7;
		L_7 = PeerBase_get_TrafficStatsEnabled_m8F3D3788A0FD1636063D2D95BE8D48061FC92BBA(__this, /*hidden argument*/NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0082;
		}
	}
	{
		TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * L_9;
		L_9 = PeerBase_get_TrafficStatsIncoming_m5F2EE48E5998705D7B9B78CF246C58C6BF56B2E1(__this, /*hidden argument*/NULL);
		TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * L_10 = L_9;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = TrafficStats_get_TotalPacketCount_mE015927A5D7C83F3CC6995555A1F3A6A154105A8_inline(L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		int32_t L_12 = V_3;
		NullCheck(L_10);
		TrafficStats_set_TotalPacketCount_m3CFB7931269E8D1C9AB2510F7AE2B1C05EF06B3D_inline(L_10, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)), /*hidden argument*/NULL);
		TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * L_13;
		L_13 = PeerBase_get_TrafficStatsIncoming_m5F2EE48E5998705D7B9B78CF246C58C6BF56B2E1(__this, /*hidden argument*/NULL);
		TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * L_14 = L_13;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = TrafficStats_get_TotalCommandsInPackets_m80ECAC905B710985007A4C48F9E74626BA99F6C5_inline(L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		int32_t L_16 = V_3;
		NullCheck(L_14);
		TrafficStats_set_TotalCommandsInPackets_m5AE4B9EDDDEF6027FC766797392726661FA54B44_inline(L_14, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0082:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = ___inbuff0;
		NullCheck(L_17);
		int32_t L_18 = 0;
		uint8_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = (bool)((((int32_t)L_19) == ((int32_t)((int32_t)243)))? 1 : 0);
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_010d;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = ___inbuff0;
		NullCheck(L_21);
		int32_t L_22 = 1;
		uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_5 = (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_23&(int32_t)((int32_t)127)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = ___inbuff0;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_6 = L_26;
		uint8_t L_27 = V_5;
		if ((!(((uint32_t)L_27) == ((uint32_t)7))))
		{
			goto IL_00b1;
		}
	}
	{
		uint8_t L_28 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonCodes_tE53B2AC61C3792AD7BB906424F243B342EB5E0D4_il2cpp_TypeInfo_var);
		uint8_t L_29 = ((PhotonCodes_tE53B2AC61C3792AD7BB906424F243B342EB5E0D4_StaticFields*)il2cpp_codegen_static_fields_for(PhotonCodes_tE53B2AC61C3792AD7BB906424F243B342EB5E0D4_il2cpp_TypeInfo_var))->get_Ping_4();
		G_B10_0 = ((((int32_t)L_28) == ((int32_t)L_29))? 1 : 0);
		goto IL_00b2;
	}

IL_00b1:
	{
		G_B10_0 = 0;
	}

IL_00b2:
	{
		V_8 = (bool)G_B10_0;
		bool L_30 = V_8;
		if (!L_30)
		{
			goto IL_00cb;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = ___inbuff0;
		StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * L_32 = (StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC *)il2cpp_codegen_object_new(StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC_il2cpp_TypeInfo_var);
		StreamBuffer__ctor_m18CBC08040B194E7AA12A461D2FAE4B5B25D42E6(L_32, L_31, /*hidden argument*/NULL);
		bool L_33;
		L_33 = VirtFuncInvoker1< bool, StreamBuffer_tF1CE453DAFF33FCC2C62927198A744370CDE1FEC * >::Invoke(16 /* System.Boolean ExitGames.Client.Photon.PeerBase::DeserializeMessageAndCallback(ExitGames.Client.Photon.StreamBuffer) */, __this, L_32);
		goto IL_0166;
	}

IL_00cb:
	{
		int32_t L_34 = ___dataLength1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_34);
		V_7 = L_35;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36 = ___inbuff0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_37 = V_7;
		int32_t L_38 = ___dataLength1;
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_36, 0, (RuntimeArray *)(RuntimeArray *)L_37, 0, L_38, /*hidden argument*/NULL);
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_39 = __this->get_incomingList_47();
		V_9 = L_39;
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_40 = V_9;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_40, /*hidden argument*/NULL);
	}

IL_00ef:
	try
	{ // begin try (depth: 1)
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_41 = __this->get_incomingList_47();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_42 = V_7;
		NullCheck(L_41);
		Queue_1_Enqueue_m7970BCC9C6190DE84A9EAE57CF52472B3795380A(L_41, L_42, /*hidden argument*/Queue_1_Enqueue_m7970BCC9C6190DE84A9EAE57CF52472B3795380A_RuntimeMethod_var);
		IL2CPP_LEAVE(0x10A, FINALLY_0101);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0101;
	}

FINALLY_0101:
	{ // begin finally (depth: 1)
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_43 = V_9;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_43, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(257)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(257)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x10A, IL_010a)
	}

IL_010a:
	{
		goto IL_0166;
	}

IL_010d:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_44 = ___inbuff0;
		NullCheck(L_44);
		int32_t L_45 = 0;
		uint8_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_10 = (bool)((((int32_t)L_46) == ((int32_t)((int32_t)240)))? 1 : 0);
		bool L_47 = V_10;
		if (!L_47)
		{
			goto IL_0138;
		}
	}
	{
		TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * L_48;
		L_48 = PeerBase_get_TrafficStatsIncoming_m5F2EE48E5998705D7B9B78CF246C58C6BF56B2E1(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_49 = ___inbuff0;
		NullCheck(L_49);
		NullCheck(L_48);
		TrafficStats_CountControlCommand_mE2F32C4D8EF6BFDD863C7B862C5EB903FE0367AE(L_48, ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length))), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_50 = ___inbuff0;
		TPeer_ReadPingResult_m03581F37A167C19D2D2E7F9331A2FE4C77E18BCF(__this, L_50, /*hidden argument*/NULL);
		goto IL_0166;
	}

IL_0138:
	{
		uint8_t L_51;
		L_51 = PeerBase_get_debugOut_mB5C207AA32961864BEB55E582ABBB7263BCE9B66(__this, /*hidden argument*/NULL);
		V_11 = (bool)((((int32_t)((((int32_t)L_51) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_52 = V_11;
		if (!L_52)
		{
			goto IL_0166;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_53 = ___inbuff0;
		NullCheck(L_53);
		int32_t L_54 = 0;
		uint8_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		uint8_t L_56 = L_55;
		RuntimeObject * L_57 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_56);
		String_t* L_58;
		L_58 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteral919A195066BDFAFE43F7191F4F6DE66CCB82EF97, L_57, /*hidden argument*/NULL);
		PeerBase_EnqueueDebugReturn_m676F69CDB0F8D8A0769317D956BFBD261131C56D(__this, 1, L_58, /*hidden argument*/NULL);
	}

IL_0166:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::ReadPingResult(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_ReadPingResult_m03581F37A167C19D2D2E7F9331A2FE4C77E18BCF (TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inbuff0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_tC5BEBC831E1E1605DDED083FF8603C5907AE9D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___inbuff0;
		IL2CPP_RUNTIME_CLASS_INIT(Protocol_tC5BEBC831E1E1605DDED083FF8603C5907AE9D7D_il2cpp_TypeInfo_var);
		Protocol_Deserialize_m3C9D0C997DE5CCC58A566C86C4878DBA72FC72A7((int32_t*)(&V_0), L_0, (int32_t*)(&V_2), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___inbuff0;
		Protocol_Deserialize_m3C9D0C997DE5CCC58A566C86C4878DBA72FC72A7((int32_t*)(&V_1), L_1, (int32_t*)(&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = SupportClass_GetTickCount_m9ABD9A7385EBFF006EB92D74B5B467FD5C0C9012(/*hidden argument*/NULL);
		int32_t L_3 = V_1;
		((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->set_lastRoundTripTime_17(((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)));
		bool L_4 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_serverTimeOffsetIsAvailable_14();
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_6 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_lastRoundTripTime_17();
		((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->set_roundTripTime_15(L_6);
	}

IL_0045:
	{
		int32_t L_7 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_lastRoundTripTime_17();
		PeerBase_UpdateRoundTripTimeAndVariance_m34177356E4AC29BBE0A5D4F47736AC2D5FF66626(__this, L_7, /*hidden argument*/NULL);
		bool L_8 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_serverTimeOffsetIsAvailable_14();
		V_4 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_lastRoundTripTime_17();
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = SupportClass_GetTickCount_m9ABD9A7385EBFF006EB92D74B5B467FD5C0C9012(/*hidden argument*/NULL);
		((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->set_serverTimeOffset_13(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)((int32_t)((int32_t)L_11>>(int32_t)1)))), (int32_t)L_12)));
		((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->set_serverTimeOffsetIsAvailable_14((bool)1);
	}

IL_0080:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::ReadPingResult(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_ReadPingResult_m997E4DDF2957179457551B6DDDC4BB9812EF0FC0 (TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2 * __this, OperationResponse_tAE1B48415762EE27262D2A378D7EA01589DDBBB9 * ___operationResponse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8EAE235A8AA510698BE04B4EC44DCA6979E58D29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		OperationResponse_tAE1B48415762EE27262D2A378D7EA01589DDBBB9 * L_0 = ___operationResponse0;
		NullCheck(L_0);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_1 = L_0->get_Parameters_3();
		NullCheck(L_1);
		RuntimeObject * L_2;
		L_2 = Dictionary_2_get_Item_m8EAE235A8AA510698BE04B4EC44DCA6979E58D29(L_1, (uint8_t)2, /*hidden argument*/Dictionary_2_get_Item_m8EAE235A8AA510698BE04B4EC44DCA6979E58D29_RuntimeMethod_var);
		V_0 = ((*(int32_t*)((int32_t*)UnBox(L_2, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
		OperationResponse_tAE1B48415762EE27262D2A378D7EA01589DDBBB9 * L_3 = ___operationResponse0;
		NullCheck(L_3);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_4 = L_3->get_Parameters_3();
		NullCheck(L_4);
		RuntimeObject * L_5;
		L_5 = Dictionary_2_get_Item_m8EAE235A8AA510698BE04B4EC44DCA6979E58D29(L_4, (uint8_t)1, /*hidden argument*/Dictionary_2_get_Item_m8EAE235A8AA510698BE04B4EC44DCA6979E58D29_RuntimeMethod_var);
		V_1 = ((*(int32_t*)((int32_t*)UnBox(L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = SupportClass_GetTickCount_m9ABD9A7385EBFF006EB92D74B5B467FD5C0C9012(/*hidden argument*/NULL);
		int32_t L_7 = V_1;
		((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->set_lastRoundTripTime_17(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7)));
		bool L_8 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_serverTimeOffsetIsAvailable_14();
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_10 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_lastRoundTripTime_17();
		((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->set_roundTripTime_15(L_10);
	}

IL_004d:
	{
		int32_t L_11 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_lastRoundTripTime_17();
		PeerBase_UpdateRoundTripTimeAndVariance_m34177356E4AC29BBE0A5D4F47736AC2D5FF66626(__this, L_11, /*hidden argument*/NULL);
		bool L_12 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_serverTimeOffsetIsAvailable_14();
		V_3 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->get_lastRoundTripTime_17();
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		int32_t L_16;
		L_16 = SupportClass_GetTickCount_m9ABD9A7385EBFF006EB92D74B5B467FD5C0C9012(/*hidden argument*/NULL);
		((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->set_serverTimeOffset_13(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)((int32_t)((int32_t)L_15>>(int32_t)1)))), (int32_t)L_16)));
		((PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E *)__this)->set_serverTimeOffsetIsAvailable_14((bool)1);
	}

IL_0086:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer__cctor_m0A23DAE36577D30F1CEE57A09C37BFF8E5BD9648 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tB1C5C8E3240FE7BDACAA801F7D131056ACA33838____6668D4903321030E42A6CE59AB96ADD9D0214FAC_2_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB1C5C8E3240FE7BDACAA801F7D131056ACA33838____6668D4903321030E42A6CE59AB96ADD9D0214FAC_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2_StaticFields*)il2cpp_codegen_static_fields_for(TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2_il2cpp_TypeInfo_var))->set_tcpFramedMessageHead_51(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)243));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)2);
		((TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2_StaticFields*)il2cpp_codegen_static_fields_for(TPeer_t30EA9083D6DC6DDE0C717AAD560FACD9EEED0FD2_il2cpp_TypeInfo_var))->set_tcpMsgHead_52(L_5);
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
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_PackageHeaderSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_PackageHeaderSize_mB017BAC94EF63BECD84CB481AABC4289F730FD52 (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CPackageHeaderSizeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_PackageHeaderSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_PackageHeaderSize_m629EA88CE88D1D789514B9C29CADDB7BFE3EEEB8 (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CPackageHeaderSizeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandCount_m472DFAF2E34589749224D616AC8D47BF4843A630 (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReliableCommandCountU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandCount_mA40960EA03CDFBCCF5BC8B44C40457B00F86E086 (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CReliableCommandCountU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandCount_mCBA1C05C361436F087E46C091431822B17BED70F (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CUnreliableCommandCountU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandCount_m672E7A069071E1CD0034DCE5756B74EB6AA141DB (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CUnreliableCommandCountU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandCount_mEDE6B288153489A720CED23BAA3DA931A69B0C73 (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CFragmentCommandCountU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandCount_m18BC1184FFBBDACAF2D17DB72EF76DC72EE05876 (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CFragmentCommandCountU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandCount_mB9D4A64BDA2ACFB1A56E557D54F02058166EE6DD (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CControlCommandCountU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandCount_m16832B6129692177B3B74081CA123A313E91CD44 (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CControlCommandCountU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalPacketCount_mE015927A5D7C83F3CC6995555A1F3A6A154105A8 (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTotalPacketCountU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalPacketCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_TotalPacketCount_m3CFB7931269E8D1C9AB2510F7AE2B1C05EF06B3D (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTotalPacketCountU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandsInPackets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalCommandsInPackets_m80ECAC905B710985007A4C48F9E74626BA99F6C5 (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTotalCommandsInPacketsU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalCommandsInPackets(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_TotalCommandsInPackets_m5AE4B9EDDDEF6027FC766797392726661FA54B44 (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTotalCommandsInPacketsU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandBytes_m3C2A887D6C82747DD5AC700B3A37C9A5DCC829BB (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReliableCommandBytesU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandBytes_m95BCBE6564514DD194D5BC756C37780DA704BAC0 (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CReliableCommandBytesU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandBytes_m5BBE27DD24E1342E13AFF3B9E004EC14FC14D2DB (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CUnreliableCommandBytesU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandBytes_mEE5260D4BAE8902322E5B9DAABE37D478DF81F27 (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CUnreliableCommandBytesU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandBytes_m1F3C837FF7B6EFEA99200911BCC1FB98B5675A36 (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CFragmentCommandBytesU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandBytes_m3D74AACBAC53D6F1B9FB1D2DDA6518614B94EA53 (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CFragmentCommandBytesU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandBytes_mE1A2ED6660E5461C485A31CEF992F83FB276D9CA (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CControlCommandBytesU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandBytes_mBC8E2A1FFD5F68EC38657FC2E7040EB3261069E5 (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CControlCommandBytesU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats__ctor_m77BEBAC471C5503691A05E4C95E5E5E97298BB5A (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___packageHeaderSize0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___packageHeaderSize0;
		TrafficStats_set_PackageHeaderSize_m629EA88CE88D1D789514B9C29CADDB7BFE3EEEB8_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalCommandBytes_mF4AE201B413BF80FD1A61BBE792DDCF61B553D41 (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStats_get_ReliableCommandBytes_m3C2A887D6C82747DD5AC700B3A37C9A5DCC829BB_inline(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = TrafficStats_get_UnreliableCommandBytes_m5BBE27DD24E1342E13AFF3B9E004EC14FC14D2DB_inline(__this, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = TrafficStats_get_FragmentCommandBytes_m1F3C837FF7B6EFEA99200911BCC1FB98B5675A36_inline(__this, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = TrafficStats_get_ControlCommandBytes_mE1A2ED6660E5461C485A31CEF992F83FB276D9CA_inline(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), (int32_t)L_2)), (int32_t)L_3));
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalPacketBytes_mD6F0AF8743A19E389FE5A3CE54D592295C73FC6D (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStats_get_TotalCommandBytes_mF4AE201B413BF80FD1A61BBE792DDCF61B553D41(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = TrafficStats_get_TotalPacketCount_mE015927A5D7C83F3CC6995555A1F3A6A154105A8_inline(__this, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = TrafficStats_get_PackageHeaderSize_mB017BAC94EF63BECD84CB481AABC4289F730FD52_inline(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_2))));
		goto IL_0018;
	}

IL_0018:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_TimestampOfLastAck(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_TimestampOfLastAck_m5F7715C799D76D91C06A060A7A11FA2173CFB8B0 (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTimestampOfLastAckU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_TimestampOfLastReliableCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_TimestampOfLastReliableCommand_mF6A130EF0F315A9289C89AA993DBDD17AC815BFF (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTimestampOfLastReliableCommandU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::CountControlCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountControlCommand_mE2F32C4D8EF6BFDD863C7B862C5EB903FE0367AE (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStats_get_ControlCommandBytes_mE1A2ED6660E5461C485A31CEF992F83FB276D9CA_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___size0;
		TrafficStats_set_ControlCommandBytes_mBC8E2A1FFD5F68EC38657FC2E7040EB3261069E5_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = TrafficStats_get_ControlCommandCount_mB9D4A64BDA2ACFB1A56E557D54F02058166EE6DD_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStats_set_ControlCommandCount_m16832B6129692177B3B74081CA123A313E91CD44_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::CountReliableOpCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountReliableOpCommand_m01CD502B04E64A7473DC5DD7149A6BDB74774AB9 (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStats_get_ReliableCommandBytes_m3C2A887D6C82747DD5AC700B3A37C9A5DCC829BB_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___size0;
		TrafficStats_set_ReliableCommandBytes_m95BCBE6564514DD194D5BC756C37780DA704BAC0_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = TrafficStats_get_ReliableCommandCount_m472DFAF2E34589749224D616AC8D47BF4843A630_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStats_set_ReliableCommandCount_mA40960EA03CDFBCCF5BC8B44C40457B00F86E086_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::CountUnreliableOpCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountUnreliableOpCommand_m12897AA8891D616B0125A622778D7AC72E6E56C0 (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStats_get_UnreliableCommandBytes_m5BBE27DD24E1342E13AFF3B9E004EC14FC14D2DB_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___size0;
		TrafficStats_set_UnreliableCommandBytes_mEE5260D4BAE8902322E5B9DAABE37D478DF81F27_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = TrafficStats_get_UnreliableCommandCount_mCBA1C05C361436F087E46C091431822B17BED70F_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStats_set_UnreliableCommandCount_m672E7A069071E1CD0034DCE5756B74EB6AA141DB_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::CountFragmentOpCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountFragmentOpCommand_m95124C89A1805D623DAF57046EC1D4475B05F149 (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStats_get_FragmentCommandBytes_m1F3C837FF7B6EFEA99200911BCC1FB98B5675A36_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___size0;
		TrafficStats_set_FragmentCommandBytes_m3D74AACBAC53D6F1B9FB1D2DDA6518614B94EA53_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = TrafficStats_get_FragmentCommandCount_mEDE6B288153489A720CED23BAA3DA931A69B0C73_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStats_set_FragmentCommandCount_m18BC1184FFBBDACAF2D17DB72EF76DC72EE05876_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.String ExitGames.Client.Photon.TrafficStats::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrafficStats_ToString_mE7DF316374CAAA7674E7AD54335C04546E042789 (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF09647061E14A6AB82D0FE232AB0BC1838440C6D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		int32_t L_2;
		L_2 = TrafficStats_get_TotalPacketBytes_mD6F0AF8743A19E389FE5A3CE54D592295C73FC6D(__this, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_1;
		int32_t L_6;
		L_6 = TrafficStats_get_TotalCommandBytes_mF4AE201B413BF80FD1A61BBE792DDCF61B553D41(__this, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_5;
		int32_t L_10;
		L_10 = TrafficStats_get_TotalPacketCount_mE015927A5D7C83F3CC6995555A1F3A6A154105A8_inline(__this, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_9;
		int32_t L_14;
		L_14 = TrafficStats_get_TotalCommandsInPackets_m80ECAC905B710985007A4C48F9E74626BA99F6C5_inline(__this, /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		String_t* L_17;
		L_17 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteralF09647061E14A6AB82D0FE232AB0BC1838440C6D, L_13, /*hidden argument*/NULL);
		V_0 = L_17;
		goto IL_004c;
	}

IL_004c:
	{
		String_t* L_18 = V_0;
		return L_18;
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
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_OperationByteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationByteCount_mB64819EFCB70B6572CFBE4E1515138C1B2FCF581 (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3COperationByteCountU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_OperationByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationByteCount_mEDB98137732D5E621BA1BA643E329227259E1DAA (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3COperationByteCountU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_OperationCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationCount_mE7CE76E1D7A0AF79321923D3E919312258C8FE4F (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3COperationCountU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_OperationCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationCount_m297655F7E10B3E0F0B13C5EA462617743B66B142 (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3COperationCountU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_ResultByteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultByteCount_m2653884EC6249526DEDCFDC8B84261891FA92DB4 (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CResultByteCountU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_ResultByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultByteCount_m64FDA75C563C79CD52F5ACBCBA10F5D789EF90A0 (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CResultByteCountU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_ResultCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultCount_m1459D5FC1B895A843319C41876EC39BA5543D53D (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CResultCountU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_ResultCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultCount_mE73872DDF66BE2774DB8EFFAC85695D68259E861 (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CResultCountU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_EventByteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventByteCount_m92B49AB91772BB93DA89415377959EF2D08F2364 (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CEventByteCountU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_EventByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventByteCount_m0CC6103A37777150CC1BAD50C677E49377116657 (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CEventByteCountU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_EventCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventCount_m1E8D33401FF5A990C3B0A49D6D82A9A20E97BFD0 (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CEventCountU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_EventCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventCount_mD29E0AC16A1664F6E53C02376102D0641314FAE6 (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CEventCountU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestOpResponseCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestOpResponseCallback_m4F647D059F912765CDB7CF638A8AAF1ACAD92103 (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestOpResponseCallbackU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestOpResponseCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallback_m1FD030542D606D20E6D85B7BC9BC651ED078D2EC (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestOpResponseCallbackU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestOpResponseCallbackOpCode(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m9BB3DB3CB2CB11ADC1ACC5BBB01CA519307072CC (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestEventCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestEventCallback_mB4D58DB2D26D19CC3ADF7F1823CDC7A1176269FD (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestEventCallbackU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestEventCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallback_m903E43D16BF2BF993A00703639BBF2DA907AE95C (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestEventCallbackU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestMessageCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestMessageCallback_m468BA5CAB531399A069CB10E78F4E6FA09749585 (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestMessageCallbackU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestMessageCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestMessageCallback_m318984DDF76D09D7CEA1B55058B943E09DBB8CEA (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestMessageCallbackU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestRawMessageCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestRawMessageCallback_mF5772661A2462E874AB2E42FB54DE7A53E037FC0 (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestRawMessageCallbackU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestRawMessageCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestRawMessageCallback_mBA68F54737D0469F336800B225B2763D13338F8C (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestRawMessageCallbackU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestEventCallbackCode(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallbackCode_m5A0E46AA270DE92380201706B2263E35343AB21D (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_U3CLongestEventCallbackCodeU3Ek__BackingField_13(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenDispatching()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m0015D2B4A9D8D1033C690F1CC39DBA4F5EEE6012 (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestDeltaBetweenDispatching(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_m809211B35F40E1353F14E1C98445F77CA1F295DC (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenSending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m9B503973DE53D4DBDCD95F1B6DC0D47884605B13 (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestDeltaBetweenSending(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m31F1FF20EFE1B569B5C9CC1BAE7920F2D4219A38 (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_DispatchIncomingCommandsCalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_mC35B5253CF22E6E5FD1C791796AE22F56DDEB4A4 (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_DispatchIncomingCommandsCalls(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_m31072490D8A152338F9BFB699E34F4FBECA78150 (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_SendOutgoingCommandsCalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m1DBA253FEDA2BEEFE80D33F37B2D4B6B950E3DE3 (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_SendOutgoingCommandsCalls(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_m004140F666BCF1D4030D2E0EC61B03EA599F7C3A (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::CountOperation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_CountOperation_mAB20D5FB2AFEE0EC8203088578F0BC2BF726CF97 (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___operationBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStatsGameLevel_get_OperationByteCount_mB64819EFCB70B6572CFBE4E1515138C1B2FCF581_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___operationBytes0;
		TrafficStatsGameLevel_set_OperationByteCount_mEDB98137732D5E621BA1BA643E329227259E1DAA_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = TrafficStatsGameLevel_get_OperationCount_mE7CE76E1D7A0AF79321923D3E919312258C8FE4F_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStatsGameLevel_set_OperationCount_m297655F7E10B3E0F0B13C5EA462617743B66B142_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::CountResult(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_CountResult_mE33DE5CA8C71F59CCC7249E5E36C5828373F15CC (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___resultBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStatsGameLevel_get_ResultByteCount_m2653884EC6249526DEDCFDC8B84261891FA92DB4_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___resultBytes0;
		TrafficStatsGameLevel_set_ResultByteCount_m64FDA75C563C79CD52F5ACBCBA10F5D789EF90A0_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = TrafficStatsGameLevel_get_ResultCount_m1459D5FC1B895A843319C41876EC39BA5543D53D_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStatsGameLevel_set_ResultCount_mE73872DDF66BE2774DB8EFFAC85695D68259E861_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::CountEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_CountEvent_m2162A4B5141648A8115F5A225A45769DFFFFAB4F (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___eventBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStatsGameLevel_get_EventByteCount_m92B49AB91772BB93DA89415377959EF2D08F2364_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___eventBytes0;
		TrafficStatsGameLevel_set_EventByteCount_m0CC6103A37777150CC1BAD50C677E49377116657_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = TrafficStatsGameLevel_get_EventCount_m1E8D33401FF5A990C3B0A49D6D82A9A20E97BFD0_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStatsGameLevel_set_EventCount_mD29E0AC16A1664F6E53C02376102D0641314FAE6_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::TimeForResponseCallback(System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_TimeForResponseCallback_mCCEEF2C10982F195CBBAA4C75934FA1483794D3C (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, uint8_t ___code0, int32_t ___time1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___time1;
		int32_t L_1;
		L_1 = TrafficStatsGameLevel_get_LongestOpResponseCallback_m4F647D059F912765CDB7CF638A8AAF1ACAD92103_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___time1;
		TrafficStatsGameLevel_set_LongestOpResponseCallback_m1FD030542D606D20E6D85B7BC9BC651ED078D2EC_inline(__this, L_3, /*hidden argument*/NULL);
		uint8_t L_4 = ___code0;
		TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m9BB3DB3CB2CB11ADC1ACC5BBB01CA519307072CC_inline(__this, L_4, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::TimeForEventCallback(System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_TimeForEventCallback_m1660B6D7AF87710B3B3DC83DF0EE248C19CE4E8C (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, uint8_t ___code0, int32_t ___time1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___time1;
		int32_t L_1;
		L_1 = TrafficStatsGameLevel_get_LongestEventCallback_mB4D58DB2D26D19CC3ADF7F1823CDC7A1176269FD_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___time1;
		TrafficStatsGameLevel_set_LongestEventCallback_m903E43D16BF2BF993A00703639BBF2DA907AE95C_inline(__this, L_3, /*hidden argument*/NULL);
		uint8_t L_4 = ___code0;
		TrafficStatsGameLevel_set_LongestEventCallbackCode_m5A0E46AA270DE92380201706B2263E35343AB21D_inline(__this, L_4, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::TimeForMessageCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_TimeForMessageCallback_mEBB1374E65CB685FC631B061976DD328A4FA1518 (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___time0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___time0;
		int32_t L_1;
		L_1 = TrafficStatsGameLevel_get_LongestMessageCallback_m468BA5CAB531399A069CB10E78F4E6FA09749585_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___time0;
		TrafficStatsGameLevel_set_LongestMessageCallback_m318984DDF76D09D7CEA1B55058B943E09DBB8CEA_inline(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::TimeForRawMessageCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_TimeForRawMessageCallback_m6C9D5B7DB1BBA50F48BA217C500E9B75E02982DA (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___time0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___time0;
		int32_t L_1;
		L_1 = TrafficStatsGameLevel_get_LongestRawMessageCallback_mF5772661A2462E874AB2E42FB54DE7A53E037FC0_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___time0;
		TrafficStatsGameLevel_set_LongestRawMessageCallback_mBA68F54737D0469F336800B225B2763D13338F8C_inline(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::DispatchIncomingCommandsCalled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_DispatchIncomingCommandsCalled_m012E3AF21682B9B91C92E89F1F763DF6ADA7BEF7 (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_timeOfLastDispatchCall_0();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = SupportClass_GetTickCount_m9ABD9A7385EBFF006EB92D74B5B467FD5C0C9012(/*hidden argument*/NULL);
		int32_t L_3 = __this->get_timeOfLastDispatchCall_0();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3));
		int32_t L_4 = V_1;
		int32_t L_5;
		L_5 = TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m0015D2B4A9D8D1033C690F1CC39DBA4F5EEE6012_inline(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = V_1;
		TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_m809211B35F40E1353F14E1C98445F77CA1F295DC_inline(__this, L_7, /*hidden argument*/NULL);
	}

IL_0033:
	{
	}

IL_0034:
	{
		int32_t L_8;
		L_8 = TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_mC35B5253CF22E6E5FD1C791796AE22F56DDEB4A4_inline(__this, /*hidden argument*/NULL);
		V_3 = L_8;
		int32_t L_9 = V_3;
		TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_m31072490D8A152338F9BFB699E34F4FBECA78150_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = SupportClass_GetTickCount_m9ABD9A7385EBFF006EB92D74B5B467FD5C0C9012(/*hidden argument*/NULL);
		__this->set_timeOfLastDispatchCall_0(L_10);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::SendOutgoingCommandsCalled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_SendOutgoingCommandsCalled_mC6D5374CC943A60A06BF802BD4F163DC2662473E (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_timeOfLastSendCall_1();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = SupportClass_GetTickCount_m9ABD9A7385EBFF006EB92D74B5B467FD5C0C9012(/*hidden argument*/NULL);
		int32_t L_3 = __this->get_timeOfLastSendCall_1();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3));
		int32_t L_4 = V_1;
		int32_t L_5;
		L_5 = TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m9B503973DE53D4DBDCD95F1B6DC0D47884605B13_inline(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = V_1;
		TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m31F1FF20EFE1B569B5C9CC1BAE7920F2D4219A38_inline(__this, L_7, /*hidden argument*/NULL);
	}

IL_0033:
	{
	}

IL_0034:
	{
		int32_t L_8;
		L_8 = TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m1DBA253FEDA2BEEFE80D33F37B2D4B6B950E3DE3_inline(__this, /*hidden argument*/NULL);
		V_3 = L_8;
		int32_t L_9 = V_3;
		TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_m004140F666BCF1D4030D2E0EC61B03EA599F7C3A_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = SupportClass_GetTickCount_m9ABD9A7385EBFF006EB92D74B5B467FD5C0C9012(/*hidden argument*/NULL);
		__this->set_timeOfLastSendCall_1(L_10);
		return;
	}
}
// System.String ExitGames.Client.Photon.TrafficStatsGameLevel::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrafficStatsGameLevel_ToString_mB460AE147F1C0B5FF727BB371C3F8A89FB759BDC (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral908BEA1D5D8065EACBEE7F2EC16BAE6A218408FB);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0;
		L_0 = TrafficStatsGameLevel_get_OperationByteCount_mB64819EFCB70B6572CFBE4E1515138C1B2FCF581_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3;
		L_3 = TrafficStatsGameLevel_get_ResultByteCount_m2653884EC6249526DEDCFDC8B84261891FA92DB4_inline(__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6;
		L_6 = TrafficStatsGameLevel_get_EventByteCount_m92B49AB91772BB93DA89415377959EF2D08F2364_inline(__this, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral908BEA1D5D8065EACBEE7F2EC16BAE6A218408FB, L_2, L_5, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_002f;
	}

IL_002f:
	{
		String_t* L_10 = V_0;
		return L_10;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel__ctor_mF382E40E0CD2D51F4B9D69083000E776E852BC45 (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void ExitGames.Client.Photon.Version::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__cctor_m8296030FBE715AA7F3AF4A168B1E9056206ACD32 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tB1C5C8E3240FE7BDACAA801F7D131056ACA33838____BDD25AA451AB045AA8B8B8A3D219233235E2305B_4_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tE02BCCBEBFC3C855DC5B2D605B5C24F1831FA756_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB1C5C8E3240FE7BDACAA801F7D131056ACA33838____BDD25AA451AB045AA8B8B8A3D219233235E2305B_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((Version_tE02BCCBEBFC3C855DC5B2D605B5C24F1831FA756_StaticFields*)il2cpp_codegen_static_fields_for(Version_tE02BCCBEBFC3C855DC5B2D605B5C24F1831FA756_il2cpp_TypeInfo_var))->set_clientVersion_0(L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Client.Photon.IPhotonSocket/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m46BA75B87082F023EA1D76BFBADACA32A1246C58 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB89977FB627163CFBA741E910E7E398AA25B3A8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB89977FB627163CFBA741E910E7E398AA25B3A8B * L_0 = (U3CU3Ec_tB89977FB627163CFBA741E910E7E398AA25B3A8B *)il2cpp_codegen_object_new(U3CU3Ec_tB89977FB627163CFBA741E910E7E398AA25B3A8B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB54933CAC49CEFE56FB6DB70940682194AF13AA7(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB89977FB627163CFBA741E910E7E398AA25B3A8B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB89977FB627163CFBA741E910E7E398AA25B3A8B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.IPhotonSocket/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB54933CAC49CEFE56FB6DB70940682194AF13AA7 (U3CU3Ec_tB89977FB627163CFBA741E910E7E398AA25B3A8B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String ExitGames.Client.Photon.IPhotonSocket/<>c::<GetIpAddresses>b__50_0(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetIpAddressesU3Eb__50_0_m026EB0C9053FC8526E26EFC743C5EB4702C922BA (U3CU3Ec_tB89977FB627163CFBA741E910E7E398AA25B3A8B * __this, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_2 = ___x0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_6 = ___x0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline(L_6, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_5;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_11;
		L_11 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_10, /*hidden argument*/NULL);
		return L_11;
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
// System.Void ExitGames.Client.Photon.PeerBase/<>c__DisplayClass104_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass104_0__ctor_m3AC85D2DFCDC00980F9B3AEA215C1D011CBD28AF (U3CU3Ec__DisplayClass104_0_t4C95060B628C5F305CE87721EF1DE6452F9BD841 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.PeerBase/<>c__DisplayClass104_0::<EnqueueDebugReturn>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass104_0_U3CEnqueueDebugReturnU3Eb__0_mB154DE3AE830D4F32274036C60E8E7589074E5CF (U3CU3Ec__DisplayClass104_0_t4C95060B628C5F305CE87721EF1DE6452F9BD841 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_tE7041BC66B6BF1AA33D5AF6E25E984CDDF5A9E07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * L_0 = __this->get_U3CU3E4__this_2();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = PeerBase_get_Listener_m1DCFEB26A1C6BE40D0EEE86403CD2DC06BA1C681(L_0, /*hidden argument*/NULL);
		uint8_t L_2 = __this->get_level_0();
		String_t* L_3 = __this->get_debugReturn_1();
		NullCheck(L_1);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tE7041BC66B6BF1AA33D5AF6E25E984CDDF5A9E07_il2cpp_TypeInfo_var, L_1, L_2, L_3);
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
// System.Void ExitGames.Client.Photon.PeerBase/<>c__DisplayClass105_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass105_0__ctor_m7E54F65E4EA3FCA4AC2574C0DDFF0CD160C4F655 (U3CU3Ec__DisplayClass105_0_t691800BBB8BD0790F9236EBE594D75C9111D712B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.PeerBase/<>c__DisplayClass105_0::<EnqueueStatusCallback>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass105_0_U3CEnqueueStatusCallbackU3Eb__0_m67671984A8D50893050D5B0B93A20678BF9CA42E (U3CU3Ec__DisplayClass105_0_t691800BBB8BD0790F9236EBE594D75C9111D712B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_tE7041BC66B6BF1AA33D5AF6E25E984CDDF5A9E07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * L_0 = __this->get_U3CU3E4__this_1();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = PeerBase_get_Listener_m1DCFEB26A1C6BE40D0EEE86403CD2DC06BA1C681(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_statusValue_0();
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::OnStatusChanged(ExitGames.Client.Photon.StatusCode) */, IPhotonPeerListener_tE7041BC66B6BF1AA33D5AF6E25E984CDDF5A9E07_il2cpp_TypeInfo_var, L_1, L_2);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MyAction_t999C526EA1710EB0A054212C5495A3A286E2B5A7 (MyAction_t999C526EA1710EB0A054212C5495A3A286E2B5A7 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyAction__ctor_mB8AED83465187F3390933B44BE20506A07CA3EC6 (MyAction_t999C526EA1710EB0A054212C5495A3A286E2B5A7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyAction_Invoke_mC7066013EF06857D846113377E2E32A757042FF6 (MyAction_t999C526EA1710EB0A054212C5495A3A286E2B5A7 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult ExitGames.Client.Photon.PeerBase/MyAction::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MyAction_BeginInvoke_m21A5357DED930CA06E56B7D7445B7F69B06D0BB1 (MyAction_t999C526EA1710EB0A054212C5495A3A286E2B5A7 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyAction_EndInvoke_m8D3E3616C2111513F046C83E8FA3D02F3EC5A48A (MyAction_t999C526EA1710EB0A054212C5495A3A286E2B5A7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Client.Photon.SupportClass/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA1015AC362BBA7BD3FED4E32248DE476E2462839 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB8255EE4323FA3DA77B2CAD19B56F38688143AD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB8255EE4323FA3DA77B2CAD19B56F38688143AD1 * L_0 = (U3CU3Ec_tB8255EE4323FA3DA77B2CAD19B56F38688143AD1 *)il2cpp_codegen_object_new(U3CU3Ec_tB8255EE4323FA3DA77B2CAD19B56F38688143AD1_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB738A6B0DFB96F5185C25C5E24ACA274A3522556(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB8255EE4323FA3DA77B2CAD19B56F38688143AD1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB8255EE4323FA3DA77B2CAD19B56F38688143AD1_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB738A6B0DFB96F5185C25C5E24ACA274A3522556 (U3CU3Ec_tB8255EE4323FA3DA77B2CAD19B56F38688143AD1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.SupportClass/<>c::<.cctor>b__20_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__20_0_mAA27F56F08D89303BE04C2D65E003909F6202508 (U3CU3Ec_tB8255EE4323FA3DA77B2CAD19B56F38688143AD1 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E(/*hidden argument*/NULL);
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
// System.Void ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m7D6A2EBC8882B7D0774C7C377E76CF894825D1CA (U3CU3Ec__DisplayClass6_0_t24E2D9FF9DF170096AE55682917C60F08A7E2BFA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::<StartBackgroundCalls>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CStartBackgroundCallsU3Eb__0_m02C07252B3BE448DB18DAAB0996ED91D637B7CBA (U3CU3Ec__DisplayClass6_0_t24E2D9FF9DF170096AE55682917C60F08A7E2BFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0012;
		}

IL_0004:
		{
			int32_t L_0 = __this->get_millisecondsInterval_0();
			Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC(L_0, /*hidden argument*/NULL);
		}

IL_0012:
		{
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_1 = __this->get_myThread_1();
			NullCheck(L_1);
			bool L_2;
			L_2 = Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4(L_1, /*hidden argument*/Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var);
			V_0 = L_2;
			bool L_3 = V_0;
			if (L_3)
			{
				goto IL_0004;
			}
		}

IL_0021:
		{
			goto IL_0029;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0024;
		}
		throw e;
	}

CATCH_0024:
	{ // begin catch(System.Threading.ThreadAbortException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	} // end catch (depth: 1)

IL_0029:
	{
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
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_IntegerMillisecondsDelegate_t958909BBBB5EE26474934A254FAC11B1C5BE4567 (IntegerMillisecondsDelegate_t958909BBBB5EE26474934A254FAC11B1C5BE4567 * __this, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegerMillisecondsDelegate__ctor_m138899B61ACAC535B706D6892E8E28EAC8AD4A60 (IntegerMillisecondsDelegate_t958909BBBB5EE26474934A254FAC11B1C5BE4567 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntegerMillisecondsDelegate_Invoke_m196327B8AE60B153F6454C50145FC7BBDFF7EB42 (IntegerMillisecondsDelegate_t958909BBBB5EE26474934A254FAC11B1C5BE4567 * __this, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef int32_t (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< int32_t >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< int32_t >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IntegerMillisecondsDelegate_BeginInvoke_m7C72AE0B1896A4F7E2ECD8A38F1136A56AD64A06 (IntegerMillisecondsDelegate_t958909BBBB5EE26474934A254FAC11B1C5BE4567 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Int32 ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntegerMillisecondsDelegate_EndInvoke_mFE6503557A480D150CB7A5C6DBFA224F8F43459B (IntegerMillisecondsDelegate_t958909BBBB5EE26474934A254FAC11B1C5BE4567 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 ExitGames.Client.Photon.SupportClass/ThreadSafeRandom::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ThreadSafeRandom_Next_mDEC3950E20230F36262449ECE299E79F47C471B7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadSafeRandom_tA68B671F85FF4A73E10BF8162827618D6BDCBCD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ThreadSafeRandom_tA68B671F85FF4A73E10BF8162827618D6BDCBCD7_il2cpp_TypeInfo_var);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = ((ThreadSafeRandom_tA68B671F85FF4A73E10BF8162827618D6BDCBCD7_StaticFields*)il2cpp_codegen_static_fields_for(ThreadSafeRandom_tA68B671F85FF4A73E10BF8162827618D6BDCBCD7_il2cpp_TypeInfo_var))->get__r_0();
		V_0 = L_0;
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(ThreadSafeRandom_tA68B671F85FF4A73E10BF8162827618D6BDCBCD7_il2cpp_TypeInfo_var);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_2 = ((ThreadSafeRandom_tA68B671F85FF4A73E10BF8162827618D6BDCBCD7_StaticFields*)il2cpp_codegen_static_fields_for(ThreadSafeRandom_tA68B671F85FF4A73E10BF8162827618D6BDCBCD7_il2cpp_TypeInfo_var))->get__r_0();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Random::Next() */, L_2);
		V_1 = L_3;
		IL2CPP_LEAVE(0x24, FINALLY_001c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001c;
	}

FINALLY_001c:
	{ // begin finally (depth: 1)
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_4 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(28)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(28)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x24, IL_0024)
	}

IL_0024:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass/ThreadSafeRandom::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadSafeRandom__cctor_m92CD487ECABE930FF50E69ADD00EF784B76AD28F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadSafeRandom_tA68B671F85FF4A73E10BF8162827618D6BDCBCD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_0, /*hidden argument*/NULL);
		((ThreadSafeRandom_tA68B671F85FF4A73E10BF8162827618D6BDCBCD7_StaticFields*)il2cpp_codegen_static_fields_for(ThreadSafeRandom_tA68B671F85FF4A73E10BF8162827618D6BDCBCD7_il2cpp_TypeInfo_var))->set__r_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PeerBase_set_ServerAddress_m382F91B33DF6DEAEBB5191B9C6AB34049FD616CD_inline (PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CServerAddressU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PeerBase_get_ServerAddress_mA7E7F80FEE805DBB212AF7E558A2845131FDDB54_inline (PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CServerAddressU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalPacketCount_mE015927A5D7C83F3CC6995555A1F3A6A154105A8_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTotalPacketCountU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_TotalPacketCount_m3CFB7931269E8D1C9AB2510F7AE2B1C05EF06B3D_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTotalPacketCountU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalCommandsInPackets_m80ECAC905B710985007A4C48F9E74626BA99F6C5_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTotalCommandsInPacketsU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_TotalCommandsInPackets_m5AE4B9EDDDEF6027FC766797392726661FA54B44_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTotalCommandsInPacketsU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_PackageHeaderSize_m629EA88CE88D1D789514B9C29CADDB7BFE3EEEB8_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CPackageHeaderSizeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandBytes_m3C2A887D6C82747DD5AC700B3A37C9A5DCC829BB_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReliableCommandBytesU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandBytes_m5BBE27DD24E1342E13AFF3B9E004EC14FC14D2DB_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CUnreliableCommandBytesU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandBytes_m1F3C837FF7B6EFEA99200911BCC1FB98B5675A36_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CFragmentCommandBytesU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandBytes_mE1A2ED6660E5461C485A31CEF992F83FB276D9CA_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CControlCommandBytesU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_PackageHeaderSize_mB017BAC94EF63BECD84CB481AABC4289F730FD52_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CPackageHeaderSizeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandBytes_mBC8E2A1FFD5F68EC38657FC2E7040EB3261069E5_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CControlCommandBytesU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandCount_mB9D4A64BDA2ACFB1A56E557D54F02058166EE6DD_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CControlCommandCountU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandCount_m16832B6129692177B3B74081CA123A313E91CD44_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CControlCommandCountU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandBytes_m95BCBE6564514DD194D5BC756C37780DA704BAC0_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CReliableCommandBytesU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandCount_m472DFAF2E34589749224D616AC8D47BF4843A630_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReliableCommandCountU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandCount_mA40960EA03CDFBCCF5BC8B44C40457B00F86E086_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CReliableCommandCountU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandBytes_mEE5260D4BAE8902322E5B9DAABE37D478DF81F27_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CUnreliableCommandBytesU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandCount_mCBA1C05C361436F087E46C091431822B17BED70F_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CUnreliableCommandCountU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandCount_m672E7A069071E1CD0034DCE5756B74EB6AA141DB_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CUnreliableCommandCountU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandBytes_m3D74AACBAC53D6F1B9FB1D2DDA6518614B94EA53_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CFragmentCommandBytesU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandCount_mEDE6B288153489A720CED23BAA3DA931A69B0C73_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CFragmentCommandCountU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandCount_m18BC1184FFBBDACAF2D17DB72EF76DC72EE05876_inline (TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CFragmentCommandCountU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationByteCount_mB64819EFCB70B6572CFBE4E1515138C1B2FCF581_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3COperationByteCountU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationByteCount_mEDB98137732D5E621BA1BA643E329227259E1DAA_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3COperationByteCountU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationCount_mE7CE76E1D7A0AF79321923D3E919312258C8FE4F_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3COperationCountU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationCount_m297655F7E10B3E0F0B13C5EA462617743B66B142_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3COperationCountU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultByteCount_m2653884EC6249526DEDCFDC8B84261891FA92DB4_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CResultByteCountU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultByteCount_m64FDA75C563C79CD52F5ACBCBA10F5D789EF90A0_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CResultByteCountU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultCount_m1459D5FC1B895A843319C41876EC39BA5543D53D_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CResultCountU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultCount_mE73872DDF66BE2774DB8EFFAC85695D68259E861_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CResultCountU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventByteCount_m92B49AB91772BB93DA89415377959EF2D08F2364_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CEventByteCountU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventByteCount_m0CC6103A37777150CC1BAD50C677E49377116657_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CEventByteCountU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventCount_m1E8D33401FF5A990C3B0A49D6D82A9A20E97BFD0_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CEventCountU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventCount_mD29E0AC16A1664F6E53C02376102D0641314FAE6_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CEventCountU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestOpResponseCallback_m4F647D059F912765CDB7CF638A8AAF1ACAD92103_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestOpResponseCallbackU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallback_m1FD030542D606D20E6D85B7BC9BC651ED078D2EC_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestOpResponseCallbackU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m9BB3DB3CB2CB11ADC1ACC5BBB01CA519307072CC_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestEventCallback_mB4D58DB2D26D19CC3ADF7F1823CDC7A1176269FD_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestEventCallbackU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallback_m903E43D16BF2BF993A00703639BBF2DA907AE95C_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestEventCallbackU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallbackCode_m5A0E46AA270DE92380201706B2263E35343AB21D_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_U3CLongestEventCallbackCodeU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestMessageCallback_m468BA5CAB531399A069CB10E78F4E6FA09749585_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestMessageCallbackU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestMessageCallback_m318984DDF76D09D7CEA1B55058B943E09DBB8CEA_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestMessageCallbackU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestRawMessageCallback_mF5772661A2462E874AB2E42FB54DE7A53E037FC0_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestRawMessageCallbackU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestRawMessageCallback_mBA68F54737D0469F336800B225B2763D13338F8C_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestRawMessageCallbackU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m0015D2B4A9D8D1033C690F1CC39DBA4F5EEE6012_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_m809211B35F40E1353F14E1C98445F77CA1F295DC_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_mC35B5253CF22E6E5FD1C791796AE22F56DDEB4A4_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_m31072490D8A152338F9BFB699E34F4FBECA78150_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m9B503973DE53D4DBDCD95F1B6DC0D47884605B13_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m31F1FF20EFE1B569B5C9CC1BAE7920F2D4219A38_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m1DBA253FEDA2BEEFE80D33F37B2D4B6B950E3DE3_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_m004140F666BCF1D4030D2E0EC61B03EA599F7C3A_inline (TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Family_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}

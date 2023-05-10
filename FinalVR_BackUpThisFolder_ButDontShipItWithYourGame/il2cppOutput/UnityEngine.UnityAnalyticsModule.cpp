﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { &p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3, T4, T5>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		void* params[5] = { p1, &p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`3<System.Boolean,System.Boolean,System.Int32>
struct Action_3_t4730167C8E7EB19F1E0034580790A915D549F6CB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.Reflection.Assembly
struct Assembly_t;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged
struct IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395;
// UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged
struct SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C;
// UnityEngine.RemoteSettings/UpdatedEventHandler
struct UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsSessionInfo_tDE8F7A9E13EF9723E2D975F76E916753DA61AD76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteSettings_t9DFFC747AB3E7A39DF4527F245B529A407427250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2276B6A66302EB28763BDF59157B4221777ADB5A;
IL2CPP_EXTERN_C String_t* _stringLiteralECCC4B7A0DA4E8DB493886ED11AC56BA55FBE86F;
IL2CPP_EXTERN_C const RuntimeMethod* Analytics_RegisterEvent_m82BE2F186E2F452E6FFE10DC44207C3438E660E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Analytics_SendEvent_m9E942728E301EA9E90741ADD1ED71DAD118819B5_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t6B4A7D64487421A1C7A9ACB5578F8A35510E2A0C 
{
};

// UnityEngine.Analytics.Analytics
struct Analytics_tF5AF7B75C971CF64A542B88268F097E1B65573B0  : public RuntimeObject
{
};

// UnityEngine.Analytics.AnalyticsSessionInfo
struct AnalyticsSessionInfo_tDE8F7A9E13EF9723E2D975F76E916753DA61AD76  : public RuntimeObject
{
};

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// UnityEngine.Analytics.ContinuousEvent
struct ContinuousEvent_t71122F6F65BF7EA8490EA664A55D5C03790CB6CF  : public RuntimeObject
{
};

// UnityEngine.RemoteConfigSettingsHelper
struct RemoteConfigSettingsHelper_t29B2673892F8181388B45FFEEE354B3773629588  : public RuntimeObject
{
};

// UnityEngine.RemoteSettings
struct RemoteSettings_t9DFFC747AB3E7A39DF4527F245B529A407427250  : public RuntimeObject
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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
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

// UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RemoteConfigSettings::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<System.Boolean> UnityEngine.RemoteConfigSettings::Updated
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___Updated_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___Updated_1;
};
// Native definition for COM marshalling of UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___Updated_1;
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

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action`3<System.Boolean,System.Boolean,System.Int32>
struct Action_3_t4730167C8E7EB19F1E0034580790A915D549F6CB  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged
struct IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395  : public MulticastDelegate_t
{
};

// UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged
struct SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C  : public MulticastDelegate_t
{
};

// UnityEngine.RemoteSettings/UpdatedEventHandler
struct UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4  : public MulticastDelegate_t
{
};

// <Module>

// <Module>

// UnityEngine.Analytics.Analytics

// UnityEngine.Analytics.Analytics

// UnityEngine.Analytics.AnalyticsSessionInfo
struct AnalyticsSessionInfo_tDE8F7A9E13EF9723E2D975F76E916753DA61AD76_StaticFields
{
	// UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged UnityEngine.Analytics.AnalyticsSessionInfo::sessionStateChanged
	SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* ___sessionStateChanged_0;
	// UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged UnityEngine.Analytics.AnalyticsSessionInfo::identityTokenChanged
	IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* ___identityTokenChanged_1;
};

// UnityEngine.Analytics.AnalyticsSessionInfo

// System.Reflection.Assembly

// System.Reflection.Assembly

// UnityEngine.Analytics.ContinuousEvent

// UnityEngine.Analytics.ContinuousEvent

// UnityEngine.RemoteConfigSettingsHelper

// UnityEngine.RemoteConfigSettingsHelper

// UnityEngine.RemoteSettings
struct RemoteSettings_t9DFFC747AB3E7A39DF4527F245B529A407427250_StaticFields
{
	// UnityEngine.RemoteSettings/UpdatedEventHandler UnityEngine.RemoteSettings::Updated
	UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* ___Updated_0;
	// System.Action UnityEngine.RemoteSettings::BeforeFetchFromServer
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___BeforeFetchFromServer_1;
	// System.Action`3<System.Boolean,System.Boolean,System.Int32> UnityEngine.RemoteSettings::Completed
	Action_3_t4730167C8E7EB19F1E0034580790A915D549F6CB* ___Completed_2;
};

// UnityEngine.RemoteSettings

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// UnityEngine.RemoteConfigSettings

// UnityEngine.RemoteConfigSettings

// System.Action`1<System.Boolean>

// System.Action`1<System.Boolean>

// System.Action`3<System.Boolean,System.Boolean,System.Int32>

// System.Action`3<System.Boolean,System.Boolean,System.Int32>

// System.Action

// System.Action

// System.ArgumentException

// System.ArgumentException

// UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged

// UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged

// UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged

// UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged

// UnityEngine.RemoteSettings/UpdatedEventHandler

// UnityEngine.RemoteSettings/UpdatedEventHandler
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`3<System.Boolean,System.Boolean,System.Int32>::Invoke(T1,T2,T3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_mB1AE88F5C5FE161C85EA4A58D5CC535721E01B21_gshared_inline (Action_3_t4730167C8E7EB19F1E0034580790A915D549F6CB* __this, bool ___0_arg1, bool ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) ;

// System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UpdatedEventHandler_Invoke_m4D496F648FD908A8537A35C4A94CBB44294D6D50_inline (UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Boolean,System.Boolean,System.Int32>::Invoke(T1,T2,T3)
inline void Action_3_Invoke_mB1AE88F5C5FE161C85EA4A58D5CC535721E01B21_inline (Action_3_t4730167C8E7EB19F1E0034580790A915D549F6CB* __this, bool ___0_arg1, bool ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t4730167C8E7EB19F1E0034580790A915D549F6CB*, bool, bool, int32_t, const RuntimeMethod*))Action_3_Invoke_mB1AE88F5C5FE161C85EA4A58D5CC535721E01B21_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, method);
}
// System.Void System.Action`1<System.Boolean>::Invoke(T)
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___0_obj, method);
}
// System.Reflection.Assembly System.Reflection.Assembly::GetCallingAssembly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t* Assembly_GetCallingAssembly_mDA96275EB27A0792D97CF9E45FB7919F39A3F97E (const RuntimeMethod* method) ;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEvent(System.String,System.Int32,System.Int32,System.String,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_RegisterEvent_m82BE2F186E2F452E6FFE10DC44207C3438E660E4 (String_t* ___0_eventName, int32_t ___1_maxEventPerHour, int32_t ___2_maxItems, String_t* ___3_vendorKey, int32_t ___4_ver, String_t* ___5_prefix, String_t* ___6_assemblyInfo, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Analytics.Analytics::IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Analytics_IsInitialized_mBC7670704DE959791C8DF859A7C66D5DD5168F12 (const RuntimeMethod* method) ;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEventWithLimit(System.String,System.Int32,System.Int32,System.String,System.Int32,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_RegisterEventWithLimit_m1C2E9701EE73122C7788186C9EA9A3C23CF51252 (String_t* ___0_eventName, int32_t ___1_maxEventPerHour, int32_t ___2_maxItems, String_t* ___3_vendorKey, int32_t ___4_ver, String_t* ___5_prefix, String_t* ___6_assemblyInfo, bool ___7_notifyServer, const RuntimeMethod* method) ;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SendEventWithLimit(System.String,System.Object,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_SendEventWithLimit_m084C487537F41F55CA161ED14838A6B892421956 (String_t* ___0_eventName, RuntimeObject* ___1_parameters, int32_t ___2_ver, String_t* ___3_prefix, const RuntimeMethod* method) ;
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::Invoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SessionStateChanged_Invoke_mB9195B30A226CB3E53E470C24FD31E039E5BB4F5_inline (SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* __this, int32_t ___0_sessionState, int64_t ___1_sessionId, int64_t ___2_sessionElapsedTime, bool ___3_sessionChanged, const RuntimeMethod* method) ;
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9_inline (IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* __this, String_t* ___0_token, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_RemoteSettingsUpdated_m6202CCC0AF33D44838BB46977D075E54FD5EC069 (bool ___0_wasLastUpdatedFromServer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteSettings_t9DFFC747AB3E7A39DF4527F245B529A407427250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* V_0 = NULL;
	bool V_1 = false;
	{
		UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* L_0 = ((RemoteSettings_t9DFFC747AB3E7A39DF4527F245B529A407427250_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t9DFFC747AB3E7A39DF4527F245B529A407427250_il2cpp_TypeInfo_var))->___Updated_0;
		V_0 = L_0;
		UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* L_3 = V_0;
		NullCheck(L_3);
		UpdatedEventHandler_Invoke_m4D496F648FD908A8537A35C4A94CBB44294D6D50_inline(L_3, NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.RemoteSettings::RemoteSettingsBeforeFetchFromServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_RemoteSettingsBeforeFetchFromServer_m677DED4CFA8C9E498227A3E939242974DF8FA35C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteSettings_t9DFFC747AB3E7A39DF4527F245B529A407427250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	bool V_1 = false;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((RemoteSettings_t9DFFC747AB3E7A39DF4527F245B529A407427250_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t9DFFC747AB3E7A39DF4527F245B529A407427250_il2cpp_TypeInfo_var))->___BeforeFetchFromServer_1;
		V_0 = L_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_0;
		NullCheck(L_3);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdateCompleted(System.Boolean,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_RemoteSettingsUpdateCompleted_m56713308E00B18BF0E5FADEC93D67A70F7E5FD86 (bool ___0_wasLastUpdatedFromServer, bool ___1_settingsChanged, int32_t ___2_response, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteSettings_t9DFFC747AB3E7A39DF4527F245B529A407427250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_t4730167C8E7EB19F1E0034580790A915D549F6CB* V_0 = NULL;
	bool V_1 = false;
	{
		Action_3_t4730167C8E7EB19F1E0034580790A915D549F6CB* L_0 = ((RemoteSettings_t9DFFC747AB3E7A39DF4527F245B529A407427250_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t9DFFC747AB3E7A39DF4527F245B529A407427250_il2cpp_TypeInfo_var))->___Completed_2;
		V_0 = L_0;
		Action_3_t4730167C8E7EB19F1E0034580790A915D549F6CB* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Action_3_t4730167C8E7EB19F1E0034580790A915D549F6CB*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		Action_3_t4730167C8E7EB19F1E0034580790A915D549F6CB* L_3 = V_0;
		bool L_4 = ___0_wasLastUpdatedFromServer;
		bool L_5 = ___1_settingsChanged;
		int32_t L_6 = ___2_response;
		NullCheck(L_3);
		Action_3_Invoke_mB1AE88F5C5FE161C85EA4A58D5CC535721E01B21_inline(L_3, L_4, L_5, L_6, NULL);
	}

IL_0019:
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
void UpdatedEventHandler_Invoke_m4D496F648FD908A8537A35C4A94CBB44294D6D50_Multicast(UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* currentDelegate = reinterpret_cast<UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void UpdatedEventHandler_Invoke_m4D496F648FD908A8537A35C4A94CBB44294D6D50_OpenInst(UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void UpdatedEventHandler_Invoke_m4D496F648FD908A8537A35C4A94CBB44294D6D50_OpenStatic(UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void UpdatedEventHandler_Invoke_m4D496F648FD908A8537A35C4A94CBB44294D6D50_OpenStaticInvoker(UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void UpdatedEventHandler_Invoke_m4D496F648FD908A8537A35C4A94CBB44294D6D50_ClosedStaticInvoker(UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4 (UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatedEventHandler__ctor_mB914409481F8FDC738B4EDB1DBB4883F743F863A (UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UpdatedEventHandler_Invoke_m4D496F648FD908A8537A35C4A94CBB44294D6D50_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UpdatedEventHandler_Invoke_m4D496F648FD908A8537A35C4A94CBB44294D6D50_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UpdatedEventHandler_Invoke_m4D496F648FD908A8537A35C4A94CBB44294D6D50_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&UpdatedEventHandler_Invoke_m4D496F648FD908A8537A35C4A94CBB44294D6D50_Multicast;
}
// System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatedEventHandler_Invoke_m4D496F648FD908A8537A35C4A94CBB44294D6D50 (UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.RemoteConfigSettings
IL2CPP_EXTERN_C void RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshal_pinvoke(const RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52& unmarshaled, RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
	marshaled.___Updated_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Updated_1));
}
IL2CPP_EXTERN_C void RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshal_pinvoke_back(const RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshaled_pinvoke& marshaled, RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
	unmarshaled.___Updated_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C>(marshaled.___Updated_1, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Updated_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C>(marshaled.___Updated_1, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.RemoteConfigSettings
IL2CPP_EXTERN_C void RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshal_pinvoke_cleanup(RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.RemoteConfigSettings
IL2CPP_EXTERN_C void RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshal_com(const RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52& unmarshaled, RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
	marshaled.___Updated_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Updated_1));
}
IL2CPP_EXTERN_C void RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshal_com_back(const RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshaled_com& marshaled, RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
	unmarshaled.___Updated_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C>(marshaled.___Updated_1, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Updated_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C>(marshaled.___Updated_1, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.RemoteConfigSettings
IL2CPP_EXTERN_C void RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshal_com_cleanup(RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.RemoteConfigSettings::RemoteConfigSettingsUpdated(UnityEngine.RemoteConfigSettings,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigSettings_RemoteConfigSettingsUpdated_mA71E7C6CDAF5D349BF0B4880A4D54DF2365EB948 (RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52* ___0_rcs, bool ___1_wasLastUpdatedFromServer, const RuntimeMethod* method) 
{
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	bool V_1 = false;
	{
		RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52* L_0 = ___0_rcs;
		NullCheck(L_0);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = L_0->___Updated_1;
		V_0 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_4 = V_0;
		bool L_5 = ___1_wasLastUpdatedFromServer;
		NullCheck(L_4);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_4, L_5, NULL);
	}

IL_0018:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Analytics.Analytics::IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Analytics_IsInitialized_mBC7670704DE959791C8DF859A7C66D5DD5168F12 (const RuntimeMethod* method) 
{
	typedef bool (*Analytics_IsInitialized_mBC7670704DE959791C8DF859A7C66D5DD5168F12_ftn) ();
	static Analytics_IsInitialized_mBC7670704DE959791C8DF859A7C66D5DD5168F12_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Analytics_IsInitialized_mBC7670704DE959791C8DF859A7C66D5DD5168F12_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.Analytics::IsInitialized()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEventWithLimit(System.String,System.Int32,System.Int32,System.String,System.Int32,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_RegisterEventWithLimit_m1C2E9701EE73122C7788186C9EA9A3C23CF51252 (String_t* ___0_eventName, int32_t ___1_maxEventPerHour, int32_t ___2_maxItems, String_t* ___3_vendorKey, int32_t ___4_ver, String_t* ___5_prefix, String_t* ___6_assemblyInfo, bool ___7_notifyServer, const RuntimeMethod* method) 
{
	typedef int32_t (*Analytics_RegisterEventWithLimit_m1C2E9701EE73122C7788186C9EA9A3C23CF51252_ftn) (String_t*, int32_t, int32_t, String_t*, int32_t, String_t*, String_t*, bool);
	static Analytics_RegisterEventWithLimit_m1C2E9701EE73122C7788186C9EA9A3C23CF51252_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Analytics_RegisterEventWithLimit_m1C2E9701EE73122C7788186C9EA9A3C23CF51252_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.Analytics::RegisterEventWithLimit(System.String,System.Int32,System.Int32,System.String,System.Int32,System.String,System.String,System.Boolean)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_eventName, ___1_maxEventPerHour, ___2_maxItems, ___3_vendorKey, ___4_ver, ___5_prefix, ___6_assemblyInfo, ___7_notifyServer);
	return icallRetVal;
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SendEventWithLimit(System.String,System.Object,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_SendEventWithLimit_m084C487537F41F55CA161ED14838A6B892421956 (String_t* ___0_eventName, RuntimeObject* ___1_parameters, int32_t ___2_ver, String_t* ___3_prefix, const RuntimeMethod* method) 
{
	typedef int32_t (*Analytics_SendEventWithLimit_m084C487537F41F55CA161ED14838A6B892421956_ftn) (String_t*, RuntimeObject*, int32_t, String_t*);
	static Analytics_SendEventWithLimit_m084C487537F41F55CA161ED14838A6B892421956_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Analytics_SendEventWithLimit_m084C487537F41F55CA161ED14838A6B892421956_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.Analytics::SendEventWithLimit(System.String,System.Object,System.Int32,System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_eventName, ___1_parameters, ___2_ver, ___3_prefix);
	return icallRetVal;
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEvent(System.String,System.Int32,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR int32_t Analytics_RegisterEvent_mC82148D11A02968E347F9D11237D50826223A7C3 (String_t* ___0_eventName, int32_t ___1_maxEventPerHour, int32_t ___2_maxItems, String_t* ___3_vendorKey, String_t* ___4_prefix, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		Assembly_t* L_1;
		L_1 = Assembly_GetCallingAssembly_mDA96275EB27A0792D97CF9E45FB7919F39A3F97E(NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.Assembly::get_FullName() */, L_1);
		V_0 = L_2;
		String_t* L_3 = ___0_eventName;
		int32_t L_4 = ___1_maxEventPerHour;
		int32_t L_5 = ___2_maxItems;
		String_t* L_6 = ___3_vendorKey;
		String_t* L_7 = ___4_prefix;
		String_t* L_8 = V_0;
		int32_t L_9;
		L_9 = Analytics_RegisterEvent_m82BE2F186E2F452E6FFE10DC44207C3438E660E4(L_3, L_4, L_5, L_6, 1, L_7, L_8, NULL);
		V_1 = L_9;
		goto IL_0022;
	}

IL_0022:
	{
		int32_t L_10 = V_1;
		return L_10;
	}
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEvent(System.String,System.Int32,System.Int32,System.String,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_RegisterEvent_m82BE2F186E2F452E6FFE10DC44207C3438E660E4 (String_t* ___0_eventName, int32_t ___1_maxEventPerHour, int32_t ___2_maxItems, String_t* ___3_vendorKey, int32_t ___4_ver, String_t* ___5_prefix, String_t* ___6_assemblyInfo, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___0_eventName;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2276B6A66302EB28763BDF59157B4221777ADB5A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Analytics_RegisterEvent_m82BE2F186E2F452E6FFE10DC44207C3438E660E4_RuntimeMethod_var)));
	}

IL_0016:
	{
		bool L_4;
		L_4 = Analytics_IsInitialized_mBC7670704DE959791C8DF859A7C66D5DD5168F12(NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		V_2 = 1;
		goto IL_0039;
	}

IL_0026:
	{
		String_t* L_6 = ___0_eventName;
		int32_t L_7 = ___1_maxEventPerHour;
		int32_t L_8 = ___2_maxItems;
		String_t* L_9 = ___3_vendorKey;
		int32_t L_10 = ___4_ver;
		String_t* L_11 = ___5_prefix;
		String_t* L_12 = ___6_assemblyInfo;
		int32_t L_13;
		L_13 = Analytics_RegisterEventWithLimit_m1C2E9701EE73122C7788186C9EA9A3C23CF51252(L_6, L_7, L_8, L_9, L_10, L_11, L_12, (bool)1, NULL);
		V_2 = L_13;
		goto IL_0039;
	}

IL_0039:
	{
		int32_t L_14 = V_2;
		return L_14;
	}
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SendEvent(System.String,System.Object,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_SendEvent_m9E942728E301EA9E90741ADD1ED71DAD118819B5 (String_t* ___0_eventName, RuntimeObject* ___1_parameters, int32_t ___2_ver, String_t* ___3_prefix, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		String_t* L_0 = ___0_eventName;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2276B6A66302EB28763BDF59157B4221777ADB5A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Analytics_SendEvent_m9E942728E301EA9E90741ADD1ED71DAD118819B5_RuntimeMethod_var)));
	}

IL_0016:
	{
		RuntimeObject* L_4 = ___1_parameters;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECCC4B7A0DA4E8DB493886ED11AC56BA55FBE86F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Analytics_SendEvent_m9E942728E301EA9E90741ADD1ED71DAD118819B5_RuntimeMethod_var)));
	}

IL_0029:
	{
		bool L_7;
		L_7 = Analytics_IsInitialized_mBC7670704DE959791C8DF859A7C66D5DD5168F12(NULL);
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		V_3 = 1;
		goto IL_0045;
	}

IL_0039:
	{
		String_t* L_9 = ___0_eventName;
		RuntimeObject* L_10 = ___1_parameters;
		int32_t L_11 = ___2_ver;
		String_t* L_12 = ___3_prefix;
		int32_t L_13;
		L_13 = Analytics_SendEventWithLimit_m084C487537F41F55CA161ED14838A6B892421956(L_9, L_10, L_11, L_12, NULL);
		V_3 = L_13;
		goto IL_0045;
	}

IL_0045:
	{
		int32_t L_14 = V_3;
		return L_14;
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
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo::CallSessionStateChanged(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsSessionInfo_CallSessionStateChanged_m6C3C7DD13064E37D7C3AE9411355BCEF77C4664B (int32_t ___0_sessionState, int64_t ___1_sessionId, int64_t ___2_sessionElapsedTime, bool ___3_sessionChanged, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsSessionInfo_tDE8F7A9E13EF9723E2D975F76E916753DA61AD76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* V_0 = NULL;
	bool V_1 = false;
	{
		SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* L_0 = ((AnalyticsSessionInfo_tDE8F7A9E13EF9723E2D975F76E916753DA61AD76_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsSessionInfo_tDE8F7A9E13EF9723E2D975F76E916753DA61AD76_il2cpp_TypeInfo_var))->___sessionStateChanged_0;
		V_0 = L_0;
		SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* L_3 = V_0;
		int32_t L_4 = ___0_sessionState;
		int64_t L_5 = ___1_sessionId;
		int64_t L_6 = ___2_sessionElapsedTime;
		bool L_7 = ___3_sessionChanged;
		NullCheck(L_3);
		SessionStateChanged_Invoke_mB9195B30A226CB3E53E470C24FD31E039E5BB4F5_inline(L_3, L_4, L_5, L_6, L_7, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo::CallIdentityTokenChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsSessionInfo_CallIdentityTokenChanged_m1AD21A1840BCB9CB222455F609DBBF7B7B380911 (String_t* ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsSessionInfo_tDE8F7A9E13EF9723E2D975F76E916753DA61AD76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* V_0 = NULL;
	bool V_1 = false;
	{
		IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* L_0 = ((AnalyticsSessionInfo_tDE8F7A9E13EF9723E2D975F76E916753DA61AD76_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsSessionInfo_tDE8F7A9E13EF9723E2D975F76E916753DA61AD76_il2cpp_TypeInfo_var))->___identityTokenChanged_1;
		V_0 = L_0;
		IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* L_3 = V_0;
		String_t* L_4 = ___0_token;
		NullCheck(L_3);
		IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9_inline(L_3, L_4, NULL);
	}

IL_0017:
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
void SessionStateChanged_Invoke_mB9195B30A226CB3E53E470C24FD31E039E5BB4F5_Multicast(SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* __this, int32_t ___0_sessionState, int64_t ___1_sessionId, int64_t ___2_sessionElapsedTime, bool ___3_sessionChanged, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* currentDelegate = reinterpret_cast<SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int64_t, int64_t, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_sessionState, ___1_sessionId, ___2_sessionElapsedTime, ___3_sessionChanged, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SessionStateChanged_Invoke_mB9195B30A226CB3E53E470C24FD31E039E5BB4F5_OpenInst(SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* __this, int32_t ___0_sessionState, int64_t ___1_sessionId, int64_t ___2_sessionElapsedTime, bool ___3_sessionChanged, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int64_t, int64_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sessionState, ___1_sessionId, ___2_sessionElapsedTime, ___3_sessionChanged, method);
}
void SessionStateChanged_Invoke_mB9195B30A226CB3E53E470C24FD31E039E5BB4F5_OpenStatic(SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* __this, int32_t ___0_sessionState, int64_t ___1_sessionId, int64_t ___2_sessionElapsedTime, bool ___3_sessionChanged, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int64_t, int64_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sessionState, ___1_sessionId, ___2_sessionElapsedTime, ___3_sessionChanged, method);
}
void SessionStateChanged_Invoke_mB9195B30A226CB3E53E470C24FD31E039E5BB4F5_OpenStaticInvoker(SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* __this, int32_t ___0_sessionState, int64_t ___1_sessionId, int64_t ___2_sessionElapsedTime, bool ___3_sessionChanged, const RuntimeMethod* method)
{
	InvokerActionInvoker4< int32_t, int64_t, int64_t, bool >::Invoke(__this->___method_ptr_0, method, NULL, ___0_sessionState, ___1_sessionId, ___2_sessionElapsedTime, ___3_sessionChanged);
}
void SessionStateChanged_Invoke_mB9195B30A226CB3E53E470C24FD31E039E5BB4F5_ClosedStaticInvoker(SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* __this, int32_t ___0_sessionState, int64_t ___1_sessionId, int64_t ___2_sessionElapsedTime, bool ___3_sessionChanged, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, int32_t, int64_t, int64_t, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_sessionState, ___1_sessionId, ___2_sessionElapsedTime, ___3_sessionChanged);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C (SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* __this, int32_t ___0_sessionState, int64_t ___1_sessionId, int64_t ___2_sessionElapsedTime, bool ___3_sessionChanged, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int64_t, int64_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_sessionState, ___1_sessionId, ___2_sessionElapsedTime, static_cast<int32_t>(___3_sessionChanged));

}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionStateChanged__ctor_m8E04BB6766439BA455F9C808171BD791230496D8 (SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SessionStateChanged_Invoke_mB9195B30A226CB3E53E470C24FD31E039E5BB4F5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SessionStateChanged_Invoke_mB9195B30A226CB3E53E470C24FD31E039E5BB4F5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SessionStateChanged_Invoke_mB9195B30A226CB3E53E470C24FD31E039E5BB4F5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&SessionStateChanged_Invoke_mB9195B30A226CB3E53E470C24FD31E039E5BB4F5_Multicast;
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::Invoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionStateChanged_Invoke_mB9195B30A226CB3E53E470C24FD31E039E5BB4F5 (SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* __this, int32_t ___0_sessionState, int64_t ___1_sessionId, int64_t ___2_sessionElapsedTime, bool ___3_sessionChanged, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int64_t, int64_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sessionState, ___1_sessionId, ___2_sessionElapsedTime, ___3_sessionChanged, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9_Multicast(IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* __this, String_t* ___0_token, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* currentDelegate = reinterpret_cast<IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_token, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9_OpenInst(IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* __this, String_t* ___0_token, const RuntimeMethod* method)
{
	NullCheck(___0_token);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_token, method);
}
void IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9_OpenStatic(IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* __this, String_t* ___0_token, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_token, method);
}
void IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9_OpenStaticInvoker(IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* __this, String_t* ___0_token, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_token);
}
void IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9_ClosedStaticInvoker(IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* __this, String_t* ___0_token, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_token);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395 (IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* __this, String_t* ___0_token, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_token' to native representation
	char* ____0_token_marshaled = NULL;
	____0_token_marshaled = il2cpp_codegen_marshal_string(___0_token);

	// Native function invocation
	il2cppPInvokeFunc(____0_token_marshaled);

	// Marshaling cleanup of parameter '___0_token' native representation
	il2cpp_codegen_marshal_free(____0_token_marshaled);
	____0_token_marshaled = NULL;

}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityTokenChanged__ctor_m1970F8BEEDAA84A8FC5ABB973C0DB62FA2AA8312 (IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9_Multicast;
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9 (IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* __this, String_t* ___0_token, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_token, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UpdatedEventHandler_Invoke_m4D496F648FD908A8537A35C4A94CBB44294D6D50_inline (UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SessionStateChanged_Invoke_mB9195B30A226CB3E53E470C24FD31E039E5BB4F5_inline (SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* __this, int32_t ___0_sessionState, int64_t ___1_sessionId, int64_t ___2_sessionElapsedTime, bool ___3_sessionChanged, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int64_t, int64_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sessionState, ___1_sessionId, ___2_sessionElapsedTime, ___3_sessionChanged, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9_inline (IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* __this, String_t* ___0_token, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_token, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_mB1AE88F5C5FE161C85EA4A58D5CC535721E01B21_gshared_inline (Action_3_t4730167C8E7EB19F1E0034580790A915D549F6CB* __this, bool ___0_arg1, bool ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, bool, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}

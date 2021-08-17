#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Reflection.AssemblyCompanyAttribute
struct AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4;
// System.Reflection.AssemblyConfigurationAttribute
struct AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C;
// System.Reflection.AssemblyCopyrightAttribute
struct AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC;
// System.Reflection.AssemblyDescriptionAttribute
struct AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3;
// System.Reflection.AssemblyTitleAttribute
struct AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7;
// System.Runtime.InteropServices.ComVisibleAttribute
struct ComVisibleAttribute_tCE3DF5E341F3ECE4C81FE85C15B3D782AB302A2A;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.Diagnostics.DebuggerBrowsableAttribute
struct DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53;
// System.Reflection.DefaultMemberAttribute
struct DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5;
// System.Runtime.InteropServices.GuidAttribute
struct GuidAttribute_tBB494B31270577CCD589ABBB159C18CDAE20D063;
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C;
// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// System.String
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
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

// System.Reflection.AssemblyCompanyAttribute
struct AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyCompanyAttribute::m_company
	String_t* ___m_company_0;

public:
	inline static int32_t get_offset_of_m_company_0() { return static_cast<int32_t>(offsetof(AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4, ___m_company_0)); }
	inline String_t* get_m_company_0() const { return ___m_company_0; }
	inline String_t** get_address_of_m_company_0() { return &___m_company_0; }
	inline void set_m_company_0(String_t* value)
	{
		___m_company_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_company_0), (void*)value);
	}
};


// System.Reflection.AssemblyConfigurationAttribute
struct AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyConfigurationAttribute::m_configuration
	String_t* ___m_configuration_0;

public:
	inline static int32_t get_offset_of_m_configuration_0() { return static_cast<int32_t>(offsetof(AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C, ___m_configuration_0)); }
	inline String_t* get_m_configuration_0() const { return ___m_configuration_0; }
	inline String_t** get_address_of_m_configuration_0() { return &___m_configuration_0; }
	inline void set_m_configuration_0(String_t* value)
	{
		___m_configuration_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_configuration_0), (void*)value);
	}
};


// System.Reflection.AssemblyCopyrightAttribute
struct AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyCopyrightAttribute::m_copyright
	String_t* ___m_copyright_0;

public:
	inline static int32_t get_offset_of_m_copyright_0() { return static_cast<int32_t>(offsetof(AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC, ___m_copyright_0)); }
	inline String_t* get_m_copyright_0() const { return ___m_copyright_0; }
	inline String_t** get_address_of_m_copyright_0() { return &___m_copyright_0; }
	inline void set_m_copyright_0(String_t* value)
	{
		___m_copyright_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_copyright_0), (void*)value);
	}
};


// System.Reflection.AssemblyDescriptionAttribute
struct AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyDescriptionAttribute::m_description
	String_t* ___m_description_0;

public:
	inline static int32_t get_offset_of_m_description_0() { return static_cast<int32_t>(offsetof(AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3, ___m_description_0)); }
	inline String_t* get_m_description_0() const { return ___m_description_0; }
	inline String_t** get_address_of_m_description_0() { return &___m_description_0; }
	inline void set_m_description_0(String_t* value)
	{
		___m_description_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_description_0), (void*)value);
	}
};


// System.Reflection.AssemblyTitleAttribute
struct AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyTitleAttribute::m_title
	String_t* ___m_title_0;

public:
	inline static int32_t get_offset_of_m_title_0() { return static_cast<int32_t>(offsetof(AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7, ___m_title_0)); }
	inline String_t* get_m_title_0() const { return ___m_title_0; }
	inline String_t** get_address_of_m_title_0() { return &___m_title_0; }
	inline void set_m_title_0(String_t* value)
	{
		___m_title_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_title_0), (void*)value);
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


// System.Runtime.InteropServices.ComVisibleAttribute
struct ComVisibleAttribute_tCE3DF5E341F3ECE4C81FE85C15B3D782AB302A2A  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.InteropServices.ComVisibleAttribute::_val
	bool ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(ComVisibleAttribute_tCE3DF5E341F3ECE4C81FE85C15B3D782AB302A2A, ____val_0)); }
	inline bool get__val_0() const { return ____val_0; }
	inline bool* get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(bool value)
	{
		____val_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Reflection.DefaultMemberAttribute
struct DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.DefaultMemberAttribute::m_memberName
	String_t* ___m_memberName_0;

public:
	inline static int32_t get_offset_of_m_memberName_0() { return static_cast<int32_t>(offsetof(DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5, ___m_memberName_0)); }
	inline String_t* get_m_memberName_0() const { return ___m_memberName_0; }
	inline String_t** get_address_of_m_memberName_0() { return &___m_memberName_0; }
	inline void set_m_memberName_0(String_t* value)
	{
		___m_memberName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_memberName_0), (void*)value);
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

// System.Runtime.InteropServices.GuidAttribute
struct GuidAttribute_tBB494B31270577CCD589ABBB159C18CDAE20D063  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.InteropServices.GuidAttribute::_val
	String_t* ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(GuidAttribute_tBB494B31270577CCD589ABBB159C18CDAE20D063, ____val_0)); }
	inline String_t* get__val_0() const { return ____val_0; }
	inline String_t** get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(String_t* value)
	{
		____val_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____val_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.CompilerServices.InternalsVisibleToAttribute::_assemblyName
	String_t* ____assemblyName_0;
	// System.Boolean System.Runtime.CompilerServices.InternalsVisibleToAttribute::_allInternalsVisible
	bool ____allInternalsVisible_1;

public:
	inline static int32_t get_offset_of__assemblyName_0() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C, ____assemblyName_0)); }
	inline String_t* get__assemblyName_0() const { return ____assemblyName_0; }
	inline String_t** get_address_of__assemblyName_0() { return &____assemblyName_0; }
	inline void set__assemblyName_0(String_t* value)
	{
		____assemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____assemblyName_0), (void*)value);
	}

	inline static int32_t get_offset_of__allInternalsVisible_1() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C, ____allInternalsVisible_1)); }
	inline bool get__allInternalsVisible_1() const { return ____allInternalsVisible_1; }
	inline bool* get_address_of__allInternalsVisible_1() { return &____allInternalsVisible_1; }
	inline void set__allInternalsVisible_1(bool value)
	{
		____allInternalsVisible_1 = value;
	}
};


// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;

public:
	inline static int32_t get_offset_of__message_0() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____message_0)); }
	inline String_t* get__message_0() const { return ____message_0; }
	inline String_t** get_address_of__message_0() { return &____message_0; }
	inline void set__message_0(String_t* value)
	{
		____message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_0), (void*)value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____error_1)); }
	inline bool get__error_1() const { return ____error_1; }
	inline bool* get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(bool value)
	{
		____error_1 = value;
	}
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
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


// System.Diagnostics.DebuggerBrowsableState
struct DebuggerBrowsableState_t2A824ECEB650CFABB239FD0918FCC88A09B45091 
{
public:
	// System.Int32 System.Diagnostics.DebuggerBrowsableState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggerBrowsableState_t2A824ECEB650CFABB239FD0918FCC88A09B45091, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};


// System.Diagnostics.DebuggerBrowsableAttribute
struct DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggerBrowsableState System.Diagnostics.DebuggerBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.CompilerServices.InternalsVisibleToAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9 (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * __this, String_t* ___assemblyName0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.ComVisibleAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComVisibleAttribute__ctor_mBDE8E12A0233C07B98D6D5103511F4DD5B1FC172 (ComVisibleAttribute_tCE3DF5E341F3ECE4C81FE85C15B3D782AB302A2A * __this, bool ___visibility0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyConfigurationAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyConfigurationAttribute__ctor_m6EE76F5A155EDEA71967A32F78D777038ADD0757 (AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C * __this, String_t* ___configuration0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyDescriptionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyDescriptionAttribute__ctor_m3A0BD500FF352A67235FBA499FBA58EFF15B1F25 (AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 * __this, String_t* ___description0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyCopyrightAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyCopyrightAttribute__ctor_mB0B5F5C1A7A8B172289CC694E2711F07A37CE3F3 (AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC * __this, String_t* ___copyright0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyCompanyAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyCompanyAttribute__ctor_m435C9FEC405646617645636E67860598A0C46FF0 (AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 * __this, String_t* ___company0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyTitleAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyTitleAttribute__ctor_mE239F206B3B369C48AE1F3B4211688778FE99E8D (AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 * __this, String_t* ___title0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GuidAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GuidAttribute__ctor_mCCEF3938DF601B23B5791CEE8F7AF05C98B6AFEA (GuidAttribute_tBB494B31270577CCD589ABBB159C18CDAE20D063 * __this, String_t* ___guid0, const RuntimeMethod* method);
// System.Void System.Reflection.DefaultMemberAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7 (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * __this, String_t* ___memberName0, const RuntimeMethod* method);
// System.Void System.ObsoleteAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868 (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggerBrowsableAttribute::.ctor(System.Diagnostics.DebuggerBrowsableState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5 (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * __this, int32_t ___state0, const RuntimeMethod* method);
static void Photon3Unity3D_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[0];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x55\x6E\x69\x74"), NULL);
	}
	{
		ComVisibleAttribute_tCE3DF5E341F3ECE4C81FE85C15B3D782AB302A2A * tmp = (ComVisibleAttribute_tCE3DF5E341F3ECE4C81FE85C15B3D782AB302A2A *)cache->attributes[1];
		ComVisibleAttribute__ctor_mBDE8E12A0233C07B98D6D5103511F4DD5B1FC172(tmp, false, NULL);
	}
	{
		AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C * tmp = (AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C *)cache->attributes[2];
		AssemblyConfigurationAttribute__ctor_m6EE76F5A155EDEA71967A32F78D777038ADD0757(tmp, il2cpp_codegen_string_new_wrapper("\x2E\x4E\x45\x54\x20\x46\x72\x61\x6D\x65\x77\x6F\x72\x6B\x20\x33\x2E\x35"), NULL);
	}
	{
		AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 * tmp = (AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 *)cache->attributes[3];
		AssemblyDescriptionAttribute__ctor_m3A0BD500FF352A67235FBA499FBA58EFF15B1F25(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
	}
	{
		AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC * tmp = (AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC *)cache->attributes[4];
		AssemblyCopyrightAttribute__ctor_mB0B5F5C1A7A8B172289CC694E2711F07A37CE3F3(tmp, il2cpp_codegen_string_new_wrapper("\x28\x63\x29\x20\x45\x78\x69\x74\x20\x47\x61\x6D\x65\x73\x20\x47\x6D\x62\x48\x2C\x20\x68\x74\x74\x70\x3A\x2F\x2F\x77\x77\x77\x2E\x65\x78\x69\x74\x67\x61\x6D\x65\x73\x2E\x63\x6F\x6D"), NULL);
	}
	{
		AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 * tmp = (AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 *)cache->attributes[5];
		AssemblyCompanyAttribute__ctor_m435C9FEC405646617645636E67860598A0C46FF0(tmp, il2cpp_codegen_string_new_wrapper("\x45\x78\x69\x74\x20\x47\x61\x6D\x65\x73\x20\x47\x6D\x62\x48"), NULL);
	}
	{
		AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 * tmp = (AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 *)cache->attributes[6];
		AssemblyTitleAttribute__ctor_mE239F206B3B369C48AE1F3B4211688778FE99E8D(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x62\x75\x67\x2E\x20\x55\x6E\x69\x74\x79\x20\x4D\x6F\x6E\x6F\x20\x63\x6F\x6D\x70\x61\x74\x69\x62\x6C\x65"), NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[7];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 263LL, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[8];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[9];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		GuidAttribute_tBB494B31270577CCD589ABBB159C18CDAE20D063 * tmp = (GuidAttribute_tBB494B31270577CCD589ABBB159C18CDAE20D063 *)cache->attributes[10];
		GuidAttribute__ctor_mCCEF3938DF601B23B5791CEE8F7AF05C98B6AFEA(tmp, il2cpp_codegen_string_new_wrapper("\x31\x37\x37\x63\x31\x64\x61\x37\x2D\x34\x62\x34\x65\x2D\x34\x32\x30\x39\x2D\x38\x64\x39\x30\x2D\x39\x64\x38\x38\x33\x30\x65\x36\x65\x39\x35\x30"), NULL);
	}
}
static void Hashtable_t8A4662B5C322B2F53CAAC05C306EEA688CE2A937_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_CustomAttributesCacheGenerator_SupportClass_CallInBackground_m48B4725CEACDC4337CAC9F4C1B6168CC3D7D2298(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x53\x74\x61\x72\x74\x42\x61\x63\x6B\x67\x72\x6F\x75\x6E\x64\x43\x61\x6C\x6C\x73\x28\x29\x20\x69\x6E\x73\x74\x65\x61\x64\x2E\x20\x49\x74\x20\x77\x6F\x72\x6B\x73\x20\x77\x69\x74\x68\x20\x53\x74\x6F\x70\x42\x61\x63\x6B\x67\x72\x6F\x75\x6E\x64\x43\x61\x6C\x6C\x73\x28\x29\x2E"), NULL);
	}
}
static void U3CU3Ec__DisplayClass6_0_t24E2D9FF9DF170096AE55682917C60F08A7E2BFA_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_tB8255EE4323FA3DA77B2CAD19B56F38688143AD1_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_U3CCommandBufferSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_U3CLimitOfUnreliableCommandsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_WarningSize(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x43\x68\x65\x63\x6B\x20\x51\x75\x65\x75\x65\x64\x4F\x75\x74\x67\x6F\x69\x6E\x67\x43\x6F\x6D\x6D\x61\x6E\x64\x73\x20\x61\x6E\x64\x20\x51\x75\x65\x75\x65\x64\x49\x6E\x63\x6F\x6D\x69\x6E\x67\x43\x6F\x6D\x6D\x61\x6E\x64\x73\x20\x6F\x6E\x20\x64\x65\x6D\x61\x6E\x64\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_NativeDatagramEncrypt(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x57\x68\x65\x72\x65\x20\x64\x79\x6E\x61\x6D\x69\x63\x20\x6C\x69\x6E\x6B\x69\x6E\x67\x20\x69\x73\x20\x61\x76\x61\x69\x6C\x61\x62\x6C\x65\x2C\x20\x74\x68\x69\x73\x20\x6C\x69\x62\x72\x61\x72\x79\x20\x77\x69\x6C\x6C\x20\x61\x74\x74\x65\x6D\x70\x74\x20\x74\x6F\x20\x6C\x6F\x61\x64\x20\x69\x74\x20\x61\x6E\x64\x20\x66\x61\x6C\x6C\x62\x61\x63\x6B\x20\x74\x6F\x20\x61\x20\x6D\x61\x6E\x61\x67\x65\x64\x20\x69\x6D\x70\x6C\x65\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x2E\x20\x54\x68\x69\x73\x20\x76\x61\x6C\x75\x65\x20\x69\x73\x20\x61\x6C\x77\x61\x79\x73\x20\x74\x72\x75\x65\x2E"), NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_U3CSerializationProtocolTypeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_U3CSocketImplementationU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_U3CListenerU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_U3CEnableServerTracingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_U3CTransportProtocolU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_U3CIsSendingOnlyAcksU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_U3CTrafficStatsIncomingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_U3CTrafficStatsOutgoingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_U3CTrafficStatsGameLevelU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_get_SerializationProtocolType_mD96FCC4A46272C6CA94F9737A314BF0B690DE39A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_set_SerializationProtocolType_mB307C4E76CAD9CDAF6E37605599F54FFD2B22C79(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_get_SocketImplementation_m588DA969369AF6B9AA2112999C1515DB07ABB722(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_set_SocketImplementation_m18933B5D787B51F50CE822A748ED5490A9792D60(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_get_Listener_mACE8798A8906AB6675F3A041962AA897EE8A9C63(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_set_Listener_m242111026054D7A88FC8B23D47EEDA2F1458817F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_get_EnableServerTracing_mF6DC19E7299C8B2E48FB4EED356831AC72F54373(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_get_TransportProtocol_m05CF79C2CE99D2827FFC763361449F8FE36563CE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_set_TransportProtocol_m8FB9FF79F0C2D3FED1A24E167905A7DC1B3B4095(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_get_IsSendingOnlyAcks_m8A57AADA5F708756C8A4A2E1D5E757FA2AF342EC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsIncoming_m92F53DC60E05DD18A4CA8EAE415D60207A07EE65(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsIncoming_mDDFFE6753CC0465E99B026415ABB2921074977AB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsOutgoing_m7EA927E58D67B6C8AA04B66FC5C7A63E595967B5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsOutgoing_mB92258922C94478EE67ED80CA0994A1252A88FA4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsGameLevel_mE49B702D6327BD696989E4A11EE9FCE2861CAC13(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsGameLevel_m1BDEA4E2B169E3B9649E773F5398BB1D3322CD13(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_U3CEstablishEncryptionU3Eb__179_0_mBCAFF532C17776BA6B486EF3749F774B58EDDD4B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E_CustomAttributesCacheGenerator_PeerBase_get_ServerAddress_mA7E7F80FEE805DBB212AF7E558A2845131FDDB54(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E_CustomAttributesCacheGenerator_PeerBase_set_ServerAddress_m382F91B33DF6DEAEBB5191B9C6AB34049FD616CD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass104_0_t4C95060B628C5F305CE87721EF1DE6452F9BD841_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass105_0_t691800BBB8BD0790F9236EBE594D75C9111D712B_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EnetPeer_tFF6188A779A2E2C154FDC12523CD0DF1BCDB3EFC_CustomAttributesCacheGenerator_EnetPeer_U3CExecuteCommandU3Eb__71_0_mE7D1F2D42909184BE81ED8C53C41FCB57B07163E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void OperationResponse_tAE1B48415762EE27262D2A378D7EA01589DDBBB9_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void EventData_t11440FEE431D8D89E49B53C772D4F1A0EBD552E8_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_U3CStateU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_U3CServerIpAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_U3CServerPortU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_U3CAddressResolvedAsIpv6U3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_U3CUrlProtocolU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_U3CUrlPathU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_IPhotonSocket_get_State_m9B6BDA0F509522BD27549D848B7C79068A11009E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_IPhotonSocket_set_State_m561061B649CC14F858A3A3AEA7E620D120BD96FD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerAddress_mF66101883AFF93C721941082B5C30B8C09FCA724(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerAddress_m610409735783D00E51F7075A8C3650DC57F6C96B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerIpAddress_mD82E8AAF3668C047039379EE072ED1645633CB12(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerPort_mAF2DB9F8B0C4EB5CB229477F41D3FEE40DF9A374(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerPort_m8B955247A1F73E2F3A94B2237FD9A8FF06616373(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_IPhotonSocket_get_AddressResolvedAsIpv6_mAFB927F576C518F5C378F38088D71249EC56D546(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_IPhotonSocket_set_AddressResolvedAsIpv6_mEBD0B1037C02D661FD217CEF445B84D04FDACEFA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_IPhotonSocket_set_UrlProtocol_m9E11FCC1D8A50704DA52FC4D74C674E50A5581AE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_IPhotonSocket_set_UrlPath_m8333DC912FD09DBB7E0ABF76366DE43C84D1EFA2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_IPhotonSocket_U3CHandleExceptionU3Eb__47_0_m744144BB60FB8CCC9E8CDE98D5CF67712F186BB1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_tB89977FB627163CFBA741E910E7E398AA25B3A8B_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SimulationItem_t98D041FC64C7B34CAFDAA272320E850A98C61D03_CustomAttributesCacheGenerator_U3CDelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void SimulationItem_t98D041FC64C7B34CAFDAA272320E850A98C61D03_CustomAttributesCacheGenerator_SimulationItem_get_Delay_mF6B633BE12B94A3AF9782D9261FD717E04FD66E3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SimulationItem_t98D041FC64C7B34CAFDAA272320E850A98C61D03_CustomAttributesCacheGenerator_SimulationItem_set_Delay_mECB9D04392571DD41FF98ED64F017150DAE26815(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700_CustomAttributesCacheGenerator_U3CLostPackagesOutU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700_CustomAttributesCacheGenerator_U3CLostPackagesInU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesOut_m1A962F6111E19407FF60EEFEAB0E7A43BFD2AE36(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesOut_m06FBD23C43986BFAE5637C4665640580C4815DE8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesIn_mE80FD67CF53A118FE81F3FDBF59095F4B72B081A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesIn_mBF2AE4E3B6F7BED506C8D01688BB946BF8BEA224(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3COperationByteCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3COperationCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CResultByteCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CResultCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CEventByteCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CEventCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CLongestEventCallbackU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CLongestMessageCallbackU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CLongestRawMessageCallbackU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CLongestEventCallbackCodeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenSendingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CDispatchIncomingCommandsCallsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CSendOutgoingCommandsCallsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationByteCount_mB64819EFCB70B6572CFBE4E1515138C1B2FCF581(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationByteCount_mEDB98137732D5E621BA1BA643E329227259E1DAA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationCount_mE7CE76E1D7A0AF79321923D3E919312258C8FE4F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationCount_m297655F7E10B3E0F0B13C5EA462617743B66B142(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultByteCount_m2653884EC6249526DEDCFDC8B84261891FA92DB4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultByteCount_m64FDA75C563C79CD52F5ACBCBA10F5D789EF90A0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultCount_m1459D5FC1B895A843319C41876EC39BA5543D53D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultCount_mE73872DDF66BE2774DB8EFFAC85695D68259E861(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventByteCount_m92B49AB91772BB93DA89415377959EF2D08F2364(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventByteCount_m0CC6103A37777150CC1BAD50C677E49377116657(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventCount_m1E8D33401FF5A990C3B0A49D6D82A9A20E97BFD0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventCount_mD29E0AC16A1664F6E53C02376102D0641314FAE6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestOpResponseCallback_m4F647D059F912765CDB7CF638A8AAF1ACAD92103(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallback_m1FD030542D606D20E6D85B7BC9BC651ED078D2EC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m9BB3DB3CB2CB11ADC1ACC5BBB01CA519307072CC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestEventCallback_mB4D58DB2D26D19CC3ADF7F1823CDC7A1176269FD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallback_m903E43D16BF2BF993A00703639BBF2DA907AE95C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestMessageCallback_m468BA5CAB531399A069CB10E78F4E6FA09749585(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestMessageCallback_m318984DDF76D09D7CEA1B55058B943E09DBB8CEA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestRawMessageCallback_mF5772661A2462E874AB2E42FB54DE7A53E037FC0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestRawMessageCallback_mBA68F54737D0469F336800B225B2763D13338F8C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallbackCode_m5A0E46AA270DE92380201706B2263E35343AB21D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m0015D2B4A9D8D1033C690F1CC39DBA4F5EEE6012(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_m809211B35F40E1353F14E1C98445F77CA1F295DC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m9B503973DE53D4DBDCD95F1B6DC0D47884605B13(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m31F1FF20EFE1B569B5C9CC1BAE7920F2D4219A38(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_mC35B5253CF22E6E5FD1C791796AE22F56DDEB4A4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_m31072490D8A152338F9BFB699E34F4FBECA78150(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m1DBA253FEDA2BEEFE80D33F37B2D4B6B950E3DE3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_m004140F666BCF1D4030D2E0EC61B03EA599F7C3A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_U3CPackageHeaderSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_U3CReliableCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_U3CUnreliableCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_U3CFragmentCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_U3CControlCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_U3CTotalPacketCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_U3CTotalCommandsInPacketsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_U3CReliableCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_U3CUnreliableCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_U3CFragmentCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_U3CControlCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_U3CTimestampOfLastAckU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_U3CTimestampOfLastReliableCommandU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_get_PackageHeaderSize_mB017BAC94EF63BECD84CB481AABC4289F730FD52(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_set_PackageHeaderSize_m629EA88CE88D1D789514B9C29CADDB7BFE3EEEB8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandCount_m472DFAF2E34589749224D616AC8D47BF4843A630(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandCount_mA40960EA03CDFBCCF5BC8B44C40457B00F86E086(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandCount_mCBA1C05C361436F087E46C091431822B17BED70F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandCount_m672E7A069071E1CD0034DCE5756B74EB6AA141DB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandCount_mEDE6B288153489A720CED23BAA3DA931A69B0C73(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandCount_m18BC1184FFBBDACAF2D17DB72EF76DC72EE05876(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandCount_mB9D4A64BDA2ACFB1A56E557D54F02058166EE6DD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandCount_m16832B6129692177B3B74081CA123A313E91CD44(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_get_TotalPacketCount_mE015927A5D7C83F3CC6995555A1F3A6A154105A8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_set_TotalPacketCount_m3CFB7931269E8D1C9AB2510F7AE2B1C05EF06B3D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_get_TotalCommandsInPackets_m80ECAC905B710985007A4C48F9E74626BA99F6C5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_set_TotalCommandsInPackets_m5AE4B9EDDDEF6027FC766797392726661FA54B44(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandBytes_m3C2A887D6C82747DD5AC700B3A37C9A5DCC829BB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandBytes_m95BCBE6564514DD194D5BC756C37780DA704BAC0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandBytes_m5BBE27DD24E1342E13AFF3B9E004EC14FC14D2DB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandBytes_mEE5260D4BAE8902322E5B9DAABE37D478DF81F27(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandBytes_m1F3C837FF7B6EFEA99200911BCC1FB98B5675A36(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandBytes_m3D74AACBAC53D6F1B9FB1D2DDA6518614B94EA53(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandBytes_mE1A2ED6660E5461C485A31CEF992F83FB276D9CA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandBytes_mBC8E2A1FFD5F68EC38657FC2E7040EB3261069E5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastAck_m5F7715C799D76D91C06A060A7A11FA2173CFB8B0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastReliableCommand_mF6A130EF0F315A9289C89AA993DBDD17AC815BFF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CPrivateImplementationDetailsU3E_tB1C5C8E3240FE7BDACAA801F7D131056ACA33838_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_Photon3Unity3D_AttributeGenerators[];
const CustomAttributesCacheGenerator g_Photon3Unity3D_AttributeGenerators[156] = 
{
	Hashtable_t8A4662B5C322B2F53CAAC05C306EEA688CE2A937_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass6_0_t24E2D9FF9DF170096AE55682917C60F08A7E2BFA_CustomAttributesCacheGenerator,
	U3CU3Ec_tB8255EE4323FA3DA77B2CAD19B56F38688143AD1_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass104_0_t4C95060B628C5F305CE87721EF1DE6452F9BD841_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass105_0_t691800BBB8BD0790F9236EBE594D75C9111D712B_CustomAttributesCacheGenerator,
	OperationResponse_tAE1B48415762EE27262D2A378D7EA01589DDBBB9_CustomAttributesCacheGenerator,
	EventData_t11440FEE431D8D89E49B53C772D4F1A0EBD552E8_CustomAttributesCacheGenerator,
	U3CU3Ec_tB89977FB627163CFBA741E910E7E398AA25B3A8B_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_tB1C5C8E3240FE7BDACAA801F7D131056ACA33838_CustomAttributesCacheGenerator,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_U3CCommandBufferSizeU3Ek__BackingField,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_U3CLimitOfUnreliableCommandsU3Ek__BackingField,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_WarningSize,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_NativeDatagramEncrypt,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_U3CSerializationProtocolTypeU3Ek__BackingField,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_U3CSocketImplementationU3Ek__BackingField,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_U3CListenerU3Ek__BackingField,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_U3CEnableServerTracingU3Ek__BackingField,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_U3CTransportProtocolU3Ek__BackingField,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_U3CIsSendingOnlyAcksU3Ek__BackingField,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_U3CTrafficStatsIncomingU3Ek__BackingField,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_U3CTrafficStatsOutgoingU3Ek__BackingField,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_U3CTrafficStatsGameLevelU3Ek__BackingField,
	PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField,
	IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_U3CStateU3Ek__BackingField,
	IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField,
	IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_U3CServerIpAddressU3Ek__BackingField,
	IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_U3CServerPortU3Ek__BackingField,
	IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_U3CAddressResolvedAsIpv6U3Ek__BackingField,
	IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_U3CUrlProtocolU3Ek__BackingField,
	IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_U3CUrlPathU3Ek__BackingField,
	SimulationItem_t98D041FC64C7B34CAFDAA272320E850A98C61D03_CustomAttributesCacheGenerator_U3CDelayU3Ek__BackingField,
	NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700_CustomAttributesCacheGenerator_U3CLostPackagesOutU3Ek__BackingField,
	NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700_CustomAttributesCacheGenerator_U3CLostPackagesInU3Ek__BackingField,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3COperationByteCountU3Ek__BackingField,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3COperationCountU3Ek__BackingField,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CResultByteCountU3Ek__BackingField,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CResultCountU3Ek__BackingField,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CEventByteCountU3Ek__BackingField,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CEventCountU3Ek__BackingField,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackU3Ek__BackingField,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CLongestEventCallbackU3Ek__BackingField,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CLongestMessageCallbackU3Ek__BackingField,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CLongestRawMessageCallbackU3Ek__BackingField,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CLongestEventCallbackCodeU3Ek__BackingField,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenSendingU3Ek__BackingField,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CDispatchIncomingCommandsCallsU3Ek__BackingField,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_U3CSendOutgoingCommandsCallsU3Ek__BackingField,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_U3CPackageHeaderSizeU3Ek__BackingField,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_U3CReliableCommandCountU3Ek__BackingField,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_U3CUnreliableCommandCountU3Ek__BackingField,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_U3CFragmentCommandCountU3Ek__BackingField,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_U3CControlCommandCountU3Ek__BackingField,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_U3CTotalPacketCountU3Ek__BackingField,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_U3CTotalCommandsInPacketsU3Ek__BackingField,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_U3CReliableCommandBytesU3Ek__BackingField,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_U3CUnreliableCommandBytesU3Ek__BackingField,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_U3CFragmentCommandBytesU3Ek__BackingField,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_U3CControlCommandBytesU3Ek__BackingField,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_U3CTimestampOfLastAckU3Ek__BackingField,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_U3CTimestampOfLastReliableCommandU3Ek__BackingField,
	SupportClass_t11F83D97B051D93103C6702E1D9D88177C3F8362_CustomAttributesCacheGenerator_SupportClass_CallInBackground_m48B4725CEACDC4337CAC9F4C1B6168CC3D7D2298,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_get_SerializationProtocolType_mD96FCC4A46272C6CA94F9737A314BF0B690DE39A,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_set_SerializationProtocolType_mB307C4E76CAD9CDAF6E37605599F54FFD2B22C79,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_get_SocketImplementation_m588DA969369AF6B9AA2112999C1515DB07ABB722,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_set_SocketImplementation_m18933B5D787B51F50CE822A748ED5490A9792D60,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_get_Listener_mACE8798A8906AB6675F3A041962AA897EE8A9C63,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_set_Listener_m242111026054D7A88FC8B23D47EEDA2F1458817F,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_get_EnableServerTracing_mF6DC19E7299C8B2E48FB4EED356831AC72F54373,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_get_TransportProtocol_m05CF79C2CE99D2827FFC763361449F8FE36563CE,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_set_TransportProtocol_m8FB9FF79F0C2D3FED1A24E167905A7DC1B3B4095,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_get_IsSendingOnlyAcks_m8A57AADA5F708756C8A4A2E1D5E757FA2AF342EC,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsIncoming_m92F53DC60E05DD18A4CA8EAE415D60207A07EE65,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsIncoming_mDDFFE6753CC0465E99B026415ABB2921074977AB,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsOutgoing_m7EA927E58D67B6C8AA04B66FC5C7A63E595967B5,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsOutgoing_mB92258922C94478EE67ED80CA0994A1252A88FA4,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsGameLevel_mE49B702D6327BD696989E4A11EE9FCE2861CAC13,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsGameLevel_m1BDEA4E2B169E3B9649E773F5398BB1D3322CD13,
	PhotonPeer_t0CFCCF54CA6F712DE40F27C33B1C6F89EE42F273_CustomAttributesCacheGenerator_PhotonPeer_U3CEstablishEncryptionU3Eb__179_0_mBCAFF532C17776BA6B486EF3749F774B58EDDD4B,
	PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E_CustomAttributesCacheGenerator_PeerBase_get_ServerAddress_mA7E7F80FEE805DBB212AF7E558A2845131FDDB54,
	PeerBase_t6F0EB1375F3540EFDC56DEBC88027D5529AC638E_CustomAttributesCacheGenerator_PeerBase_set_ServerAddress_m382F91B33DF6DEAEBB5191B9C6AB34049FD616CD,
	EnetPeer_tFF6188A779A2E2C154FDC12523CD0DF1BCDB3EFC_CustomAttributesCacheGenerator_EnetPeer_U3CExecuteCommandU3Eb__71_0_mE7D1F2D42909184BE81ED8C53C41FCB57B07163E,
	IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_IPhotonSocket_get_State_m9B6BDA0F509522BD27549D848B7C79068A11009E,
	IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_IPhotonSocket_set_State_m561061B649CC14F858A3A3AEA7E620D120BD96FD,
	IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerAddress_mF66101883AFF93C721941082B5C30B8C09FCA724,
	IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerAddress_m610409735783D00E51F7075A8C3650DC57F6C96B,
	IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerIpAddress_mD82E8AAF3668C047039379EE072ED1645633CB12,
	IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerPort_mAF2DB9F8B0C4EB5CB229477F41D3FEE40DF9A374,
	IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerPort_m8B955247A1F73E2F3A94B2237FD9A8FF06616373,
	IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_IPhotonSocket_get_AddressResolvedAsIpv6_mAFB927F576C518F5C378F38088D71249EC56D546,
	IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_IPhotonSocket_set_AddressResolvedAsIpv6_mEBD0B1037C02D661FD217CEF445B84D04FDACEFA,
	IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_IPhotonSocket_set_UrlProtocol_m9E11FCC1D8A50704DA52FC4D74C674E50A5581AE,
	IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_IPhotonSocket_set_UrlPath_m8333DC912FD09DBB7E0ABF76366DE43C84D1EFA2,
	IPhotonSocket_t69DED2DF4DD3221FEC9887B79CE704C616FA2450_CustomAttributesCacheGenerator_IPhotonSocket_U3CHandleExceptionU3Eb__47_0_m744144BB60FB8CCC9E8CDE98D5CF67712F186BB1,
	SimulationItem_t98D041FC64C7B34CAFDAA272320E850A98C61D03_CustomAttributesCacheGenerator_SimulationItem_get_Delay_mF6B633BE12B94A3AF9782D9261FD717E04FD66E3,
	SimulationItem_t98D041FC64C7B34CAFDAA272320E850A98C61D03_CustomAttributesCacheGenerator_SimulationItem_set_Delay_mECB9D04392571DD41FF98ED64F017150DAE26815,
	NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesOut_m1A962F6111E19407FF60EEFEAB0E7A43BFD2AE36,
	NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesOut_m06FBD23C43986BFAE5637C4665640580C4815DE8,
	NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesIn_mE80FD67CF53A118FE81F3FDBF59095F4B72B081A,
	NetworkSimulationSet_t51BEC3AB848415050B5318871A78581A48D46700_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesIn_mBF2AE4E3B6F7BED506C8D01688BB946BF8BEA224,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationByteCount_mB64819EFCB70B6572CFBE4E1515138C1B2FCF581,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationByteCount_mEDB98137732D5E621BA1BA643E329227259E1DAA,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationCount_mE7CE76E1D7A0AF79321923D3E919312258C8FE4F,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationCount_m297655F7E10B3E0F0B13C5EA462617743B66B142,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultByteCount_m2653884EC6249526DEDCFDC8B84261891FA92DB4,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultByteCount_m64FDA75C563C79CD52F5ACBCBA10F5D789EF90A0,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultCount_m1459D5FC1B895A843319C41876EC39BA5543D53D,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultCount_mE73872DDF66BE2774DB8EFFAC85695D68259E861,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventByteCount_m92B49AB91772BB93DA89415377959EF2D08F2364,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventByteCount_m0CC6103A37777150CC1BAD50C677E49377116657,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventCount_m1E8D33401FF5A990C3B0A49D6D82A9A20E97BFD0,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventCount_mD29E0AC16A1664F6E53C02376102D0641314FAE6,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestOpResponseCallback_m4F647D059F912765CDB7CF638A8AAF1ACAD92103,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallback_m1FD030542D606D20E6D85B7BC9BC651ED078D2EC,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m9BB3DB3CB2CB11ADC1ACC5BBB01CA519307072CC,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestEventCallback_mB4D58DB2D26D19CC3ADF7F1823CDC7A1176269FD,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallback_m903E43D16BF2BF993A00703639BBF2DA907AE95C,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestMessageCallback_m468BA5CAB531399A069CB10E78F4E6FA09749585,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestMessageCallback_m318984DDF76D09D7CEA1B55058B943E09DBB8CEA,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestRawMessageCallback_mF5772661A2462E874AB2E42FB54DE7A53E037FC0,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestRawMessageCallback_mBA68F54737D0469F336800B225B2763D13338F8C,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallbackCode_m5A0E46AA270DE92380201706B2263E35343AB21D,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m0015D2B4A9D8D1033C690F1CC39DBA4F5EEE6012,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_m809211B35F40E1353F14E1C98445F77CA1F295DC,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m9B503973DE53D4DBDCD95F1B6DC0D47884605B13,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m31F1FF20EFE1B569B5C9CC1BAE7920F2D4219A38,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_mC35B5253CF22E6E5FD1C791796AE22F56DDEB4A4,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_m31072490D8A152338F9BFB699E34F4FBECA78150,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m1DBA253FEDA2BEEFE80D33F37B2D4B6B950E3DE3,
	TrafficStatsGameLevel_t00E765BDC0DE0BB41FCFCD06F4496190A72DEC94_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_m004140F666BCF1D4030D2E0EC61B03EA599F7C3A,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_get_PackageHeaderSize_mB017BAC94EF63BECD84CB481AABC4289F730FD52,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_set_PackageHeaderSize_m629EA88CE88D1D789514B9C29CADDB7BFE3EEEB8,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandCount_m472DFAF2E34589749224D616AC8D47BF4843A630,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandCount_mA40960EA03CDFBCCF5BC8B44C40457B00F86E086,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandCount_mCBA1C05C361436F087E46C091431822B17BED70F,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandCount_m672E7A069071E1CD0034DCE5756B74EB6AA141DB,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandCount_mEDE6B288153489A720CED23BAA3DA931A69B0C73,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandCount_m18BC1184FFBBDACAF2D17DB72EF76DC72EE05876,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandCount_mB9D4A64BDA2ACFB1A56E557D54F02058166EE6DD,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandCount_m16832B6129692177B3B74081CA123A313E91CD44,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_get_TotalPacketCount_mE015927A5D7C83F3CC6995555A1F3A6A154105A8,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_set_TotalPacketCount_m3CFB7931269E8D1C9AB2510F7AE2B1C05EF06B3D,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_get_TotalCommandsInPackets_m80ECAC905B710985007A4C48F9E74626BA99F6C5,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_set_TotalCommandsInPackets_m5AE4B9EDDDEF6027FC766797392726661FA54B44,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandBytes_m3C2A887D6C82747DD5AC700B3A37C9A5DCC829BB,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandBytes_m95BCBE6564514DD194D5BC756C37780DA704BAC0,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandBytes_m5BBE27DD24E1342E13AFF3B9E004EC14FC14D2DB,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandBytes_mEE5260D4BAE8902322E5B9DAABE37D478DF81F27,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandBytes_m1F3C837FF7B6EFEA99200911BCC1FB98B5675A36,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandBytes_m3D74AACBAC53D6F1B9FB1D2DDA6518614B94EA53,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandBytes_mE1A2ED6660E5461C485A31CEF992F83FB276D9CA,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandBytes_mBC8E2A1FFD5F68EC38657FC2E7040EB3261069E5,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastAck_m5F7715C799D76D91C06A060A7A11FA2173CFB8B0,
	TrafficStats_t229AE1E2E5E4085FDAB63CC29500D72C2D3029C0_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastReliableCommand_mF6A130EF0F315A9289C89AA993DBDD17AC815BFF,
	Photon3Unity3D_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}

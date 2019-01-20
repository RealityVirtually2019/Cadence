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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Video.VideoClip
struct VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1;

extern RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var;
extern const uint32_t FrameReadyEventHandler_BeginInvoke_m5DA99DFE61C78E158FF79535447F7649FC09E5F1_MetadataUsageId;
extern const uint32_t TimeEventHandler_BeginInvoke_m184CF1FDB1D643F00FE3C60982ED62EC4888F21D_MetadataUsageId;
extern const uint32_t VideoClipPlayable_Equals_m2F07E6EBA96043274F2384F18E43B66035058BC2_MetadataUsageId;
extern const uint32_t VideoClip__ctor_m9BB7ECD808FCBD3DA63594134BEEC12B17852117_MetadataUsageId;
extern const uint32_t VideoPlayer_add_prepareCompleted_mA09867482AAB164B8AA6820FFE57E3F391CB8FE4_MetadataUsageId;
extern const uint32_t VideoPlayer_remove_prepareCompleted_m6BBFD6B47A7627DA597319ADA50403B8C0F02186_MetadataUsageId;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;


#ifndef U3CMODULEU3E_T064756C4EE8D64CEFE107E600CEBCB3F77894990_H
#define U3CMODULEU3E_T064756C4EE8D64CEFE107E600CEBCB3F77894990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t064756C4EE8D64CEFE107E600CEBCB3F77894990 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T064756C4EE8D64CEFE107E600CEBCB3F77894990_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#define DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#define INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#define UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
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
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#endif // DELEGATE_T_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef PLAYABLEHANDLE_T9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_H
#define PLAYABLEHANDLE_T9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Null_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_H
#ifndef VIDEO3DLAYOUT_T5F64D0CE5E9B37C2FCE67F397FA5CFE9C047E4A1_H
#define VIDEO3DLAYOUT_T5F64D0CE5E9B37C2FCE67F397FA5CFE9C047E4A1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.Video3DLayout
struct  Video3DLayout_t5F64D0CE5E9B37C2FCE67F397FA5CFE9C047E4A1 
{
public:
	// System.Int32 UnityEngine.Video.Video3DLayout::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Video3DLayout_t5F64D0CE5E9B37C2FCE67F397FA5CFE9C047E4A1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEO3DLAYOUT_T5F64D0CE5E9B37C2FCE67F397FA5CFE9C047E4A1_H
#ifndef VIDEOASPECTRATIO_T5739968D28C4F8F802B085E293F22110205B8379_H
#define VIDEOASPECTRATIO_T5739968D28C4F8F802B085E293F22110205B8379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoAspectRatio
struct  VideoAspectRatio_t5739968D28C4F8F802B085E293F22110205B8379 
{
public:
	// System.Int32 UnityEngine.Video.VideoAspectRatio::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoAspectRatio_t5739968D28C4F8F802B085E293F22110205B8379, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOASPECTRATIO_T5739968D28C4F8F802B085E293F22110205B8379_H
#ifndef VIDEOAUDIOOUTPUTMODE_T8CDE10B382F3C321345EC57C9164A9177139DC6F_H
#define VIDEOAUDIOOUTPUTMODE_T8CDE10B382F3C321345EC57C9164A9177139DC6F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoAudioOutputMode
struct  VideoAudioOutputMode_t8CDE10B382F3C321345EC57C9164A9177139DC6F 
{
public:
	// System.Int32 UnityEngine.Video.VideoAudioOutputMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoAudioOutputMode_t8CDE10B382F3C321345EC57C9164A9177139DC6F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOAUDIOOUTPUTMODE_T8CDE10B382F3C321345EC57C9164A9177139DC6F_H
#ifndef VIDEORENDERMODE_T0DBAABB576FDA890C49C6AD3EE641623F93E9161_H
#define VIDEORENDERMODE_T0DBAABB576FDA890C49C6AD3EE641623F93E9161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoRenderMode
struct  VideoRenderMode_t0DBAABB576FDA890C49C6AD3EE641623F93E9161 
{
public:
	// System.Int32 UnityEngine.Video.VideoRenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoRenderMode_t0DBAABB576FDA890C49C6AD3EE641623F93E9161, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEORENDERMODE_T0DBAABB576FDA890C49C6AD3EE641623F93E9161_H
#ifndef VIDEOSOURCE_T32501B57EA7F9CF835FBA8184C9AF427CBBEFD0A_H
#define VIDEOSOURCE_T32501B57EA7F9CF835FBA8184C9AF427CBBEFD0A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoSource
struct  VideoSource_t32501B57EA7F9CF835FBA8184C9AF427CBBEFD0A 
{
public:
	// System.Int32 UnityEngine.Video.VideoSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoSource_t32501B57EA7F9CF835FBA8184C9AF427CBBEFD0A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOSOURCE_T32501B57EA7F9CF835FBA8184C9AF427CBBEFD0A_H
#ifndef VIDEOTIMEREFERENCE_T9EAEBD354AE5E56F0D0F36E73A428BB2A0B8B31B_H
#define VIDEOTIMEREFERENCE_T9EAEBD354AE5E56F0D0F36E73A428BB2A0B8B31B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoTimeReference
struct  VideoTimeReference_t9EAEBD354AE5E56F0D0F36E73A428BB2A0B8B31B 
{
public:
	// System.Int32 UnityEngine.Video.VideoTimeReference::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoTimeReference_t9EAEBD354AE5E56F0D0F36E73A428BB2A0B8B31B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOTIMEREFERENCE_T9EAEBD354AE5E56F0D0F36E73A428BB2A0B8B31B_H
#ifndef VIDEOTIMESOURCE_T15F04FD6B3D75A8D98480E8B77117C0FF691BB77_H
#define VIDEOTIMESOURCE_T15F04FD6B3D75A8D98480E8B77117C0FF691BB77_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoTimeSource
struct  VideoTimeSource_t15F04FD6B3D75A8D98480E8B77117C0FF691BB77 
{
public:
	// System.Int32 UnityEngine.Video.VideoTimeSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoTimeSource_t15F04FD6B3D75A8D98480E8B77117C0FF691BB77, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOTIMESOURCE_T15F04FD6B3D75A8D98480E8B77117C0FF691BB77_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef VIDEOCLIPPLAYABLE_T4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12_H
#define VIDEOCLIPPLAYABLE_T4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Video.VideoClipPlayable
struct  VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Video.VideoClipPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOCLIPPLAYABLE_T4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12_H
#ifndef TEXTURE_T387FE83BB848001FD06B14707AEA6D5A0F6A95F4_H
#define TEXTURE_T387FE83BB848001FD06B14707AEA6D5A0F6A95F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T387FE83BB848001FD06B14707AEA6D5A0F6A95F4_H
#ifndef VIDEOCLIP_TA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5_H
#define VIDEOCLIP_TA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoClip
struct  VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOCLIP_TA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5_H
#ifndef ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#define ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef ERROREVENTHANDLER_TF5863946928B48BE13146ED5FF70AC92678FE222_H
#define ERROREVENTHANDLER_TF5863946928B48BE13146ED5FF70AC92678FE222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct  ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERROREVENTHANDLER_TF5863946928B48BE13146ED5FF70AC92678FE222_H
#ifndef EVENTHANDLER_T5069D72E1ED46BD04F19D8D4534811B95A8E2308_H
#define EVENTHANDLER_T5069D72E1ED46BD04F19D8D4534811B95A8E2308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer/EventHandler
struct  EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_T5069D72E1ED46BD04F19D8D4534811B95A8E2308_H
#ifndef FRAMEREADYEVENTHANDLER_T518B277D916AB292680CAA186BCDB3D3EF130422_H
#define FRAMEREADYEVENTHANDLER_T518B277D916AB292680CAA186BCDB3D3EF130422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct  FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMEREADYEVENTHANDLER_T518B277D916AB292680CAA186BCDB3D3EF130422_H
#ifndef TIMEEVENTHANDLER_TDD815DAABFADDD98C8993B2A97A2FCE858266BC1_H
#define TIMEEVENTHANDLER_TDD815DAABFADDD98C8993B2A97A2FCE858266BC1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct  TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEEVENTHANDLER_TDD815DAABFADDD98C8993B2A97A2FCE858266BC1_H
#ifndef AUDIOBEHAVIOUR_TC612EC4E17A648A5C568621F3FBF1DBD773C71C7_H
#define AUDIOBEHAVIOUR_TC612EC4E17A648A5C568621F3FBF1DBD773C71C7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOBEHAVIOUR_TC612EC4E17A648A5C568621F3FBF1DBD773C71C7_H
#ifndef VIDEOPLAYER_TFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2_H
#define VIDEOPLAYER_TFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer
struct  VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___started_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 * ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * ___frameReady_11;

public:
	inline static int32_t get_offset_of_prepareCompleted_4() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___prepareCompleted_4)); }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * get_prepareCompleted_4() const { return ___prepareCompleted_4; }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** get_address_of_prepareCompleted_4() { return &___prepareCompleted_4; }
	inline void set_prepareCompleted_4(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * value)
	{
		___prepareCompleted_4 = value;
		Il2CppCodeGenWriteBarrier((&___prepareCompleted_4), value);
	}

	inline static int32_t get_offset_of_loopPointReached_5() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___loopPointReached_5)); }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * get_loopPointReached_5() const { return ___loopPointReached_5; }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** get_address_of_loopPointReached_5() { return &___loopPointReached_5; }
	inline void set_loopPointReached_5(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * value)
	{
		___loopPointReached_5 = value;
		Il2CppCodeGenWriteBarrier((&___loopPointReached_5), value);
	}

	inline static int32_t get_offset_of_started_6() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___started_6)); }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * get_started_6() const { return ___started_6; }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** get_address_of_started_6() { return &___started_6; }
	inline void set_started_6(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * value)
	{
		___started_6 = value;
		Il2CppCodeGenWriteBarrier((&___started_6), value);
	}

	inline static int32_t get_offset_of_frameDropped_7() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___frameDropped_7)); }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * get_frameDropped_7() const { return ___frameDropped_7; }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** get_address_of_frameDropped_7() { return &___frameDropped_7; }
	inline void set_frameDropped_7(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * value)
	{
		___frameDropped_7 = value;
		Il2CppCodeGenWriteBarrier((&___frameDropped_7), value);
	}

	inline static int32_t get_offset_of_errorReceived_8() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___errorReceived_8)); }
	inline ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * get_errorReceived_8() const { return ___errorReceived_8; }
	inline ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 ** get_address_of_errorReceived_8() { return &___errorReceived_8; }
	inline void set_errorReceived_8(ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * value)
	{
		___errorReceived_8 = value;
		Il2CppCodeGenWriteBarrier((&___errorReceived_8), value);
	}

	inline static int32_t get_offset_of_seekCompleted_9() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___seekCompleted_9)); }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * get_seekCompleted_9() const { return ___seekCompleted_9; }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** get_address_of_seekCompleted_9() { return &___seekCompleted_9; }
	inline void set_seekCompleted_9(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * value)
	{
		___seekCompleted_9 = value;
		Il2CppCodeGenWriteBarrier((&___seekCompleted_9), value);
	}

	inline static int32_t get_offset_of_clockResyncOccurred_10() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___clockResyncOccurred_10)); }
	inline TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 * get_clockResyncOccurred_10() const { return ___clockResyncOccurred_10; }
	inline TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 ** get_address_of_clockResyncOccurred_10() { return &___clockResyncOccurred_10; }
	inline void set_clockResyncOccurred_10(TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 * value)
	{
		___clockResyncOccurred_10 = value;
		Il2CppCodeGenWriteBarrier((&___clockResyncOccurred_10), value);
	}

	inline static int32_t get_offset_of_frameReady_11() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___frameReady_11)); }
	inline FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * get_frameReady_11() const { return ___frameReady_11; }
	inline FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 ** get_address_of_frameReady_11() { return &___frameReady_11; }
	inline void set_frameReady_11(FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * value)
	{
		___frameReady_11 = value;
		Il2CppCodeGenWriteBarrier((&___frameReady_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOPLAYER_TFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2_H
#ifndef AUDIOSOURCE_T5196F862B4E60F404613361C90D87FBDD041E93C_H
#define AUDIOSOURCE_T5196F862B4E60F404613361C90D87FBDD041E93C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C  : public AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * ___spatializerExtension_4;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * ___ambisonicExtension_5;

public:
	inline static int32_t get_offset_of_spatializerExtension_4() { return static_cast<int32_t>(offsetof(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C, ___spatializerExtension_4)); }
	inline AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * get_spatializerExtension_4() const { return ___spatializerExtension_4; }
	inline AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 ** get_address_of_spatializerExtension_4() { return &___spatializerExtension_4; }
	inline void set_spatializerExtension_4(AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * value)
	{
		___spatializerExtension_4 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_4), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_5() { return static_cast<int32_t>(offsetof(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C, ___ambisonicExtension_5)); }
	inline AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * get_ambisonicExtension_5() const { return ___ambisonicExtension_5; }
	inline AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 ** get_address_of_ambisonicExtension_5() { return &___ambisonicExtension_5; }
	inline void set_ambisonicExtension_5(AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * value)
	{
		___ambisonicExtension_5 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T5196F862B4E60F404613361C90D87FBDD041E93C_H
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};



// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Video.VideoClipPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  VideoClipPlayable_GetHandle_m5B2EFD8CFE93DB4D2EE29A600E598233471DF242 (VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  p0, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.Video.VideoClipPlayable::Equals(UnityEngine.Experimental.Video.VideoClipPlayable)
extern "C" IL2CPP_METHOD_ATTR bool VideoClipPlayable_Equals_m2F07E6EBA96043274F2384F18E43B66035058BC2 (VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12 * __this, VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12  ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m091EBAEBC7919B0391ABDAFB7389ADC12206525B (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * p0, Delegate_t * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * p0, Delegate_t * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::Invoke(UnityEngine.Video.VideoPlayer)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_Invoke_m137A7D976F198147AD939AEF51E157107A3B1FBC (EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * __this, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void FrameReadyEventHandler_Invoke_m88D0AC1BED08D66B6CFA18DA23C58D10795DDA70 (FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * __this, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, int64_t ___frameIdx1, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.String)
extern "C" IL2CPP_METHOD_ATTR void ErrorEventHandler_Invoke_m0A812811B673439792D99C125EE4FFE5E358EF6C (ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * __this, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, String_t* ___message1, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer/TimeEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Double)
extern "C" IL2CPP_METHOD_ATTR void TimeEventHandler_Invoke_m278E51F2838EC435606BE1CB3AD0E881505FAE10 (TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 * __this, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, double ___seconds1, const RuntimeMethod* method);
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
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Video.VideoClipPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  VideoClipPlayable_GetHandle_m5B2EFD8CFE93DB4D2EE29A600E598233471DF242 (VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  VideoClipPlayable_GetHandle_m5B2EFD8CFE93DB4D2EE29A600E598233471DF242_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12 * _thisAdjusted = reinterpret_cast<VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12 *>(__this + 1);
	return VideoClipPlayable_GetHandle_m5B2EFD8CFE93DB4D2EE29A600E598233471DF242(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Experimental.Video.VideoClipPlayable::Equals(UnityEngine.Experimental.Video.VideoClipPlayable)
extern "C" IL2CPP_METHOD_ATTR bool VideoClipPlayable_Equals_m2F07E6EBA96043274F2384F18E43B66035058BC2 (VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12 * __this, VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoClipPlayable_Equals_m2F07E6EBA96043274F2384F18E43B66035058BC2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = VideoClipPlayable_GetHandle_m5B2EFD8CFE93DB4D2EE29A600E598233471DF242((VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12 *)__this, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = VideoClipPlayable_GetHandle_m5B2EFD8CFE93DB4D2EE29A600E598233471DF242((VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12 *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		bool L_2 = PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool VideoClipPlayable_Equals_m2F07E6EBA96043274F2384F18E43B66035058BC2_AdjustorThunk (RuntimeObject * __this, VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12  ___other0, const RuntimeMethod* method)
{
	VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12 * _thisAdjusted = reinterpret_cast<VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12 *>(__this + 1);
	return VideoClipPlayable_Equals_m2F07E6EBA96043274F2384F18E43B66035058BC2(_thisAdjusted, ___other0, method);
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
// System.Void UnityEngine.Video.VideoClip::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VideoClip__ctor_m9BB7ECD808FCBD3DA63594134BEEC12B17852117 (VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoClip__ctor_m9BB7ECD808FCBD3DA63594134BEEC12B17852117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object__ctor_m091EBAEBC7919B0391ABDAFB7389ADC12206525B(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Video.VideoClip::get_originalPath()
extern "C" IL2CPP_METHOD_ATTR String_t* VideoClip_get_originalPath_m2A5B5BD6026E06E89487B1D6FE3ACF4BED358F79 (VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * __this, const RuntimeMethod* method)
{
	typedef String_t* (*VideoClip_get_originalPath_m2A5B5BD6026E06E89487B1D6FE3ACF4BED358F79_ftn) (VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 *);
	static VideoClip_get_originalPath_m2A5B5BD6026E06E89487B1D6FE3ACF4BED358F79_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_originalPath_m2A5B5BD6026E06E89487B1D6FE3ACF4BED358F79_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_originalPath()");
	String_t* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Double UnityEngine.Video.VideoClip::get_length()
extern "C" IL2CPP_METHOD_ATTR double VideoClip_get_length_m33EC3F6A3D2F851ECC2B672D1603F956AB1887FB (VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * __this, const RuntimeMethod* method)
{
	typedef double (*VideoClip_get_length_m33EC3F6A3D2F851ECC2B672D1603F956AB1887FB_ftn) (VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 *);
	static VideoClip_get_length_m33EC3F6A3D2F851ECC2B672D1603F956AB1887FB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_length_m33EC3F6A3D2F851ECC2B672D1603F956AB1887FB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_length()");
	double retVal = _il2cpp_icall_func(__this);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Video.VideoSource UnityEngine.Video.VideoPlayer::get_source()
extern "C" IL2CPP_METHOD_ATTR int32_t VideoPlayer_get_source_m0B59B963847A0C4F206697FB61C618D9621949E4 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*VideoPlayer_get_source_m0B59B963847A0C4F206697FB61C618D9621949E4_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_source_m0B59B963847A0C4F206697FB61C618D9621949E4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_source_m0B59B963847A0C4F206697FB61C618D9621949E4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_source()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_source(UnityEngine.Video.VideoSource)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_set_source_mE27652C749468B4A44FE3557BA809C503C849ABE (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_source_mE27652C749468B4A44FE3557BA809C503C849ABE_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int32_t);
	static VideoPlayer_set_source_mE27652C749468B4A44FE3557BA809C503C849ABE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_source_mE27652C749468B4A44FE3557BA809C503C849ABE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_source(UnityEngine.Video.VideoSource)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.String UnityEngine.Video.VideoPlayer::get_url()
extern "C" IL2CPP_METHOD_ATTR String_t* VideoPlayer_get_url_mC8F4EC64F3938721095E741897A83F4A35741203 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef String_t* (*VideoPlayer_get_url_mC8F4EC64F3938721095E741897A83F4A35741203_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_url_mC8F4EC64F3938721095E741897A83F4A35741203_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_url_mC8F4EC64F3938721095E741897A83F4A35741203_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_url()");
	String_t* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_url(System.String)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_set_url_m076BC425E754574E8DFCDFA7AC2A37A3EFD5AF21 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_url_m076BC425E754574E8DFCDFA7AC2A37A3EFD5AF21_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t*);
	static VideoPlayer_set_url_m076BC425E754574E8DFCDFA7AC2A37A3EFD5AF21_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_url_m076BC425E754574E8DFCDFA7AC2A37A3EFD5AF21_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_url(System.String)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Video.VideoClip UnityEngine.Video.VideoPlayer::get_clip()
extern "C" IL2CPP_METHOD_ATTR VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * VideoPlayer_get_clip_mA2C3AC016BB7B09855C56A11843AE60EB4D36B76 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * (*VideoPlayer_get_clip_mA2C3AC016BB7B09855C56A11843AE60EB4D36B76_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_clip_mA2C3AC016BB7B09855C56A11843AE60EB4D36B76_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_clip_mA2C3AC016BB7B09855C56A11843AE60EB4D36B76_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_clip()");
	VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_renderMode(UnityEngine.Video.VideoRenderMode)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_set_renderMode_m9DC3CFC4B99F66FA6E6116379D8C7F64D798CB63 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_renderMode_m9DC3CFC4B99F66FA6E6116379D8C7F64D798CB63_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int32_t);
	static VideoPlayer_set_renderMode_m9DC3CFC4B99F66FA6E6116379D8C7F64D798CB63_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_renderMode_m9DC3CFC4B99F66FA6E6116379D8C7F64D798CB63_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_renderMode(UnityEngine.Video.VideoRenderMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Texture UnityEngine.Video.VideoPlayer::get_texture()
extern "C" IL2CPP_METHOD_ATTR Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * VideoPlayer_get_texture_m7FEBFE07CDB830FCAD4B5B2D7EF63D12E8C034CC (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * (*VideoPlayer_get_texture_m7FEBFE07CDB830FCAD4B5B2D7EF63D12E8C034CC_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_texture_m7FEBFE07CDB830FCAD4B5B2D7EF63D12E8C034CC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_texture_m7FEBFE07CDB830FCAD4B5B2D7EF63D12E8C034CC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_texture()");
	Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::Prepare()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_Prepare_m32AB43745A92A6762D570E60975AD69DB8FFF566 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_Prepare_m32AB43745A92A6762D570E60975AD69DB8FFF566_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_Prepare_m32AB43745A92A6762D570E60975AD69DB8FFF566_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_Prepare_m32AB43745A92A6762D570E60975AD69DB8FFF566_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::Prepare()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Video.VideoPlayer::Play()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_Play_m2BCD775F42A36AC291C7B32D9E4D934EF0B91257 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_Play_m2BCD775F42A36AC291C7B32D9E4D934EF0B91257_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_Play_m2BCD775F42A36AC291C7B32D9E4D934EF0B91257_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_Play_m2BCD775F42A36AC291C7B32D9E4D934EF0B91257_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::Play()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Video.VideoPlayer::Pause()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_Pause_m62EE5660CFA287D78BB3FE815CA5649242509B93 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_Pause_m62EE5660CFA287D78BB3FE815CA5649242509B93_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_Pause_m62EE5660CFA287D78BB3FE815CA5649242509B93_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_Pause_m62EE5660CFA287D78BB3FE815CA5649242509B93_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::Pause()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Video.VideoPlayer::Stop()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_Stop_mBEDCB786A42A95603F9D8B7763DEC3BD97565852 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_Stop_mBEDCB786A42A95603F9D8B7763DEC3BD97565852_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_Stop_mBEDCB786A42A95603F9D8B7763DEC3BD97565852_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_Stop_mBEDCB786A42A95603F9D8B7763DEC3BD97565852_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::Stop()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPlaying_mC7CFE17762C14F2AFB1D73500317B9D25A7395DF (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_isPlaying_mC7CFE17762C14F2AFB1D73500317B9D25A7395DF_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_isPlaying_mC7CFE17762C14F2AFB1D73500317B9D25A7395DF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_isPlaying_mC7CFE17762C14F2AFB1D73500317B9D25A7395DF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_isPlaying()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Double UnityEngine.Video.VideoPlayer::get_time()
extern "C" IL2CPP_METHOD_ATTR double VideoPlayer_get_time_mF842FC1E9A1FD2333C7C9D13338D3B178665564A (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef double (*VideoPlayer_get_time_mF842FC1E9A1FD2333C7C9D13338D3B178665564A_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_time_mF842FC1E9A1FD2333C7C9D13338D3B178665564A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_time_mF842FC1E9A1FD2333C7C9D13338D3B178665564A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_time()");
	double retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int64 UnityEngine.Video.VideoPlayer::get_frame()
extern "C" IL2CPP_METHOD_ATTR int64_t VideoPlayer_get_frame_mB7F5972A74C2D4039855454F552AD08BF12F30A0 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef int64_t (*VideoPlayer_get_frame_mB7F5972A74C2D4039855454F552AD08BF12F30A0_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_frame_mB7F5972A74C2D4039855454F552AD08BF12F30A0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_frame_mB7F5972A74C2D4039855454F552AD08BF12F30A0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_frame()");
	int64_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::EnableAudioTrack(System.UInt16,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_EnableAudioTrack_m30901BF68B20BB8397E246FDDE699E5D513AAA5B (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, uint16_t ___trackIndex0, bool ___enabled1, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_EnableAudioTrack_m30901BF68B20BB8397E246FDDE699E5D513AAA5B_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, uint16_t, bool);
	static VideoPlayer_EnableAudioTrack_m30901BF68B20BB8397E246FDDE699E5D513AAA5B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_EnableAudioTrack_m30901BF68B20BB8397E246FDDE699E5D513AAA5B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::EnableAudioTrack(System.UInt16,System.Boolean)");
	_il2cpp_icall_func(__this, ___trackIndex0, ___enabled1);
}
// System.Void UnityEngine.Video.VideoPlayer::set_audioOutputMode(UnityEngine.Video.VideoAudioOutputMode)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_set_audioOutputMode_m95A8791FE87A490EAEF1959E7597E0CC1659227F (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_audioOutputMode_m95A8791FE87A490EAEF1959E7597E0CC1659227F_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int32_t);
	static VideoPlayer_set_audioOutputMode_m95A8791FE87A490EAEF1959E7597E0CC1659227F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_audioOutputMode_m95A8791FE87A490EAEF1959E7597E0CC1659227F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_audioOutputMode(UnityEngine.Video.VideoAudioOutputMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Video.VideoPlayer::SetTargetAudioSource(System.UInt16,UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_SetTargetAudioSource_m98880F0925C0E7DDFCB946563A23613CFFC494FE (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, uint16_t ___trackIndex0, AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___source1, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_SetTargetAudioSource_m98880F0925C0E7DDFCB946563A23613CFFC494FE_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, uint16_t, AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *);
	static VideoPlayer_SetTargetAudioSource_m98880F0925C0E7DDFCB946563A23613CFFC494FE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_SetTargetAudioSource_m98880F0925C0E7DDFCB946563A23613CFFC494FE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::SetTargetAudioSource(System.UInt16,UnityEngine.AudioSource)");
	_il2cpp_icall_func(__this, ___trackIndex0, ___source1);
}
// System.Void UnityEngine.Video.VideoPlayer::add_prepareCompleted(UnityEngine.Video.VideoPlayer/EventHandler)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_add_prepareCompleted_mA09867482AAB164B8AA6820FFE57E3F391CB8FE4 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_add_prepareCompleted_mA09867482AAB164B8AA6820FFE57E3F391CB8FE4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_0 = NULL;
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_1 = NULL;
	{
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_0 = __this->get_prepareCompleted_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** L_2 = __this->get_address_of_prepareCompleted_4();
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_3 = V_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_6 = V_0;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_7 = InterlockedCompareExchangeImpl<EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *>((EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 **)L_2, ((EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_8 = V_0;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_8) == ((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_prepareCompleted(UnityEngine.Video.VideoPlayer/EventHandler)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_remove_prepareCompleted_m6BBFD6B47A7627DA597319ADA50403B8C0F02186 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_remove_prepareCompleted_m6BBFD6B47A7627DA597319ADA50403B8C0F02186_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_0 = NULL;
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_1 = NULL;
	{
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_0 = __this->get_prepareCompleted_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** L_2 = __this->get_address_of_prepareCompleted_4();
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_3 = V_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_6 = V_0;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_7 = InterlockedCompareExchangeImpl<EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *>((EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 **)L_2, ((EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_8 = V_0;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_8) == ((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokePrepareCompletedCallback_Internal(UnityEngine.Video.VideoPlayer)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_InvokePrepareCompletedCallback_Internal_m4CFD7054C97BE95CAC055CF18466E90D060E9B53 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, const RuntimeMethod* method)
{
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_1 = L_0->get_prepareCompleted_4();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_2 = ___source0;
		NullCheck(L_2);
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_3 = L_2->get_prepareCompleted_4();
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_4 = ___source0;
		NullCheck(L_3);
		EventHandler_Invoke_m137A7D976F198147AD939AEF51E157107A3B1FBC(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeFrameReadyCallback_Internal(UnityEngine.Video.VideoPlayer,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_InvokeFrameReadyCallback_Internal_m4F62FC3695CFC72045E3C90503D541AE6E023EE8 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, int64_t ___frameIdx1, const RuntimeMethod* method)
{
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_0 = ___source0;
		NullCheck(L_0);
		FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * L_1 = L_0->get_frameReady_11();
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_2 = ___source0;
		NullCheck(L_2);
		FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * L_3 = L_2->get_frameReady_11();
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_4 = ___source0;
		int64_t L_5 = ___frameIdx1;
		NullCheck(L_3);
		FrameReadyEventHandler_Invoke_m88D0AC1BED08D66B6CFA18DA23C58D10795DDA70(L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeLoopPointReachedCallback_Internal(UnityEngine.Video.VideoPlayer)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_InvokeLoopPointReachedCallback_Internal_m1A07EB382FD3CE673FF171A11047BEC54A6BB9AB (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, const RuntimeMethod* method)
{
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_1 = L_0->get_loopPointReached_5();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_2 = ___source0;
		NullCheck(L_2);
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_3 = L_2->get_loopPointReached_5();
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_4 = ___source0;
		NullCheck(L_3);
		EventHandler_Invoke_m137A7D976F198147AD939AEF51E157107A3B1FBC(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeStartedCallback_Internal(UnityEngine.Video.VideoPlayer)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_InvokeStartedCallback_Internal_m28D5BF153FC37959C225292BE859135FF778C8BB (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, const RuntimeMethod* method)
{
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_1 = L_0->get_started_6();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_2 = ___source0;
		NullCheck(L_2);
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_3 = L_2->get_started_6();
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_4 = ___source0;
		NullCheck(L_3);
		EventHandler_Invoke_m137A7D976F198147AD939AEF51E157107A3B1FBC(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeFrameDroppedCallback_Internal(UnityEngine.Video.VideoPlayer)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_InvokeFrameDroppedCallback_Internal_m669EAEF06893B53351EE81C3858BD62661228C58 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, const RuntimeMethod* method)
{
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_1 = L_0->get_frameDropped_7();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_2 = ___source0;
		NullCheck(L_2);
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_3 = L_2->get_frameDropped_7();
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_4 = ___source0;
		NullCheck(L_3);
		EventHandler_Invoke_m137A7D976F198147AD939AEF51E157107A3B1FBC(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeErrorReceivedCallback_Internal(UnityEngine.Video.VideoPlayer,System.String)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_InvokeErrorReceivedCallback_Internal_mF7849030756F4A2B5226437C165ECDFE6E52E385 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, String_t* ___errorStr1, const RuntimeMethod* method)
{
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_0 = ___source0;
		NullCheck(L_0);
		ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * L_1 = L_0->get_errorReceived_8();
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_2 = ___source0;
		NullCheck(L_2);
		ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * L_3 = L_2->get_errorReceived_8();
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_4 = ___source0;
		String_t* L_5 = ___errorStr1;
		NullCheck(L_3);
		ErrorEventHandler_Invoke_m0A812811B673439792D99C125EE4FFE5E358EF6C(L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeSeekCompletedCallback_Internal(UnityEngine.Video.VideoPlayer)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_InvokeSeekCompletedCallback_Internal_mFFB686F5BF044F61495CCF2EFB3517857F98C078 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, const RuntimeMethod* method)
{
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_1 = L_0->get_seekCompleted_9();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_2 = ___source0;
		NullCheck(L_2);
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_3 = L_2->get_seekCompleted_9();
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_4 = ___source0;
		NullCheck(L_3);
		EventHandler_Invoke_m137A7D976F198147AD939AEF51E157107A3B1FBC(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeClockResyncOccurredCallback_Internal(UnityEngine.Video.VideoPlayer,System.Double)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_InvokeClockResyncOccurredCallback_Internal_m21D2B32DDE5ED48F6D6F2ECA9B7A0A2724AF9D6F (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, double ___seconds1, const RuntimeMethod* method)
{
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_0 = ___source0;
		NullCheck(L_0);
		TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 * L_1 = L_0->get_clockResyncOccurred_10();
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_2 = ___source0;
		NullCheck(L_2);
		TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 * L_3 = L_2->get_clockResyncOccurred_10();
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_4 = ___source0;
		double L_5 = ___seconds1;
		NullCheck(L_3);
		TimeEventHandler_Invoke_m278E51F2838EC435606BE1CB3AD0E881505FAE10(L_3, L_4, L_5, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ErrorEventHandler__ctor_m9E9B3A7A439858703258976491E29057CB17F534 (ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.String)
extern "C" IL2CPP_METHOD_ATTR void ErrorEventHandler_Invoke_m0A812811B673439792D99C125EE4FFE5E358EF6C (ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * __this, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, String_t* ___message1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___message1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___message1, targetMethod);
				}
			}
			else if (___parameterCount != 2)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___source0, ___message1);
							else
								GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___source0, ___message1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0, ___message1);
							else
								VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0, ___message1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___message1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t*, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___source0, ___message1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t* >::Invoke(targetMethod, targetThis, ___source0, ___message1);
							else
								GenericVirtActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t* >::Invoke(targetMethod, targetThis, ___source0, ___message1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___message1);
							else
								VirtActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___message1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___message1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___message1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___message1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___source0, ___message1);
						else
							GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___source0, ___message1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0, ___message1);
						else
							VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0, ___message1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___message1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t*, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___source0, ___message1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t* >::Invoke(targetMethod, targetThis, ___source0, ___message1);
						else
							GenericVirtActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t* >::Invoke(targetMethod, targetThis, ___source0, ___message1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___message1);
						else
							VirtActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___message1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___message1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Video.VideoPlayer/ErrorEventHandler::BeginInvoke(UnityEngine.Video.VideoPlayer,System.String,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ErrorEventHandler_BeginInvoke_mD4C6F60629C221D7702E40D460818B90032FBAA7 (ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * __this, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, String_t* ___message1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___source0;
	__d_args[1] = ___message1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ErrorEventHandler_EndInvoke_m7ABF3F8E15D2EF4AE6961324B66208A7FD127295 (ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void EventHandler__ctor_mA31DCA369A8B7C473F6CE19F6B53D6F3FAF7D6A7 (EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::Invoke(UnityEngine.Video.VideoPlayer)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_Invoke_m137A7D976F198147AD939AEF51E157107A3B1FBC (EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * __this, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, targetMethod);
				}
			}
			else if (___parameterCount != 1)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, ___source0);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, ___source0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___source0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * >::Invoke(targetMethod, targetThis, ___source0);
							else
								GenericVirtActionInvoker1< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * >::Invoke(targetMethod, targetThis, ___source0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0);
							else
								VirtActionInvoker1< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, ___source0);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, ___source0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___source0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * >::Invoke(targetMethod, targetThis, ___source0);
						else
							GenericVirtActionInvoker1< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * >::Invoke(targetMethod, targetThis, ___source0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0);
						else
							VirtActionInvoker1< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Video.VideoPlayer/EventHandler::BeginInvoke(UnityEngine.Video.VideoPlayer,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* EventHandler_BeginInvoke_mCA1B5193B15F3D56BCB40A8DDBA703724040F348 (EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * __this, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___source0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_EndInvoke_m95A975D9455F92F836E7E19BDB85538B1EBF4067 (EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void FrameReadyEventHandler__ctor_m7DFDBF9203E8F9FC1093E1655C5E2695623D7E3D (FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void FrameReadyEventHandler_Invoke_m88D0AC1BED08D66B6CFA18DA23C58D10795DDA70 (FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * __this, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, int64_t ___frameIdx1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int64_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___frameIdx1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int64_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___frameIdx1, targetMethod);
				}
			}
			else if (___parameterCount != 2)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< int64_t >::Invoke(targetMethod, ___source0, ___frameIdx1);
							else
								GenericVirtActionInvoker1< int64_t >::Invoke(targetMethod, ___source0, ___frameIdx1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0, ___frameIdx1);
							else
								VirtActionInvoker1< int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0, ___frameIdx1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int64_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___frameIdx1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int64_t, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___source0, ___frameIdx1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int64_t >::Invoke(targetMethod, targetThis, ___source0, ___frameIdx1);
							else
								GenericVirtActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int64_t >::Invoke(targetMethod, targetThis, ___source0, ___frameIdx1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___frameIdx1);
							else
								VirtActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___frameIdx1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int64_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___frameIdx1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___frameIdx1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___frameIdx1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< int64_t >::Invoke(targetMethod, ___source0, ___frameIdx1);
						else
							GenericVirtActionInvoker1< int64_t >::Invoke(targetMethod, ___source0, ___frameIdx1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0, ___frameIdx1);
						else
							VirtActionInvoker1< int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0, ___frameIdx1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___frameIdx1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int64_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___source0, ___frameIdx1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int64_t >::Invoke(targetMethod, targetThis, ___source0, ___frameIdx1);
						else
							GenericVirtActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int64_t >::Invoke(targetMethod, targetThis, ___source0, ___frameIdx1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___frameIdx1);
						else
							VirtActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___frameIdx1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___frameIdx1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::BeginInvoke(UnityEngine.Video.VideoPlayer,System.Int64,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* FrameReadyEventHandler_BeginInvoke_m5DA99DFE61C78E158FF79535447F7649FC09E5F1 (FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * __this, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, int64_t ___frameIdx1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FrameReadyEventHandler_BeginInvoke_m5DA99DFE61C78E158FF79535447F7649FC09E5F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___source0;
	__d_args[1] = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &___frameIdx1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void FrameReadyEventHandler_EndInvoke_mC54DCEDB2F8CB30CBC6CD1590E2C08150E3E0CFF (FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Video.VideoPlayer/TimeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TimeEventHandler__ctor_mF41715E69B793B1C7DCA3A619CFB05097466523F (TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Video.VideoPlayer/TimeEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Double)
extern "C" IL2CPP_METHOD_ATTR void TimeEventHandler_Invoke_m278E51F2838EC435606BE1CB3AD0E881505FAE10 (TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 * __this, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, double ___seconds1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___seconds1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___seconds1, targetMethod);
				}
			}
			else if (___parameterCount != 2)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< double >::Invoke(targetMethod, ___source0, ___seconds1);
							else
								GenericVirtActionInvoker1< double >::Invoke(targetMethod, ___source0, ___seconds1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0, ___seconds1);
							else
								VirtActionInvoker1< double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0, ___seconds1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___seconds1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___source0, ___seconds1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double >::Invoke(targetMethod, targetThis, ___source0, ___seconds1);
							else
								GenericVirtActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double >::Invoke(targetMethod, targetThis, ___source0, ___seconds1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___seconds1);
							else
								VirtActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___seconds1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___seconds1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___seconds1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___seconds1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< double >::Invoke(targetMethod, ___source0, ___seconds1);
						else
							GenericVirtActionInvoker1< double >::Invoke(targetMethod, ___source0, ___seconds1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0, ___seconds1);
						else
							VirtActionInvoker1< double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0, ___seconds1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___seconds1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___source0, ___seconds1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double >::Invoke(targetMethod, targetThis, ___source0, ___seconds1);
						else
							GenericVirtActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double >::Invoke(targetMethod, targetThis, ___source0, ___seconds1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___seconds1);
						else
							VirtActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___seconds1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___seconds1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Video.VideoPlayer/TimeEventHandler::BeginInvoke(UnityEngine.Video.VideoPlayer,System.Double,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TimeEventHandler_BeginInvoke_m184CF1FDB1D643F00FE3C60982ED62EC4888F21D (TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 * __this, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, double ___seconds1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeEventHandler_BeginInvoke_m184CF1FDB1D643F00FE3C60982ED62EC4888F21D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___source0;
	__d_args[1] = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &___seconds1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Video.VideoPlayer/TimeEventHandler::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void TimeEventHandler_EndInvoke_m2759449ABAAE5711D31E414D5906AB042725F7AA (TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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

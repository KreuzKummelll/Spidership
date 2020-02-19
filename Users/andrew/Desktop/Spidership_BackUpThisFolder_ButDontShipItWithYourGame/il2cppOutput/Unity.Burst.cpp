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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
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

// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int64,System.Type>[]
struct EntryU5BU5D_t7040BCF9754CC440CA2CC28237AFC4E154CAA309;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Type>
struct KeyCollection_tD778303E3A1526F596FA59EC1978813BDB23C9E6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Type>
struct ValueCollection_t98008CDBD840BEBBC4B09418AE1FBC29F9D5ED6F;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_tCD5D79DED1F046A086BA21623BFB989D9BE18860;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Type>
struct Dictionary_2_tDAE4B5F5C7B840CC35FD96E10CFFB0C7BF6485CE;
// System.Collections.Generic.IEnumerable`1<System.Attribute>
struct IEnumerable_1_t4AEBE881889574C860CD6E309C9C030D34EF7C8F;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_tA111E8E29826F4195DBA282CAAD4CFD77A11D250;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Unity.Burst.BurstCompileAttribute
struct BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7;
// Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate
struct IsBurstEnabledDelegate_t12ED78634550F19A1DD0FD73700C0D9082797719;
// Unity.Burst.BurstCompilerOptions
struct BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44;
// Unity.Burst.NoAliasAttribute
struct NoAliasAttribute_tA850247220274BC9848B40E2C27637426DC3D967;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompilerHelper_tD4C1607E644B44589A84D9E2D5DA4FADEA647A41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompiler_t0062A3F5AF87415C5FB2913A5DEC058CE790CD56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDAE4B5F5C7B840CC35FD96E10CFFB0C7BF6485CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t4AEBE881889574C860CD6E309C9C030D34EF7C8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t7E9F25E5E091DDC21E3633D2525ABC2F117EF588_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IsBurstEnabledDelegate_t12ED78634550F19A1DD0FD73700C0D9082797719_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SharedStatic_tF941444C1A1853F58BAF8284EBF7D9E5FFBC0BD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4934F3BF331C7DB57CC08B01709387E5F2F76930;
IL2CPP_EXTERN_C String_t* _stringLiteral5313CDFCA54BDCBEFE3ACDC77B281257D4101C39;
IL2CPP_EXTERN_C String_t* _stringLiteral6467BAA3B187373E3931422E2A8EF22F3E447D77;
IL2CPP_EXTERN_C String_t* _stringLiteral840EECA1DFF17D60FD9C87C4E7778E44469EC06A;
IL2CPP_EXTERN_C String_t* _stringLiteral878D0DA44486C7E5757BAA664D569286E71520D7;
IL2CPP_EXTERN_C String_t* _stringLiteralA0F355302B9E8F39307C35102F57E41A62B6E26D;
IL2CPP_EXTERN_C String_t* _stringLiteralB561EE1C6FACA8EB263014ECC6FA4E41643BD267;
IL2CPP_EXTERN_C const RuntimeMethod* BurstCompilerHelper_IsBurstEnabled_m6ACA57EA560963B63AAB31E9EAAB2E5183672C85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BurstCompilerOptions_HasBurstCompileAttribute_m69F14C7C843E37DC4D4012AF4D7DBB5B4145FC81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7_mE3941966C79ADA671E1DC2D17E989483A1343116_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m0FB5579AB2FF9FA7FB68FBA7082F6472C4E8C1B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SharedStatic_GetOrCreateSharedStaticInternal_m1495640A463E18E65D76FA6BA3574B0604434BE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t BurstCompilerHelper_IsBurstEnabled_m6ACA57EA560963B63AAB31E9EAAB2E5183672C85_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BurstCompilerHelper_IsCompiledByBurst_m4C2880EAFFBE5972E61FE46B3910BB2FD7D3F59D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BurstCompilerHelper__cctor_mA6B2F4377D9F7E824EFFD17E670CF7610116532D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BurstCompilerOptions_GetBurstCompileAttribute_m0E76894D7386B349EA4FC376FA7AE8C2874F65A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BurstCompilerOptions_HasBurstCompileAttribute_m69F14C7C843E37DC4D4012AF4D7DBB5B4145FC81_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BurstCompilerOptions_TryGetAttribute_mF1F97725346C302CEA15CD8533F0C99D978A72D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BurstCompilerOptions__cctor_m31C26BE712E5086F1DC7E34A7C097AA88E160B4E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BurstCompilerOptions_set_EnableBurstCompilation_m15A2AE4C2A6E34B03C8D746AD9027CAADA5AA5FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BurstCompiler__cctor_m8235F4272CFBC6482C5167318C561B172CDEA2CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BurstCompiler_get_Options_mC8A77043497AF6EAAE08F20912696D68FE56BCE6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SharedStatic_GetOrCreateSharedStaticInternal_m1495640A463E18E65D76FA6BA3574B0604434BE2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SharedStatic__cctor_m8D3849160B182FFCA57C19AAAF5E9008B9680EC4_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t69F94CAB785BD90D3CD43C27035227FDC4FC0A08 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.Dictionary`2<System.Int64,System.Type>
struct  Dictionary_2_tDAE4B5F5C7B840CC35FD96E10CFFB0C7BF6485CE  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t7040BCF9754CC440CA2CC28237AFC4E154CAA309* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tD778303E3A1526F596FA59EC1978813BDB23C9E6 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t98008CDBD840BEBBC4B09418AE1FBC29F9D5ED6F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDAE4B5F5C7B840CC35FD96E10CFFB0C7BF6485CE, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDAE4B5F5C7B840CC35FD96E10CFFB0C7BF6485CE, ___entries_1)); }
	inline EntryU5BU5D_t7040BCF9754CC440CA2CC28237AFC4E154CAA309* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t7040BCF9754CC440CA2CC28237AFC4E154CAA309** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t7040BCF9754CC440CA2CC28237AFC4E154CAA309* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDAE4B5F5C7B840CC35FD96E10CFFB0C7BF6485CE, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDAE4B5F5C7B840CC35FD96E10CFFB0C7BF6485CE, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDAE4B5F5C7B840CC35FD96E10CFFB0C7BF6485CE, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDAE4B5F5C7B840CC35FD96E10CFFB0C7BF6485CE, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDAE4B5F5C7B840CC35FD96E10CFFB0C7BF6485CE, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDAE4B5F5C7B840CC35FD96E10CFFB0C7BF6485CE, ___keys_7)); }
	inline KeyCollection_tD778303E3A1526F596FA59EC1978813BDB23C9E6 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tD778303E3A1526F596FA59EC1978813BDB23C9E6 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tD778303E3A1526F596FA59EC1978813BDB23C9E6 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDAE4B5F5C7B840CC35FD96E10CFFB0C7BF6485CE, ___values_8)); }
	inline ValueCollection_t98008CDBD840BEBBC4B09418AE1FBC29F9D5ED6F * get_values_8() const { return ___values_8; }
	inline ValueCollection_t98008CDBD840BEBBC4B09418AE1FBC29F9D5ED6F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t98008CDBD840BEBBC4B09418AE1FBC29F9D5ED6F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDAE4B5F5C7B840CC35FD96E10CFFB0C7BF6485CE, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
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

// Unity.Burst.BurstCompiler
struct  BurstCompiler_t0062A3F5AF87415C5FB2913A5DEC058CE790CD56  : public RuntimeObject
{
public:

public:
};

struct BurstCompiler_t0062A3F5AF87415C5FB2913A5DEC058CE790CD56_StaticFields
{
public:
	// System.Object Unity.Burst.BurstCompiler::GlobalLock
	RuntimeObject * ___GlobalLock_0;
	// Unity.Burst.BurstCompilerOptions Unity.Burst.BurstCompiler::_global
	BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * ____global_1;

public:
	inline static int32_t get_offset_of_GlobalLock_0() { return static_cast<int32_t>(offsetof(BurstCompiler_t0062A3F5AF87415C5FB2913A5DEC058CE790CD56_StaticFields, ___GlobalLock_0)); }
	inline RuntimeObject * get_GlobalLock_0() const { return ___GlobalLock_0; }
	inline RuntimeObject ** get_address_of_GlobalLock_0() { return &___GlobalLock_0; }
	inline void set_GlobalLock_0(RuntimeObject * value)
	{
		___GlobalLock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GlobalLock_0), (void*)value);
	}

	inline static int32_t get_offset_of__global_1() { return static_cast<int32_t>(offsetof(BurstCompiler_t0062A3F5AF87415C5FB2913A5DEC058CE790CD56_StaticFields, ____global_1)); }
	inline BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * get__global_1() const { return ____global_1; }
	inline BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 ** get_address_of__global_1() { return &____global_1; }
	inline void set__global_1(BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * value)
	{
		____global_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____global_1), (void*)value);
	}
};


// Unity.Burst.BurstCompiler_BurstCompilerHelper
struct  BurstCompilerHelper_tD4C1607E644B44589A84D9E2D5DA4FADEA647A41  : public RuntimeObject
{
public:

public:
};

struct BurstCompilerHelper_tD4C1607E644B44589A84D9E2D5DA4FADEA647A41_StaticFields
{
public:
	// Unity.Burst.BurstCompiler_BurstCompilerHelper_IsBurstEnabledDelegate Unity.Burst.BurstCompiler_BurstCompilerHelper::IsBurstEnabledImpl
	IsBurstEnabledDelegate_t12ED78634550F19A1DD0FD73700C0D9082797719 * ___IsBurstEnabledImpl_0;
	// System.Boolean Unity.Burst.BurstCompiler_BurstCompilerHelper::IsBurstGenerated
	bool ___IsBurstGenerated_1;

public:
	inline static int32_t get_offset_of_IsBurstEnabledImpl_0() { return static_cast<int32_t>(offsetof(BurstCompilerHelper_tD4C1607E644B44589A84D9E2D5DA4FADEA647A41_StaticFields, ___IsBurstEnabledImpl_0)); }
	inline IsBurstEnabledDelegate_t12ED78634550F19A1DD0FD73700C0D9082797719 * get_IsBurstEnabledImpl_0() const { return ___IsBurstEnabledImpl_0; }
	inline IsBurstEnabledDelegate_t12ED78634550F19A1DD0FD73700C0D9082797719 ** get_address_of_IsBurstEnabledImpl_0() { return &___IsBurstEnabledImpl_0; }
	inline void set_IsBurstEnabledImpl_0(IsBurstEnabledDelegate_t12ED78634550F19A1DD0FD73700C0D9082797719 * value)
	{
		___IsBurstEnabledImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IsBurstEnabledImpl_0), (void*)value);
	}

	inline static int32_t get_offset_of_IsBurstGenerated_1() { return static_cast<int32_t>(offsetof(BurstCompilerHelper_tD4C1607E644B44589A84D9E2D5DA4FADEA647A41_StaticFields, ___IsBurstGenerated_1)); }
	inline bool get_IsBurstGenerated_1() const { return ___IsBurstGenerated_1; }
	inline bool* get_address_of_IsBurstGenerated_1() { return &___IsBurstGenerated_1; }
	inline void set_IsBurstGenerated_1(bool value)
	{
		___IsBurstGenerated_1 = value;
	}
};


// Unity.Burst.BurstCompilerOptions
struct  BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44  : public RuntimeObject
{
public:
	// System.Boolean Unity.Burst.BurstCompilerOptions::_enableBurstCompilation
	bool ____enableBurstCompilation_2;
	// System.Boolean Unity.Burst.BurstCompilerOptions::_enableBurstSafetyChecks
	bool ____enableBurstSafetyChecks_3;
	// System.Boolean Unity.Burst.BurstCompilerOptions::<IsGlobal>k__BackingField
	bool ___U3CIsGlobalU3Ek__BackingField_4;
	// System.Action Unity.Burst.BurstCompilerOptions::<OptionsChanged>k__BackingField
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___U3COptionsChangedU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__enableBurstCompilation_2() { return static_cast<int32_t>(offsetof(BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44, ____enableBurstCompilation_2)); }
	inline bool get__enableBurstCompilation_2() const { return ____enableBurstCompilation_2; }
	inline bool* get_address_of__enableBurstCompilation_2() { return &____enableBurstCompilation_2; }
	inline void set__enableBurstCompilation_2(bool value)
	{
		____enableBurstCompilation_2 = value;
	}

	inline static int32_t get_offset_of__enableBurstSafetyChecks_3() { return static_cast<int32_t>(offsetof(BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44, ____enableBurstSafetyChecks_3)); }
	inline bool get__enableBurstSafetyChecks_3() const { return ____enableBurstSafetyChecks_3; }
	inline bool* get_address_of__enableBurstSafetyChecks_3() { return &____enableBurstSafetyChecks_3; }
	inline void set__enableBurstSafetyChecks_3(bool value)
	{
		____enableBurstSafetyChecks_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsGlobalU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44, ___U3CIsGlobalU3Ek__BackingField_4)); }
	inline bool get_U3CIsGlobalU3Ek__BackingField_4() const { return ___U3CIsGlobalU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsGlobalU3Ek__BackingField_4() { return &___U3CIsGlobalU3Ek__BackingField_4; }
	inline void set_U3CIsGlobalU3Ek__BackingField_4(bool value)
	{
		___U3CIsGlobalU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3COptionsChangedU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44, ___U3COptionsChangedU3Ek__BackingField_5)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_U3COptionsChangedU3Ek__BackingField_5() const { return ___U3COptionsChangedU3Ek__BackingField_5; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_U3COptionsChangedU3Ek__BackingField_5() { return &___U3COptionsChangedU3Ek__BackingField_5; }
	inline void set_U3COptionsChangedU3Ek__BackingField_5(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___U3COptionsChangedU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COptionsChangedU3Ek__BackingField_5), (void*)value);
	}
};

struct BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44_StaticFields
{
public:
	// System.Boolean Unity.Burst.BurstCompilerOptions::ForceDisableBurstCompilation
	bool ___ForceDisableBurstCompilation_0;
	// System.Boolean Unity.Burst.BurstCompilerOptions::ForceBurstCompilationSynchronously
	bool ___ForceBurstCompilationSynchronously_1;

public:
	inline static int32_t get_offset_of_ForceDisableBurstCompilation_0() { return static_cast<int32_t>(offsetof(BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44_StaticFields, ___ForceDisableBurstCompilation_0)); }
	inline bool get_ForceDisableBurstCompilation_0() const { return ___ForceDisableBurstCompilation_0; }
	inline bool* get_address_of_ForceDisableBurstCompilation_0() { return &___ForceDisableBurstCompilation_0; }
	inline void set_ForceDisableBurstCompilation_0(bool value)
	{
		___ForceDisableBurstCompilation_0 = value;
	}

	inline static int32_t get_offset_of_ForceBurstCompilationSynchronously_1() { return static_cast<int32_t>(offsetof(BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44_StaticFields, ___ForceBurstCompilationSynchronously_1)); }
	inline bool get_ForceBurstCompilationSynchronously_1() const { return ___ForceBurstCompilationSynchronously_1; }
	inline bool* get_address_of_ForceBurstCompilationSynchronously_1() { return &___ForceBurstCompilationSynchronously_1; }
	inline void set_ForceBurstCompilationSynchronously_1(bool value)
	{
		___ForceBurstCompilationSynchronously_1 = value;
	}
};


// Unity.Burst.BurstRuntime
struct  BurstRuntime_tA8F5A54E88C7D9A3716536C7B61B2E39698F5E5D  : public RuntimeObject
{
public:

public:
};


// Unity.Burst.SharedStatic
struct  SharedStatic_tF941444C1A1853F58BAF8284EBF7D9E5FFBC0BD9  : public RuntimeObject
{
public:

public:
};

struct SharedStatic_tF941444C1A1853F58BAF8284EBF7D9E5FFBC0BD9_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int64,System.Type> Unity.Burst.SharedStatic::HashToType
	Dictionary_2_tDAE4B5F5C7B840CC35FD96E10CFFB0C7BF6485CE * ___HashToType_0;

public:
	inline static int32_t get_offset_of_HashToType_0() { return static_cast<int32_t>(offsetof(SharedStatic_tF941444C1A1853F58BAF8284EBF7D9E5FFBC0BD9_StaticFields, ___HashToType_0)); }
	inline Dictionary_2_tDAE4B5F5C7B840CC35FD96E10CFFB0C7BF6485CE * get_HashToType_0() const { return ___HashToType_0; }
	inline Dictionary_2_tDAE4B5F5C7B840CC35FD96E10CFFB0C7BF6485CE ** get_address_of_HashToType_0() { return &___HashToType_0; }
	inline void set_HashToType_0(Dictionary_2_tDAE4B5F5C7B840CC35FD96E10CFFB0C7BF6485CE * value)
	{
		___HashToType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HashToType_0), (void*)value);
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


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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


// Unity.Burst.NoAliasAttribute
struct  NoAliasAttribute_tA850247220274BC9848B40E2C27637426DC3D967  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};


// UnityEngine.Hash128
struct  Hash128_tBB1E9B1041BFF6ED6E76F2066E2815ED04742151 
{
public:
	// System.UInt32 UnityEngine.Hash128::m_u32_0
	uint32_t ___m_u32_0_0;
	// System.UInt32 UnityEngine.Hash128::m_u32_1
	uint32_t ___m_u32_1_1;
	// System.UInt32 UnityEngine.Hash128::m_u32_2
	uint32_t ___m_u32_2_2;
	// System.UInt32 UnityEngine.Hash128::m_u32_3
	uint32_t ___m_u32_3_3;

public:
	inline static int32_t get_offset_of_m_u32_0_0() { return static_cast<int32_t>(offsetof(Hash128_tBB1E9B1041BFF6ED6E76F2066E2815ED04742151, ___m_u32_0_0)); }
	inline uint32_t get_m_u32_0_0() const { return ___m_u32_0_0; }
	inline uint32_t* get_address_of_m_u32_0_0() { return &___m_u32_0_0; }
	inline void set_m_u32_0_0(uint32_t value)
	{
		___m_u32_0_0 = value;
	}

	inline static int32_t get_offset_of_m_u32_1_1() { return static_cast<int32_t>(offsetof(Hash128_tBB1E9B1041BFF6ED6E76F2066E2815ED04742151, ___m_u32_1_1)); }
	inline uint32_t get_m_u32_1_1() const { return ___m_u32_1_1; }
	inline uint32_t* get_address_of_m_u32_1_1() { return &___m_u32_1_1; }
	inline void set_m_u32_1_1(uint32_t value)
	{
		___m_u32_1_1 = value;
	}

	inline static int32_t get_offset_of_m_u32_2_2() { return static_cast<int32_t>(offsetof(Hash128_tBB1E9B1041BFF6ED6E76F2066E2815ED04742151, ___m_u32_2_2)); }
	inline uint32_t get_m_u32_2_2() const { return ___m_u32_2_2; }
	inline uint32_t* get_address_of_m_u32_2_2() { return &___m_u32_2_2; }
	inline void set_m_u32_2_2(uint32_t value)
	{
		___m_u32_2_2 = value;
	}

	inline static int32_t get_offset_of_m_u32_3_3() { return static_cast<int32_t>(offsetof(Hash128_tBB1E9B1041BFF6ED6E76F2066E2815ED04742151, ___m_u32_3_3)); }
	inline uint32_t get_m_u32_3_3() const { return ___m_u32_3_3; }
	inline uint32_t* get_address_of_m_u32_3_3() { return &___m_u32_3_3; }
	inline void set_m_u32_3_3(uint32_t value)
	{
		___m_u32_3_3 = value;
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

// System.Exception
struct  Exception_t  : public RuntimeObject
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.Burst.FloatMode
struct  FloatMode_tC669681A974F6A0EBA7F10E6211034F86F07EF1B 
{
public:
	// System.Int32 Unity.Burst.FloatMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FloatMode_tC669681A974F6A0EBA7F10E6211034F86F07EF1B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Burst.FloatPrecision
struct  FloatPrecision_tDF119F0022D37C6A5C6789E2EB90A48EF648D44A 
{
public:
	// System.Int32 Unity.Burst.FloatPrecision::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FloatPrecision_tDF119F0022D37C6A5C6789E2EB90A48EF648D44A, ___value___2)); }
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

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
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
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Unity.Burst.BurstCompileAttribute
struct  BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// Unity.Burst.FloatMode Unity.Burst.BurstCompileAttribute::<FloatMode>k__BackingField
	int32_t ___U3CFloatModeU3Ek__BackingField_0;
	// Unity.Burst.FloatPrecision Unity.Burst.BurstCompileAttribute::<FloatPrecision>k__BackingField
	int32_t ___U3CFloatPrecisionU3Ek__BackingField_1;
	// System.Boolean Unity.Burst.BurstCompileAttribute::<CompileSynchronously>k__BackingField
	bool ___U3CCompileSynchronouslyU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CFloatModeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7, ___U3CFloatModeU3Ek__BackingField_0)); }
	inline int32_t get_U3CFloatModeU3Ek__BackingField_0() const { return ___U3CFloatModeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CFloatModeU3Ek__BackingField_0() { return &___U3CFloatModeU3Ek__BackingField_0; }
	inline void set_U3CFloatModeU3Ek__BackingField_0(int32_t value)
	{
		___U3CFloatModeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CFloatPrecisionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7, ___U3CFloatPrecisionU3Ek__BackingField_1)); }
	inline int32_t get_U3CFloatPrecisionU3Ek__BackingField_1() const { return ___U3CFloatPrecisionU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CFloatPrecisionU3Ek__BackingField_1() { return &___U3CFloatPrecisionU3Ek__BackingField_1; }
	inline void set_U3CFloatPrecisionU3Ek__BackingField_1(int32_t value)
	{
		___U3CFloatPrecisionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CCompileSynchronouslyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7, ___U3CCompileSynchronouslyU3Ek__BackingField_2)); }
	inline bool get_U3CCompileSynchronouslyU3Ek__BackingField_2() const { return ___U3CCompileSynchronouslyU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CCompileSynchronouslyU3Ek__BackingField_2() { return &___U3CCompileSynchronouslyU3Ek__BackingField_2; }
	inline void set_U3CCompileSynchronouslyU3Ek__BackingField_2(bool value)
	{
		___U3CCompileSynchronouslyU3Ek__BackingField_2 = value;
	}
};


// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// Unity.Burst.BurstCompiler_BurstCompilerHelper_IsBurstEnabledDelegate
struct  IsBurstEnabledDelegate_t12ED78634550F19A1DD0FD73700C0D9082797719  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
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


// !!0 System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m8D2EA88F2F0D0EA7F86E25F1148D61F1298A9F82_gshared (MemberInfo_t * ___element0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mEDBB6DC10D5035A29DBA9E2AB96745D22A043776_gshared (Dictionary_2_tCD5D79DED1F046A086BA21623BFB989D9BE18860 * __this, const RuntimeMethod* method);

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0 (Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * __this, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompileAttribute::set_FloatMode(Unity.Burst.FloatMode)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatMode_m63870BB9FBDCD17C1DFE3C96AE538EE9DC887237_inline (BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompileAttribute::set_FloatPrecision(Unity.Burst.FloatPrecision)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatPrecision_m721BC6780746CD1A7F081B2C397D56076F73AB9E_inline (BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompilerOptions::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions__ctor_m8EF19B50AE82994AD06F9C9F9058BE2958875BC0 (BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * __this, bool ___isGlobal0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompiler/BurstCompilerHelper::DiscardedMethod(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerHelper_DiscardedMethod_m8E67232B8E26A14F5A154E0B8D379CC96FFF5081 (bool* ___value0, const RuntimeMethod* method);
// System.Int32 Unity.Burst.LowLevel.BurstCompilerService::CompileAsyncDelegateMethod(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BurstCompilerService_CompileAsyncDelegateMethod_m6072F8EE40B990BC89FFF98EC6C94A5C21FBAFC0 (RuntimeObject * ___delegateMethod0, String_t* ___compilerOptions1, const RuntimeMethod* method);
// System.Void* Unity.Burst.LowLevel.BurstCompilerService::GetAsyncCompiledAsyncDelegateMethod(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompilerService_GetAsyncCompiledAsyncDelegateMethod_m67107301FDFF67538C7AD94D6A6BB977B1B1005B (int32_t ___userID0, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsBurstEnabledDelegate__ctor_mD4BBA0DB43CD4E850A541FD5C9232DC67E34DE42 (IsBurstEnabledDelegate_t12ED78634550F19A1DD0FD73700C0D9082797719 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean Unity.Burst.BurstCompiler/BurstCompilerHelper::IsCompiledByBurst(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerHelper_IsCompiledByBurst_m4C2880EAFFBE5972E61FE46B3910BB2FD7D3F59D (Delegate_t * ___del0, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstCompilation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_set_EnableBurstCompilation_m15A2AE4C2A6E34B03C8D746AD9027CAADA5AA5FF (BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstSafetyChecks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_set_EnableBurstSafetyChecks_m998F9C020289840EB497AFFDA52CC7F801B9EAAC (BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Unity.Burst.BurstCompilerOptions::get_IsGlobal()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_IsGlobal_m779C448E4AF259E0CDCBFE76DF0C6B9DABBBC942_inline (BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * __this, const RuntimeMethod* method);
// System.Void Unity.Jobs.LowLevel.Unsafe.JobsUtility::set_JobCompilerEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobsUtility_set_JobCompilerEnabled_mF52ED8F795529A329F8D32C6A3AFA32B18DE33E2 (bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompiler::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompiler_Enable_mB19A7BB8BFFD1DB8F1CBFB9B699055D0A26AFB9F (const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompilerOptions::MaybeTriggerRecompilation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_MaybeTriggerRecompilation_mDC4E81D8DAC3D07BA0724029AA9A5448E1CBA22C (BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * __this, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompiler::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompiler_Disable_m4946AABB4D8A5D436EA2CC8467304C130750F3CC (const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompilerOptions::OnOptionsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_OnOptionsChanged_m10F9A296C965A55AEDFC1A43DD1988FF6D4B2E2B (BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MemberInfo::op_Equality(System.Reflection.MemberInfo,System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberInfo_op_Equality_m9B77A8811138313780ADCD0A9EE018748B9249D9 (MemberInfo_t * ___left0, MemberInfo_t * ___right1, const RuntimeMethod* method);
// Unity.Burst.BurstCompileAttribute Unity.Burst.BurstCompilerOptions::GetBurstCompileAttribute(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 * BurstCompilerOptions_GetBurstCompileAttribute_m0E76894D7386B349EA4FC376FA7AE8C2874F65A2 (MemberInfo_t * ___memberInfo0, const RuntimeMethod* method);
// !!0 System.Reflection.CustomAttributeExtensions::GetCustomAttribute<Unity.Burst.BurstCompileAttribute>(System.Reflection.MemberInfo)
inline BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 * CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7_mE3941966C79ADA671E1DC2D17E989483A1343116 (MemberInfo_t * ___element0, const RuntimeMethod* method)
{
	return ((  BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 * (*) (MemberInfo_t *, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m8D2EA88F2F0D0EA7F86E25F1148D61F1298A9F82_gshared)(___element0, method);
}
// System.Collections.Generic.IEnumerable`1<System.Attribute> System.Reflection.CustomAttributeExtensions::GetCustomAttributes(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeExtensions_GetCustomAttributes_mB0EC78F0CEF12BEE0D402002561B5909769C4656 (MemberInfo_t * ___element0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompileAttribute::.ctor(Unity.Burst.FloatPrecision,Unity.Burst.FloatMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute__ctor_m6B1F7CAAF85F050B46CF97B32ED83B70211BB28D (BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 * __this, int32_t ___floatPrecision0, int32_t ___floatMode1, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompileAttribute::set_CompileSynchronously(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_CompileSynchronously_m244BDC780DD6BA187039F9B9D502896FCD9E5897_inline (BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Boolean Unity.Burst.BurstCompilerOptions::TryGetAttribute(System.Reflection.MemberInfo,Unity.Burst.BurstCompileAttribute&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_TryGetAttribute_mF1F97725346C302CEA15CD8533F0C99D978A72D7 (MemberInfo_t * ___member0, BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 ** ___attribute1, const RuntimeMethod* method);
// System.Action Unity.Burst.BurstCompilerOptions::get_OptionsChanged()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * BurstCompilerOptions_get_OptionsChanged_m6BB33215B8A8BADABC44422E96043C22EC3CC3EA_inline (BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.String[] System.Environment::GetCommandLineArgs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Environment_GetCommandLineArgs_mB085186484DC6D8E3CF71C2C92C60AF326833347 (const RuntimeMethod* method);
// System.Int64 Unity.Burst.BurstRuntime::HashStringWithFNV1A64(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_HashStringWithFNV1A64_m8A77BD745CEFF29CBA89F45C97A290F1C82FA9FE (String_t* ___text0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void UnityEngine.Hash128::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hash128__ctor_m600462667D7BE3F6E017E8ECDF6242A525F3FD8E (Hash128_tBB1E9B1041BFF6ED6E76F2066E2815ED04742151 * __this, uint64_t ___u64_00, uint64_t ___u64_11, const RuntimeMethod* method);
// System.Void* Unity.Burst.LowLevel.BurstCompilerService::GetOrCreateSharedMemory(UnityEngine.Hash128&,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompilerService_GetOrCreateSharedMemory_mB71187D4FB6AEFB3787C2FF0638A90E55554899E (Hash128_tBB1E9B1041BFF6ED6E76F2066E2815ED04742151 * ___key0, uint32_t ___size_of1, uint32_t ___alignment2, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Type>::.ctor()
inline void Dictionary_2__ctor_m0FB5579AB2FF9FA7FB68FBA7082F6472C4E8C1B3 (Dictionary_2_tDAE4B5F5C7B840CC35FD96E10CFFB0C7BF6485CE * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDAE4B5F5C7B840CC35FD96E10CFFB0C7BF6485CE *, const RuntimeMethod*))Dictionary_2__ctor_mEDBB6DC10D5035A29DBA9E2AB96745D22A043776_gshared)(__this, method);
}
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
// System.Void Unity.Burst.BurstCompileAttribute::set_FloatMode(Unity.Burst.FloatMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatMode_m63870BB9FBDCD17C1DFE3C96AE538EE9DC887237 (BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public FloatMode FloatMode { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CFloatModeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Unity.Burst.BurstCompileAttribute::set_FloatPrecision(Unity.Burst.FloatPrecision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatPrecision_m721BC6780746CD1A7F081B2C397D56076F73AB9E (BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public FloatPrecision FloatPrecision { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CFloatPrecisionU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Unity.Burst.BurstCompileAttribute::set_CompileSynchronously(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_CompileSynchronously_m244BDC780DD6BA187039F9B9D502896FCD9E5897 (BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool CompileSynchronously { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CCompileSynchronouslyU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Unity.Burst.BurstCompileAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute__ctor_m5B58161138BC03BA0DF37D3392EA0F4542632B26 (BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 * __this, const RuntimeMethod* method)
{
	{
		// public BurstCompileAttribute()
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstCompileAttribute::.ctor(Unity.Burst.FloatPrecision,Unity.Burst.FloatMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute__ctor_m6B1F7CAAF85F050B46CF97B32ED83B70211BB28D (BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 * __this, int32_t ___floatPrecision0, int32_t ___floatMode1, const RuntimeMethod* method)
{
	{
		// public BurstCompileAttribute(FloatPrecision floatPrecision, FloatMode floatMode)
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		// FloatMode = floatMode;
		int32_t L_0 = ___floatMode1;
		BurstCompileAttribute_set_FloatMode_m63870BB9FBDCD17C1DFE3C96AE538EE9DC887237_inline(__this, L_0, /*hidden argument*/NULL);
		// FloatPrecision = floatPrecision;
		int32_t L_1 = ___floatPrecision0;
		BurstCompileAttribute_set_FloatPrecision_m721BC6780746CD1A7F081B2C397D56076F73AB9E_inline(__this, L_1, /*hidden argument*/NULL);
		// }
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
// Unity.Burst.BurstCompilerOptions Unity.Burst.BurstCompiler::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * BurstCompiler_get_Options_mC8A77043497AF6EAAE08F20912696D68FE56BCE6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BurstCompiler_get_Options_mC8A77043497AF6EAAE08F20912696D68FE56BCE6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * G_B3_0 = NULL;
	BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * G_B2_0 = NULL;
	{
		// lock (GlobalLock)
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompiler_t0062A3F5AF87415C5FB2913A5DEC058CE790CD56_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((BurstCompiler_t0062A3F5AF87415C5FB2913A5DEC058CE790CD56_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t0062A3F5AF87415C5FB2913A5DEC058CE790CD56_il2cpp_TypeInfo_var))->get_GlobalLock_0();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_1 = V_0;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			// return _global ?? (_global = new BurstCompilerOptions(true));
			IL2CPP_RUNTIME_CLASS_INIT(BurstCompiler_t0062A3F5AF87415C5FB2913A5DEC058CE790CD56_il2cpp_TypeInfo_var);
			BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * L_2 = ((BurstCompiler_t0062A3F5AF87415C5FB2913A5DEC058CE790CD56_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t0062A3F5AF87415C5FB2913A5DEC058CE790CD56_il2cpp_TypeInfo_var))->get__global_1();
			BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * L_3 = L_2;
			G_B2_0 = L_3;
			if (L_3)
			{
				G_B3_0 = L_3;
				goto IL_0028;
			}
		}

IL_001b:
		{
			BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * L_4 = (BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 *)il2cpp_codegen_object_new(BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44_il2cpp_TypeInfo_var);
			BurstCompilerOptions__ctor_m8EF19B50AE82994AD06F9C9F9058BE2958875BC0(L_4, (bool)1, /*hidden argument*/NULL);
			BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * L_5 = L_4;
			IL2CPP_RUNTIME_CLASS_INIT(BurstCompiler_t0062A3F5AF87415C5FB2913A5DEC058CE790CD56_il2cpp_TypeInfo_var);
			((BurstCompiler_t0062A3F5AF87415C5FB2913A5DEC058CE790CD56_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t0062A3F5AF87415C5FB2913A5DEC058CE790CD56_il2cpp_TypeInfo_var))->set__global_1(L_5);
			G_B3_0 = L_5;
		}

IL_0028:
		{
			V_2 = G_B3_0;
			IL2CPP_LEAVE(0x36, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		{
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_0035;
			}
		}

IL_002e:
		{
			RuntimeObject * L_7 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_7, /*hidden argument*/NULL);
		}

IL_0035:
		{
			IL2CPP_END_FINALLY(43)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_JUMP_TBL(0x36, IL_0036)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0036:
	{
		// }
		BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * L_8 = V_2;
		return L_8;
	}
}
// System.Void Unity.Burst.BurstCompiler::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompiler_Enable_mB19A7BB8BFFD1DB8F1CBFB9B699055D0A26AFB9F (const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstCompiler::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompiler_Disable_m4946AABB4D8A5D436EA2CC8467304C130750F3CC (const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstCompiler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompiler__cctor_m8235F4272CFBC6482C5167318C561B172CDEA2CA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BurstCompiler__cctor_m8235F4272CFBC6482C5167318C561B172CDEA2CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly object GlobalLock = new object();
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		((BurstCompiler_t0062A3F5AF87415C5FB2913A5DEC058CE790CD56_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t0062A3F5AF87415C5FB2913A5DEC058CE790CD56_il2cpp_TypeInfo_var))->set_GlobalLock_0(L_0);
		// private static BurstCompilerOptions _global = null;
		((BurstCompiler_t0062A3F5AF87415C5FB2913A5DEC058CE790CD56_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t0062A3F5AF87415C5FB2913A5DEC058CE790CD56_il2cpp_TypeInfo_var))->set__global_1((BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 *)NULL);
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
// System.Boolean Unity.Burst.BurstCompiler_BurstCompilerHelper::IsBurstEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerHelper_IsBurstEnabled_m6ACA57EA560963B63AAB31E9EAAB2E5183672C85 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BurstCompilerHelper_IsBurstEnabled_m6ACA57EA560963B63AAB31E9EAAB2E5183672C85_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// bool result = true;
		V_0 = (bool)1;
		// DiscardedMethod(ref result);
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompilerHelper_tD4C1607E644B44589A84D9E2D5DA4FADEA647A41_il2cpp_TypeInfo_var);
		BurstCompilerHelper_DiscardedMethod_m8E67232B8E26A14F5A154E0B8D379CC96FFF5081((bool*)(&V_0), /*hidden argument*/NULL);
		// return result;
		bool L_0 = V_0;
		V_1 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_1 = V_1;
		return L_1;
	}
}
// System.Void Unity.Burst.BurstCompiler_BurstCompilerHelper::DiscardedMethod(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerHelper_DiscardedMethod_m8E67232B8E26A14F5A154E0B8D379CC96FFF5081 (bool* ___value0, const RuntimeMethod* method)
{
	{
		// value = false;
		bool* L_0 = ___value0;
		*((int8_t*)L_0) = (int8_t)0;
		// }
		return;
	}
}
// System.Boolean Unity.Burst.BurstCompiler_BurstCompilerHelper::IsCompiledByBurst(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerHelper_IsCompiledByBurst_m4C2880EAFFBE5972E61FE46B3910BB2FD7D3F59D (Delegate_t * ___del0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BurstCompilerHelper_IsCompiledByBurst_m4C2880EAFFBE5972E61FE46B3910BB2FD7D3F59D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// var delegateMethodId = Unity.Burst.LowLevel.BurstCompilerService.CompileAsyncDelegateMethod(del, string.Empty);
		Delegate_t * L_0 = ___del0;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		int32_t L_2 = BurstCompilerService_CompileAsyncDelegateMethod_m6072F8EE40B990BC89FFF98EC6C94A5C21FBAFC0(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// return Unity.Burst.LowLevel.BurstCompilerService.GetAsyncCompiledAsyncDelegateMethod(delegateMethodId) != (void*)0;
		int32_t L_3 = V_0;
		void* L_4 = BurstCompilerService_GetAsyncCompiledAsyncDelegateMethod_m67107301FDFF67538C7AD94D6A6BB977B1B1005B(L_3, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((intptr_t)L_4) == ((intptr_t)(((intptr_t)0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001d;
	}

IL_001d:
	{
		// }
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void Unity.Burst.BurstCompiler_BurstCompilerHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerHelper__cctor_mA6B2F4377D9F7E824EFFD17E670CF7610116532D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BurstCompilerHelper__cctor_mA6B2F4377D9F7E824EFFD17E670CF7610116532D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly IsBurstEnabledDelegate IsBurstEnabledImpl = new IsBurstEnabledDelegate(IsBurstEnabled);
		IsBurstEnabledDelegate_t12ED78634550F19A1DD0FD73700C0D9082797719 * L_0 = (IsBurstEnabledDelegate_t12ED78634550F19A1DD0FD73700C0D9082797719 *)il2cpp_codegen_object_new(IsBurstEnabledDelegate_t12ED78634550F19A1DD0FD73700C0D9082797719_il2cpp_TypeInfo_var);
		IsBurstEnabledDelegate__ctor_mD4BBA0DB43CD4E850A541FD5C9232DC67E34DE42(L_0, NULL, (intptr_t)((intptr_t)BurstCompilerHelper_IsBurstEnabled_m6ACA57EA560963B63AAB31E9EAAB2E5183672C85_RuntimeMethod_var), /*hidden argument*/NULL);
		((BurstCompilerHelper_tD4C1607E644B44589A84D9E2D5DA4FADEA647A41_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_tD4C1607E644B44589A84D9E2D5DA4FADEA647A41_il2cpp_TypeInfo_var))->set_IsBurstEnabledImpl_0(L_0);
		// public static readonly bool IsBurstGenerated = IsCompiledByBurst(IsBurstEnabledImpl);
		IsBurstEnabledDelegate_t12ED78634550F19A1DD0FD73700C0D9082797719 * L_1 = ((BurstCompilerHelper_tD4C1607E644B44589A84D9E2D5DA4FADEA647A41_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_tD4C1607E644B44589A84D9E2D5DA4FADEA647A41_il2cpp_TypeInfo_var))->get_IsBurstEnabledImpl_0();
		bool L_2 = BurstCompilerHelper_IsCompiledByBurst_m4C2880EAFFBE5972E61FE46B3910BB2FD7D3F59D(L_1, /*hidden argument*/NULL);
		((BurstCompilerHelper_tD4C1607E644B44589A84D9E2D5DA4FADEA647A41_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_tD4C1607E644B44589A84D9E2D5DA4FADEA647A41_il2cpp_TypeInfo_var))->set_IsBurstGenerated_1(L_2);
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
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_IsBurstEnabledDelegate_t12ED78634550F19A1DD0FD73700C0D9082797719 (IsBurstEnabledDelegate_t12ED78634550F19A1DD0FD73700C0D9082797719 * __this, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc();

	return static_cast<bool>(returnValue);
}
// System.Void Unity.Burst.BurstCompiler_BurstCompilerHelper_IsBurstEnabledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsBurstEnabledDelegate__ctor_mD4BBA0DB43CD4E850A541FD5C9232DC67E34DE42 (IsBurstEnabledDelegate_t12ED78634550F19A1DD0FD73700C0D9082797719 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean Unity.Burst.BurstCompiler_BurstCompilerHelper_IsBurstEnabledDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IsBurstEnabledDelegate_Invoke_m5C89DE3E5A6440E400038B6D5D4C2A11A7A28564 (IsBurstEnabledDelegate_t12ED78634550F19A1DD0FD73700C0D9082797719 * __this, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef bool (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Unity.Burst.BurstCompiler_BurstCompilerHelper_IsBurstEnabledDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IsBurstEnabledDelegate_BeginInvoke_mF1D35437104064F3EFC1B859532262FAA1A2BC37 (IsBurstEnabledDelegate_t12ED78634550F19A1DD0FD73700C0D9082797719 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Boolean Unity.Burst.BurstCompiler_BurstCompilerHelper_IsBurstEnabledDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IsBurstEnabledDelegate_EndInvoke_m3DE447FF35E63299F59BCA210F2C7CBDEAF50228 (IsBurstEnabledDelegate_t12ED78634550F19A1DD0FD73700C0D9082797719 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Burst.BurstCompilerOptions::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions__ctor_m8EF19B50AE82994AD06F9C9F9058BE2958875BC0 (BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * __this, bool ___isGlobal0, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// internal BurstCompilerOptions(bool isGlobal)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		// IsGlobal = isGlobal;
		bool L_0 = ___isGlobal0;
		__this->set_U3CIsGlobalU3Ek__BackingField_4(L_0);
		// EnableBurstCompilation = true;
		BurstCompilerOptions_set_EnableBurstCompilation_m15A2AE4C2A6E34B03C8D746AD9027CAADA5AA5FF(__this, (bool)1, /*hidden argument*/NULL);
		// EnableBurstSafetyChecks = true;
		BurstCompilerOptions_set_EnableBurstSafetyChecks_m998F9C020289840EB497AFFDA52CC7F801B9EAAC(__this, (bool)1, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x26, FINALLY_0023);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		IL2CPP_END_FINALLY(35)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_JUMP_TBL(0x26, IL_0026)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Boolean Unity.Burst.BurstCompilerOptions::get_IsGlobal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_IsGlobal_m779C448E4AF259E0CDCBFE76DF0C6B9DABBBC942 (BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * __this, const RuntimeMethod* method)
{
	{
		// private bool IsGlobal { get; }
		bool L_0 = __this->get_U3CIsGlobalU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Boolean Unity.Burst.BurstCompilerOptions::get_EnableBurstCompilation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_EnableBurstCompilation_m9EE168843B5E4FEE2203503C37E730A555698094 (BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * __this, const RuntimeMethod* method)
{
	{
		// get => _enableBurstCompilation;
		bool L_0 = __this->get__enableBurstCompilation_2();
		return L_0;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstCompilation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_set_EnableBurstCompilation_m15A2AE4C2A6E34B03C8D746AD9027CAADA5AA5FF (BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BurstCompilerOptions_set_EnableBurstCompilation_m15A2AE4C2A6E34B03C8D746AD9027CAADA5AA5FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	{
		// if (IsGlobal && ForceDisableBurstCompilation) value = false;
		bool L_0 = BurstCompilerOptions_get_IsGlobal_m779C448E4AF259E0CDCBFE76DF0C6B9DABBBC942_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44_il2cpp_TypeInfo_var);
		bool L_1 = ((BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44_il2cpp_TypeInfo_var))->get_ForceDisableBurstCompilation_0();
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 0;
	}

IL_0011:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// if (IsGlobal && ForceDisableBurstCompilation) value = false;
		___value0 = (bool)0;
	}

IL_0018:
	{
		// bool changed = _enableBurstCompilation != value;
		bool L_3 = __this->get__enableBurstCompilation_2();
		bool L_4 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// _enableBurstCompilation = value;
		bool L_5 = ___value0;
		__this->set__enableBurstCompilation_2(L_5);
		// if (IsGlobal)
		bool L_6 = BurstCompilerOptions_get_IsGlobal_m779C448E4AF259E0CDCBFE76DF0C6B9DABBBC942_inline(__this, /*hidden argument*/NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		// JobsUtility.JobCompilerEnabled = value;
		bool L_8 = ___value0;
		JobsUtility_set_JobCompilerEnabled_mF52ED8F795529A329F8D32C6A3AFA32B18DE33E2(L_8, /*hidden argument*/NULL);
		// if (changed)
		bool L_9 = V_0;
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		// if (value)
		bool L_11 = ___value0;
		V_4 = L_11;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_005c;
		}
	}
	{
		// BurstCompiler.Enable();
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompiler_t0062A3F5AF87415C5FB2913A5DEC058CE790CD56_il2cpp_TypeInfo_var);
		BurstCompiler_Enable_mB19A7BB8BFFD1DB8F1CBFB9B699055D0A26AFB9F(/*hidden argument*/NULL);
		// MaybeTriggerRecompilation();
		BurstCompilerOptions_MaybeTriggerRecompilation_mDC4E81D8DAC3D07BA0724029AA9A5448E1CBA22C(__this, /*hidden argument*/NULL);
		goto IL_0064;
	}

IL_005c:
	{
		// BurstCompiler.Disable();
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompiler_t0062A3F5AF87415C5FB2913A5DEC058CE790CD56_il2cpp_TypeInfo_var);
		BurstCompiler_Disable_m4946AABB4D8A5D436EA2CC8467304C130750F3CC(/*hidden argument*/NULL);
	}

IL_0064:
	{
	}

IL_0065:
	{
	}

IL_0066:
	{
		// if (changed)
		bool L_13 = V_0;
		V_5 = L_13;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0076;
		}
	}
	{
		// OnOptionsChanged();
		BurstCompilerOptions_OnOptionsChanged_m10F9A296C965A55AEDFC1A43DD1988FF6D4B2E2B(__this, /*hidden argument*/NULL);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstSafetyChecks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_set_EnableBurstSafetyChecks_m998F9C020289840EB497AFFDA52CC7F801B9EAAC (BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * __this, bool ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// bool changed = _enableBurstSafetyChecks != value;
		bool L_0 = __this->get__enableBurstSafetyChecks_3();
		bool L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// _enableBurstSafetyChecks = value;
		bool L_2 = ___value0;
		__this->set__enableBurstSafetyChecks_3(L_2);
		// if (changed)
		bool L_3 = V_0;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// OnOptionsChanged();
		BurstCompilerOptions_OnOptionsChanged_m10F9A296C965A55AEDFC1A43DD1988FF6D4B2E2B(__this, /*hidden argument*/NULL);
		// MaybeTriggerRecompilation();
		BurstCompilerOptions_MaybeTriggerRecompilation_mDC4E81D8DAC3D07BA0724029AA9A5448E1CBA22C(__this, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Action Unity.Burst.BurstCompilerOptions::get_OptionsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * BurstCompilerOptions_get_OptionsChanged_m6BB33215B8A8BADABC44422E96043C22EC3CC3EA (BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * __this, const RuntimeMethod* method)
{
	{
		// internal Action OptionsChanged { get; set; }
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_U3COptionsChangedU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Boolean Unity.Burst.BurstCompilerOptions::TryGetAttribute(System.Reflection.MemberInfo,Unity.Burst.BurstCompileAttribute&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_TryGetAttribute_mF1F97725346C302CEA15CD8533F0C99D978A72D7 (MemberInfo_t * ___member0, BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 ** ___attribute1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BurstCompilerOptions_TryGetAttribute_mF1F97725346C302CEA15CD8533F0C99D978A72D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// attribute = null;
		BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 ** L_0 = ___attribute1;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// if (member == null)
		MemberInfo_t * L_1 = ___member0;
		bool L_2 = MemberInfo_op_Equality_m9B77A8811138313780ADCD0A9EE018748B9249D9(L_1, (MemberInfo_t *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0014:
	{
		// attribute = GetBurstCompileAttribute(member);
		BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 ** L_4 = ___attribute1;
		MemberInfo_t * L_5 = ___member0;
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44_il2cpp_TypeInfo_var);
		BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 * L_6 = BurstCompilerOptions_GetBurstCompileAttribute_m0E76894D7386B349EA4FC376FA7AE8C2874F65A2(L_5, /*hidden argument*/NULL);
		*((RuntimeObject **)L_4) = (RuntimeObject *)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_4, (void*)(RuntimeObject *)L_6);
		// return attribute != null;
		BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 ** L_7 = ___attribute1;
		BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 * L_8 = *((BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 **)L_7);
		V_1 = (bool)((!(((RuntimeObject*)(BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 *)L_8) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0024;
	}

IL_0024:
	{
		// }
		bool L_9 = V_1;
		return L_9;
	}
}
// Unity.Burst.BurstCompileAttribute Unity.Burst.BurstCompilerOptions::GetBurstCompileAttribute(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 * BurstCompilerOptions_GetBurstCompileAttribute_m0E76894D7386B349EA4FC376FA7AE8C2874F65A2 (MemberInfo_t * ___memberInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BurstCompilerOptions_GetBurstCompileAttribute_m0E76894D7386B349EA4FC376FA7AE8C2874F65A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 * V_0 = NULL;
	bool V_1 = false;
	BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * V_4 = NULL;
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var result = memberInfo.GetCustomAttribute<BurstCompileAttribute>();
		MemberInfo_t * L_0 = ___memberInfo0;
		BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 * L_1 = CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7_mE3941966C79ADA671E1DC2D17E989483A1343116(L_0, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7_mE3941966C79ADA671E1DC2D17E989483A1343116_RuntimeMethod_var);
		V_0 = L_1;
		// if (result != null)
		BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 * L_2 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		// return result;
		BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 * L_4 = V_0;
		V_2 = L_4;
		goto IL_0076;
	}

IL_0015:
	{
		// foreach (var a in memberInfo.GetCustomAttributes())
		MemberInfo_t * L_5 = ___memberInfo0;
		RuntimeObject* L_6 = CustomAttributeExtensions_GetCustomAttributes_mB0EC78F0CEF12BEE0D402002561B5909769C4656(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject* L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Attribute>::GetEnumerator() */, IEnumerable_1_t4AEBE881889574C860CD6E309C9C030D34EF7C8F_il2cpp_TypeInfo_var, L_6);
		V_3 = L_7;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005d;
		}

IL_0024:
		{
			// foreach (var a in memberInfo.GetCustomAttributes())
			RuntimeObject* L_8 = V_3;
			NullCheck(L_8);
			Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * L_9 = InterfaceFuncInvoker0< Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Attribute>::get_Current() */, IEnumerator_1_t7E9F25E5E091DDC21E3633D2525ABC2F117EF588_il2cpp_TypeInfo_var, L_8);
			V_4 = L_9;
			// if (a.GetType().FullName == "Burst.Compiler.IL.Tests.TestCompilerAttribute")
			Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * L_10 = V_4;
			NullCheck(L_10);
			Type_t * L_11 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_10, /*hidden argument*/NULL);
			NullCheck(L_11);
			String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_11);
			bool L_13 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_12, _stringLiteralB561EE1C6FACA8EB263014ECC6FA4E41643BD267, /*hidden argument*/NULL);
			V_5 = L_13;
			bool L_14 = V_5;
			if (!L_14)
			{
				goto IL_005c;
			}
		}

IL_0049:
		{
			// return new BurstCompileAttribute(FloatPrecision.Standard, FloatMode.Default) { CompileSynchronously = true };
			BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 * L_15 = (BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 *)il2cpp_codegen_object_new(BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7_il2cpp_TypeInfo_var);
			BurstCompileAttribute__ctor_m6B1F7CAAF85F050B46CF97B32ED83B70211BB28D(L_15, 0, 0, /*hidden argument*/NULL);
			BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 * L_16 = L_15;
			NullCheck(L_16);
			BurstCompileAttribute_set_CompileSynchronously_m244BDC780DD6BA187039F9B9D502896FCD9E5897_inline(L_16, (bool)1, /*hidden argument*/NULL);
			V_2 = L_16;
			IL2CPP_LEAVE(0x76, FINALLY_0067);
		}

IL_005c:
		{
		}

IL_005d:
		{
			// foreach (var a in memberInfo.GetCustomAttributes())
			RuntimeObject* L_17 = V_3;
			NullCheck(L_17);
			bool L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_17);
			if (L_18)
			{
				goto IL_0024;
			}
		}

IL_0065:
		{
			IL2CPP_LEAVE(0x72, FINALLY_0067);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0067;
	}

FINALLY_0067:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_19 = V_3;
			if (!L_19)
			{
				goto IL_0071;
			}
		}

IL_006a:
		{
			RuntimeObject* L_20 = V_3;
			NullCheck(L_20);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_20);
		}

IL_0071:
		{
			IL2CPP_END_FINALLY(103)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(103)
	{
		IL2CPP_JUMP_TBL(0x76, IL_0076)
		IL2CPP_JUMP_TBL(0x72, IL_0072)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0072:
	{
		// return null;
		V_2 = (BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 *)NULL;
		goto IL_0076;
	}

IL_0076:
	{
		// }
		BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 * L_21 = V_2;
		return L_21;
	}
}
// System.Boolean Unity.Burst.BurstCompilerOptions::HasBurstCompileAttribute(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_HasBurstCompileAttribute_m69F14C7C843E37DC4D4012AF4D7DBB5B4145FC81 (MemberInfo_t * ___member0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BurstCompilerOptions_HasBurstCompileAttribute_m69F14C7C843E37DC4D4012AF4D7DBB5B4145FC81_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (member == null) throw new ArgumentNullException(nameof(member));
		MemberInfo_t * L_0 = ___member0;
		bool L_1 = MemberInfo_op_Equality_m9B77A8811138313780ADCD0A9EE018748B9249D9(L_0, (MemberInfo_t *)NULL, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// if (member == null) throw new ArgumentNullException(nameof(member));
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, _stringLiteral6467BAA3B187373E3931422E2A8EF22F3E447D77, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, BurstCompilerOptions_HasBurstCompileAttribute_m69F14C7C843E37DC4D4012AF4D7DBB5B4145FC81_RuntimeMethod_var);
	}

IL_0017:
	{
		// return TryGetAttribute(member, out attr);
		MemberInfo_t * L_4 = ___member0;
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44_il2cpp_TypeInfo_var);
		bool L_5 = BurstCompilerOptions_TryGetAttribute_mF1F97725346C302CEA15CD8533F0C99D978A72D7(L_4, (BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 **)(&V_0), /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_0022;
	}

IL_0022:
	{
		// }
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::OnOptionsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_OnOptionsChanged_m10F9A296C965A55AEDFC1A43DD1988FF6D4B2E2B (BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * __this, const RuntimeMethod* method)
{
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B2_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B1_0 = NULL;
	{
		// OptionsChanged?.Invoke();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = BurstCompilerOptions_get_OptionsChanged_m6BB33215B8A8BADABC44422E96043C22EC3CC3EA_inline(__this, /*hidden argument*/NULL);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0013;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(G_B2_0, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::MaybeTriggerRecompilation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_MaybeTriggerRecompilation_mDC4E81D8DAC3D07BA0724029AA9A5448E1CBA22C (BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions__cctor_m31C26BE712E5086F1DC7E34A7C097AA88E160B4E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BurstCompilerOptions__cctor_m31C26BE712E5086F1DC7E34A7C097AA88E160B4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		// foreach (var arg in Environment.GetCommandLineArgs())
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = Environment_GetCommandLineArgs_mB085186484DC6D8E3CF71C2C92C60AF326833347(/*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0044;
	}

IL_000c:
	{
		// foreach (var arg in Environment.GetCommandLineArgs())
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// switch (arg)
		String_t* L_5 = V_2;
		V_3 = L_5;
		String_t* L_6 = V_3;
		bool L_7 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_6, _stringLiteral4934F3BF331C7DB57CC08B01709387E5F2F76930, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_8 = V_3;
		bool L_9 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_8, _stringLiteral5313CDFCA54BDCBEFE3ACDC77B281257D4101C39, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0037;
		}
	}
	{
		goto IL_003f;
	}

IL_002f:
	{
		// ForceDisableBurstCompilation = true;
		((BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44_il2cpp_TypeInfo_var))->set_ForceDisableBurstCompilation_0((bool)1);
		// break;
		goto IL_003f;
	}

IL_0037:
	{
		// ForceBurstCompilationSynchronously = false;
		((BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44_il2cpp_TypeInfo_var))->set_ForceBurstCompilationSynchronously_1((bool)0);
		// break;
		goto IL_003f;
	}

IL_003f:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0044:
	{
		// foreach (var arg in Environment.GetCommandLineArgs())
		int32_t L_11 = V_1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))))
		{
			goto IL_000c;
		}
	}
	{
		// }
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
// System.Int64 Unity.Burst.BurstRuntime::GetHashCode64(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_m832BDB47FC703322CCF61EBFDFF1B0E692D48629 (Type_t * ___type0, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		// return HashStringWithFNV1A64(type.AssemblyQualifiedName);
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(28 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		int64_t L_2 = BurstRuntime_HashStringWithFNV1A64_m8A77BD745CEFF29CBA89F45C97A290F1C82FA9FE(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		int64_t L_3 = V_0;
		return L_3;
	}
}
// System.Int64 Unity.Burst.BurstRuntime::HashStringWithFNV1A64(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_HashStringWithFNV1A64_m8A77BD745CEFF29CBA89F45C97A290F1C82FA9FE (String_t* ___text0, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	int64_t V_4 = 0;
	{
		// ulong result = offsetBasis;
		V_0 = ((int64_t)-3750763034362895579LL);
		// foreach (var c in text)
		String_t* L_0 = ___text0;
		V_1 = L_0;
		V_2 = 0;
		goto IL_0048;
	}

IL_0012:
	{
		// foreach (var c in text)
		String_t* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		Il2CppChar L_3 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_1, L_2, /*hidden argument*/NULL);
		V_3 = L_3;
		// result = prime * (result ^ (byte)(c & 255));
		uint64_t L_4 = V_0;
		Il2CppChar L_5 = V_3;
		V_0 = ((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)1099511628211LL), (int64_t)((int64_t)((int64_t)L_4^(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)255))))))))))))))));
		// result = prime * (result ^ (byte)(c >> 8));
		uint64_t L_6 = V_0;
		Il2CppChar L_7 = V_3;
		V_0 = ((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)1099511628211LL), (int64_t)((int64_t)((int64_t)L_6^(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_7>>(int32_t)8)))))))))))))));
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0048:
	{
		// foreach (var c in text)
		int32_t L_9 = V_2;
		String_t* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0012;
		}
	}
	{
		// return (long)result;
		uint64_t L_12 = V_0;
		V_4 = L_12;
		goto IL_0056;
	}

IL_0056:
	{
		// }
		int64_t L_13 = V_4;
		return L_13;
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
// System.Void Unity.Burst.NoAliasAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAliasAttribute__ctor_m8F2E3E24FA8583CBC71033EEA3E954DE40D6F079 (NoAliasAttribute_tA850247220274BC9848B40E2C27637426DC3D967 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
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
// System.Void* Unity.Burst.SharedStatic::GetOrCreateSharedStaticInternal(System.Int64,System.Int64,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* SharedStatic_GetOrCreateSharedStaticInternal_m1495640A463E18E65D76FA6BA3574B0604434BE2 (int64_t ___getHashCode640, int64_t ___getSubHashCode641, uint32_t ___sizeOf2, uint32_t ___alignment3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SharedStatic_GetOrCreateSharedStaticInternal_m1495640A463E18E65D76FA6BA3574B0604434BE2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Hash128_tBB1E9B1041BFF6ED6E76F2066E2815ED04742151  V_0;
	memset((&V_0), 0, sizeof(V_0));
	void* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	void* V_4 = NULL;
	{
		// if (sizeOf == 0) throw new ArgumentException("sizeOf must be > 0", nameof(sizeOf));
		uint32_t L_0 = ___sizeOf2;
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (sizeOf == 0) throw new ArgumentException("sizeOf must be > 0", nameof(sizeOf));
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_2, _stringLiteral840EECA1DFF17D60FD9C87C4E7778E44469EC06A, _stringLiteralA0F355302B9E8F39307C35102F57E41A62B6E26D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, SharedStatic_GetOrCreateSharedStaticInternal_m1495640A463E18E65D76FA6BA3574B0604434BE2_RuntimeMethod_var);
	}

IL_0019:
	{
		// var hash128 = new Hash128((ulong)getHashCode64, (ulong)getSubHashCode64);
		int64_t L_3 = ___getHashCode640;
		int64_t L_4 = ___getSubHashCode641;
		Hash128__ctor_m600462667D7BE3F6E017E8ECDF6242A525F3FD8E((Hash128_tBB1E9B1041BFF6ED6E76F2066E2815ED04742151 *)(&V_0), L_3, L_4, /*hidden argument*/NULL);
		// var result = BurstCompilerService.GetOrCreateSharedMemory(ref hash128, sizeOf, alignment);
		uint32_t L_5 = ___sizeOf2;
		uint32_t L_6 = ___alignment3;
		void* L_7 = BurstCompilerService_GetOrCreateSharedMemory_mB71187D4FB6AEFB3787C2FF0638A90E55554899E((Hash128_tBB1E9B1041BFF6ED6E76F2066E2815ED04742151 *)(&V_0), L_5, L_6, /*hidden argument*/NULL);
		V_1 = (void*)L_7;
		// if (result == null)
		void* L_8 = V_1;
		V_3 = (bool)((((intptr_t)L_8) == ((intptr_t)(((uintptr_t)0))))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		// throw new InvalidOperationException("Unable to create a SharedStatic for this key. It is likely that the same key was used to allocate a shared memory with a smaller size while the new size requested is bigger");
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_10 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_10, _stringLiteral878D0DA44486C7E5757BAA664D569286E71520D7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, SharedStatic_GetOrCreateSharedStaticInternal_m1495640A463E18E65D76FA6BA3574B0604434BE2_RuntimeMethod_var);
	}

IL_0041:
	{
		// return result;
		void* L_11 = V_1;
		V_4 = (void*)L_11;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		void* L_12 = V_4;
		return (void*)(L_12);
	}
}
// System.Void Unity.Burst.SharedStatic::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedStatic__cctor_m8D3849160B182FFCA57C19AAAF5E9008B9680EC4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SharedStatic__cctor_m8D3849160B182FFCA57C19AAAF5E9008B9680EC4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Dictionary<long, Type> HashToType = new Dictionary<long, Type>();
		Dictionary_2_tDAE4B5F5C7B840CC35FD96E10CFFB0C7BF6485CE * L_0 = (Dictionary_2_tDAE4B5F5C7B840CC35FD96E10CFFB0C7BF6485CE *)il2cpp_codegen_object_new(Dictionary_2_tDAE4B5F5C7B840CC35FD96E10CFFB0C7BF6485CE_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m0FB5579AB2FF9FA7FB68FBA7082F6472C4E8C1B3(L_0, /*hidden argument*/Dictionary_2__ctor_m0FB5579AB2FF9FA7FB68FBA7082F6472C4E8C1B3_RuntimeMethod_var);
		((SharedStatic_tF941444C1A1853F58BAF8284EBF7D9E5FFBC0BD9_StaticFields*)il2cpp_codegen_static_fields_for(SharedStatic_tF941444C1A1853F58BAF8284EBF7D9E5FFBC0BD9_il2cpp_TypeInfo_var))->set_HashToType_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatMode_m63870BB9FBDCD17C1DFE3C96AE538EE9DC887237_inline (BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public FloatMode FloatMode { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CFloatModeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatPrecision_m721BC6780746CD1A7F081B2C397D56076F73AB9E_inline (BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public FloatPrecision FloatPrecision { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CFloatPrecisionU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_IsGlobal_m779C448E4AF259E0CDCBFE76DF0C6B9DABBBC942_inline (BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * __this, const RuntimeMethod* method)
{
	{
		// private bool IsGlobal { get; }
		bool L_0 = __this->get_U3CIsGlobalU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_CompileSynchronously_m244BDC780DD6BA187039F9B9D502896FCD9E5897_inline (BurstCompileAttribute_t06AA9AB993678B899479AA841331A04292E6A0D7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool CompileSynchronously { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CCompileSynchronouslyU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * BurstCompilerOptions_get_OptionsChanged_m6BB33215B8A8BADABC44422E96043C22EC3CC3EA_inline (BurstCompilerOptions_t49F721D0BD7F448AB59CFD4E3B59096100FB9C44 * __this, const RuntimeMethod* method)
{
	{
		// internal Action OptionsChanged { get; set; }
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_U3COptionsChangedU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}

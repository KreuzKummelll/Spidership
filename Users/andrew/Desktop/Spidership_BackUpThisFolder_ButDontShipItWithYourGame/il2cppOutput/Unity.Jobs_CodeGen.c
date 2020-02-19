#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 System.Void Unity.Jobs.IJobParallelForDefer::Execute(System.Int32)
// 0x00000002 Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForDeferExtensions::Schedule(T,Unity.Collections.NativeList`1<U>,System.Int32,Unity.Jobs.JobHandle)
// 0x00000003 Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForDeferExtensions::Schedule(T,System.Int32*,System.Int32,Unity.Jobs.JobHandle)
// 0x00000004 System.IntPtr Unity.Jobs.IJobParallelForDeferExtensions_JobStructDefer`1::Initialize()
// 0x00000005 System.Void Unity.Jobs.IJobParallelForDeferExtensions_JobStructDefer`1::Execute(T&,System.IntPtr,System.IntPtr,Unity.Jobs.LowLevel.Unsafe.JobRanges&,System.Int32)
// 0x00000006 System.Void Unity.Jobs.IJobParallelForDeferExtensions_JobStructDefer`1_ExecuteJobFunction::.ctor(System.Object,System.IntPtr)
// 0x00000007 System.Void Unity.Jobs.IJobParallelForDeferExtensions_JobStructDefer`1_ExecuteJobFunction::Invoke(T&,System.IntPtr,System.IntPtr,Unity.Jobs.LowLevel.Unsafe.JobRanges&,System.Int32)
// 0x00000008 System.IAsyncResult Unity.Jobs.IJobParallelForDeferExtensions_JobStructDefer`1_ExecuteJobFunction::BeginInvoke(T&,System.IntPtr,System.IntPtr,Unity.Jobs.LowLevel.Unsafe.JobRanges&,System.Int32,System.AsyncCallback,System.Object)
// 0x00000009 System.Void Unity.Jobs.IJobParallelForDeferExtensions_JobStructDefer`1_ExecuteJobFunction::EndInvoke(T&,Unity.Jobs.LowLevel.Unsafe.JobRanges&,System.IAsyncResult)
static Il2CppMethodPointer s_methodPointers[9] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[9] = 
{
	32,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[3] = 
{
	{ 0x02000004, { 7, 6 } },
	{ 0x06000002, { 0, 4 } },
	{ 0x06000003, { 4, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[13] = 
{
	{ (Il2CppRGCTXDataType)3, 37581 },
	{ (Il2CppRGCTXDataType)3, 37582 },
	{ (Il2CppRGCTXDataType)2, 33254 },
	{ (Il2CppRGCTXDataType)3, 37583 },
	{ (Il2CppRGCTXDataType)3, 37584 },
	{ (Il2CppRGCTXDataType)3, 37585 },
	{ (Il2CppRGCTXDataType)2, 33255 },
	{ (Il2CppRGCTXDataType)2, 33256 },
	{ (Il2CppRGCTXDataType)1, 28345 },
	{ (Il2CppRGCTXDataType)3, 37586 },
	{ (Il2CppRGCTXDataType)2, 33257 },
	{ (Il2CppRGCTXDataType)3, 37587 },
	{ (Il2CppRGCTXDataType)2, 28345 },
};
extern const Il2CppCodeGenModule g_Unity_JobsCodeGenModule;
const Il2CppCodeGenModule g_Unity_JobsCodeGenModule = 
{
	"Unity.Jobs.dll",
	9,
	s_methodPointers,
	s_InvokerIndices,
	0,
	NULL,
	3,
	s_rgctxIndices,
	13,
	s_rgctxValues,
	NULL,
};

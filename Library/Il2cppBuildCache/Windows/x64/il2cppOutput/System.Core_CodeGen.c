#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000000E TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
// 0x00000011 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x00000012 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000015 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000016 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000017 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000018 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001A System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001B System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001C System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001D System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x0000001E System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000001F System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000020 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000021 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000022 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000023 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000024 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000025 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000026 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000027 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000028 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000029 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000002A System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002B System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000002C System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000002D System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000002E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000030 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000031 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000032 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000033 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000034 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000035 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000036 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000037 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000038 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000039 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003A System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003B System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x0000003C System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000003D System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000040 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000041 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000042 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000043 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000044 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000045 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000046 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000047 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000048 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000049 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004A System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000004B System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000004C System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000004D TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000004E System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000004F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x00000050 System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x00000051 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x00000052 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000053 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000054 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000055 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000056 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000057 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000058 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000059 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x0000005A System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x0000005B System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x0000005C TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000005D System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x0000005E System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x0000005F System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000060 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000061 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000062 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000063 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000064 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000065 System.Void System.Linq.Set`1::Resize()
// 0x00000066 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000067 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000068 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000069 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006A System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000006B System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000006C System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000006D System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x0000006E TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x0000006F System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000070 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000071 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000072 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000073 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000074 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000075 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000076 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000077 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x00000078 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x00000079 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x0000007A System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x0000007B System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x0000007C TElement[] System.Linq.Buffer`1::ToArray()
// 0x0000007D System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x0000007E System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x0000007F System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000080 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000081 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000082 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000083 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000084 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000085 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000086 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000087 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000088 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000089 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000008A System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000008B System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x0000008C System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x0000008D System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x0000008E System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x0000008F System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000090 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000091 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000092 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000093 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000094 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x00000095 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000096 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000097 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000098 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000099 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[153] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
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
static const int32_t s_InvokerIndices[153] = 
{
	5214,
	5214,
	5410,
	5410,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[53] = 
{
	{ 0x02000004, { 88, 4 } },
	{ 0x02000005, { 92, 9 } },
	{ 0x02000006, { 103, 7 } },
	{ 0x02000007, { 112, 10 } },
	{ 0x02000008, { 124, 11 } },
	{ 0x02000009, { 138, 9 } },
	{ 0x0200000A, { 150, 12 } },
	{ 0x0200000B, { 165, 1 } },
	{ 0x0200000C, { 166, 2 } },
	{ 0x0200000D, { 168, 12 } },
	{ 0x0200000E, { 180, 11 } },
	{ 0x0200000F, { 191, 2 } },
	{ 0x02000011, { 193, 8 } },
	{ 0x02000013, { 201, 3 } },
	{ 0x02000014, { 204, 5 } },
	{ 0x02000015, { 209, 7 } },
	{ 0x02000016, { 216, 3 } },
	{ 0x02000017, { 219, 7 } },
	{ 0x02000018, { 226, 4 } },
	{ 0x02000019, { 230, 21 } },
	{ 0x0200001B, { 251, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 2 } },
	{ 0x0600000C, { 35, 1 } },
	{ 0x0600000D, { 36, 2 } },
	{ 0x0600000E, { 38, 3 } },
	{ 0x0600000F, { 41, 2 } },
	{ 0x06000010, { 43, 1 } },
	{ 0x06000011, { 44, 7 } },
	{ 0x06000012, { 51, 4 } },
	{ 0x06000013, { 55, 4 } },
	{ 0x06000014, { 59, 3 } },
	{ 0x06000015, { 62, 3 } },
	{ 0x06000016, { 65, 3 } },
	{ 0x06000017, { 68, 1 } },
	{ 0x06000018, { 69, 1 } },
	{ 0x06000019, { 70, 3 } },
	{ 0x0600001A, { 73, 3 } },
	{ 0x0600001B, { 76, 2 } },
	{ 0x0600001C, { 78, 3 } },
	{ 0x0600001D, { 81, 2 } },
	{ 0x0600001E, { 83, 5 } },
	{ 0x0600002E, { 101, 2 } },
	{ 0x06000033, { 110, 2 } },
	{ 0x06000038, { 122, 2 } },
	{ 0x0600003E, { 135, 3 } },
	{ 0x06000043, { 147, 3 } },
	{ 0x06000048, { 162, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[253] = 
{
	{ (Il2CppRGCTXDataType)2, 2626 },
	{ (Il2CppRGCTXDataType)3, 11823 },
	{ (Il2CppRGCTXDataType)2, 4314 },
	{ (Il2CppRGCTXDataType)2, 3669 },
	{ (Il2CppRGCTXDataType)3, 22533 },
	{ (Il2CppRGCTXDataType)2, 2748 },
	{ (Il2CppRGCTXDataType)2, 3676 },
	{ (Il2CppRGCTXDataType)3, 22594 },
	{ (Il2CppRGCTXDataType)2, 3671 },
	{ (Il2CppRGCTXDataType)3, 22545 },
	{ (Il2CppRGCTXDataType)2, 2627 },
	{ (Il2CppRGCTXDataType)3, 11824 },
	{ (Il2CppRGCTXDataType)2, 4335 },
	{ (Il2CppRGCTXDataType)2, 3678 },
	{ (Il2CppRGCTXDataType)3, 22606 },
	{ (Il2CppRGCTXDataType)2, 2765 },
	{ (Il2CppRGCTXDataType)2, 3686 },
	{ (Il2CppRGCTXDataType)3, 22795 },
	{ (Il2CppRGCTXDataType)2, 3682 },
	{ (Il2CppRGCTXDataType)3, 22692 },
	{ (Il2CppRGCTXDataType)2, 970 },
	{ (Il2CppRGCTXDataType)3, 69 },
	{ (Il2CppRGCTXDataType)3, 70 },
	{ (Il2CppRGCTXDataType)2, 1702 },
	{ (Il2CppRGCTXDataType)3, 8654 },
	{ (Il2CppRGCTXDataType)2, 971 },
	{ (Il2CppRGCTXDataType)3, 87 },
	{ (Il2CppRGCTXDataType)3, 88 },
	{ (Il2CppRGCTXDataType)2, 1718 },
	{ (Il2CppRGCTXDataType)3, 8663 },
	{ (Il2CppRGCTXDataType)3, 25998 },
	{ (Il2CppRGCTXDataType)2, 978 },
	{ (Il2CppRGCTXDataType)3, 172 },
	{ (Il2CppRGCTXDataType)2, 3243 },
	{ (Il2CppRGCTXDataType)3, 17905 },
	{ (Il2CppRGCTXDataType)3, 25959 },
	{ (Il2CppRGCTXDataType)2, 974 },
	{ (Il2CppRGCTXDataType)3, 132 },
	{ (Il2CppRGCTXDataType)2, 1165 },
	{ (Il2CppRGCTXDataType)3, 1520 },
	{ (Il2CppRGCTXDataType)3, 1521 },
	{ (Il2CppRGCTXDataType)2, 2749 },
	{ (Il2CppRGCTXDataType)3, 12596 },
	{ (Il2CppRGCTXDataType)3, 26020 },
	{ (Il2CppRGCTXDataType)2, 1345 },
	{ (Il2CppRGCTXDataType)3, 2928 },
	{ (Il2CppRGCTXDataType)2, 2029 },
	{ (Il2CppRGCTXDataType)2, 2139 },
	{ (Il2CppRGCTXDataType)3, 8661 },
	{ (Il2CppRGCTXDataType)3, 8662 },
	{ (Il2CppRGCTXDataType)3, 2929 },
	{ (Il2CppRGCTXDataType)2, 2429 },
	{ (Il2CppRGCTXDataType)2, 1881 },
	{ (Il2CppRGCTXDataType)2, 2010 },
	{ (Il2CppRGCTXDataType)2, 2133 },
	{ (Il2CppRGCTXDataType)2, 2430 },
	{ (Il2CppRGCTXDataType)2, 1882 },
	{ (Il2CppRGCTXDataType)2, 2011 },
	{ (Il2CppRGCTXDataType)2, 2134 },
	{ (Il2CppRGCTXDataType)2, 2012 },
	{ (Il2CppRGCTXDataType)2, 2135 },
	{ (Il2CppRGCTXDataType)3, 8656 },
	{ (Il2CppRGCTXDataType)2, 2013 },
	{ (Il2CppRGCTXDataType)2, 2136 },
	{ (Il2CppRGCTXDataType)3, 8657 },
	{ (Il2CppRGCTXDataType)2, 2428 },
	{ (Il2CppRGCTXDataType)2, 2009 },
	{ (Il2CppRGCTXDataType)2, 2132 },
	{ (Il2CppRGCTXDataType)2, 1492 },
	{ (Il2CppRGCTXDataType)2, 1998 },
	{ (Il2CppRGCTXDataType)2, 1999 },
	{ (Il2CppRGCTXDataType)2, 2129 },
	{ (Il2CppRGCTXDataType)3, 8653 },
	{ (Il2CppRGCTXDataType)2, 1997 },
	{ (Il2CppRGCTXDataType)2, 2128 },
	{ (Il2CppRGCTXDataType)3, 8652 },
	{ (Il2CppRGCTXDataType)2, 1880 },
	{ (Il2CppRGCTXDataType)2, 2007 },
	{ (Il2CppRGCTXDataType)2, 2008 },
	{ (Il2CppRGCTXDataType)2, 2131 },
	{ (Il2CppRGCTXDataType)3, 8655 },
	{ (Il2CppRGCTXDataType)2, 1879 },
	{ (Il2CppRGCTXDataType)3, 25933 },
	{ (Il2CppRGCTXDataType)3, 7826 },
	{ (Il2CppRGCTXDataType)2, 1579 },
	{ (Il2CppRGCTXDataType)2, 2001 },
	{ (Il2CppRGCTXDataType)2, 2130 },
	{ (Il2CppRGCTXDataType)2, 2239 },
	{ (Il2CppRGCTXDataType)3, 11825 },
	{ (Il2CppRGCTXDataType)3, 11827 },
	{ (Il2CppRGCTXDataType)2, 696 },
	{ (Il2CppRGCTXDataType)3, 11826 },
	{ (Il2CppRGCTXDataType)3, 11835 },
	{ (Il2CppRGCTXDataType)2, 2630 },
	{ (Il2CppRGCTXDataType)2, 3672 },
	{ (Il2CppRGCTXDataType)3, 22546 },
	{ (Il2CppRGCTXDataType)3, 11836 },
	{ (Il2CppRGCTXDataType)2, 2063 },
	{ (Il2CppRGCTXDataType)2, 2167 },
	{ (Il2CppRGCTXDataType)3, 8671 },
	{ (Il2CppRGCTXDataType)3, 25896 },
	{ (Il2CppRGCTXDataType)2, 3683 },
	{ (Il2CppRGCTXDataType)3, 22693 },
	{ (Il2CppRGCTXDataType)3, 11828 },
	{ (Il2CppRGCTXDataType)2, 2629 },
	{ (Il2CppRGCTXDataType)2, 3670 },
	{ (Il2CppRGCTXDataType)3, 22534 },
	{ (Il2CppRGCTXDataType)3, 8670 },
	{ (Il2CppRGCTXDataType)3, 11829 },
	{ (Il2CppRGCTXDataType)3, 25895 },
	{ (Il2CppRGCTXDataType)2, 3679 },
	{ (Il2CppRGCTXDataType)3, 22607 },
	{ (Il2CppRGCTXDataType)3, 11842 },
	{ (Il2CppRGCTXDataType)2, 2631 },
	{ (Il2CppRGCTXDataType)2, 3677 },
	{ (Il2CppRGCTXDataType)3, 22595 },
	{ (Il2CppRGCTXDataType)3, 12644 },
	{ (Il2CppRGCTXDataType)3, 6444 },
	{ (Il2CppRGCTXDataType)3, 8672 },
	{ (Il2CppRGCTXDataType)3, 6443 },
	{ (Il2CppRGCTXDataType)3, 11843 },
	{ (Il2CppRGCTXDataType)3, 25897 },
	{ (Il2CppRGCTXDataType)2, 3687 },
	{ (Il2CppRGCTXDataType)3, 22796 },
	{ (Il2CppRGCTXDataType)3, 11856 },
	{ (Il2CppRGCTXDataType)2, 2633 },
	{ (Il2CppRGCTXDataType)2, 3685 },
	{ (Il2CppRGCTXDataType)3, 22695 },
	{ (Il2CppRGCTXDataType)3, 11857 },
	{ (Il2CppRGCTXDataType)2, 2066 },
	{ (Il2CppRGCTXDataType)2, 2170 },
	{ (Il2CppRGCTXDataType)3, 8676 },
	{ (Il2CppRGCTXDataType)3, 8675 },
	{ (Il2CppRGCTXDataType)2, 3674 },
	{ (Il2CppRGCTXDataType)3, 22548 },
	{ (Il2CppRGCTXDataType)3, 25907 },
	{ (Il2CppRGCTXDataType)2, 3684 },
	{ (Il2CppRGCTXDataType)3, 22694 },
	{ (Il2CppRGCTXDataType)3, 11849 },
	{ (Il2CppRGCTXDataType)2, 2632 },
	{ (Il2CppRGCTXDataType)2, 3681 },
	{ (Il2CppRGCTXDataType)3, 22609 },
	{ (Il2CppRGCTXDataType)3, 8674 },
	{ (Il2CppRGCTXDataType)3, 8673 },
	{ (Il2CppRGCTXDataType)3, 11850 },
	{ (Il2CppRGCTXDataType)2, 3673 },
	{ (Il2CppRGCTXDataType)3, 22547 },
	{ (Il2CppRGCTXDataType)3, 25906 },
	{ (Il2CppRGCTXDataType)2, 3680 },
	{ (Il2CppRGCTXDataType)3, 22608 },
	{ (Il2CppRGCTXDataType)3, 11863 },
	{ (Il2CppRGCTXDataType)2, 2634 },
	{ (Il2CppRGCTXDataType)2, 3689 },
	{ (Il2CppRGCTXDataType)3, 22798 },
	{ (Il2CppRGCTXDataType)3, 12645 },
	{ (Il2CppRGCTXDataType)3, 6446 },
	{ (Il2CppRGCTXDataType)3, 8678 },
	{ (Il2CppRGCTXDataType)3, 8677 },
	{ (Il2CppRGCTXDataType)3, 6445 },
	{ (Il2CppRGCTXDataType)3, 11864 },
	{ (Il2CppRGCTXDataType)2, 3675 },
	{ (Il2CppRGCTXDataType)3, 22549 },
	{ (Il2CppRGCTXDataType)3, 25908 },
	{ (Il2CppRGCTXDataType)2, 3688 },
	{ (Il2CppRGCTXDataType)3, 22797 },
	{ (Il2CppRGCTXDataType)3, 8667 },
	{ (Il2CppRGCTXDataType)3, 8668 },
	{ (Il2CppRGCTXDataType)3, 8679 },
	{ (Il2CppRGCTXDataType)3, 175 },
	{ (Il2CppRGCTXDataType)3, 174 },
	{ (Il2CppRGCTXDataType)2, 2058 },
	{ (Il2CppRGCTXDataType)2, 2163 },
	{ (Il2CppRGCTXDataType)3, 8669 },
	{ (Il2CppRGCTXDataType)2, 2073 },
	{ (Il2CppRGCTXDataType)2, 2185 },
	{ (Il2CppRGCTXDataType)3, 177 },
	{ (Il2CppRGCTXDataType)2, 875 },
	{ (Il2CppRGCTXDataType)2, 979 },
	{ (Il2CppRGCTXDataType)3, 173 },
	{ (Il2CppRGCTXDataType)3, 176 },
	{ (Il2CppRGCTXDataType)3, 134 },
	{ (Il2CppRGCTXDataType)2, 3391 },
	{ (Il2CppRGCTXDataType)3, 20229 },
	{ (Il2CppRGCTXDataType)2, 2055 },
	{ (Il2CppRGCTXDataType)2, 2161 },
	{ (Il2CppRGCTXDataType)3, 20230 },
	{ (Il2CppRGCTXDataType)3, 136 },
	{ (Il2CppRGCTXDataType)2, 693 },
	{ (Il2CppRGCTXDataType)2, 975 },
	{ (Il2CppRGCTXDataType)3, 133 },
	{ (Il2CppRGCTXDataType)3, 135 },
	{ (Il2CppRGCTXDataType)2, 4347 },
	{ (Il2CppRGCTXDataType)2, 1493 },
	{ (Il2CppRGCTXDataType)3, 7864 },
	{ (Il2CppRGCTXDataType)2, 1595 },
	{ (Il2CppRGCTXDataType)2, 4436 },
	{ (Il2CppRGCTXDataType)3, 20226 },
	{ (Il2CppRGCTXDataType)3, 20227 },
	{ (Il2CppRGCTXDataType)2, 2254 },
	{ (Il2CppRGCTXDataType)3, 20228 },
	{ (Il2CppRGCTXDataType)2, 619 },
	{ (Il2CppRGCTXDataType)2, 976 },
	{ (Il2CppRGCTXDataType)3, 146 },
	{ (Il2CppRGCTXDataType)3, 17895 },
	{ (Il2CppRGCTXDataType)2, 1166 },
	{ (Il2CppRGCTXDataType)3, 1522 },
	{ (Il2CppRGCTXDataType)3, 17900 },
	{ (Il2CppRGCTXDataType)3, 6418 },
	{ (Il2CppRGCTXDataType)2, 734 },
	{ (Il2CppRGCTXDataType)3, 17896 },
	{ (Il2CppRGCTXDataType)2, 3240 },
	{ (Il2CppRGCTXDataType)3, 1942 },
	{ (Il2CppRGCTXDataType)2, 1185 },
	{ (Il2CppRGCTXDataType)2, 1542 },
	{ (Il2CppRGCTXDataType)3, 6424 },
	{ (Il2CppRGCTXDataType)3, 17897 },
	{ (Il2CppRGCTXDataType)3, 6413 },
	{ (Il2CppRGCTXDataType)3, 6414 },
	{ (Il2CppRGCTXDataType)3, 6412 },
	{ (Il2CppRGCTXDataType)3, 6415 },
	{ (Il2CppRGCTXDataType)2, 1538 },
	{ (Il2CppRGCTXDataType)2, 4392 },
	{ (Il2CppRGCTXDataType)3, 8665 },
	{ (Il2CppRGCTXDataType)3, 6417 },
	{ (Il2CppRGCTXDataType)2, 1974 },
	{ (Il2CppRGCTXDataType)3, 6416 },
	{ (Il2CppRGCTXDataType)2, 1884 },
	{ (Il2CppRGCTXDataType)2, 4339 },
	{ (Il2CppRGCTXDataType)2, 2030 },
	{ (Il2CppRGCTXDataType)2, 2140 },
	{ (Il2CppRGCTXDataType)3, 7845 },
	{ (Il2CppRGCTXDataType)2, 1588 },
	{ (Il2CppRGCTXDataType)3, 9473 },
	{ (Il2CppRGCTXDataType)3, 9474 },
	{ (Il2CppRGCTXDataType)3, 9479 },
	{ (Il2CppRGCTXDataType)2, 2248 },
	{ (Il2CppRGCTXDataType)3, 9476 },
	{ (Il2CppRGCTXDataType)3, 26634 },
	{ (Il2CppRGCTXDataType)2, 1544 },
	{ (Il2CppRGCTXDataType)3, 6435 },
	{ (Il2CppRGCTXDataType)1, 1969 },
	{ (Il2CppRGCTXDataType)2, 4353 },
	{ (Il2CppRGCTXDataType)3, 9475 },
	{ (Il2CppRGCTXDataType)1, 4353 },
	{ (Il2CppRGCTXDataType)1, 2248 },
	{ (Il2CppRGCTXDataType)2, 4434 },
	{ (Il2CppRGCTXDataType)2, 4353 },
	{ (Il2CppRGCTXDataType)3, 9480 },
	{ (Il2CppRGCTXDataType)3, 9478 },
	{ (Il2CppRGCTXDataType)3, 9477 },
	{ (Il2CppRGCTXDataType)2, 538 },
	{ (Il2CppRGCTXDataType)3, 6447 },
	{ (Il2CppRGCTXDataType)2, 708 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	153,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	53,
	s_rgctxIndices,
	253,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};

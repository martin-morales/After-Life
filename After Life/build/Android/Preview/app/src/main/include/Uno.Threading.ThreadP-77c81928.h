// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Uno.Threading/1.0.11/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct ThreadPool__WorkItem;}}}

namespace g{
namespace Uno{
namespace Threading{

// private abstract class ThreadPool.WorkItem :1078
// {
struct ThreadPool__WorkItem_type : uType
{
    void(*fp_Invoke)(::g::Uno::Threading::ThreadPool__WorkItem*);
};

ThreadPool__WorkItem_type* ThreadPool__WorkItem_typeof();
void ThreadPool__WorkItem__ctor__fn(ThreadPool__WorkItem* __this);

struct ThreadPool__WorkItem : uObject
{
    void ctor_();
    void Invoke() { (((ThreadPool__WorkItem_type*)__type)->fp_Invoke)(this); }
};
// }

}}} // ::g::Uno::Threading

// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/FuseJS/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace FuseJS{struct Bundle__ReadClosure;}}

namespace g{
namespace FuseJS{

// private sealed class Bundle.ReadClosure :795
// {
uType* Bundle__ReadClosure_typeof();
void Bundle__ReadClosure__ctor__fn(Bundle__ReadClosure* __this, uString* filename);
void Bundle__ReadClosure__Invoke_fn(Bundle__ReadClosure* __this, uString** __retval);
void Bundle__ReadClosure__New1_fn(uString* filename, Bundle__ReadClosure** __retval);

struct Bundle__ReadClosure : uObject
{
    uStrong<uString*> _filename;

    void ctor_(uString* filename);
    uString* Invoke();
    static Bundle__ReadClosure* New1(uString* filename);
};
// }

}} // ::g::FuseJS

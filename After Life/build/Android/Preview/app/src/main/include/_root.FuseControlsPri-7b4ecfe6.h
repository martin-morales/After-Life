// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/1.0.2/.uno/ux11/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Gestures{struct SwipeGesture;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property;}

namespace g{

// internal sealed class FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property :838
// {
::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_typeof();
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__ctor_3_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector* name);
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Get1_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval);
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__New1_fn(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property** __retval);
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Set1_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin);
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* __retval);

struct FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Gestures::SwipeGesture*> _obj;

    void ctor_3(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector name);
    static FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* New1(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g

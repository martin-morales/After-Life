// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Fuse.Animations/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.Track-26653137.h>
namespace g{namespace Fuse{namespace Animations{struct Change;}}}
namespace g{namespace Fuse{namespace Animations{struct CreateStateParams;}}}
namespace g{namespace Fuse{namespace Animations{struct DiscreteTrackChangeState;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class DiscreteTrackChangeState<T> :628
// {
::g::Fuse::Animations::TrackAnimatorState_type* DiscreteTrackChangeState_typeof();
void DiscreteTrackChangeState__ctor_2_fn(DiscreteTrackChangeState* __this, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__Disable_fn(DiscreteTrackChangeState* __this);
void DiscreteTrackChangeState__New1_fn(uType* __type, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p, DiscreteTrackChangeState** __retval);
void DiscreteTrackChangeState__SeekObjectValue_fn(DiscreteTrackChangeState* __this, uObject* value, float* strength);

struct DiscreteTrackChangeState : ::g::Fuse::Animations::TrackAnimatorState
{
    uStrong< ::g::Fuse::Animations::Change*> Animator1;
    uStrong<uObject*> mixHandle;

    void ctor_2(::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p);
    static DiscreteTrackChangeState* New1(uType* __type, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p);
};
// }

}}} // ::g::Fuse::Animations

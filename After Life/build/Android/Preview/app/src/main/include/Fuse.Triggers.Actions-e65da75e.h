// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/triggers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions-fcab7e57.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TransitionLayout;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class TransitionLayout :343
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* TransitionLayout_typeof();
void TransitionLayout__ctor_2_fn(TransitionLayout* __this);
void TransitionLayout__get_From_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element** __retval);
void TransitionLayout__set_From_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element* value);
void TransitionLayout__New2_fn(TransitionLayout** __retval);
void TransitionLayout__Perform_fn(TransitionLayout* __this, ::g::Fuse::Node* target);
void TransitionLayout__Transition_fn(TransitionLayout* __this);

struct TransitionLayout : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Elements::Element*> _perform;
    uStrong< ::g::Fuse::Elements::Element*> _From;

    void ctor_2();
    ::g::Fuse::Elements::Element* From();
    void From(::g::Fuse::Elements::Element* value);
    void Transition();
    static TransitionLayout* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions

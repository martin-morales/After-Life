// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.OnKeyPress.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct OnBackButton;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class OnBackButton :1345
// {
::g::Fuse::Triggers::Trigger_type* OnBackButton_typeof();
void OnBackButton__ctor_6_fn(OnBackButton* __this);
void OnBackButton__New3_fn(OnBackButton** __retval);
void OnBackButton__OnRooted_fn(OnBackButton* __this);

struct OnBackButton : ::g::Fuse::Triggers::OnKeyPress
{
    void ctor_6();
    static OnBackButton* New3();
};
// }

}}} // ::g::Fuse::Triggers

// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Platform{namespace EventSources{struct TextSource;}}}}

namespace g{
namespace Uno{
namespace Platform{
namespace EventSources{

// public static class TextSource :1208
// {
uClassType* TextSource_typeof();
void TextSource__get_IsTextInputActive_fn(bool* __retval);

struct TextSource : uObject
{
    static bool IsTextInputActive();
};
// }

}}}} // ::g::Uno::Platform::EventSources

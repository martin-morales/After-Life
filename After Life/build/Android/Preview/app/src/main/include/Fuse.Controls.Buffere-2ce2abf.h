// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{

// internal abstract interface BufferedWebViewCall :428
// {
uInterfaceType* BufferedWebViewCall_typeof();

struct BufferedWebViewCall
{
    void(*fp_Apply)(uObject*, uObject*);
    static void Apply(const uInterface& __this, uObject* wv) { __this.VTable<BufferedWebViewCall>()->fp_Apply(__this, wv); }
};
// }

}}} // ::g::Fuse::Controls

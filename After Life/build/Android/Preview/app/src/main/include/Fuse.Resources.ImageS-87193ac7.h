// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Resources{struct ImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSourceChangedArgs;}}}

namespace g{
namespace Fuse{
namespace Resources{

// internal sealed class ImageSourceChangedArgs :556
// {
uType* ImageSourceChangedArgs_typeof();
void ImageSourceChangedArgs__ctor_1_fn(ImageSourceChangedArgs* __this, ::g::Fuse::Resources::ImageSource* imageSource);
void ImageSourceChangedArgs__New2_fn(::g::Fuse::Resources::ImageSource* imageSource, ImageSourceChangedArgs** __retval);
void ImageSourceChangedArgs__Post_fn(ImageSourceChangedArgs* __this);

struct ImageSourceChangedArgs : ::g::Uno::EventArgs
{
    uStrong< ::g::Fuse::Resources::ImageSource*> _imageSource;

    void ctor_1(::g::Fuse::Resources::ImageSource* imageSource);
    void Post();
    static ImageSourceChangedArgs* New2(::g::Fuse::Resources::ImageSource* imageSource);
};
// }

}}} // ::g::Fuse::Resources

// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Fuse.FileSystem/1.0.2/uno/io/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.FileSystem.FileSystemInfo.h>
namespace g{namespace Fuse{namespace FileSystem{struct FileInfo;}}}
namespace g{namespace Fuse{namespace FileSystem{struct FileStatus;}}}

namespace g{
namespace Fuse{
namespace FileSystem{

// public sealed class FileInfo :66
// {
::g::Fuse::FileSystem::FileSystemInfo_type* FileInfo_typeof();
void FileInfo__ctor_1_fn(FileInfo* __this, uString* originalPath);
void FileInfo__get_Length_fn(FileInfo* __this, int64_t* __retval);
void FileInfo__LoadStatus_fn(FileInfo* __this, ::g::Fuse::FileSystem::FileStatus** __retval);
void FileInfo__New1_fn(uString* originalPath, FileInfo** __retval);

struct FileInfo : ::g::Fuse::FileSystem::FileSystemInfo
{
    void ctor_1(uString* originalPath);
    int64_t Length();
    static FileInfo* New1(uString* originalPath);
};
// }

}}} // ::g::Fuse::FileSystem

// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.JNI.h>
#include <Android.Base.JNI.RefType.h>
#include <Android.Base.Primitiv-2b9696be.h>
#include <Android.Base.Primitiv-45253430.h>
#include <Android.Base.Primitiv-ae5fb0f1.h>
#include <Android.Base.Primitiv-b7b09a.h>
#include <Android.Base.Primitiv-e437692f.h>
#include <Android.Base.Types.String.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.Android.AppRoot.h>
#include <Fuse.Android.StatusBarConfig.h>
#include <Fuse.Controls.Native.-3a814c3c.h>
#include <Fuse.Controls.Native.-43e7fbf.h>
#include <Fuse.Controls.Native.-454aa827.h>
#include <Fuse.Controls.Native.-51b6e8e5.h>
#include <Fuse.Controls.Native.-c67cabe.h>
#include <Fuse.Controls.Native.-ca2427b3.h>
#include <Fuse.Controls.Native.-dd7dd49d.h>
#include <Fuse.Controls.Native.-e502cdf1.h>
#include <Fuse.Controls.Native.-f43d469d.h>
#include <Fuse.Controls.VideoIm-78c612f4.h>
#include <Fuse.Internal.Android-336f3d43.h>
#include <Fuse.Platform.SystemUI.h>
#include <Java.Object.h>
#include <jni.h>
#include <Neovisionaries.WebSocketClient.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Compiler.ExportTa-7a61a803.h>
#include <Uno.Compiler.ExportTa-d4b8b207.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.Permissions.Permissions.h>
#include <Uno.Platform.AndroidDisplay.h>
#include <Uno.SByte.h>
#include <Uno.Short.h>
#include <Uno.String.h>
#include <Uno/JNIHelper.h>
//~
void __JavaUnoObject_Finalizer(JNIEnv *env , jclass clazz, jlong ptr)
{
    uAutoReleasePool pool;
    uRelease((::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject*)ptr);
}
jboolean JNICALL callUno_Fuse_Controls_Native_Android_InputDispatch_OnTouch158(JNIEnv *env,jclass clazz,jobject view,jobject motionEvent,jlong viewPtr,jlong motionEventPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_view = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(view, true);
    ::g::Java::Object* uno_motionEvent = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(motionEvent, true);
    jboolean __jresult;
    JTRY
        bool __result=::g::Fuse::Controls::Native::Android::InputDispatch::OnTouch(uCast<::g::Java::Object*>(uno_view, ::g::Java::Object_typeof()), uCast<::g::Java::Object*>(uno_motionEvent, ::g::Java::Object_typeof()));
        __jresult = (jboolean)__result;
    JCATCH
    return __jresult;
}
jboolean JNICALL callUno_Fuse_Controls_Native_Android_TextInput_OnEditorAction213(JNIEnv *env,jclass clazz,jobject jthis,jint actionCode)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::Native::Android::TextInput* uno_jthis = uCast<::g::Fuse::Controls::Native::Android::TextInput*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::Native::Android::TextInput_typeof());
    int uno_actionCode = (int)actionCode;
    jboolean __jresult;
    JTRY
        bool __result=uno_jthis->OnEditorAction(uno_actionCode);
        __jresult = (jboolean)__result;
    JCATCH
    return __jresult;
}
jboolean JNICALL callUno_Fuse_Platform_SystemUI_firstSizingGet106(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jboolean __jresult;
    JTRY
        bool __result=::g::Fuse::Platform::SystemUI::firstSizing();
        __jresult = (jboolean)__result;
    JCATCH
    return __jresult;
}
jboolean JNICALL callUno_Fuse_Platform_SystemUI_hasCachedStatusBarSizeGet89(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jboolean __jresult;
    JTRY
        bool __result=::g::Fuse::Platform::SystemUI::hasCachedStatusBarSize();
        __jresult = (jboolean)__result;
    JCATCH
    return __jresult;
}
jboolean JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetBool16(JNIEnv *env,jclass clazz,jobject array,jint index)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int uno_index = (int)index;
    jboolean __jresult;
    JTRY
        bool __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::GetBool(uno_array, uno_index);
        __jresult = (jboolean)__result;
    JCATCH
    return __jresult;
}
jboolean JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetBool39(JNIEnv *env,jclass clazz,jobject array,jint index,jboolean val)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int uno_index = (int)index;
    bool uno_val = (bool)val;
    jboolean __jresult;
    JTRY
        bool __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::SetBool(uno_array, uno_index, uno_val);
        __jresult = (jboolean)__result;
    JCATCH
    return __jresult;
}
jboolean JNICALL callUno_Uno_Platform_AndroidDisplay__initializedGet54(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jboolean __jresult;
    JTRY
        bool __result=::g::Uno::Platform::AndroidDisplay::_initialized_;
        __jresult = (jboolean)__result;
    JCATCH
    return __jresult;
}
jbyte JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetByte17(JNIEnv *env,jclass clazz,jobject array,jint index)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int uno_index = (int)index;
    jbyte __jresult;
    JTRY
        int8_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::GetByte(uno_array, uno_index);
        __jresult = (jbyte)__result;
    JCATCH
    return __jresult;
}
jbyte JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetUByte26(JNIEnv *env,jclass clazz,jobject array,jint index)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int uno_index = (int)index;
    jbyte __jresult;
    JTRY
        int8_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::GetUByte(uno_array, uno_index);
        __jresult = (jbyte)__result;
    JCATCH
    return __jresult;
}
jbyte JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetByte40(JNIEnv *env,jclass clazz,jobject array,jint index,jbyte val)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int uno_index = (int)index;
    int8_t uno_val = (int8_t)val;
    jbyte __jresult;
    JTRY
        int8_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::SetByte(uno_array, uno_index, uno_val);
        __jresult = (jbyte)__result;
    JCATCH
    return __jresult;
}
jbyte JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetUByte49(JNIEnv *env,jclass clazz,jobject array,jint index,jbyte val)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int uno_index = (int)index;
    int8_t uno_val = (int8_t)val;
    jbyte __jresult;
    JTRY
        int8_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::SetUByte(uno_array, uno_index, uno_val);
        __jresult = (jbyte)__result;
    JCATCH
    return __jresult;
}
jchar JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetChar18(JNIEnv *env,jclass clazz,jobject array,jint index)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int uno_index = (int)index;
    jchar __jresult;
    JTRY
        uChar __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::GetChar(uno_array, uno_index);
        __jresult = (jchar)__result;
    JCATCH
    return __jresult;
}
jchar JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetChar41(JNIEnv *env,jclass clazz,jobject array,jint index,jchar val)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int uno_index = (int)index;
    uChar uno_val = (uChar)val;
    jchar __jresult;
    JTRY
        uChar __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::SetChar(uno_array, uno_index, uno_val);
        __jresult = (jchar)__result;
    JCATCH
    return __jresult;
}
jdouble JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetDouble19(JNIEnv *env,jclass clazz,jobject array,jint index)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int uno_index = (int)index;
    jdouble __jresult;
    JTRY
        double __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::GetDouble(uno_array, uno_index);
        __jresult = (jdouble)__result;
    JCATCH
    return __jresult;
}
jdouble JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetDouble42(JNIEnv *env,jclass clazz,jobject array,jint index,jdouble val)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int uno_index = (int)index;
    double uno_val = (double)val;
    jdouble __jresult;
    JTRY
        double __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::SetDouble(uno_array, uno_index, uno_val);
        __jresult = (jdouble)__result;
    JCATCH
    return __jresult;
}
jfloat JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetFloat20(JNIEnv *env,jclass clazz,jobject array,jint index)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int uno_index = (int)index;
    jfloat __jresult;
    JTRY
        float __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::GetFloat(uno_array, uno_index);
        __jresult = (jfloat)__result;
    JCATCH
    return __jresult;
}
jfloat JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetFloat43(JNIEnv *env,jclass clazz,jobject array,jint index,jfloat val)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int uno_index = (int)index;
    float uno_val = (float)val;
    jfloat __jresult;
    JTRY
        float __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::SetFloat(uno_array, uno_index, uno_val);
        __jresult = (jfloat)__result;
    JCATCH
    return __jresult;
}
jint JNICALL callUno_Fuse_Platform_SystemUI__systemUIStateGet82(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jint __jresult;
    JTRY
        int __result=::g::Fuse::Platform::SystemUI::_systemUIState();
        __jresult = (jint)__result;
    JCATCH
    return __jresult;
}
jint JNICALL callUno_Fuse_Platform_SystemUI_cachedOpenSizeGet90(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jint __jresult;
    JTRY
        int __result=::g::Fuse::Platform::SystemUI::cachedOpenSize();
        __jresult = (jint)__result;
    JCATCH
    return __jresult;
}
jint JNICALL callUno_Fuse_Platform_SystemUI_GetRealDisplayHeight78(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jint __jresult;
    JTRY
        int __result=::g::Fuse::Platform::SystemUI::GetRealDisplayHeight();
        __jresult = (jint)__result;
    JCATCH
    return __jresult;
}
jint JNICALL callUno_Fuse_Platform_SystemUI_GetRealDisplayWidth97(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jint __jresult;
    JTRY
        int __result=::g::Fuse::Platform::SystemUI::GetRealDisplayWidth();
        __jresult = (jint)__result;
    JCATCH
    return __jresult;
}
jint JNICALL callUno_Fuse_Platform_SystemUI_lastKeyboardHeightGet105(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jint __jresult;
    JTRY
        int __result=::g::Fuse::Platform::SystemUI::lastKeyboardHeight();
        __jresult = (jint)__result;
    JCATCH
    return __jresult;
}
jint JNICALL callUno_Fuse_Platform_SystemUI_realHeightGet72(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jint __jresult;
    JTRY
        int __result=::g::Fuse::Platform::SystemUI::realHeight();
        __jresult = (jint)__result;
    JCATCH
    return __jresult;
}
jint JNICALL callUno_Fuse_Platform_SystemUI_realWidthGet71(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jint __jresult;
    JTRY
        int __result=::g::Fuse::Platform::SystemUI::realWidth();
        __jresult = (jint)__result;
    JCATCH
    return __jresult;
}
jint JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetInt21(JNIEnv *env,jclass clazz,jobject array,jint index)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int uno_index = (int)index;
    jint __jresult;
    JTRY
        int __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::GetInt(uno_array, uno_index);
        __jresult = (jint)__result;
    JCATCH
    return __jresult;
}
jint JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetInt44(JNIEnv *env,jclass clazz,jobject array,jint index,jint val)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int uno_index = (int)index;
    int uno_val = (int)val;
    jint __jresult;
    JTRY
        int __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::SetInt(uno_array, uno_index, uno_val);
        __jresult = (jint)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_BoolArrayToUnoArrayPtr0(JNIEnv *env,jclass clazz,jobject jarr,jlong jarrPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_jarr = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(jarr, true);
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::BoolArrayToUnoArrayPtr(uCast<::g::Java::Object*>(uno_jarr, ::g::Java::Object_typeof()));
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_ByteArrayToUnoArrayPtr1(JNIEnv *env,jclass clazz,jobject jarr,jlong jarrPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_jarr = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(jarr, true);
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::ByteArrayToUnoArrayPtr(uCast<::g::Java::Object*>(uno_jarr, ::g::Java::Object_typeof()));
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CharArrayToUnoArrayPtr2(JNIEnv *env,jclass clazz,jobject jarr,jlong jarrPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_jarr = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(jarr, true);
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::CharArrayToUnoArrayPtr(uCast<::g::Java::Object*>(uno_jarr, ::g::Java::Object_typeof()));
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_DoubleArrayToUnoArrayPtr14(JNIEnv *env,jclass clazz,jobject jarr,jlong jarrPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_jarr = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(jarr, true);
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::DoubleArrayToUnoArrayPtr(uCast<::g::Java::Object*>(uno_jarr, ::g::Java::Object_typeof()));
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_FloatArrayToUnoArrayPtr15(JNIEnv *env,jclass clazz,jobject jarr,jlong jarrPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_jarr = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(jarr, true);
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::FloatArrayToUnoArrayPtr(uCast<::g::Java::Object*>(uno_jarr, ::g::Java::Object_typeof()));
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetLong22(JNIEnv *env,jclass clazz,jobject array,jint index)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int uno_index = (int)index;
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::GetLong(uno_array, uno_index);
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_IntArrayToUnoArrayPtr27(JNIEnv *env,jclass clazz,jobject jarr,jlong jarrPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_jarr = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(jarr, true);
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::IntArrayToUnoArrayPtr(uCast<::g::Java::Object*>(uno_jarr, ::g::Java::Object_typeof()));
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_LongArrayToUnoArrayPtr28(JNIEnv *env,jclass clazz,jobject jarr,jlong jarrPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_jarr = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(jarr, true);
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::LongArrayToUnoArrayPtr(uCast<::g::Java::Object*>(uno_jarr, ::g::Java::Object_typeof()));
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewBoolArrayPtr29(JNIEnv *env,jclass clazz,jint length)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int uno_length = (int)length;
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::NewBoolArrayPtr(uno_length);
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewByteArrayPtr30(JNIEnv *env,jclass clazz,jint length,jboolean unoIsUnsigned)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int uno_length = (int)length;
    bool uno_unoIsUnsigned = (bool)unoIsUnsigned;
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::NewByteArrayPtr(uno_length, uno_unoIsUnsigned);
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewCharArrayPtr31(JNIEnv *env,jclass clazz,jint length)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int uno_length = (int)length;
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::NewCharArrayPtr(uno_length);
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewDoubleArrayPtr32(JNIEnv *env,jclass clazz,jint length)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int uno_length = (int)length;
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::NewDoubleArrayPtr(uno_length);
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewFloatArrayPtr33(JNIEnv *env,jclass clazz,jint length)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int uno_length = (int)length;
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::NewFloatArrayPtr(uno_length);
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewIntArrayPtr34(JNIEnv *env,jclass clazz,jint length)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int uno_length = (int)length;
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::NewIntArrayPtr(uno_length);
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewLongArrayPtr35(JNIEnv *env,jclass clazz,jint length)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int uno_length = (int)length;
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::NewLongArrayPtr(uno_length);
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewObjectArrayPtr36(JNIEnv *env,jclass clazz,jint length)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int uno_length = (int)length;
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::NewObjectArrayPtr(uno_length);
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewShortArrayPtr37(JNIEnv *env,jclass clazz,jint length)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int uno_length = (int)length;
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::NewShortArrayPtr(uno_length);
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewStringArrayPtr38(JNIEnv *env,jclass clazz,jint length)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int uno_length = (int)length;
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::NewStringArrayPtr(uno_length);
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetLong45(JNIEnv *env,jclass clazz,jobject array,jint index,jlong val)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int uno_index = (int)index;
    int64_t uno_val = (int64_t)val;
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::SetLong(uno_array, uno_index, uno_val);
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_ShortArrayToUnoArrayPtr50(JNIEnv *env,jclass clazz,jobject jarr,jlong jarrPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_jarr = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(jarr, true);
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::ShortArrayToUnoArrayPtr(uCast<::g::Java::Object*>(uno_jarr, ::g::Java::Object_typeof()));
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet256(JNIEnv *env,jclass clazz,jobject jthis)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::Native::ViewHandle* uno_jthis = uCast<::g::Fuse::Controls::Native::ViewHandle*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::Native::ViewHandle_typeof());
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=uno_jthis->NativeHandle;
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Fuse_Platform_SystemUI__keyboardListenerGet69(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Fuse::Platform::SystemUI::_keyboardListener();
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Fuse_Platform_SystemUI_layoutAttachedToGet68(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Fuse::Platform::SystemUI::layoutAttachedTo();
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Fuse_Platform_SystemUI_RootLayoutGet75(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Fuse::Platform::SystemUI::RootLayout();
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Fuse_Platform_SystemUI_SuperLayoutGet73(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Fuse::Platform::SystemUI::SuperLayout();
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Neovisionaries_WebSocketClient__webSocketGet373(JNIEnv *env,jclass clazz,jobject jthis)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Neovisionaries::WebSocketClient* uno_jthis = uCast<::g::Neovisionaries::WebSocketClient*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Neovisionaries::WebSocketClient_typeof());
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=uno_jthis->_webSocket;
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyBoolArray3(JNIEnv *env,jclass clazz,jobject array)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::CopyBoolArray(uno_array);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyByteArray4(JNIEnv *env,jclass clazz,jobject array)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::CopyByteArray(uno_array);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyCharArray5(JNIEnv *env,jclass clazz,jobject array)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::CopyCharArray(uno_array);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyDoubleArray6(JNIEnv *env,jclass clazz,jobject array)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::CopyDoubleArray(uno_array);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyFloatArray7(JNIEnv *env,jclass clazz,jobject array)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::CopyFloatArray(uno_array);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyIntArray8(JNIEnv *env,jclass clazz,jobject array)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::CopyIntArray(uno_array);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyLongArray9(JNIEnv *env,jclass clazz,jobject array)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::CopyLongArray(uno_array);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyObjectArray10(JNIEnv *env,jclass clazz,jobject array)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::CopyObjectArray(uno_array);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyShortArray11(JNIEnv *env,jclass clazz,jobject array)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::CopyShortArray(uno_array);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyStringArray12(JNIEnv *env,jclass clazz,jobject array)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::CopyStringArray(uno_array);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyUByteArray13(JNIEnv *env,jclass clazz,jobject array)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::CopyUByteArray(uno_array);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetObject23(JNIEnv *env,jclass clazz,jobject array,jint index)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int uno_index = (int)index;
    jobject __jresult;
    JTRY
        uObject* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::GetObject(uno_array, uno_index);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef((::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(__result))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetString25(JNIEnv *env,jclass clazz,jobject array,jint index)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int uno_index = (int)index;
    jobject __jresult;
    JTRY
        uString* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::GetString(uno_array, uno_index);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef((JniHelper::UnoToJavaString(__result))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetObject46(JNIEnv *env,jclass clazz,jobject array,jint index,jobject val)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int uno_index = (int)index;
    uObject* uno_val = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(val);
    jobject __jresult;
    JTRY
        uObject* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::SetObject(uno_array, uno_index, uno_val);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef((::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(__result))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetString48(JNIEnv *env,jclass clazz,jobject array,jint index,jobject val)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int uno_index = (int)index;
    uString* uno_val = JniHelper::JavaToUnoString((jstring)val);
    jobject __jresult;
    JTRY
        uString* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::SetString(uno_array, uno_index, uCast<uString*>(uno_val, ::g::Uno::String_typeof()));
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef((JniHelper::UnoToJavaString(__result))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_IO_BundleFile_BundlePathGet313(JNIEnv *env,jclass clazz,jobject jthis)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Uno::IO::BundleFile* uno_jthis = uCast<::g::Uno::IO::BundleFile*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Uno::IO::BundleFile_typeof());
    jobject __jresult;
    JTRY
        uString* __result=uno_jthis->BundlePath();
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef((JniHelper::UnoToJavaString(__result))));
    JCATCH
    return __jresult;
}
jshort JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetShort24(JNIEnv *env,jclass clazz,jobject array,jint index)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int uno_index = (int)index;
    jshort __jresult;
    JTRY
        int16_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::GetShort(uno_array, uno_index);
        __jresult = (jshort)__result;
    JCATCH
    return __jresult;
}
jshort JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetShort47(JNIEnv *env,jclass clazz,jobject array,jint index,jshort val)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int uno_index = (int)index;
    int16_t uno_val = (int16_t)val;
    jshort __jresult;
    JTRY
        int16_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::SetShort(uno_array, uno_index, uno_val);
        __jresult = (jshort)__result;
    JCATCH
    return __jresult;
}
void JNICALL callUno_Action(JNIEnv *env,jclass clazz,jobject theDelegate)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uDelegate* uno_theDelegate = uCast<uDelegate*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(theDelegate), ::g::Uno::Action_typeof());
    JTRY
        uno_theDelegate->InvokeVoid();
    JCATCH
}
void JNICALL callUno_Action_ByteArray(JNIEnv *env,jclass clazz,jobject theDelegate,jobject arg)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uDelegate* uno_theDelegate = uCast<uDelegate*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(theDelegate), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Byte_typeof()->Array(), NULL));
    uArray* uno_arg = uCast<uArray*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(arg), ::g::Uno::Byte_typeof()->Array());
    JTRY
        uno_theDelegate->InvokeVoid(uCast<uArray*>(uno_arg, ::g::Uno::Byte_typeof()->Array()));
    JCATCH
}
void JNICALL callUno_Action_int(JNIEnv *env,jclass clazz,jobject theDelegate,jint arg)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uDelegate* uno_theDelegate = uCast<uDelegate*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(theDelegate), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL));
    int uno_arg = (int)arg;
    JTRY
        uno_theDelegate->InvokeVoid(uCRef<int>(uno_arg));
    JCATCH
}
void JNICALL callUno_Action_Object(JNIEnv *env,jclass clazz,jobject theDelegate,jobject arg,jlong argPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uDelegate* uno_theDelegate = uCast<uDelegate*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(theDelegate), ::g::Uno::Action1_typeof()->MakeType(::g::Java::Object_typeof(), NULL));
    ::g::Java::Object* uno_arg = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(arg, true);
    JTRY
        uno_theDelegate->InvokeVoid(uCast<::g::Java::Object*>(uno_arg, ::g::Java::Object_typeof()));
    JCATCH
}
void JNICALL callUno_Action_String(JNIEnv *env,jclass clazz,jobject theDelegate,jobject arg)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uDelegate* uno_theDelegate = uCast<uDelegate*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(theDelegate), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    uString* uno_arg = JniHelper::JavaToUnoString((jstring)arg);
    JTRY
        uno_theDelegate->InvokeVoid(uCast<uString*>(uno_arg, ::g::Uno::String_typeof()));
    JCATCH
}
void JNICALL callUno_Fuse_Android_AppRoot_OnTouchEvent__331(JNIEnv *env,jclass clazz,jobject motionEvent,jlong motionEventPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_motionEvent = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(motionEvent, true);
    JTRY
        ::g::Fuse::Android::AppRoot::OnTouchEvent__(uCast<::g::Java::Object*>(uno_motionEvent, ::g::Java::Object_typeof()));
    JCATCH
}
void JNICALL callUno_Fuse_Android_StatusBarConfig_UpdateStatusBar353(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    JTRY
        ::g::Fuse::Android::StatusBarConfig::UpdateStatusBar();
    JCATCH
}
void JNICALL callUno_Fuse_Controls_Native_Android_FocusChangedListener_OnFocusChange141(JNIEnv *env,jclass clazz,jobject jthis,jboolean hasFocus)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::Native::Android::FocusChangedListener* uno_jthis = uCast<::g::Fuse::Controls::Native::Android::FocusChangedListener*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::Native::Android::FocusChangedListener_typeof());
    bool uno_hasFocus = (bool)hasFocus;
    JTRY
        uno_jthis->OnFocusChange(uno_hasFocus);
    JCATCH
}
void JNICALL callUno_Fuse_Controls_Native_Android_ScrollView_OnScrollChanged183(JNIEnv *env,jclass clazz,jobject jthis,jint x,jint y,jint oldx,jint oldy)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::Native::Android::ScrollView* uno_jthis = uCast<::g::Fuse::Controls::Native::Android::ScrollView*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::Native::Android::ScrollView_typeof());
    int uno_x = (int)x;
    int uno_y = (int)y;
    int uno_oldx = (int)oldx;
    int uno_oldy = (int)oldy;
    JTRY
        uno_jthis->OnScrollChanged(uno_x, uno_y, uno_oldx, uno_oldy);
    JCATCH
}
void JNICALL callUno_Fuse_Controls_Native_Android_Slider_OnSeekBarChanged195(JNIEnv *env,jclass clazz,jobject jthis,jdouble newProgress)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::Native::Android::Slider* uno_jthis = uCast<::g::Fuse::Controls::Native::Android::Slider*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::Native::Android::Slider_typeof());
    double uno_newProgress = (double)newProgress;
    JTRY
        uno_jthis->OnSeekBarChanged(uno_newProgress);
    JCATCH
}
void JNICALL callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceChanged202(JNIEnv *env,jclass clazz,jobject jthis,jobject holder,jint f,jint w,jint h,jlong holderPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::Native::Android::SurfaceView* uno_jthis = uCast<::g::Fuse::Controls::Native::Android::SurfaceView*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::Native::Android::SurfaceView_typeof());
    ::g::Java::Object* uno_holder = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(holder, true);
    int uno_f = (int)f;
    int uno_w = (int)w;
    int uno_h = (int)h;
    JTRY
        uno_jthis->OnSurfaceChanged(uCast<::g::Java::Object*>(uno_holder, ::g::Java::Object_typeof()), uno_f, uno_w, uno_h);
    JCATCH
}
void JNICALL callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceCreated203(JNIEnv *env,jclass clazz,jobject jthis,jobject holder,jlong holderPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::Native::Android::SurfaceView* uno_jthis = uCast<::g::Fuse::Controls::Native::Android::SurfaceView*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::Native::Android::SurfaceView_typeof());
    ::g::Java::Object* uno_holder = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(holder, true);
    JTRY
        uno_jthis->OnSurfaceCreated(uCast<::g::Java::Object*>(uno_holder, ::g::Java::Object_typeof()));
    JCATCH
}
void JNICALL callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceDestroyed204(JNIEnv *env,jclass clazz,jobject jthis,jobject holder,jlong holderPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::Native::Android::SurfaceView* uno_jthis = uCast<::g::Fuse::Controls::Native::Android::SurfaceView*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::Native::Android::SurfaceView_typeof());
    ::g::Java::Object* uno_holder = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(holder, true);
    JTRY
        uno_jthis->OnSurfaceDestroyed(uCast<::g::Java::Object*>(uno_holder, ::g::Java::Object_typeof()));
    JCATCH
}
void JNICALL callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceRedrawNeeded201(JNIEnv *env,jclass clazz,jobject jthis,jobject holder,jlong holderPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::Native::Android::SurfaceView* uno_jthis = uCast<::g::Fuse::Controls::Native::Android::SurfaceView*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::Native::Android::SurfaceView_typeof());
    ::g::Java::Object* uno_holder = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(holder, true);
    JTRY
        uno_jthis->OnSurfaceRedrawNeeded(uCast<::g::Java::Object*>(uno_holder, ::g::Java::Object_typeof()));
    JCATCH
}
void JNICALL callUno_Fuse_Controls_Native_Android_Switch_OnToggleChanged208(JNIEnv *env,jclass clazz,jobject jthis,jboolean value)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::Native::Android::Switch* uno_jthis = uCast<::g::Fuse::Controls::Native::Android::Switch*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::Native::Android::Switch_typeof());
    bool uno_value = (bool)value;
    JTRY
        uno_jthis->OnToggleChanged(uno_value);
    JCATCH
}
void JNICALL callUno_Fuse_Controls_Native_Android_TextInput_OnTextChanged215(JNIEnv *env,jclass clazz,jobject jthis,jobject value)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::Native::Android::TextInput* uno_jthis = uCast<::g::Fuse::Controls::Native::Android::TextInput*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::Native::Android::TextInput_typeof());
    uString* uno_value = JniHelper::JavaToUnoString((jstring)value);
    JTRY
        uno_jthis->OnTextChanged(uCast<uString*>(uno_value, ::g::Uno::String_typeof()));
    JCATCH
}
void JNICALL callUno_Fuse_Controls_Native_Android_TextureView_OnSurfaceTextureAvailable229(JNIEnv *env,jclass clazz,jobject jthis,jobject surface,jlong surfacePtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::Native::Android::TextureView* uno_jthis = uCast<::g::Fuse::Controls::Native::Android::TextureView*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::Native::Android::TextureView_typeof());
    ::g::Java::Object* uno_surface = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(surface, true);
    JTRY
        uno_jthis->OnSurfaceTextureAvailable(uCast<::g::Java::Object*>(uno_surface, ::g::Java::Object_typeof()));
    JCATCH
}
void JNICALL callUno_Fuse_Controls_Native_Android_TextureView_OnSurfaceTextureDestroyed230(JNIEnv *env,jclass clazz,jobject jthis)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::Native::Android::TextureView* uno_jthis = uCast<::g::Fuse::Controls::Native::Android::TextureView*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::Native::Android::TextureView_typeof());
    JTRY
        uno_jthis->OnSurfaceTextureDestroyed();
    JCATCH
}
void JNICALL callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnBuffer280(JNIEnv *env,jclass clazz,jobject jthis,jint percent)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::VideoImpl::Android::MediaPlayer* uno_jthis = uCast<::g::Fuse::Controls::VideoImpl::Android::MediaPlayer*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::VideoImpl::Android::MediaPlayer_typeof());
    int uno_percent = (int)percent;
    JTRY
        uno_jthis->OnBuffer(uno_percent);
    JCATCH
}
void JNICALL callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnCompletion278(JNIEnv *env,jclass clazz,jobject jthis)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::VideoImpl::Android::MediaPlayer* uno_jthis = uCast<::g::Fuse::Controls::VideoImpl::Android::MediaPlayer*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::VideoImpl::Android::MediaPlayer_typeof());
    JTRY
        uno_jthis->OnCompletion();
    JCATCH
}
void JNICALL callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnError279(JNIEnv *env,jclass clazz,jobject jthis,jint what,jint extra)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::VideoImpl::Android::MediaPlayer* uno_jthis = uCast<::g::Fuse::Controls::VideoImpl::Android::MediaPlayer*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::VideoImpl::Android::MediaPlayer_typeof());
    int uno_what = (int)what;
    int uno_extra = (int)extra;
    JTRY
        uno_jthis->OnError(uno_what, uno_extra);
    JCATCH
}
void JNICALL callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnErrorOccurred292(JNIEnv *env,jclass clazz,jobject jthis,jobject msg)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::VideoImpl::Android::MediaPlayer* uno_jthis = uCast<::g::Fuse::Controls::VideoImpl::Android::MediaPlayer*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::VideoImpl::Android::MediaPlayer_typeof());
    uString* uno_msg = JniHelper::JavaToUnoString((jstring)msg);
    JTRY
        uno_jthis->OnErrorOccurred(uCast<uString*>(uno_msg, ::g::Uno::String_typeof()));
    JCATCH
}
void JNICALL callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnFrameAvailable283(JNIEnv *env,jclass clazz,jobject jthis)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::VideoImpl::Android::MediaPlayer* uno_jthis = uCast<::g::Fuse::Controls::VideoImpl::Android::MediaPlayer*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::VideoImpl::Android::MediaPlayer_typeof());
    JTRY
        uno_jthis->OnFrameAvailable();
    JCATCH
}
void JNICALL callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnPrepared277(JNIEnv *env,jclass clazz,jobject jthis)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::VideoImpl::Android::MediaPlayer* uno_jthis = uCast<::g::Fuse::Controls::VideoImpl::Android::MediaPlayer*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::VideoImpl::Android::MediaPlayer_typeof());
    JTRY
        uno_jthis->OnPrepared();
    JCATCH
}
void JNICALL callUno_Fuse_Internal_AndroidSystemFont_AddAlias112(JNIEnv *env,jclass clazz,jobject name,jobject to,jint weight)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uString* uno_name = JniHelper::JavaToUnoString((jstring)name);
    uString* uno_to = JniHelper::JavaToUnoString((jstring)to);
    int uno_weight = (int)weight;
    JTRY
        ::g::Fuse::Internal::AndroidSystemFont::AddAlias(uCast<uString*>(uno_name, ::g::Uno::String_typeof()), uCast<uString*>(uno_to, ::g::Uno::String_typeof()), uno_weight);
    JCATCH
}
void JNICALL callUno_Fuse_Internal_AndroidSystemFont_AddFamily110(JNIEnv *env,jclass clazz,jobject name,jobject language,jobject variant)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uString* uno_name = JniHelper::JavaToUnoString((jstring)name);
    uString* uno_language = JniHelper::JavaToUnoString((jstring)language);
    uString* uno_variant = JniHelper::JavaToUnoString((jstring)variant);
    JTRY
        ::g::Fuse::Internal::AndroidSystemFont::AddFamily(uCast<uString*>(uno_name, ::g::Uno::String_typeof()), uCast<uString*>(uno_language, ::g::Uno::String_typeof()), uCast<uString*>(uno_variant, ::g::Uno::String_typeof()));
    JCATCH
}
void JNICALL callUno_Fuse_Internal_AndroidSystemFont_AddFont111(JNIEnv *env,jclass clazz,jobject path,jint index,jint weight,jboolean isItalic)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uString* uno_path = JniHelper::JavaToUnoString((jstring)path);
    int uno_index = (int)index;
    int uno_weight = (int)weight;
    bool uno_isItalic = (bool)isItalic;
    JTRY
        ::g::Fuse::Internal::AndroidSystemFont::AddFont(uCast<uString*>(uno_path, ::g::Uno::String_typeof()), uno_index, uno_weight, uno_isItalic);
    JCATCH
}
void JNICALL callUno_Fuse_Internal_AndroidSystemFont_ThrowUno113(JNIEnv *env,jclass clazz,jobject message)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uString* uno_message = JniHelper::JavaToUnoString((jstring)message);
    JTRY
        ::g::Fuse::Internal::AndroidSystemFont::ThrowUno(uCast<uString*>(uno_message, ::g::Uno::String_typeof()));
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI__keyboardListenerSet69(JNIEnv *env,jclass clazz,jobject setVal,jlong setValPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_setVal = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(setVal, true);
    JTRY
        ::g::Fuse::Platform::SystemUI::_keyboardListener() = uCast<::g::Java::Object*>(uno_setVal, ::g::Java::Object_typeof());
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI__systemUIStateSet82(JNIEnv *env,jclass clazz,jint setVal)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int uno_setVal = (int)setVal;
    JTRY
        ::g::Fuse::Platform::SystemUI::_systemUIState() = uno_setVal;
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_cachedOpenSizeSet90(JNIEnv *env,jclass clazz,jint setVal)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int uno_setVal = (int)setVal;
    JTRY
        ::g::Fuse::Platform::SystemUI::cachedOpenSize() = uno_setVal;
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_CompensateRootLayoutForSystemUI79(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    JTRY
        ::g::Fuse::Platform::SystemUI::CompensateRootLayoutForSystemUI();
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_cppOnConfigChanged98(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    JTRY
        ::g::Fuse::Platform::SystemUI::cppOnConfigChanged();
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_cppOnTopFrameChanged85(JNIEnv *env,jclass clazz,jint height)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int uno_height = (int)height;
    JTRY
        ::g::Fuse::Platform::SystemUI::cppOnTopFrameChanged(uno_height);
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_firstSizingSet106(JNIEnv *env,jclass clazz,jboolean setVal)
{
    uAutoReleasePool pool;
    INIT_JNI;
    bool uno_setVal = (bool)setVal;
    JTRY
        ::g::Fuse::Platform::SystemUI::firstSizing() = uno_setVal;
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_hasCachedStatusBarSizeSet89(JNIEnv *env,jclass clazz,jboolean setVal)
{
    uAutoReleasePool pool;
    INIT_JNI;
    bool uno_setVal = (bool)setVal;
    JTRY
        ::g::Fuse::Platform::SystemUI::hasCachedStatusBarSize() = uno_setVal;
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_layoutAttachedToSet68(JNIEnv *env,jclass clazz,jobject setVal,jlong setValPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_setVal = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(setVal, true);
    JTRY
        ::g::Fuse::Platform::SystemUI::layoutAttachedTo() = uCast<::g::Java::Object*>(uno_setVal, ::g::Java::Object_typeof());
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_OnConfigChanged96(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    JTRY
        ::g::Fuse::Platform::SystemUI::OnConfigChanged();
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_OnDestroy95(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    JTRY
        ::g::Fuse::Platform::SystemUI::OnDestroy();
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_onHideKeyboard107(JNIEnv *env,jclass clazz,jint keyboardHeight,jboolean force)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int uno_keyboardHeight = (int)keyboardHeight;
    bool uno_force = (bool)force;
    JTRY
        ::g::Fuse::Platform::SystemUI::onHideKeyboard(uno_keyboardHeight, uno_force);
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_onShowKeyboard108(JNIEnv *env,jclass clazz,jint keyboardHeight,jboolean force)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int uno_keyboardHeight = (int)keyboardHeight;
    bool uno_force = (bool)force;
    JTRY
        ::g::Fuse::Platform::SystemUI::onShowKeyboard(uno_keyboardHeight, uno_force);
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_realHeightSet72(JNIEnv *env,jclass clazz,jint setVal)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int uno_setVal = (int)setVal;
    JTRY
        ::g::Fuse::Platform::SystemUI::realHeight() = uno_setVal;
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_realWidthSet71(JNIEnv *env,jclass clazz,jint setVal)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int uno_setVal = (int)setVal;
    JTRY
        ::g::Fuse::Platform::SystemUI::realWidth() = uno_setVal;
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_ResendFrameSizes99(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    JTRY
        ::g::Fuse::Platform::SystemUI::ResendFrameSizes();
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_RootLayoutSet75(JNIEnv *env,jclass clazz,jobject setVal,jlong setValPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_setVal = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(setVal, true);
    JTRY
        ::g::Fuse::Platform::SystemUI::RootLayout() = uCast<::g::Java::Object*>(uno_setVal, ::g::Java::Object_typeof());
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_SuperLayoutSet73(JNIEnv *env,jclass clazz,jobject setVal,jlong setValPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_setVal = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(setVal, true);
    JTRY
        ::g::Fuse::Platform::SystemUI::SuperLayout() = uCast<::g::Java::Object*>(uno_setVal, ::g::Java::Object_typeof());
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_UpdateStatusBar102(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    JTRY
        ::g::Fuse::Platform::SystemUI::UpdateStatusBar();
    JCATCH
}
void JNICALL callUno_Neovisionaries_WebSocketClient__webSocketSet373(JNIEnv *env,jclass clazz,jobject jthis,jobject setVal,jlong setValPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Neovisionaries::WebSocketClient* uno_jthis = uCast<::g::Neovisionaries::WebSocketClient*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Neovisionaries::WebSocketClient_typeof());
    ::g::Java::Object* uno_setVal = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(setVal, true);
    JTRY
        uno_jthis->_webSocket = uCast<::g::Java::Object*>(uno_setVal, ::g::Java::Object_typeof());
    JCATCH
}
void JNICALL callUno_Uno_Collections_List_lt_string_gt__Add58(JNIEnv *env,jclass clazz,jobject jthis,jobject item)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Uno::Collections::List* uno_jthis = uCast<::g::Uno::Collections::List*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    uString* uno_item = JniHelper::JavaToUnoString((jstring)item);
    JTRY
        ::g::Uno::Collections::List__Add_fn(uno_jthis, uCast<uString*>(uno_item, ::g::Uno::String_typeof()));
    JCATCH
}
void JNICALL callUno_Uno_Permissions_Permissions_Failed59(JNIEnv *env,jclass clazz,jobject promise)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_promise = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(promise);
    JTRY
        ::g::Uno::Permissions::Permissions::Failed(uno_promise);
    JCATCH
}
void JNICALL callUno_Uno_Permissions_Permissions_Succeeded60(JNIEnv *env,jclass clazz,jobject promise)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_promise = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(promise);
    JTRY
        ::g::Uno::Permissions::Permissions::Succeeded(uno_promise);
    JCATCH
}
void JNICALL callUno_Uno_Platform_AndroidDisplay__initializedSet54(JNIEnv *env,jclass clazz,jboolean setVal)
{
    uAutoReleasePool pool;
    INIT_JNI;
    bool uno_setVal = (bool)setVal;
    JTRY
        ::g::Uno::Platform::AndroidDisplay::_initialized_ = uno_setVal;
    JCATCH
}
void JNICALL callUno_Uno_Platform_AndroidDisplay_OnFrameCallback55(JNIEnv *env,jclass clazz,jobject jthis,jdouble currentTime,jdouble deltaTime)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Uno::Platform::AndroidDisplay* uno_jthis = uCast<::g::Uno::Platform::AndroidDisplay*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Uno::Platform::AndroidDisplay_typeof());
    double uno_currentTime = (double)currentTime;
    double uno_deltaTime = (double)deltaTime;
    JTRY
        uno_jthis->OnFrameCallback(uno_currentTime, uno_deltaTime);
    JCATCH
}
static uString* STRINGS[27];
static uType* TYPES[12];

namespace g{
namespace Uno{
namespace Compiler{
namespace ExportTargetInterop{
namespace Foreign{
namespace Android{

// /Users/martinmorales/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/compiler/exporttargetinterop/foreign/android/$.uno
// ------------------------------------------------------------------------------------------------------------------------------------------------

// internal static extern class ExternBlockHost :12
// {
static void ExternBlockHost_build(uType* type)
{
}

uClassType* ExternBlockHost_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.Foreign.Android.ExternBlockHost", options);
    type->fp_build_ = ExternBlockHost_build;
    return type;
}

// private static extern void RegisterFunctions() :15
void ExternBlockHost__RegisterFunctions_fn()
{
    ExternBlockHost::RegisterFunctions();
}

// private static extern void RegisterFunctions() [static] :15
void ExternBlockHost::RegisterFunctions()
{
    JniHelper jni;
    static JNINativeMethod native_activity_funcs[] = {
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_BoolArrayToUnoArrayPtr0", (char* const)"(Ljava/lang/Object;J)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_BoolArrayToUnoArrayPtr0},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_ByteArrayToUnoArrayPtr1", (char* const)"(Ljava/lang/Object;J)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_ByteArrayToUnoArrayPtr1},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CharArrayToUnoArrayPtr2", (char* const)"(Ljava/lang/Object;J)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CharArrayToUnoArrayPtr2},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyBoolArray3", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/Object;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyBoolArray3},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyByteArray4", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/Object;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyByteArray4},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyCharArray5", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/Object;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyCharArray5},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyDoubleArray6", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/Object;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyDoubleArray6},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyFloatArray7", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/Object;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyFloatArray7},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyIntArray8", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/Object;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyIntArray8},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyLongArray9", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/Object;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyLongArray9},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyObjectArray10", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/Object;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyObjectArray10},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyShortArray11", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/Object;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyShortArray11},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyStringArray12", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/Object;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyStringArray12},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyUByteArray13", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/Object;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyUByteArray13},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_DoubleArrayToUnoArrayPtr14", (char* const)"(Ljava/lang/Object;J)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_DoubleArrayToUnoArrayPtr14},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_FloatArrayToUnoArrayPtr15", (char* const)"(Ljava/lang/Object;J)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_FloatArrayToUnoArrayPtr15},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetBool16", (char* const)"(Lcom/uno/UnoObject;I)Z", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetBool16},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetByte17", (char* const)"(Lcom/uno/UnoObject;I)B", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetByte17},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetChar18", (char* const)"(Lcom/uno/UnoObject;I)C", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetChar18},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetDouble19", (char* const)"(Lcom/uno/UnoObject;I)D", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetDouble19},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetFloat20", (char* const)"(Lcom/uno/UnoObject;I)F", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetFloat20},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetInt21", (char* const)"(Lcom/uno/UnoObject;I)I", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetInt21},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetLong22", (char* const)"(Lcom/uno/UnoObject;I)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetLong22},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetObject23", (char* const)"(Lcom/uno/UnoObject;I)Lcom/uno/UnoObject;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetObject23},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetShort24", (char* const)"(Lcom/uno/UnoObject;I)S", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetShort24},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetString25", (char* const)"(Lcom/uno/UnoObject;I)Ljava/lang/String;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetString25},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetUByte26", (char* const)"(Lcom/uno/UnoObject;I)B", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetUByte26},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_IntArrayToUnoArrayPtr27", (char* const)"(Ljava/lang/Object;J)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_IntArrayToUnoArrayPtr27},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_LongArrayToUnoArrayPtr28", (char* const)"(Ljava/lang/Object;J)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_LongArrayToUnoArrayPtr28},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewBoolArrayPtr29", (char* const)"(I)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewBoolArrayPtr29},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewByteArrayPtr30", (char* const)"(IZ)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewByteArrayPtr30},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewCharArrayPtr31", (char* const)"(I)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewCharArrayPtr31},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewDoubleArrayPtr32", (char* const)"(I)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewDoubleArrayPtr32},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewFloatArrayPtr33", (char* const)"(I)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewFloatArrayPtr33},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewIntArrayPtr34", (char* const)"(I)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewIntArrayPtr34},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewLongArrayPtr35", (char* const)"(I)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewLongArrayPtr35},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewObjectArrayPtr36", (char* const)"(I)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewObjectArrayPtr36},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewShortArrayPtr37", (char* const)"(I)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewShortArrayPtr37},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewStringArrayPtr38", (char* const)"(I)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewStringArrayPtr38},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetBool39", (char* const)"(Lcom/uno/UnoObject;IZ)Z", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetBool39},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetByte40", (char* const)"(Lcom/uno/UnoObject;IB)B", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetByte40},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetChar41", (char* const)"(Lcom/uno/UnoObject;IC)C", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetChar41},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetDouble42", (char* const)"(Lcom/uno/UnoObject;ID)D", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetDouble42},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetFloat43", (char* const)"(Lcom/uno/UnoObject;IF)F", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetFloat43},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetInt44", (char* const)"(Lcom/uno/UnoObject;II)I", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetInt44},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetLong45", (char* const)"(Lcom/uno/UnoObject;IJ)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetLong45},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetObject46", (char* const)"(Lcom/uno/UnoObject;ILcom/uno/UnoObject;)Lcom/uno/UnoObject;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetObject46},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetShort47", (char* const)"(Lcom/uno/UnoObject;IS)S", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetShort47},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetString48", (char* const)"(Lcom/uno/UnoObject;ILjava/lang/String;)Ljava/lang/String;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetString48},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetUByte49", (char* const)"(Lcom/uno/UnoObject;IB)B", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetUByte49},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_ShortArrayToUnoArrayPtr50", (char* const)"(Ljava/lang/Object;J)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_ShortArrayToUnoArrayPtr50},
    {(char* const)"callUno_Uno_Platform_AndroidDisplay__initializedGet54", (char* const)"()Z", (void *)&callUno_Uno_Platform_AndroidDisplay__initializedGet54},
    {(char* const)"callUno_Uno_Platform_AndroidDisplay__initializedSet54", (char* const)"(Z)V", (void *)&callUno_Uno_Platform_AndroidDisplay__initializedSet54},
    {(char* const)"callUno_Uno_Platform_AndroidDisplay_OnFrameCallback55", (char* const)"(Lcom/uno/UnoObject;DD)V", (void *)&callUno_Uno_Platform_AndroidDisplay_OnFrameCallback55},
    {(char* const)"callUno_Uno_Collections_List_lt_string_gt__Add58", (char* const)"(Lcom/uno/UnoObject;Ljava/lang/String;)V", (void *)&callUno_Uno_Collections_List_lt_string_gt__Add58},
    {(char* const)"callUno_Uno_Permissions_Permissions_Failed59", (char* const)"(Lcom/uno/UnoObject;)V", (void *)&callUno_Uno_Permissions_Permissions_Failed59},
    {(char* const)"callUno_Uno_Permissions_Permissions_Succeeded60", (char* const)"(Lcom/uno/UnoObject;)V", (void *)&callUno_Uno_Permissions_Permissions_Succeeded60},
    {(char* const)"callUno_Fuse_Platform_SystemUI_layoutAttachedToGet68", (char* const)"()Ljava/lang/Object;", (void *)&callUno_Fuse_Platform_SystemUI_layoutAttachedToGet68},
    {(char* const)"callUno_Fuse_Platform_SystemUI_layoutAttachedToSet68", (char* const)"(Ljava/lang/Object;J)V", (void *)&callUno_Fuse_Platform_SystemUI_layoutAttachedToSet68},
    {(char* const)"callUno_Fuse_Platform_SystemUI__keyboardListenerGet69", (char* const)"()Ljava/lang/Object;", (void *)&callUno_Fuse_Platform_SystemUI__keyboardListenerGet69},
    {(char* const)"callUno_Fuse_Platform_SystemUI_realWidthSet71", (char* const)"(I)V", (void *)&callUno_Fuse_Platform_SystemUI_realWidthSet71},
    {(char* const)"callUno_Fuse_Platform_SystemUI_realHeightSet72", (char* const)"(I)V", (void *)&callUno_Fuse_Platform_SystemUI_realHeightSet72},
    {(char* const)"callUno_Fuse_Platform_SystemUI_SuperLayoutGet73", (char* const)"()Ljava/lang/Object;", (void *)&callUno_Fuse_Platform_SystemUI_SuperLayoutGet73},
    {(char* const)"callUno_Fuse_Platform_SystemUI_realHeightGet72", (char* const)"()I", (void *)&callUno_Fuse_Platform_SystemUI_realHeightGet72},
    {(char* const)"callUno_Fuse_Platform_SystemUI_realWidthGet71", (char* const)"()I", (void *)&callUno_Fuse_Platform_SystemUI_realWidthGet71},
    {(char* const)"callUno_Fuse_Platform_SystemUI_SuperLayoutSet73", (char* const)"(Ljava/lang/Object;J)V", (void *)&callUno_Fuse_Platform_SystemUI_SuperLayoutSet73},
    {(char* const)"callUno_Fuse_Platform_SystemUI_RootLayoutSet75", (char* const)"(Ljava/lang/Object;J)V", (void *)&callUno_Fuse_Platform_SystemUI_RootLayoutSet75},
    {(char* const)"callUno_Fuse_Platform_SystemUI_RootLayoutGet75", (char* const)"()Ljava/lang/Object;", (void *)&callUno_Fuse_Platform_SystemUI_RootLayoutGet75},
    {(char* const)"callUno_Fuse_Platform_SystemUI_GetRealDisplayHeight78", (char* const)"()I", (void *)&callUno_Fuse_Platform_SystemUI_GetRealDisplayHeight78},
    {(char* const)"callUno_Fuse_Platform_SystemUI_CompensateRootLayoutForSystemUI79", (char* const)"()V", (void *)&callUno_Fuse_Platform_SystemUI_CompensateRootLayoutForSystemUI79},
    {(char* const)"callUno_Fuse_Platform_SystemUI__systemUIStateSet82", (char* const)"(I)V", (void *)&callUno_Fuse_Platform_SystemUI__systemUIStateSet82},
    {(char* const)"callUno_Fuse_Platform_SystemUI_cppOnTopFrameChanged85", (char* const)"(I)V", (void *)&callUno_Fuse_Platform_SystemUI_cppOnTopFrameChanged85},
    {(char* const)"callUno_Fuse_Platform_SystemUI__systemUIStateGet82", (char* const)"()I", (void *)&callUno_Fuse_Platform_SystemUI__systemUIStateGet82},
    {(char* const)"callUno_Fuse_Platform_SystemUI_hasCachedStatusBarSizeGet89", (char* const)"()Z", (void *)&callUno_Fuse_Platform_SystemUI_hasCachedStatusBarSizeGet89},
    {(char* const)"callUno_Fuse_Platform_SystemUI_cachedOpenSizeGet90", (char* const)"()I", (void *)&callUno_Fuse_Platform_SystemUI_cachedOpenSizeGet90},
    {(char* const)"callUno_Fuse_Platform_SystemUI_hasCachedStatusBarSizeSet89", (char* const)"(Z)V", (void *)&callUno_Fuse_Platform_SystemUI_hasCachedStatusBarSizeSet89},
    {(char* const)"callUno_Fuse_Platform_SystemUI_cachedOpenSizeSet90", (char* const)"(I)V", (void *)&callUno_Fuse_Platform_SystemUI_cachedOpenSizeSet90},
    {(char* const)"callUno_Fuse_Platform_SystemUI_OnDestroy95", (char* const)"()V", (void *)&callUno_Fuse_Platform_SystemUI_OnDestroy95},
    {(char* const)"callUno_Fuse_Platform_SystemUI_OnConfigChanged96", (char* const)"()V", (void *)&callUno_Fuse_Platform_SystemUI_OnConfigChanged96},
    {(char* const)"callUno_Fuse_Platform_SystemUI_GetRealDisplayWidth97", (char* const)"()I", (void *)&callUno_Fuse_Platform_SystemUI_GetRealDisplayWidth97},
    {(char* const)"callUno_Fuse_Platform_SystemUI_cppOnConfigChanged98", (char* const)"()V", (void *)&callUno_Fuse_Platform_SystemUI_cppOnConfigChanged98},
    {(char* const)"callUno_Fuse_Platform_SystemUI_ResendFrameSizes99", (char* const)"()V", (void *)&callUno_Fuse_Platform_SystemUI_ResendFrameSizes99},
    {(char* const)"callUno_Fuse_Platform_SystemUI__keyboardListenerSet69", (char* const)"(Ljava/lang/Object;J)V", (void *)&callUno_Fuse_Platform_SystemUI__keyboardListenerSet69},
    {(char* const)"callUno_Fuse_Platform_SystemUI_UpdateStatusBar102", (char* const)"()V", (void *)&callUno_Fuse_Platform_SystemUI_UpdateStatusBar102},
    {(char* const)"callUno_Fuse_Platform_SystemUI_lastKeyboardHeightGet105", (char* const)"()I", (void *)&callUno_Fuse_Platform_SystemUI_lastKeyboardHeightGet105},
    {(char* const)"callUno_Fuse_Platform_SystemUI_firstSizingGet106", (char* const)"()Z", (void *)&callUno_Fuse_Platform_SystemUI_firstSizingGet106},
    {(char* const)"callUno_Fuse_Platform_SystemUI_onHideKeyboard107", (char* const)"(IZ)V", (void *)&callUno_Fuse_Platform_SystemUI_onHideKeyboard107},
    {(char* const)"callUno_Fuse_Platform_SystemUI_onShowKeyboard108", (char* const)"(IZ)V", (void *)&callUno_Fuse_Platform_SystemUI_onShowKeyboard108},
    {(char* const)"callUno_Fuse_Platform_SystemUI_firstSizingSet106", (char* const)"(Z)V", (void *)&callUno_Fuse_Platform_SystemUI_firstSizingSet106},
    {(char* const)"callUno_Fuse_Internal_AndroidSystemFont_AddFamily110", (char* const)"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", (void *)&callUno_Fuse_Internal_AndroidSystemFont_AddFamily110},
    {(char* const)"callUno_Fuse_Internal_AndroidSystemFont_AddFont111", (char* const)"(Ljava/lang/String;IIZ)V", (void *)&callUno_Fuse_Internal_AndroidSystemFont_AddFont111},
    {(char* const)"callUno_Fuse_Internal_AndroidSystemFont_AddAlias112", (char* const)"(Ljava/lang/String;Ljava/lang/String;I)V", (void *)&callUno_Fuse_Internal_AndroidSystemFont_AddAlias112},
    {(char* const)"callUno_Fuse_Internal_AndroidSystemFont_ThrowUno113", (char* const)"(Ljava/lang/String;)V", (void *)&callUno_Fuse_Internal_AndroidSystemFont_ThrowUno113},
    {(char* const)"callUno_Fuse_Controls_Native_Android_FocusChangedListener_OnFocusChange141", (char* const)"(Lcom/uno/UnoObject;Z)V", (void *)&callUno_Fuse_Controls_Native_Android_FocusChangedListener_OnFocusChange141},
    {(char* const)"callUno_Action_Object", (char* const)"(Lcom/foreign/Uno/Action_Object;Ljava/lang/Object;J)V", (void *)&callUno_Action_Object},
    {(char* const)"callUno_Action_String", (char* const)"(Lcom/foreign/Uno/Action_String;Ljava/lang/String;)V", (void *)&callUno_Action_String},
    {(char* const)"callUno_Fuse_Controls_Native_Android_InputDispatch_OnTouch158", (char* const)"(Ljava/lang/Object;Ljava/lang/Object;JJ)Z", (void *)&callUno_Fuse_Controls_Native_Android_InputDispatch_OnTouch158},
    {(char* const)"callUno_Fuse_Controls_Native_Android_ScrollView_OnScrollChanged183", (char* const)"(Lcom/uno/UnoObject;IIII)V", (void *)&callUno_Fuse_Controls_Native_Android_ScrollView_OnScrollChanged183},
    {(char* const)"callUno_Fuse_Controls_Native_Android_Slider_OnSeekBarChanged195", (char* const)"(Lcom/uno/UnoObject;D)V", (void *)&callUno_Fuse_Controls_Native_Android_Slider_OnSeekBarChanged195},
    {(char* const)"callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceRedrawNeeded201", (char* const)"(Lcom/uno/UnoObject;Ljava/lang/Object;J)V", (void *)&callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceRedrawNeeded201},
    {(char* const)"callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceChanged202", (char* const)"(Lcom/uno/UnoObject;Ljava/lang/Object;IIIJ)V", (void *)&callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceChanged202},
    {(char* const)"callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceCreated203", (char* const)"(Lcom/uno/UnoObject;Ljava/lang/Object;J)V", (void *)&callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceCreated203},
    {(char* const)"callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceDestroyed204", (char* const)"(Lcom/uno/UnoObject;Ljava/lang/Object;J)V", (void *)&callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceDestroyed204},
    {(char* const)"callUno_Fuse_Controls_Native_Android_Switch_OnToggleChanged208", (char* const)"(Lcom/uno/UnoObject;Z)V", (void *)&callUno_Fuse_Controls_Native_Android_Switch_OnToggleChanged208},
    {(char* const)"callUno_Fuse_Controls_Native_Android_TextInput_OnEditorAction213", (char* const)"(Lcom/uno/UnoObject;I)Z", (void *)&callUno_Fuse_Controls_Native_Android_TextInput_OnEditorAction213},
    {(char* const)"callUno_Fuse_Controls_Native_Android_TextInput_OnTextChanged215", (char* const)"(Lcom/uno/UnoObject;Ljava/lang/String;)V", (void *)&callUno_Fuse_Controls_Native_Android_TextInput_OnTextChanged215},
    {(char* const)"callUno_Fuse_Controls_Native_Android_TextureView_OnSurfaceTextureAvailable229", (char* const)"(Lcom/uno/UnoObject;Ljava/lang/Object;J)V", (void *)&callUno_Fuse_Controls_Native_Android_TextureView_OnSurfaceTextureAvailable229},
    {(char* const)"callUno_Fuse_Controls_Native_Android_TextureView_OnSurfaceTextureDestroyed230", (char* const)"(Lcom/uno/UnoObject;)V", (void *)&callUno_Fuse_Controls_Native_Android_TextureView_OnSurfaceTextureDestroyed230},
    {(char* const)"callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet256", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/Object;", (void *)&callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet256},
    {(char* const)"callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnPrepared277", (char* const)"(Lcom/uno/UnoObject;)V", (void *)&callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnPrepared277},
    {(char* const)"callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnCompletion278", (char* const)"(Lcom/uno/UnoObject;)V", (void *)&callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnCompletion278},
    {(char* const)"callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnError279", (char* const)"(Lcom/uno/UnoObject;II)V", (void *)&callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnError279},
    {(char* const)"callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnBuffer280", (char* const)"(Lcom/uno/UnoObject;I)V", (void *)&callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnBuffer280},
    {(char* const)"callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnFrameAvailable283", (char* const)"(Lcom/uno/UnoObject;)V", (void *)&callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnFrameAvailable283},
    {(char* const)"callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnErrorOccurred292", (char* const)"(Lcom/uno/UnoObject;Ljava/lang/String;)V", (void *)&callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnErrorOccurred292},
    {(char* const)"callUno_Uno_IO_BundleFile_BundlePathGet313", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/String;", (void *)&callUno_Uno_IO_BundleFile_BundlePathGet313},
    {(char* const)"callUno_Action_int", (char* const)"(Lcom/foreign/Uno/Action_int;I)V", (void *)&callUno_Action_int},
    {(char* const)"callUno_Action", (char* const)"(Lcom/foreign/Uno/Action;)V", (void *)&callUno_Action},
    {(char* const)"callUno_Fuse_Android_AppRoot_OnTouchEvent__331", (char* const)"(Ljava/lang/Object;J)V", (void *)&callUno_Fuse_Android_AppRoot_OnTouchEvent__331},
    {(char* const)"callUno_Fuse_Android_StatusBarConfig_UpdateStatusBar353", (char* const)"()V", (void *)&callUno_Fuse_Android_StatusBarConfig_UpdateStatusBar353},
    {(char* const)"callUno_Neovisionaries_WebSocketClient__webSocketGet373", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/Object;", (void *)&callUno_Neovisionaries_WebSocketClient__webSocketGet373},
    {(char* const)"callUno_Action_ByteArray", (char* const)"(Lcom/foreign/Uno/Action_ByteArray;Lcom/uno/ByteArray;)V", (void *)&callUno_Action_ByteArray},
    {(char* const)"callUno_Neovisionaries_WebSocketClient__webSocketSet373", (char* const)"(Lcom/uno/UnoObject;Ljava/lang/Object;J)V", (void *)&callUno_Neovisionaries_WebSocketClient__webSocketSet373},
    };
    int funcCount = 123;
    if ((int)jni->RegisterNatives(JniHelper::GetNativeExternClass(), native_activity_funcs, funcCount)<0) {
    LOGD("COULD NOT REGISTER NATIVE EXTERN FUNCTIONS");
    throw uBase::Exception("COULD NOT REGISTER NATIVE EXTERN FUNCTIONS");
    }
}
// }

// /Users/martinmorales/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/compiler/exporttargetinterop/foreign/android/$.uno
// ------------------------------------------------------------------------------------------------------------------------------------------------

// public static extern class JavaToUnoArrayEntrypoints :305
// {
static void JavaToUnoArrayEntrypoints_build(uType* type)
{
    ::STRINGS[0] = uString::Const("java/lang/Object");
    ::STRINGS[1] = uString::Const("java/lang/String");
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Uno::Bool_typeof()->Array();
    ::TYPES[2] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[3] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[4] = ::g::Uno::SByte_typeof()->Array();
    ::TYPES[5] = ::g::Uno::Double_typeof()->Array();
    ::TYPES[6] = ::g::Uno::Float_typeof()->Array();
    ::TYPES[7] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[8] = ::g::Uno::Long_typeof()->Array();
    ::TYPES[9] = uObject_typeof()->Array();
    ::TYPES[10] = ::g::Uno::Short_typeof()->Array();
    ::TYPES[11] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::_objectClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::_stringClass_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(69,
        new uFunction("BoolArrayToUnoArrayPtr", NULL, (void*)JavaToUnoArrayEntrypoints__BoolArrayToUnoArrayPtr_fn, 0, true, ::g::Uno::Long_typeof(), 1, ::g::Java::Object_typeof()),
        new uFunction("ByteArrayToUnoArrayPtr", NULL, (void*)JavaToUnoArrayEntrypoints__ByteArrayToUnoArrayPtr_fn, 0, true, ::g::Uno::Long_typeof(), 1, ::g::Java::Object_typeof()),
        new uFunction("CharArrayToUnoArrayPtr", NULL, (void*)JavaToUnoArrayEntrypoints__CharArrayToUnoArrayPtr_fn, 0, true, ::g::Uno::Long_typeof(), 1, ::g::Java::Object_typeof()),
        new uFunction("CopyBoolArray", NULL, (void*)JavaToUnoArrayEntrypoints__CopyBoolArray_fn, 0, true, ::g::Java::Object_typeof(), 1, uObject_typeof()),
        new uFunction("CopyByteArray", NULL, (void*)JavaToUnoArrayEntrypoints__CopyByteArray_fn, 0, true, ::g::Java::Object_typeof(), 1, uObject_typeof()),
        new uFunction("CopyCharArray", NULL, (void*)JavaToUnoArrayEntrypoints__CopyCharArray_fn, 0, true, ::g::Java::Object_typeof(), 1, uObject_typeof()),
        new uFunction("CopyDoubleArray", NULL, (void*)JavaToUnoArrayEntrypoints__CopyDoubleArray_fn, 0, true, ::g::Java::Object_typeof(), 1, uObject_typeof()),
        new uFunction("CopyFloatArray", NULL, (void*)JavaToUnoArrayEntrypoints__CopyFloatArray_fn, 0, true, ::g::Java::Object_typeof(), 1, uObject_typeof()),
        new uFunction("CopyIntArray", NULL, (void*)JavaToUnoArrayEntrypoints__CopyIntArray_fn, 0, true, ::g::Java::Object_typeof(), 1, uObject_typeof()),
        new uFunction("CopyLongArray", NULL, (void*)JavaToUnoArrayEntrypoints__CopyLongArray_fn, 0, true, ::g::Java::Object_typeof(), 1, uObject_typeof()),
        new uFunction("CopyObjectArray", NULL, (void*)JavaToUnoArrayEntrypoints__CopyObjectArray_fn, 0, true, ::g::Java::Object_typeof(), 1, uObject_typeof()),
        new uFunction("CopyShortArray", NULL, (void*)JavaToUnoArrayEntrypoints__CopyShortArray_fn, 0, true, ::g::Java::Object_typeof(), 1, uObject_typeof()),
        new uFunction("CopyStringArray", NULL, (void*)JavaToUnoArrayEntrypoints__CopyStringArray_fn, 0, true, ::g::Java::Object_typeof(), 1, uObject_typeof()),
        new uFunction("CopyUByteArray", NULL, (void*)JavaToUnoArrayEntrypoints__CopyUByteArray_fn, 0, true, ::g::Java::Object_typeof(), 1, uObject_typeof()),
        new uFunction("DoubleArrayToUnoArrayPtr", NULL, (void*)JavaToUnoArrayEntrypoints__DoubleArrayToUnoArrayPtr_fn, 0, true, ::g::Uno::Long_typeof(), 1, ::g::Java::Object_typeof()),
        new uFunction("FloatArrayToUnoArrayPtr", NULL, (void*)JavaToUnoArrayEntrypoints__FloatArrayToUnoArrayPtr_fn, 0, true, ::g::Uno::Long_typeof(), 1, ::g::Java::Object_typeof()),
        new uFunction("getBool", NULL, (void*)JavaToUnoArrayEntrypoints__getBool_fn, 0, true, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("GetBool", NULL, (void*)JavaToUnoArrayEntrypoints__GetBool_fn, 0, true, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getByte", NULL, (void*)JavaToUnoArrayEntrypoints__getByte_fn, 0, true, ::g::Uno::SByte_typeof(), 2, uObject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("GetByte", NULL, (void*)JavaToUnoArrayEntrypoints__GetByte_fn, 0, true, ::g::Uno::SByte_typeof(), 2, uObject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("GetChar", NULL, (void*)JavaToUnoArrayEntrypoints__GetChar_fn, 0, true, ::g::Uno::Char_typeof(), 2, uObject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getDouble", NULL, (void*)JavaToUnoArrayEntrypoints__getDouble_fn, 0, true, ::g::Uno::Double_typeof(), 2, uObject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("GetDouble", NULL, (void*)JavaToUnoArrayEntrypoints__GetDouble_fn, 0, true, ::g::Uno::Double_typeof(), 2, uObject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getFloat", NULL, (void*)JavaToUnoArrayEntrypoints__getFloat_fn, 0, true, ::g::Uno::Float_typeof(), 2, uObject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("GetFloat", NULL, (void*)JavaToUnoArrayEntrypoints__GetFloat_fn, 0, true, ::g::Uno::Float_typeof(), 2, uObject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getInt", NULL, (void*)JavaToUnoArrayEntrypoints__getInt_fn, 0, true, ::g::Uno::Int_typeof(), 2, uObject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("GetInt", NULL, (void*)JavaToUnoArrayEntrypoints__GetInt_fn, 0, true, ::g::Uno::Int_typeof(), 2, uObject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getLong", NULL, (void*)JavaToUnoArrayEntrypoints__getLong_fn, 0, true, ::g::Uno::Long_typeof(), 2, uObject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("GetLong", NULL, (void*)JavaToUnoArrayEntrypoints__GetLong_fn, 0, true, ::g::Uno::Long_typeof(), 2, uObject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getObject", NULL, (void*)JavaToUnoArrayEntrypoints__getObject_fn, 0, true, uObject_typeof(), 2, uObject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("GetObject", NULL, (void*)JavaToUnoArrayEntrypoints__GetObject_fn, 0, true, uObject_typeof(), 2, uObject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getShort", NULL, (void*)JavaToUnoArrayEntrypoints__getShort_fn, 0, true, ::g::Uno::Short_typeof(), 2, uObject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("GetShort", NULL, (void*)JavaToUnoArrayEntrypoints__GetShort_fn, 0, true, ::g::Uno::Short_typeof(), 2, uObject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getString", NULL, (void*)JavaToUnoArrayEntrypoints__getString_fn, 0, true, ::g::Uno::String_typeof(), 2, uObject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("GetString", NULL, (void*)JavaToUnoArrayEntrypoints__GetString_fn, 0, true, ::g::Uno::String_typeof(), 2, uObject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("GetUByte", NULL, (void*)JavaToUnoArrayEntrypoints__GetUByte_fn, 0, true, ::g::Uno::SByte_typeof(), 2, uObject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("IntArrayToUnoArrayPtr", NULL, (void*)JavaToUnoArrayEntrypoints__IntArrayToUnoArrayPtr_fn, 0, true, ::g::Uno::Long_typeof(), 1, ::g::Java::Object_typeof()),
        new uFunction("LongArrayToUnoArrayPtr", NULL, (void*)JavaToUnoArrayEntrypoints__LongArrayToUnoArrayPtr_fn, 0, true, ::g::Uno::Long_typeof(), 1, ::g::Java::Object_typeof()),
        new uFunction("NewBoolArrayPtr", NULL, (void*)JavaToUnoArrayEntrypoints__NewBoolArrayPtr_fn, 0, true, ::g::Uno::Long_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("NewByteArrayPtr", NULL, (void*)JavaToUnoArrayEntrypoints__NewByteArrayPtr_fn, 0, true, ::g::Uno::Long_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("NewCharArrayPtr", NULL, (void*)JavaToUnoArrayEntrypoints__NewCharArrayPtr_fn, 0, true, ::g::Uno::Long_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("NewDoubleArrayPtr", NULL, (void*)JavaToUnoArrayEntrypoints__NewDoubleArrayPtr_fn, 0, true, ::g::Uno::Long_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("NewFloatArrayPtr", NULL, (void*)JavaToUnoArrayEntrypoints__NewFloatArrayPtr_fn, 0, true, ::g::Uno::Long_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("NewIntArrayPtr", NULL, (void*)JavaToUnoArrayEntrypoints__NewIntArrayPtr_fn, 0, true, ::g::Uno::Long_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("NewLongArrayPtr", NULL, (void*)JavaToUnoArrayEntrypoints__NewLongArrayPtr_fn, 0, true, ::g::Uno::Long_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("NewObjectArrayPtr", NULL, (void*)JavaToUnoArrayEntrypoints__NewObjectArrayPtr_fn, 0, true, ::g::Uno::Long_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("NewShortArrayPtr", NULL, (void*)JavaToUnoArrayEntrypoints__NewShortArrayPtr_fn, 0, true, ::g::Uno::Long_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("NewStringArrayPtr", NULL, (void*)JavaToUnoArrayEntrypoints__NewStringArrayPtr_fn, 0, true, ::g::Uno::Long_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("setBool", NULL, (void*)JavaToUnoArrayEntrypoints__setBool_fn, 0, true, ::g::Uno::Bool_typeof(), 3, uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("SetBool", NULL, (void*)JavaToUnoArrayEntrypoints__SetBool_fn, 0, true, ::g::Uno::Bool_typeof(), 3, uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("setByte", NULL, (void*)JavaToUnoArrayEntrypoints__setByte_fn, 0, true, ::g::Uno::SByte_typeof(), 3, uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::SByte_typeof()),
        new uFunction("SetByte", NULL, (void*)JavaToUnoArrayEntrypoints__SetByte_fn, 0, true, ::g::Uno::SByte_typeof(), 3, uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::SByte_typeof()),
        new uFunction("SetChar", NULL, (void*)JavaToUnoArrayEntrypoints__SetChar_fn, 0, true, ::g::Uno::Char_typeof(), 3, uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Char_typeof()),
        new uFunction("setDouble", NULL, (void*)JavaToUnoArrayEntrypoints__setDouble_fn, 0, true, ::g::Uno::Double_typeof(), 3, uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("SetDouble", NULL, (void*)JavaToUnoArrayEntrypoints__SetDouble_fn, 0, true, ::g::Uno::Double_typeof(), 3, uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("setFloat", NULL, (void*)JavaToUnoArrayEntrypoints__setFloat_fn, 0, true, ::g::Uno::Float_typeof(), 3, uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("SetFloat", NULL, (void*)JavaToUnoArrayEntrypoints__SetFloat_fn, 0, true, ::g::Uno::Float_typeof(), 3, uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("setInt", NULL, (void*)JavaToUnoArrayEntrypoints__setInt_fn, 0, true, ::g::Uno::Int_typeof(), 3, uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("SetInt", NULL, (void*)JavaToUnoArrayEntrypoints__SetInt_fn, 0, true, ::g::Uno::Int_typeof(), 3, uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setLong", NULL, (void*)JavaToUnoArrayEntrypoints__setLong_fn, 0, true, ::g::Uno::Long_typeof(), 3, uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Long_typeof()),
        new uFunction("SetLong", NULL, (void*)JavaToUnoArrayEntrypoints__SetLong_fn, 0, true, ::g::Uno::Long_typeof(), 3, uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Long_typeof()),
        new uFunction("setObject", NULL, (void*)JavaToUnoArrayEntrypoints__setObject_fn, 0, true, uObject_typeof(), 3, uObject_typeof(), ::g::Uno::Int_typeof(), uObject_typeof()),
        new uFunction("SetObject", NULL, (void*)JavaToUnoArrayEntrypoints__SetObject_fn, 0, true, uObject_typeof(), 3, uObject_typeof(), ::g::Uno::Int_typeof(), uObject_typeof()),
        new uFunction("setShort", NULL, (void*)JavaToUnoArrayEntrypoints__setShort_fn, 0, true, ::g::Uno::Short_typeof(), 3, uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Short_typeof()),
        new uFunction("SetShort", NULL, (void*)JavaToUnoArrayEntrypoints__SetShort_fn, 0, true, ::g::Uno::Short_typeof(), 3, uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Short_typeof()),
        new uFunction("setString", NULL, (void*)JavaToUnoArrayEntrypoints__setString_fn, 0, true, ::g::Uno::String_typeof(), 3, uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof()),
        new uFunction("SetString", NULL, (void*)JavaToUnoArrayEntrypoints__SetString_fn, 0, true, ::g::Uno::String_typeof(), 3, uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof()),
        new uFunction("SetUByte", NULL, (void*)JavaToUnoArrayEntrypoints__SetUByte_fn, 0, true, ::g::Uno::SByte_typeof(), 3, uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::SByte_typeof()),
        new uFunction("ShortArrayToUnoArrayPtr", NULL, (void*)JavaToUnoArrayEntrypoints__ShortArrayToUnoArrayPtr_fn, 0, true, ::g::Uno::Long_typeof(), 1, ::g::Java::Object_typeof()));
}

uClassType* JavaToUnoArrayEntrypoints_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", options);
    type->fp_build_ = JavaToUnoArrayEntrypoints_build;
    return type;
}

// public static long BoolArrayToUnoArrayPtr(Java.Object jarr) :897
void JavaToUnoArrayEntrypoints__BoolArrayToUnoArrayPtr_fn(::g::Java::Object* jarr, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::BoolArrayToUnoArrayPtr(jarr);
}

// public static long ByteArrayToUnoArrayPtr(Java.Object jarr) :925
void JavaToUnoArrayEntrypoints__ByteArrayToUnoArrayPtr_fn(::g::Java::Object* jarr, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::ByteArrayToUnoArrayPtr(jarr);
}

// public static long CharArrayToUnoArrayPtr(Java.Object jarr) :911
void JavaToUnoArrayEntrypoints__CharArrayToUnoArrayPtr_fn(::g::Java::Object* jarr, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::CharArrayToUnoArrayPtr(jarr);
}

// public static Java.Object CopyBoolArray(object array) :398
void JavaToUnoArrayEntrypoints__CopyBoolArray_fn(uObject* array, ::g::Java::Object** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::CopyBoolArray(array);
}

// public static Java.Object CopyByteArray(object array) :406
void JavaToUnoArrayEntrypoints__CopyByteArray_fn(uObject* array, ::g::Java::Object** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::CopyByteArray(array);
}

// public static Java.Object CopyCharArray(object array) :422
void JavaToUnoArrayEntrypoints__CopyCharArray_fn(uObject* array, ::g::Java::Object** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::CopyCharArray(array);
}

// public static Java.Object CopyDoubleArray(object array) :462
void JavaToUnoArrayEntrypoints__CopyDoubleArray_fn(uObject* array, ::g::Java::Object** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::CopyDoubleArray(array);
}

// public static Java.Object CopyFloatArray(object array) :454
void JavaToUnoArrayEntrypoints__CopyFloatArray_fn(uObject* array, ::g::Java::Object** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::CopyFloatArray(array);
}

// public static Java.Object CopyIntArray(object array) :438
void JavaToUnoArrayEntrypoints__CopyIntArray_fn(uObject* array, ::g::Java::Object** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::CopyIntArray(array);
}

// public static Java.Object CopyLongArray(object array) :446
void JavaToUnoArrayEntrypoints__CopyLongArray_fn(uObject* array, ::g::Java::Object** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::CopyLongArray(array);
}

// public static Java.Object CopyObjectArray(object array) :492
void JavaToUnoArrayEntrypoints__CopyObjectArray_fn(uObject* array, ::g::Java::Object** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::CopyObjectArray(array);
}

// public static Java.Object CopyShortArray(object array) :430
void JavaToUnoArrayEntrypoints__CopyShortArray_fn(uObject* array, ::g::Java::Object** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::CopyShortArray(array);
}

// public static Java.Object CopyStringArray(object array) :472
void JavaToUnoArrayEntrypoints__CopyStringArray_fn(uObject* array, ::g::Java::Object** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::CopyStringArray(array);
}

// public static Java.Object CopyUByteArray(object array) :414
void JavaToUnoArrayEntrypoints__CopyUByteArray_fn(uObject* array, ::g::Java::Object** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::CopyUByteArray(array);
}

// public static long DoubleArrayToUnoArrayPtr(Java.Object jarr) :995
void JavaToUnoArrayEntrypoints__DoubleArrayToUnoArrayPtr_fn(::g::Java::Object* jarr, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::DoubleArrayToUnoArrayPtr(jarr);
}

// public static long FloatArrayToUnoArrayPtr(Java.Object jarr) :981
void JavaToUnoArrayEntrypoints__FloatArrayToUnoArrayPtr_fn(::g::Java::Object* jarr, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::FloatArrayToUnoArrayPtr(jarr);
}

// public static bool getBool(object array, int index) :511
void JavaToUnoArrayEntrypoints__getBool_fn(uObject* array, int* index, bool* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::getBool(array, *index);
}

// public static bool GetBool(object array, int index) :307
void JavaToUnoArrayEntrypoints__GetBool_fn(uObject* array, int* index, bool* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::GetBool(array, *index);
}

// public static sbyte getByte(object array, int index) :517
void JavaToUnoArrayEntrypoints__getByte_fn(uObject* array, int* index, int8_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::getByte(array, *index);
}

// public static sbyte GetByte(object array, int index) :311
void JavaToUnoArrayEntrypoints__GetByte_fn(uObject* array, int* index, int8_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::GetByte(array, *index);
}

// public static char GetChar(object array, int index) :319
void JavaToUnoArrayEntrypoints__GetChar_fn(uObject* array, int* index, uChar* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::GetChar(array, *index);
}

// public static double getDouble(object array, int index) :559
void JavaToUnoArrayEntrypoints__getDouble_fn(uObject* array, int* index, double* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::getDouble(array, *index);
}

// public static double GetDouble(object array, int index) :339
void JavaToUnoArrayEntrypoints__GetDouble_fn(uObject* array, int* index, double* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::GetDouble(array, *index);
}

// public static float getFloat(object array, int index) :553
void JavaToUnoArrayEntrypoints__getFloat_fn(uObject* array, int* index, float* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::getFloat(array, *index);
}

// public static float GetFloat(object array, int index) :335
void JavaToUnoArrayEntrypoints__GetFloat_fn(uObject* array, int* index, float* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::GetFloat(array, *index);
}

// public static int getInt(object array, int index) :541
void JavaToUnoArrayEntrypoints__getInt_fn(uObject* array, int* index, int* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::getInt(array, *index);
}

// public static int GetInt(object array, int index) :327
void JavaToUnoArrayEntrypoints__GetInt_fn(uObject* array, int* index, int* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::GetInt(array, *index);
}

// public static long getLong(object array, int index) :547
void JavaToUnoArrayEntrypoints__getLong_fn(uObject* array, int* index, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::getLong(array, *index);
}

// public static long GetLong(object array, int index) :331
void JavaToUnoArrayEntrypoints__GetLong_fn(uObject* array, int* index, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::GetLong(array, *index);
}

// public static object getObject(object array, int index) :571
void JavaToUnoArrayEntrypoints__getObject_fn(uObject* array, int* index, uObject** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::getObject(array, *index);
}

// public static object GetObject(object array, int index) :347
void JavaToUnoArrayEntrypoints__GetObject_fn(uObject* array, int* index, uObject** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::GetObject(array, *index);
}

// public static short getShort(object array, int index) :535
void JavaToUnoArrayEntrypoints__getShort_fn(uObject* array, int* index, int16_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::getShort(array, *index);
}

// public static short GetShort(object array, int index) :323
void JavaToUnoArrayEntrypoints__GetShort_fn(uObject* array, int* index, int16_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::GetShort(array, *index);
}

// public static string getString(object array, int index) :565
void JavaToUnoArrayEntrypoints__getString_fn(uObject* array, int* index, uString** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::getString(array, *index);
}

// public static string GetString(object array, int index) :343
void JavaToUnoArrayEntrypoints__GetString_fn(uObject* array, int* index, uString** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::GetString(array, *index);
}

// public static sbyte GetUByte(object array, int index) :315
void JavaToUnoArrayEntrypoints__GetUByte_fn(uObject* array, int* index, int8_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::GetUByte(array, *index);
}

// public static long IntArrayToUnoArrayPtr(Java.Object jarr) :953
void JavaToUnoArrayEntrypoints__IntArrayToUnoArrayPtr_fn(::g::Java::Object* jarr, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::IntArrayToUnoArrayPtr(jarr);
}

// public static long LongArrayToUnoArrayPtr(Java.Object jarr) :967
void JavaToUnoArrayEntrypoints__LongArrayToUnoArrayPtr_fn(::g::Java::Object* jarr, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::LongArrayToUnoArrayPtr(jarr);
}

// public static long NewBoolArrayPtr(int length) :773
void JavaToUnoArrayEntrypoints__NewBoolArrayPtr_fn(int* length, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::NewBoolArrayPtr(*length);
}

// public static long NewByteArrayPtr(int length, bool unoIsUnsigned) :780
void JavaToUnoArrayEntrypoints__NewByteArrayPtr_fn(int* length, bool* unoIsUnsigned, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::NewByteArrayPtr(*length, *unoIsUnsigned);
}

// public static long NewCharArrayPtr(int length) :791
void JavaToUnoArrayEntrypoints__NewCharArrayPtr_fn(int* length, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::NewCharArrayPtr(*length);
}

// public static long NewDoubleArrayPtr(int length) :826
void JavaToUnoArrayEntrypoints__NewDoubleArrayPtr_fn(int* length, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::NewDoubleArrayPtr(*length);
}

// public static long NewFloatArrayPtr(int length) :819
void JavaToUnoArrayEntrypoints__NewFloatArrayPtr_fn(int* length, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::NewFloatArrayPtr(*length);
}

// public static long NewIntArrayPtr(int length) :805
void JavaToUnoArrayEntrypoints__NewIntArrayPtr_fn(int* length, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::NewIntArrayPtr(*length);
}

// public static long NewLongArrayPtr(int length) :812
void JavaToUnoArrayEntrypoints__NewLongArrayPtr_fn(int* length, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::NewLongArrayPtr(*length);
}

// public static long NewObjectArrayPtr(int length) :840
void JavaToUnoArrayEntrypoints__NewObjectArrayPtr_fn(int* length, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::NewObjectArrayPtr(*length);
}

// public static long NewShortArrayPtr(int length) :798
void JavaToUnoArrayEntrypoints__NewShortArrayPtr_fn(int* length, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::NewShortArrayPtr(*length);
}

// public static long NewStringArrayPtr(int length) :833
void JavaToUnoArrayEntrypoints__NewStringArrayPtr_fn(int* length, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::NewStringArrayPtr(*length);
}

// public static bool setBool(object array, int index, bool val) :579
void JavaToUnoArrayEntrypoints__setBool_fn(uObject* array, int* index, bool* val, bool* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::setBool(array, *index, *val);
}

// public static bool SetBool(object array, int index, bool val) :352
void JavaToUnoArrayEntrypoints__SetBool_fn(uObject* array, int* index, bool* val, bool* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::SetBool(array, *index, *val);
}

// public static sbyte setByte(object array, int index, sbyte val) :585
void JavaToUnoArrayEntrypoints__setByte_fn(uObject* array, int* index, int8_t* val, int8_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::setByte(array, *index, *val);
}

// public static sbyte SetByte(object array, int index, sbyte val) :356
void JavaToUnoArrayEntrypoints__SetByte_fn(uObject* array, int* index, int8_t* val, int8_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::SetByte(array, *index, *val);
}

// public static char SetChar(object array, int index, char val) :365
void JavaToUnoArrayEntrypoints__SetChar_fn(uObject* array, int* index, uChar* val, uChar* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::SetChar(array, *index, *val);
}

// public static double setDouble(object array, int index, double val) :627
void JavaToUnoArrayEntrypoints__setDouble_fn(uObject* array, int* index, double* val, double* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::setDouble(array, *index, *val);
}

// public static double SetDouble(object array, int index, double val) :385
void JavaToUnoArrayEntrypoints__SetDouble_fn(uObject* array, int* index, double* val, double* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::SetDouble(array, *index, *val);
}

// public static float setFloat(object array, int index, float val) :621
void JavaToUnoArrayEntrypoints__setFloat_fn(uObject* array, int* index, float* val, float* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::setFloat(array, *index, *val);
}

// public static float SetFloat(object array, int index, float val) :381
void JavaToUnoArrayEntrypoints__SetFloat_fn(uObject* array, int* index, float* val, float* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::SetFloat(array, *index, *val);
}

// public static int setInt(object array, int index, int val) :609
void JavaToUnoArrayEntrypoints__setInt_fn(uObject* array, int* index, int* val, int* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::setInt(array, *index, *val);
}

// public static int SetInt(object array, int index, int val) :373
void JavaToUnoArrayEntrypoints__SetInt_fn(uObject* array, int* index, int* val, int* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::SetInt(array, *index, *val);
}

// public static long setLong(object array, int index, long val) :615
void JavaToUnoArrayEntrypoints__setLong_fn(uObject* array, int* index, int64_t* val, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::setLong(array, *index, *val);
}

// public static long SetLong(object array, int index, long val) :377
void JavaToUnoArrayEntrypoints__SetLong_fn(uObject* array, int* index, int64_t* val, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::SetLong(array, *index, *val);
}

// public static object setObject(object array, int index, object val) :639
void JavaToUnoArrayEntrypoints__setObject_fn(uObject* array, int* index, uObject* val, uObject** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::setObject(array, *index, val);
}

// public static object SetObject(object array, int index, object val) :393
void JavaToUnoArrayEntrypoints__SetObject_fn(uObject* array, int* index, uObject* val, uObject** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::SetObject(array, *index, val);
}

// public static short setShort(object array, int index, short val) :603
void JavaToUnoArrayEntrypoints__setShort_fn(uObject* array, int* index, int16_t* val, int16_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::setShort(array, *index, *val);
}

// public static short SetShort(object array, int index, short val) :369
void JavaToUnoArrayEntrypoints__SetShort_fn(uObject* array, int* index, int16_t* val, int16_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::SetShort(array, *index, *val);
}

// public static string setString(object array, int index, string val) :633
void JavaToUnoArrayEntrypoints__setString_fn(uObject* array, int* index, uString* val, uString** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::setString(array, *index, val);
}

// public static string SetString(object array, int index, string val) :389
void JavaToUnoArrayEntrypoints__SetString_fn(uObject* array, int* index, uString* val, uString** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::SetString(array, *index, val);
}

// public static sbyte SetUByte(object array, int index, sbyte val) :360
void JavaToUnoArrayEntrypoints__SetUByte_fn(uObject* array, int* index, int8_t* val, int8_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::SetUByte(array, *index, *val);
}

// public static long ShortArrayToUnoArrayPtr(Java.Object jarr) :939
void JavaToUnoArrayEntrypoints__ShortArrayToUnoArrayPtr_fn(::g::Java::Object* jarr, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::ShortArrayToUnoArrayPtr(jarr);
}

jclass JavaToUnoArrayEntrypoints::_objectClass_;
jclass JavaToUnoArrayEntrypoints::_stringClass_;

// public static long BoolArrayToUnoArrayPtr(Java.Object jarr) [static] :897
int64_t JavaToUnoArrayEntrypoints::BoolArrayToUnoArrayPtr(::g::Java::Object* jarr)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "BoolArrayToUnoArrayPtr(Java.Object)");
    jbooleanArray obj = static_cast<jbooleanArray>(uPtr(uCast< ::g::Android::Base::Wrappers::JWrapper*>(jarr, ::TYPES[0/*Android.Base.Wrappers.JWrapper*/]))->_GetJavaObject());
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();
    int len = (int)env->GetArrayLength(obj);
    uArray* arr = uArray::New(::TYPES[1/*bool[]*/], len);
    env->GetBooleanArrayRegion(obj, (jsize)0, (jsize)len, (jboolean*)arr->_ptr);
    uRetain(arr);
    return (int64_t)arr;
}

// public static long ByteArrayToUnoArrayPtr(Java.Object jarr) [static] :925
int64_t JavaToUnoArrayEntrypoints::ByteArrayToUnoArrayPtr(::g::Java::Object* jarr)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "ByteArrayToUnoArrayPtr(Java.Object)");
    jbyteArray obj = static_cast<jbyteArray>(uPtr(uCast< ::g::Android::Base::Wrappers::JWrapper*>(jarr, ::TYPES[0/*Android.Base.Wrappers.JWrapper*/]))->_GetJavaObject());
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();
    int len = (int)env->GetArrayLength(obj);
    uArray* arr = uArray::New(::TYPES[2/*byte[]*/], len);
    env->GetByteArrayRegion(obj, (jsize)0, (jsize)len, (jbyte*)arr->_ptr);
    uRetain(arr);
    return (int64_t)arr;
}

// public static long CharArrayToUnoArrayPtr(Java.Object jarr) [static] :911
int64_t JavaToUnoArrayEntrypoints::CharArrayToUnoArrayPtr(::g::Java::Object* jarr)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "CharArrayToUnoArrayPtr(Java.Object)");
    jcharArray obj = static_cast<jcharArray>(uPtr(uCast< ::g::Android::Base::Wrappers::JWrapper*>(jarr, ::TYPES[0/*Android.Base.Wrappers.JWrapper*/]))->_GetJavaObject());
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();
    int len = (int)env->GetArrayLength(obj);
    uArray* arr = uArray::New(::TYPES[3/*char[]*/], len);
    env->GetCharArrayRegion(obj, (jsize)0, (jsize)len, (jchar*)arr->_ptr);
    uRetain(arr);
    return (int64_t)arr;
}

// public static Java.Object CopyBoolArray(object array) [static] :398
::g::Java::Object* JavaToUnoArrayEntrypoints::CopyBoolArray(uObject* array)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "CopyBoolArray(object)");
    uArray* arr = uCast<uArray*>(array, ::TYPES[1/*bool[]*/]);
    jobject jarr = ::g::Android::Base::JNI::NewBooleanArray(uPtr(arr)->Length());
    ::g::Android::Base::JNI::SetBooleanArrayRegion(jarr, arr, 0, -1);
    return ::g::Android::Base::Wrappers::JWrapper::Wrap(jarr, false, false);
}

// public static Java.Object CopyByteArray(object array) [static] :406
::g::Java::Object* JavaToUnoArrayEntrypoints::CopyByteArray(uObject* array)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "CopyByteArray(object)");
    uArray* arr = uCast<uArray*>(array, ::TYPES[4/*sbyte[]*/]);
    jobject jarr = ::g::Android::Base::JNI::NewByteArray(uPtr(arr)->Length());
    ::g::Android::Base::JNI::SetByteArrayRegion1(jarr, arr, 0, -1);
    return ::g::Android::Base::Wrappers::JWrapper::Wrap(jarr, false, false);
}

// public static Java.Object CopyCharArray(object array) [static] :422
::g::Java::Object* JavaToUnoArrayEntrypoints::CopyCharArray(uObject* array)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "CopyCharArray(object)");
    uArray* arr = uCast<uArray*>(array, ::TYPES[3/*char[]*/]);
    jobject jarr = ::g::Android::Base::JNI::NewCharArray(uPtr(arr)->Length());
    ::g::Android::Base::JNI::SetCharArrayRegion(jarr, arr, 0, -1);
    return ::g::Android::Base::Wrappers::JWrapper::Wrap(jarr, false, false);
}

// public static Java.Object CopyDoubleArray(object array) [static] :462
::g::Java::Object* JavaToUnoArrayEntrypoints::CopyDoubleArray(uObject* array)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "CopyDoubleArray(object)");
    uArray* arr = uCast<uArray*>(array, ::TYPES[5/*double[]*/]);
    jobject jarr = ::g::Android::Base::JNI::NewDoubleArray(uPtr(arr)->Length());
    ::g::Android::Base::JNI::SetDoubleArrayRegion(jarr, arr, 0, -1);
    return ::g::Android::Base::Wrappers::JWrapper::Wrap(jarr, false, false);
}

// public static Java.Object CopyFloatArray(object array) [static] :454
::g::Java::Object* JavaToUnoArrayEntrypoints::CopyFloatArray(uObject* array)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "CopyFloatArray(object)");
    uArray* arr = uCast<uArray*>(array, ::TYPES[6/*float[]*/]);
    jobject jarr = ::g::Android::Base::JNI::NewFloatArray(uPtr(arr)->Length());
    ::g::Android::Base::JNI::SetFloatArrayRegion(jarr, arr, 0, -1);
    return ::g::Android::Base::Wrappers::JWrapper::Wrap(jarr, false, false);
}

// public static Java.Object CopyIntArray(object array) [static] :438
::g::Java::Object* JavaToUnoArrayEntrypoints::CopyIntArray(uObject* array)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "CopyIntArray(object)");
    uArray* arr = uCast<uArray*>(array, ::TYPES[7/*int[]*/]);
    jobject jarr = ::g::Android::Base::JNI::NewIntArray(uPtr(arr)->Length());
    ::g::Android::Base::JNI::SetIntArrayRegion(jarr, arr, 0, -1);
    return ::g::Android::Base::Wrappers::JWrapper::Wrap(jarr, false, false);
}

// public static Java.Object CopyLongArray(object array) [static] :446
::g::Java::Object* JavaToUnoArrayEntrypoints::CopyLongArray(uObject* array)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "CopyLongArray(object)");
    uArray* arr = uCast<uArray*>(array, ::TYPES[8/*long[]*/]);
    jobject jarr = ::g::Android::Base::JNI::NewLongArray(uPtr(arr)->Length());
    ::g::Android::Base::JNI::SetLongArrayRegion(jarr, arr, 0, -1);
    return ::g::Android::Base::Wrappers::JWrapper::Wrap(jarr, false, false);
}

// public static Java.Object CopyObjectArray(object array) [static] :492
::g::Java::Object* JavaToUnoArrayEntrypoints::CopyObjectArray(uObject* array)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "CopyObjectArray(object)");
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();

    if (::g::Android::Base::Primitives::ujclass::op_Equality(JavaToUnoArrayEntrypoints::_objectClass_, ::g::Android::Base::Primitives::ujclass::Null()))
        JavaToUnoArrayEntrypoints::_objectClass_ = ::g::Android::Base::JNI::NewGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[0/*"java/lang/O...*/], true));

    uArray* arr = uCast<uArray*>(array, ::TYPES[9/*object[]*/]);
    jobject jarr = ::g::Android::Base::JNI::NewObjectArray(JavaToUnoArrayEntrypoints::_objectClass_, uPtr(arr)->Length());

    for (int i = 0; i < arr->Length(); i++)
    {
        jobject o = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(uPtr(arr)->Strong<uObject*>(i));
        env->SetObjectArrayElement((jobjectArray)jarr, i, o);
        ::g::Android::Base::JNI::DeleteLocalRef1(o);
    }

    return ::g::Android::Base::Wrappers::JWrapper::Wrap(jarr, false, false);
}

// public static Java.Object CopyShortArray(object array) [static] :430
::g::Java::Object* JavaToUnoArrayEntrypoints::CopyShortArray(uObject* array)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "CopyShortArray(object)");
    uArray* arr = uCast<uArray*>(array, ::TYPES[10/*short[]*/]);
    jobject jarr = ::g::Android::Base::JNI::NewShortArray(uPtr(arr)->Length());
    ::g::Android::Base::JNI::SetShortArrayRegion(jarr, arr, 0, -1);
    return ::g::Android::Base::Wrappers::JWrapper::Wrap(jarr, false, false);
}

// public static Java.Object CopyStringArray(object array) [static] :472
::g::Java::Object* JavaToUnoArrayEntrypoints::CopyStringArray(uObject* array)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "CopyStringArray(object)");
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();

    if (::g::Android::Base::Primitives::ujclass::op_Equality(JavaToUnoArrayEntrypoints::_stringClass_, ::g::Android::Base::Primitives::ujclass::Null()))
        JavaToUnoArrayEntrypoints::_stringClass_ = ::g::Android::Base::JNI::NewGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[1/*"java/lang/S...*/], true));

    uArray* arr = uCast<uArray*>(array, ::TYPES[11/*string[]*/]);
    jobject jarr = ::g::Android::Base::JNI::NewObjectArray(JavaToUnoArrayEntrypoints::_stringClass_, uPtr(arr)->Length());

    for (int i = 0; i < arr->Length(); i++)
    {
        jobject s = ::g::Android::Base::Types::String::UnoToJava1(uPtr(arr)->Strong<uString*>(i));
        env->SetObjectArrayElement((jobjectArray)jarr, i, (jobject)s);
        ::g::Android::Base::JNI::DeleteLocalRef1(s);
    }

    return ::g::Android::Base::Wrappers::JWrapper::Wrap(jarr, false, false);
}

// public static Java.Object CopyUByteArray(object array) [static] :414
::g::Java::Object* JavaToUnoArrayEntrypoints::CopyUByteArray(uObject* array)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "CopyUByteArray(object)");
    uArray* arr = uCast<uArray*>(array, ::TYPES[2/*byte[]*/]);
    jobject jarr = ::g::Android::Base::JNI::NewByteArray(uPtr(arr)->Length());
    ::g::Android::Base::JNI::SetByteArrayRegion(jarr, arr, 0, -1);
    return ::g::Android::Base::Wrappers::JWrapper::Wrap(jarr, false, false);
}

// public static long DoubleArrayToUnoArrayPtr(Java.Object jarr) [static] :995
int64_t JavaToUnoArrayEntrypoints::DoubleArrayToUnoArrayPtr(::g::Java::Object* jarr)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "DoubleArrayToUnoArrayPtr(Java.Object)");
    jdoubleArray obj = static_cast<jdoubleArray>(uPtr(uCast< ::g::Android::Base::Wrappers::JWrapper*>(jarr, ::TYPES[0/*Android.Base.Wrappers.JWrapper*/]))->_GetJavaObject());
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();
    int len = (int)env->GetArrayLength(obj);
    uArray* arr = uArray::New(::TYPES[5/*double[]*/], len);
    env->GetDoubleArrayRegion(obj, (jsize)0, (jsize)len, (jdouble*)arr->_ptr);
    uRetain(arr);
    return (int64_t)arr;
}

// public static long FloatArrayToUnoArrayPtr(Java.Object jarr) [static] :981
int64_t JavaToUnoArrayEntrypoints::FloatArrayToUnoArrayPtr(::g::Java::Object* jarr)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "FloatArrayToUnoArrayPtr(Java.Object)");
    jfloatArray obj = static_cast<jfloatArray>(uPtr(uCast< ::g::Android::Base::Wrappers::JWrapper*>(jarr, ::TYPES[0/*Android.Base.Wrappers.JWrapper*/]))->_GetJavaObject());
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();
    int len = (int)env->GetArrayLength(obj);
    uArray* arr = uArray::New(::TYPES[6/*float[]*/], len);
    env->GetFloatArrayRegion(obj, (jsize)0, (jsize)len, (jfloat*)arr->_ptr);
    uRetain(arr);
    return (int64_t)arr;
}

// public static bool getBool(object array, int index) [static] :511
bool JavaToUnoArrayEntrypoints::getBool(uObject* array, int index)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "getBool", "(Lcom/uno/UnoObject;I)Z");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int _uindex=index;
        jint _index = (jint)_uindex;
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_array,_index);
        bool __result = (bool)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static bool GetBool(object array, int index) [static] :307
bool JavaToUnoArrayEntrypoints::GetBool(uObject* array, int index)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "GetBool(object,int)");
    return uPtr(uCast<uArray*>(array, ::TYPES[1/*bool[]*/]))->Item<bool>(index);
}

// public static sbyte getByte(object array, int index) [static] :517
int8_t JavaToUnoArrayEntrypoints::getByte(uObject* array, int index)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "getByte", "(Lcom/uno/UnoObject;I)B");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int _uindex=index;
        jint _index = (jint)_uindex;
        jbyte __jresult = U_JNIVAR->CallStaticByteMethod(__cls,__mtd,_array,_index);
        int8_t __result = (int8_t)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static sbyte GetByte(object array, int index) [static] :311
int8_t JavaToUnoArrayEntrypoints::GetByte(uObject* array, int index)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "GetByte(object,int)");
    return uPtr(uCast<uArray*>(array, ::TYPES[4/*sbyte[]*/]))->Item<int8_t>(index);
}

// public static char GetChar(object array, int index) [static] :319
uChar JavaToUnoArrayEntrypoints::GetChar(uObject* array, int index)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "GetChar(object,int)");
    return uPtr(uCast<uArray*>(array, ::TYPES[3/*char[]*/]))->Item<uChar>(index);
}

// public static double getDouble(object array, int index) [static] :559
double JavaToUnoArrayEntrypoints::getDouble(uObject* array, int index)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "getDouble", "(Lcom/uno/UnoObject;I)D");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int _uindex=index;
        jint _index = (jint)_uindex;
        jdouble __jresult = U_JNIVAR->CallStaticDoubleMethod(__cls,__mtd,_array,_index);
        double __result = (double)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static double GetDouble(object array, int index) [static] :339
double JavaToUnoArrayEntrypoints::GetDouble(uObject* array, int index)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "GetDouble(object,int)");
    return uPtr(uCast<uArray*>(array, ::TYPES[5/*double[]*/]))->Item<double>(index);
}

// public static float getFloat(object array, int index) [static] :553
float JavaToUnoArrayEntrypoints::getFloat(uObject* array, int index)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "getFloat", "(Lcom/uno/UnoObject;I)F");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int _uindex=index;
        jint _index = (jint)_uindex;
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd,_array,_index);
        float __result = (float)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static float GetFloat(object array, int index) [static] :335
float JavaToUnoArrayEntrypoints::GetFloat(uObject* array, int index)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "GetFloat(object,int)");
    return uPtr(uCast<uArray*>(array, ::TYPES[6/*float[]*/]))->Item<float>(index);
}

// public static int getInt(object array, int index) [static] :541
int JavaToUnoArrayEntrypoints::getInt(uObject* array, int index)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "getInt", "(Lcom/uno/UnoObject;I)I");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int _uindex=index;
        jint _index = (jint)_uindex;
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_array,_index);
        int __result = (int)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static int GetInt(object array, int index) [static] :327
int JavaToUnoArrayEntrypoints::GetInt(uObject* array, int index)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "GetInt(object,int)");
    return uPtr(uCast<uArray*>(array, ::TYPES[7/*int[]*/]))->Item<int>(index);
}

// public static long getLong(object array, int index) [static] :547
int64_t JavaToUnoArrayEntrypoints::getLong(uObject* array, int index)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "getLong", "(Lcom/uno/UnoObject;I)J");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int _uindex=index;
        jint _index = (jint)_uindex;
        jlong __jresult = U_JNIVAR->CallStaticLongMethod(__cls,__mtd,_array,_index);
        int64_t __result = (int64_t)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static long GetLong(object array, int index) [static] :331
int64_t JavaToUnoArrayEntrypoints::GetLong(uObject* array, int index)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "GetLong(object,int)");
    return uPtr(uCast<uArray*>(array, ::TYPES[8/*long[]*/]))->Item<int64_t>(index);
}

// public static object getObject(object array, int index) [static] :571
uObject* JavaToUnoArrayEntrypoints::getObject(uObject* array, int index)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "getObject", "(Lcom/uno/UnoObject;I)Lcom/uno/UnoObject;");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int _uindex=index;
        jint _index = (jint)_uindex;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_array,_index);
        uObject* __result = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBoxFreeingLocalRef(__jresult);
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static object GetObject(object array, int index) [static] :347
uObject* JavaToUnoArrayEntrypoints::GetObject(uObject* array, int index)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "GetObject(object,int)");
    return uPtr(uCast<uArray*>(array, ::TYPES[9/*object[]*/]))->Strong<uObject*>(index);
}

// public static short getShort(object array, int index) [static] :535
int16_t JavaToUnoArrayEntrypoints::getShort(uObject* array, int index)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "getShort", "(Lcom/uno/UnoObject;I)S");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int _uindex=index;
        jint _index = (jint)_uindex;
        jshort __jresult = U_JNIVAR->CallStaticShortMethod(__cls,__mtd,_array,_index);
        int16_t __result = (int16_t)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static short GetShort(object array, int index) [static] :323
int16_t JavaToUnoArrayEntrypoints::GetShort(uObject* array, int index)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "GetShort(object,int)");
    return uPtr(uCast<uArray*>(array, ::TYPES[10/*short[]*/]))->Item<int16_t>(index);
}

// public static string getString(object array, int index) [static] :565
uString* JavaToUnoArrayEntrypoints::getString(uObject* array, int index)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "getString", "(Lcom/uno/UnoObject;I)Ljava/lang/String;");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int _uindex=index;
        jint _index = (jint)_uindex;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_array,_index);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static string GetString(object array, int index) [static] :343
uString* JavaToUnoArrayEntrypoints::GetString(uObject* array, int index)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "GetString(object,int)");
    return uPtr(uCast<uArray*>(array, ::TYPES[11/*string[]*/]))->Strong<uString*>(index);
}

// public static sbyte GetUByte(object array, int index) [static] :315
int8_t JavaToUnoArrayEntrypoints::GetUByte(uObject* array, int index)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "GetUByte(object,int)");
    return (int8_t)uPtr(uCast<uArray*>(array, ::TYPES[2/*byte[]*/]))->Item<uint8_t>(index);
}

// public static long IntArrayToUnoArrayPtr(Java.Object jarr) [static] :953
int64_t JavaToUnoArrayEntrypoints::IntArrayToUnoArrayPtr(::g::Java::Object* jarr)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "IntArrayToUnoArrayPtr(Java.Object)");
    jintArray obj = static_cast<jintArray>(uPtr(uCast< ::g::Android::Base::Wrappers::JWrapper*>(jarr, ::TYPES[0/*Android.Base.Wrappers.JWrapper*/]))->_GetJavaObject());
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();
    int len = (int)env->GetArrayLength(obj);
    uArray* arr = uArray::New(::TYPES[7/*int[]*/], len);
    env->GetIntArrayRegion(obj, (jsize)0, (jsize)len, (jint*)arr->_ptr);
    uRetain(arr);
    return (int64_t)arr;
}

// public static long LongArrayToUnoArrayPtr(Java.Object jarr) [static] :967
int64_t JavaToUnoArrayEntrypoints::LongArrayToUnoArrayPtr(::g::Java::Object* jarr)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "LongArrayToUnoArrayPtr(Java.Object)");
    jlongArray obj = static_cast<jlongArray>(uPtr(uCast< ::g::Android::Base::Wrappers::JWrapper*>(jarr, ::TYPES[0/*Android.Base.Wrappers.JWrapper*/]))->_GetJavaObject());
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();
    int len = (int)env->GetArrayLength(obj);
    uArray* arr = uArray::New(::TYPES[8/*long[]*/], len);
    env->GetLongArrayRegion(obj, (jsize)0, (jsize)len, (jlong*)arr->_ptr);
    uRetain(arr);
    return (int64_t)arr;
}

// public static long NewBoolArrayPtr(int length) [static] :773
int64_t JavaToUnoArrayEntrypoints::NewBoolArrayPtr(int length)
{
    uArray* arr = uArray::New(::TYPES[1/*bool[]*/], length);
    uRetain(arr);
    return (int64_t)arr;
}

// public static long NewByteArrayPtr(int length, bool unoIsUnsigned) [static] :780
int64_t JavaToUnoArrayEntrypoints::NewByteArrayPtr(int length, bool unoIsUnsigned)
{
    uObject* arr;

    if (unoIsUnsigned)
        arr = uArray::New(::TYPES[2/*byte[]*/], length);
    else
        arr = uArray::New(::TYPES[4/*sbyte[]*/], length);

    uRetain(arr);
    return (int64_t)arr;
}

// public static long NewCharArrayPtr(int length) [static] :791
int64_t JavaToUnoArrayEntrypoints::NewCharArrayPtr(int length)
{
    uArray* arr = uArray::New(::TYPES[3/*char[]*/], length);
    uRetain(arr);
    return (int64_t)arr;
}

// public static long NewDoubleArrayPtr(int length) [static] :826
int64_t JavaToUnoArrayEntrypoints::NewDoubleArrayPtr(int length)
{
    uArray* arr = uArray::New(::TYPES[5/*double[]*/], length);
    uRetain(arr);
    return (int64_t)arr;
}

// public static long NewFloatArrayPtr(int length) [static] :819
int64_t JavaToUnoArrayEntrypoints::NewFloatArrayPtr(int length)
{
    uArray* arr = uArray::New(::TYPES[6/*float[]*/], length);
    uRetain(arr);
    return (int64_t)arr;
}

// public static long NewIntArrayPtr(int length) [static] :805
int64_t JavaToUnoArrayEntrypoints::NewIntArrayPtr(int length)
{
    uArray* arr = uArray::New(::TYPES[7/*int[]*/], length);
    uRetain(arr);
    return (int64_t)arr;
}

// public static long NewLongArrayPtr(int length) [static] :812
int64_t JavaToUnoArrayEntrypoints::NewLongArrayPtr(int length)
{
    uArray* arr = uArray::New(::TYPES[8/*long[]*/], length);
    uRetain(arr);
    return (int64_t)arr;
}

// public static long NewObjectArrayPtr(int length) [static] :840
int64_t JavaToUnoArrayEntrypoints::NewObjectArrayPtr(int length)
{
    uArray* arr = uArray::New(::TYPES[9/*object[]*/], length);
    uRetain(arr);
    return (int64_t)arr;
}

// public static long NewShortArrayPtr(int length) [static] :798
int64_t JavaToUnoArrayEntrypoints::NewShortArrayPtr(int length)
{
    uArray* arr = uArray::New(::TYPES[10/*short[]*/], length);
    uRetain(arr);
    return (int64_t)arr;
}

// public static long NewStringArrayPtr(int length) [static] :833
int64_t JavaToUnoArrayEntrypoints::NewStringArrayPtr(int length)
{
    uArray* arr = uArray::New(::TYPES[11/*string[]*/], length);
    uRetain(arr);
    return (int64_t)arr;
}

// public static bool setBool(object array, int index, bool val) [static] :579
bool JavaToUnoArrayEntrypoints::setBool(uObject* array, int index, bool val)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "setBool", "(Lcom/uno/UnoObject;IZ)Z");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int _uindex=index;
        jint _index = (jint)_uindex;
        bool _uval=val;
        jboolean _val = (jboolean)_uval;
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_array,_index,_val);
        bool __result = (bool)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static bool SetBool(object array, int index, bool val) [static] :352
bool JavaToUnoArrayEntrypoints::SetBool(uObject* array, int index, bool val)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "SetBool(object,int,bool)");
    return uPtr(uCast<uArray*>(array, ::TYPES[1/*bool[]*/]))->Item<bool>(index) = val;
}

// public static sbyte setByte(object array, int index, sbyte val) [static] :585
int8_t JavaToUnoArrayEntrypoints::setByte(uObject* array, int index, int8_t val)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "setByte", "(Lcom/uno/UnoObject;IB)B");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int _uindex=index;
        jint _index = (jint)_uindex;
        int8_t _uval=val;
        jbyte _val = (jbyte)_uval;
        jbyte __jresult = U_JNIVAR->CallStaticByteMethod(__cls,__mtd,_array,_index,_val);
        int8_t __result = (int8_t)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static sbyte SetByte(object array, int index, sbyte val) [static] :356
int8_t JavaToUnoArrayEntrypoints::SetByte(uObject* array, int index, int8_t val)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "SetByte(object,int,sbyte)");
    return uPtr(uCast<uArray*>(array, ::TYPES[4/*sbyte[]*/]))->Item<int8_t>(index) = val;
}

// public static char SetChar(object array, int index, char val) [static] :365
uChar JavaToUnoArrayEntrypoints::SetChar(uObject* array, int index, uChar val)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "SetChar(object,int,char)");
    return uPtr(uCast<uArray*>(array, ::TYPES[3/*char[]*/]))->Item<uChar>(index) = val;
}

// public static double setDouble(object array, int index, double val) [static] :627
double JavaToUnoArrayEntrypoints::setDouble(uObject* array, int index, double val)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "setDouble", "(Lcom/uno/UnoObject;ID)D");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int _uindex=index;
        jint _index = (jint)_uindex;
        double _uval=val;
        jdouble _val = (jdouble)_uval;
        jdouble __jresult = U_JNIVAR->CallStaticDoubleMethod(__cls,__mtd,_array,_index,_val);
        double __result = (double)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static double SetDouble(object array, int index, double val) [static] :385
double JavaToUnoArrayEntrypoints::SetDouble(uObject* array, int index, double val)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "SetDouble(object,int,double)");
    return uPtr(uCast<uArray*>(array, ::TYPES[5/*double[]*/]))->Item<double>(index) = val;
}

// public static float setFloat(object array, int index, float val) [static] :621
float JavaToUnoArrayEntrypoints::setFloat(uObject* array, int index, float val)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "setFloat", "(Lcom/uno/UnoObject;IF)F");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int _uindex=index;
        jint _index = (jint)_uindex;
        float _uval=val;
        jfloat _val = (jfloat)_uval;
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd,_array,_index,_val);
        float __result = (float)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static float SetFloat(object array, int index, float val) [static] :381
float JavaToUnoArrayEntrypoints::SetFloat(uObject* array, int index, float val)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "SetFloat(object,int,float)");
    return uPtr(uCast<uArray*>(array, ::TYPES[6/*float[]*/]))->Item<float>(index) = val;
}

// public static int setInt(object array, int index, int val) [static] :609
int JavaToUnoArrayEntrypoints::setInt(uObject* array, int index, int val)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "setInt", "(Lcom/uno/UnoObject;II)I");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int _uindex=index;
        jint _index = (jint)_uindex;
        int _uval=val;
        jint _val = (jint)_uval;
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_array,_index,_val);
        int __result = (int)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static int SetInt(object array, int index, int val) [static] :373
int JavaToUnoArrayEntrypoints::SetInt(uObject* array, int index, int val)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "SetInt(object,int,int)");
    return uPtr(uCast<uArray*>(array, ::TYPES[7/*int[]*/]))->Item<int>(index) = val;
}

// public static long setLong(object array, int index, long val) [static] :615
int64_t JavaToUnoArrayEntrypoints::setLong(uObject* array, int index, int64_t val)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "setLong", "(Lcom/uno/UnoObject;IJ)J");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int _uindex=index;
        jint _index = (jint)_uindex;
        int64_t _uval=val;
        jlong _val = (jlong)_uval;
        jlong __jresult = U_JNIVAR->CallStaticLongMethod(__cls,__mtd,_array,_index,_val);
        int64_t __result = (int64_t)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static long SetLong(object array, int index, long val) [static] :377
int64_t JavaToUnoArrayEntrypoints::SetLong(uObject* array, int index, int64_t val)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "SetLong(object,int,long)");
    return uPtr(uCast<uArray*>(array, ::TYPES[8/*long[]*/]))->Item<int64_t>(index) = val;
}

// public static object setObject(object array, int index, object val) [static] :639
uObject* JavaToUnoArrayEntrypoints::setObject(uObject* array, int index, uObject* val)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "setObject", "(Lcom/uno/UnoObject;ILcom/uno/UnoObject;)Lcom/uno/UnoObject;");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int _uindex=index;
        jint _index = (jint)_uindex;
        uObject* _uval=val;
        jobject _val = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uval);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_array,_index,_val);
        uObject* __result = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBoxFreeingLocalRef(__jresult);
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        if (_val!=NULL) { U_JNIVAR->DeleteLocalRef(_val); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static object SetObject(object array, int index, object val) [static] :393
uObject* JavaToUnoArrayEntrypoints::SetObject(uObject* array, int index, uObject* val)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "SetObject(object,int,object)");
    return uPtr(uCast<uArray*>(array, ::TYPES[9/*object[]*/]))->Strong<uObject*>(index) = val;
}

// public static short setShort(object array, int index, short val) [static] :603
int16_t JavaToUnoArrayEntrypoints::setShort(uObject* array, int index, int16_t val)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "setShort", "(Lcom/uno/UnoObject;IS)S");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int _uindex=index;
        jint _index = (jint)_uindex;
        int16_t _uval=val;
        jshort _val = (jshort)_uval;
        jshort __jresult = U_JNIVAR->CallStaticShortMethod(__cls,__mtd,_array,_index,_val);
        int16_t __result = (int16_t)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static short SetShort(object array, int index, short val) [static] :369
int16_t JavaToUnoArrayEntrypoints::SetShort(uObject* array, int index, int16_t val)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "SetShort(object,int,short)");
    return uPtr(uCast<uArray*>(array, ::TYPES[10/*short[]*/]))->Item<int16_t>(index) = val;
}

// public static string setString(object array, int index, string val) [static] :633
uString* JavaToUnoArrayEntrypoints::setString(uObject* array, int index, uString* val)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "setString", "(Lcom/uno/UnoObject;ILjava/lang/String;)Ljava/lang/String;");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int _uindex=index;
        jint _index = (jint)_uindex;
        uString* _uval=val;
        jstring _val = JniHelper::UnoToJavaString(_uval);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_array,_index,_val);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        if (_val!=NULL) { U_JNIVAR->DeleteLocalRef(_val); }
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static string SetString(object array, int index, string val) [static] :389
uString* JavaToUnoArrayEntrypoints::SetString(uObject* array, int index, uString* val)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "SetString(object,int,string)");
    return uPtr(uCast<uArray*>(array, ::TYPES[11/*string[]*/]))->Strong<uString*>(index) = val;
}

// public static sbyte SetUByte(object array, int index, sbyte val) [static] :360
int8_t JavaToUnoArrayEntrypoints::SetUByte(uObject* array, int index, int8_t val)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "SetUByte(object,int,sbyte)");
    uPtr(uCast<uArray*>(array, ::TYPES[2/*byte[]*/]))->Item<uint8_t>(index) = (uint8_t)val;
    return val;
}

// public static long ShortArrayToUnoArrayPtr(Java.Object jarr) [static] :939
int64_t JavaToUnoArrayEntrypoints::ShortArrayToUnoArrayPtr(::g::Java::Object* jarr)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", "ShortArrayToUnoArrayPtr(Java.Object)");
    jshortArray obj = static_cast<jshortArray>(uPtr(uCast< ::g::Android::Base::Wrappers::JWrapper*>(jarr, ::TYPES[0/*Android.Base.Wrappers.JWrapper*/]))->_GetJavaObject());
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();
    int len = (int)env->GetArrayLength(obj);
    uArray* arr = uArray::New(::TYPES[10/*short[]*/], len);
    env->GetShortArrayRegion(obj, (jsize)0, (jsize)len, (jshort*)arr->_ptr);
    uRetain(arr);
    return (int64_t)arr;
}
// }

// /Users/martinmorales/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/compiler/exporttargetinterop/foreign/android/$.uno
// ------------------------------------------------------------------------------------------------------------------------------------------------

// public static extern class JavaUnoObject :45
// {
static void JavaUnoObject_build(uType* type)
{
    ::STRINGS[2] = uString::Const("<init>");
    ::STRINGS[3] = uString::Const("(J)V");
    ::STRINGS[4] = uString::Const("com/uno/UnoObject");
    ::STRINGS[5] = uString::Const("_GetRetainedUnoPtr");
    ::STRINGS[6] = uString::Const("()J");
    ::STRINGS[7] = uString::Const("com/uno/BoolArray");
    ::STRINGS[8] = uString::Const("InitFromUnoPtr");
    ::STRINGS[9] = uString::Const("(J)Lcom/uno/BoolArray;");
    ::STRINGS[10] = uString::Const("com/uno/ByteArray");
    ::STRINGS[11] = uString::Const("(JZ)Lcom/uno/ByteArray;");
    ::STRINGS[12] = uString::Const("com/uno/ShortArray");
    ::STRINGS[13] = uString::Const("(J)Lcom/uno/ShortArray;");
    ::STRINGS[14] = uString::Const("com/uno/IntArray");
    ::STRINGS[15] = uString::Const("(J)Lcom/uno/IntArray;");
    ::STRINGS[16] = uString::Const("com/uno/LongArray");
    ::STRINGS[17] = uString::Const("(J)Lcom/uno/LongArray;");
    ::STRINGS[18] = uString::Const("com/uno/FloatArray");
    ::STRINGS[19] = uString::Const("(J)Lcom/uno/FloatArray;");
    ::STRINGS[20] = uString::Const("com/uno/DoubleArray");
    ::STRINGS[21] = uString::Const("(J)Lcom/uno/DoubleArray;");
    ::STRINGS[22] = uString::Const("com/uno/StringArray");
    ::STRINGS[23] = uString::Const("(J)Lcom/uno/StringArray;");
    ::STRINGS[24] = uString::Const("com/uno/ObjectArray");
    ::STRINGS[25] = uString::Const("(J)Lcom/uno/ObjectArray;");
    ::STRINGS[26] = uString::Const("Could not register the finalizer callback for JavaUnoObject");
    type->SetFields(0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::_unoBoolArrayClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::_unoBoolArrayFactoryMethod_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::_unoByteArrayClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::_unoByteArrayFactoryMethod_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::_unoDoubleArrayClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::_unoDoubleArrayFactoryMethod_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::_unoFloatArrayClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::_unoFloatArrayFactoryMethod_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::_unoIntArrayClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::_unoIntArrayFactoryMethod_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::_unoLongArrayClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::_unoLongArrayFactoryMethod_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::_unoObjectArrayClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::_unoObjectArrayFactoryMethod_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::_unoObjectClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::_unoObjectConstructor_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::_unoObjectGetRetainedUnoPtr_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::_unoShortArrayClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::_unoShortArrayFactoryMethod_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::_unoStringArrayClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::_unoStringArrayFactoryMethod_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(14,
        new uFunction("Box", NULL, (void*)JavaUnoObject__Box_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, ::g::Uno::Bool_typeof()->Array()),
        new uFunction("Box", NULL, (void*)JavaUnoObject__Box1_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, ::g::Uno::Byte_typeof()->Array()),
        new uFunction("Box", NULL, (void*)JavaUnoObject__Box2_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, ::g::Uno::Double_typeof()->Array()),
        new uFunction("Box", NULL, (void*)JavaUnoObject__Box3_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, ::g::Uno::Float_typeof()->Array()),
        new uFunction("Box", NULL, (void*)JavaUnoObject__Box4_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, ::g::Uno::Int_typeof()->Array()),
        new uFunction("Box", NULL, (void*)JavaUnoObject__Box5_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, ::g::Uno::Long_typeof()->Array()),
        new uFunction("Box", NULL, (void*)JavaUnoObject__Box6_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, uObject_typeof()),
        new uFunction("Box", NULL, (void*)JavaUnoObject__Box7_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, uObject_typeof()->Array()),
        new uFunction("Box", NULL, (void*)JavaUnoObject__Box8_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, ::g::Uno::SByte_typeof()->Array()),
        new uFunction("Box", NULL, (void*)JavaUnoObject__Box9_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, ::g::Uno::Short_typeof()->Array()),
        new uFunction("Box", NULL, (void*)JavaUnoObject__Box10_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, ::g::Uno::String_typeof()->Array()),
        new uFunction("BoxDelegate", NULL, (void*)JavaUnoObject__BoxDelegate_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 2, uObject_typeof(), ::g::Android::Base::Primitives::ConstCharPtr_typeof()),
        new uFunction("UnBox", NULL, (void*)JavaUnoObject__UnBox_fn, 0, true, uObject_typeof(), 1, ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("UnBoxFreeingLocalRef", NULL, (void*)JavaUnoObject__UnBoxFreeingLocalRef_fn, 0, true, uObject_typeof(), 1, ::g::Android::Base::Primitives::ujobject_typeof()));
}

uClassType* JavaUnoObject_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject", options);
    type->fp_build_ = JavaUnoObject_build;
    return type;
}

// public static Android.Base.Primitives.ujobject Box(bool[] unoArray) :156
void JavaUnoObject__Box_fn(uArray* unoArray, jobject* __retval)
{
    *__retval = JavaUnoObject::Box(unoArray);
}

// public static Android.Base.Primitives.ujobject Box(byte[] unoArray) :145
void JavaUnoObject__Box1_fn(uArray* unoArray, jobject* __retval)
{
    *__retval = JavaUnoObject::Box1(unoArray);
}

// public static Android.Base.Primitives.ujobject Box(double[] unoArray) :211
void JavaUnoObject__Box2_fn(uArray* unoArray, jobject* __retval)
{
    *__retval = JavaUnoObject::Box2(unoArray);
}

// public static Android.Base.Primitives.ujobject Box(float[] unoArray) :200
void JavaUnoObject__Box3_fn(uArray* unoArray, jobject* __retval)
{
    *__retval = JavaUnoObject::Box3(unoArray);
}

// public static Android.Base.Primitives.ujobject Box(int[] unoArray) :178
void JavaUnoObject__Box4_fn(uArray* unoArray, jobject* __retval)
{
    *__retval = JavaUnoObject::Box4(unoArray);
}

// public static Android.Base.Primitives.ujobject Box(long[] unoArray) :189
void JavaUnoObject__Box5_fn(uArray* unoArray, jobject* __retval)
{
    *__retval = JavaUnoObject::Box5(unoArray);
}

// public static Android.Base.Primitives.ujobject Box(object unoObject) :123
void JavaUnoObject__Box6_fn(uObject* unoObject, jobject* __retval)
{
    *__retval = JavaUnoObject::Box6(unoObject);
}

// public static Android.Base.Primitives.ujobject Box(object[] unoArray) :233
void JavaUnoObject__Box7_fn(uArray* unoArray, jobject* __retval)
{
    *__retval = JavaUnoObject::Box7(unoArray);
}

// public static Android.Base.Primitives.ujobject Box(sbyte[] unoArray) :134
void JavaUnoObject__Box8_fn(uArray* unoArray, jobject* __retval)
{
    *__retval = JavaUnoObject::Box8(unoArray);
}

// public static Android.Base.Primitives.ujobject Box(short[] unoArray) :167
void JavaUnoObject__Box9_fn(uArray* unoArray, jobject* __retval)
{
    *__retval = JavaUnoObject::Box9(unoArray);
}

// public static Android.Base.Primitives.ujobject Box(string[] unoArray) :222
void JavaUnoObject__Box10_fn(uArray* unoArray, jobject* __retval)
{
    *__retval = JavaUnoObject::Box10(unoArray);
}

// public static Android.Base.Primitives.ujobject BoxDelegate(object delegateObj, Android.Base.Primitives.ConstCharPtr javaClassName) :244
void JavaUnoObject__BoxDelegate_fn(uObject* delegateObj, const char** javaClassName, jobject* __retval)
{
    *__retval = JavaUnoObject::BoxDelegate(delegateObj, *javaClassName);
}

// private static void EnsureInitialized() :78
void JavaUnoObject__EnsureInitialized_fn()
{
    JavaUnoObject::EnsureInitialized();
}

// public static object UnBox(Android.Base.Primitives.ujobject javaObject) :261
void JavaUnoObject__UnBox_fn(jobject* javaObject, uObject** __retval)
{
    *__retval = JavaUnoObject::UnBox(*javaObject);
}

// public static object UnBoxFreeingLocalRef(Android.Base.Primitives.ujobject javaObject) :269
void JavaUnoObject__UnBoxFreeingLocalRef_fn(jobject* javaObject, uObject** __retval)
{
    *__retval = JavaUnoObject::UnBoxFreeingLocalRef(*javaObject);
}

jclass JavaUnoObject::_unoBoolArrayClass_;
jmethodID JavaUnoObject::_unoBoolArrayFactoryMethod_;
jclass JavaUnoObject::_unoByteArrayClass_;
jmethodID JavaUnoObject::_unoByteArrayFactoryMethod_;
jclass JavaUnoObject::_unoDoubleArrayClass_;
jmethodID JavaUnoObject::_unoDoubleArrayFactoryMethod_;
jclass JavaUnoObject::_unoFloatArrayClass_;
jmethodID JavaUnoObject::_unoFloatArrayFactoryMethod_;
jclass JavaUnoObject::_unoIntArrayClass_;
jmethodID JavaUnoObject::_unoIntArrayFactoryMethod_;
jclass JavaUnoObject::_unoLongArrayClass_;
jmethodID JavaUnoObject::_unoLongArrayFactoryMethod_;
jclass JavaUnoObject::_unoObjectArrayClass_;
jmethodID JavaUnoObject::_unoObjectArrayFactoryMethod_;
jclass JavaUnoObject::_unoObjectClass_;
jmethodID JavaUnoObject::_unoObjectConstructor_;
jmethodID JavaUnoObject::_unoObjectGetRetainedUnoPtr_;
jclass JavaUnoObject::_unoShortArrayClass_;
jmethodID JavaUnoObject::_unoShortArrayFactoryMethod_;
jclass JavaUnoObject::_unoStringArrayClass_;
jmethodID JavaUnoObject::_unoStringArrayFactoryMethod_;

// public static Android.Base.Primitives.ujobject Box(bool[] unoArray) [static] :156
jobject JavaUnoObject::Box(uArray* unoArray)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject", "Box(bool[])");

    if (unoArray == NULL)
        return ::g::Android::Base::Primitives::ujobject::Null();

    JavaUnoObject::EnsureInitialized();
    uRetain(unoArray);
    int64_t longPtr = (int64_t)unoArray;
    jobject boxed = ::g::Android::Base::JNI::GetEnvPtr()->CallStaticObjectMethod(JavaUnoObject::_unoBoolArrayClass_,JavaUnoObject::_unoBoolArrayFactoryMethod_,longPtr);
    ::g::Android::Base::JNI::CheckException();
    return boxed;
}

// public static Android.Base.Primitives.ujobject Box(byte[] unoArray) [static] :145
jobject JavaUnoObject::Box1(uArray* unoArray)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject", "Box(byte[])");

    if (unoArray == NULL)
        return ::g::Android::Base::Primitives::ujobject::Null();

    JavaUnoObject::EnsureInitialized();
    uRetain(unoArray);
    int64_t longPtr = (int64_t)unoArray;
    jobject boxed = ::g::Android::Base::JNI::GetEnvPtr()->CallStaticObjectMethod(JavaUnoObject::_unoByteArrayClass_,JavaUnoObject::_unoByteArrayFactoryMethod_,longPtr,true);
    ::g::Android::Base::JNI::CheckException();
    return boxed;
}

// public static Android.Base.Primitives.ujobject Box(double[] unoArray) [static] :211
jobject JavaUnoObject::Box2(uArray* unoArray)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject", "Box(double[])");

    if (unoArray == NULL)
        return ::g::Android::Base::Primitives::ujobject::Null();

    JavaUnoObject::EnsureInitialized();
    uRetain(unoArray);
    int64_t longPtr = (int64_t)unoArray;
    jobject boxed = ::g::Android::Base::JNI::GetEnvPtr()->CallStaticObjectMethod(JavaUnoObject::_unoDoubleArrayClass_,JavaUnoObject::_unoDoubleArrayFactoryMethod_,longPtr);
    ::g::Android::Base::JNI::CheckException();
    return boxed;
}

// public static Android.Base.Primitives.ujobject Box(float[] unoArray) [static] :200
jobject JavaUnoObject::Box3(uArray* unoArray)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject", "Box(float[])");

    if (unoArray == NULL)
        return ::g::Android::Base::Primitives::ujobject::Null();

    JavaUnoObject::EnsureInitialized();
    uRetain(unoArray);
    int64_t longPtr = (int64_t)unoArray;
    jobject boxed = ::g::Android::Base::JNI::GetEnvPtr()->CallStaticObjectMethod(JavaUnoObject::_unoFloatArrayClass_,JavaUnoObject::_unoFloatArrayFactoryMethod_,longPtr);
    ::g::Android::Base::JNI::CheckException();
    return boxed;
}

// public static Android.Base.Primitives.ujobject Box(int[] unoArray) [static] :178
jobject JavaUnoObject::Box4(uArray* unoArray)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject", "Box(int[])");

    if (unoArray == NULL)
        return ::g::Android::Base::Primitives::ujobject::Null();

    JavaUnoObject::EnsureInitialized();
    uRetain(unoArray);
    int64_t longPtr = (int64_t)unoArray;
    jobject boxed = ::g::Android::Base::JNI::GetEnvPtr()->CallStaticObjectMethod(JavaUnoObject::_unoIntArrayClass_,JavaUnoObject::_unoIntArrayFactoryMethod_,longPtr);
    ::g::Android::Base::JNI::CheckException();
    return boxed;
}

// public static Android.Base.Primitives.ujobject Box(long[] unoArray) [static] :189
jobject JavaUnoObject::Box5(uArray* unoArray)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject", "Box(long[])");

    if (unoArray == NULL)
        return ::g::Android::Base::Primitives::ujobject::Null();

    JavaUnoObject::EnsureInitialized();
    uRetain(unoArray);
    int64_t longPtr = (int64_t)unoArray;
    jobject boxed = ::g::Android::Base::JNI::GetEnvPtr()->CallStaticObjectMethod(JavaUnoObject::_unoLongArrayClass_,JavaUnoObject::_unoLongArrayFactoryMethod_,longPtr);
    ::g::Android::Base::JNI::CheckException();
    return boxed;
}

// public static Android.Base.Primitives.ujobject Box(object unoObject) [static] :123
jobject JavaUnoObject::Box6(uObject* unoObject)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject", "Box(object)");

    if (unoObject == NULL)
        return ::g::Android::Base::Primitives::ujobject::Null();

    JavaUnoObject::EnsureInitialized();
    uRetain(unoObject);
    int64_t longPtr = (int64_t)unoObject;
    jobject boxed = ::g::Android::Base::JNI::GetEnvPtr()->NewObject(JavaUnoObject::_unoObjectClass_,JavaUnoObject::_unoObjectConstructor_,longPtr);
    ::g::Android::Base::JNI::CheckException();
    return boxed;
}

// public static Android.Base.Primitives.ujobject Box(object[] unoArray) [static] :233
jobject JavaUnoObject::Box7(uArray* unoArray)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject", "Box(object[])");

    if (unoArray == NULL)
        return ::g::Android::Base::Primitives::ujobject::Null();

    JavaUnoObject::EnsureInitialized();
    uRetain(unoArray);
    int64_t longPtr = (int64_t)unoArray;
    jobject boxed = ::g::Android::Base::JNI::GetEnvPtr()->CallStaticObjectMethod(JavaUnoObject::_unoObjectArrayClass_,JavaUnoObject::_unoObjectArrayFactoryMethod_,longPtr);
    ::g::Android::Base::JNI::CheckException();
    return boxed;
}

// public static Android.Base.Primitives.ujobject Box(sbyte[] unoArray) [static] :134
jobject JavaUnoObject::Box8(uArray* unoArray)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject", "Box(sbyte[])");

    if (unoArray == NULL)
        return ::g::Android::Base::Primitives::ujobject::Null();

    JavaUnoObject::EnsureInitialized();
    uRetain(unoArray);
    int64_t longPtr = (int64_t)unoArray;
    jobject boxed = ::g::Android::Base::JNI::GetEnvPtr()->CallStaticObjectMethod(JavaUnoObject::_unoByteArrayClass_,JavaUnoObject::_unoByteArrayFactoryMethod_,longPtr,false);
    ::g::Android::Base::JNI::CheckException();
    return boxed;
}

// public static Android.Base.Primitives.ujobject Box(short[] unoArray) [static] :167
jobject JavaUnoObject::Box9(uArray* unoArray)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject", "Box(short[])");

    if (unoArray == NULL)
        return ::g::Android::Base::Primitives::ujobject::Null();

    JavaUnoObject::EnsureInitialized();
    uRetain(unoArray);
    int64_t longPtr = (int64_t)unoArray;
    jobject boxed = ::g::Android::Base::JNI::GetEnvPtr()->CallStaticObjectMethod(JavaUnoObject::_unoShortArrayClass_,JavaUnoObject::_unoShortArrayFactoryMethod_,longPtr);
    ::g::Android::Base::JNI::CheckException();
    return boxed;
}

// public static Android.Base.Primitives.ujobject Box(string[] unoArray) [static] :222
jobject JavaUnoObject::Box10(uArray* unoArray)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject", "Box(string[])");

    if (unoArray == NULL)
        return ::g::Android::Base::Primitives::ujobject::Null();

    JavaUnoObject::EnsureInitialized();
    uRetain(unoArray);
    int64_t longPtr = (int64_t)unoArray;
    jobject boxed = ::g::Android::Base::JNI::GetEnvPtr()->CallStaticObjectMethod(JavaUnoObject::_unoStringArrayClass_,JavaUnoObject::_unoStringArrayFactoryMethod_,longPtr);
    ::g::Android::Base::JNI::CheckException();
    return boxed;
}

// public static Android.Base.Primitives.ujobject BoxDelegate(object delegateObj, Android.Base.Primitives.ConstCharPtr javaClassName) [static] :244
jobject JavaUnoObject::BoxDelegate(uObject* delegateObj, const char* javaClassName)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject", "BoxDelegate(object,Android.Base.Primitives.ConstCharPtr)");

    if (delegateObj == NULL)
        return ::g::Android::Base::Primitives::ujobject::Null();

    JavaUnoObject::EnsureInitialized();
    jclass delegateJavaClass = ::g::Android::Base::JNI::LoadClass(::g::Android::Base::JNI::GetEnvPtr(), javaClassName);
    jmethodID constructor = ::g::Android::Base::JNI::GetMethodID(JavaUnoObject::_unoObjectArrayClass_, ::STRINGS[2/*"<init>"*/], ::STRINGS[3/*"(J)V"*/]);
    uRetain(delegateObj);
    int64_t longPtr = (int64_t)delegateObj;
    jobject boxed = ::g::Android::Base::JNI::GetEnvPtr()->NewObject(delegateJavaClass,constructor,longPtr);
    ::g::Android::Base::JNI::DeleteLocalRef(delegateJavaClass);
    ::g::Android::Base::JNI::CheckException();
    return boxed;
}

// private static void EnsureInitialized() [static] :78
void JavaUnoObject::EnsureInitialized()
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject", "EnsureInitialized()");

    if (uEnterCriticalIfNull(&JavaUnoObject::_unoObjectClass_))
    {
        JavaUnoObject::_unoObjectClass_ = ::g::Android::Base::JNI::NewGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[4/*"com/uno/Uno...*/], false));
        JavaUnoObject::_unoObjectConstructor_ = ::g::Android::Base::JNI::GetMethodID(JavaUnoObject::_unoObjectClass_, ::STRINGS[2/*"<init>"*/], ::STRINGS[3/*"(J)V"*/]);
        JavaUnoObject::_unoObjectGetRetainedUnoPtr_ = ::g::Android::Base::JNI::GetMethodID(JavaUnoObject::_unoObjectClass_, ::STRINGS[5/*"_GetRetaine...*/], ::STRINGS[6/*"()J"*/]);
        JavaUnoObject::_unoBoolArrayClass_ = ::g::Android::Base::JNI::NewGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[7/*"com/uno/Boo...*/], false));
        JavaUnoObject::_unoBoolArrayFactoryMethod_ = ::g::Android::Base::JNI::GetStaticMethodID(JavaUnoObject::_unoBoolArrayClass_, ::STRINGS[8/*"InitFromUno...*/], ::STRINGS[9/*"(J)Lcom/uno...*/]);
        JavaUnoObject::_unoByteArrayClass_ = ::g::Android::Base::JNI::NewGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[10/*"com/uno/Byt...*/], false));
        JavaUnoObject::_unoByteArrayFactoryMethod_ = ::g::Android::Base::JNI::GetStaticMethodID(JavaUnoObject::_unoByteArrayClass_, ::STRINGS[8/*"InitFromUno...*/], ::STRINGS[11/*"(JZ)Lcom/un...*/]);
        JavaUnoObject::_unoShortArrayClass_ = ::g::Android::Base::JNI::NewGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[12/*"com/uno/Sho...*/], false));
        JavaUnoObject::_unoShortArrayFactoryMethod_ = ::g::Android::Base::JNI::GetStaticMethodID(JavaUnoObject::_unoShortArrayClass_, ::STRINGS[8/*"InitFromUno...*/], ::STRINGS[13/*"(J)Lcom/uno...*/]);
        JavaUnoObject::_unoIntArrayClass_ = ::g::Android::Base::JNI::NewGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[14/*"com/uno/Int...*/], false));
        JavaUnoObject::_unoIntArrayFactoryMethod_ = ::g::Android::Base::JNI::GetStaticMethodID(JavaUnoObject::_unoIntArrayClass_, ::STRINGS[8/*"InitFromUno...*/], ::STRINGS[15/*"(J)Lcom/uno...*/]);
        JavaUnoObject::_unoLongArrayClass_ = ::g::Android::Base::JNI::NewGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[16/*"com/uno/Lon...*/], false));
        JavaUnoObject::_unoLongArrayFactoryMethod_ = ::g::Android::Base::JNI::GetStaticMethodID(JavaUnoObject::_unoLongArrayClass_, ::STRINGS[8/*"InitFromUno...*/], ::STRINGS[17/*"(J)Lcom/uno...*/]);
        JavaUnoObject::_unoFloatArrayClass_ = ::g::Android::Base::JNI::NewGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[18/*"com/uno/Flo...*/], false));
        JavaUnoObject::_unoFloatArrayFactoryMethod_ = ::g::Android::Base::JNI::GetStaticMethodID(JavaUnoObject::_unoFloatArrayClass_, ::STRINGS[8/*"InitFromUno...*/], ::STRINGS[19/*"(J)Lcom/uno...*/]);
        JavaUnoObject::_unoDoubleArrayClass_ = ::g::Android::Base::JNI::NewGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[20/*"com/uno/Dou...*/], false));
        JavaUnoObject::_unoDoubleArrayFactoryMethod_ = ::g::Android::Base::JNI::GetStaticMethodID(JavaUnoObject::_unoDoubleArrayClass_, ::STRINGS[8/*"InitFromUno...*/], ::STRINGS[21/*"(J)Lcom/uno...*/]);
        JavaUnoObject::_unoStringArrayClass_ = ::g::Android::Base::JNI::NewGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[22/*"com/uno/Str...*/], false));
        JavaUnoObject::_unoStringArrayFactoryMethod_ = ::g::Android::Base::JNI::GetStaticMethodID(JavaUnoObject::_unoStringArrayClass_, ::STRINGS[8/*"InitFromUno...*/], ::STRINGS[23/*"(J)Lcom/uno...*/]);
        JavaUnoObject::_unoObjectArrayClass_ = ::g::Android::Base::JNI::NewGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[24/*"com/uno/Obj...*/], false));
        JavaUnoObject::_unoObjectArrayFactoryMethod_ = ::g::Android::Base::JNI::GetStaticMethodID(JavaUnoObject::_unoObjectArrayClass_, ::STRINGS[8/*"InitFromUno...*/], ::STRINGS[25/*"(J)Lcom/uno...*/]);
        JNINativeMethod nativeFunc = {(char* const)"Finalize", (char* const)"(J)V", (void *)&__JavaUnoObject_Finalizer};
        int attached = ::g::Android::Base::JNI::GetEnvPtr()->RegisterNatives(JavaUnoObject::_unoObjectClass_, &nativeFunc, 1);

        if (attached < 0)
            U_THROW(::g::Uno::Exception::New2(::STRINGS[26/*"Could not r...*/]));

        uExitCritical();;
    }
}

// public static object UnBox(Android.Base.Primitives.ujobject javaObject) [static] :261
uObject* JavaUnoObject::UnBox(jobject javaObject)
{
    if (::g::Android::Base::JNI::IsSameObject(javaObject, ::g::Android::Base::Primitives::ujobject::Null()))
        return NULL;

    int64_t longPtr = (int64_t)::g::Android::Base::JNI::GetEnvPtr()->CallLongMethod(javaObject,JavaUnoObject::_unoObjectGetRetainedUnoPtr_);
    ::g::Android::Base::JNI::CheckException();
    return (uObject*)longPtr;
}

// public static object UnBoxFreeingLocalRef(Android.Base.Primitives.ujobject javaObject) [static] :269
uObject* JavaUnoObject::UnBoxFreeingLocalRef(jobject javaObject)
{
    if (::g::Android::Base::JNI::IsSameObject(javaObject, ::g::Android::Base::Primitives::ujobject::Null()))
        return NULL;

    int64_t longPtr = (int64_t)::g::Android::Base::JNI::GetEnvPtr()->CallLongMethod(javaObject,JavaUnoObject::_unoObjectGetRetainedUnoPtr_);
    ::g::Android::Base::JNI::CheckException();

    if (::g::Android::Base::JNI::GetRefType1(javaObject) == 1)
        ::g::Android::Base::JNI::DeleteLocalRef1(javaObject);

    return (uObject*)longPtr;
}
// }

}}}}}} // ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android

// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.Platform.AppEvents.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.InterApp.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.Platform.StatusB-487afe75.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Platform.SystemU-2024c55a.h>
#include <Fuse.Platform.SystemU-a6dfc5d1.h>
#include <Fuse.Platform.SystemUI.h>
#include <Fuse.Platform.SystemUIID.h>
#include <Fuse.Platform.SysUIState.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.Applicat-bf686309.h>
#include <Uno.Platform.ApplicationState.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.Platform.EventSou-afb2ad40.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
#include <Uno/Graphics/GLHelper.h>
#include <Uno/JNIHelper.h>
static uType* TYPES[7];

namespace g{
namespace Fuse{
namespace Platform{

// /Users/martinmorales/Library/Application Support/Fusetools/Packages/Fuse.Platform/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// internal static class AppEvents :15
// {
// static AppEvents() :19
static void AppEvents__cctor__fn(uType* __type)
{
    ::g::Uno::Platform::CoreApp::add_ReceivedLowMemoryWarning(uDelegate::New(::TYPES[0/*Uno.EventHandler*/], (void*)AppEvents__OnLowMemoryWarning_fn));
}

static void AppEvents_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::EventHandler_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::TYPES[1/*Uno.Action*/], (uintptr_t)&::g::Fuse::Platform::AppEvents::LowMemoryWarning1_, uFieldFlagsStatic);
}

uClassType* AppEvents_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Platform.AppEvents", options);
    type->fp_build_ = AppEvents_build;
    type->fp_cctor_ = AppEvents__cctor__fn;
    return type;
}

// internal static generated void add_LowMemoryWarning(Uno.Action value) :17
void AppEvents__add_LowMemoryWarning_fn(uDelegate* value)
{
    AppEvents::add_LowMemoryWarning(value);
}

// internal static generated void remove_LowMemoryWarning(Uno.Action value) :17
void AppEvents__remove_LowMemoryWarning_fn(uDelegate* value)
{
    AppEvents::remove_LowMemoryWarning(value);
}

// private static void OnLowMemoryWarning(object s, object a) :24
void AppEvents__OnLowMemoryWarning_fn(uObject* s, uObject* a)
{
    AppEvents::OnLowMemoryWarning(s, a);
}

uSStrong<uDelegate*> AppEvents::LowMemoryWarning1_;

// private static void OnLowMemoryWarning(object s, object a) [static] :24
void AppEvents::OnLowMemoryWarning(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Platform.AppEvents", "OnLowMemoryWarning(object,object)");
    AppEvents_typeof()->Init();
    uDelegate* handler = AppEvents::LowMemoryWarning1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid();
}

// internal static generated void add_LowMemoryWarning(Uno.Action value) [static] :17
void AppEvents::add_LowMemoryWarning(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.AppEvents", "add_LowMemoryWarning(Uno.Action)");
    AppEvents_typeof()->Init();
    AppEvents::LowMemoryWarning1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(AppEvents::LowMemoryWarning1(), value), ::TYPES[1/*Uno.Action*/]);
}

// internal static generated void remove_LowMemoryWarning(Uno.Action value) [static] :17
void AppEvents::remove_LowMemoryWarning(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.AppEvents", "remove_LowMemoryWarning(Uno.Action)");
    AppEvents_typeof()->Init();
    AppEvents::LowMemoryWarning1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(AppEvents::LowMemoryWarning1(), value), ::TYPES[1/*Uno.Action*/]);
}
// }

// /Users/martinmorales/Library/Application Support/Fusetools/Packages/Fuse.Platform/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public enum ApplicationState :72
uEnumType* ApplicationState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Platform.ApplicationState", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Uninitialized", 0LL,
        "Background", 1LL,
        "Foreground", 2LL,
        "Interactive", 3LL,
        "Terminating", -1LL);
    return type;
}

// /Users/martinmorales/Library/Application Support/Fusetools/Packages/Fuse.Platform/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public static class InterApp :44
// {
// static InterApp() :49
static void InterApp__cctor__fn(uType* __type)
{
    ::g::Uno::Platform::EventSources::InterAppInvoke::add_ReceivedURI(uDelegate::New(::TYPES[2/*Uno.EventHandler<string>*/], (void*)InterApp__OnReceivedURI_fn));
}

static void InterApp_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[3/*Uno.Action<string>*/], (uintptr_t)&::g::Fuse::Platform::InterApp::ReceivedURI1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("add_ReceivedURI", NULL, (void*)InterApp__add_ReceivedURI_fn, 0, true, uVoid_typeof(), 1, ::TYPES[3/*Uno.Action<string>*/]),
        new uFunction("remove_ReceivedURI", NULL, (void*)InterApp__remove_ReceivedURI_fn, 0, true, uVoid_typeof(), 1, ::TYPES[3/*Uno.Action<string>*/]));
}

uClassType* InterApp_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Platform.InterApp", options);
    type->fp_build_ = InterApp_build;
    type->fp_cctor_ = InterApp__cctor__fn;
    return type;
}

// private static void OnReceivedURI(object sender, string uri) :54
void InterApp__OnReceivedURI_fn(uObject* sender, uString* uri)
{
    InterApp::OnReceivedURI(sender, uri);
}

// public static generated void add_ReceivedURI(Uno.Action<string> value) :47
void InterApp__add_ReceivedURI_fn(uDelegate* value)
{
    InterApp::add_ReceivedURI(value);
}

// public static generated void remove_ReceivedURI(Uno.Action<string> value) :47
void InterApp__remove_ReceivedURI_fn(uDelegate* value)
{
    InterApp::remove_ReceivedURI(value);
}

uSStrong<uDelegate*> InterApp::ReceivedURI1_;

// private static void OnReceivedURI(object sender, string uri) [static] :54
void InterApp::OnReceivedURI(uObject* sender, uString* uri)
{
    uStackFrame __("Fuse.Platform.InterApp", "OnReceivedURI(object,string)");
    InterApp_typeof()->Init();
    uDelegate* handler = InterApp::ReceivedURI1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uri);
}

// public static generated void add_ReceivedURI(Uno.Action<string> value) [static] :47
void InterApp::add_ReceivedURI(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.InterApp", "add_ReceivedURI(Uno.Action<string>)");
    InterApp_typeof()->Init();
    InterApp::ReceivedURI1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(InterApp::ReceivedURI1(), value), ::TYPES[3/*Uno.Action<string>*/]);
}

// public static generated void remove_ReceivedURI(Uno.Action<string> value) [static] :47
void InterApp::remove_ReceivedURI(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.InterApp", "remove_ReceivedURI(Uno.Action<string>)");
    InterApp_typeof()->Init();
    InterApp::ReceivedURI1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(InterApp::ReceivedURI1(), value), ::TYPES[3/*Uno.Action<string>*/]);
}
// }

// /Users/martinmorales/Library/Application Support/Fusetools/Packages/Fuse.Platform/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public static class Lifecycle :89
// {
// static Lifecycle() :101
static void Lifecycle__cctor__fn(uType* __type)
{
    ::g::Uno::Platform::CoreApp::add_Started(uDelegate::New(::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnStarted_fn));
    ::g::Uno::Platform::CoreApp::add_EnteringForeground(uDelegate::New(::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringForeground_fn));
    ::g::Uno::Platform::CoreApp::add_EnteringInteractive(uDelegate::New(::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringInteractive_fn));
    ::g::Uno::Platform::CoreApp::add_ExitedInteractive(uDelegate::New(::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnExitedInteractive_fn));
    ::g::Uno::Platform::CoreApp::add_EnteringBackground(uDelegate::New(::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringBackground_fn));
    ::g::Uno::Platform::CoreApp::add_Terminating(uDelegate::New(::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnTerminating_fn));
}

static void Lifecycle_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Platform::ApplicationStateTransitionHandler_typeof();
    ::TYPES[5] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&::g::Fuse::Platform::Lifecycle::EnteringBackground1_, uFieldFlagsStatic,
        ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&::g::Fuse::Platform::Lifecycle::EnteringForeground1_, uFieldFlagsStatic,
        ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&::g::Fuse::Platform::Lifecycle::EnteringInteractive1_, uFieldFlagsStatic,
        ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&::g::Fuse::Platform::Lifecycle::ExitedInteractive1_, uFieldFlagsStatic,
        ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&::g::Fuse::Platform::Lifecycle::Started1_, uFieldFlagsStatic,
        ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&::g::Fuse::Platform::Lifecycle::Terminating1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(13,
        new uFunction("add_EnteringBackground", NULL, (void*)Lifecycle__add_EnteringBackground_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("remove_EnteringBackground", NULL, (void*)Lifecycle__remove_EnteringBackground_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("add_EnteringForeground", NULL, (void*)Lifecycle__add_EnteringForeground_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("remove_EnteringForeground", NULL, (void*)Lifecycle__remove_EnteringForeground_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("add_EnteringInteractive", NULL, (void*)Lifecycle__add_EnteringInteractive_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("remove_EnteringInteractive", NULL, (void*)Lifecycle__remove_EnteringInteractive_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("add_ExitedInteractive", NULL, (void*)Lifecycle__add_ExitedInteractive_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("remove_ExitedInteractive", NULL, (void*)Lifecycle__remove_ExitedInteractive_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("add_Started", NULL, (void*)Lifecycle__add_Started_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("remove_Started", NULL, (void*)Lifecycle__remove_Started_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("get_State", NULL, (void*)Lifecycle__get_State_fn, 0, true, ::g::Fuse::Platform::ApplicationState_typeof(), 0),
        new uFunction("add_Terminating", NULL, (void*)Lifecycle__add_Terminating_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("remove_Terminating", NULL, (void*)Lifecycle__remove_Terminating_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]));
}

uClassType* Lifecycle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Platform.Lifecycle", options);
    type->fp_build_ = Lifecycle_build;
    type->fp_cctor_ = Lifecycle__cctor__fn;
    return type;
}

// public static generated void add_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value) :98
void Lifecycle__add_EnteringBackground_fn(uDelegate* value)
{
    Lifecycle::add_EnteringBackground(value);
}

// public static generated void remove_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value) :98
void Lifecycle__remove_EnteringBackground_fn(uDelegate* value)
{
    Lifecycle::remove_EnteringBackground(value);
}

// public static generated void add_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value) :95
void Lifecycle__add_EnteringForeground_fn(uDelegate* value)
{
    Lifecycle::add_EnteringForeground(value);
}

// public static generated void remove_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value) :95
void Lifecycle__remove_EnteringForeground_fn(uDelegate* value)
{
    Lifecycle::remove_EnteringForeground(value);
}

// public static generated void add_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) :96
void Lifecycle__add_EnteringInteractive_fn(uDelegate* value)
{
    Lifecycle::add_EnteringInteractive(value);
}

// public static generated void remove_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) :96
void Lifecycle__remove_EnteringInteractive_fn(uDelegate* value)
{
    Lifecycle::remove_EnteringInteractive(value);
}

// public static generated void add_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) :97
void Lifecycle__add_ExitedInteractive_fn(uDelegate* value)
{
    Lifecycle::add_ExitedInteractive(value);
}

// public static generated void remove_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) :97
void Lifecycle__remove_ExitedInteractive_fn(uDelegate* value)
{
    Lifecycle::remove_ExitedInteractive(value);
}

// private static void OnEnteringBackground(Uno.Platform.ApplicationState newState) :139
void Lifecycle__OnEnteringBackground_fn(int* newState)
{
    Lifecycle::OnEnteringBackground(*newState);
}

// private static void OnEnteringForeground(Uno.Platform.ApplicationState newState) :118
void Lifecycle__OnEnteringForeground_fn(int* newState)
{
    Lifecycle::OnEnteringForeground(*newState);
}

// private static void OnEnteringInteractive(Uno.Platform.ApplicationState newState) :125
void Lifecycle__OnEnteringInteractive_fn(int* newState)
{
    Lifecycle::OnEnteringInteractive(*newState);
}

// private static void OnExitedInteractive(Uno.Platform.ApplicationState newState) :132
void Lifecycle__OnExitedInteractive_fn(int* newState)
{
    Lifecycle::OnExitedInteractive(*newState);
}

// private static void OnStarted(Uno.Platform.ApplicationState newState) :111
void Lifecycle__OnStarted_fn(int* newState)
{
    Lifecycle::OnStarted(*newState);
}

// private static void OnTerminating(Uno.Platform.ApplicationState newState) :146
void Lifecycle__OnTerminating_fn(int* newState)
{
    Lifecycle::OnTerminating(*newState);
}

// public static generated void add_Started(Uno.Action<Fuse.Platform.ApplicationState> value) :94
void Lifecycle__add_Started_fn(uDelegate* value)
{
    Lifecycle::add_Started(value);
}

// public static generated void remove_Started(Uno.Action<Fuse.Platform.ApplicationState> value) :94
void Lifecycle__remove_Started_fn(uDelegate* value)
{
    Lifecycle::remove_Started(value);
}

// public static Fuse.Platform.ApplicationState get_State() :92
void Lifecycle__get_State_fn(int* __retval)
{
    *__retval = Lifecycle::State();
}

// public static generated void add_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value) :99
void Lifecycle__add_Terminating_fn(uDelegate* value)
{
    Lifecycle::add_Terminating(value);
}

// public static generated void remove_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value) :99
void Lifecycle__remove_Terminating_fn(uDelegate* value)
{
    Lifecycle::remove_Terminating(value);
}

uSStrong<uDelegate*> Lifecycle::EnteringBackground1_;
uSStrong<uDelegate*> Lifecycle::EnteringForeground1_;
uSStrong<uDelegate*> Lifecycle::EnteringInteractive1_;
uSStrong<uDelegate*> Lifecycle::ExitedInteractive1_;
uSStrong<uDelegate*> Lifecycle::Started1_;
uSStrong<uDelegate*> Lifecycle::Terminating1_;

// private static void OnEnteringBackground(Uno.Platform.ApplicationState newState) [static] :139
void Lifecycle::OnEnteringBackground(int newState)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "OnEnteringBackground(Uno.Platform.ApplicationState)");
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::EnteringBackground1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// private static void OnEnteringForeground(Uno.Platform.ApplicationState newState) [static] :118
void Lifecycle::OnEnteringForeground(int newState)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "OnEnteringForeground(Uno.Platform.ApplicationState)");
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::EnteringForeground1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// private static void OnEnteringInteractive(Uno.Platform.ApplicationState newState) [static] :125
void Lifecycle::OnEnteringInteractive(int newState)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "OnEnteringInteractive(Uno.Platform.ApplicationState)");
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::EnteringInteractive1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// private static void OnExitedInteractive(Uno.Platform.ApplicationState newState) [static] :132
void Lifecycle::OnExitedInteractive(int newState)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "OnExitedInteractive(Uno.Platform.ApplicationState)");
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::ExitedInteractive1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// private static void OnStarted(Uno.Platform.ApplicationState newState) [static] :111
void Lifecycle::OnStarted(int newState)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "OnStarted(Uno.Platform.ApplicationState)");
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::Started1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// private static void OnTerminating(Uno.Platform.ApplicationState newState) [static] :146
void Lifecycle::OnTerminating(int newState)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "OnTerminating(Uno.Platform.ApplicationState)");
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::Terminating1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// public static Fuse.Platform.ApplicationState get_State() [static] :92
int Lifecycle::State()
{
    Lifecycle_typeof()->Init();
    return ::g::Uno::Platform::CoreApp::State();
}

// public static generated void add_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :98
void Lifecycle::add_EnteringBackground(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "add_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringBackground1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::EnteringBackground1(), value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :98
void Lifecycle::remove_EnteringBackground(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "remove_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringBackground1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::EnteringBackground1(), value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :95
void Lifecycle::add_EnteringForeground(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "add_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringForeground1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::EnteringForeground1(), value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :95
void Lifecycle::remove_EnteringForeground(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "remove_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringForeground1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::EnteringForeground1(), value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :96
void Lifecycle::add_EnteringInteractive(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "add_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringInteractive1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::EnteringInteractive1(), value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :96
void Lifecycle::remove_EnteringInteractive(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "remove_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringInteractive1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::EnteringInteractive1(), value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :97
void Lifecycle::add_ExitedInteractive(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "add_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::ExitedInteractive1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::ExitedInteractive1(), value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :97
void Lifecycle::remove_ExitedInteractive(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "remove_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::ExitedInteractive1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::ExitedInteractive1(), value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_Started(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :94
void Lifecycle::add_Started(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "add_Started(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::Started1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::Started1(), value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_Started(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :94
void Lifecycle::remove_Started(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "remove_Started(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::Started1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::Started1(), value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :99
void Lifecycle::add_Terminating(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "add_Terminating(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::Terminating1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::Terminating1(), value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :99
void Lifecycle::remove_Terminating(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "remove_Terminating(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::Terminating1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::Terminating1(), value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}
// }

// /Users/martinmorales/Library/Application Support/Fusetools/Packages/Fuse.Platform/1.0.2/ios/$.uno
// -------------------------------------------------------------------------------------------------

// public enum StatusBarAnimation :16
uEnumType* StatusBarAnimation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Platform.StatusBarAnimation", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Fade", 1LL,
        "Slide", 2LL);
    return type;
}

// /Users/martinmorales/Library/Application Support/Fusetools/Packages/Fuse.Platform/1.0.2/ios/$.uno
// -------------------------------------------------------------------------------------------------

// public enum StatusBarStyle :10
uEnumType* StatusBarStyle_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Platform.StatusBarStyle", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Dark", 0LL,
        "Light", 1LL);
    return type;
}

// /Users/martinmorales/Library/Application Support/Fusetools/Packages/Fuse.Platform/1.0.2/android/$.uno
// -----------------------------------------------------------------------------------------------------

// public static extern class SystemUI :20
// {
// static SystemUI() :20
static void SystemUI__cctor__fn(uType* __type)
{
    SystemUI::firstSizing_ = true;
}

static void SystemUI_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Fuse::Platform::SystemUIWillResizeEventArgs_typeof(), NULL);
    ::TYPES[0] = ::g::Uno::EventHandler_typeof();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Platform::SystemUI::_bottomFrameSize_, uFieldFlagsStatic,
        ::g::Uno::Rect_typeof(), (uintptr_t)&::g::Fuse::Platform::SystemUI::_frame_, uFieldFlagsStatic,
        ::g::Java::Object_typeof(), (uintptr_t)&::g::Fuse::Platform::SystemUI::_keyboardListener_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Platform::SystemUI::_systemUIState_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Platform::SystemUI::_topFrameSize_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Platform::SystemUI::cachedOpenSize_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Platform::SystemUI::firstSizing_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Platform::SystemUI::hasCachedStatusBarSize_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Platform::SystemUI::keyboardVisible_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Platform::SystemUI::lastKeyboardHeight_, uFieldFlagsStatic,
        ::g::Java::Object_typeof(), (uintptr_t)&::g::Fuse::Platform::SystemUI::layoutAttachedTo_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Platform::SystemUI::realHeight_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Platform::SystemUI::realWidth_, uFieldFlagsStatic,
        ::g::Java::Object_typeof(), (uintptr_t)&::g::Fuse::Platform::SystemUI::RootLayout_, uFieldFlagsStatic,
        ::g::Java::Object_typeof(), (uintptr_t)&::g::Fuse::Platform::SystemUI::SuperLayout_, uFieldFlagsStatic,
        ::g::Uno::Rect_typeof(), (uintptr_t)&::g::Fuse::Platform::SystemUI::_BottomFrame_, uFieldFlagsStatic,
        ::g::Uno::Float_typeof(), (uintptr_t)&::g::Fuse::Platform::SystemUI::_Density_, uFieldFlagsStatic,
        ::TYPES[6/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/], (uintptr_t)&::g::Fuse::Platform::SystemUI::BottomFrameWillResize1_, uFieldFlagsStatic,
        ::TYPES[0/*Uno.EventHandler*/], (uintptr_t)&::g::Fuse::Platform::SystemUI::FrameChanged1_, uFieldFlagsStatic,
        ::TYPES[6/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/], (uintptr_t)&::g::Fuse::Platform::SystemUI::TopFrameWillResize1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(28,
        new uFunction("Attach", NULL, (void*)SystemUI__Attach_fn, 0, true, uVoid_typeof(), 1, ::g::Java::Object_typeof()),
        new uFunction("get_BottomFrame", NULL, (void*)SystemUI__get_BottomFrame_fn, 0, true, ::g::Uno::Rect_typeof(), 0),
        new uFunction("add_BottomFrameWillResize", NULL, (void*)SystemUI__add_BottomFrameWillResize_fn, 0, true, uVoid_typeof(), 1, ::TYPES[6/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/]),
        new uFunction("remove_BottomFrameWillResize", NULL, (void*)SystemUI__remove_BottomFrameWillResize_fn, 0, true, uVoid_typeof(), 1, ::TYPES[6/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/]),
        new uFunction("CalcRealSizes", NULL, (void*)SystemUI__CalcRealSizes_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("CompensateRootLayoutForSystemUI", NULL, (void*)SystemUI__CompensateRootLayoutForSystemUI_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("CreateLayouts", NULL, (void*)SystemUI__CreateLayouts_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("get_Density", NULL, (void*)SystemUI__get_Density_fn, 0, true, ::g::Uno::Float_typeof(), 0),
        new uFunction("Detach", NULL, (void*)SystemUI__Detach_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("get_Frame", NULL, (void*)SystemUI__get_Frame_fn, 0, true, ::g::Uno::Rect_typeof(), 0),
        new uFunction("add_FrameChanged", NULL, (void*)SystemUI__add_FrameChanged_fn, 0, true, uVoid_typeof(), 1, ::TYPES[0/*Uno.EventHandler*/]),
        new uFunction("remove_FrameChanged", NULL, (void*)SystemUI__remove_FrameChanged_fn, 0, true, uVoid_typeof(), 1, ::TYPES[0/*Uno.EventHandler*/]),
        new uFunction("GetDisplayMetrics", NULL, (void*)SystemUI__GetDisplayMetrics_fn, 0, true, ::g::Java::Object_typeof(), 0),
        new uFunction("GetRealDisplayHeight", NULL, (void*)SystemUI__GetRealDisplayHeight_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetRealDisplayWidth", NULL, (void*)SystemUI__GetRealDisplayWidth_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("HideStatusBar", NULL, (void*)SystemUI__HideStatusBar_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("get_IsBottomFrameVisible", NULL, (void*)SystemUI__get_IsBottomFrameVisible_fn, 0, true, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsTopFrameVisible", NULL, (void*)SystemUI__get_IsTopFrameVisible_fn, 0, true, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsTopFrameVisible", NULL, (void*)SystemUI__set_IsTopFrameVisible_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("OnCreate", NULL, (void*)SystemUI__OnCreate_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("ResendFrameSizes", NULL, (void*)SystemUI__ResendFrameSizes_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("get_RootView", NULL, (void*)SystemUI__get_RootView_fn, 0, true, ::g::Java::Object_typeof(), 0),
        new uFunction("set_RootView", NULL, (void*)SystemUI__set_RootView_fn, 0, true, uVoid_typeof(), 1, ::g::Java::Object_typeof()),
        new uFunction("ShowStatusBar", NULL, (void*)SystemUI__ShowStatusBar_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("get_TopFrame", NULL, (void*)SystemUI__get_TopFrame_fn, 0, true, ::g::Uno::Rect_typeof(), 0),
        new uFunction("add_TopFrameWillResize", NULL, (void*)SystemUI__add_TopFrameWillResize_fn, 0, true, uVoid_typeof(), 1, ::TYPES[6/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/]),
        new uFunction("remove_TopFrameWillResize", NULL, (void*)SystemUI__remove_TopFrameWillResize_fn, 0, true, uVoid_typeof(), 1, ::TYPES[6/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/]),
        new uFunction("UpdateStatusBar", NULL, (void*)SystemUI__UpdateStatusBar_fn, 0, true, uVoid_typeof(), 0));
}

uClassType* SystemUI_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 20;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Platform.SystemUI", options);
    type->fp_build_ = SystemUI_build;
    type->fp_cctor_ = SystemUI__cctor__fn;
    return type;
}

// private static float2 _GetRootDisplaySize() :631
void SystemUI___GetRootDisplaySize_fn(::g::Uno::Float2* __retval)
{
    *__retval = SystemUI::_GetRootDisplaySize();
}

// public static void Attach(Java.Object _layout) :492
void SystemUI__Attach_fn(::g::Java::Object* _layout)
{
    SystemUI::Attach(_layout);
}

// public static generated Uno.Rect get_BottomFrame() :26
void SystemUI__get_BottomFrame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::BottomFrame();
}

// private static generated void set_BottomFrame(Uno.Rect value) :26
void SystemUI__set_BottomFrame_fn(::g::Uno::Rect* value)
{
    SystemUI::BottomFrame(*value);
}

// public static generated void add_BottomFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) :23
void SystemUI__add_BottomFrameWillResize_fn(uDelegate* value)
{
    SystemUI::add_BottomFrameWillResize(value);
}

// public static generated void remove_BottomFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) :23
void SystemUI__remove_BottomFrameWillResize_fn(uDelegate* value)
{
    SystemUI::remove_BottomFrameWillResize(value);
}

// public static void CalcRealSizes() :322
void SystemUI__CalcRealSizes_fn()
{
    SystemUI::CalcRealSizes();
}

// public static void CompensateRootLayoutForSystemUI() :464
void SystemUI__CompensateRootLayoutForSystemUI_fn()
{
    SystemUI::CompensateRootLayoutForSystemUI();
}

// private static void cppOnBottomFrameChanged(int height) :565
void SystemUI__cppOnBottomFrameChanged_fn(int* height)
{
    SystemUI::cppOnBottomFrameChanged(*height);
}

// private static void cppOnConfigChanged() :415
void SystemUI__cppOnConfigChanged_fn()
{
    SystemUI::cppOnConfigChanged();
}

// private static void cppOnTopFrameChanged(int height) :596
void SystemUI__cppOnTopFrameChanged_fn(int* height)
{
    SystemUI::cppOnTopFrameChanged(*height);
}

// public static void CreateLayouts() :133
void SystemUI__CreateLayouts_fn()
{
    SystemUI::CreateLayouts();
}

// public static generated float get_Density() :46
void SystemUI__get_Density_fn(float* __retval)
{
    *__retval = SystemUI::Density();
}

// private static generated void set_Density(float value) :46
void SystemUI__set_Density_fn(float* value)
{
    SystemUI::Density(*value);
}

// public static void Detach() :501
void SystemUI__Detach_fn()
{
    SystemUI::Detach();
}

// private static void EnterFullscreen() :271
void SystemUI__EnterFullscreen_fn()
{
    SystemUI::EnterFullscreen();
}

// public static Uno.Rect get_Frame() :50
void SystemUI__get_Frame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::Frame();
}

// private static void set_Frame(Uno.Rect value) :51
void SystemUI__set_Frame_fn(::g::Uno::Rect* value)
{
    SystemUI::Frame(*value);
}

// public static generated void add_FrameChanged(Uno.EventHandler value) :61
void SystemUI__add_FrameChanged_fn(uDelegate* value)
{
    SystemUI::add_FrameChanged(value);
}

// public static generated void remove_FrameChanged(Uno.EventHandler value) :61
void SystemUI__remove_FrameChanged_fn(uDelegate* value)
{
    SystemUI::remove_FrameChanged(value);
}

// private static float GetDensity() :434
void SystemUI__GetDensity_fn(float* __retval)
{
    *__retval = SystemUI::GetDensity();
}

// public static Java.Object GetDisplayMetrics() :359
void SystemUI__GetDisplayMetrics_fn(::g::Java::Object** __retval)
{
    *__retval = SystemUI::GetDisplayMetrics();
}

// public static int GetRealDisplayHeight() :377
void SystemUI__GetRealDisplayHeight_fn(int* __retval)
{
    *__retval = SystemUI::GetRealDisplayHeight();
}

// public static int GetRealDisplayWidth() :371
void SystemUI__GetRealDisplayWidth_fn(int* __retval)
{
    *__retval = SystemUI::GetRealDisplayWidth();
}

// private static extern Uno.Rect GetStatusBarFrame() :296
void SystemUI__GetStatusBarFrame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::GetStatusBarFrame();
}

// private static float GetStatusBarHeight() :183
void SystemUI__GetStatusBarHeight_fn(float* __retval)
{
    *__retval = SystemUI::GetStatusBarHeight();
}

// private static int GetSuperLayoutHeight() :551
void SystemUI__GetSuperLayoutHeight_fn(int* __retval)
{
    *__retval = SystemUI::GetSuperLayoutHeight();
}

// private static void HideActionBar() :171
void SystemUI__HideActionBar_fn()
{
    SystemUI::HideActionBar();
}

// public static void HideStatusBar() :231
void SystemUI__HideStatusBar_fn()
{
    SystemUI::HideStatusBar();
}

// private static void HookOntoRawActivityEvents() :72
void SystemUI__HookOntoRawActivityEvents_fn()
{
    SystemUI::HookOntoRawActivityEvents();
}

// public static bool get_IsBottomFrameVisible() :166
void SystemUI__get_IsBottomFrameVisible_fn(bool* __retval)
{
    *__retval = SystemUI::IsBottomFrameVisible();
}

// public static bool get_IsTopFrameVisible() :152
void SystemUI__get_IsTopFrameVisible_fn(bool* __retval)
{
    *__retval = SystemUI::IsTopFrameVisible();
}

// public static void set_IsTopFrameVisible(bool value) :155
void SystemUI__set_IsTopFrameVisible_fn(bool* value)
{
    SystemUI::IsTopFrameVisible(*value);
}

// private static Java.Object MakePostV11LayoutChangeListener() :442
void SystemUI__MakePostV11LayoutChangeListener_fn(::g::Java::Object** __retval)
{
    *__retval = SystemUI::MakePostV11LayoutChangeListener();
}

// private static void OnConfigChanged() :107
void SystemUI__OnConfigChanged_fn()
{
    SystemUI::OnConfigChanged();
}

// public static void OnCreate() :113
void SystemUI__OnCreate_fn()
{
    SystemUI::OnCreate();
}

// private static void OnDestroy() :101
void SystemUI__OnDestroy_fn()
{
    SystemUI::OnDestroy();
}

// private static void OnFrameChanged() :62
void SystemUI__OnFrameChanged_fn()
{
    SystemUI::OnFrameChanged();
}

// private static void onHideKeyboard(int keyboardHeight, bool force) :540
void SystemUI__onHideKeyboard_fn(int* keyboardHeight, bool* force)
{
    SystemUI::onHideKeyboard(*keyboardHeight, *force);
}

// private static void OnPause() :89
void SystemUI__OnPause_fn()
{
    SystemUI::OnPause();
}

// private static void OnResume() :95
void SystemUI__OnResume_fn()
{
    SystemUI::OnResume();
}

// private static void onShowKeyboard(int keyboardHeight, bool force) :530
void SystemUI__onShowKeyboard_fn(int* keyboardHeight, bool* force)
{
    SystemUI::onShowKeyboard(*keyboardHeight, *force);
}

// private static void OnWillResize(Fuse.Platform.SystemUIWillResizeEventArgs args) :303
void SystemUI__OnWillResize_fn(::g::Fuse::Platform::SystemUIWillResizeEventArgs* args)
{
    SystemUI::OnWillResize(args);
}

// public static void ResendFrameSizes() :556
void SystemUI__ResendFrameSizes_fn()
{
    SystemUI::ResendFrameSizes();
}

// private static void ResetGeometry() :422
void SystemUI__ResetGeometry_fn()
{
    SystemUI::ResetGeometry();
}

// public static Java.Object get_RootView() :389
void SystemUI__get_RootView_fn(::g::Java::Object** __retval)
{
    *__retval = SystemUI::RootView();
}

// public static void set_RootView(Java.Object value) :390
void SystemUI__set_RootView_fn(::g::Java::Object* value)
{
    SystemUI::RootView(value);
}

// private static void SetAsRootView(Java.Object view) :394
void SystemUI__SetAsRootView_fn(::g::Java::Object* view)
{
    SystemUI::SetAsRootView(view);
}

// private static void SetFrame(Java.Object view, int originX, int originY, int height) :474
void SystemUI__SetFrame_fn(::g::Java::Object* view, int* originX, int* originY, int* height)
{
    SystemUI::SetFrame(view, *originX, *originY, *height);
}

// public static void ShowStatusBar() :208
void SystemUI__ShowStatusBar_fn()
{
    SystemUI::ShowStatusBar();
}

// public static Uno.Rect get_TopFrame() :25
void SystemUI__get_TopFrame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::TopFrame();
}

// public static generated void add_TopFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) :22
void SystemUI__add_TopFrameWillResize_fn(uDelegate* value)
{
    SystemUI::add_TopFrameWillResize(value);
}

// public static generated void remove_TopFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) :22
void SystemUI__remove_TopFrameWillResize_fn(uDelegate* value)
{
    SystemUI::remove_TopFrameWillResize(value);
}

// private static void unoOnGlobalLayout() :514
void SystemUI__unoOnGlobalLayout_fn()
{
    SystemUI::unoOnGlobalLayout();
}

// public static void UpdateStatusBar() :251
void SystemUI__UpdateStatusBar_fn()
{
    SystemUI::UpdateStatusBar();
}

int SystemUI::_bottomFrameSize_;
::g::Uno::Rect SystemUI::_frame_;
uSStrong< ::g::Java::Object*> SystemUI::_keyboardListener_;
int SystemUI::_systemUIState_;
int SystemUI::_topFrameSize_;
int SystemUI::cachedOpenSize_;
bool SystemUI::firstSizing_;
bool SystemUI::hasCachedStatusBarSize_;
bool SystemUI::keyboardVisible_;
int SystemUI::lastKeyboardHeight_;
uSStrong< ::g::Java::Object*> SystemUI::layoutAttachedTo_;
int SystemUI::realHeight_;
int SystemUI::realWidth_;
uSStrong< ::g::Java::Object*> SystemUI::RootLayout_;
uSStrong< ::g::Java::Object*> SystemUI::SuperLayout_;
::g::Uno::Rect SystemUI::_BottomFrame_;
float SystemUI::_Density_;
uSStrong<uDelegate*> SystemUI::BottomFrameWillResize1_;
uSStrong<uDelegate*> SystemUI::FrameChanged1_;
uSStrong<uDelegate*> SystemUI::TopFrameWillResize1_;

// private static float2 _GetRootDisplaySize() [static] :631
::g::Uno::Float2 SystemUI::_GetRootDisplaySize()
{
    SystemUI_typeof()->Init();
    float w = (float)SystemUI::GetRealDisplayWidth();
    float h = (float)SystemUI::GetRealDisplayHeight();
    return ::g::Uno::Float2__New2(w, h);
}

// public static void Attach(Java.Object _layout) [static] :492
void SystemUI::Attach(::g::Java::Object* _layout)
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Attach67", "(Ljava/lang/Object;)V");
        ::g::Java::Object* __u_layout=_layout;
        jobject ___layout = (__u_layout==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__u_layout, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,___layout);
        
        if (___layout!=NULL) { U_JNIVAR->DeleteLocalRef(___layout); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void CalcRealSizes() [static] :322
void SystemUI::CalcRealSizes()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CalcRealSizes70", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void CompensateRootLayoutForSystemUI() [static] :464
void SystemUI::CompensateRootLayoutForSystemUI()
{
    SystemUI_typeof()->Init();
    SystemUI::CalcRealSizes();

    if (SystemUI::RootLayout() != NULL)
    {
        int compensation = -((int)SystemUI::GetStatusBarHeight());
        SystemUI::SetFrame(SystemUI::RootLayout(), 0, compensation, SystemUI::GetRealDisplayHeight());
    }
}

// private static void cppOnBottomFrameChanged(int height) [static] :565
void SystemUI::cppOnBottomFrameChanged(int height)
{
    uStackFrame __("Fuse.Platform.SystemUI", "cppOnBottomFrameChanged(int)");
    SystemUI_typeof()->Init();
    int resizeReason = 1;
    ::g::Uno::Float2 size = SystemUI::_GetRootDisplaySize();
    ::g::Uno::Float2 start_pos = ::g::Uno::Float2__New2(0.0f, size.Y - (float)SystemUI::_bottomFrameSize());
    ::g::Uno::Float2 start_size = ::g::Uno::Float2__New2(size.X, (float)SystemUI::_bottomFrameSize());
    ::g::Uno::Float2 end_pos = ::g::Uno::Float2__New2(0.0f, size.Y - (float)height);
    ::g::Uno::Float2 end_size = ::g::Uno::Float2__New2(size.X, (float)height);
    ::g::Uno::Rect startFrame = ::g::Uno::Rect__New2(start_pos, start_size);
    ::g::Uno::Rect endFrame = ::g::Uno::Rect__New2(end_pos, end_size);

    if ((SystemUI::_bottomFrameSize() == 0) && (height > 0))
        resizeReason = 0;
    else if ((SystemUI::_bottomFrameSize() > 0) && (height == 0))
        resizeReason = 2;
    else if (((SystemUI::_bottomFrameSize() > 0) && (height > 0)) && (height != SystemUI::_bottomFrameSize()))
        resizeReason = 1;

    SystemUI::_bottomFrameSize() = height;
    ::g::Fuse::Platform::SystemUIWillResizeEventArgs* args = ::g::Fuse::Platform::SystemUIWillResizeEventArgs::New2(1, resizeReason, endFrame, startFrame, 1.0, 0);
    SystemUI::OnWillResize(args);
}

// private static void cppOnConfigChanged() [static] :415
void SystemUI::cppOnConfigChanged()
{
    SystemUI_typeof()->Init();
    GLHelper::SwapBackToBackgroundSurface();
    SystemUI::ResetGeometry();
}

// private static void cppOnTopFrameChanged(int height) [static] :596
void SystemUI::cppOnTopFrameChanged(int height)
{
    uStackFrame __("Fuse.Platform.SystemUI", "cppOnTopFrameChanged(int)");
    SystemUI_typeof()->Init();

    if (SystemUI::_topFrameSize() != height)
    {
        int resizeReason = 1;
        ::g::Uno::Float2 size = SystemUI::_GetRootDisplaySize();
        ::g::Uno::Float2 start_pos = ::g::Uno::Float2__New2(0.0f, size.Y - (float)SystemUI::_topFrameSize());
        ::g::Uno::Float2 start_size = ::g::Uno::Float2__New2(size.X, (float)SystemUI::_topFrameSize());
        ::g::Uno::Float2 end_pos = ::g::Uno::Float2__New2(0.0f, size.Y - (float)height);
        ::g::Uno::Float2 end_size = ::g::Uno::Float2__New2(size.X, (float)height);
        ::g::Uno::Rect startFrame = ::g::Uno::Rect__New2(start_pos, start_size);
        ::g::Uno::Rect endFrame = ::g::Uno::Rect__New2(end_pos, end_size);

        if ((SystemUI::_topFrameSize() == 0) && (height > 0))
            resizeReason = 0;
        else if ((SystemUI::_topFrameSize() > 0) && (height == 0))
            resizeReason = 2;
        else if (((SystemUI::_topFrameSize() > 0) && (height > 0)) && (height != SystemUI::_topFrameSize()))
            resizeReason = 1;

        SystemUI::_topFrameSize() = height;
        ::g::Fuse::Platform::SystemUIWillResizeEventArgs* args = ::g::Fuse::Platform::SystemUIWillResizeEventArgs::New2(0, resizeReason, endFrame, startFrame, 1.0, 0);
        SystemUI::OnWillResize(args);
    }
}

// public static void CreateLayouts() [static] :133
void SystemUI::CreateLayouts()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateLayouts74", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void Detach() [static] :501
void SystemUI::Detach()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Detach80", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void EnterFullscreen() [static] :271
void SystemUI::EnterFullscreen()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "EnterFullscreen81", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static float GetDensity() [static] :434
float SystemUI::GetDensity()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetDensity86", "()F");
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd);
        float __result = (float)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static Java.Object GetDisplayMetrics() [static] :359
::g::Java::Object* SystemUI::GetDisplayMetrics()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetDisplayMetrics87", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static int GetRealDisplayHeight() [static] :377
int SystemUI::GetRealDisplayHeight()
{
    SystemUI_typeof()->Init();
    SystemUI::CalcRealSizes();
    return SystemUI::realHeight();
}

// public static int GetRealDisplayWidth() [static] :371
int SystemUI::GetRealDisplayWidth()
{
    SystemUI_typeof()->Init();
    SystemUI::CalcRealSizes();
    return SystemUI::realWidth();
}

// private static extern Uno.Rect GetStatusBarFrame() [static] :296
::g::Uno::Rect SystemUI::GetStatusBarFrame()
{
    SystemUI_typeof()->Init();
    ::g::Uno::Float2 dispSize = SystemUI::_GetRootDisplaySize();
    float height = SystemUI::GetStatusBarHeight();
    return ::g::Uno::Rect__New2(::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(dispSize.X, height));
}

// private static float GetStatusBarHeight() [static] :183
float SystemUI::GetStatusBarHeight()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetStatusBarHeight88", "()F");
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd);
        float __result = (float)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetSuperLayoutHeight() [static] :551
int SystemUI::GetSuperLayoutHeight()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetSuperLayoutHeight91", "()I");
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd);
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void HideActionBar() [static] :171
void SystemUI::HideActionBar()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HideActionBar84", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void HideStatusBar() [static] :231
void SystemUI::HideStatusBar()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HideStatusBar83", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void HookOntoRawActivityEvents() [static] :72
void SystemUI::HookOntoRawActivityEvents()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HookOntoRawActivityEvents92", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object MakePostV11LayoutChangeListener() [static] :442
::g::Java::Object* SystemUI::MakePostV11LayoutChangeListener()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "MakePostV11LayoutChangeListener76", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void OnConfigChanged() [static] :107
void SystemUI::OnConfigChanged()
{
    SystemUI_typeof()->Init();
    SystemUI::CompensateRootLayoutForSystemUI();
}

// public static void OnCreate() [static] :113
void SystemUI::OnCreate()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "OnCreate100", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void OnDestroy() [static] :101
void SystemUI::OnDestroy()
{
    SystemUI_typeof()->Init();
    SystemUI::Detach();
    SystemUI::_bottomFrameSize() = 0;
}

// private static void OnFrameChanged() [static] :62
void SystemUI::OnFrameChanged()
{
    uStackFrame __("Fuse.Platform.SystemUI", "OnFrameChanged()");
    SystemUI_typeof()->Init();
    uDelegate* handler = SystemUI::FrameChanged1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private static void onHideKeyboard(int keyboardHeight, bool force) [static] :540
void SystemUI::onHideKeyboard(int keyboardHeight, bool force)
{
    uStackFrame __("Fuse.Platform.SystemUI", "onHideKeyboard(int,bool)");
    SystemUI_typeof()->Init();

    if (SystemUI::keyboardVisible() || force)
    {
        SystemUI::keyboardVisible() = false;
        SystemUI::lastKeyboardHeight() = keyboardHeight;
        SystemUI::cppOnBottomFrameChanged(keyboardHeight);
    }
}

// private static void OnPause() [static] :89
void SystemUI::OnPause()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "OnPause93", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void OnResume() [static] :95
void SystemUI::OnResume()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "OnResume94", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void onShowKeyboard(int keyboardHeight, bool force) [static] :530
void SystemUI::onShowKeyboard(int keyboardHeight, bool force)
{
    uStackFrame __("Fuse.Platform.SystemUI", "onShowKeyboard(int,bool)");
    SystemUI_typeof()->Init();
    SystemUI::keyboardVisible() = true;

    if ((SystemUI::lastKeyboardHeight() != keyboardHeight) || force)
    {
        SystemUI::lastKeyboardHeight() = keyboardHeight;
        SystemUI::cppOnBottomFrameChanged(keyboardHeight);
    }
}

// private static void OnWillResize(Fuse.Platform.SystemUIWillResizeEventArgs args) [static] :303
void SystemUI::OnWillResize(::g::Fuse::Platform::SystemUIWillResizeEventArgs* args)
{
    uStackFrame __("Fuse.Platform.SystemUI", "OnWillResize(Fuse.Platform.SystemUIWillResizeEventArgs)");
    SystemUI_typeof()->Init();

    if (uPtr(args)->ID() == 0)
    {
        uDelegate* handler = SystemUI::TopFrameWillResize1();

        if (::g::Uno::Delegate::op_Inequality(handler, NULL))
            uPtr(handler)->Invoke(2, NULL, args);
    }
    else
    {
        SystemUI::BottomFrame(uPtr(args)->EndFrame());
        uDelegate* handler1 = SystemUI::BottomFrameWillResize1();

        if (::g::Uno::Delegate::op_Inequality(handler1, NULL))
            uPtr(handler1)->Invoke(2, NULL, args);
    }
}

// public static void ResendFrameSizes() [static] :556
void SystemUI::ResendFrameSizes()
{
    uStackFrame __("Fuse.Platform.SystemUI", "ResendFrameSizes()");
    SystemUI_typeof()->Init();
    int heightDiff = SystemUI::GetRealDisplayHeight() - SystemUI::GetSuperLayoutHeight();
    heightDiff = heightDiff - (int)SystemUI::GetStatusBarHeight();
    SystemUI::lastKeyboardHeight() = heightDiff;
    SystemUI::cppOnBottomFrameChanged(heightDiff);
}

// private static void ResetGeometry() [static] :422
void SystemUI::ResetGeometry()
{
    SystemUI_typeof()->Init();
    GLHelper::SwapBackToBackgroundSurface();
    float density = SystemUI::GetDensity();
    ::g::Uno::Float2 pos = ::g::Uno::Float2__New2(0.0f, 0.0f);
    ::g::Uno::Float2 size = SystemUI::_GetRootDisplaySize();
    ::g::Uno::Rect frame = ::g::Uno::Rect__New2(pos, size);
    SystemUI::Frame(frame);
    SystemUI::Density(density);
}

// private static void SetAsRootView(Java.Object view) [static] :394
void SystemUI::SetAsRootView(::g::Java::Object* view)
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetAsRootView103", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uview=view;
        jobject _view = (_uview==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uview, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_view);
        
        if (_view!=NULL) { U_JNIVAR->DeleteLocalRef(_view); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetFrame(Java.Object view, int originX, int originY, int height) [static] :474
void SystemUI::SetFrame(::g::Java::Object* view, int originX, int originY, int height)
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetFrame77", "(Ljava/lang/Object;III)V");
        ::g::Java::Object* _uview=view;
        jobject _view = (_uview==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uview, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uoriginX=originX;
        jint _originX = (jint)_uoriginX;
        int _uoriginY=originY;
        jint _originY = (jint)_uoriginY;
        int _uheight=height;
        jint _height = (jint)_uheight;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_view,_originX,_originY,_height);
        
        if (_view!=NULL) { U_JNIVAR->DeleteLocalRef(_view); }
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void ShowStatusBar() [static] :208
void SystemUI::ShowStatusBar()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ShowStatusBar104", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void unoOnGlobalLayout() [static] :514
void SystemUI::unoOnGlobalLayout()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "unoOnGlobalLayout101", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void UpdateStatusBar() [static] :251
void SystemUI::UpdateStatusBar()
{
    SystemUI_typeof()->Init();

    switch (SystemUI::_systemUIState())
    {
        case 0:
        {
            SystemUI::ShowStatusBar();
            break;
        }
        case 1:
        {
            SystemUI::HideStatusBar();
            break;
        }
        case 2:
        {
            SystemUI::EnterFullscreen();
            break;
        }
    }
}

// public static generated Uno.Rect get_BottomFrame() [static] :26
::g::Uno::Rect SystemUI::BottomFrame()
{
    SystemUI_typeof()->Init();
    return SystemUI::_BottomFrame();
}

// private static generated void set_BottomFrame(Uno.Rect value) [static] :26
void SystemUI::BottomFrame(::g::Uno::Rect value)
{
    SystemUI_typeof()->Init();
    SystemUI::_BottomFrame() = value;
}

// public static generated float get_Density() [static] :46
float SystemUI::Density()
{
    SystemUI_typeof()->Init();
    return SystemUI::_Density();
}

// private static generated void set_Density(float value) [static] :46
void SystemUI::Density(float value)
{
    SystemUI_typeof()->Init();
    SystemUI::_Density() = value;
}

// public static Uno.Rect get_Frame() [static] :50
::g::Uno::Rect SystemUI::Frame()
{
    SystemUI_typeof()->Init();
    return SystemUI::_frame();
}

// private static void set_Frame(Uno.Rect value) [static] :51
void SystemUI::Frame(::g::Uno::Rect value)
{
    uStackFrame __("Fuse.Platform.SystemUI", "set_Frame(Uno.Rect)");
    SystemUI_typeof()->Init();

    if (::g::Uno::Rect__Equals2(SystemUI::_frame(), value))
        return;

    SystemUI::_frame() = value;
    SystemUI::OnFrameChanged();
}

// public static bool get_IsBottomFrameVisible() [static] :166
bool SystemUI::IsBottomFrameVisible()
{
    SystemUI_typeof()->Init();
    return (SystemUI::BottomFrame().Top - SystemUI::BottomFrame().Bottom) > 0.0f;
}

// public static bool get_IsTopFrameVisible() [static] :152
bool SystemUI::IsTopFrameVisible()
{
    SystemUI_typeof()->Init();
    return (double)SystemUI::GetStatusBarHeight() > 0.0;
}

// public static void set_IsTopFrameVisible(bool value) [static] :155
void SystemUI::IsTopFrameVisible(bool value)
{
    SystemUI_typeof()->Init();

    if (value)
        SystemUI::ShowStatusBar();
    else
        SystemUI::HideStatusBar();
}

// public static Java.Object get_RootView() [static] :389
::g::Java::Object* SystemUI::RootView()
{
    SystemUI_typeof()->Init();
    return SystemUI::RootLayout();
}

// public static void set_RootView(Java.Object value) [static] :390
void SystemUI::RootView(::g::Java::Object* value)
{
    SystemUI_typeof()->Init();
    SystemUI::SetAsRootView(value);
}

// public static Uno.Rect get_TopFrame() [static] :25
::g::Uno::Rect SystemUI::TopFrame()
{
    SystemUI_typeof()->Init();
    return SystemUI::GetStatusBarFrame();
}

// public static generated void add_BottomFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) [static] :23
void SystemUI::add_BottomFrameWillResize(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.SystemUI", "add_BottomFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>)");
    SystemUI_typeof()->Init();
    SystemUI::BottomFrameWillResize1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SystemUI::BottomFrameWillResize1(), value), ::TYPES[6/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/]);
}

// public static generated void remove_BottomFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) [static] :23
void SystemUI::remove_BottomFrameWillResize(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.SystemUI", "remove_BottomFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>)");
    SystemUI_typeof()->Init();
    SystemUI::BottomFrameWillResize1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SystemUI::BottomFrameWillResize1(), value), ::TYPES[6/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/]);
}

// public static generated void add_FrameChanged(Uno.EventHandler value) [static] :61
void SystemUI::add_FrameChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.SystemUI", "add_FrameChanged(Uno.EventHandler)");
    SystemUI_typeof()->Init();
    SystemUI::FrameChanged1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SystemUI::FrameChanged1(), value), ::TYPES[0/*Uno.EventHandler*/]);
}

// public static generated void remove_FrameChanged(Uno.EventHandler value) [static] :61
void SystemUI::remove_FrameChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.SystemUI", "remove_FrameChanged(Uno.EventHandler)");
    SystemUI_typeof()->Init();
    SystemUI::FrameChanged1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SystemUI::FrameChanged1(), value), ::TYPES[0/*Uno.EventHandler*/]);
}

// public static generated void add_TopFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) [static] :22
void SystemUI::add_TopFrameWillResize(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.SystemUI", "add_TopFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>)");
    SystemUI_typeof()->Init();
    SystemUI::TopFrameWillResize1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SystemUI::TopFrameWillResize1(), value), ::TYPES[6/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/]);
}

// public static generated void remove_TopFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) [static] :22
void SystemUI::remove_TopFrameWillResize(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.SystemUI", "remove_TopFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>)");
    SystemUI_typeof()->Init();
    SystemUI::TopFrameWillResize1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SystemUI::TopFrameWillResize1(), value), ::TYPES[6/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/]);
}
// }

// /Users/martinmorales/Library/Application Support/Fusetools/Packages/Fuse.Platform/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public enum SystemUIID :165
uEnumType* SystemUIID_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Platform.SystemUIID", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "TopFrame", 0LL,
        "BottomFrame", 1LL);
    return type;
}

// /Users/martinmorales/Library/Application Support/Fusetools/Packages/Fuse.Platform/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public enum SystemUIResizeReason :171
uEnumType* SystemUIResizeReason_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Platform.SystemUIResizeReason", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "WillShow", 0LL,
        "WillChangeFrame", 1LL,
        "WillHide", 2LL);
    return type;
}

// /Users/martinmorales/Library/Application Support/Fusetools/Packages/Fuse.Platform/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public sealed class SystemUIWillResizeEventArgs :185
// {
static void SystemUIWillResizeEventArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Platform::SystemUIWillResizeEventArgs, _AnimationCurve), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Platform::SystemUIWillResizeEventArgs, _AnimationDuration), 0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Fuse::Platform::SystemUIWillResizeEventArgs, _EndFrame), 0,
        ::g::Fuse::Platform::SystemUIID_typeof(), offsetof(::g::Fuse::Platform::SystemUIWillResizeEventArgs, _ID), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Platform::SystemUIWillResizeEventArgs, _IsAnimated), 0,
        ::g::Fuse::Platform::SystemUIResizeReason_typeof(), offsetof(::g::Fuse::Platform::SystemUIWillResizeEventArgs, _ResizeReason), 0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Fuse::Platform::SystemUIWillResizeEventArgs, _StartFrame), 0);
    type->Reflection.SetFunctions(8,
        new uFunction("get_AnimationCurve", NULL, (void*)SystemUIWillResizeEventArgs__get_AnimationCurve_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_AnimationDuration", NULL, (void*)SystemUIWillResizeEventArgs__get_AnimationDuration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_EndFrame", NULL, (void*)SystemUIWillResizeEventArgs__get_EndFrame_fn, 0, false, ::g::Uno::Rect_typeof(), 0),
        new uFunction("get_ID", NULL, (void*)SystemUIWillResizeEventArgs__get_ID_fn, 0, false, ::g::Fuse::Platform::SystemUIID_typeof(), 0),
        new uFunction("get_IsAnimated", NULL, (void*)SystemUIWillResizeEventArgs__get_IsAnimated_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)SystemUIWillResizeEventArgs__New2_fn, 0, true, type, 6, ::g::Fuse::Platform::SystemUIID_typeof(), ::g::Fuse::Platform::SystemUIResizeReason_typeof(), ::g::Uno::Rect_typeof(), ::g::Uno::Rect_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("get_ResizeReason", NULL, (void*)SystemUIWillResizeEventArgs__get_ResizeReason_fn, 0, false, ::g::Fuse::Platform::SystemUIResizeReason_typeof(), 0),
        new uFunction("get_StartFrame", NULL, (void*)SystemUIWillResizeEventArgs__get_StartFrame_fn, 0, false, ::g::Uno::Rect_typeof(), 0));
}

uType* SystemUIWillResizeEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 7;
    options.ObjectSize = sizeof(SystemUIWillResizeEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Platform.SystemUIWillResizeEventArgs", options);
    type->fp_build_ = SystemUIWillResizeEventArgs_build;
    return type;
}

// public SystemUIWillResizeEventArgs(Fuse.Platform.SystemUIID id, Fuse.Platform.SystemUIResizeReason resizeReason, Uno.Rect endFrame, [Uno.Rect startFrame], [double animationDuration], [int animationCurve]) :196
void SystemUIWillResizeEventArgs__ctor_1_fn(SystemUIWillResizeEventArgs* __this, int* id, int* resizeReason, ::g::Uno::Rect* endFrame, ::g::Uno::Rect* startFrame, double* animationDuration, int* animationCurve)
{
    __this->ctor_1(*id, *resizeReason, *endFrame, *startFrame, *animationDuration, *animationCurve);
}

// public generated int get_AnimationCurve() :193
void SystemUIWillResizeEventArgs__get_AnimationCurve_fn(SystemUIWillResizeEventArgs* __this, int* __retval)
{
    *__retval = __this->AnimationCurve();
}

// private generated void set_AnimationCurve(int value) :193
void SystemUIWillResizeEventArgs__set_AnimationCurve_fn(SystemUIWillResizeEventArgs* __this, int* value)
{
    __this->AnimationCurve(*value);
}

// public generated double get_AnimationDuration() :192
void SystemUIWillResizeEventArgs__get_AnimationDuration_fn(SystemUIWillResizeEventArgs* __this, double* __retval)
{
    *__retval = __this->AnimationDuration();
}

// private generated void set_AnimationDuration(double value) :192
void SystemUIWillResizeEventArgs__set_AnimationDuration_fn(SystemUIWillResizeEventArgs* __this, double* value)
{
    __this->AnimationDuration(*value);
}

// public generated Uno.Rect get_EndFrame() :190
void SystemUIWillResizeEventArgs__get_EndFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->EndFrame();
}

// private generated void set_EndFrame(Uno.Rect value) :190
void SystemUIWillResizeEventArgs__set_EndFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* value)
{
    __this->EndFrame(*value);
}

// public generated Fuse.Platform.SystemUIID get_ID() :187
void SystemUIWillResizeEventArgs__get_ID_fn(SystemUIWillResizeEventArgs* __this, int* __retval)
{
    *__retval = __this->ID();
}

// private generated void set_ID(Fuse.Platform.SystemUIID value) :187
void SystemUIWillResizeEventArgs__set_ID_fn(SystemUIWillResizeEventArgs* __this, int* value)
{
    __this->ID(*value);
}

// public generated bool get_IsAnimated() :191
void SystemUIWillResizeEventArgs__get_IsAnimated_fn(SystemUIWillResizeEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsAnimated();
}

// private generated void set_IsAnimated(bool value) :191
void SystemUIWillResizeEventArgs__set_IsAnimated_fn(SystemUIWillResizeEventArgs* __this, bool* value)
{
    __this->IsAnimated(*value);
}

// public SystemUIWillResizeEventArgs New(Fuse.Platform.SystemUIID id, Fuse.Platform.SystemUIResizeReason resizeReason, Uno.Rect endFrame, [Uno.Rect startFrame], [double animationDuration], [int animationCurve]) :196
void SystemUIWillResizeEventArgs__New2_fn(int* id, int* resizeReason, ::g::Uno::Rect* endFrame, ::g::Uno::Rect* startFrame, double* animationDuration, int* animationCurve, SystemUIWillResizeEventArgs** __retval)
{
    *__retval = SystemUIWillResizeEventArgs::New2(*id, *resizeReason, *endFrame, *startFrame, *animationDuration, *animationCurve);
}

// public generated Fuse.Platform.SystemUIResizeReason get_ResizeReason() :188
void SystemUIWillResizeEventArgs__get_ResizeReason_fn(SystemUIWillResizeEventArgs* __this, int* __retval)
{
    *__retval = __this->ResizeReason();
}

// private generated void set_ResizeReason(Fuse.Platform.SystemUIResizeReason value) :188
void SystemUIWillResizeEventArgs__set_ResizeReason_fn(SystemUIWillResizeEventArgs* __this, int* value)
{
    __this->ResizeReason(*value);
}

// public generated Uno.Rect get_StartFrame() :189
void SystemUIWillResizeEventArgs__get_StartFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->StartFrame();
}

// private generated void set_StartFrame(Uno.Rect value) :189
void SystemUIWillResizeEventArgs__set_StartFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* value)
{
    __this->StartFrame(*value);
}

// public SystemUIWillResizeEventArgs(Fuse.Platform.SystemUIID id, Fuse.Platform.SystemUIResizeReason resizeReason, Uno.Rect endFrame, [Uno.Rect startFrame], [double animationDuration], [int animationCurve]) [instance] :196
void SystemUIWillResizeEventArgs::ctor_1(int id, int resizeReason, ::g::Uno::Rect endFrame, ::g::Uno::Rect startFrame, double animationDuration, int animationCurve)
{
    ctor_();
    ID(id);
    ResizeReason(resizeReason);
    StartFrame(startFrame);
    EndFrame(endFrame);

    if (animationDuration != 0.0)
    {
        IsAnimated(true);
        AnimationDuration(animationDuration);
        AnimationCurve(animationCurve);
    }
}

// public generated int get_AnimationCurve() [instance] :193
int SystemUIWillResizeEventArgs::AnimationCurve()
{
    return _AnimationCurve;
}

// private generated void set_AnimationCurve(int value) [instance] :193
void SystemUIWillResizeEventArgs::AnimationCurve(int value)
{
    _AnimationCurve = value;
}

// public generated double get_AnimationDuration() [instance] :192
double SystemUIWillResizeEventArgs::AnimationDuration()
{
    return _AnimationDuration;
}

// private generated void set_AnimationDuration(double value) [instance] :192
void SystemUIWillResizeEventArgs::AnimationDuration(double value)
{
    _AnimationDuration = value;
}

// public generated Uno.Rect get_EndFrame() [instance] :190
::g::Uno::Rect SystemUIWillResizeEventArgs::EndFrame()
{
    return _EndFrame;
}

// private generated void set_EndFrame(Uno.Rect value) [instance] :190
void SystemUIWillResizeEventArgs::EndFrame(::g::Uno::Rect value)
{
    _EndFrame = value;
}

// public generated Fuse.Platform.SystemUIID get_ID() [instance] :187
int SystemUIWillResizeEventArgs::ID()
{
    return _ID;
}

// private generated void set_ID(Fuse.Platform.SystemUIID value) [instance] :187
void SystemUIWillResizeEventArgs::ID(int value)
{
    _ID = value;
}

// public generated bool get_IsAnimated() [instance] :191
bool SystemUIWillResizeEventArgs::IsAnimated()
{
    return _IsAnimated;
}

// private generated void set_IsAnimated(bool value) [instance] :191
void SystemUIWillResizeEventArgs::IsAnimated(bool value)
{
    _IsAnimated = value;
}

// public generated Fuse.Platform.SystemUIResizeReason get_ResizeReason() [instance] :188
int SystemUIWillResizeEventArgs::ResizeReason()
{
    return _ResizeReason;
}

// private generated void set_ResizeReason(Fuse.Platform.SystemUIResizeReason value) [instance] :188
void SystemUIWillResizeEventArgs::ResizeReason(int value)
{
    _ResizeReason = value;
}

// public generated Uno.Rect get_StartFrame() [instance] :189
::g::Uno::Rect SystemUIWillResizeEventArgs::StartFrame()
{
    return _StartFrame;
}

// private generated void set_StartFrame(Uno.Rect value) [instance] :189
void SystemUIWillResizeEventArgs::StartFrame(::g::Uno::Rect value)
{
    _StartFrame = value;
}

// public SystemUIWillResizeEventArgs New(Fuse.Platform.SystemUIID id, Fuse.Platform.SystemUIResizeReason resizeReason, Uno.Rect endFrame, [Uno.Rect startFrame], [double animationDuration], [int animationCurve]) [static] :196
SystemUIWillResizeEventArgs* SystemUIWillResizeEventArgs::New2(int id, int resizeReason, ::g::Uno::Rect endFrame, ::g::Uno::Rect startFrame, double animationDuration, int animationCurve)
{
    SystemUIWillResizeEventArgs* obj1 = (SystemUIWillResizeEventArgs*)uNew(SystemUIWillResizeEventArgs_typeof());
    obj1->ctor_1(id, resizeReason, endFrame, startFrame, animationDuration, animationCurve);
    return obj1;
}
// }

// /Users/martinmorales/Library/Application Support/Fusetools/Packages/Fuse.Platform/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// internal enum SysUIState :178
uEnumType* SysUIState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Platform.SysUIState", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Normal", 0LL,
        "StatusBarHidden", 1LL,
        "Fullscreen", 2LL);
    return type;
}

}}} // ::g::Fuse::Platform

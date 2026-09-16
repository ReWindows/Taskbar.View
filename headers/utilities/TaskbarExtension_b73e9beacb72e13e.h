#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 15 member(s).
namespace winrt::Taskbar::implementation {
class TaskbarExtension {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtensionControl@TaskbarExtension@implementation@Taskbar@winrt@@QEAA?AUUIElement@Xaml@UI@Windows@4@XZ
    WindissectOpaque ExtensionControl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconHeight@TaskbarExtension@implementation@Taskbar@winrt@@QEAAXN@Z
    void IconHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TaskbarExtension@implementation@Taskbar@winrt@@QEAAXXZ
    void Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShellView@TaskbarExtension@implementation@Taskbar@winrt@@QEAA_NW4ShellView@Shell@UI@WindowsUdk@4@@Z
    bool IsShellView(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShellViewVisible@TaskbarExtension@implementation@Taskbar@winrt@@QEBA_NXZ
    bool IsShellViewVisible() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Key@TaskbarExtension@implementation@Taskbar@winrt@@QEAA?AUhstring@4@XZ
    WindissectOpaque Key();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Margin@TaskbarExtension@implementation@Taskbar@winrt@@QEAAXUThickness@Xaml@UI@Windows@4@@Z
    void Margin(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewCoordinatorVisibilityChanged@TaskbarExtension@implementation@Taskbar@winrt@@QEAA?AUfire_and_forget@4@AEBUShellViewCoordinator@Shell@UI@WindowsUdk@4@AEBUIInspectable@Foundation@Windows@4@@Z
    WindissectOpaque OnViewCoordinatorVisibilityChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExtensionParent@TaskbarExtension@implementation@Taskbar@winrt@@QEAAXUContentControl@Controls@Xaml@UI@Windows@4@UIInspectable@Foundation@94@@Z
    void SetExtensionParent(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowInCollapsedTaskbar@TaskbarExtension@implementation@Taskbar@winrt@@QEAA_NXZ
    bool ShowInCollapsedTaskbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuppressRepositionAnimation@TaskbarExtension@implementation@Taskbar@winrt@@QEAA_NXZ
    bool SuppressRepositionAnimation();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskbarExtension@implementation@Taskbar@winrt@@QEAA@UTaskbarXamlExtension@2Windows@Microsoft@3@AEBU?$com_ptr@UTaskbarConfiguration@implementation@Taskbar@winrt@@@3@UWindowId@UI@53@AEBUextension_props@123@@Z
    TaskbarExtension(WindissectOpaque, WindissectOpaque const &, WindissectOpaque, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarExtension@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~TaskbarExtension();
};
} // namespace winrt::Taskbar::implementation

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 31 member(s).
namespace winrt::Taskbar::implementation {
class LaunchListItemViewModel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccessibleName@LaunchListItemViewModel@implementation@Taskbar@winrt@@UEBA?AUhstring@4@XZ
    virtual WindissectOpaque AccessibleName() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutomationId@LaunchListItemViewModel@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque AutomationId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?BadgeData@LaunchListItemViewModel@implementation@Taskbar@winrt@@UEBA?AUBadge@StartScreen@UI@WindowsUdk@4@XZ
    virtual WindissectOpaque BadgeData() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissAsync@LaunchListItemViewModel@implementation@Taskbar@winrt@@QEBA?AUfire_and_forget@4@XZ
    WindissectOpaque DismissAsync() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissHoverFlyout@LaunchListItemViewModel@implementation@Taskbar@winrt@@UEAA?AUfire_and_forget@4@XZ
    virtual WindissectOpaque DismissHoverFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayName@LaunchListItemViewModel@implementation@Taskbar@winrt@@UEBA?AUhstring@4@XZ
    virtual WindissectOpaque DisplayName() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemProperties@LaunchListItemViewModel@implementation@Taskbar@winrt@@SA?AULaunchListItemProperties@234@W4ShellView@Shell@UI@WindowsUdk@4@@Z
    static WindissectOpaque GetItemProperties(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasHoverFlyout@LaunchListItemViewModel@implementation@Taskbar@winrt@@QEBA_NXZ
    bool HasHoverFlyout() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconHeight@LaunchListItemViewModel@implementation@Taskbar@winrt@@QEBANXZ
    double IconHeight() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconHeight@LaunchListItemViewModel@implementation@Taskbar@winrt@@UEAAXN@Z
    virtual void IconHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@LaunchListItemViewModel@implementation@Taskbar@winrt@@UEAAXAEBUTaskbarModel@Shell@UI@WindowsUdk@4@@Z
    virtual void Initialize(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHoverFlyoutEnabled@LaunchListItemViewModel@implementation@Taskbar@winrt@@UEBA_NXZ
    virtual bool IsHoverFlyoutEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShellViewVisible@LaunchListItemViewModel@implementation@Taskbar@winrt@@UEBA_NXZ
    virtual bool IsShellViewVisible() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsToolTipEnabled@LaunchListItemViewModel@implementation@Taskbar@winrt@@UEBA_NXZ
    virtual bool IsToolTipEnabled() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Kind@LaunchListItemViewModel@implementation@Taskbar@winrt@@UEBA?AW4TaskbarItemKind@34@XZ
    virtual int Kind() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LaunchListItemViewModel@implementation@Taskbar@winrt@@QEAA@W4ShellView@Shell@UI@WindowsUdk@3@AEBUShellViewCoordinator@5673@1AEBU?$com_ptr@UTaskbarConfiguration@implementation@Taskbar@winrt@@@3@AEBU?$com_ptr@UViewCoordinator@implementation@Taskbar@winrt@@@3@_K@Z
    LaunchListItemViewModel(int, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, uint64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LaunchListItemViewModel@implementation@Taskbar@winrt@@QEAA@W4ShellView@Shell@UI@WindowsUdk@3@AEBUShellViewCoordinator@5673@01AEBU?$com_ptr@UHoverFlyoutModel@implementation@Taskbar@winrt@@@3@AEBU?$com_ptr@UTaskbarConfiguration@implementation@Taskbar@winrt@@@3@AEBU?$com_ptr@UViewCoordinator@implementation@Taskbar@winrt@@@3@_K@Z
    LaunchListItemViewModel(int, WindissectOpaque const &, int, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, uint64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LaunchListItemViewModel@implementation@Taskbar@winrt@@QEAA@W4ShellView@Shell@UI@WindowsUdk@3@AEBUShellViewCoordinator@5673@AEBU?$com_ptr@UTaskbarConfiguration@implementation@Taskbar@winrt@@@3@AEBU?$com_ptr@UViewCoordinator@implementation@Taskbar@winrt@@@3@_K@Z
    LaunchListItemViewModel(int, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextRequested@LaunchListItemViewModel@implementation@Taskbar@winrt@@QEAAXXZ
    void OnContextRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHoverFlyoutInvoke@LaunchListItemViewModel@implementation@Taskbar@winrt@@QEAAXUPoint@Foundation@Windows@4@W4InputDeviceKind@Shell@UI@WindowsUdk@4@W4ExperienceToggleButtonFocusContext@34@@Z
    void OnHoverFlyoutInvoke(WindissectOpaque, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@LaunchListItemViewModel@implementation@Taskbar@winrt@@QEAA?AUfire_and_forget@4@XZ
    WindissectOpaque OnLostFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowBadgesChanged@LaunchListItemViewModel@implementation@Taskbar@winrt@@UEAAXXZ
    virtual void OnShowBadgesChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisualStateChanged@LaunchListItemViewModel@implementation@Taskbar@winrt@@QEAAXAEBUTaskbarButtonVisualStateChangedEventArgs@34@@Z
    void OnVisualStateChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowHoverFlyoutAsync@LaunchListItemViewModel@implementation@Taskbar@winrt@@UEAA?AUfire_and_forget@4@_KUPoint@Foundation@Windows@4@W4InputDeviceKind@Shell@UI@WindowsUdk@4@W4ExperienceToggleButtonFocusContext@34@@Z
    virtual WindissectOpaque ShowHoverFlyoutAsync(uint64_t, WindissectOpaque, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchListItemViewModel@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~LaunchListItemViewModel();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewCoordinatorVisibilityChanged@LaunchListItemViewModel@implementation@Taskbar@winrt@@MEAA?AUfire_and_forget@4@AEBUShellViewCoordinator@Shell@UI@WindowsUdk@4@AEBUIInspectable@Foundation@Windows@4@@Z
    virtual WindissectOpaque OnViewCoordinatorVisibilityChanged(WindissectOpaque const &, WindissectOpaque const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplicationThemeChanged@LaunchListItemViewModel@implementation@Taskbar@winrt@@AEAAXXZ
    void OnApplicationThemeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewCoordinatorEdgeGestureAnimationStateChanged@LaunchListItemViewModel@implementation@Taskbar@winrt@@AEAAXXZ
    void OnViewCoordinatorEdgeGestureAnimationStateChanged();
};
} // namespace winrt::Taskbar::implementation

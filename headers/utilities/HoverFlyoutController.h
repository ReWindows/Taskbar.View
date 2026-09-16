#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 35 member(s).
namespace winrt::Taskbar::implementation {
class HoverFlyoutController {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyAppTaskUpdate@HoverFlyoutController@implementation@Taskbar@winrt@@QEAAXAEBUAppTaskInfoUpdatedArgs@@@Z
    void ApplyAppTaskUpdate(AppTaskInfoUpdatedArgs const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtendedUIFlyoutVisibilityChanged@HoverFlyoutController@implementation@Taskbar@winrt@@QEAA?AUevent_token@4@AEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@U1234@@Foundation@Windows@4@@Z
    WindissectOpaque ExtendedUIFlyoutVisibilityChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@HoverFlyoutController@implementation@Taskbar@winrt@@QEAAXXZ
    void Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExtendedUICyclingRequested@HoverFlyoutController@implementation@Taskbar@winrt@@QEAAXAEBUExtendedUICyclingRequestedEventArgs@Shell@UI@WindowsUdk@4@@Z
    void OnExtendedUICyclingRequested(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemThumbnailPropertyChanged@HoverFlyoutController@implementation@Taskbar@winrt@@QEAAXAEBUTaskItemThumbnailPropertyChangedEventArgs@Shell@UI@WindowsUdk@4@@Z
    void OnItemThumbnailPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnJumpListVisibilityChanged@HoverFlyoutController@implementation@Taskbar@winrt@@QEAA?AUfire_and_forget@4@AEBUShellViewCoordinator@Shell@UI@WindowsUdk@4@AEBUIInspectable@Foundation@Windows@4@@Z
    WindissectOpaque OnJumpListVisibilityChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskbarLocation@HoverFlyoutController@implementation@Taskbar@winrt@@QEAAXW40Shell@UI@WindowsUdk@4@@Z
    void TaskbarLocation(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HoverFlyoutController@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~HoverFlyoutController();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitDismissFlyout@HoverFlyoutController@implementation@Taskbar@winrt@@AEAAXXZ
    void CommitDismissFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideAllHoverFlyouts@HoverFlyoutController@implementation@Taskbar@winrt@@AEAAXXZ
    void HideAllHoverFlyouts();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideLaunchListHoverFlyouts@HoverFlyoutController@implementation@Taskbar@winrt@@AEBAXXZ
    void HideLaunchListHoverFlyouts() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideTaskbarFlyout@HoverFlyoutController@implementation@Taskbar@winrt@@AEAAXXZ
    void HideTaskbarFlyout();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHoverCardFlyoutOpen@HoverFlyoutController@implementation@Taskbar@winrt@@AEAA_N_NUhstring@4@@Z
    bool IsHoverCardFlyoutOpen(bool, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTargetRecommendedItem@HoverFlyoutController@implementation@Taskbar@winrt@@AEAA_N_NUhstring@4@@Z
    bool IsTargetRecommendedItem(bool, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismissExtendedUIRequested@HoverFlyoutController@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void OnDismissExtendedUIRequested(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismissWithKeyboardFocusRequested@HoverFlyoutController@implementation@Taskbar@winrt@@AEAAXAEBUTaskItemThumbnailList@34@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnDismissWithKeyboardFocusRequested(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExternalTaskListDragStateChanged@HoverFlyoutController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnExternalTaskListDragStateChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFlyoutFrameFrameIsPointerOverChanged@HoverFlyoutController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnFlyoutFrameFrameIsPointerOverChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFlyoutPositionChanged@HoverFlyoutController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnFlyoutPositionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFlyoutVisibilityChanged@HoverFlyoutController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarFlyout@Shell@UI@WindowsUdk@4@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnFlyoutVisibilityChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@HoverFlyoutController@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnGotFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@HoverFlyoutController@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnLostFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnModelChangedXamlExtendedUI@HoverFlyoutController@implementation@Taskbar@winrt@@AEAAXW4HoverFlyoutModelProperty@234@@Z
    void OnModelChangedXamlExtendedUI(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnModelRequestedKeyboardFocus@HoverFlyoutController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnModelRequestedKeyboardFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerOverItemChanged@HoverFlyoutController@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void OnPointerOverItemChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskbarFrameFrameIsPointerOverChanged@HoverFlyoutController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnTaskbarFrameFrameIsPointerOverChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskbarModelIsFlyoutVisibleChanged@HoverFlyoutController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarModel@Shell@UI@WindowsUdk@4@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnTaskbarModelIsFlyoutVisibleChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskbarModelIsPointerOverLegacyExtendedUIChanged@HoverFlyoutController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarModel@Shell@UI@WindowsUdk@4@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnTaskbarModelIsPointerOverLegacyExtendedUIChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThumbnailsVectorChanged@HoverFlyoutController@implementation@Taskbar@winrt@@AEAAXAEBU?$IObservableVector@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@4@AEBUIVectorChangedEventArgs@6784@@Z
    void OnThumbnailsVectorChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowExperienceToggleButtonHoverFlyout@HoverFlyoutController@implementation@Taskbar@winrt@@AEAAXIAEBU?$com_ptr@UExperienceToggleButton@implementation@Taskbar@winrt@@@4@@Z
    void ShowExperienceToggleButtonHoverFlyout(unsigned int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFlyoutWindowPosition@HoverFlyoutController@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateFlyoutWindowPosition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePointerOverItem@HoverFlyoutController@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdatePointerOverItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTargetElements@HoverFlyoutController@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateTargetElements();
};
} // namespace winrt::Taskbar::implementation

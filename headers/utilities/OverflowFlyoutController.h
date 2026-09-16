#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 34 member(s).
namespace winrt::Taskbar::implementation {
class OverflowFlyoutController {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissFlyout@OverflowFlyoutController@implementation@Taskbar@winrt@@QEAAXXZ
    void DismissFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleCommand@OverflowFlyoutController@implementation@Taskbar@winrt@@QEAA_NW4TaskbarCommand@Shell@UI@WindowsUdk@4@@Z
    bool HandleCommand(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@OverflowFlyoutController@implementation@Taskbar@winrt@@QEAAXXZ
    void Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnJumpListVisibilityChanged@OverflowFlyoutController@implementation@Taskbar@winrt@@QEAA?AUfire_and_forget@4@AEBUShellViewCoordinator@Shell@UI@WindowsUdk@4@AEBUIInspectable@Foundation@Windows@4@@Z
    WindissectOpaque OnJumpListVisibilityChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OverflowFlyoutController@implementation@Taskbar@winrt@@QEAA@AEBUTaskbarModel@Shell@UI@WindowsUdk@3@AEBU?$com_ptr@UOverflowFlyoutModel@implementation@Taskbar@winrt@@@3@AEBU?$com_ptr@UTaskbarFrame@implementation@Taskbar@winrt@@@3@AEBU?$com_ptr@UTaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@@3@AEBU?$com_ptr@UTaskbarOverflowCollapsibleItemsCollection@implementation@Taskbar@winrt@@@3@AEBUShellViewCoordinator@5673@AEBU?$com_ptr@UHoverFlyoutModel@implementation@Taskbar@winrt@@@3@@Z
    OverflowFlyoutController(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetOverflowItem@OverflowFlyoutController@implementation@Taskbar@winrt@@QEBA?AUFrameworkElement@Xaml@UI@Windows@4@H@Z
    WindissectOpaque TryGetOverflowItem(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTaskGroupBounds@OverflowFlyoutController@implementation@Taskbar@winrt@@QEAAXURect@Foundation@Windows@4@UPoint@674@@Z
    void UpdateTaskGroupBounds(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowId@OverflowFlyoutController@implementation@Taskbar@winrt@@QEBA_KXZ
    uint64_t WindowId() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OverflowFlyoutController@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~OverflowFlyoutController();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheOverflowLayoutIfAvailable@OverflowFlyoutController@implementation@Taskbar@winrt@@AEAAXXZ
    void CacheOverflowLayoutIfAvailable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitDismissFlyout@OverflowFlyoutController@implementation@Taskbar@winrt@@AEAAXXZ
    void CommitDismissFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissShellView@OverflowFlyoutController@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@W4ShellView@Shell@UI@WindowsUdk@4@AEBUShellViewCoordinator@7894@@Z
    WindissectOpaque DismissShellView(int, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlyoutMaxExtent@OverflowFlyoutController@implementation@Taskbar@winrt@@AEBANXZ
    double GetFlyoutMaxExtent() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandRequested@OverflowFlyoutController@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@W4TaskbarCommand@Shell@UI@WindowsUdk@4@@Z
    void OnCommandRequested(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismissWithKeyboardFocusRequested@OverflowFlyoutController@implementation@Taskbar@winrt@@AEAAXAEBUOverflowFlyoutList@34@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnDismissWithKeyboardFocusRequested(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFlyoutListTemplateApplied@OverflowFlyoutController@implementation@Taskbar@winrt@@AEAAXAEBUOverflowFlyoutList@34@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnFlyoutListTemplateApplied(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFlyoutPositionChanged@OverflowFlyoutController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnFlyoutPositionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGettingFocus@OverflowFlyoutController@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUGettingFocusEventArgs@Input@Xaml@UI@74@@Z
    void OnGettingFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHoverFlyoutModelChanged@OverflowFlyoutController@implementation@Taskbar@winrt@@AEAAXW4HoverFlyoutModelProperty@234@@Z
    void OnHoverFlyoutModelChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsFlyoutVisibleChanged@OverflowFlyoutController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnIsFlyoutVisibleChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLosingFocus@OverflowFlyoutController@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBULosingFocusEventArgs@Input@Xaml@UI@74@@Z
    void OnLosingFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@OverflowFlyoutController@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnLostFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOverflowButtonGettingFocus@OverflowFlyoutController@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUGettingFocusEventArgs@Input@Xaml@UI@74@@Z
    void OnOverflowButtonGettingFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOverflowFlyoutListContextRequested@OverflowFlyoutController@implementation@Taskbar@winrt@@AEAAXAEBUUIElement@Xaml@UI@Windows@4@AEBUContextRequestedEventArgs@Input@6784@@Z
    void OnOverflowFlyoutListContextRequested(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOverflowFlyoutListLoaded@OverflowFlyoutController@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void OnOverflowFlyoutListLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOverflowLayoutChildBoundsChanged@OverflowFlyoutController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnOverflowLayoutChildBoundsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowLegacyExtendedUiRequested@OverflowFlyoutController@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@UTaskGroup@Shell@UI@WindowsUdk@4@@Z
    void OnShowLegacyExtendedUiRequested(WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskbarModelIsFlyoutVisibleChanged@OverflowFlyoutController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarModel@Shell@UI@WindowsUdk@4@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnTaskbarModelIsFlyoutVisibleChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueDismissIfNoForeground@OverflowFlyoutController@implementation@Taskbar@winrt@@AEAAXXZ
    void QueueDismissIfNoForeground();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowFlyout@OverflowFlyoutController@implementation@Taskbar@winrt@@AEAAXXZ
    void ShowFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFocusLossExpectedFlag@OverflowFlyoutController@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateFocusLossExpectedFlag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTaskGroupBoundsHelper@OverflowFlyoutController@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateTaskGroupBoundsHelper();
};
} // namespace winrt::Taskbar::implementation

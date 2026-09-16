#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 37 member(s).
namespace winrt::Taskbar::implementation {
class OverflowFlyoutList {
public:
    class OverflowButtonEventRegistrations;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CycleFocus@OverflowFlyoutList@implementation@Taskbar@winrt@@QEAA_NW4TaskbarCommand@Shell@UI@WindowsUdk@4@@Z
    bool CycleFocus(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKeyboardFocus@OverflowFlyoutList@implementation@Taskbar@winrt@@QEAA_NXZ
    bool HasKeyboardFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverflowRepeaterLoaded@OverflowFlyoutList@implementation@Taskbar@winrt@@QEAA_NXZ
    bool IsOverflowRepeaterLoaded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@OverflowFlyoutList@implementation@Taskbar@winrt@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDecreaseButtonClick@OverflowFlyoutList@implementation@Taskbar@winrt@@QEAAXXZ
    void OnDecreaseButtonClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIncreaseButtonClick@OverflowFlyoutList@implementation@Taskbar@winrt@@QEAAXXZ
    void OnIncreaseButtonClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPaginationButtonPressed@OverflowFlyoutList@implementation@Taskbar@winrt@@QEAAXAEBUIInspectable@Foundation@Windows@4@AEBUPointerRoutedEventArgs@Input@Xaml@UI@74@@Z
    void OnPaginationButtonPressed(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPaginationButtonReleased@OverflowFlyoutList@implementation@Taskbar@winrt@@QEAAXURepeatButton@Primitives@Controls@Xaml@UI@Windows@4@@Z
    void OnPaginationButtonReleased(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OverflowFlyoutList@implementation@Taskbar@winrt@@QEAA@XZ
    OverflowFlyoutList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetButtonMetrics@OverflowFlyoutList@implementation@Taskbar@winrt@@QEAAXUSize@Foundation@Windows@4@UThickness@Xaml@UI@74@@Z
    void SetButtonMetrics(WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusOnFirstItem@OverflowFlyoutList@implementation@Taskbar@winrt@@QEAAXXZ
    void SetFocusOnFirstItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TemplateApplied@OverflowFlyoutList@implementation@Taskbar@winrt@@QEAA?AUevent_token@4@AEBU?$TypedEventHandler@UOverflowFlyoutList@Taskbar@winrt@@UIInspectable@Foundation@Windows@3@@Foundation@Windows@4@@Z
    WindissectOpaque TemplateApplied(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OverflowFlyoutList@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~OverflowFlyoutList();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyKeyboardFocusNavigation@OverflowFlyoutList@implementation@Taskbar@winrt@@AEAAXW4FocusNavigationType@234@@Z
    void ApplyKeyboardFocusNavigation(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextRealizedElementIndex@OverflowFlyoutList@implementation@Taskbar@winrt@@AEBAHH@Z
    int GetNextRealizedElementIndex(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviousRealizedElementIndex@OverflowFlyoutList@implementation@Taskbar@winrt@@AEBAHH@Z
    int GetPreviousRealizedElementIndex(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadScrollComponents@OverflowFlyoutList@implementation@Taskbar@winrt@@AEAAXXZ
    void LoadScrollComponents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveKeyboardFocusToItem@OverflowFlyoutList@implementation@Taskbar@winrt@@AEAAXI@Z
    void MoveKeyboardFocusToItem(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementClearing@OverflowFlyoutList@implementation@Taskbar@winrt@@AEAAXAEBUItemsRepeater@Controls@Xaml@UI@Microsoft@4@AEBUItemsRepeaterElementClearingEventArgs@67894@@Z
    void OnElementClearing(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementPrepared@OverflowFlyoutList@implementation@Taskbar@winrt@@AEAAXAEBUItemsRepeater@Controls@Xaml@UI@Microsoft@4@AEBUItemsRepeaterElementPreparedEventArgs@67894@@Z
    void OnElementPrepared(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementPreviewKeyDown@OverflowFlyoutList@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEAUKeyRoutedEventArgs@Input@Xaml@UI@74@@Z
    void OnElementPreviewKeyDown(WindissectOpaque const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGettingFocus@OverflowFlyoutList@implementation@Taskbar@winrt@@AEAAXAEBUUIElement@Xaml@UI@Windows@4@AEBUGettingFocusEventArgs@Input@6784@@Z
    void OnGettingFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@OverflowFlyoutList@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRepeaterLoaded@OverflowFlyoutList@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnRepeaterLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewChanged@OverflowFlyoutList@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUScrollViewerViewChangedEventArgs@Controls@Xaml@UI@74@@Z
    void OnScrollViewChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollComponentsLoaded@OverflowFlyoutList@implementation@Taskbar@winrt@@AEAA_NXZ
    bool ScrollComponentsLoaded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollLeft@OverflowFlyoutList@implementation@Taskbar@winrt@@AEAAXXZ
    void ScrollLeft();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollRight@OverflowFlyoutList@implementation@Taskbar@winrt@@AEAAXXZ
    void ScrollRight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusOnFlyout@OverflowFlyoutList@implementation@Taskbar@winrt@@AEAAXXZ
    void SetFocusOnFlyout();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusOnLastSeenIndex@OverflowFlyoutList@implementation@Taskbar@winrt@@AEAAXXZ
    void SetFocusOnLastSeenIndex();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusOnNextPage@OverflowFlyoutList@implementation@Taskbar@winrt@@AEAAXI@Z
    void SetFocusOnNextPage(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusOnPageWorker@OverflowFlyoutList@implementation@Taskbar@winrt@@AEAAXI_N@Z
    void SetFocusOnPageWorker(unsigned int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusOnPreviousPage@OverflowFlyoutList@implementation@Taskbar@winrt@@AEAAXI@Z
    void SetFocusOnPreviousPage(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDepth@OverflowFlyoutList@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateDepth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStates@OverflowFlyoutList@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateVisualStates();
};
} // namespace winrt::Taskbar::implementation

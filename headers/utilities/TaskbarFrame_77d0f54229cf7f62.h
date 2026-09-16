#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 105 member(s).
namespace winrt::Taskbar::implementation {
class TaskbarFrame {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Alignment@TaskbarFrame@implementation@Taskbar@winrt@@QEAAXW4TaskbarAlignment@Shell@UI@WindowsUdk@4@@Z
    void Alignment(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Alignment@TaskbarFrame@implementation@Taskbar@winrt@@QEBA?AW4TaskbarAlignment@Shell@UI@WindowsUdk@4@XZ
    int Alignment() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollapsedExtent@TaskbarFrame@implementation@Taskbar@winrt@@QEAAXM@Z
    void CollapsedExtent(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableTransitionAnimations@TaskbarFrame@implementation@Taskbar@winrt@@QEAAXXZ
    void DisableTransitionAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAnimationEnablementIsQueued@TaskbarFrame@implementation@Taskbar@winrt@@QEAAXXZ
    void EnsureAnimationEnablementIsQueued();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandProgress@TaskbarFrame@implementation@Taskbar@winrt@@QEAAXAEBUCompositionPropertySet@Composition@UI@Windows@4@@Z
    void ExpandProgress(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreezeItemTransitions@TaskbarFrame@implementation@Taskbar@winrt@@QEAA?AUStateRevoker@234@XZ
    WindissectOpaque FreezeItemTransitions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreezeLayout@TaskbarFrame@implementation@Taskbar@winrt@@QEAA?AUStateRevoker@234@XZ
    WindissectOpaque FreezeLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreezeLayoutStartingOffset@TaskbarFrame@implementation@Taskbar@winrt@@QEAA?AUStateRevoker@234@XZ
    WindissectOpaque FreezeLayoutStartingOffset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMetrics@TaskbarFrame@implementation@Taskbar@winrt@@QEBA?AUTaskbarFrameMetrics@234@XZ
    WindissectOpaque GetMetrics() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?GroupingMode@TaskbarFrame@implementation@Taskbar@winrt@@QEAAXW4TaskbarItemGroupingMode@Shell@UI@WindowsUdk@4@@Z
    void GroupingMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GroupingMode@TaskbarFrame@implementation@Taskbar@winrt@@QEBA?AW4TaskbarItemGroupingMode@Shell@UI@WindowsUdk@4@XZ
    int GroupingMode() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideSearchRequested@TaskbarFrame@implementation@Taskbar@winrt@@QEAA?AUevent_token@4@AEBU?$delegate@$$V@4@@Z
    WindissectOpaque HideSearchRequested(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InteractionMode@TaskbarFrame@implementation@Taskbar@winrt@@QEAAXW4UserInteractionMode@ViewManagement@UI@Windows@4@@Z
    void InteractionMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExpanded@TaskbarFrame@implementation@Taskbar@winrt@@QEAAX_N@Z
    void IsExpanded(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFrameRepeaterLoaded@TaskbarFrame@implementation@Taskbar@winrt@@QEBA_NXZ
    bool IsFrameRepeaterLoaded() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullscreenWindowHidingTaskbar@TaskbarFrame@implementation@Taskbar@winrt@@QEAAX_N@Z
    void IsFullscreenWindowHidingTaskbar(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemsSource@TaskbarFrame@implementation@Taskbar@winrt@@QEAAXAEBUIInspectable@Foundation@Windows@4@@Z
    void ItemsSource(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutFrozenChanged@TaskbarFrame@implementation@Taskbar@winrt@@QEAAX_N@Z
    void LayoutFrozenChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@TaskbarFrame@implementation@Taskbar@winrt@@QEAA?AUSize@Foundation@Windows@4@U5674@@Z
    WindissectOpaque MeasureOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@TaskbarFrame@implementation@Taskbar@winrt@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@TaskbarFrame@implementation@Taskbar@winrt@@QEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@4@XZ
    WindissectOpaque OnCreateAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragEnter@TaskbarFrame@implementation@Taskbar@winrt@@QEAAXAEBUDragEventArgs@Xaml@UI@Windows@4@@Z
    void OnDragEnter(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragLeave@TaskbarFrame@implementation@Taskbar@winrt@@QEAAXAEBUDragEventArgs@Xaml@UI@Windows@4@@Z
    void OnDragLeave(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragOver@TaskbarFrame@implementation@Taskbar@winrt@@QEAAXAEBUDragEventArgs@Xaml@UI@Windows@4@@Z
    void OnDragOver(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDrop@TaskbarFrame@implementation@Taskbar@winrt@@QEAAXAEBUDragEventArgs@Xaml@UI@Windows@4@@Z
    void OnDrop(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnF6Invoked@TaskbarFrame@implementation@Taskbar@winrt@@QEAA_NXZ
    bool OnF6Invoked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemAnimationRequested@TaskbarFrame@implementation@Taskbar@winrt@@QEAAXAEBUTaskItemAnimationRequestedEventArgs@Shell@UI@WindowsUdk@4@I@Z
    void OnItemAnimationRequested(WindissectOpaque const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCanceled@TaskbarFrame@implementation@Taskbar@winrt@@QEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnPointerCanceled(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@TaskbarFrame@implementation@Taskbar@winrt@@QEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnPointerPressed(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnXamlRootPointerEntered@TaskbarFrame@implementation@Taskbar@winrt@@QEAAXAEBUIInspectable@Foundation@Windows@4@AEBUPointerRoutedEventArgs@Input@Xaml@UI@74@@Z
    void OnXamlRootPointerEntered(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnXamlRootPointerExited@TaskbarFrame@implementation@Taskbar@winrt@@QEAAXAEBUIInspectable@Foundation@Windows@4@AEBUPointerRoutedEventArgs@Input@Xaml@UI@74@@Z
    void OnXamlRootPointerExited(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetPointerStateOnButtons@TaskbarFrame@implementation@Taskbar@winrt@@QEAAXXZ
    void ResetPointerStateOnButtons();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTaskbarConfiguration@TaskbarFrame@implementation@Taskbar@winrt@@QEAAXAEBU?$com_ptr@UTaskbarConfiguration@implementation@Taskbar@winrt@@@4@@Z
    void SetTaskbarConfiguration(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuppressAnimations@TaskbarFrame@implementation@Taskbar@winrt@@QEAAXXZ
    void SuppressAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SystemTrayExtent@TaskbarFrame@implementation@Taskbar@winrt@@QEAAXN@Z
    void SystemTrayExtent(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskListCycle@TaskbarFrame@implementation@Taskbar@winrt@@QEAA?AW4TaskListCycleResult@234@W4TaskbarCommand@Shell@UI@WindowsUdk@4@_N@Z
    int TaskListCycle(int, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskbarFrame@implementation@Taskbar@winrt@@QEAA@XZ
    TaskbarFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskbarLocation@TaskbarFrame@implementation@Taskbar@winrt@@QEAAXW40Shell@UI@WindowsUdk@4@@Z
    void TaskbarLocation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskbarTheme@TaskbarFrame@implementation@Taskbar@winrt@@QEAA?AW4ElementTheme@Xaml@UI@Windows@4@XZ
    int TaskbarTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskbarThemeProperty@TaskbarFrame@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque TaskbarThemeProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetChildItem@TaskbarFrame@implementation@Taskbar@winrt@@QEBA?AUFrameworkElement@Xaml@UI@Windows@4@I@Z
    WindissectOpaque TryGetChildItem(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsSmallFrame@TaskbarFrame@implementation@Taskbar@winrt@@QEAAX_N@Z
    void UpdateIsSmallFrame(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTaskListLabeledItems@TaskbarFrame@implementation@Taskbar@winrt@@QEAAXXZ
    void UpdateTaskListLabeledItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTaskbarButtonInteractionMode@TaskbarFrame@implementation@Taskbar@winrt@@QEAAXXZ
    void UpdateTaskbarButtonInteractionMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTaskbarLocation@TaskbarFrame@implementation@Taskbar@winrt@@QEAAXXZ
    void UpdateTaskbarLocation();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarFrame@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~TaskbarFrame();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyKeyboardFocusNavigation@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXW4FocusNavigationType@234@@Z
    void ApplyKeyboardFocusNavigation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForGlomChange@TaskbarFrame@implementation@Taskbar@winrt@@AEAA_NXZ
    bool CheckForGlomChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearRelocationRefreshDelayed@TaskbarFrame@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@XZ
    WindissectOpaque ClearRelocationRefreshDelayed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteGestureIfActive@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXXZ
    void CompleteGestureIfActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeLeftMarginForMRUButton@TaskbarFrame@implementation@Taskbar@winrt@@AEAAMXZ
    float ComputeLeftMarginForMRUButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@TaskbarFrame@implementation@Taskbar@winrt@@CAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTabStops@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXXZ
    void EnsureTabStops();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandOrCollapse@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXXZ
    void ExpandOrCollapse();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextRealizedElementIndex@TaskbarFrame@implementation@Taskbar@winrt@@AEAAHH@Z
    int GetNextRealizedElementIndex(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviousRealizedElementIndex@TaskbarFrame@implementation@Taskbar@winrt@@AEAAHH@Z
    int GetPreviousRealizedElementIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeExpandAnimation@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXXZ
    void InitializeExpandAnimation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskbarSearchboxMode@TaskbarFrame@implementation@Taskbar@winrt@@AEBA_NAEBUUIElement@Xaml@UI@Windows@4@@Z
    bool IsTaskbarSearchboxMode(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTemplateLoaded@TaskbarFrame@implementation@Taskbar@winrt@@AEBA_NXZ
    bool IsTemplateLoaded() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveKeyboardFocusToItem@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXI@Z
    void MoveKeyboardFocusToItem(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAlignmentChanged@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXXZ
    void OnAlignmentChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationsEnabledChanged@TaskbarFrame@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@AEBUUISettings@ViewManagement@UI@Windows@4@AEBUUISettingsAnimationsEnabledChangedEventArgs@7894@@Z
    WindissectOpaque OnAnimationsEnabledChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayModeChanged@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXXZ
    void OnDisplayModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragStarted@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXXZ
    void OnDragStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementClearing@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXAEBUItemsRepeater@Controls@Xaml@UI@Microsoft@4@AEBUItemsRepeaterElementClearingEventArgs@67894@@Z
    void OnElementClearing(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementPrepared@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXAEBUItemsRepeater@Controls@Xaml@UI@Microsoft@4@AEBUItemsRepeaterElementPreparedEventArgs@67894@@Z
    void OnElementPrepared(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementPreviewKeyDown@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUKeyRoutedEventArgs@Input@Xaml@UI@74@@Z
    void OnElementPreviewKeyDown(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementPreviewKeyUp@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUKeyRoutedEventArgs@Input@Xaml@UI@74@@Z
    void OnElementPreviewKeyUp(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementRemoved@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXUTaskbarElementAnimator@34@UUIElement@Xaml@UI@Windows@4@@Z
    void OnElementRemoved(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExpectedTaskbarFocusLoss@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void OnExpectedTaskbarFocusLoss(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGettingFocus@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXAEBUUIElement@Xaml@UI@Windows@4@AEBUGettingFocusEventArgs@Input@6784@@Z
    void OnGettingFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGroupingModeChanged@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXXZ
    void OnGroupingModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHideOverflowFlyoutRequested@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void OnHideOverflowFlyoutRequested(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIconSizePreferenceChanged@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXXZ
    void OnIconSizePreferenceChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyboardCharacterReceived@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUCharacterReceivedRoutedEventArgs@Input@Xaml@UI@74@@Z
    void OnKeyboardCharacterReceived(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLosingFocus@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXAEBUUIElement@Xaml@UI@Windows@4@AEBULosingFocusEventArgs@Input@6784@@Z
    void OnLosingFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOrientationChanged@TaskbarFrame@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@AEBUSimpleOrientationSensor@Sensors@Devices@Windows@4@AEBUSimpleOrientationSensorOrientationChangedEventArgs@7894@@Z
    WindissectOpaque OnOrientationChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOverflowChanged@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXXZ
    void OnOverflowChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScreenEdgeStrokePointerEntered@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUPointerRoutedEventArgs@Input@Xaml@UI@74@@Z
    void OnScreenEdgeStrokePointerEntered(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSwipe@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXAEBUSwipeEventArgs@34@@Z
    void OnSwipe(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskbarButtonCommandRequested@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@W4TaskbarCommand@Shell@UI@WindowsUdk@4@@Z
    void OnTaskbarButtonCommandRequested(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskbarButtonHideLegacyExtendedUIRequested@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void OnTaskbarButtonHideLegacyExtendedUIRequested(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskbarButtonLoaded@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void OnTaskbarButtonLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskbarButtonShowLegacyExtendedUIRequested@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUTaskGroup@Shell@UI@WindowsUdk@4@@Z
    void OnTaskbarButtonShowLegacyExtendedUIRequested(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskbarLayoutChildBoundsChanged@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXXZ
    void OnTaskbarLayoutChildBoundsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskbarLayoutChildBoundsPending@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXXZ
    void OnTaskbarLayoutChildBoundsPending();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskbarLocationChanged@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXXZ
    void OnTaskbarLocationChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayGlomUnglomAnimation@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXXZ
    void PlayGlomUnglomAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareTaskbarButton@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXAEBUUIElement@Xaml@UI@Windows@4@@Z
    void PrepareTaskbarButton(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRepositionAnimations@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXXZ
    void SetRepositionAnimations();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuppressAnimations@TaskbarFrame@implementation@Taskbar@winrt@@AEAAX_N@Z
    void SetSuppressAnimations(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldMoveFocusToStart@TaskbarFrame@implementation@Taskbar@winrt@@AEAA_NAEBUGettingFocusEventArgs@Input@Xaml@UI@Windows@4@@Z
    bool ShouldMoveFocusToStart(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartRelocationAnimation@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXXZ
    void StartRelocationAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StoreGlomPositions@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXXZ
    void StoreGlomPositions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindOverflowButton@TaskbarFrame@implementation@Taskbar@winrt@@AEAA?AUUIElement@Xaml@UI@Windows@4@XZ
    WindissectOpaque TryFindOverflowButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindStartButton@TaskbarFrame@implementation@Taskbar@winrt@@AEAA?AUUIElement@Xaml@UI@Windows@4@XZ
    WindissectOpaque TryFindStartButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindSystemTray@TaskbarFrame@implementation@Taskbar@winrt@@AEAA?AUUIElement@Xaml@UI@Windows@4@XZ
    WindissectOpaque TryFindSystemTray();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAnimationsEnabled@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateAnimationsEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGripperDimensions@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXW4SimpleOrientation@Sensors@Devices@Windows@4@@Z
    void UpdateGripperDimensions(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGripperVisibility@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateGripperVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTouchLayout@TaskbarFrame@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateTouchLayout();
};
} // namespace winrt::Taskbar::implementation

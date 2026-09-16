#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 234 member(s).
class TaskbarTelemetry {
public:
    class GestureManager_PendingOperationStarted;
    class GestureManager_StartGestureAsync;
    class OnAppsListGroupCollection_ItemInserted;
    class OnAppsListGroupCollection_ItemRemoved;
    class OnDisplayModeChanged;
    class OnInteractionModeChanged;
    class OnIsExpandedChanged;
    class SearchItemUriInvoked;
    class TaskbarPostureChange;
    class TaskbarRecommended_RecommendationComputedActivity;
    class TransitionToPosture;
    class ViewCoordinatorCollapseTaskbar;
    class ViewCoordinatorExpandTaskbar;
    class ViewCoordinatorUpdateIsExpanded;
    class ViewCoordinator_OnShellViewVisibilityChanged;
    class ViewCoordinator_ShouldTaskbarBeExpanded;
    class ViewCoordinator_TaskbarDismissRequested;
    class ViewCoordinator_TaskbarShowRequested;
    class ViewCoordinator_UpdateIsExpandedAfterDebounceDelay;
    class ViewCoordinator_UpdateIsExpandedAfterHoverDelay;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActiveTaskListItemChanged@TaskbarTelemetry@@SAXXZ
    static void ActiveTaskListItemChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationsReactivatedQueued@TaskbarTelemetry@@SAXXZ
    static void AnimationsReactivatedQueued();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationsSuppressed@TaskbarTelemetry@@SAXXZ
    static void AnimationsSuppressed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppTaskController_Initialize@TaskbarTelemetry@@SAXXZ
    static void AppTaskController_Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppTaskController_IsAppTask_NoTasks@TaskbarTelemetry@@SAXXZ
    static void AppTaskController_IsAppTask_NoTasks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppTaskController_IsAppTask_TaskFound@TaskbarTelemetry@@SAXXZ
    static void AppTaskController_IsAppTask_TaskFound();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppTaskController_IsAppTask_TaskNotFound@TaskbarTelemetry@@SAXXZ
    static void AppTaskController_IsAppTask_TaskNotFound();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppTaskController_ThreadStopped@TaskbarTelemetry@@SAXXZ
    static void AppTaskController_ThreadStopped();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BadgeKindNone@TaskbarTelemetry@@SAXXZ
    static void BadgeKindNone();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Gesture_HideHighlightTriggerFired@TaskbarTelemetry@@SAXXZ
    static void Gesture_HideHighlightTriggerFired();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Gesture_ShowHighlightTriggerFired@TaskbarTelemetry@@SAXXZ
    static void Gesture_ShowHighlightTriggerFired();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GotKeyboardFocus@TaskbarTelemetry@@SAXXZ
    static void GotKeyboardFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HoverCardClicked@TaskbarTelemetry@@SAXXZ
    static void HoverCardClicked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HoverFlyoutDismissed@TaskbarTelemetry@@SAXXZ
    static void HoverFlyoutDismissed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HoverFlyoutDismissing@TaskbarTelemetry@@SAXXZ
    static void HoverFlyoutDismissing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HoverFlyoutPromotedToSticky@TaskbarTelemetry@@SAXXZ
    static void HoverFlyoutPromotedToSticky();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MovedItemFocusUsingFirstLetterNavigation@TaskbarTelemetry@@SAXXZ
    static void MovedItemFocusUsingFirstLetterNavigation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverflowFlyoutDismissCancelled@TaskbarTelemetry@@SAXXZ
    static void OverflowFlyoutDismissCancelled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverflowFlyoutDismissed@TaskbarTelemetry@@SAXXZ
    static void OverflowFlyoutDismissed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverflowFlyoutDismissedEvent@TaskbarTelemetry@@SAXXZ
    static void OverflowFlyoutDismissedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverflowFlyoutDismissing@TaskbarTelemetry@@SAXXZ
    static void OverflowFlyoutDismissing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverflowFlyoutLightDismissRequested@TaskbarTelemetry@@SAXXZ
    static void OverflowFlyoutLightDismissRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverflowFlyoutScrollButtonsLoadedAndVisible@TaskbarTelemetry@@SAXXZ
    static void OverflowFlyoutScrollButtonsLoadedAndVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SearchBoxBButtonClicked@TaskbarTelemetry@@SAXXZ
    static void SearchBoxBButtonClicked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SharedFileAppTaskProvider_Initialize@TaskbarTelemetry@@SAXXZ
    static void SharedFileAppTaskProvider_Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SharedFileAppTaskProvider_PackageCatalogFailed@TaskbarTelemetry@@SAXXZ
    static void SharedFileAppTaskProvider_PackageCatalogFailed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SharedFileAppTaskProvider_RegisterWatcherRootFailed@TaskbarTelemetry@@SAXXZ
    static void SharedFileAppTaskProvider_RegisterWatcherRootFailed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartBadgeAnimation@TaskbarTelemetry@@SAXXZ
    static void StartBadgeAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartBadgeAnimationCompleted@TaskbarTelemetry@@SAXXZ
    static void StartBadgeAnimationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartBadgeExitAnimation@TaskbarTelemetry@@SAXXZ
    static void StartBadgeExitAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartBadgeExitAnimationCompleted@TaskbarTelemetry@@SAXXZ
    static void StartBadgeExitAnimationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartBeaconAnimation@TaskbarTelemetry@@SAXXZ
    static void StartBeaconAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartBeaconAnimationCompleted@TaskbarTelemetry@@SAXXZ
    static void StartBeaconAnimationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartBeaconExitAnimation@TaskbarTelemetry@@SAXXZ
    static void StartBeaconExitAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartBeaconExitAnimationCompleted@TaskbarTelemetry@@SAXXZ
    static void StartBeaconExitAnimationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartEntranceAnimationCompleted@TaskbarTelemetry@@SAXXZ
    static void StartEntranceAnimationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartGlomAnimation@TaskbarTelemetry@@SAXXZ
    static void StartGlomAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartGlomAnimationCompleted@TaskbarTelemetry@@SAXXZ
    static void StartGlomAnimationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartHideAnimation@TaskbarTelemetry@@SAXXZ
    static void StartHideAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartHideAnimationCompleted@TaskbarTelemetry@@SAXXZ
    static void StartHideAnimationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartOverlayIconAnimation@TaskbarTelemetry@@SAXXZ
    static void StartOverlayIconAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartOverlayIconAnimationCompleted@TaskbarTelemetry@@SAXXZ
    static void StartOverlayIconAnimationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartOverlayIconExitAnimation@TaskbarTelemetry@@SAXXZ
    static void StartOverlayIconExitAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartOverlayIconExitAnimationCompleted@TaskbarTelemetry@@SAXXZ
    static void StartOverlayIconExitAnimationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartRequestingAttentionAnimation@TaskbarTelemetry@@SAXXZ
    static void StartRequestingAttentionAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartRequestingAttentionAnimationCompleted@TaskbarTelemetry@@SAXXZ
    static void StartRequestingAttentionAnimationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartRunningIndicatorAnimation@TaskbarTelemetry@@SAXXZ
    static void StartRunningIndicatorAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartRunningIndicatorAnimationCompleted@TaskbarTelemetry@@SAXXZ
    static void StartRunningIndicatorAnimationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartShapeBadgeExitAnimation@TaskbarTelemetry@@SAXXZ
    static void StartShapeBadgeExitAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartShapeBadgeExitAnimationCompleted@TaskbarTelemetry@@SAXXZ
    static void StartShapeBadgeExitAnimationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskListButtonInvokedUsingKeyboard@TaskbarTelemetry@@SAXXZ
    static void TaskListButtonInvokedUsingKeyboard();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskListButtonOnApplyTemplate@TaskbarTelemetry@@SAXXZ
    static void TaskListButtonOnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskListButtonOnClearing@TaskbarTelemetry@@SAXXZ
    static void TaskListButtonOnClearing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskListButtonOnPrepared@TaskbarTelemetry@@SAXXZ
    static void TaskListButtonOnPrepared();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskListButtonUpdateVisualStates@TaskbarTelemetry@@SAXXZ
    static void TaskListButtonUpdateVisualStates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskListSizeChanged_@TaskbarTelemetry@@QEBAX_NHHHHH0_KH@Z
    void TaskListSizeChanged_(bool, int, int, int, int, int, bool, uint64_t, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskbarIconChanged_@TaskbarTelemetry@@QEAAXPEB_W_KIJ@Z
    void TaskbarIconChanged_(wchar_t const *, uint64_t, unsigned int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewCoordinator_ExpandingTaskbarAfterAllWindowsMinimized@TaskbarTelemetry@@SAXXZ
    static void ViewCoordinator_ExpandingTaskbarAfterAllWindowsMinimized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VirtualDesktopSwitch_AppsListChanging@TaskbarTelemetry@@SAXXZ
    static void VirtualDesktopSwitch_AppsListChanging();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WidgetTaskbarBadgeShown_@TaskbarTelemetry@@QEAAXAEBQEB_WAEBN1AEBUAugmentedEntryPointBadgeMetrics@1@@Z
    void WidgetTaskbarBadgeShown_(wchar_t const * const &, double const &, double const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WidgetTaskbarContentUpdated_@TaskbarTelemetry@@QEAAXPEB_W00_N11100AEBH210111111@Z
    void WidgetTaskbarContentUpdated_(wchar_t const *, wchar_t const *, wchar_t const *, bool, bool, bool, bool, wchar_t const *, wchar_t const *, int const &, int const &, bool, wchar_t const *, bool, bool, bool, bool, bool, bool);
};

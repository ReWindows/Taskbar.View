#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 47 member(s).
namespace winrt::Taskbar::implementation {
class ViewCoordinator {
public:
    class ShellViewCoordinatorContext;
    class SingleTaskbarViewCoordinatorState;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearShellViewVisibilityHint@ViewCoordinator@implementation@Taskbar@winrt@@QEAAXW4ShellView@Shell@UI@WindowsUdk@4@@Z
    void ClearShellViewVisibilityHint(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollapseTaskbar@ViewCoordinator@implementation@Taskbar@winrt@@QEAAX_K@Z
    void CollapseTaskbar(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandTaskbar@ViewCoordinator@implementation@Taskbar@winrt@@QEAAX_K@Z
    void ExpandTaskbar(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleAreAllWindowsMinimizedChanged@ViewCoordinator@implementation@Taskbar@winrt@@QEAAX_K@Z
    void HandleAreAllWindowsMinimizedChanged(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDragCompleted@ViewCoordinator@implementation@Taskbar@winrt@@QEAAX_K_N@Z
    void HandleDragCompleted(uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDragStarted@ViewCoordinator@implementation@Taskbar@winrt@@QEAAX_K@Z
    void HandleDragStarted(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleEdgeGestureCompleted@ViewCoordinator@implementation@Taskbar@winrt@@QEAAX_KAEBU?$com_ptr@UTaskbarEdgeGesture@implementation@Taskbar@winrt@@@4@@Z
    void HandleEdgeGestureCompleted(uint64_t, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleEdgeGestureStarted@ViewCoordinator@implementation@Taskbar@winrt@@QEAAX_KAEBU?$com_ptr@UTaskbarEdgeGesture@implementation@Taskbar@winrt@@@4@@Z
    void HandleEdgeGestureStarted(uint64_t, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleIsExpandedChanged@ViewCoordinator@implementation@Taskbar@winrt@@QEAAX_K@Z
    void HandleIsExpandedChanged(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleIsPointerOverTaskbarFrameChanged@ViewCoordinator@implementation@Taskbar@winrt@@QEAAX_K_NW4InputDeviceKind@Shell@UI@WindowsUdk@4@@Z
    void HandleIsPointerOverTaskbarFrameChanged(uint64_t, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleOnPointerPressed@ViewCoordinator@implementation@Taskbar@winrt@@QEAAXXZ
    void HandleOnPointerPressed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePointerEnteredScreenEdge@ViewCoordinator@implementation@Taskbar@winrt@@QEAAX_KW4InputDeviceKind@Shell@UI@WindowsUdk@4@@Z
    void HandlePointerEnteredScreenEdge(uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSwipe@ViewCoordinator@implementation@Taskbar@winrt@@QEAAXAEBUSwipeEventArgs@34@_K@Z
    void HandleSwipe(WindissectOpaque const &, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ViewCoordinator@implementation@Taskbar@winrt@@QEAAXXZ
    void Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InteractionModeChanged@ViewCoordinator@implementation@Taskbar@winrt@@QEAAX_K@Z
    void InteractionModeChanged(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCursorSuppressed@ViewCoordinator@implementation@Taskbar@winrt@@QEAA_NXZ
    bool IsCursorSuppressed();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEdgeGestureActive@ViewCoordinator@implementation@Taskbar@winrt@@QEBA_N_K@Z
    bool IsEdgeGestureActive(uint64_t) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExpanded@ViewCoordinator@implementation@Taskbar@winrt@@QEAA_N_K@Z
    bool IsExpanded(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExplicitlyCollapsedTaskbar@ViewCoordinator@implementation@Taskbar@winrt@@QEBA_N_K@Z
    bool IsExplicitlyCollapsedTaskbar(uint64_t) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHasFocus@ViewCoordinator@implementation@Taskbar@winrt@@QEAAX_K_N@Z
    void SetHasFocus(uint64_t, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsExplicitlyCollapsedTaskbar@ViewCoordinator@implementation@Taskbar@winrt@@QEAAX_K_N@Z
    void SetIsExplicitlyCollapsedTaskbar(uint64_t, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShellViewVisibilityHint@ViewCoordinator@implementation@Taskbar@winrt@@QEAAXW4ShellView@Shell@UI@WindowsUdk@4@W4ViewVisibility@6784@@Z
    void SetShellViewVisibilityHint(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldExpandOnAreAllWindowsMinimizedChanged@ViewCoordinator@implementation@Taskbar@winrt@@QEAA_N_K@Z
    bool ShouldExpandOnAreAllWindowsMinimizedChanged(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldStayExpandedChanged@ViewCoordinator@implementation@Taskbar@winrt@@QEAAX_K_N@Z
    void ShouldStayExpandedChanged(uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldTaskbarBeExpanded@ViewCoordinator@implementation@Taskbar@winrt@@QEAA_N_K_N@Z
    bool ShouldTaskbarBeExpanded(uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsExpanded@ViewCoordinator@implementation@Taskbar@winrt@@QEAAX_KW4TaskbarExpandCollapseReason@TaskbarTipTest@@@Z
    void UpdateIsExpanded(uint64_t, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ViewCoordinator@implementation@Taskbar@winrt@@QEAA@XZ
    ViewCoordinator();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ViewCoordinator@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~ViewCoordinator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForRunningAndStartAutoHideUsingShyTaskbarShowTest@ViewCoordinator@implementation@Taskbar@winrt@@AEAAXXZ
    void CheckForRunningAndStartAutoHideUsingShyTaskbarShowTest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteEdgeGesture@ViewCoordinator@implementation@Taskbar@winrt@@AEAAX_KAEBU?$com_ptr@UTaskbarEdgeGesture@implementation@Taskbar@winrt@@@4@@Z
    void CompleteEdgeGesture(uint64_t, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteEdgeGestureAfterDelay@ViewCoordinator@implementation@Taskbar@winrt@@AEAAX_KAEBU?$com_ptr@UTaskbarEdgeGesture@implementation@Taskbar@winrt@@@4@@Z
    void CompleteEdgeGestureAfterDelay(uint64_t, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissAllShellViews@ViewCoordinator@implementation@Taskbar@winrt@@AEAAXXZ
    void DismissAllShellViews();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissShellView@ViewCoordinator@implementation@Taskbar@winrt@@AEAAXW4ShellView@Shell@UI@WindowsUdk@4@AEBUShellViewCoordinator@6784@@Z
    void DismissShellView(int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceCompleteEdgeGesture@ViewCoordinator@implementation@Taskbar@winrt@@AEAAX_K@Z
    void ForceCompleteEdgeGesture(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskbarCurrentPosture@ViewCoordinator@implementation@Taskbar@winrt@@AEAA?AW4Posture@TaskbarTipTest@@_K@Z
    int GetTaskbarCurrentPosture(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleShowRequestedOnTaskbar@ViewCoordinator@implementation@Taskbar@winrt@@AEAAXUShellViewAnimationProperties@Shell@UI@WindowsUdk@4@_KAEAUSingleTaskbarViewCoordinatorState@1234@@Z
    void HandleShowRequestedOnTaskbar(WindissectOpaque, uint64_t, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExtendedUIVisible@ViewCoordinator@implementation@Taskbar@winrt@@AEAA_NAEBUSingleTaskbarViewCoordinatorState@1234@@Z
    bool IsExtendedUIVisible(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskbarExpandable@ViewCoordinator@implementation@Taskbar@winrt@@AEAA_NAEBUSingleTaskbarViewCoordinatorState@1234@@Z
    bool IsTaskbarExpandable(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellViewVisibilityChanged@ViewCoordinator@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@AEBUShellViewCoordinator@Shell@UI@WindowsUdk@4@AEBUIInspectable@Foundation@Windows@4@@Z
    WindissectOpaque OnShellViewVisibilityChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskbarDismissRequested@ViewCoordinator@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@AEBUShellViewCoordinator@Shell@UI@WindowsUdk@4@UDismissShellViewRequestedEventArgs@7894@@Z
    WindissectOpaque OnTaskbarDismissRequested(WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskbarShowRequested@ViewCoordinator@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@AEBUShellViewCoordinator@Shell@UI@WindowsUdk@4@UShowShellViewRequestedEventArgs@7894@@Z
    WindissectOpaque OnTaskbarShowRequested(WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldStayExpandedDocked@ViewCoordinator@implementation@Taskbar@winrt@@AEAA_NAEBUSingleTaskbarViewCoordinatorState@1234@@Z
    bool ShouldStayExpandedDocked(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsExpandedAfterDebounceDelay@ViewCoordinator@implementation@Taskbar@winrt@@AEAAX_KW4TaskbarExpandCollapseReason@TaskbarTipTest@@@Z
    void UpdateIsExpandedAfterDebounceDelay(uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsExpandedAfterHoverDelay@ViewCoordinator@implementation@Taskbar@winrt@@AEAAX_K_NW4TaskbarExpandCollapseReason@TaskbarTipTest@@@Z
    void UpdateIsExpandedAfterHoverDelay(uint64_t, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTaskbarVisibility@ViewCoordinator@implementation@Taskbar@winrt@@AEAAXAEBUSingleTaskbarViewCoordinatorState@1234@@Z
    void UpdateTaskbarVisibility(WindissectOpaque const &);
};
} // namespace winrt::Taskbar::implementation

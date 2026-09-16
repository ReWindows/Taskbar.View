#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 59 member(s).
namespace winrt::Taskbar::implementation {
class TaskListGroupViewModel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccessibleName@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque AccessibleName() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutomationId@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque AutomationId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?BadgeData@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEBA?AUBadge@StartScreen@UI@WindowsUdk@4@XZ
    WindissectOpaque BadgeData() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Collapse@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAAXXZ
    void Collapse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayName@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque DisplayName() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoNotTakeActivationOnPointerDown@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAAX_N@Z
    void DoNotTakeActivationOnPointerDown(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Expand@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAAXXZ
    void Expand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandedMinWidth@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAAMXZ
    float ExpandedMinWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandedSingleButtonMinWidth@TaskListGroupViewModel@implementation@Taskbar@winrt@@SAMXZ
    static float ExpandedSingleButtonMinWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandedSingleButtonMinWidth@TaskListGroupViewModel@implementation@Taskbar@winrt@@SAMN@Z
    static float ExpandedSingleButtonMinWidth(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHelpTextForBadge@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEBA?AUhstring@4@AEBUBadge@StartScreen@UI@WindowsUdk@4@@Z
    WindissectOpaque GetHelpTextForBadge(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHelpTextForSharedWindow@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque GetHelpTextForSharedWindow() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconHeight@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAANAEBUIRandomAccessStream@Streams@Storage@Windows@4@@Z
    double GetIconHeight(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnails@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEBA?AU?$IObservableVector@UTaskItemThumbnail@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@4@XZ
    WindissectOpaque GetThumbnails() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HelpText@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque HelpText() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Icon@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEBA?AUIRandomAccessStream@Streams@Storage@Windows@4@XZ
    WindissectOpaque Icon() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconHeight@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAAXN@Z
    void IconHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstallProgress@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEBA?AU0Shell@UI@WindowsUdk@4@XZ
    WindissectOpaque InstallProgress() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsActive@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAAX_N@Z
    void IsActive(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMostRecentlyUsed@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAAX_N@Z
    void IsMostRecentlyUsed(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMultiWindow@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEBA_NXZ
    bool IsMultiWindow() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPlaceholder@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEBA_NXZ
    bool IsPlaceholder() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShowingIndividualWindows@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEBA_NXZ
    bool IsShowingIndividualWindows() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClick@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAAXAEBULauncherOptions@System@Windows@4@@Z
    void OnClick(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextRequested@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAAXXZ
    void OnContextRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCycleWindows@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAAXXZ
    void OnCycleWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotKeyboardFocus@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAAXXZ
    void OnGotKeyboardFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowFlashingChanged@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAAXXZ
    void OnShowFlashingChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSwipe@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAAXAEBUSwipeEventArgs@34@@Z
    void OnSwipe(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskGroupPropertyChanged@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAAXAEBUTaskGroupPropertyChangedEventArgs@Shell@UI@WindowsUdk@4@@Z
    void OnTaskGroupPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskItemPropertyChanged@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAAXAEBUTaskItemPropertyChangedEventArgs@Shell@UI@WindowsUdk@4@@Z
    void OnTaskItemPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskItemsCollectionChanged@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAAXAEBUTaskItemCollectionChangedEventArgs@Shell@UI@WindowsUdk@4@@Z
    void OnTaskItemsCollectionChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisualStateChanged@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAAXAEBUTaskbarButtonVisualStateChangedEventArgs@34@@Z
    void OnVisualStateChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowAdded@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAAXI@Z
    void OnWindowAdded(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowRemoved@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAAXI@Z
    void OnWindowRemoved(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverlayIcon@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEBA?AUIRandomAccessStream@Streams@Storage@Windows@4@XZ
    WindissectOpaque OverlayIcon() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Progress@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEBA?AUTaskItemProgress@Shell@UI@WindowsUdk@4@XZ
    WindissectOpaque Progress() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rank@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAAXN@Z
    void Rank(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppTaskAccessibleName@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAAXUhstring@4@@Z
    void SetAppTaskAccessibleName(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppTaskDisplayName@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAAXUhstring@4@@Z
    void SetAppTaskDisplayName(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppTaskIcon@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAAXUIRandomAccessStream@Streams@Storage@Windows@4@@Z
    void SetAppTaskIcon(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLastActiveWindow@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAAXUTaskListWindowViewModel@34@@Z
    void SetLastActiveWindow(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTaskGroupBounds@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAAXURect@Foundation@Windows@4@0@Z
    void SetTaskGroupBounds(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowFlashing@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEBA_NXZ
    bool ShowFlashing() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SingleButtonNoLabelMinWidth@TaskListGroupViewModel@implementation@Taskbar@winrt@@SAMW4UserInteractionMode@ViewManagement@UI@Windows@4@@Z
    static float SingleButtonNoLabelMinWidth(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAA@AEBUTaskGroup@Shell@UI@WindowsUdk@3@AEBU?$com_ptr@UTaskbarConfiguration@implementation@Taskbar@winrt@@@3@AEBU?$com_ptr@UHoverFlyoutModel@implementation@Taskbar@winrt@@@3@AEBU?$com_ptr@UViewCoordinator@implementation@Taskbar@winrt@@@3@_K@Z
    TaskListGroupViewModel(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCollapseState@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAAXXZ
    void UpdateCollapseState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGroupBounds@TaskListGroupViewModel@implementation@Taskbar@winrt@@QEAAX_N@Z
    void UpdateGroupBounds(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskListGroupViewModel@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~TaskListGroupViewModel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildLastActivatedWindows@TaskListGroupViewModel@implementation@Taskbar@winrt@@AEAAXXZ
    void BuildLastActivatedWindows();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLeftClick@TaskListGroupViewModel@implementation@Taskbar@winrt@@AEAA_NAEBUValueSet@Collections@Foundation@Windows@4@@Z
    bool IsLeftClick(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeTaskListWindowViewModel@TaskListGroupViewModel@implementation@Taskbar@winrt@@AEAA?AUIInspectable@Foundation@Windows@4@UTaskItem@Shell@UI@WindowsUdk@4@@Z
    WindissectOpaque MakeTaskListWindowViewModel(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagatePartiallyOverflowedToChildren@TaskListGroupViewModel@implementation@Taskbar@winrt@@AEAAX_N@Z
    void PropagatePartiallyOverflowedToChildren(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppTaskBadgeData@TaskListGroupViewModel@implementation@Taskbar@winrt@@AEAAXXZ
    void SetAppTaskBadgeData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHasLabel@TaskListGroupViewModel@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateHasLabel();
};
} // namespace winrt::Taskbar::implementation

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 32 member(s).
namespace winrt::Taskbar::implementation {
class TaskListWindowViewModel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccessibleName@TaskListWindowViewModel@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque AccessibleName() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutomationId@TaskListWindowViewModel@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque AutomationId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?BadgeData@TaskListWindowViewModel@implementation@Taskbar@winrt@@QEBA?AUBadge@StartScreen@UI@WindowsUdk@4@XZ
    WindissectOpaque BadgeData() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayName@TaskListWindowViewModel@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque DisplayName() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHelpTextForBadge@TaskListWindowViewModel@implementation@Taskbar@winrt@@QEBA?AUhstring@4@AEBUBadge@StartScreen@UI@WindowsUdk@4@@Z
    WindissectOpaque GetHelpTextForBadge(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHelpTextForSharedWindow@TaskListWindowViewModel@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque GetHelpTextForSharedWindow() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconHeight@TaskListWindowViewModel@implementation@Taskbar@winrt@@QEAANAEBUIRandomAccessStream@Streams@Storage@Windows@4@@Z
    double GetIconHeight(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnails@TaskListWindowViewModel@implementation@Taskbar@winrt@@QEBA?AU?$IObservableVector@UTaskItemThumbnail@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@4@XZ
    WindissectOpaque GetThumbnails() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HelpText@TaskListWindowViewModel@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque HelpText() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Icon@TaskListWindowViewModel@implementation@Taskbar@winrt@@QEBA?AUIRandomAccessStream@Streams@Storage@Windows@4@XZ
    WindissectOpaque Icon() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconHeight@TaskListWindowViewModel@implementation@Taskbar@winrt@@QEAAXN@Z
    void IconHeight(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsActive@TaskListWindowViewModel@implementation@Taskbar@winrt@@QEAAX_N@Z
    void IsActive(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExtendedUIHotTracked@TaskListWindowViewModel@implementation@Taskbar@winrt@@QEAAX_N@Z
    void IsExtendedUIHotTracked(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMostRecentlyUsed@TaskListWindowViewModel@implementation@Taskbar@winrt@@QEAAX_N@Z
    void IsMostRecentlyUsed(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClick@TaskListWindowViewModel@implementation@Taskbar@winrt@@QEAAXAEBUValueSet@Collections@Foundation@Windows@4@@Z
    void OnClick(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextRequested@TaskListWindowViewModel@implementation@Taskbar@winrt@@QEAAXXZ
    void OnContextRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotKeyboardFocus@TaskListWindowViewModel@implementation@Taskbar@winrt@@QEAAXXZ
    void OnGotKeyboardFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowFlashingChanged@TaskListWindowViewModel@implementation@Taskbar@winrt@@QEAAXXZ
    void OnShowFlashingChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskItemPropertyChanged@TaskListWindowViewModel@implementation@Taskbar@winrt@@QEAAXAEBUTaskItemPropertyChangedEventArgs@Shell@UI@WindowsUdk@4@@Z
    void OnTaskItemPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisualStateChanged@TaskListWindowViewModel@implementation@Taskbar@winrt@@QEAAXAEBUTaskbarButtonVisualStateChangedEventArgs@34@@Z
    void OnVisualStateChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Progress@TaskListWindowViewModel@implementation@Taskbar@winrt@@QEBA?AUTaskItemProgress@Shell@UI@WindowsUdk@4@XZ
    WindissectOpaque Progress() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rank@TaskListWindowViewModel@implementation@Taskbar@winrt@@QEAAXN@Z
    void Rank(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppTaskWindowTitle@TaskListWindowViewModel@implementation@Taskbar@winrt@@QEAAXUhstring@4@@Z
    void SetAppTaskWindowTitle(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsPartOfPartiallyOverflowedGroup@TaskListWindowViewModel@implementation@Taskbar@winrt@@QEAAX_N@Z
    void SetIsPartOfPartiallyOverflowedGroup(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowFlashing@TaskListWindowViewModel@implementation@Taskbar@winrt@@QEBA_NXZ
    bool ShowFlashing() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskListWindowViewModel@implementation@Taskbar@winrt@@QEAA@AEBUTaskItem@Shell@UI@WindowsUdk@3@AEBUTaskGroup@5673@AEBU?$com_ptr@UTaskbarConfiguration@implementation@Taskbar@winrt@@@3@AEBU?$com_ptr@UHoverFlyoutModel@implementation@Taskbar@winrt@@@3@AEBU?$com_ptr@UViewCoordinator@implementation@Taskbar@winrt@@@3@_K@Z
    TaskListWindowViewModel(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, uint64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskListWindowViewModel@implementation@Taskbar@winrt@@QEAA@AEBUTaskItem@Shell@UI@WindowsUdk@3@AEBUTaskGroup@5673@AEBU?$com_ptr@UTaskbarConfiguration@implementation@Taskbar@winrt@@@3@AEBU?$com_ptr@UHoverFlyoutModel@implementation@Taskbar@winrt@@@3@AEBU?$com_ptr@UViewCoordinator@implementation@Taskbar@winrt@@@3@_K_N@Z
    TaskListWindowViewModel(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, uint64_t, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskListWindowViewModel@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~TaskListWindowViewModel();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppTaskBadgeData@TaskListWindowViewModel@implementation@Taskbar@winrt@@AEAAXXZ
    void SetAppTaskBadgeData();
};
} // namespace winrt::Taskbar::implementation

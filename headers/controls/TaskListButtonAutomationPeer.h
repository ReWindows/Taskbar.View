#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 17 member(s).
namespace winrt::Taskbar::implementation {
class TaskListButtonAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DropEffect@TaskListButtonAutomationPeer@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque DropEffect() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDropEffect@TaskListButtonAutomationPeer@implementation@Taskbar@winrt@@SA?AUhstring@4@AEBUDropPlaceholder@234@AEBU54@111@Z
    static WindissectOpaque GetDropEffect(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGrabbedItems@TaskListButtonAutomationPeer@implementation@Taskbar@winrt@@QEBA?AU?$com_array@UIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@winrt@@@4@XZ
    WindissectOpaque GetGrabbedItems() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@TaskListButtonAutomationPeer@implementation@Taskbar@winrt@@QEBA?AUIInspectable@Foundation@Windows@4@AEBW4PatternInterface@Peers@Automation@Xaml@UI@74@@Z
    WindissectOpaque GetPatternCore(int const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionInSetCore@TaskListButtonAutomationPeer@implementation@Taskbar@winrt@@QEAAHXZ
    int GetPositionInSetCore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeOfSetCore@TaskListButtonAutomationPeer@implementation@Taskbar@winrt@@QEAAHXZ
    int GetSizeOfSetCore();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskListButtonAutomationPeer@implementation@Taskbar@winrt@@QEAA@AEBUTaskListButton@23@@Z
    TaskListButtonAutomationPeer(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskListButtonAutomationPeer@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~TaskListButtonAutomationPeer();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@TaskListButtonAutomationPeer@implementation@Taskbar@winrt@@AEBA?AU?$com_ptr@UTaskListButton@implementation@Taskbar@winrt@@@4@XZ
    WindissectOpaque GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragCompleted@TaskListButtonAutomationPeer@implementation@Taskbar@winrt@@AEAAXAEBUTaskListButton@34@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnDragCompleted(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragStarted@TaskListButtonAutomationPeer@implementation@Taskbar@winrt@@AEAAXAEBUTaskListButton@34@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnDragStarted(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragging@TaskListButtonAutomationPeer@implementation@Taskbar@winrt@@AEAAXAEBUTaskListButton@34@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnDragging(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPinChanged@TaskListButtonAutomationPeer@implementation@Taskbar@winrt@@AEAAXAEBUTaskListButton@34@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnPinChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRearrangedViaKeyboard@TaskListButtonAutomationPeer@implementation@Taskbar@winrt@@AEAAXAEBUTaskListButton@34@AEBUButtonRearrangeArgs@34@@Z
    void OnRearrangedViaKeyboard(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRaiseAutomationEvent@TaskListButtonAutomationPeer@implementation@Taskbar@winrt@@AEAAXW4AutomationEvents@Peers@Automation@Xaml@UI@Windows@4@@Z
    void TryRaiseAutomationEvent(int);
};
} // namespace winrt::Taskbar::implementation

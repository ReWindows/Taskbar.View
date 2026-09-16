#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 12 member(s).
namespace winrt::Taskbar::implementation {
class TaskbarFrameAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DropEffect@TaskbarFrameAutomationPeer@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque DropEffect() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDropEffect@TaskbarFrameAutomationPeer@implementation@Taskbar@winrt@@SA?AUhstring@4@AEBUDropPlaceholder@234@AEBU54@111@Z
    static WindissectOpaque GetDropEffect(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGrabbedItems@TaskbarFrameAutomationPeer@implementation@Taskbar@winrt@@QEBA?AU?$com_array@UIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@winrt@@@4@XZ
    WindissectOpaque GetGrabbedItems() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskbarFrameAutomationPeer@implementation@Taskbar@winrt@@QEAA@AEBUTaskbarFrame@23@@Z
    TaskbarFrameAutomationPeer(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRaiseAutomationEvent@TaskbarFrameAutomationPeer@implementation@Taskbar@winrt@@QEAAXW4AutomationEvents@Peers@Automation@Xaml@UI@Windows@4@@Z
    void TryRaiseAutomationEvent(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarFrameAutomationPeer@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~TaskbarFrameAutomationPeer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragCompleted@TaskbarFrameAutomationPeer@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarFrame@34@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnDragCompleted(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragStarted@TaskbarFrameAutomationPeer@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarFrame@34@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnDragStarted(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragging@TaskbarFrameAutomationPeer@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarFrame@34@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnDragging(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsExpandedChanged@TaskbarFrameAutomationPeer@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarFrame@34@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnIsExpandedChanged(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::Taskbar::implementation

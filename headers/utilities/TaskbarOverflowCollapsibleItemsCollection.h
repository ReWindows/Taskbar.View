#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 11 member(s).
namespace winrt::Taskbar::implementation {
class TaskbarOverflowCollapsibleItemsCollection {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverflowItemAt@TaskbarOverflowCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEAA?AUIInspectable@Foundation@Windows@4@I@Z
    WindissectOpaque GetOverflowItemAt(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverflowWindowViewModelCount@TaskbarOverflowCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEAAII@Z
    unsigned int GetOverflowWindowViewModelCount(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexFromKey@TaskbarOverflowCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEBAHAEBUhstring@4@@Z
    int IndexFromKey(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NumTaskListVisuals@TaskbarOverflowCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEBAIXZ
    unsigned int NumTaskListVisuals() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOverflowChanged@TaskbarOverflowCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEAAXXZ
    void OnOverflowChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAll@TaskbarOverflowCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEAAXXZ
    void RemoveAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTaskListGroup@TaskbarOverflowCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEAAXU?$com_ptr@UTaskListGroupViewModel@implementation@Taskbar@winrt@@@4@@Z
    void RemoveTaskListGroup(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskbarOverflowCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEAA@AEBU?$com_ptr@UTaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@@3@@Z
    TaskbarOverflowCollapsibleItemsCollection(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarOverflowCollapsibleItemsCollection@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~TaskbarOverflowCollapsibleItemsCollection();
};
} // namespace winrt::Taskbar::implementation

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 5 member(s).
namespace winrt::Taskbar::implementation {
class TaskListDragOperation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragVisualOffset@TaskListDragOperation@implementation@Taskbar@winrt@@QEBA?AUfloat2@Numerics@Foundation@Windows@4@XZ
    WindissectOpaque DragVisualOffset() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskListDragOperation@implementation@Taskbar@winrt@@QEAA@$$QEAV0123@@Z
    TaskListDragOperation(WindissectOpaque &&);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskListDragOperation@implementation@Taskbar@winrt@@QEAA@AEBUTaskGroup@Shell@UI@WindowsUdk@3@IURect@Foundation@Windows@3@UPoint@9Windows@3@1_N3@Z
    TaskListDragOperation(WindissectOpaque const &, unsigned int, WindissectOpaque, WindissectOpaque, WindissectOpaque, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskListDragOperation@implementation@Taskbar@winrt@@QEAA@XZ
    ~TaskListDragOperation();
};
} // namespace winrt::Taskbar::implementation

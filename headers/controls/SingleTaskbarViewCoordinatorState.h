#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 5 member(s).
namespace winrt::Taskbar::implementation::ViewCoordinator {
class SingleTaskbarViewCoordinatorState {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActiveGesture@SingleTaskbarViewCoordinatorState@ViewCoordinator@implementation@Taskbar@winrt@@QEBA?AU?$com_ptr@UTaskbarEdgeGesture@implementation@Taskbar@winrt@@@5@XZ
    WindissectOpaque ActiveGesture() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Collapse@SingleTaskbarViewCoordinatorState@ViewCoordinator@implementation@Taskbar@winrt@@QEAAXXZ
    void Collapse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Expand@SingleTaskbarViewCoordinatorState@ViewCoordinator@implementation@Taskbar@winrt@@QEAAXXZ
    void Expand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopExpandCollapseTimer@SingleTaskbarViewCoordinatorState@ViewCoordinator@implementation@Taskbar@winrt@@QEAAXXZ
    void StopExpandCollapseTimer();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SingleTaskbarViewCoordinatorState@ViewCoordinator@implementation@Taskbar@winrt@@QEAA@XZ
    ~SingleTaskbarViewCoordinatorState();
};
} // namespace winrt::Taskbar::implementation::ViewCoordinator

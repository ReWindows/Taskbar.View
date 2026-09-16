#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 21 member(s).
namespace TaskbarTelemetry {
class ViewCoordinator_ShouldTaskbarBeExpanded {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeShellViewCoordinators@ViewCoordinator_ShouldTaskbarBeExpanded@TaskbarTelemetry@@QEAAXXZ
    void InitializeShellViewCoordinators();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ViewCoordinator_ShouldTaskbarBeExpanded@TaskbarTelemetry@@QEAAX_K@Z
    void StartActivity(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ViewCoordinator_ShouldTaskbarBeExpanded@TaskbarTelemetry@@QEAA@XZ
    ~ViewCoordinator_ShouldTaskbarBeExpanded();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ViewCoordinator_ShouldTaskbarBeExpanded@TaskbarTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ViewCoordinator_ShouldTaskbarBeExpanded@TaskbarTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbarTelemetry

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 5 member(s).
namespace TaskbarTelemetry {
class ViewCoordinatorCollapseTaskbar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ViewCoordinatorCollapseTaskbar@TaskbarTelemetry@@QEAAX_K@Z
    void StartActivity(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskbarModelFound@ViewCoordinatorCollapseTaskbar@TaskbarTelemetry@@QEAAXXZ
    void TaskbarModelFound();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ViewCoordinatorCollapseTaskbar@TaskbarTelemetry@@QEAA@XZ
    ~ViewCoordinatorCollapseTaskbar();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ViewCoordinatorCollapseTaskbar@TaskbarTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ViewCoordinatorCollapseTaskbar@TaskbarTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbarTelemetry

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 4 member(s).
namespace TaskbarTelemetry {
class ViewCoordinator_TaskbarShowRequested {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ViewCoordinator_TaskbarShowRequested@TaskbarTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ViewCoordinator_TaskbarShowRequested@TaskbarTelemetry@@QEAA@XZ
    ~ViewCoordinator_TaskbarShowRequested();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ViewCoordinator_TaskbarShowRequested@TaskbarTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ViewCoordinator_TaskbarShowRequested@TaskbarTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbarTelemetry

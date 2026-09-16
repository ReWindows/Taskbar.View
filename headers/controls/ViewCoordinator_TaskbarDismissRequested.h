#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 4 member(s).
namespace TaskbarTelemetry {
class ViewCoordinator_TaskbarDismissRequested {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ViewCoordinator_TaskbarDismissRequested@TaskbarTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ViewCoordinator_TaskbarDismissRequested@TaskbarTelemetry@@QEAA@XZ
    ~ViewCoordinator_TaskbarDismissRequested();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ViewCoordinator_TaskbarDismissRequested@TaskbarTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ViewCoordinator_TaskbarDismissRequested@TaskbarTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbarTelemetry

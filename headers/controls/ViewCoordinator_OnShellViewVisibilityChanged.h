#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 5 member(s).
namespace TaskbarTelemetry {
class ViewCoordinator_OnShellViewVisibilityChanged {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EdgeGestureActive@ViewCoordinator_OnShellViewVisibilityChanged@TaskbarTelemetry@@QEAAXXZ
    void EdgeGestureActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ViewCoordinator_OnShellViewVisibilityChanged@TaskbarTelemetry@@QEAAX_N@Z
    void StartActivity(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ViewCoordinator_OnShellViewVisibilityChanged@TaskbarTelemetry@@QEAA@XZ
    ~ViewCoordinator_OnShellViewVisibilityChanged();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ViewCoordinator_OnShellViewVisibilityChanged@TaskbarTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ViewCoordinator_OnShellViewVisibilityChanged@TaskbarTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbarTelemetry

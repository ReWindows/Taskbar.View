#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 5 member(s).
namespace TaskbarTelemetry {
class ViewCoordinatorExpandTaskbar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ViewCoordinatorExpandTaskbar@TaskbarTelemetry@@QEAAX_K@Z
    void StartActivity(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskbarModelFound@ViewCoordinatorExpandTaskbar@TaskbarTelemetry@@QEAAXXZ
    void TaskbarModelFound();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ViewCoordinatorExpandTaskbar@TaskbarTelemetry@@QEAA@XZ
    ~ViewCoordinatorExpandTaskbar();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ViewCoordinatorExpandTaskbar@TaskbarTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ViewCoordinatorExpandTaskbar@TaskbarTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbarTelemetry

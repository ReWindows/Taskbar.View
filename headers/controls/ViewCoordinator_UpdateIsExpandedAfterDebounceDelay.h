#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 4 member(s).
namespace TaskbarTelemetry {
class ViewCoordinator_UpdateIsExpandedAfterDebounceDelay {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ViewCoordinator_UpdateIsExpandedAfterDebounceDelay@TaskbarTelemetry@@QEAAX_KI@Z
    void StartActivity(uint64_t, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ViewCoordinator_UpdateIsExpandedAfterDebounceDelay@TaskbarTelemetry@@QEAA@XZ
    ~ViewCoordinator_UpdateIsExpandedAfterDebounceDelay();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ViewCoordinator_UpdateIsExpandedAfterDebounceDelay@TaskbarTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ViewCoordinator_UpdateIsExpandedAfterDebounceDelay@TaskbarTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbarTelemetry

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 5 member(s).
namespace TaskbarTelemetry {
class ViewCoordinator_UpdateIsExpandedAfterHoverDelay {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ViewCoordinator_UpdateIsExpandedAfterHoverDelay@TaskbarTelemetry@@QEAAX_K_NI@Z
    void StartActivity(uint64_t, bool, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ViewCoordinator_UpdateIsExpandedAfterHoverDelay@TaskbarTelemetry@@QEAA@XZ
    ~ViewCoordinator_UpdateIsExpandedAfterHoverDelay();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ViewCoordinator_UpdateIsExpandedAfterHoverDelay@TaskbarTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ViewCoordinator_UpdateIsExpandedAfterHoverDelay@TaskbarTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbarTelemetry

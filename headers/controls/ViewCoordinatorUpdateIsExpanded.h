#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 5 member(s).
namespace TaskbarTelemetry {
class ViewCoordinatorUpdateIsExpanded {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ViewCoordinatorUpdateIsExpanded@TaskbarTelemetry@@QEAAX_KI@Z
    void StartActivity(uint64_t, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ViewCoordinatorUpdateIsExpanded@TaskbarTelemetry@@QEAA@XZ
    ~ViewCoordinatorUpdateIsExpanded();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ViewCoordinatorUpdateIsExpanded@TaskbarTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ViewCoordinatorUpdateIsExpanded@TaskbarTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbarTelemetry

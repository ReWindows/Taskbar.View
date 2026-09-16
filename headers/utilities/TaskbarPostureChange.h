#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 7 member(s).
namespace TaskbarTelemetry {
class TaskbarPostureChange {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TaskbarPostureChange@TaskbarTelemetry@@QEAAX_K0@Z
    void StartActivity(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@TaskbarPostureChange@TaskbarTelemetry@@QEAAXJ_KII@Z
    void Stop(long, uint64_t, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionCompleted@TaskbarPostureChange@TaskbarTelemetry@@QEAAXXZ
    void TransitionCompleted();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarPostureChange@TaskbarTelemetry@@QEAA@XZ
    ~TaskbarPostureChange();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TaskbarPostureChange@TaskbarTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TaskbarPostureChange@TaskbarTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbarTelemetry

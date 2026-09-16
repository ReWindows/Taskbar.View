#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 5 member(s).
namespace TaskbarTelemetry {
class TransitionToPosture {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TransitionToPosture@TaskbarTelemetry@@QEAAX_K0_N@Z
    void StartActivity(uint64_t, uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@TransitionToPosture@TaskbarTelemetry@@QEAAX_K0_N@Z
    void Stop(uint64_t, uint64_t, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TransitionToPosture@TaskbarTelemetry@@QEAA@XZ
    ~TransitionToPosture();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TransitionToPosture@TaskbarTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TransitionToPosture@TaskbarTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbarTelemetry

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 5 member(s).
namespace TaskbarTelemetry {
class OnInteractionModeChanged {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OnInteractionModeChanged@TaskbarTelemetry@@QEAAX_K@Z
    void StartActivity(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@OnInteractionModeChanged@TaskbarTelemetry@@QEAAX_K0_N@Z
    void Stop(uint64_t, uint64_t, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnInteractionModeChanged@TaskbarTelemetry@@QEAA@XZ
    ~OnInteractionModeChanged();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OnInteractionModeChanged@TaskbarTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OnInteractionModeChanged@TaskbarTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbarTelemetry

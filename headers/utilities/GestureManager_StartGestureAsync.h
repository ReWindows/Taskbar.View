#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 5 member(s).
namespace TaskbarTelemetry {
class GestureManager_StartGestureAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GestureManager_StartGestureAsync@TaskbarTelemetry@@QEAAX_K@Z
    void StartActivity(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@GestureManager_StartGestureAsync@TaskbarTelemetry@@QEAAX_N@Z
    void Stop(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GestureManager_StartGestureAsync@TaskbarTelemetry@@QEAA@XZ
    ~GestureManager_StartGestureAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GestureManager_StartGestureAsync@TaskbarTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GestureManager_StartGestureAsync@TaskbarTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbarTelemetry

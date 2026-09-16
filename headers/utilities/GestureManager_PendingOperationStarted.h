#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 5 member(s).
namespace TaskbarTelemetry {
class GestureManager_PendingOperationStarted {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GestureManager_PendingOperationStarted@TaskbarTelemetry@@QEAAX_K@Z
    void StartActivity(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@GestureManager_PendingOperationStarted@TaskbarTelemetry@@QEAAX_N@Z
    void Stop(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GestureManager_PendingOperationStarted@TaskbarTelemetry@@QEAA@XZ
    ~GestureManager_PendingOperationStarted();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GestureManager_PendingOperationStarted@TaskbarTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GestureManager_PendingOperationStarted@TaskbarTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbarTelemetry

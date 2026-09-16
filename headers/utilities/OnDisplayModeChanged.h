#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 4 member(s).
namespace TaskbarTelemetry {
class OnDisplayModeChanged {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OnDisplayModeChanged@TaskbarTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnDisplayModeChanged@TaskbarTelemetry@@QEAA@XZ
    ~OnDisplayModeChanged();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OnDisplayModeChanged@TaskbarTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OnDisplayModeChanged@TaskbarTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbarTelemetry

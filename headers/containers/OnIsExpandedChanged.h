#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 5 member(s).
namespace TaskbarTelemetry {
class OnIsExpandedChanged {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OnIsExpandedChanged@TaskbarTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@OnIsExpandedChanged@TaskbarTelemetry@@QEAAX_N0@Z
    void Stop(bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnIsExpandedChanged@TaskbarTelemetry@@QEAA@XZ
    ~OnIsExpandedChanged();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OnIsExpandedChanged@TaskbarTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OnIsExpandedChanged@TaskbarTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbarTelemetry

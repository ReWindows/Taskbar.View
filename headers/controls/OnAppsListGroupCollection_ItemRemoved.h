#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 5 member(s).
namespace TaskbarTelemetry {
class OnAppsListGroupCollection_ItemRemoved {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OnAppsListGroupCollection_ItemRemoved@TaskbarTelemetry@@QEAAXI@Z
    void StartActivity(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@OnAppsListGroupCollection_ItemRemoved@TaskbarTelemetry@@QEAAXI@Z
    void Stop(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnAppsListGroupCollection_ItemRemoved@TaskbarTelemetry@@QEAA@XZ
    ~OnAppsListGroupCollection_ItemRemoved();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OnAppsListGroupCollection_ItemRemoved@TaskbarTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OnAppsListGroupCollection_ItemRemoved@TaskbarTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbarTelemetry

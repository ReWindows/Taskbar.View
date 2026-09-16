#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 6 member(s).
namespace TaskbarTelemetry {
class OnAppsListGroupCollection_ItemInserted {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceIndexHasValueUnglommedOn@OnAppsListGroupCollection_ItemInserted@TaskbarTelemetry@@QEAAXXZ
    void ReplaceIndexHasValueUnglommedOn();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OnAppsListGroupCollection_ItemInserted@TaskbarTelemetry@@QEAAXI@Z
    void StartActivity(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@OnAppsListGroupCollection_ItemInserted@TaskbarTelemetry@@QEAAXI_N@Z
    void Stop(unsigned int, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnAppsListGroupCollection_ItemInserted@TaskbarTelemetry@@QEAA@XZ
    ~OnAppsListGroupCollection_ItemInserted();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OnAppsListGroupCollection_ItemInserted@TaskbarTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OnAppsListGroupCollection_ItemInserted@TaskbarTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbarTelemetry

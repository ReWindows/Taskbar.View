#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 5 member(s).
namespace TaskbarTelemetry {
class SearchItemUriInvoked {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SearchItemUriInvoked@TaskbarTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SearchItemUriInvoked@TaskbarTelemetry@@QEAA@XZ
    ~SearchItemUriInvoked();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SearchItemUriInvoked@TaskbarTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SearchItemUriInvoked@TaskbarTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbarTelemetry

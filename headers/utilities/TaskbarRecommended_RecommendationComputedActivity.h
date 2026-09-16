#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 5 member(s).
namespace TaskbarTelemetry {
class TaskbarRecommended_RecommendationComputedActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TaskbarRecommended_RecommendationComputedActivity@TaskbarTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarRecommended_RecommendationComputedActivity@TaskbarTelemetry@@QEAA@XZ
    ~TaskbarRecommended_RecommendationComputedActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TaskbarRecommended_RecommendationComputedActivity@TaskbarTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TaskbarRecommended_RecommendationComputedActivity@TaskbarTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbarTelemetry

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 12 member(s).
namespace winrt::Taskbar::implementation {
class TaskbarEdgeGesture {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@TaskbarEdgeGesture@implementation@Taskbar@winrt@@QEAAXXZ
    void Complete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeExpandThreshold@TaskbarEdgeGesture@implementation@Taskbar@winrt@@SAMM_KM_NAEBUPoint@Foundation@Windows@4@@Z
    static float ComputeExpandThreshold(float, uint64_t, float, bool, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Make@TaskbarEdgeGesture@implementation@Taskbar@winrt@@SA?AU?$com_ptr@UTaskbarEdgeGesture@implementation@Taskbar@winrt@@@4@AEBUTaskbarEdgeGestureArgs@234@@Z
    static WindissectOpaque Make(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldExpandTaskbar@TaskbarEdgeGesture@implementation@Taskbar@winrt@@QEBA_NXZ
    bool ShouldExpandTaskbar() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartedByTaskbar@TaskbarEdgeGesture@implementation@Taskbar@winrt@@QEBA_NXZ
    bool StartedByTaskbar() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskbarEdgeGesture@implementation@Taskbar@winrt@@QEAA@AEBUTaskbarEdgeGestureArgs@123@@Z
    TaskbarEdgeGesture(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarEdgeGesture@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~TaskbarEdgeGesture();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TaskbarEdgeGesture@implementation@Taskbar@winrt@@AEAAXM_N@Z
    void Initialize(float, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGestureAnimationCompleted@TaskbarEdgeGesture@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUCompositionBatchCompletedEventArgs@Composition@UI@74@@Z
    void OnGestureAnimationCompleted(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputOperationEnded@TaskbarEdgeGesture@implementation@Taskbar@winrt@@AEAAXAEBUInputGestureOperation@Input@UI@WindowsUdk@4@AEBUInputGestureOperationEventArgs@6784@@Z
    void OnInputOperationEnded(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::Taskbar::implementation

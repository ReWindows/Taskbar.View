#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 11 member(s).
namespace winrt::Taskbar::implementation {
class PostureTransition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRevoker@PostureTransition@implementation@Taskbar@winrt@@QEAAXUStateRevoker@234@@Z
    void AddRevoker(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancelled@PostureTransition@implementation@Taskbar@winrt@@QEAAXXZ
    void Cancelled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Interrupted@PostureTransition@implementation@Taskbar@winrt@@QEAAXXZ
    void Interrupted();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PostureTransition@implementation@Taskbar@winrt@@QEAA@_KW4UserInteractionMode@ViewManagement@UI@Windows@3@_N@Z
    PostureTransition(uint64_t, int, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PostureTransition@implementation@Taskbar@winrt@@QEAA@XZ
    ~PostureTransition();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteTransition@PostureTransition@implementation@Taskbar@winrt@@AEAAXXZ
    void CompleteTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PostureTransition@implementation@Taskbar@winrt@@AEAAXXZ
    void Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTimerExpired@PostureTransition@implementation@Taskbar@winrt@@AEAAXXZ
    void OnTimerExpired();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReevaluateIsCompleted@PostureTransition@implementation@Taskbar@winrt@@AEAAXXZ
    void ReevaluateIsCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCompleteActivity@PostureTransition@implementation@Taskbar@winrt@@AEAAXXZ
    void TryCompleteActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCompleteTipTest@PostureTransition@implementation@Taskbar@winrt@@AEAAXXZ
    void TryCompleteTipTest();
};
} // namespace winrt::Taskbar::implementation

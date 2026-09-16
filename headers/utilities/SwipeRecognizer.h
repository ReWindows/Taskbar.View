#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 7 member(s).
namespace winrt::Taskbar::implementation {
class SwipeRecognizer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SwipeRecognizer@implementation@Taskbar@winrt@@QEAAXXZ
    void Initialize();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SwipeRecognizer@implementation@Taskbar@winrt@@QEAA@AEBUGestureRecognizer@Input@UI@Windows@3@@Z
    SwipeRecognizer(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SwipeRecognizer@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~SwipeRecognizer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCrossSlidingGesture@SwipeRecognizer@implementation@Taskbar@winrt@@AEAAXAEBUGestureRecognizer@Input@UI@Windows@4@AEBUCrossSlidingEventArgs@6784@@Z
    void OnCrossSlidingGesture(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDraggingGesture@SwipeRecognizer@implementation@Taskbar@winrt@@AEAAXAEBUGestureRecognizer@Input@UI@Windows@4@AEBUDraggingEventArgs@6784@@Z
    void OnDraggingGesture(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::Taskbar::implementation

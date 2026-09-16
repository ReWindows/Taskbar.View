#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 3 member(s).
namespace winrt::Taskbar::implementation {
class TaskbarElementAnimator {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasHideAnimationCore@TaskbarElementAnimator@implementation@Taskbar@winrt@@QEAA_NUUIElement@Xaml@UI@Windows@4@W4AnimationContext@Controls@67Microsoft@4@@Z
    bool HasHideAnimationCore(WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartHideAnimation@TaskbarElementAnimator@implementation@Taskbar@winrt@@QEAAXUUIElement@Xaml@UI@Windows@4@W4AnimationContext@Controls@67Microsoft@4@@Z
    void StartHideAnimation(WindissectOpaque, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarElementAnimator@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~TaskbarElementAnimator();
};
} // namespace winrt::Taskbar::implementation

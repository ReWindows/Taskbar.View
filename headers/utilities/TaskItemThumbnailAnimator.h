#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 9 member(s).
namespace winrt::Taskbar::implementation {
class TaskItemThumbnailAnimator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginMorphAnimation@TaskItemThumbnailAnimator@implementation@Taskbar@winrt@@QEAAXAEBUIInspectable@Foundation@Windows@4@USize@674@@Z
    void BeginMorphAnimation(WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndMorphAnimation@TaskItemThumbnailAnimator@implementation@Taskbar@winrt@@QEAAXAEBUSize@Foundation@Windows@4@@Z
    void EndMorphAnimation(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartHideAnimation@TaskItemThumbnailAnimator@implementation@Taskbar@winrt@@QEAAXUUIElement@Xaml@UI@Windows@4@W4AnimationContext@Controls@67Microsoft@4@@Z
    void StartHideAnimation(WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartShowAnimation@TaskItemThumbnailAnimator@implementation@Taskbar@winrt@@QEAAXUUIElement@Xaml@UI@Windows@4@W4AnimationContext@Controls@67Microsoft@4@@Z
    void StartShowAnimation(WindissectOpaque, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskItemThumbnailAnimator@implementation@Taskbar@winrt@@QEAA@XZ
    TaskItemThumbnailAnimator();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskItemThumbnailAnimator@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~TaskItemThumbnailAnimator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateEquivalentPosition@TaskItemThumbnailAnimator@implementation@Taskbar@winrt@@AEAA?AURect@Foundation@Windows@4@AEBU5674@AEBUSize@674@1@Z
    WindissectOpaque CalculateEquivalentPosition(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::Taskbar::implementation

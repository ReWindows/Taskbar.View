#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 9 member(s).
namespace winrt::Taskbar::implementation {
class TaskbarExtensionElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconHeight@TaskbarExtensionElement@implementation@Taskbar@winrt@@QEAAXN@Z
    void IconHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@TaskbarExtensionElement@implementation@Taskbar@winrt@@QEAA?AUSize@Foundation@Windows@4@AEBU5674@@Z
    WindissectOpaque MeasureOverride(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskbarExtensionElement@implementation@Taskbar@winrt@@QEAA@XZ
    TaskbarExtensionElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransitions@TaskbarExtensionElement@implementation@Taskbar@winrt@@QEAAX_NW4TaskbarButtonTransitionKind@34@@Z
    void UpdateTransitions(bool, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarExtensionElement@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~TaskbarExtensionElement();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEntranceAnimationCompleted@TaskbarExtensionElement@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUCompositionBatchCompletedEventArgs@Composition@UI@74@@Z
    void OnEntranceAnimationCompleted(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransitionAnimations@TaskbarExtensionElement@implementation@Taskbar@winrt@@AEAAXXZ
    void SetTransitionAnimations();
};
} // namespace winrt::Taskbar::implementation

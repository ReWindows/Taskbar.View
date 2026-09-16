#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 2 member(s).
namespace winrt::WindowsUdk::UI::Shell {
class ShellViewGestureAnimationPropertySet {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForInputAnimationTarget@ShellViewGestureAnimationPropertySet@Shell@UI@WindowsUdk@winrt@@SA@AEBUGestureAnimationData@Input@345@AEBUInputAnimationTarget@7345@AEBUCompositor@Composition@3Windows@5@@Z
    static GetForInputAnimationTarget(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShellViewGestureAnimationPropertySet@Shell@UI@WindowsUdk@winrt@@QEAA@XZ
    ~ShellViewGestureAnimationPropertySet();
};
} // namespace winrt::WindowsUdk::UI::Shell

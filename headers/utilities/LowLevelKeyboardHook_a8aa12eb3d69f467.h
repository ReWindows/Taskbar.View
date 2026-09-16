#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 2 member(s).
namespace winrt::Taskbar::implementation {
class LowLevelKeyboardHook {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Current@LowLevelKeyboardHook@implementation@Taskbar@winrt@@SA?AU134@XZ
    static WindissectOpaque Current();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LowLevelKeyboardHook@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~LowLevelKeyboardHook();
};
} // namespace winrt::Taskbar::implementation

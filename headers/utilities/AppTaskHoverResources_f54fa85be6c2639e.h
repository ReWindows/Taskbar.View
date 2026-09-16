#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 5 member(s).
namespace winrt::Taskbar::implementation {
class AppTaskHoverResources {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppTaskHoverResources@implementation@Taskbar@winrt@@QEAA@XZ
    AppTaskHoverResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskItemThumbnailViewIsPointerOverChanged@AppTaskHoverResources@implementation@Taskbar@winrt@@QEAAXAEBUAppTaskHoverCardView@34@_N@Z
    void OnTaskItemThumbnailViewIsPointerOverChanged(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskItemThumbnailViewKeyboardCloseRequested@AppTaskHoverResources@implementation@Taskbar@winrt@@QEAAXAEBUAppTaskHoverCardView@34@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnTaskItemThumbnailViewKeyboardCloseRequested(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::Taskbar::implementation

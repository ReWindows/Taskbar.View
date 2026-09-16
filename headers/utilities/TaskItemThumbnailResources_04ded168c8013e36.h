#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 5 member(s).
namespace winrt::Taskbar::implementation {
class TaskItemThumbnailResources {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskItemThumbnailViewIsPointerOverChanged@TaskItemThumbnailResources@implementation@Taskbar@winrt@@QEAAXAEBUTaskItemThumbnailView@34@_N@Z
    void OnTaskItemThumbnailViewIsPointerOverChanged(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskItemThumbnailViewKeyboardCloseRequested@TaskItemThumbnailResources@implementation@Taskbar@winrt@@QEAAXAEBUTaskItemThumbnailView@34@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnTaskItemThumbnailViewKeyboardCloseRequested(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskItemThumbnailResources@implementation@Taskbar@winrt@@QEAA@XZ
    TaskItemThumbnailResources();
};
} // namespace winrt::Taskbar::implementation

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 6 member(s).
namespace winrt::Taskbar::implementation {
class TaskItemThumbnailListLayout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@TaskItemThumbnailListLayout@implementation@Taskbar@winrt@@QEAA?AUSize@Foundation@Windows@4@AEBUNonVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@4@U5674@@Z
    WindissectOpaque ArrangeOverride(WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@TaskItemThumbnailListLayout@implementation@Taskbar@winrt@@QEAA?AUSize@Foundation@Windows@4@AEBUNonVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@4@U5674@@Z
    WindissectOpaque MeasureOverride(WindissectOpaque const &, WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskItemThumbnailListLayout@implementation@Taskbar@winrt@@QEAA@XZ
    TaskItemThumbnailListLayout();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskItemThumbnailListLayout@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~TaskItemThumbnailListLayout();
};
} // namespace winrt::Taskbar::implementation

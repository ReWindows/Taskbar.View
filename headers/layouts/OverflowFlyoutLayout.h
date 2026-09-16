#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 8 member(s).
namespace winrt::Taskbar::implementation {
class OverflowFlyoutLayout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@OverflowFlyoutLayout@implementation@Taskbar@winrt@@QEAA?AUSize@Foundation@Windows@4@AEBUNonVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@4@U5674@@Z
    WindissectOpaque ArrangeOverride(WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChildBoundsChanged@OverflowFlyoutLayout@implementation@Taskbar@winrt@@QEAA?AUevent_token@4@AEBU?$delegate@$$V@4@@Z
    WindissectOpaque ChildBoundsChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@OverflowFlyoutLayout@implementation@Taskbar@winrt@@QEAA?AUSize@Foundation@Windows@4@AEBUNonVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@4@U5674@@Z
    WindissectOpaque MeasureOverride(WindissectOpaque const &, WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OverflowFlyoutLayout@implementation@Taskbar@winrt@@QEAA@XZ
    OverflowFlyoutLayout();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OverflowFlyoutLayout@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~OverflowFlyoutLayout();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldIncludeElement@OverflowFlyoutLayout@implementation@Taskbar@winrt@@AEAA_NAEBUUIElement@Xaml@UI@Windows@4@@Z
    bool ShouldIncludeElement(WindissectOpaque const &);
};
} // namespace winrt::Taskbar::implementation

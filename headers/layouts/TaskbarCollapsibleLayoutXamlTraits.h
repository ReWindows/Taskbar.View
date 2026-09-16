#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 3 member(s).
namespace winrt::Taskbar::implementation {
class TaskbarCollapsibleLayoutXamlTraits {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDynamicGlommedButtonSizeDifference@TaskbarCollapsibleLayoutXamlTraits@implementation@Taskbar@winrt@@SAMXZ
    static float GetDynamicGlommedButtonSizeDifference();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExpandedSingleButtonMinWidth@TaskbarCollapsibleLayoutXamlTraits@implementation@Taskbar@winrt@@SAMN@Z
    static float GetExpandedSingleButtonMinWidth(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskbarButton@TaskbarCollapsibleLayoutXamlTraits@implementation@Taskbar@winrt@@SA?AUITaskbarButton@34@UUIElement@Xaml@UI@Windows@4@@Z
    static WindissectOpaque GetTaskbarButton(WindissectOpaque);
};
} // namespace winrt::Taskbar::implementation

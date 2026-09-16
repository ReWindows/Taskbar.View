#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 6 member(s).
namespace winrt::Taskbar::implementation {
class ShapeBadge {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@ShapeBadge@implementation@Taskbar@winrt@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShapeBadge@implementation@Taskbar@winrt@@QEAA@XZ
    ShapeBadge();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShapeBadge@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~ShapeBadge();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStates@ShapeBadge@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateVisualStates();
};
} // namespace winrt::Taskbar::implementation

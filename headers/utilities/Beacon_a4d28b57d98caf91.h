#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 6 member(s).
namespace winrt::Taskbar::implementation {
class Beacon {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Beacon@implementation@Taskbar@winrt@@QEAA@XZ
    Beacon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@Beacon@implementation@Taskbar@winrt@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Beacon@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~Beacon();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStates@Beacon@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateVisualStates();
};
} // namespace winrt::Taskbar::implementation

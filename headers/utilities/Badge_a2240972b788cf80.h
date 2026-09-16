#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 5 member(s).
namespace winrt::Taskbar::implementation {
class Badge {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BadgeData@Badge@implementation@Taskbar@winrt@@QEAAXAEBU1StartScreen@UI@WindowsUdk@4@@Z
    void BadgeData(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@Badge@implementation@Taskbar@winrt@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@Badge@implementation@Taskbar@winrt@@QEAAXXZ
    void Update();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Badge@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~Badge();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStates@Badge@implementation@Taskbar@winrt@@AEAAXM@Z
    void UpdateVisualStates(float);
};
} // namespace winrt::Taskbar::implementation

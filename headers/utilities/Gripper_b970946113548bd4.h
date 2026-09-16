#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 6 member(s).
namespace winrt::Taskbar::implementation {
class Gripper {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Gripper@implementation@Taskbar@winrt@@QEAA@XZ
    Gripper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@Gripper@implementation@Taskbar@winrt@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Gripper@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~Gripper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGripperDimensions@Gripper@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateGripperDimensions();
};
} // namespace winrt::Taskbar::implementation

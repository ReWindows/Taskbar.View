#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 8 member(s).
namespace winrt::Taskbar::implementation {
class OverflowFlyoutModel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dismiss@OverflowFlyoutModel@implementation@Taskbar@winrt@@QEAAXXZ
    void Dismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissAfterDelay@OverflowFlyoutModel@implementation@Taskbar@winrt@@QEAAXXZ
    void DismissAfterDelay();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OverflowFlyoutModel@implementation@Taskbar@winrt@@QEAA@XZ
    OverflowFlyoutModel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@OverflowFlyoutModel@implementation@Taskbar@winrt@@QEAAXXZ
    void Show();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCancelDismiss@OverflowFlyoutModel@implementation@Taskbar@winrt@@QEAAXXZ
    void TryCancelDismiss();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OverflowFlyoutModel@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~OverflowFlyoutModel();
};
} // namespace winrt::Taskbar::implementation

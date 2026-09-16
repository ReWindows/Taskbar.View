#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 5 member(s).
namespace winrt::Taskbar::implementation {
class UdkHelpers {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssertAugmentedEntryPointEnabled@UdkHelpers@implementation@Taskbar@winrt@@YAXXZ
    void AssertAugmentedEntryPointEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAugmentedEntryPointEnabled@UdkHelpers@implementation@Taskbar@winrt@@YA_NXZ
    bool IsAugmentedEntryPointEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDragDropEnabled@UdkHelpers@implementation@Taskbar@winrt@@YA_NXZ
    bool IsDragDropEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExtendedModeAEPForTaskbarPresentOnDashboard@UdkHelpers@implementation@Taskbar@winrt@@YA_NXZ
    bool IsExtendedModeAEPForTaskbarPresentOnDashboard();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskbarFeatureSupported@UdkHelpers@implementation@Taskbar@winrt@@YA_NW4TaskbarFeature@Shell@UI@WindowsUdk@4@@Z
    bool IsTaskbarFeatureSupported(int);
};
} // namespace winrt::Taskbar::implementation

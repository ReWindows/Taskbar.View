#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 4 member(s).
namespace winrt::Taskbar::implementation {
class TaskbarExtensionState {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FallingBackToLaunchListItem@TaskbarExtensionState@implementation@Taskbar@winrt@@QEAA_NW4ShellView@Shell@UI@WindowsUdk@4@@Z
    bool FallingBackToLaunchListItem(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskbarExtensionState@implementation@Taskbar@winrt@@QEAA@_N@Z
    TaskbarExtensionState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseLaunchListSpecialCases@TaskbarExtensionState@implementation@Taskbar@winrt@@QEBA_NW4ShellView@Shell@UI@WindowsUdk@4@@Z
    bool UseLaunchListSpecialCases(int) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MayUseLaunchListSpecialCases@TaskbarExtensionState@implementation@Taskbar@winrt@@AEBA_NW4ShellView@Shell@UI@WindowsUdk@4@@Z
    bool MayUseLaunchListSpecialCases(int) const;
};
} // namespace winrt::Taskbar::implementation

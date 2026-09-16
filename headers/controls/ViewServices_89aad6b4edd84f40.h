#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 8 member(s).
namespace winrt::Taskbar::implementation {
class ViewServices {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Current@ViewServices@implementation@Taskbar@winrt@@SAPEAU1234@XZ
    static WindissectOpaque * Current();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentProjected@ViewServices@implementation@Taskbar@winrt@@SA?AU134@XZ
    static WindissectOpaque CurrentProjected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskbarLocation@ViewServices@implementation@Taskbar@winrt@@QEAAXW40Shell@UI@WindowsUdk@4@@Z
    void TaskbarLocation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UISettings@ViewServices@implementation@Taskbar@winrt@@QEAA?AU0ViewManagement@UI@Windows@4@XZ
    WindissectOpaque UISettings();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ViewServices@implementation@Taskbar@winrt@@QEAA@XZ
    ViewServices();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ViewServices@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~ViewServices();
};
} // namespace winrt::Taskbar::implementation

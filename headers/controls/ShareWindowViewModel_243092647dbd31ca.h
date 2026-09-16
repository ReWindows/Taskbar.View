#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 8 member(s).
namespace winrt::Taskbar::implementation {
class ShareWindowViewModel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCurrentCommand@ShareWindowViewModel@implementation@Taskbar@winrt@@QEAAXXZ
    void InvokeCurrentCommand();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShareWindowViewModel@implementation@Taskbar@winrt@@QEAA@UShareWindowCommandProvider@Shell@UI@WindowsUdk@3@@Z
    ShareWindowViewModel(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShareWindowViewModel@implementation@Taskbar@winrt@@QEAA@UShareWindowCommandProvider@Shell@UI@WindowsUdk@3@_K@Z
    ShareWindowViewModel(WindissectOpaque, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShareWindowViewModel@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~ShareWindowViewModel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShareWindowCommandProviderChanged@ShareWindowViewModel@implementation@Taskbar@winrt@@AEAAXUShareWindowCommandProvider@Shell@UI@WindowsUdk@4@UIInspectable@Foundation@Windows@4@@Z
    void OnShareWindowCommandProviderChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCommandAsync@ShareWindowViewModel@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@XZ
    WindissectOpaque UpdateCommandAsync();
};
} // namespace winrt::Taskbar::implementation

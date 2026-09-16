#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 5 member(s).
namespace winrt::Taskbar::implementation {
class MultiTaskbarController {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTaskbarController@MultiTaskbarController@implementation@Taskbar@winrt@@QEAA?AUTaskbarControllerExtension@Shell@UI@WindowsUdk@4@AEBUTaskbarModel@6784@@Z
    WindissectOpaque CreateTaskbarController(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MultiTaskbarController@implementation@Taskbar@winrt@@QEAA@XZ
    MultiTaskbarController();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MultiTaskbarController@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~MultiTaskbarController();
};
} // namespace winrt::Taskbar::implementation

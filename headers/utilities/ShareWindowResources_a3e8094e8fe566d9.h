#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 6 member(s).
namespace winrt::Taskbar::implementation {
class ShareWindowResources {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShareWindowButtonClicked@ShareWindowResources@implementation@Taskbar@winrt@@QEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnShareWindowButtonClicked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShareWindowCancelClicked@ShareWindowResources@implementation@Taskbar@winrt@@QEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnShareWindowCancelClicked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShareWindowConfirmClicked@ShareWindowResources@implementation@Taskbar@winrt@@QEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnShareWindowConfirmClicked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShareWindowResources@implementation@Taskbar@winrt@@QEAA@XZ
    ShareWindowResources();
};
} // namespace winrt::Taskbar::implementation

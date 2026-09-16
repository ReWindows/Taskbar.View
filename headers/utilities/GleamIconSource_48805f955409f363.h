#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 5 member(s).
namespace winrt::Taskbar::implementation {
class GleamIconSource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateIconAsync@GleamIconSource@implementation@Taskbar@winrt@@QEAA?AU?$IAsyncOperation@UImageSource@Media@Xaml@UI@Windows@winrt@@@Foundation@Windows@4@I@Z
    WindissectOpaque GenerateIconAsync(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateIconByScaleAsync@GleamIconSource@implementation@Taskbar@winrt@@QEAA?AU?$IAsyncOperation@UImageSource@Media@Xaml@UI@Windows@winrt@@@Foundation@Windows@4@N@Z
    WindissectOpaque GenerateIconByScaleAsync(double);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GleamIconSource@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~GleamIconSource();
};
} // namespace winrt::Taskbar::implementation

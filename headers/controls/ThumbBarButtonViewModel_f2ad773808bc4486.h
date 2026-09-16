#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 7 member(s).
namespace winrt::Taskbar::implementation {
class ThumbBarButtonViewModel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadIconAsync@ThumbBarButtonViewModel@implementation@Taskbar@winrt@@QEAA?AUIAsyncAction@Foundation@Windows@4@XZ
    WindissectOpaque LoadIconAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeBitmapImage@ThumbBarButtonViewModel@implementation@Taskbar@winrt@@SA?AUBitmapImage@Imaging@Media@Xaml@UI@Windows@4@AEBUIRandomAccessStreamReference@Streams@Storage@Windows@4@@Z
    static WindissectOpaque MakeBitmapImage(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClick@ThumbBarButtonViewModel@implementation@Taskbar@winrt@@QEAAXXZ
    void OnClick();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ThumbBarButtonViewModel@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~ThumbBarButtonViewModel();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageSource@ThumbBarButtonViewModel@implementation@Taskbar@winrt@@CA?AUfire_and_forget@4@UBitmapImage@Imaging@Media@Xaml@UI@Windows@4@AEBUIRandomAccessStreamReference@Streams@Storage@Windows@4@@Z
    static WindissectOpaque SetImageSource(WindissectOpaque, WindissectOpaque const &);
};
} // namespace winrt::Taskbar::implementation

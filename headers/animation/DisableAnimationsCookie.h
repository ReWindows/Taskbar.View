#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 5 member(s).
namespace winrt::Microsoft::Windows::Taskbar::implementation::TaskbarComponentHost {
class DisableAnimationsCookie {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@DisableAnimationsCookie@TaskbarComponentHost@implementation@Taskbar@Windows@Microsoft@winrt@@QEAAXXZ
    void Close();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DisableAnimationsCookie@TaskbarComponentHost@implementation@Taskbar@Windows@Microsoft@winrt@@QEAA@AEAU123456@@Z
    DisableAnimationsCookie(WindissectOpaque &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DisableAnimationsCookie@TaskbarComponentHost@implementation@Taskbar@Windows@Microsoft@winrt@@UEAA@XZ
    virtual ~DisableAnimationsCookie();
};
} // namespace winrt::Microsoft::Windows::Taskbar::implementation::TaskbarComponentHost

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 8 member(s).
namespace winrt::Taskbar::implementation {
class RecoHoverCardViewModel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppId@RecoHoverCardViewModel@implementation@Taskbar@winrt@@QEAA?AUhstring@4@XZ
    WindissectOpaque AppId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppName@RecoHoverCardViewModel@implementation@Taskbar@winrt@@QEAA?AUhstring@4@XZ
    WindissectOpaque AppName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Key@RecoHoverCardViewModel@implementation@Taskbar@winrt@@QEAA?AUhstring@4@XZ
    WindissectOpaque Key();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RecoHoverCardViewModel@implementation@Taskbar@winrt@@QEAA@UIRecommendedItem@23@@Z
    RecoHoverCardViewModel(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportClicked@RecoHoverCardViewModel@implementation@Taskbar@winrt@@QEAAXXZ
    void ReportClicked();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RecoHoverCardViewModel@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~RecoHoverCardViewModel();
};
} // namespace winrt::Taskbar::implementation

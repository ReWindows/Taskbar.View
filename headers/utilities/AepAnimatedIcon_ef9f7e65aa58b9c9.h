#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 13 member(s).
namespace winrt::Taskbar::implementation {
class AepAnimatedIcon {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AepAnimatedIcon@implementation@Taskbar@winrt@@QEAA@XZ
    AepAnimatedIcon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadAnimation@AepAnimatedIcon@implementation@Taskbar@winrt@@QEAAXXZ
    void LoadAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@AepAnimatedIcon@implementation@Taskbar@winrt@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayAnimation@AepAnimatedIcon@implementation@Taskbar@winrt@@QEAAXXZ
    void PlayAnimation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnimationSource@AepAnimatedIcon@implementation@Taskbar@winrt@@QEAAXUhstring@4@0IIUSize@Foundation@Windows@4@@Z
    void SetAnimationSource(WindissectOpaque, WindissectOpaque, unsigned int, unsigned int, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AepAnimatedIcon@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~AepAnimatedIcon();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAnimationLoadCompleted@AepAnimatedIcon@implementation@Taskbar@winrt@@AEAAXXZ
    void CheckAnimationLoadCompleted();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTemplateApplied@AepAnimatedIcon@implementation@Taskbar@winrt@@AEAA_NXZ
    bool IsTemplateApplied();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSvgOpenFailed@AepAnimatedIcon@implementation@Taskbar@winrt@@AEAAXAEBUSvgImageSource@Imaging@Media@Xaml@UI@Windows@4@AEBUSvgImageSourceFailedEventArgs@6789Windows@4@@Z
    void OnSvgOpenFailed(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSvgOpened@AepAnimatedIcon@implementation@Taskbar@winrt@@AEAAXAEBUSvgImageSource@Imaging@Media@Xaml@UI@Windows@4@AEBUSvgImageSourceOpenedEventArgs@6789Windows@4@@Z
    void OnSvgOpened(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowStaticFallback@AepAnimatedIcon@implementation@Taskbar@winrt@@AEAAXXZ
    void ShowStaticFallback();
};
} // namespace winrt::Taskbar::implementation

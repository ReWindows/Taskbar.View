#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 5 member(s).
namespace winrt::AnimatedVisuals::implementation {
class SearchLight_Sparkle {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Markers@SearchLight_Sparkle@implementation@AnimatedVisuals@winrt@@QEAA?AU?$IMapView@Uhstring@winrt@@N@Collections@Foundation@Windows@4@XZ
    WindissectOpaque Markers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorProperty@SearchLight_Sparkle@implementation@AnimatedVisuals@winrt@@QEAAXAEBUhstring@4@UColor@UI@Windows@4@@Z
    void SetColorProperty(WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCreateAnimatedVisual@SearchLight_Sparkle@implementation@AnimatedVisuals@winrt@@QEAA?AUIAnimatedVisual@Controls@Xaml@UI@Microsoft@4@AEBUCompositor@Composition@8Windows@4@AEAUIInspectable@Foundation@Windows@4@@Z
    WindissectOpaque TryCreateAnimatedVisual(WindissectOpaque const &, WindissectOpaque &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SearchLight_Sparkle@implementation@AnimatedVisuals@winrt@@UEAA@XZ
    virtual ~SearchLight_Sparkle();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureThemeProperties@SearchLight_Sparkle@implementation@AnimatedVisuals@winrt@@AEAA?AUCompositionPropertySet@Composition@UI@Windows@4@UCompositor@6784@@Z
    WindissectOpaque EnsureThemeProperties(WindissectOpaque);
};
} // namespace winrt::AnimatedVisuals::implementation

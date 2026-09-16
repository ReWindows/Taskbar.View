#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 5 member(s).
namespace winrt::AnimatedVisuals::implementation {
class TB_WeatherInsights_Sunset {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Markers@TB_WeatherInsights_Sunset@implementation@AnimatedVisuals@winrt@@QEAA?AU?$IMapView@Uhstring@winrt@@N@Collections@Foundation@Windows@4@XZ
    WindissectOpaque Markers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCreateAnimatedVisual@TB_WeatherInsights_Sunset@implementation@AnimatedVisuals@winrt@@QEAA?AUIAnimatedVisual@Controls@Xaml@UI@Microsoft@4@AEBUCompositor@Composition@8Windows@4@AEAUIInspectable@Foundation@Windows@4@@Z
    WindissectOpaque TryCreateAnimatedVisual(WindissectOpaque const &, WindissectOpaque &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TB_WeatherInsights_Sunset@implementation@AnimatedVisuals@winrt@@UEAA@XZ
    virtual ~TB_WeatherInsights_Sunset();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureImageLoadingStarted@TB_WeatherInsights_Sunset@implementation@AnimatedVisuals@winrt@@AEAAXXZ
    void EnsureImageLoadingStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleLoadCompleted@TB_WeatherInsights_Sunset@implementation@AnimatedVisuals@winrt@@AEAAXULoadedImageSurface@Media@Xaml@UI@Windows@4@ULoadedImageSourceLoadCompletedEventArgs@67894@@Z
    void HandleLoadCompleted(WindissectOpaque, WindissectOpaque);
};
} // namespace winrt::AnimatedVisuals::implementation

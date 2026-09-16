#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 7 member(s).
namespace winrt::Taskbar::implementation {
class AugmentedEntryPointImageRenderer {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AugmentedEntryPointImageRenderer@implementation@Taskbar@winrt@@QEAA@UIAdaptiveElementRenderer@Uwp@Rendering@AdaptiveCards@3@@Z
    AugmentedEntryPointImageRenderer(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Render@AugmentedEntryPointImageRenderer@implementation@Taskbar@winrt@@QEAA?AUUIElement@Xaml@UI@Windows@4@UIAdaptiveCardElement@Uwp@ObjectModel@AdaptiveCards@4@UAdaptiveRenderContext@Uwp@Rendering@AdaptiveCards@4@UAdaptiveRenderArgs@Uwp@Rendering@AdaptiveCards@4@@Z
    WindissectOpaque Render(WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AugmentedEntryPointImageRenderer@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~AugmentedEntryPointImageRenderer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderAnimatedIcon@AugmentedEntryPointImageRenderer@implementation@Taskbar@winrt@@AEAA?AUUIElement@Xaml@UI@Windows@4@UIAdaptiveCardElement@Uwp@ObjectModel@AdaptiveCards@4@UAdaptiveRenderContext@Uwp@Rendering@AdaptiveCards@4@UAdaptiveRenderArgs@Uwp@Rendering@AdaptiveCards@4@UFrameworkElement@6784@@Z
    WindissectOpaque RenderAnimatedIcon(WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderLottie@AugmentedEntryPointImageRenderer@implementation@Taskbar@winrt@@AEAA?AUUIElement@Xaml@UI@Windows@4@UIAdaptiveCardElement@Uwp@ObjectModel@AdaptiveCards@4@UAdaptiveRenderContext@Uwp@Rendering@AdaptiveCards@4@UAdaptiveRenderArgs@Uwp@Rendering@AdaptiveCards@4@UIAnimatedVisualSource@Controls@67Microsoft@4@@Z
    WindissectOpaque RenderLottie(WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
};
} // namespace winrt::Taskbar::implementation

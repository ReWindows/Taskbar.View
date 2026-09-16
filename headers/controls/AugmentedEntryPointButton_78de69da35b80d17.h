#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 34 member(s).
namespace winrt::Taskbar::implementation {
class AugmentedEntryPointButton {
public:
    class RenderAdaptiveCardResult;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AugmentedEntryPointButton@implementation@Taskbar@winrt@@QEAA@XZ
    AugmentedEntryPointButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AugmentedEntryPointData@AugmentedEntryPointButton@implementation@Taskbar@winrt@@QEAAXAEBUAugmentedEntryPointAdaptiveCardData@34@@Z
    void AugmentedEntryPointData(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DesiredButtonMode@AugmentedEntryPointButton@implementation@Taskbar@winrt@@QEAAXW4AugmentedEntryPointButtonMode@34@@Z
    void DesiredButtonMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Extent@AugmentedEntryPointButton@implementation@Taskbar@winrt@@QEAANW4UserInteractionMode@ViewManagement@UI@Windows@4@@Z
    double Extent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHoverInvoke@AugmentedEntryPointButton@implementation@Taskbar@winrt@@QEAAXXZ
    void OnHoverInvoke();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskbarLocation@AugmentedEntryPointButton@implementation@Taskbar@winrt@@UEAAXW40Shell@UI@WindowsUdk@4@@Z
    virtual void TaskbarLocation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Theme@AugmentedEntryPointButton@implementation@Taskbar@winrt@@UEAAXW4VisualTheme@Themes@UI@WindowsUdk@4@@Z
    virtual void Theme(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AugmentedEntryPointButton@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~AugmentedEntryPointButton();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplateImpl@AugmentedEntryPointButton@implementation@Taskbar@winrt@@MEAAXXZ
    virtual void OnApplyTemplateImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayOverride@AugmentedEntryPointButton@implementation@Taskbar@winrt@@MEAA_NUAnimationMarkers@234@W4ExperienceToggleButtonVisualState@ExperienceToggleButton@234@1@Z
    virtual bool PlayOverride(WindissectOpaque, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskbarInteractionMode@AugmentedEntryPointButton@implementation@Taskbar@winrt@@MEAAXW4UserInteractionMode@ViewManagement@UI@Windows@4@@Z
    virtual void TaskbarInteractionMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonPadding@AugmentedEntryPointButton@implementation@Taskbar@winrt@@MEAAXXZ
    virtual void UpdateButtonPadding();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStates@AugmentedEntryPointButton@implementation@Taskbar@winrt@@MEAAXXZ
    virtual void UpdateVisualStates();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHostConfig@AugmentedEntryPointButton@implementation@Taskbar@winrt@@AEBA?AUAdaptiveHostConfig@Uwp@Rendering@AdaptiveCards@4@W4VisualTheme@Themes@UI@WindowsUdk@4@_NW4AdaptiveCardRenderStyle@234@1@Z
    WindissectOpaque GetHostConfig(int, bool, int, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideBeacon@AugmentedEntryPointButton@implementation@Taskbar@winrt@@AEAAXXZ
    void HideBeacon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideLargeTickerSecondaryText@AugmentedEntryPointButton@implementation@Taskbar@winrt@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@4@AEA_N@Z
    void HideLargeTickerSecondaryText(WindissectOpaque const &, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLargeTickerMode@AugmentedEntryPointButton@implementation@Taskbar@winrt@@AEBA_NXZ
    bool IsLargeTickerMode() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAepAnimatedIconLoaded@AugmentedEntryPointButton@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUAepAnimatedIconLoadedEventArgs@34@@Z
    void OnAepAnimatedIconLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBadgeAnchorImageFailed@AugmentedEntryPointButton@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUExceptionRoutedEventArgs@Xaml@UI@74@@Z
    void OnBadgeAnchorImageFailed(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBadgeAnchorImageLoaded@AugmentedEntryPointButton@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnBadgeAnchorImageLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBadgeLoaded@AugmentedEntryPointButton@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnBadgeLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentCardLoaded@AugmentedEntryPointButton@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnContentCardLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLottieIconLoaded@AugmentedEntryPointButton@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnLottieIconLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayLottieIcon@AugmentedEntryPointButton@implementation@Taskbar@winrt@@AEAAXNN@Z
    void PlayLottieIcon(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayRotationEntranceAnimation@AugmentedEntryPointButton@implementation@Taskbar@winrt@@AEAAX_N0@Z
    void PlayRotationEntranceAnimation(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionAndShowBadge@AugmentedEntryPointButton@implementation@Taskbar@winrt@@AEAAXXZ
    void PositionAndShowBadge();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderAdaptiveCard@AugmentedEntryPointButton@implementation@Taskbar@winrt@@AEAA?AURenderAdaptiveCardResult@1234@AEBUhstring@4@W4AdaptiveCardRenderStyle@234@@Z
    WindissectOpaque RenderAdaptiveCard(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseSmallFrameExtent@AugmentedEntryPointButton@implementation@Taskbar@winrt@@AEBA_NXZ
    bool ShouldUseSmallFrameExtent() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowBeacon@AugmentedEntryPointButton@implementation@Taskbar@winrt@@AEAAX_N@Z
    void ShowBeacon(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowContentCard@AugmentedEntryPointButton@implementation@Taskbar@winrt@@AEAAXXZ
    void ShowContentCard();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformRenderedAdaptiveCard@AugmentedEntryPointButton@implementation@Taskbar@winrt@@AEAAXAEBUFrameworkElement@Xaml@UI@Windows@4@_NW4AdaptiveCardRenderStyle@234@AEBUAdaptiveCardParseResult@Uwp@ObjectModel@AdaptiveCards@4@V?$tip_test@V?$merged_data@U_tip_AEPRenderingPipeline@implementation@Taskbar@winrt@@U1234@@details@tip2@@@tip2@@@Z
    void TransformRenderedAdaptiveCard(WindissectOpaque const &, bool, int, WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRenderedAdaptiveCard@AugmentedEntryPointButton@implementation@Taskbar@winrt@@AEAAXAEBUhstring@4@@Z
    void UpdateRenderedAdaptiveCard(WindissectOpaque const &);
};
} // namespace winrt::Taskbar::implementation

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 16 member(s).
namespace winrt::Taskbar::implementation {
class RecoHoverCardView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplateImpl@RecoHoverCardView@implementation@Taskbar@winrt@@UEAAXXZ
    virtual void OnApplyTemplateImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCanceled@RecoHoverCardView@implementation@Taskbar@winrt@@UEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnPointerCanceled(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@RecoHoverCardView@implementation@Taskbar@winrt@@UEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnPointerCaptureLost(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@RecoHoverCardView@implementation@Taskbar@winrt@@UEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnPointerEntered(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@RecoHoverCardView@implementation@Taskbar@winrt@@UEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnPointerExited(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@RecoHoverCardView@implementation@Taskbar@winrt@@UEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnPointerPressed(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@RecoHoverCardView@implementation@Taskbar@winrt@@UEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnPointerReleased(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RecoHoverCardView@implementation@Taskbar@winrt@@QEAA@XZ
    RecoHoverCardView();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RecoHoverCardView@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~RecoHoverCardView();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemButtonClicked@RecoHoverCardView@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnItemButtonClicked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTooltipVisibilityShouldChange@RecoHoverCardView@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void OnTooltipVisibilityShouldChange(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetButtonAccessibleName@RecoHoverCardView@implementation@Taskbar@winrt@@AEAAXXZ
    void SetButtonAccessibleName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleTooltip@RecoHoverCardView@implementation@Taskbar@winrt@@AEAAXAEBUUIElement@Xaml@UI@Windows@4@@Z
    void ToggleTooltip(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateToolTip@RecoHoverCardView@implementation@Taskbar@winrt@@AEAAXAEBUUIElement@Xaml@UI@Windows@4@AEBUhstring@4@@Z
    void UpdateToolTip(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::Taskbar::implementation

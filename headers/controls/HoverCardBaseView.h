#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 14 member(s).
namespace winrt::Taskbar::implementation {
class HoverCardBaseView {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKeyboardFocus@HoverCardBaseView@implementation@Taskbar@winrt@@QEAA_NAEBUIInspectable@Foundation@Windows@4@@Z
    bool HasKeyboardFocus(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HoverCardBaseView@implementation@Taskbar@winrt@@QEAA@XZ
    HoverCardBaseView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplateImpl@HoverCardBaseView@implementation@Taskbar@winrt@@UEAAXXZ
    virtual void OnApplyTemplateImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCanceled@HoverCardBaseView@implementation@Taskbar@winrt@@UEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnPointerCanceled(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@HoverCardBaseView@implementation@Taskbar@winrt@@UEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnPointerCaptureLost(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@HoverCardBaseView@implementation@Taskbar@winrt@@UEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnPointerEntered(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@HoverCardBaseView@implementation@Taskbar@winrt@@UEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnPointerExited(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@HoverCardBaseView@implementation@Taskbar@winrt@@UEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnPointerPressed(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@HoverCardBaseView@implementation@Taskbar@winrt@@UEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnPointerReleased(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreviewKeyDown@HoverCardBaseView@implementation@Taskbar@winrt@@QEAAXAEBUKeyRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnPreviewKeyDown(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStates@HoverCardBaseView@implementation@Taskbar@winrt@@QEAAXXZ
    void UpdateVisualStates();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HoverCardBaseView@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~HoverCardBaseView();
};
} // namespace winrt::Taskbar::implementation

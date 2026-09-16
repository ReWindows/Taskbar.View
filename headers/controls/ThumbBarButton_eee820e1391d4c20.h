#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 8 member(s).
namespace winrt::Taskbar::implementation {
class ThumbBarButton {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@ThumbBarButton@implementation@Taskbar@winrt@@QEAA?AUSize@Foundation@Windows@4@AEBU5674@@Z
    WindissectOpaque ArrangeOverride(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@ThumbBarButton@implementation@Taskbar@winrt@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@ThumbBarButton@implementation@Taskbar@winrt@@QEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@4@XZ
    WindissectOpaque OnCreateAutomationPeer();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ThumbBarButton@implementation@Taskbar@winrt@@QEAA@XZ
    ThumbBarButton();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisualStatePropertyChanged@ThumbBarButton@implementation@Taskbar@winrt@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@4@AEBUDependencyProperty@6784@@Z
    void OnVisualStatePropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStates@ThumbBarButton@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateVisualStates();
};
} // namespace winrt::Taskbar::implementation

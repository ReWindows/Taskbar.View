#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 15 member(s).
namespace winrt::Taskbar::implementation {
class ShareWindowButton {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@ShareWindowButton@implementation@Taskbar@winrt@@QEAA?AUSize@Foundation@Windows@4@U5674@@Z
    WindissectOpaque ArrangeOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@ShareWindowButton@implementation@Taskbar@winrt@@QEAA?AUSize@Foundation@Windows@4@U5674@@Z
    WindissectOpaque MeasureOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@ShareWindowButton@implementation@Taskbar@winrt@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@ShareWindowButton@implementation@Taskbar@winrt@@QEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShareWindowButton@implementation@Taskbar@winrt@@QEAA@XZ
    ShareWindowButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShareWindowCommand@ShareWindowButton@implementation@Taskbar@winrt@@QEAAXW40Shell@UI@WindowsUdk@4@@Z
    void ShareWindowCommand(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShareWindowCommandProviderKind@ShareWindowButton@implementation@Taskbar@winrt@@QEAAXW40Shell@UI@WindowsUdk@4@@Z
    void ShareWindowCommandProviderKind(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShareWindowButton@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~ShareWindowButton();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTemplateLoaded@ShareWindowButton@implementation@Taskbar@winrt@@AEBA_NXZ
    bool IsTemplateLoaded() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadIconAsync@ShareWindowButton@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@XZ
    WindissectOpaque LoadIconAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPropertyChanged@ShareWindowButton@implementation@Taskbar@winrt@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@4@AEBUDependencyProperty@6784@@Z
    void OnPointerPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLabelText@ShareWindowButton@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateLabelText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStates@ShareWindowButton@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateVisualStates();
};
} // namespace winrt::Taskbar::implementation

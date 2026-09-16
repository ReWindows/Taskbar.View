#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 11 member(s).
namespace winrt::Taskbar::implementation {
class ShareWindowPanel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@ShareWindowPanel@implementation@Taskbar@winrt@@QEAA?AUSize@Foundation@Windows@4@AEBU5674@@Z
    WindissectOpaque ArrangeOverride(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKeyboardFocus@ShareWindowPanel@implementation@Taskbar@winrt@@QEAA_NXZ
    bool HasKeyboardFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@ShareWindowPanel@implementation@Taskbar@winrt@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGettingFocus@ShareWindowPanel@implementation@Taskbar@winrt@@QEAAXAEBUUIElement@Xaml@UI@Windows@4@AEBUGettingFocusEventArgs@Input@6784@@Z
    void OnGettingFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShareWindowPanel@implementation@Taskbar@winrt@@QEAA@XZ
    ShareWindowPanel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewModel@ShareWindowPanel@implementation@Taskbar@winrt@@QEAAXAEBUShareWindowViewModel@34@@Z
    void ViewModel(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewModels@ShareWindowPanel@implementation@Taskbar@winrt@@QEAAXAEBU?$IVector@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@4@@Z
    void ViewModels(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShareWindowPanel@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~ShareWindowPanel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewModelPropertyChanged@ShareWindowPanel@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUPropertyChangedEventArgs@Data@Xaml@UI@74@@Z
    void OnViewModelPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::Taskbar::implementation

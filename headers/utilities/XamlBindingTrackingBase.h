#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 4 member(s).
namespace winrt::Taskbar::implementation {
class XamlBindingTrackingBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropertyChanged@XamlBindingTrackingBase@implementation@Taskbar@winrt@@QEAAXAEBUIInspectable@Foundation@Windows@4@AEBUPropertyChangedEventArgs@Data@Xaml@UI@74@@Z
    void PropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePropertyChangedListener@XamlBindingTrackingBase@implementation@Taskbar@winrt@@QEAAXAEBUINotifyPropertyChanged@Data@Xaml@UI@Windows@4@AEAU?$weak_ref@UINotifyPropertyChanged@Data@Xaml@UI@Windows@winrt@@@4@AEAUevent_token@4@@Z
    void UpdatePropertyChangedListener(WindissectOpaque const &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VectorChanged@XamlBindingTrackingBase@implementation@Taskbar@winrt@@QEAAXAEBUIInspectable@Foundation@Windows@4@AEBUIVectorChangedEventArgs@Collections@674@@Z
    void VectorChanged(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::Taskbar::implementation

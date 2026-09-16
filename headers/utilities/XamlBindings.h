#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 9 member(s).
namespace winrt::Taskbar::implementation {
class XamlBindings {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DataContextChanged@XamlBindings@implementation@Taskbar@winrt@@QEAAXAEBUFrameworkElement@Xaml@UI@Windows@4@AEBUDataContextChangedEventArgs@6784@@Z
    void DataContextChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectUnloadedObject@XamlBindings@implementation@Taskbar@winrt@@UEAAXH@Z
    virtual void DisconnectUnloadedObject(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessBindings@XamlBindings@implementation@Taskbar@winrt@@UEAAXAEBUIInspectable@Foundation@Windows@4@HHAEAH@Z
    virtual void ProcessBindings(WindissectOpaque const &, int, int, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessBindings@XamlBindings@implementation@Taskbar@winrt@@QEAAHAEBUContainerContentChangingEventArgs@Controls@Xaml@UI@Windows@4@@Z
    int ProcessBindings(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Recycle@XamlBindings@implementation@Taskbar@winrt@@UEAAXXZ
    virtual void Recycle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeForDataContextChanged@XamlBindings@implementation@Taskbar@winrt@@QEAAXAEBUFrameworkElement@Xaml@UI@Windows@4@@Z
    void SubscribeForDataContextChanged(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlBindings@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~XamlBindings();
};
} // namespace winrt::Taskbar::implementation

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 13 member(s).
namespace winrt::Taskbar::implementation {
class HoverUIItemsCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexFromKey@HoverUIItemsCollection@implementation@Taskbar@winrt@@QEBAHAEBUhstring@4@@Z
    int IndexFromKey(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeyFromIndex@HoverUIItemsCollection@implementation@Taskbar@winrt@@QEBA?AUhstring@4@I@Z
    WindissectOpaque KeyFromIndex(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourceArrayChanged@HoverUIItemsCollection@implementation@Taskbar@winrt@@QEAAXAEBU?$IObservableVector@UTaskItemThumbnail@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@4@AEBUIVectorChangedEventArgs@6784@@Z
    void OnSourceArrayChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceArray@HoverUIItemsCollection@implementation@Taskbar@winrt@@QEAAXU?$IObservableVector@UTaskItemThumbnail@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@4@@Z
    void SetSourceArray(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetItem@HoverUIItemsCollection@implementation@Taskbar@winrt@@QEAAXAEBUTaskItem@Shell@UI@WindowsUdk@4@@Z
    void SetTargetItem(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HoverUIItemsCollection@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~HoverUIItemsCollection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeTaskItemThumbnailViewModel@HoverUIItemsCollection@implementation@Taskbar@winrt@@AEAA?AUIInspectable@Foundation@Windows@4@AEBUTaskItemThumbnail@Shell@UI@WindowsUdk@4@@Z
    WindissectOpaque MakeTaskItemThumbnailViewModel(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismissExtendedUIRequested@HoverUIItemsCollection@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void OnDismissExtendedUIRequested(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsPointerOverChanged@HoverUIItemsCollection@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@_N@Z
    void OnIsPointerOverChanged(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyboardCloseRequested@HoverUIItemsCollection@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void OnKeyboardCloseRequested(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegenerateViewModels@HoverUIItemsCollection@implementation@Taskbar@winrt@@AEAAXXZ
    void RegenerateViewModels();
};
} // namespace winrt::Taskbar::implementation

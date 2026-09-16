#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 22 member(s).
namespace winrt::Taskbar::implementation {
class AppItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionGlyph@AppItem@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque ActionGlyph() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionGlyphAltText@AppItem@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque ActionGlyphAltText() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionText@AppItem@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque ActionText() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppId@AppItem@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque AppId() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppItem@implementation@Taskbar@winrt@@QEAA@AEBUTile@StartScreen@UI@WindowsUdk@3@UCoreDispatcher@Core@6Windows@3@@Z
    AppItem(WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppName@AppItem@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque AppName() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutomationId@AppItem@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque AutomationId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dismissed@AppItem@implementation@Taskbar@winrt@@QEAA?AUevent_token@4@U?$TypedEventHandler@UIRecommendedItem@Taskbar@winrt@@UIInspectable@Foundation@Windows@3@@Foundation@Windows@4@@Z
    WindissectOpaque Dismissed(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayName@AppItem@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque DisplayName() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Icon@AppItem@implementation@Taskbar@winrt@@QEAAXAEBUIRandomAccessStream@Streams@Storage@Windows@4@@Z
    void Icon(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Icon@AppItem@implementation@Taskbar@winrt@@QEBA?AUIRandomAccessStream@Streams@Storage@Windows@4@XZ
    WindissectOpaque Icon() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClick@AppItem@implementation@Taskbar@winrt@@QEAAXXZ
    void OnClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextRequested@AppItem@implementation@Taskbar@winrt@@QEAAXAEBUUIElement@Xaml@UI@Windows@4@@Z
    void OnContextRequested(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Subtitle@AppItem@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque Subtitle() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Title@AppItem@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque Title() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppItem@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~AppItem();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClickAsync@AppItem@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@XZ
    WindissectOpaque OnClickAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismissButtonClick@AppItem@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnDismissButtonClick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPinToTaskbar@AppItem@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnPinToTaskbar(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTitleClick@AppItem@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnTitleClick(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::Taskbar::implementation

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 21 member(s).
namespace winrt::Taskbar::implementation {
class WebsiteItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionGlyph@WebsiteItem@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque ActionGlyph() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionGlyphAltText@WebsiteItem@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque ActionGlyphAltText() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionText@WebsiteItem@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque ActionText() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppId@WebsiteItem@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque AppId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppName@WebsiteItem@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque AppName() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutomationId@WebsiteItem@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque AutomationId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayName@WebsiteItem@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque DisplayName() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Icon@WebsiteItem@implementation@Taskbar@winrt@@QEAAXAEBUIRandomAccessStream@Streams@Storage@Windows@4@@Z
    void Icon(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Icon@WebsiteItem@implementation@Taskbar@winrt@@QEBA?AUIRandomAccessStream@Streams@Storage@Windows@4@XZ
    WindissectOpaque Icon() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@WebsiteItem@implementation@Taskbar@winrt@@QEAAXXZ
    void Invoke();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClick@WebsiteItem@implementation@Taskbar@winrt@@QEAAXXZ
    void OnClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextRequested@WebsiteItem@implementation@Taskbar@winrt@@QEAAXAEBUUIElement@Xaml@UI@Windows@4@@Z
    void OnContextRequested(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Subtitle@WebsiteItem@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque Subtitle() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Title@WebsiteItem@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque Title() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WebsiteItem@implementation@Taskbar@winrt@@QEAA@AEBUUri@Foundation@Windows@3@AEBUhstring@3@11AEBUIRandomAccessStream@Streams@Storage@63@@Z
    WebsiteItem(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebsiteItem@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~WebsiteItem();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismissButtonClick@WebsiteItem@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnDismissButtonClick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPinToTaskbar@WebsiteItem@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnPinToTaskbar(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTitleClick@WebsiteItem@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnTitleClick(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::Taskbar::implementation

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 26 member(s).
namespace winrt::Taskbar::implementation {
class CrossDeviceResumeItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionGlyph@CrossDeviceResumeItem@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque ActionGlyph() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionGlyphAltText@CrossDeviceResumeItem@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque ActionGlyphAltText() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionText@CrossDeviceResumeItem@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque ActionText() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppId@CrossDeviceResumeItem@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque AppId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppName@CrossDeviceResumeItem@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque AppName() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutomationId@CrossDeviceResumeItem@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque AutomationId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?BadgeData@CrossDeviceResumeItem@implementation@Taskbar@winrt@@QEAA?AUBadge@StartScreen@UI@WindowsUdk@4@XZ
    WindissectOpaque BadgeData();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CrossDeviceResumeItem@implementation@Taskbar@winrt@@QEAA@AEBUhstring@3@AEBUIRandomAccessStream@Streams@Storage@Windows@3@1_N@Z
    CrossDeviceResumeItem(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dismissed@CrossDeviceResumeItem@implementation@Taskbar@winrt@@QEAA?AUevent_token@4@U?$TypedEventHandler@UIRecommendedItem@Taskbar@winrt@@UIInspectable@Foundation@Windows@3@@Foundation@Windows@4@@Z
    WindissectOpaque Dismissed(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayName@CrossDeviceResumeItem@implementation@Taskbar@winrt@@QEAAXAEBUhstring@4@@Z
    void DisplayName(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayName@CrossDeviceResumeItem@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque DisplayName() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Icon@CrossDeviceResumeItem@implementation@Taskbar@winrt@@QEAAXAEBUIRandomAccessStream@Streams@Storage@Windows@4@@Z
    void Icon(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Icon@CrossDeviceResumeItem@implementation@Taskbar@winrt@@QEBA?AUIRandomAccessStream@Streams@Storage@Windows@4@XZ
    WindissectOpaque Icon() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CrossDeviceResumeItem@implementation@Taskbar@winrt@@QEAAXXZ
    void Invoke();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClick@CrossDeviceResumeItem@implementation@Taskbar@winrt@@QEAAXXZ
    void OnClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextRequested@CrossDeviceResumeItem@implementation@Taskbar@winrt@@QEAAXAEBUUIElement@Xaml@UI@Windows@4@@Z
    void OnContextRequested(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverlayIcon@CrossDeviceResumeItem@implementation@Taskbar@winrt@@QEAAXAEBUIRandomAccessStream@Streams@Storage@Windows@4@@Z
    void OverlayIcon(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverlayIcon@CrossDeviceResumeItem@implementation@Taskbar@winrt@@QEBA?AUIRandomAccessStream@Streams@Storage@Windows@4@XZ
    WindissectOpaque OverlayIcon() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Subtitle@CrossDeviceResumeItem@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque Subtitle() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Title@CrossDeviceResumeItem@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque Title() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CrossDeviceResumeItem@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~CrossDeviceResumeItem();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismissButtonClick@CrossDeviceResumeItem@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnDismissButtonClick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTitleClick@CrossDeviceResumeItem@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnTitleClick(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::Taskbar::implementation

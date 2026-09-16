#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 27 member(s).
namespace winrt::Taskbar::implementation {
class RecommendedItemViewModel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppTaskState@RecommendedItemViewModel@implementation@Taskbar@winrt@@QEAA?AW4TaskbarAppTaskState@34@XZ
    int AppTaskState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutomationId@RecommendedItemViewModel@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque AutomationId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?BadgeData@RecommendedItemViewModel@implementation@Taskbar@winrt@@QEBA?AUBadge@StartScreen@UI@WindowsUdk@4@XZ
    WindissectOpaque BadgeData() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dismissed@RecommendedItemViewModel@implementation@Taskbar@winrt@@QEAAX_N@Z
    void Dismissed(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayName@RecommendedItemViewModel@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque DisplayName() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconHeight@RecommendedItemViewModel@implementation@Taskbar@winrt@@QEAANAEBUIRandomAccessStream@Streams@Storage@Windows@4@@Z
    double GetIconHeight(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRecommendedItem@RecommendedItemViewModel@implementation@Taskbar@winrt@@QEAA?AUIRecommendedItem@34@XZ
    WindissectOpaque GetRecommendedItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconHeight@RecommendedItemViewModel@implementation@Taskbar@winrt@@QEAAXN@Z
    void IconHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconHeight@RecommendedItemViewModel@implementation@Taskbar@winrt@@QEBANXZ
    double IconHeight() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@RecommendedItemViewModel@implementation@Taskbar@winrt@@QEAAXXZ
    void Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMostRecentlyUsed@RecommendedItemViewModel@implementation@Taskbar@winrt@@QEAAX_N@Z
    void IsMostRecentlyUsed(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsToolTipEnabled@RecommendedItemViewModel@implementation@Taskbar@winrt@@QEBA_NXZ
    bool IsToolTipEnabled() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Key@RecommendedItemViewModel@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque Key() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClick@RecommendedItemViewModel@implementation@Taskbar@winrt@@QEAAXXZ
    void OnClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextRequested@RecommendedItemViewModel@implementation@Taskbar@winrt@@QEAAXAEBUUIElement@Xaml@UI@Windows@4@@Z
    void OnContextRequested(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotKeyboardFocus@RecommendedItemViewModel@implementation@Taskbar@winrt@@QEAAXXZ
    void OnGotKeyboardFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRecommendationDismissed@RecommendedItemViewModel@implementation@Taskbar@winrt@@QEAAXAEBUIRecommendedItem@34@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnRecommendationDismissed(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisualStateChanged@RecommendedItemViewModel@implementation@Taskbar@winrt@@QEAAXAEBUTaskbarButtonVisualStateChangedEventArgs@34@@Z
    void OnVisualStateChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rank@RecommendedItemViewModel@implementation@Taskbar@winrt@@QEAAXN@Z
    void Rank(double);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RecommendedItemViewModel@implementation@Taskbar@winrt@@QEAA@AEBU?$com_ptr@UTaskbarConfiguration@implementation@Taskbar@winrt@@@3@AEBU?$com_ptr@UHoverFlyoutModel@implementation@Taskbar@winrt@@@3@AEBUIRecommendedItem@23@@Z
    RecommendedItemViewModel(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RecommendedItemViewModel@implementation@Taskbar@winrt@@QEAA@AEBU?$com_ptr@UTaskbarConfiguration@implementation@Taskbar@winrt@@@3@AEBUIRecommendedItem@23@@Z
    RecommendedItemViewModel(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowLeftDivider@RecommendedItemViewModel@implementation@Taskbar@winrt@@QEAAX_N@Z
    void ShouldShowLeftDivider(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowFlashing@RecommendedItemViewModel@implementation@Taskbar@winrt@@QEBA_NXZ
    bool ShowFlashing() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RecommendedItemViewModel@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~RecommendedItemViewModel();
};
} // namespace winrt::Taskbar::implementation

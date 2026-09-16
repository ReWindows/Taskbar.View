#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 49 member(s).
namespace winrt::Taskbar::implementation {
class SearchItemViewModel {
public:
    class DynamicContent;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccessibleName@SearchItemViewModel@implementation@Taskbar@winrt@@UEBA?AUhstring@4@XZ
    virtual WindissectOpaque AccessibleName() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanCollapse@SearchItemViewModel@implementation@Taskbar@winrt@@QEAA_NXZ
    bool CanCollapse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanExpand@SearchItemViewModel@implementation@Taskbar@winrt@@QEAA_NXZ
    bool CanExpand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandedMinWidth@SearchItemViewModel@implementation@Taskbar@winrt@@QEAAMXZ
    float ExpandedMinWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GleamButtonTooltipText@SearchItemViewModel@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque GleamButtonTooltipText() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?GleamSource@SearchItemViewModel@implementation@Taskbar@winrt@@QEAA?AUGleamIconSource@34@XZ
    WindissectOpaque GleamSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconHeight@SearchItemViewModel@implementation@Taskbar@winrt@@UEAAXN@Z
    virtual void IconHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SearchItemViewModel@implementation@Taskbar@winrt@@UEAAXAEBUTaskbarModel@Shell@UI@WindowsUdk@4@@Z
    virtual void Initialize(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGleamHoverEnabled@SearchItemViewModel@implementation@Taskbar@winrt@@QEBA_NXZ
    bool IsGleamHoverEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHoverFlyoutEnabled@SearchItemViewModel@implementation@Taskbar@winrt@@UEBA_NXZ
    virtual bool IsHoverFlyoutEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShellViewVisible@SearchItemViewModel@implementation@Taskbar@winrt@@UEBA_NXZ
    virtual bool IsShellViewVisible() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSpaceAvailableForSearchBox@SearchItemViewModel@implementation@Taskbar@winrt@@QEAAX_N@Z
    void IsSpaceAvailableForSearchBox(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGleamLostFocus@SearchItemViewModel@implementation@Taskbar@winrt@@QEAAX_N@Z
    void OnGleamLostFocus(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshGleam@SearchItemViewModel@implementation@Taskbar@winrt@@QEAAXXZ
    void RefreshGleam();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderTheme@SearchItemViewModel@implementation@Taskbar@winrt@@QEBA?AW4VisualTheme@Themes@UI@WindowsUdk@4@XZ
    int RenderTheme() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SearchBoxText@SearchItemViewModel@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque SearchBoxText() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SearchItemViewModel@implementation@Taskbar@winrt@@QEAA@AEBUShellViewCoordinator@Shell@UI@WindowsUdk@3@0AEBU?$com_ptr@UTaskbarConfiguration@implementation@Taskbar@winrt@@@3@AEBU?$com_ptr@UViewCoordinator@implementation@Taskbar@winrt@@@3@_K@Z
    SearchItemViewModel(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TooltipText@SearchItemViewModel@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque TooltipText() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIconHeight@SearchItemViewModel@implementation@Taskbar@winrt@@QEAAXXZ
    void UpdateIconHeight();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SearchItemViewModel@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~SearchItemViewModel();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewCoordinatorVisibilityChanged@SearchItemViewModel@implementation@Taskbar@winrt@@MEAA?AUfire_and_forget@4@AEBUShellViewCoordinator@Shell@UI@WindowsUdk@4@AEBUIInspectable@Foundation@Windows@4@@Z
    virtual WindissectOpaque OnViewCoordinatorVisibilityChanged(WindissectOpaque const &, WindissectOpaque const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultPlaceholderText@SearchItemViewModel@implementation@Taskbar@winrt@@AEBA?AUhstring@4@XZ
    WindissectOpaque GetDefaultPlaceholderText() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDynamicPlaceholderKind@SearchItemViewModel@implementation@Taskbar@winrt@@AEBA?AW4SearchBoxPlaceholderKind@34@XZ
    int GetDynamicPlaceholderKind() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDynamicPlaceholderText@SearchItemViewModel@implementation@Taskbar@winrt@@AEBA?AUhstring@4@XZ
    WindissectOpaque GetDynamicPlaceholderText() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDynamicTelemetryId@SearchItemViewModel@implementation@Taskbar@winrt@@AEBA?AUhstring@4@XZ
    WindissectOpaque GetDynamicTelemetryId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTooltipText@SearchItemViewModel@implementation@Taskbar@winrt@@AEBA?AUhstring@4@XZ
    WindissectOpaque GetTooltipText() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeLaunchUriAsync@SearchItemViewModel@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@ULaunchUriGleamInvokeAction@Shell@UI@WindowsUdk@4@@Z
    WindissectOpaque InvokeLaunchUriAsync(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocusActiveAsync@SearchItemViewModel@implementation@Taskbar@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@Windows@4@XZ
    WindissectOpaque IsFocusActiveAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAlignmentChanged@SearchItemViewModel@implementation@Taskbar@winrt@@AEAAXXZ
    void OnAlignmentChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplicationThemeChanged@SearchItemViewModel@implementation@Taskbar@winrt@@AEAAXXZ
    void OnApplicationThemeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayModeChanged@SearchItemViewModel@implementation@Taskbar@winrt@@AEAAXXZ
    void OnDisplayModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsFocusActiveChanged@SearchItemViewModel@implementation@Taskbar@winrt@@AEAAXUIInspectable@Foundation@Windows@4@0@Z
    void OnIsFocusActiveChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMoveFocusToFlyoutRequestedInternal@SearchItemViewModel@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@UPoint@Foundation@Windows@4@W4InputDeviceKind@Shell@UI@WindowsUdk@4@@Z
    WindissectOpaque OnMoveFocusToFlyoutRequestedInternal(WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRenderThemeChanged@SearchItemViewModel@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@W4VisualTheme@Themes@UI@WindowsUdk@4@@Z
    WindissectOpaque OnRenderThemeChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSearchAppearanceExtensionChanged@SearchItemViewModel@implementation@Taskbar@winrt@@AEAAXUIInspectable@Foundation@Windows@4@0@Z
    void OnSearchAppearanceExtensionChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSearchBoxPlaceholderChanged@SearchItemViewModel@implementation@Taskbar@winrt@@AEAAXUIInspectable@Foundation@Windows@4@0@Z
    void OnSearchBoxPlaceholderChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSearchModeChanged@SearchItemViewModel@implementation@Taskbar@winrt@@AEAAXXZ
    void OnSearchModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSearchPolicySettingsChanged@SearchItemViewModel@implementation@Taskbar@winrt@@AEAAXUIInspectable@Foundation@Windows@4@0@Z
    void OnSearchPolicySettingsChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowSearchOnHoverChanged@SearchItemViewModel@implementation@Taskbar@winrt@@AEAAXXZ
    void OnShowSearchOnHoverChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUriInvoked@SearchItemViewModel@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@XZ
    WindissectOpaque OnUriInvoked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshDynamicTextAndGleamAsync@SearchItemViewModel@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@U?$weak_ref@USearchItemViewModel@implementation@Taskbar@winrt@@@4@@Z
    WindissectOpaque RefreshDynamicTextAndGleamAsync(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowShellViewInternal@SearchItemViewModel@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@UPoint@Foundation@Windows@4@W4InputDeviceKind@Shell@UI@WindowsUdk@4@Uhstring@4@@Z
    WindissectOpaque ShowShellViewInternal(WindissectOpaque, int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetDynamicGleamAltText@SearchItemViewModel@implementation@Taskbar@winrt@@AEBA?AUhstring@4@XZ
    WindissectOpaque TryGetDynamicGleamAltText() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetSearchAppearanceExtension@SearchItemViewModel@implementation@Taskbar@winrt@@CA?AUISearchAppearanceExtensionStatics@Shell@UI@WindowsUdk@4@XZ
    static WindissectOpaque TryGetSearchAppearanceExtension();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdateTaskbarLayout@SearchItemViewModel@implementation@Taskbar@winrt@@AEAAXXZ
    void TryUpdateTaskbarLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEffectiveSearchMode@SearchItemViewModel@implementation@Taskbar@winrt@@AEAAX_N@Z
    void UpdateEffectiveSearchMode(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGleamTheme@SearchItemViewModel@implementation@Taskbar@winrt@@AEAAXW4VisualTheme@Themes@UI@WindowsUdk@4@@Z
    void UpdateGleamTheme(int);
};
} // namespace winrt::Taskbar::implementation

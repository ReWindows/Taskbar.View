#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 56 member(s).
namespace winrt::Taskbar::implementation {
class SearchBoxButton {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContentText@SearchBoxButton@implementation@Taskbar@winrt@@QEAAXAEBUhstring@4@@Z
    void ContentText(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContentText@SearchBoxButton@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque ContentText() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Context@SearchBoxButton@implementation@Taskbar@winrt@@QEAA?AUhstring@4@W4SearchBoxQuerySource@234@@Z
    WindissectOpaque Context(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GleamSource@SearchBoxButton@implementation@Taskbar@winrt@@QEAAXAEBUGleamIconSource@34@@Z
    void GleamSource(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GleamSource@SearchBoxButton@implementation@Taskbar@winrt@@QEAA?AUGleamIconSource@34@XZ
    WindissectOpaque GleamSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeShellHandwriting@SearchBoxButton@implementation@Taskbar@winrt@@QEAAXXZ
    void InitializeShellHandwriting();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExperienceVisible@SearchBoxButton@implementation@Taskbar@winrt@@UEAAX_N@Z
    virtual void IsExperienceVisible(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGleamButtonKeyboardFocus@SearchBoxButton@implementation@Taskbar@winrt@@QEAA_NXZ
    bool IsGleamButtonKeyboardFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSearchBoxEnabledOnShyTaskbar@SearchBoxButton@implementation@Taskbar@winrt@@QEBA_NXZ
    bool IsSearchBoxEnabledOnShyTaskbar() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveFocusToGleamButton@SearchBoxButton@implementation@Taskbar@winrt@@QEAAXXZ
    void MoveFocusToGleamButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@SearchBoxButton@implementation@Taskbar@winrt@@UEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnPointerCaptureLost(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@SearchBoxButton@implementation@Taskbar@winrt@@UEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnPointerEntered(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@SearchBoxButton@implementation@Taskbar@winrt@@UEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnPointerExited(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Orientation@SearchBoxButton@implementation@Taskbar@winrt@@UEAAXW4SimpleOrientation@Sensors@Devices@Windows@4@@Z
    virtual void Orientation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderTheme@SearchBoxButton@implementation@Taskbar@winrt@@UEAAXW4VisualTheme@Themes@UI@WindowsUdk@4@@Z
    virtual void RenderTheme(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SearchBoxButton@implementation@Taskbar@winrt@@QEAA@XZ
    SearchBoxButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SearchMode@SearchBoxButton@implementation@Taskbar@winrt@@QEAAXW4TaskbarSearchMode@Shell@UI@WindowsUdk@4@@Z
    void SearchMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGleamButtonContainerStyle@SearchBoxButton@implementation@Taskbar@winrt@@QEAAXXZ
    void SetGleamButtonContainerStyle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TelemetryId@SearchBoxButton@implementation@Taskbar@winrt@@QEAAXAEBUhstring@4@@Z
    void TelemetryId(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TelemetryId@SearchBoxButton@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque TelemetryId() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SearchBoxButton@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~SearchBoxButton();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShowingSearchBox@SearchBoxButton@implementation@Taskbar@winrt@@MEBA_NXZ
    virtual bool IsShowingSearchBox() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplateImpl@SearchBoxButton@implementation@Taskbar@winrt@@MEAAXXZ
    virtual void OnApplyTemplateImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayOverride@SearchBoxButton@implementation@Taskbar@winrt@@MEAA_NUAnimationMarkers@234@W4ExperienceToggleButtonVisualState@ExperienceToggleButton@234@1@Z
    virtual bool PlayOverride(WindissectOpaque, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartPressedAnimation@SearchBoxButton@implementation@Taskbar@winrt@@MEAAXXZ
    virtual void StartPressedAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartReleasedAnimation@SearchBoxButton@implementation@Taskbar@winrt@@MEAAXXZ
    virtual void StartReleasedAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonPadding@SearchBoxButton@implementation@Taskbar@winrt@@MEAAXXZ
    virtual void UpdateButtonPadding();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTemplateLayout@SearchBoxButton@implementation@Taskbar@winrt@@MEAAXUSize@Foundation@Windows@4@@Z
    virtual void UpdateTemplateLayout(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStates@SearchBoxButton@implementation@Taskbar@winrt@@MEAAXXZ
    virtual void UpdateVisualStates();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskbarKeyboardFocused@SearchBoxButton@implementation@Taskbar@winrt@@AEAA_NXZ
    bool IsTaskbarKeyboardFocused();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTemplateLoaded@SearchBoxButton@implementation@Taskbar@winrt@@AEBA_NXZ
    bool IsTemplateLoaded() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGleamButtonClicked@SearchBoxButton@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnGleamButtonClicked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGleamButtonGotFocus@SearchBoxButton@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnGleamButtonGotFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGleamButtonHoverInvokeTimerTick@SearchBoxButton@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void OnGleamButtonHoverInvokeTimerTick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGleamButtonLostFocus@SearchBoxButton@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnGleamButtonLostFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGleamButtonPointerCanceled@SearchBoxButton@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUPointerRoutedEventArgs@Input@Xaml@UI@74@@Z
    void OnGleamButtonPointerCanceled(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGleamButtonPointerCaptureLost@SearchBoxButton@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUPointerRoutedEventArgs@Input@Xaml@UI@74@@Z
    void OnGleamButtonPointerCaptureLost(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGleamButtonPointerEntered@SearchBoxButton@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnGleamButtonPointerEntered(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGleamButtonPointerExited@SearchBoxButton@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUPointerRoutedEventArgs@Input@Xaml@UI@74@@Z
    void OnGleamButtonPointerExited(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGleamButtonPointerMoved@SearchBoxButton@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnGleamButtonPointerMoved(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGleamButtonPointerPressed@SearchBoxButton@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUPointerRoutedEventArgs@Input@Xaml@UI@74@@Z
    void OnGleamButtonPointerPressed(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGleamButtonPointerReleased@SearchBoxButton@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUPointerRoutedEventArgs@Input@Xaml@UI@74@@Z
    void OnGleamButtonPointerReleased(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGleamImageLoaded@SearchBoxButton@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnGleamImageLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHighContrastChanged@SearchBoxButton@implementation@Taskbar@winrt@@AEAAXAEBUAccessibilitySettings@ViewManagement@UI@Windows@4@AEBUIInspectable@Foundation@84@@Z
    void OnHighContrastChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSearchBoxBorderPointerEntered@SearchBoxButton@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnSearchBoxBorderPointerEntered(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSearchBoxBorderPointerExited@SearchBoxButton@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnSearchBoxBorderPointerExited(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessGleamSource@SearchBoxButton@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@XZ
    WindissectOpaque ProcessGleamSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdateCursor@SearchBoxButton@implementation@Taskbar@winrt@@AEAAXXZ
    void TryUpdateCursor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGleam@SearchBoxButton@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateGleam();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGleamButtonTheme@SearchBoxButton@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateGleamButtonTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGleamContainerBackplate@SearchBoxButton@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateGleamContainerBackplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGleamTooltip@SearchBoxButton@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateGleamTooltip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStyling@SearchBoxButton@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateStyling();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTaskbarSearchMode@SearchBoxButton@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateTaskbarSearchMode();
};
} // namespace winrt::Taskbar::implementation

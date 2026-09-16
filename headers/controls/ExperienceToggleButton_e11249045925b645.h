#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 69 member(s).
namespace winrt::Taskbar::implementation {
class ExperienceToggleButton {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClickContext@ExperienceToggleButton@implementation@Taskbar@winrt@@QEAA?AUhstring@4@XZ
    WindissectOpaque ClickContext();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ExperienceToggleButton@implementation@Taskbar@winrt@@QEAA@XZ
    ExperienceToggleButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceSetPointerOver@ExperienceToggleButton@implementation@Taskbar@winrt@@QEAAX_N@Z
    void ForceSetPointerOver(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconHeight@ExperienceToggleButton@implementation@Taskbar@winrt@@QEAAXN@Z
    void IconHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconHeight@ExperienceToggleButton@implementation@Taskbar@winrt@@QEBANXZ
    double IconHeight() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExperienceVisible@ExperienceToggleButton@implementation@Taskbar@winrt@@UEAAX_N@Z
    virtual void IsExperienceVisible(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExperienceVisible@ExperienceToggleButton@implementation@Taskbar@winrt@@QEAA_NXZ
    bool IsExperienceVisible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShowingSearchBox@ExperienceToggleButton@implementation@Taskbar@winrt@@UEBA_NXZ
    virtual bool IsShowingSearchBox() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSmallFrame@ExperienceToggleButton@implementation@Taskbar@winrt@@QEAAX_N@Z
    void IsSmallFrame(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@ExperienceToggleButton@implementation@Taskbar@winrt@@QEAA?AUSize@Foundation@Windows@4@U5674@@Z
    WindissectOpaque MeasureOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@ExperienceToggleButton@implementation@Taskbar@winrt@@QEAAXAEBURoutedEventArgs@Xaml@UI@Windows@4@@Z
    void OnGotFocus(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@ExperienceToggleButton@implementation@Taskbar@winrt@@QEAAXAEBURoutedEventArgs@Xaml@UI@Windows@4@@Z
    void OnLostFocus(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCanceled@ExperienceToggleButton@implementation@Taskbar@winrt@@QEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnPointerCanceled(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@ExperienceToggleButton@implementation@Taskbar@winrt@@UEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnPointerCaptureLost(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@ExperienceToggleButton@implementation@Taskbar@winrt@@UEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnPointerEntered(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@ExperienceToggleButton@implementation@Taskbar@winrt@@UEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnPointerExited(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@ExperienceToggleButton@implementation@Taskbar@winrt@@UEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnPointerPressed(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@ExperienceToggleButton@implementation@Taskbar@winrt@@UEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnPointerReleased(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Orientation@ExperienceToggleButton@implementation@Taskbar@winrt@@UEAAXW4SimpleOrientation@Sensors@Devices@Windows@4@@Z
    virtual void Orientation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderTheme@ExperienceToggleButton@implementation@Taskbar@winrt@@UEAAXW4VisualTheme@Themes@UI@WindowsUdk@4@@Z
    virtual void RenderTheme(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskbarAlignment@ExperienceToggleButton@implementation@Taskbar@winrt@@UEAAXW40Shell@UI@WindowsUdk@4@@Z
    virtual void TaskbarAlignment(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskbarInteractionMode@ExperienceToggleButton@implementation@Taskbar@winrt@@UEAAXW4UserInteractionMode@ViewManagement@UI@Windows@4@@Z
    virtual void TaskbarInteractionMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskbarItemGroupingMode@ExperienceToggleButton@implementation@Taskbar@winrt@@UEAAXW40Shell@UI@WindowsUdk@4@@Z
    virtual void TaskbarItemGroupingMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskbarLocation@ExperienceToggleButton@implementation@Taskbar@winrt@@UEAAXW40Shell@UI@WindowsUdk@4@@Z
    virtual void TaskbarLocation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Theme@ExperienceToggleButton@implementation@Taskbar@winrt@@UEAAXW4VisualTheme@Themes@UI@WindowsUdk@4@@Z
    virtual void Theme(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateToolTipPlacementForHoverState@ExperienceToggleButton@implementation@Taskbar@winrt@@QEAAX_N@Z
    void UpdateToolTipPlacementForHoverState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransitions@ExperienceToggleButton@implementation@Taskbar@winrt@@QEAAX_NW4TaskbarButtonTransitionKind@34@@Z
    void UpdateTransitions(bool, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExperienceToggleButton@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~ExperienceToggleButton();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteGestureIfActive@ExperienceToggleButton@implementation@Taskbar@winrt@@IEAAXXZ
    void CompleteGestureIfActive();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundElementOpacity@ExperienceToggleButton@implementation@Taskbar@winrt@@MEAANXZ
    virtual double GetBackgroundElementOpacity();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceDictionary@ExperienceToggleButton@implementation@Taskbar@winrt@@IEAA?AUResourceDictionary@Xaml@UI@Windows@4@XZ
    WindissectOpaque GetResourceDictionary();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsActiveVisualState@ExperienceToggleButton@implementation@Taskbar@winrt@@MEAA_NXZ
    virtual bool IsActiveVisualState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTemplateApplied@ExperienceToggleButton@implementation@Taskbar@winrt@@MEBA_NXZ
    virtual bool IsTemplateApplied() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplateImpl@ExperienceToggleButton@implementation@Taskbar@winrt@@MEAAXXZ
    virtual void OnApplyTemplateImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayOverride@ExperienceToggleButton@implementation@Taskbar@winrt@@MEAA_NUAnimationMarkers@234@W4ExperienceToggleButtonVisualState@1234@1@Z
    virtual bool PlayOverride(WindissectOpaque, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayStateChange@ExperienceToggleButton@implementation@Taskbar@winrt@@IEAAXXZ
    void PlayStateChange();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransitionAnimations@ExperienceToggleButton@implementation@Taskbar@winrt@@IEAAXXZ
    void SetTransitionAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartPressedAnimation@ExperienceToggleButton@implementation@Taskbar@winrt@@MEAAXXZ
    virtual void StartPressedAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartReleasedAnimation@ExperienceToggleButton@implementation@Taskbar@winrt@@MEAAXXZ
    virtual void StartReleasedAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAnimationMarkersForSearchShellView@ExperienceToggleButton@implementation@Taskbar@winrt@@IEAAXXZ
    void UpdateAnimationMarkersForSearchShellView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAnimationVisualColorForSearchSparkle@ExperienceToggleButton@implementation@Taskbar@winrt@@IEAAXUIAnimatedVisualSource@Controls@Xaml@UI@Microsoft@4@@Z
    void UpdateAnimationVisualColorForSearchSparkle(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonPadding@ExperienceToggleButton@implementation@Taskbar@winrt@@MEAAXXZ
    virtual void UpdateButtonPadding();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCursor@ExperienceToggleButton@implementation@Taskbar@winrt@@MEAAXXZ
    virtual void UpdateCursor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIconHeight@ExperienceToggleButton@implementation@Taskbar@winrt@@IEAAXN@Z
    void UpdateIconHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTemplateLayout@ExperienceToggleButton@implementation@Taskbar@winrt@@MEAAXUSize@Foundation@Windows@4@@Z
    virtual void UpdateTemplateLayout(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStates@ExperienceToggleButton@implementation@Taskbar@winrt@@MEAAXXZ
    virtual void UpdateVisualStates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseSparkleSearchIcon@ExperienceToggleButton@implementation@Taskbar@winrt@@IEBA_NXZ
    bool UseSparkleSearchIcon() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureDefaultAnimationMarkersForSearchShellView@ExperienceToggleButton@implementation@Taskbar@winrt@@AEAA?AUIAnimatedVisualSource@Controls@Xaml@UI@Microsoft@4@XZ
    WindissectOpaque ConfigureDefaultAnimationMarkersForSearchShellView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAnimatedVisualPlayer@ExperienceToggleButton@implementation@Taskbar@winrt@@AEAAXXZ
    void InitializeAnimatedVisualPlayer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExpectedTaskbarKind@ExperienceToggleButton@implementation@Taskbar@winrt@@AEBA_NAEBW4TaskbarItemKind@34@@Z
    bool IsExpectedTaskbarKind(int const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSearchBox@ExperienceToggleButton@implementation@Taskbar@winrt@@AEBA_NXZ
    bool IsSearchBox() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSearchIcon@ExperienceToggleButton@implementation@Taskbar@winrt@@AEBA_NXZ
    bool IsSearchIcon() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUpdateVisualColor@ExperienceToggleButton@implementation@Taskbar@winrt@@AEBA_NXZ
    bool IsUpdateVisualColor() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEntranceAnimationCompleted@ExperienceToggleButton@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUCompositionBatchCompletedEventArgs@Composition@UI@74@@Z
    void OnEntranceAnimationCompleted(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFlyoutDismissTimerTick@ExperienceToggleButton@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void OnFlyoutDismissTimerTick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHoverInvokeTimerTick@ExperienceToggleButton@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void OnHoverInvokeTimerTick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsCheckedPropertyChanged@ExperienceToggleButton@implementation@Taskbar@winrt@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@4@AEBUDependencyProperty@6784@@Z
    void OnIsCheckedPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@ExperienceToggleButton@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSwipe@ExperienceToggleButton@implementation@Taskbar@winrt@@AEAAXAEBUSwipeEventArgs@34@@Z
    void OnSwipe(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Play@ExperienceToggleButton@implementation@Taskbar@winrt@@AEAAXNN@Z
    void Play(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartFlyoutDismissTimer@ExperienceToggleButton@implementation@Taskbar@winrt@@AEAAXXZ
    void StartFlyoutDismissTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartHoverTimer@ExperienceToggleButton@implementation@Taskbar@winrt@@AEAAXXZ
    void StartHoverTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopHoverTimer@ExperienceToggleButton@implementation@Taskbar@winrt@@AEAAXXZ
    void StopHoverTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIconAndLabelColumnDefinitions@ExperienceToggleButton@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateIconAndLabelColumnDefinitions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLastInvocationPoint@ExperienceToggleButton@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateLastInvocationPoint();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseDarkThemeLottieAssetForSearchShellView@ExperienceToggleButton@implementation@Taskbar@winrt@@AEBA_NXZ
    bool UseDarkThemeLottieAssetForSearchShellView() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseHighContrastThemeLottieAssetForSearchShellView@ExperienceToggleButton@implementation@Taskbar@winrt@@AEBA_NXZ
    bool UseHighContrastThemeLottieAssetForSearchShellView() const;
};
} // namespace winrt::Taskbar::implementation

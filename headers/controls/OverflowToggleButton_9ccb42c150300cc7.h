#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 33 member(s).
namespace winrt::Taskbar::implementation {
class OverflowToggleButton {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeLeftOverflowDividerMargin@OverflowToggleButton@implementation@Taskbar@winrt@@SA?AUThickness@Xaml@UI@Windows@4@W4UserInteractionMode@ViewManagement@784@U56784@1N@Z
    static WindissectOpaque ComputeLeftOverflowDividerMargin(int, WindissectOpaque, WindissectOpaque, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeOverflowButtonMargin@OverflowToggleButton@implementation@Taskbar@winrt@@SA?AUThickness@Xaml@UI@Windows@4@W4UserInteractionMode@ViewManagement@784@U56784@1N_N@Z
    static WindissectOpaque ComputeOverflowButtonMargin(int, WindissectOpaque, WindissectOpaque, double, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeRightOverflowDividerMargin@OverflowToggleButton@implementation@Taskbar@winrt@@SA?AUThickness@Xaml@UI@Windows@4@W4UserInteractionMode@ViewManagement@784@U56784@1N@Z
    static WindissectOpaque ComputeRightOverflowDividerMargin(int, WindissectOpaque, WindissectOpaque, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconHeight@OverflowToggleButton@implementation@Taskbar@winrt@@QEAAXN@Z
    void IconHeight(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverflowOpen@OverflowToggleButton@implementation@Taskbar@winrt@@QEAA_NXZ
    bool IsOverflowOpen();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSmallFrame@OverflowToggleButton@implementation@Taskbar@winrt@@QEAAX_N@Z
    void IsSmallFrame(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@OverflowToggleButton@implementation@Taskbar@winrt@@QEAA?AUSize@Foundation@Windows@4@U5674@@Z
    WindissectOpaque MeasureOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@OverflowToggleButton@implementation@Taskbar@winrt@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@OverflowToggleButton@implementation@Taskbar@winrt@@QEAAXAEBURoutedEventArgs@Xaml@UI@Windows@4@@Z
    void OnGotFocus(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@OverflowToggleButton@implementation@Taskbar@winrt@@QEAAXAEBUKeyRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnKeyDown(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@OverflowToggleButton@implementation@Taskbar@winrt@@QEAAXAEBURoutedEventArgs@Xaml@UI@Windows@4@@Z
    void OnLostFocus(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCanceled@OverflowToggleButton@implementation@Taskbar@winrt@@QEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnPointerCanceled(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@OverflowToggleButton@implementation@Taskbar@winrt@@QEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnPointerCaptureLost(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@OverflowToggleButton@implementation@Taskbar@winrt@@QEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnPointerEntered(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@OverflowToggleButton@implementation@Taskbar@winrt@@QEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnPointerExited(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@OverflowToggleButton@implementation@Taskbar@winrt@@QEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnPointerPressed(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@OverflowToggleButton@implementation@Taskbar@winrt@@QEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnPointerReleased(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OverflowToggleButton@implementation@Taskbar@winrt@@QEAA@XZ
    OverflowToggleButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevokeStashedRevokers@OverflowToggleButton@implementation@Taskbar@winrt@@QEAAXXZ
    void RevokeStashedRevokers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartRestoreAnimation@OverflowToggleButton@implementation@Taskbar@winrt@@QEAAXXZ
    void StartRestoreAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskbarInteractionMode@OverflowToggleButton@implementation@Taskbar@winrt@@QEAAXAEBW4UserInteractionMode@ViewManagement@UI@Windows@4@@Z
    void TaskbarInteractionMode(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskbarLocation@OverflowToggleButton@implementation@Taskbar@winrt@@QEAAXW40Shell@UI@WindowsUdk@4@@Z
    void TaskbarLocation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateToolTipPlacementForHoverState@OverflowToggleButton@implementation@Taskbar@winrt@@QEAAXXZ
    void UpdateToolTipPlacementForHoverState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransitions@OverflowToggleButton@implementation@Taskbar@winrt@@QEAAX_NW4TaskbarButtonTransitionKind@34@@Z
    void UpdateTransitions(bool, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OverflowToggleButton@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~OverflowToggleButton();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransitionAnimations@OverflowToggleButton@implementation@Taskbar@winrt@@IEAAXXZ
    void SetTransitionAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonPadding@OverflowToggleButton@implementation@Taskbar@winrt@@MEAAXXZ
    virtual void UpdateButtonPadding();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDividerMarginAndHeight@OverflowToggleButton@implementation@Taskbar@winrt@@MEAAXXZ
    virtual void UpdateDividerMarginAndHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStates@OverflowToggleButton@implementation@Taskbar@winrt@@MEAAXXZ
    virtual void UpdateVisualStates();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTemplateLoaded@OverflowToggleButton@implementation@Taskbar@winrt@@AEBA_NXZ
    bool IsTemplateLoaded() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsCheckedPropertyChanged@OverflowToggleButton@implementation@Taskbar@winrt@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@4@AEBUDependencyProperty@6784@@Z
    void OnIsCheckedPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::Taskbar::implementation

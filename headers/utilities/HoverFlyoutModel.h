#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 25 member(s).
namespace winrt::Taskbar::implementation {
class HoverFlyoutModel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dismiss@HoverFlyoutModel@implementation@Taskbar@winrt@@QEAAX_N@Z
    void Dismiss(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HoverFlyoutModel@implementation@Taskbar@winrt@@QEAA@UITaskbarItemKeyConverter@23@@Z
    HoverFlyoutModel(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFlyoutVisible@HoverFlyoutModel@implementation@Taskbar@winrt@@QEBA_NXZ
    bool IsFlyoutVisible() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisualStateStateChanged@HoverFlyoutModel@implementation@Taskbar@winrt@@QEAAXAEBUhstring@4@_NW4TaskItemVisualState@Shell@UI@WindowsUdk@4@2@Z
    void OnVisualStateStateChanged(WindissectOpaque const &, bool, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsPointerOverTaskbarFrame@HoverFlyoutModel@implementation@Taskbar@winrt@@QEAAX_N@Z
    void SetIsPointerOverTaskbarFrame(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowHoverUIRequested@HoverFlyoutModel@implementation@Taskbar@winrt@@QEAAXAEBUhstring@4@_N1@Z
    void ShowHoverUIRequested(WindissectOpaque const &, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowSticky@HoverFlyoutModel@implementation@Taskbar@winrt@@QEAAXAEBUhstring@4@@Z
    void ShowSticky(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnconvertedTargetItemKey@HoverFlyoutModel@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque UnconvertedTargetItemKey() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HoverFlyoutModel@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~HoverFlyoutModel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyboardInputReceived@HoverFlyoutModel@implementation@Taskbar@winrt@@AEAAXULowLevelKeyboardHook@34@UIInspectable@Foundation@Windows@4@@Z
    void OnKeyboardInputReceived(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEnteredFlyoutFrame@HoverFlyoutModel@implementation@Taskbar@winrt@@AEAAXXZ
    void OnPointerEnteredFlyoutFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEnteredItemWithHoverFlyout@HoverFlyoutModel@implementation@Taskbar@winrt@@AEAAXAEBUhstring@4@@Z
    void OnPointerEnteredItemWithHoverFlyout(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEnteredItemWithoutHoverFlyout@HoverFlyoutModel@implementation@Taskbar@winrt@@AEAAXXZ
    void OnPointerEnteredItemWithoutHoverFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExitedFlyoutFrame@HoverFlyoutModel@implementation@Taskbar@winrt@@AEAAXXZ
    void OnPointerExitedFlyoutFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExitedItemWithHoverFlyout@HoverFlyoutModel@implementation@Taskbar@winrt@@AEAAXXZ
    void OnPointerExitedItemWithHoverFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExitedTaskbarFrame@HoverFlyoutModel@implementation@Taskbar@winrt@@AEAAXXZ
    void OnPointerExitedTaskbarFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTimerTick@HoverFlyoutModel@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void OnTimerTick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetItemKey@HoverFlyoutModel@implementation@Taskbar@winrt@@AEAAXAEBUhstring@4@@Z
    void TargetItemKey(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionToFlyoutDismissPendingState@HoverFlyoutModel@implementation@Taskbar@winrt@@AEAAXXZ
    void TransitionToFlyoutDismissPendingState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionToFlyoutVisibleState@HoverFlyoutModel@implementation@Taskbar@winrt@@AEAAXUhstring@4@_N@Z
    void TransitionToFlyoutVisibleState(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionToFlyoutVisibleStickyState@HoverFlyoutModel@implementation@Taskbar@winrt@@AEAAXUhstring@4@@Z
    void TransitionToFlyoutVisibleStickyState(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionToNormalState@HoverFlyoutModel@implementation@Taskbar@winrt@@AEAAXXZ
    void TransitionToNormalState();
};
} // namespace winrt::Taskbar::implementation

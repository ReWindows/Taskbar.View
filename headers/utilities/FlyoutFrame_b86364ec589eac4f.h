#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 33 member(s).
namespace winrt::Taskbar::implementation {
class FlyoutFrame {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FlyoutFrame@implementation@Taskbar@winrt@@QEAA@W4TaskbarFlyoutKind@Shell@UI@WindowsUdk@3@@Z
    FlyoutFrame(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlyoutPosition@FlyoutFrame@implementation@Taskbar@winrt@@QEAA?AURect@Foundation@Windows@4@XZ
    WindissectOpaque FlyoutPosition();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtendedUIAnimationTipTest@FlyoutFrame@implementation@Taskbar@winrt@@UEBA?AV?$tip_test@V?$merged_data@U_tip_ExtendedUIAnimationTest@TaskbarTipTest@@U12@@details@tip2@@@tip2@@XZ
    virtual WindissectOpaque GetExtendedUIAnimationTipTest() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@FlyoutFrame@implementation@Taskbar@winrt@@QEAA?AUSize@Foundation@Windows@4@U5674@@Z
    WindissectOpaque MeasureOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@FlyoutFrame@implementation@Taskbar@winrt@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragEnter@FlyoutFrame@implementation@Taskbar@winrt@@QEAAXAEBUDragEventArgs@Xaml@UI@Windows@4@@Z
    void OnDragEnter(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragLeave@FlyoutFrame@implementation@Taskbar@winrt@@QEAAXAEBUDragEventArgs@Xaml@UI@Windows@4@@Z
    void OnDragLeave(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDrop@FlyoutFrame@implementation@Taskbar@winrt@@QEAAXAEBUDragEventArgs@Xaml@UI@Windows@4@@Z
    void OnDrop(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHostWindowRepositioned@FlyoutFrame@implementation@Taskbar@winrt@@QEAAXXZ
    void OnHostWindowRepositioned();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayReinvokeAnimation@FlyoutFrame@implementation@Taskbar@winrt@@QEAAXXZ
    void PlayReinvokeAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetContent@FlyoutFrame@implementation@Taskbar@winrt@@QEAAXXZ
    void ResetContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartEntranceAnimation@FlyoutFrame@implementation@Taskbar@winrt@@QEAAXXZ
    void StartEntranceAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartEntranceAnimationOnNextLayout@FlyoutFrame@implementation@Taskbar@winrt@@QEAAXXZ
    void StartEntranceAnimationOnNextLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartExitAnimation@FlyoutFrame@implementation@Taskbar@winrt@@QEAAXXZ
    void StartExitAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Target@FlyoutFrame@implementation@Taskbar@winrt@@QEAAXAEBUFrameworkElement@Xaml@UI@Windows@4@@Z
    void Target(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskbarLocation@FlyoutFrame@implementation@Taskbar@winrt@@QEAAXW40Shell@UI@WindowsUdk@4@@Z
    void TaskbarLocation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskbarThemeProperty@FlyoutFrame@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque TaskbarThemeProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Theme@FlyoutFrame@implementation@Taskbar@winrt@@QEAAXW4TaskbarTheme@Shell@UI@WindowsUdk@4@@Z
    void Theme(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FlyoutFrame@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~FlyoutFrame();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAnimatedFlyoutPosition@FlyoutFrame@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@XZ
    WindissectOpaque AddAnimatedFlyoutPosition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanFitAndUpdateScaleFactor@FlyoutFrame@implementation@Taskbar@winrt@@AEAA_NAEBU?$IVector@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@4@@Z
    bool CanFitAndUpdateScaleFactor(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@FlyoutFrame@implementation@Taskbar@winrt@@AEAAXXZ
    void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishExtendedUIAnimationTestAsync@FlyoutFrame@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@XZ
    WindissectOpaque FinishExtendedUIAnimationTestAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutUpdated@FlyoutFrame@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void LayoutUpdated(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentSizeChanged@FlyoutFrame@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUSizeChangedEventArgs@Xaml@UI@74@@Z
    void OnContentSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@FlyoutFrame@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRendered@FlyoutFrame@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void OnRendered(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTargetSizeChanged@FlyoutFrame@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUSizeChangedEventArgs@Xaml@UI@74@@Z
    void OnTargetSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnXamlRootChanged@FlyoutFrame@implementation@Taskbar@winrt@@AEAAXAEBUXamlRoot@Xaml@UI@Windows@4@AEBUXamlRootChangedEventArgs@6784@@Z
    void OnXamlRootChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFlyoutPosition@FlyoutFrame@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateFlyoutPosition();
};
} // namespace winrt::Taskbar::implementation

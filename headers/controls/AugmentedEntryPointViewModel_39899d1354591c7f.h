#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 28 member(s).
namespace winrt::Taskbar::implementation {
class AugmentedEntryPointViewModel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccessibleName@AugmentedEntryPointViewModel@implementation@Taskbar@winrt@@UEBA?AUhstring@4@XZ
    virtual WindissectOpaque AccessibleName() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AugmentedEntryPointData@AugmentedEntryPointViewModel@implementation@Taskbar@winrt@@QEBA?AUAugmentedEntryPointAdaptiveCardData@34@XZ
    WindissectOpaque AugmentedEntryPointData() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AugmentedEntryPointViewModel@implementation@Taskbar@winrt@@QEAA@AEBUShellViewCoordinator@Shell@UI@WindowsUdk@3@W4ShellView@5673@0AEBU?$com_ptr@UHoverFlyoutModel@implementation@Taskbar@winrt@@@3@AEBU?$com_ptr@UTaskbarConfiguration@implementation@Taskbar@winrt@@@3@AEBU?$com_ptr@UViewCoordinator@implementation@Taskbar@winrt@@@3@_K@Z
    AugmentedEntryPointViewModel(WindissectOpaque const &, int, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanCollapse@AugmentedEntryPointViewModel@implementation@Taskbar@winrt@@QEAA_NXZ
    bool CanCollapse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanExpand@AugmentedEntryPointViewModel@implementation@Taskbar@winrt@@QEAA_NXZ
    bool CanExpand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Context@AugmentedEntryPointViewModel@implementation@Taskbar@winrt@@QEBA?AUhstring@4@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@4@@Z
    WindissectOpaque Context(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DesiredMode@AugmentedEntryPointViewModel@implementation@Taskbar@winrt@@QEBA?AW4AugmentedEntryPointButtonMode@34@XZ
    int DesiredMode() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissHoverFlyout@AugmentedEntryPointViewModel@implementation@Taskbar@winrt@@UEAA?AUfire_and_forget@4@XZ
    virtual WindissectOpaque DismissHoverFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayName@AugmentedEntryPointViewModel@implementation@Taskbar@winrt@@UEBA?AUhstring@4@XZ
    virtual WindissectOpaque DisplayName() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandedMinWidth@AugmentedEntryPointViewModel@implementation@Taskbar@winrt@@QEAAMXZ
    float ExpandedMinWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AugmentedEntryPointViewModel@implementation@Taskbar@winrt@@UEAAXAEBUTaskbarModel@Shell@UI@WindowsUdk@4@@Z
    virtual void Initialize(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShellViewVisible@AugmentedEntryPointViewModel@implementation@Taskbar@winrt@@UEBA_NXZ
    virtual bool IsShellViewVisible() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsToolTipEnabled@AugmentedEntryPointViewModel@implementation@Taskbar@winrt@@UEBA_NXZ
    virtual bool IsToolTipEnabled() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Kind@AugmentedEntryPointViewModel@implementation@Taskbar@winrt@@UEBA?AW4TaskbarItemKind@34@XZ
    virtual int Kind() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAugmentedEntryPointDataChanged@AugmentedEntryPointViewModel@implementation@Taskbar@winrt@@QEAAXAEBUAugmentedEntryPointDataModel@34@AEBUAugmentedEntryPointAdaptiveCardData@34@@Z
    void OnAugmentedEntryPointDataChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowBadgesChanged@AugmentedEntryPointViewModel@implementation@Taskbar@winrt@@UEAAXXZ
    virtual void OnShowBadgesChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rendered@AugmentedEntryPointViewModel@implementation@Taskbar@winrt@@QEAAXUAugmentedEntryPointButtonRenderEventArgs@34@@Z
    void Rendered(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOverflowCollapse@AugmentedEntryPointViewModel@implementation@Taskbar@winrt@@QEAAX_N@Z
    void SetOverflowCollapse(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowHoverFlyoutAsync@AugmentedEntryPointViewModel@implementation@Taskbar@winrt@@UEAA?AUfire_and_forget@4@_KUPoint@Foundation@Windows@4@W4InputDeviceKind@Shell@UI@WindowsUdk@4@W4ExperienceToggleButtonFocusContext@34@@Z
    virtual WindissectOpaque ShowHoverFlyoutAsync(uint64_t, WindissectOpaque, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AugmentedEntryPointViewModel@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~AugmentedEntryPointViewModel();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewCoordinatorVisibilityChanged@AugmentedEntryPointViewModel@implementation@Taskbar@winrt@@MEAA?AUfire_and_forget@4@AEBUShellViewCoordinator@Shell@UI@WindowsUdk@4@AEBUIInspectable@Foundation@Windows@4@@Z
    virtual WindissectOpaque OnViewCoordinatorVisibilityChanged(WindissectOpaque const &, WindissectOpaque const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AEPFreshnessWatchdog@AugmentedEntryPointViewModel@implementation@Taskbar@winrt@@AEAAXAEBUAugmentedEntryPointAdaptiveCardData@34@@Z
    void AEPFreshnessWatchdog(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireContentStale@AugmentedEntryPointViewModel@implementation@Taskbar@winrt@@AEAAXIAEBUhstring@4@@Z
    void FireContentStale(unsigned int, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHoverContext@AugmentedEntryPointViewModel@implementation@Taskbar@winrt@@AEBA?AUhstring@4@W4ExperienceToggleButtonFocusContext@34@@Z
    WindissectOpaque GetHoverContext(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFreshnessTimerTick@AugmentedEntryPointViewModel@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void OnFreshnessTimerTick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCollapsibilityForTaskbarLocationAndGroupingMode@AugmentedEntryPointViewModel@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateCollapsibilityForTaskbarLocationAndGroupingMode();
};
} // namespace winrt::Taskbar::implementation

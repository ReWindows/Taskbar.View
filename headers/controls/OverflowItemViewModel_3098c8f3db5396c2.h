#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 12 member(s).
namespace winrt::Taskbar::implementation {
class OverflowItemViewModel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayName@OverflowItemViewModel@implementation@Taskbar@winrt@@QEBA?AUhstring@4@XZ
    WindissectOpaque DisplayName() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconHeight@OverflowItemViewModel@implementation@Taskbar@winrt@@QEAAXN@Z
    void IconHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IgnoreClickForLightDismiss@OverflowItemViewModel@implementation@Taskbar@winrt@@QEAAXXZ
    void IgnoreClickForLightDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClick@OverflowItemViewModel@implementation@Taskbar@winrt@@QEAAXXZ
    void OnClick();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OverflowItemViewModel@implementation@Taskbar@winrt@@QEAA@AEBU?$com_ptr@UOverflowFlyoutModel@implementation@Taskbar@winrt@@@3@_N@Z
    OverflowItemViewModel(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rank@OverflowItemViewModel@implementation@Taskbar@winrt@@QEAAXN@Z
    void Rank(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowLeftDivider@OverflowItemViewModel@implementation@Taskbar@winrt@@QEAAX_N@Z
    void ShouldShowLeftDivider(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskbarLocation@OverflowItemViewModel@implementation@Taskbar@winrt@@QEAAXW40Shell@UI@WindowsUdk@4@@Z
    void TaskbarLocation(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OverflowItemViewModel@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~OverflowItemViewModel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsFlyoutVisibleChanged@OverflowItemViewModel@implementation@Taskbar@winrt@@AEAAXXZ
    void OnIsFlyoutVisibleChanged();
};
} // namespace winrt::Taskbar::implementation

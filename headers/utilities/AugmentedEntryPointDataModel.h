#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 7 member(s).
namespace winrt::Taskbar::implementation {
class AugmentedEntryPointDataModel {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AugmentedEntryPointDataModel@implementation@Taskbar@winrt@@QEAA@AEBUTaskbarModel@Shell@UI@WindowsUdk@3@@Z
    AugmentedEntryPointDataModel(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AugmentedEntryPointDataModel@implementation@Taskbar@winrt@@QEAAX_N@Z
    void Initialize(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AugmentedEntryPointDataModel@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~AugmentedEntryPointDataModel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowRequested@AugmentedEntryPointDataModel@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@UShellViewCoordinator@Shell@UI@WindowsUdk@4@UShowShellViewRequestedEventArgs@7894@@Z
    WindissectOpaque OnShowRequested(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAugmentedEntryPointData@AugmentedEntryPointDataModel@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@Uhstring@4@@Z
    WindissectOpaque UpdateAugmentedEntryPointData(WindissectOpaque);
};
} // namespace winrt::Taskbar::implementation

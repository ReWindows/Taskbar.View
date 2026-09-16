#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 7 member(s).
namespace winrt::Taskbar::implementation::SearchItemViewModel {
class DynamicContent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Available@DynamicContent@SearchItemViewModel@implementation@Taskbar@winrt@@QEBA_NXZ
    bool Available() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DynamicContent@SearchItemViewModel@implementation@Taskbar@winrt@@QEAA@AEBU01234@@Z
    DynamicContent(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DynamicContent@SearchItemViewModel@implementation@Taskbar@winrt@@QEAA@$$QEAU01234@@Z
    DynamicContent(WindissectOpaque &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DynamicContent@SearchItemViewModel@implementation@Taskbar@winrt@@QEAA@XZ
    ~DynamicContent();
};
} // namespace winrt::Taskbar::implementation::SearchItemViewModel

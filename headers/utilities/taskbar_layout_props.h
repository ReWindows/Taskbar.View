#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 4 member(s).
namespace winrt::Taskbar::implementation {
class taskbar_layout_props {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0taskbar_layout_props@implementation@Taskbar@winrt@@QEAA@XZ
    taskbar_layout_props();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1taskbar_layout_props@implementation@Taskbar@winrt@@QEAA@XZ
    ~taskbar_layout_props();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?validate@taskbar_layout_props@implementation@Taskbar@winrt@@MEAA?AUvalidate_result@fc@@XZ
    virtual ::fc::validate_result validate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?validate_layout@taskbar_layout_props@implementation@Taskbar@winrt@@IEAA?AUvalidate_result@fc@@AEAV?$config_object@Vtaskbar_alignment_props@implementation@Taskbar@winrt@@@6@V?$tip_test@V?$merged_data@U_tip_TaskbarFeatureTuningUpdateTest@TaskbarTipTest@@U12@@details@tip2@@@tip2@@W4TaskbarAlignment@Shell@UI@WindowsUdk@4@@Z
    ::fc::validate_result validate_layout(WindissectOpaque &, WindissectOpaque, int);
};
} // namespace winrt::Taskbar::implementation

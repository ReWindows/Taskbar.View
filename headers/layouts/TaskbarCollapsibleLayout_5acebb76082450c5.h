#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 4 member(s).
namespace winrt::Taskbar::implementation {
class TaskbarCollapsibleLayout {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWeak@TaskbarCollapsibleLayout@implementation@Taskbar@winrt@@UEAA?AU?$weak_ref@UIInspectable@Foundation@Windows@winrt@@@4@XZ
    virtual WindissectOpaque GetWeak();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateArrange@TaskbarCollapsibleLayout@implementation@Taskbar@winrt@@UEAAXXZ
    virtual void InvalidateArrange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateMeasure@TaskbarCollapsibleLayout@implementation@Taskbar@winrt@@UEAAXXZ
    virtual void InvalidateMeasure();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarCollapsibleLayout@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~TaskbarCollapsibleLayout();
};
} // namespace winrt::Taskbar::implementation

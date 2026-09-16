#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 5 member(s).
namespace winrt::Taskbar::implementation {
class TaskbarCollapsibleItemsCollectionChangeEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Make@TaskbarCollapsibleItemsCollectionChangeEventArgs@implementation@Taskbar@winrt@@SA?AUNotifyCollectionChangedEventArgs@Interop@Xaml@UI@Windows@4@W4NotifyCollectionChangedAction@67894@UIBindableVector@67894@1HH@Z
    static WindissectOpaque Make(int, WindissectOpaque, WindissectOpaque, int, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskbarCollapsibleItemsCollectionChangeEventArgs@implementation@Taskbar@winrt@@QEAA@W4NotifyCollectionChangedAction@Interop@Xaml@UI@Windows@3@UIBindableVector@56783@1HH@Z
    TaskbarCollapsibleItemsCollectionChangeEventArgs(int, WindissectOpaque, WindissectOpaque, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarCollapsibleItemsCollectionChangeEventArgs@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~TaskbarCollapsibleItemsCollectionChangeEventArgs();
};
} // namespace winrt::Taskbar::implementation

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 7 member(s).
namespace winrt::Taskbar::implementation {
class ExternalTaskListDragDropController {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEntered@ExternalTaskListDragDropController@implementation@Taskbar@winrt@@QEAAX_KAEBUDragEventArgs@Xaml@UI@Windows@4@AEBU?$com_ptr@UTaskbarCollapsibleLayout@implementation@Taskbar@winrt@@@4@UPoint@Foundation@84@U?$com_ptr@UTaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@@4@W4UserInteractionMode@ViewManagement@784@_N@Z
    void DragEntered(uint64_t, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque, WindissectOpaque, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@ExternalTaskListDragDropController@implementation@Taskbar@winrt@@QEAAXUPoint@Foundation@Windows@4@@Z
    void DragOver(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ExternalTaskListDragDropController@implementation@Taskbar@winrt@@QEAA@XZ
    ExternalTaskListDragDropController();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExternalTaskListDragDropController@implementation@Taskbar@winrt@@QEAA@XZ
    ~ExternalTaskListDragDropController();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDragging@ExternalTaskListDragDropController@implementation@Taskbar@winrt@@AEAAX_N_K@Z
    void IsDragging(bool, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetAppIdFromDragEventArgs@ExternalTaskListDragDropController@implementation@Taskbar@winrt@@AEAA?AUhstring@4@AEBUDragEventArgs@Xaml@UI@Windows@4@@Z
    WindissectOpaque TryGetAppIdFromDragEventArgs(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowsDragEventWithAppIdUriHandler@ExternalTaskListDragDropController@implementation@Taskbar@winrt@@AEAAXAEBUDragEventArgs@Xaml@UI@Windows@4@AEBUTaskbarAppsList@Shell@7WindowsUdk@4@@Z
    void WindowsDragEventWithAppIdUriHandler(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::Taskbar::implementation

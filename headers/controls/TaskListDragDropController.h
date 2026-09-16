#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 10 member(s).
namespace winrt::Taskbar::implementation {
class TaskListDragDropController {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateGroupBounds@TaskListDragDropController@implementation@Taskbar@winrt@@QEAA?AURect@Foundation@Windows@4@I@Z
    WindissectOpaque CalculateGroupBounds(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteDrag@TaskListDragDropController@implementation@Taskbar@winrt@@QEAAXXZ
    void CompleteDrag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteExternalDrag@TaskListDragDropController@implementation@Taskbar@winrt@@QEAAXXZ
    void CompleteExternalDrag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragVisualLayoutBounds@TaskListDragDropController@implementation@Taskbar@winrt@@QEAA?AURect@Foundation@Windows@4@XZ
    WindissectOpaque DragVisualLayoutBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DropPlaceholder@TaskListDragDropController@implementation@Taskbar@winrt@@QEBAAEBU0234@XZ
    WindissectOpaque const & DropPlaceholder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMove@TaskListDragDropController@implementation@Taskbar@winrt@@QEAAXUPoint@Foundation@Windows@4@@Z
    void OnPointerMove(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartExternalDrag@TaskListDragDropController@implementation@Taskbar@winrt@@QEAAXAEBU?$com_ptr@UTaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@@4@AEBU?$com_ptr@UTaskbarCollapsibleLayout@implementation@Taskbar@winrt@@@4@URect@Foundation@Windows@4@UPoint@894@I_N@Z
    void StartExternalDrag(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque, WindissectOpaque, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInternalDrag@TaskListDragDropController@implementation@Taskbar@winrt@@QEAAXAEBU?$com_ptr@UTaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@@4@AEBU?$com_ptr@UTaskbarCollapsibleLayout@implementation@Taskbar@winrt@@@4@URect@Foundation@Windows@4@UPoint@894@I_N@Z
    void StartInternalDrag(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque, WindissectOpaque, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryKeyboardRearrange@TaskListDragDropController@implementation@Taskbar@winrt@@QEBA_NAEBU?$com_ptr@UTaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@@4@IW4RearrangeDirection@234@@Z
    bool TryKeyboardRearrange(WindissectOpaque const &, unsigned int, int) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskListDragDropController@implementation@Taskbar@winrt@@QEAA@XZ
    ~TaskListDragDropController();
};
} // namespace winrt::Taskbar::implementation

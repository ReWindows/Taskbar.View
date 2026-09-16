#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 16 member(s).
namespace winrt::Taskbar::implementation {
class TaskItemThumbnailScrollableList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplateImpl@TaskItemThumbnailScrollableList@implementation@Taskbar@winrt@@UEAAXXZ
    virtual void OnApplyTemplateImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackwardButtonClick@TaskItemThumbnailScrollableList@implementation@Taskbar@winrt@@QEAAXXZ
    void OnBackwardButtonClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnForwardButtonClick@TaskItemThumbnailScrollableList@implementation@Taskbar@winrt@@QEAAXXZ
    void OnForwardButtonClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreviewKeyDownImpl@TaskItemThumbnailScrollableList@implementation@Taskbar@winrt@@UEAAXAEBUKeyRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnPreviewKeyDownImpl(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScroll@TaskItemThumbnailScrollableList@implementation@Taskbar@winrt@@QEAAXH@Z
    void OnScroll(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollButtonPointerEntered@TaskItemThumbnailScrollableList@implementation@Taskbar@winrt@@QEAAXURepeatButton@Primitives@Controls@Xaml@UI@Windows@4@@Z
    void OnScrollButtonPointerEntered(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollButtonPointerExited@TaskItemThumbnailScrollableList@implementation@Taskbar@winrt@@QEAAXURepeatButton@Primitives@Controls@Xaml@UI@Windows@4@@Z
    void OnScrollButtonPointerExited(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskItemThumbnailScrollableList@implementation@Taskbar@winrt@@QEAA@XZ
    TaskItemThumbnailScrollableList();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskItemThumbnailScrollableList@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~TaskItemThumbnailScrollableList();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelScrollTimer@TaskItemThumbnailScrollableList@implementation@Taskbar@winrt@@AEAAXXZ
    void CancelScrollTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollEffectiveViewportChanged@TaskItemThumbnailScrollableList@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUEffectiveViewportChangedEventArgs@Xaml@UI@74@@Z
    void OnScrollEffectiveViewportChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewChanged@TaskItemThumbnailScrollableList@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUScrollViewerViewChangedEventArgs@Controls@Xaml@UI@74@@Z
    void OnScrollViewChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartScrollTimer@TaskItemThumbnailScrollableList@implementation@Taskbar@winrt@@AEAAXXZ
    void StartScrollTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStates@TaskItemThumbnailScrollableList@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateVisualStates();
};
} // namespace winrt::Taskbar::implementation

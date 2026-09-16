#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 19 member(s).
namespace winrt::Taskbar::implementation {
class TaskItemThumbnailList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginMorphAnimation@TaskItemThumbnailList@implementation@Taskbar@winrt@@QEAAXAEBUIInspectable@Foundation@Windows@4@@Z
    void BeginMorphAnimation(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CycleKeyboardFocus@TaskItemThumbnailList@implementation@Taskbar@winrt@@QEAAX_N@Z
    void CycleKeyboardFocus(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemsSource@TaskItemThumbnailList@implementation@Taskbar@winrt@@QEAAXAEBUIInspectable@Foundation@Windows@4@@Z
    void ItemsSource(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplateImpl@TaskItemThumbnailList@implementation@Taskbar@winrt@@UEAAXXZ
    virtual void OnApplyTemplateImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@TaskItemThumbnailList@implementation@Taskbar@winrt@@QEAAXAEBUKeyRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnKeyDown(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreviewKeyDownImpl@TaskItemThumbnailList@implementation@Taskbar@winrt@@UEAAXAEBUKeyRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnPreviewKeyDownImpl(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRendering@TaskItemThumbnailList@implementation@Taskbar@winrt@@QEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void OnRendering(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshPositionData@TaskItemThumbnailList@implementation@Taskbar@winrt@@QEAAXXZ
    void RefreshPositionData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportKeyboardCloseForIndex@TaskItemThumbnailList@implementation@Taskbar@winrt@@QEAAXI@Z
    void ReportKeyboardCloseForIndex(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyboardFocusOnFirstItem@TaskItemThumbnailList@implementation@Taskbar@winrt@@QEAAXXZ
    void SetKeyboardFocusOnFirstItem();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgrammaticFocusOnFirstItem@TaskItemThumbnailList@implementation@Taskbar@winrt@@QEAAXXZ
    void SetProgrammaticFocusOnFirstItem();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskItemThumbnailList@implementation@Taskbar@winrt@@QEAA@XZ
    TaskItemThumbnailList();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskItemThumbnailList@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~TaskItemThumbnailList();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeFocusedThumbnail@TaskItemThumbnailList@implementation@Taskbar@winrt@@IEAAXXZ
    void InvokeFocusedThumbnail();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementClearing@TaskItemThumbnailList@implementation@Taskbar@winrt@@IEAAXAEBUItemsRepeater@Controls@Xaml@UI@Microsoft@4@AEBUItemsRepeaterElementClearingEventArgs@67894@@Z
    void OnElementClearing(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementPrepared@TaskItemThumbnailList@implementation@Taskbar@winrt@@IEAAXAEBUItemsRepeater@Controls@Xaml@UI@Microsoft@4@AEBUItemsRepeaterElementPreparedEventArgs@67894@@Z
    void OnElementPrepared(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRepeaterMeasured@TaskItemThumbnailList@implementation@Taskbar@winrt@@IEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void OnRepeaterMeasured(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::Taskbar::implementation

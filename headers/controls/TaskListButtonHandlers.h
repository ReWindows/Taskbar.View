#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 9 member(s).
namespace winrt::Taskbar::implementation {
class TaskListButtonHandlers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleClick@TaskListButtonHandlers@implementation@Taskbar@winrt@@SAXAEBUTaskListButton@34@AEBUIInspectable@Foundation@Windows@4@@Z
    static void HandleClick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleContextRequested@TaskListButtonHandlers@implementation@Taskbar@winrt@@SAXAEBUUIElement@Xaml@UI@Windows@4@AEBUContextRequestedEventArgs@Input@6784@@Z
    static void HandleContextRequested(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleCycleWindows@TaskListButtonHandlers@implementation@Taskbar@winrt@@SAXAEBUTaskListButton@34@AEBUIInspectable@Foundation@Windows@4@@Z
    static void HandleCycleWindows(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleGettingFocus@TaskListButtonHandlers@implementation@Taskbar@winrt@@SAXAEBUIInspectable@Foundation@Windows@4@AEBUGettingFocusEventArgs@Input@Xaml@UI@74@@Z
    static void HandleGettingFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleGotFocus@TaskListButtonHandlers@implementation@Taskbar@winrt@@SAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    static void HandleGotFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleRunningIndicatorLoaded@TaskListButtonHandlers@implementation@Taskbar@winrt@@SAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    static void HandleRunningIndicatorLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSwipe@TaskListButtonHandlers@implementation@Taskbar@winrt@@SAXAEBUTaskListButton@34@AEBUSwipeEventArgs@34@@Z
    static void HandleSwipe(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleVisualStateChanged@TaskListButtonHandlers@implementation@Taskbar@winrt@@SAXAEBUITaskbarButton@34@AEBUTaskbarButtonVisualStateChangedEventArgs@34@@Z
    static void HandleVisualStateChanged(WindissectOpaque const &, WindissectOpaque const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBounds@TaskListButtonHandlers@implementation@Taskbar@winrt@@CAXAEBUIInspectable@Foundation@Windows@4@@Z
    static void UpdateBounds(WindissectOpaque const &);
};
} // namespace winrt::Taskbar::implementation

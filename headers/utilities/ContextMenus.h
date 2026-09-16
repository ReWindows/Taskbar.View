#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 3 member(s).
namespace winrt::Taskbar::implementation {
class ContextMenus {
public:
    class MenuItemMnemonics;
    class MenuItemText;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseDisplayName@ContextMenus@implementation@Taskbar@winrt@@YA?AUMenuItemText@1234@AEBUhstring@4@@Z
    WindissectOpaque ParseDisplayName(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowStartButtonContextMenuAsync@ContextMenus@implementation@Taskbar@winrt@@YA?AUfire_and_forget@4@UFrameworkElement@Xaml@UI@Windows@4@UTaskbarModel@Shell@8WindowsUdk@4@UTaskbarFrame@34@U?$com_ptr@UViewCoordinator@implementation@Taskbar@winrt@@@4@@Z
    WindissectOpaque ShowStartButtonContextMenuAsync(WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowTaskbarSettingsContextMenu@ContextMenus@implementation@Taskbar@winrt@@YAXAEBUFrameworkElement@Xaml@UI@Windows@4@AEBUTaskbarSettings@Shell@7WindowsUdk@4@AEBUContextRequestedEventArgs@Input@6784@_K@Z
    void ShowTaskbarSettingsContextMenu(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, uint64_t);
};
} // namespace winrt::Taskbar::implementation

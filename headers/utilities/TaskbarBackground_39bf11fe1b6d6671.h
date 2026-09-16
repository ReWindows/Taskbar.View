#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 16 member(s).
namespace winrt::Taskbar::implementation {
class TaskbarBackground {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccentAcrylicThemeBrush@TaskbarBackground@implementation@Taskbar@winrt@@QEBA?AUAcrylicBrush@Media@Xaml@UI@Windows@4@XZ
    WindissectOpaque AccentAcrylicThemeBrush() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccentAcrylicThemeBrushProperty@TaskbarBackground@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque AccentAcrylicThemeBrushProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcrylicThemeBrush@TaskbarBackground@implementation@Taskbar@winrt@@QEBA?AUAcrylicBrush@Media@Xaml@UI@Windows@4@XZ
    WindissectOpaque AcrylicThemeBrush() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcrylicThemeBrushProperty@TaskbarBackground@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque AcrylicThemeBrushProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandProgress@TaskbarBackground@implementation@Taskbar@winrt@@QEAAXAEBUCompositionPropertySet@Composition@UI@Windows@4@@Z
    void ExpandProgress(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Location@TaskbarBackground@implementation@Taskbar@winrt@@QEAAXW4TaskbarLocation@Shell@UI@WindowsUdk@4@@Z
    void Location(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@TaskbarBackground@implementation@Taskbar@winrt@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskbarBackground@implementation@Taskbar@winrt@@QEAA@XZ
    TaskbarBackground();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskbarTheme@TaskbarBackground@implementation@Taskbar@winrt@@QEAAXW40Shell@UI@WindowsUdk@4@@Z
    void TaskbarTheme(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarBackground@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~TaskbarBackground();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@TaskbarBackground@implementation@Taskbar@winrt@@CAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeExpandAnimation@TaskbarBackground@implementation@Taskbar@winrt@@AEAAXXZ
    void InitializeExpandAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnColorValuesChanged@TaskbarBackground@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@UUISettings@ViewManagement@UI@Windows@4@AEBUIInspectable@Foundation@94@@Z
    WindissectOpaque OnColorValuesChanged(WindissectOpaque, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStates@TaskbarBackground@implementation@Taskbar@winrt@@AEAAXAEBUUISettings@ViewManagement@UI@Windows@4@@Z
    void UpdateVisualStates(WindissectOpaque const &);
};
} // namespace winrt::Taskbar::implementation

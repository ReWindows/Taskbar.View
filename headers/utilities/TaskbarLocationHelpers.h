#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 17 member(s).
class TaskbarLocationHelpers {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTaskbarTooltipOrientation@TaskbarLocationHelpers@@YAXAEBUToolTip@Controls@Xaml@UI@Windows@winrt@@W4TaskbarLocation@Shell@5WindowsUdk@7@@Z
    void ApplyTaskbarTooltipOrientation(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTaskbarTooltipOrientation@TaskbarLocationHelpers@@YAXAEBUToolTip@Controls@Xaml@UI@Windows@winrt@@W4TaskbarLocation@Shell@5WindowsUdk@7@_N2MN@Z
    void ApplyTaskbarTooltipOrientation(WindissectOpaque const &, int, bool, bool, float, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTaskbarTooltipPlacement@TaskbarLocationHelpers@@YAXAEBUToolTip@Controls@Xaml@UI@Windows@winrt@@W4TaskbarLocation@Shell@5WindowsUdk@7@USize@Foundation@67@2@Z
    void ApplyTaskbarTooltipPlacement(WindissectOpaque const &, int, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTaskbarTooltipPlacement@TaskbarLocationHelpers@@YAXAEBUToolTip@Controls@Xaml@UI@Windows@winrt@@W4TaskbarLocation@Shell@5WindowsUdk@7@USize@Foundation@67@2_N3@Z
    void ApplyTaskbarTooltipPlacement(WindissectOpaque const &, int, WindissectOpaque, WindissectOpaque, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtentEnd@TaskbarLocationHelpers@@YAMURect@Foundation@Windows@winrt@@_N@Z
    float ExtentEnd(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtentMidpoint@TaskbarLocationHelpers@@YAMURect@Foundation@Windows@winrt@@_N@Z
    float ExtentMidpoint(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtentPosition@TaskbarLocationHelpers@@YAMUPoint@Foundation@Windows@winrt@@_N@Z
    float ExtentPosition(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtentSize@TaskbarLocationHelpers@@YAMURect@Foundation@Windows@winrt@@_N@Z
    float ExtentSize(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtentStart@TaskbarLocationHelpers@@YAMURect@Foundation@Windows@winrt@@_N@Z
    float ExtentStart(WindissectOpaque, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDepthOutwardUnitVector@TaskbarLocationHelpers@@YA?AUfloat3@Numerics@Foundation@Windows@winrt@@W4TaskbarLocation@Shell@UI@WindowsUdk@6@@Z
    WindissectOpaque GetDepthOutwardUnitVector(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTooltipPlacement@TaskbarLocationHelpers@@YA?AW4PlacementMode@Primitives@Controls@Xaml@UI@Windows@winrt@@W4TaskbarLocation@Shell@6WindowsUdk@8@@Z
    int GetTooltipPlacement(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTooltipPlacement@TaskbarLocationHelpers@@YA?AW4PlacementMode@Primitives@Controls@Xaml@UI@Windows@winrt@@W4TaskbarLocation@Shell@6WindowsUdk@8@_N@Z
    int GetTooltipPlacement(int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskbarHorizontal@TaskbarLocationHelpers@@YA_NW4TaskbarLocation@Shell@UI@WindowsUdk@winrt@@@Z
    bool IsTaskbarHorizontal(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskbarVertical@TaskbarLocationHelpers@@YA_NW4TaskbarLocation@Shell@UI@WindowsUdk@winrt@@@Z
    bool IsTaskbarVertical(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeTaskbarItemBounds@TaskbarLocationHelpers@@YA?AURect@Foundation@Windows@winrt@@_NMMM@Z
    WindissectOpaque MakeTaskbarItemBounds(bool, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeTaskbarItemBounds@TaskbarLocationHelpers@@YA?AURect@Foundation@Windows@winrt@@W4TaskbarLocation@Shell@UI@WindowsUdk@5@MMM@Z
    WindissectOpaque MakeTaskbarItemBounds(int, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReflectMarginIfVertical@TaskbarLocationHelpers@@YA?AUThickness@Xaml@UI@Windows@winrt@@W4TaskbarLocation@Shell@4WindowsUdk@6@U23456@@Z
    WindissectOpaque ReflectMarginIfVertical(int, WindissectOpaque);
};

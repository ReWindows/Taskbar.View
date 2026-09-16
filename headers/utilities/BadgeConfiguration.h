#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 3 member(s).
namespace winrt::Taskbar::implementation {
class BadgeConfiguration {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlyphData@BadgeConfiguration@implementation@Taskbar@winrt@@YA?AUGlyphData@1234@W4BadgeGlyphKind@StartScreen@UI@WindowsUdk@4@@Z
    WindissectOpaque GetGlyphData(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShapeBadge@BadgeConfiguration@implementation@Taskbar@winrt@@YA?B_NAEBUBadge@StartScreen@UI@WindowsUdk@4@@Z
    bool IsShapeBadge(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowBadge@BadgeConfiguration@implementation@Taskbar@winrt@@YA_NAEBUBadge@StartScreen@UI@WindowsUdk@4@@Z
    bool ShouldShowBadge(WindissectOpaque const &);
};
} // namespace winrt::Taskbar::implementation

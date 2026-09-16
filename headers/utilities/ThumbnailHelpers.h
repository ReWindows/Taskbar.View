#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 12 member(s).
namespace winrt::Taskbar::implementation {
class ThumbnailHelpers {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaledThumbnailSize@ThumbnailHelpers@implementation@Taskbar@winrt@@YA?AUSize@Foundation@Windows@4@U5674@M@Z
    WindissectOpaque GetScaledThumbnailSize(WindissectOpaque, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShareWindowButtonAccessibilityNameForProviderKind@ThumbnailHelpers@implementation@Taskbar@winrt@@YA?AUhstring@4@W4ShareWindowCommand@Shell@UI@WindowsUdk@4@W4ShareWindowCommandProviderKind@7894@@Z
    WindissectOpaque GetShareWindowButtonAccessibilityNameForProviderKind(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShareWindowButtonLabel@ThumbnailHelpers@implementation@Taskbar@winrt@@YA?AUhstring@4@W4ShareWindowCommand@Shell@UI@WindowsUdk@4@USize@Foundation@Windows@4@@Z
    WindissectOpaque GetShareWindowButtonLabel(int, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShareWindowButtonLabelForProviderKind@ThumbnailHelpers@implementation@Taskbar@winrt@@YA?AUhstring@4@W4ShareWindowCommand@Shell@UI@WindowsUdk@4@USize@Foundation@Windows@4@W4ShareWindowCommandProviderKind@7894@@Z
    WindissectOpaque GetShareWindowButtonLabelForProviderKind(int, WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShareWindowButtonTooltip@ThumbnailHelpers@implementation@Taskbar@winrt@@YA?AUhstring@4@W4ShareWindowCommand@Shell@UI@WindowsUdk@4@@Z
    WindissectOpaque GetShareWindowButtonTooltip(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShareWindowButtonTooltipForProviderKind@ThumbnailHelpers@implementation@Taskbar@winrt@@YA?AUhstring@4@W4ShareWindowCommand@Shell@UI@WindowsUdk@4@W4ShareWindowCommandProviderKind@7894@@Z
    WindissectOpaque GetShareWindowButtonTooltipForProviderKind(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskItemThumbnailHeight@ThumbnailHelpers@implementation@Taskbar@winrt@@YAMM_N0@Z
    float GetTaskItemThumbnailHeight(float, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskItemThumbnailWidth@ThumbnailHelpers@implementation@Taskbar@winrt@@YAMMM@Z
    float GetTaskItemThumbnailWidth(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextScaleFactor@ThumbnailHelpers@implementation@Taskbar@winrt@@YAMXZ
    float GetTextScaleFactor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbBarWidth@ThumbnailHelpers@implementation@Taskbar@winrt@@YAMI@Z
    float GetThumbBarWidth(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnailHeight@ThumbnailHelpers@implementation@Taskbar@winrt@@YAMUSize@Foundation@Windows@4@@Z
    float GetThumbnailHeight(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnailScaleFactor@ThumbnailHelpers@implementation@Taskbar@winrt@@YAMMMM@Z
    float GetThumbnailScaleFactor(float, float, float);
};
} // namespace winrt::Taskbar::implementation

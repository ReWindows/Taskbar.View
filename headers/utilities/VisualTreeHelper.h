#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 3 member(s).
namespace winrt::Windows::UI::Xaml::Media {
class VisualTreeHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChild@VisualTreeHelper@Media@Xaml@UI@Windows@winrt@@SA@AEBUDependencyObject@3456@H@Z
    static GetChild(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenCount@VisualTreeHelper@Media@Xaml@UI@Windows@winrt@@SA@AEBUDependencyObject@3456@@Z
    static GetChildrenCount(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@VisualTreeHelper@Media@Xaml@UI@Windows@winrt@@SA@AEBUDependencyObject@3456@@Z
    static GetParent(WindissectOpaque const &);
};
} // namespace winrt::Windows::UI::Xaml::Media

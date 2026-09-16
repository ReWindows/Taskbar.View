#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 4 member(s).
namespace winrt::Windows::UI::Xaml::Controls {
class Canvas {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLeft@Canvas@Controls@Xaml@UI@Windows@winrt@@SA@AEBUUIElement@3456@N@Z
    static SetLeft(WindissectOpaque const &, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTop@Canvas@Controls@Xaml@UI@Windows@winrt@@SA@AEBUUIElement@3456@N@Z
    static SetTop(WindissectOpaque const &, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZIndexProperty@Canvas@Controls@Xaml@UI@Windows@winrt@@SA@XZ
    static ZIndexProperty();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Canvas@Controls@Xaml@UI@Windows@winrt@@QEAA@XZ
    ~Canvas();
};
} // namespace winrt::Windows::UI::Xaml::Controls

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 5 member(s).
namespace winrt::Windows::UI::Xaml {
class UIElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PointerPressedEvent@UIElement@Xaml@UI@Windows@winrt@@SA@XZ
    static PointerPressedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PointerReleasedEvent@UIElement@Xaml@UI@Windows@winrt@@SA@XZ
    static PointerReleasedEvent();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIElement@Xaml@UI@Windows@winrt@@QEAA@AEBU01234@@Z
    UIElement(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UIElement@Xaml@UI@Windows@winrt@@QEAA@XZ
    ~UIElement();
};
} // namespace winrt::Windows::UI::Xaml

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 3 member(s).
namespace winrt::Windows::UI::Xaml {
class Application {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Current@Application@Xaml@UI@Windows@winrt@@SA@XZ
    static Current();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadComponent@Application@Xaml@UI@Windows@winrt@@SA@AEBUIInspectable@Foundation@45@AEBUUri@745@AEBW4ComponentResourceLocation@Primitives@Controls@2345@@Z
    static LoadComponent(WindissectOpaque const &, WindissectOpaque const &, int const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Application@Xaml@UI@Windows@winrt@@QEAA@XZ
    ~Application();
};
} // namespace winrt::Windows::UI::Xaml

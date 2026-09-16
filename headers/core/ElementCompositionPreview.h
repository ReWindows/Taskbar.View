#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 4 member(s).
namespace winrt::Windows::UI::Xaml::Hosting {
class ElementCompositionPreview {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementVisual@ElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@SA@AEBUUIElement@3456@@Z
    static GetElementVisual(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElementChildVisual@ElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@SA@AEBUUIElement@3456@AEBUVisual@Composition@456@@Z
    static SetElementChildVisual(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImplicitShowAnimation@ElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@SA@AEBUUIElement@3456@AEBUICompositionAnimationBase@Composition@456@@Z
    static SetImplicitShowAnimation(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsTranslationEnabled@ElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@SA@AEBUUIElement@3456@_N@Z
    static SetIsTranslationEnabled(WindissectOpaque const &, bool);
};
} // namespace winrt::Windows::UI::Xaml::Hosting

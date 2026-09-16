#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 3 member(s).
namespace winrt::Taskbar::implementation {
class RecommendationsOnTaskbarPayloadWrapper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstance@RecommendationsOnTaskbarPayloadWrapper@implementation@Taskbar@winrt@@SAAEAU1234@XZ
    static WindissectOpaque & GetInstance();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRecommendationsOnTaskbarPayload@RecommendationsOnTaskbarPayloadWrapper@implementation@Taskbar@winrt@@SA?AURecommendationsOnTaskbarPayload@1234@XZ
    static WindissectOpaque GetRecommendationsOnTaskbarPayload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowXdr@RecommendationsOnTaskbarPayloadWrapper@implementation@Taskbar@winrt@@SA_NXZ
    static bool ShouldShowXdr();
};
} // namespace winrt::Taskbar::implementation

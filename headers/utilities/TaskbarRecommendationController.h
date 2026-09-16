#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 8 member(s).
namespace winrt::Taskbar::implementation {
class TaskbarRecommendationController {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BufferToStream@TaskbarRecommendationController@implementation@Taskbar@winrt@@QEAA?AUIRandomAccessStream@Streams@Storage@Windows@4@AEAUIBuffer@6784@@Z
    WindissectOpaque BufferToStream(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupIconAsync@TaskbarRecommendationController@implementation@Taskbar@winrt@@SA?AUfire_and_forget@4@Uhstring@4@@Z
    static WindissectOpaque CleanupIconAsync(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecommendationStateChanged@TaskbarRecommendationController@implementation@Taskbar@winrt@@QEAA?AUevent_token@4@AEBU?$delegate@$$V@4@@Z
    WindissectOpaque RecommendationStateChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshRecommendations@TaskbarRecommendationController@implementation@Taskbar@winrt@@QEAAXXZ
    void RefreshRecommendations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetRecommendations@TaskbarRecommendationController@implementation@Taskbar@winrt@@QEAAXXZ
    void ResetRecommendations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetRecommendationsAndDismissCache@TaskbarRecommendationController@implementation@Taskbar@winrt@@QEAAXXZ
    void ResetRecommendationsAndDismissCache();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarRecommendationController@implementation@Taskbar@winrt@@QEAA@XZ
    ~TaskbarRecommendationController();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskbarRecommendationController@implementation@Taskbar@winrt@@AEAA@XZ
    TaskbarRecommendationController();
};
} // namespace winrt::Taskbar::implementation

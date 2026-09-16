#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 10 member(s).
namespace winrt::Taskbar::implementation {
class HitTestHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineProximateHandwritingTarget@HitTestHandler@implementation@Taskbar@winrt@@UEAAJPEAUITfDetermineProximateHandwritingTargetArgs@@@Z
    virtual long DetermineProximateHandwritingTarget(ITfDetermineProximateHandwritingTargetArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusHandwritingTarget@HitTestHandler@implementation@Taskbar@winrt@@UEAAJPEAUITfFocusHandwritingTargetArgs@@@Z
    virtual long FocusHandwritingTarget(ITfFocusHandwritingTargetArgs *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HitTestHandler@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~HitTestHandler();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAndFindTopLevelWindow@HitTestHandler@implementation@Taskbar@winrt@@AEAAPEAUHWND__@@PEAU5@@Z
    HWND__* CheckAndFindTopLevelWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusHandwritingTargetInternal@HitTestHandler@implementation@Taskbar@winrt@@AEAAJPEAUITfFocusHandwritingTargetArgs@@@Z
    long FocusHandwritingTargetInternal(ITfFocusHandwritingTargetArgs *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundingBox@HitTestHandler@implementation@Taskbar@winrt@@AEAA?AUtagRECT@@UFrameworkElement@Xaml@UI@Windows@4@@Z
    tagRECT GetBoundingBox(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHandwritingDesired@HitTestHandler@implementation@Taskbar@winrt@@AEAA_NAEBUtagPOINT@@UtagSIZE@@@Z
    bool IsHandwritingDesired(tagPOINT const &, tagSIZE);
};
} // namespace winrt::Taskbar::implementation

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 6 member(s).
namespace winrt::AnimatedVisuals::implementation {
class CanvasGeometry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGeometry@CanvasGeometry@implementation@AnimatedVisuals@winrt@@UEAAJPEAPEAUID2D1Geometry@@@Z
    virtual long GetGeometry(ID2D1Geometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetGeometryUsingFactory@CanvasGeometry@implementation@AnimatedVisuals@winrt@@UEAAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z
    virtual long TryGetGeometryUsingFactory(ID2D1Factory *, ID2D1Geometry * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CanvasGeometry@implementation@AnimatedVisuals@winrt@@UEAA@XZ
    virtual ~CanvasGeometry();
};
} // namespace winrt::AnimatedVisuals::implementation

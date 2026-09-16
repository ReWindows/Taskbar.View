#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 8 member(s).
namespace winrt::Taskbar::implementation {
class MultiWindowClipPath {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGeometry@MultiWindowClipPath@implementation@Taskbar@winrt@@UEAAJPEAPEAUID2D1Geometry@@@Z
    virtual long GetGeometry(ID2D1Geometry * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqual@MultiWindowClipPath@implementation@Taskbar@winrt@@QEAA_NUSize@Foundation@Windows@4@@Z
    bool IsEqual(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MultiWindowClipPath@implementation@Taskbar@winrt@@QEAA@Ufloat2@Numerics@Foundation@Windows@3@MM@Z
    MultiWindowClipPath(WindissectOpaque, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetGeometryUsingFactory@MultiWindowClipPath@implementation@Taskbar@winrt@@UEAAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z
    virtual long TryGetGeometryUsingFactory(ID2D1Factory *, ID2D1Geometry * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MultiWindowClipPath@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~MultiWindowClipPath();
};
} // namespace winrt::Taskbar::implementation

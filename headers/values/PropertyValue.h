#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 5 member(s).
namespace winrt::Windows::Foundation {
class PropertyValue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDouble@PropertyValue@Foundation@Windows@winrt@@SA@N@Z
    static CreateDouble(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInt32@PropertyValue@Foundation@Windows@winrt@@SA@H@Z
    static CreateInt32(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateString@PropertyValue@Foundation@Windows@winrt@@SA@AEBUhstring@param@4@@Z
    static CreateString(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUInt32@PropertyValue@Foundation@Windows@winrt@@SA@I@Z
    static CreateUInt32(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUInt32Array@PropertyValue@Foundation@Windows@winrt@@SA@U?$array_view@$$CBI@4@@Z
    static CreateUInt32Array(WindissectOpaque);
};
} // namespace winrt::Windows::Foundation

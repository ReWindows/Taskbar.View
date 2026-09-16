#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 8 member(s).
namespace winrt::AnimatedVisuals::implementation {
class CompositeEffect {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSource@CompositeEffect@implementation@AnimatedVisuals@winrt@@QEAAXUIGraphicsEffectSource@Effects@Graphics@Windows@4@@Z
    void AddSource(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectId@CompositeEffect@implementation@AnimatedVisuals@winrt@@UEAAJPEAU_GUID@@@Z
    virtual long GetEffectId(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedPropertyMapping@CompositeEffect@implementation@AnimatedVisuals@winrt@@UEAAJPEB_WPEAIPEAW4GRAPHICS_EFFECT_PROPERTY_MAPPING@Effects@Graphics@Windows@ABI@@@Z
    virtual long GetNamedPropertyMapping(wchar_t const *, unsigned int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CompositeEffect@implementation@AnimatedVisuals@winrt@@UEAAJIPEAPEAUIPropertyValue@Foundation@Windows@ABI@@@Z
    virtual long GetProperty(unsigned int, ::ABI::Windows::Foundation::IPropertyValue * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyCount@CompositeEffect@implementation@AnimatedVisuals@winrt@@UEAAJPEAI@Z
    virtual long GetPropertyCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@CompositeEffect@implementation@AnimatedVisuals@winrt@@UEAAJIPEAPEAUIGraphicsEffectSource@Effects@Graphics@Windows@ABI@@@Z
    virtual long GetSource(unsigned int, ::ABI::Windows::Graphics::Effects::IGraphicsEffectSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceCount@CompositeEffect@implementation@AnimatedVisuals@winrt@@UEAAJPEAI@Z
    virtual long GetSourceCount(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositeEffect@implementation@AnimatedVisuals@winrt@@UEAA@XZ
    virtual ~CompositeEffect();
};
} // namespace winrt::AnimatedVisuals::implementation

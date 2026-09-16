#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 6 member(s).
namespace winrt::Taskbar::implementation {
class ShellHandwritingHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ShellHandwritingHelper@implementation@Taskbar@winrt@@QEAAXXZ
    void Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShellHandwritingHelper@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~ShellHandwritingHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterTsfSink@ShellHandwritingHelper@implementation@Taskbar@winrt@@AEAAXXZ
    void RegisterTsfSink();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterTsfSink@ShellHandwritingHelper@implementation@Taskbar@winrt@@AEAAXXZ
    void UnregisterTsfSink();
};
} // namespace winrt::Taskbar::implementation

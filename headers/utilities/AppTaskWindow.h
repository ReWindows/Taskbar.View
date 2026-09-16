#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 7 member(s).
class AppTaskWindow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateDeepLink@AppTaskWindow@@QEAAXXZ
    void ActivateDeepLink();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseRequested@AppTaskWindow@@QEAAXXZ
    void CloseRequested();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppTaskWindow@@QEAA@XZ
    ~AppTaskWindow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHiddenWindow@AppTaskWindow@@AEAAXXZ
    void CreateHiddenWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AppTaskWindow@@AEAA?AUfire_and_forget@winrt@@XZ
    WindissectOpaque Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadAppInfoIcon@AppTaskWindow@@AEAAXXZ
    void LoadAppInfoIcon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTaskbarListProgress@AppTaskWindow@@AEAAXXZ
    void UpdateTaskbarListProgress();
};

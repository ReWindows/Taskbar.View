#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 6 member(s).
class AppTaskController {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppTaskIcon@AppTaskController@@QEAA?AUIRandomAccessStream@Streams@Storage@Windows@winrt@@PEAUHWND__@@@Z
    WindissectOpaque GetAppTaskIcon(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AppTaskController@@QEAAXXZ
    void Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppTaskController@@QEAA@XZ
    ~AppTaskController();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWindowThread@AppTaskController@@AEAAXXZ
    void EnsureWindowThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateExistingTasks@AppTaskController@@AEAAXXZ
    void EnumerateExistingTasks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowThreadProc@AppTaskController@@AEAAXXZ
    void WindowThreadProc();
};

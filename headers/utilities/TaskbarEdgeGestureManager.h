#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 10 member(s).
namespace winrt::Taskbar::implementation {
class TaskbarEdgeGestureManager {
public:
    class PendingInputOperation;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Make@TaskbarEdgeGestureManager@implementation@Taskbar@winrt@@SA?AU?$com_ptr@UTaskbarEdgeGestureManager@implementation@Taskbar@winrt@@@4@AEBUInputGestureManager@Input@UI@WindowsUdk@4@AEBUUIElement@Xaml@8Windows@4@AEBUTaskbarModel@Shell@894@AEBU?$com_ptr@UTaskbarConfiguration@implementation@Taskbar@winrt@@@4@@Z
    static WindissectOpaque Make(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartGestureAsync@TaskbarEdgeGestureManager@implementation@Taskbar@winrt@@QEAA?AUfire_and_forget@4@I@Z
    WindissectOpaque StartGestureAsync(unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskbarEdgeGestureManager@implementation@Taskbar@winrt@@QEAA@AEBUInputGestureManager@Input@UI@WindowsUdk@3@AEBUUIElement@Xaml@6Windows@3@AEBUTaskbarModel@Shell@673@AEBU?$com_ptr@UTaskbarConfiguration@implementation@Taskbar@winrt@@@3@@Z
    TaskbarEdgeGestureManager(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarEdgeGestureManager@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~TaskbarEdgeGestureManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGesture@TaskbarEdgeGestureManager@implementation@Taskbar@winrt@@AEAAXAEBUGestureAnimationData@Input@UI@WindowsUdk@4@AEBUPoint@Foundation@Windows@4@UInputGestureOperation@6784@@Z
    void CreateGesture(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TaskbarEdgeGestureManager@implementation@Taskbar@winrt@@AEAAXXZ
    void Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOperationCreated@TaskbarEdgeGestureManager@implementation@Taskbar@winrt@@AEAAXAEBUInputGestureManager@Input@UI@WindowsUdk@4@AEBUInputGestureOperation@6784@@Z
    void OnOperationCreated(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOperationStarted@TaskbarEdgeGestureManager@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@UInputGestureOperation@Input@UI@WindowsUdk@4@UInputGestureOperationEventArgs@7894@@Z
    WindissectOpaque OnOperationStarted(WindissectOpaque, WindissectOpaque);
};
} // namespace winrt::Taskbar::implementation

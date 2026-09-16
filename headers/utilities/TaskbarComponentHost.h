#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 13 member(s).
namespace winrt::Microsoft::Windows::Taskbar::implementation {
class TaskbarComponentHost {
public:
    class DisableAnimationsCookie;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultButtonWidth@TaskbarComponentHost@implementation@Taskbar@Windows@Microsoft@winrt@@QEAANXZ
    double DefaultButtonWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconHeight@TaskbarComponentHost@implementation@Taskbar@Windows@Microsoft@winrt@@QEAAXN@Z
    void IconHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TaskbarComponentHost@implementation@Taskbar@Windows@Microsoft@winrt@@QEAAXXZ
    void Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrimaryTaskbar@TaskbarComponentHost@implementation@Taskbar@Windows@Microsoft@winrt@@QEAA_NXZ
    bool IsPrimaryTaskbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplicationThemeChanged@TaskbarComponentHost@implementation@Taskbar@Windows@Microsoft@winrt@@QEAAXXZ
    void OnApplicationThemeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInteractionModeChanged@TaskbarComponentHost@implementation@Taskbar@Windows@Microsoft@winrt@@QEAAXAEBUTaskbarModel@Shell@UI@WindowsUdk@6@AEBUIInspectable@Foundation@46@@Z
    void OnInteractionModeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskbarComponentHost@implementation@Taskbar@Windows@Microsoft@winrt@@QEAA@AEBU?$com_ptr@UTaskbarConfiguration@implementation@Taskbar@winrt@@@5@AEBUTaskbarModel@Shell@UI@WindowsUdk@5@AEBU?$com_ptr@UViewCoordinator@implementation@Taskbar@winrt@@@5@@Z
    TaskbarComponentHost(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskbarPosition@TaskbarComponentHost@implementation@Taskbar@Windows@Microsoft@winrt@@QEAA?AURect@Foundation@46@XZ
    WindissectOpaque TaskbarPosition();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarComponentHost@implementation@Taskbar@Windows@Microsoft@winrt@@UEAA@XZ
    virtual ~TaskbarComponentHost();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecrementDisableAnimationsCount@TaskbarComponentHost@implementation@Taskbar@Windows@Microsoft@winrt@@AEAAIXZ
    unsigned int DecrementDisableAnimationsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDefaultWidth@TaskbarComponentHost@implementation@Taskbar@Windows@Microsoft@winrt@@AEAAXXZ
    void UpdateDefaultWidth();
};
} // namespace winrt::Microsoft::Windows::Taskbar::implementation

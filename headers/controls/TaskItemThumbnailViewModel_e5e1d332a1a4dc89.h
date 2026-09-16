#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 17 member(s).
namespace winrt::Taskbar::implementation {
class TaskItemThumbnailViewModel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Icons@TaskItemThumbnailViewModel@implementation@Taskbar@winrt@@QEAA?AU?$IVector@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@4@XZ
    WindissectOpaque Icons();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRequestingAttention@TaskItemThumbnailViewModel@implementation@Taskbar@winrt@@QEAA_NXZ
    bool IsRequestingAttention();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Key@TaskItemThumbnailViewModel@implementation@Taskbar@winrt@@QEAA?AUhstring@4@XZ
    WindissectOpaque Key();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemThumbnailPropertyChanged@TaskItemThumbnailViewModel@implementation@Taskbar@winrt@@QEAAXAEBUTaskItemThumbnailPropertyChangedEventArgs@Shell@UI@WindowsUdk@4@@Z
    void OnItemThumbnailPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PointerOverTaskbarButton@TaskItemThumbnailViewModel@implementation@Taskbar@winrt@@QEAAX_N@Z
    void PointerOverTaskbarButton(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShareWindowViewModel@TaskItemThumbnailViewModel@implementation@Taskbar@winrt@@QEAA?AU034@XZ
    WindissectOpaque ShareWindowViewModel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShareWindowViewModels@TaskItemThumbnailViewModel@implementation@Taskbar@winrt@@QEAA?AU?$IVector@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@4@XZ
    WindissectOpaque ShareWindowViewModels();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskItemThumbnail@TaskItemThumbnailViewModel@implementation@Taskbar@winrt@@QEAA?AU0Shell@UI@WindowsUdk@4@XZ
    WindissectOpaque TaskItemThumbnail();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskItemThumbnailViewModel@implementation@Taskbar@winrt@@QEAA@UTaskbarModel@Shell@UI@WindowsUdk@3@UTaskItemThumbnail@5673@@Z
    TaskItemThumbnailViewModel(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThumbBarButtons@TaskItemThumbnailViewModel@implementation@Taskbar@winrt@@QEAA?AU?$IVector@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@4@XZ
    WindissectOpaque ThumbBarButtons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateThumbnailScaleFactor@TaskItemThumbnailViewModel@implementation@Taskbar@winrt@@QEAAXN@Z
    void UpdateThumbnailScaleFactor(double);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskItemThumbnailViewModel@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~TaskItemThumbnailViewModel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismissExtendedUIRequested@TaskItemThumbnailViewModel@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void OnDismissExtendedUIRequested(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShareWindowCommandProviderChanged@TaskItemThumbnailViewModel@implementation@Taskbar@winrt@@AEAAXUShareWindowCommandProvider@Shell@UI@WindowsUdk@4@UIInspectable@Foundation@Windows@4@@Z
    void OnShareWindowCommandProviderChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReloadThumbBarButtons@TaskItemThumbnailViewModel@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@XZ
    WindissectOpaque ReloadThumbBarButtons();
};
} // namespace winrt::Taskbar::implementation

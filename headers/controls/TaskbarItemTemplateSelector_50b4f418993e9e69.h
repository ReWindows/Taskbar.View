#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 10 member(s).
namespace winrt::Taskbar::implementation {
class TaskbarItemTemplateSelector {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SearchBoxLaunchListItemTemplate@TaskbarItemTemplateSelector@implementation@Taskbar@winrt@@QEAAXAEBUDataTemplate@Xaml@UI@Windows@4@@Z
    void SearchBoxLaunchListItemTemplate(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SearchBoxLaunchListItemTemplate@TaskbarItemTemplateSelector@implementation@Taskbar@winrt@@QEBA?AUDataTemplate@Xaml@UI@Windows@4@XZ
    WindissectOpaque SearchBoxLaunchListItemTemplate() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectTemplateCore@TaskbarItemTemplateSelector@implementation@Taskbar@winrt@@QEAA?AUDataTemplate@Xaml@UI@Windows@4@AEBUIInspectable@Foundation@84@@Z
    WindissectOpaque SelectTemplateCore(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskListLabeledItemTemplateWithDownloadIcon@TaskbarItemTemplateSelector@implementation@Taskbar@winrt@@QEBA?AUDataTemplate@Xaml@UI@Windows@4@XZ
    WindissectOpaque TaskListLabeledItemTemplateWithDownloadIcon() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskbarItemTemplateSelector@implementation@Taskbar@winrt@@QEAA@XZ
    TaskbarItemTemplateSelector();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOverflowFlyoutTemplatesForDynamicIconScaling@TaskbarItemTemplateSelector@implementation@Taskbar@winrt@@SA?AU134@U134@@Z
    static WindissectOpaque UpdateOverflowFlyoutTemplatesForDynamicIconScaling(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTaskbarFrameTemplatesForDynamicIconScaling@TaskbarItemTemplateSelector@implementation@Taskbar@winrt@@SA?AU134@U134@@Z
    static WindissectOpaque UpdateTaskbarFrameTemplatesForDynamicIconScaling(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarItemTemplateSelector@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~TaskbarItemTemplateSelector();
};
} // namespace winrt::Taskbar::implementation

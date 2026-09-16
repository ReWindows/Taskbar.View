#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 6 member(s).
namespace winrt::Taskbar::implementation {
class TaskItemHoverUITemplateSelector {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectTemplateCore@TaskItemHoverUITemplateSelector@implementation@Taskbar@winrt@@QEAA?AUDataTemplate@Xaml@UI@Windows@4@AEBUIInspectable@Foundation@84@@Z
    WindissectOpaque SelectTemplateCore(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskItemHoverUITemplateSelector@implementation@Taskbar@winrt@@QEAA@XZ
    TaskItemHoverUITemplateSelector();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskItemHoverUITemplateSelector@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~TaskItemHoverUITemplateSelector();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppTaskHoverCardTemplate@TaskItemHoverUITemplateSelector@implementation@Taskbar@winrt@@AEAA?AUDataTemplate@Xaml@UI@Windows@4@AEBUIInspectable@Foundation@84@@Z
    WindissectOpaque GetAppTaskHoverCardTemplate(WindissectOpaque const &);
};
} // namespace winrt::Taskbar::implementation

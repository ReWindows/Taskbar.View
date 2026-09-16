#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 17 member(s).
namespace winrt::Taskbar::implementation {
class SearchBoxLaunchListButton {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContentText@SearchBoxLaunchListButton@implementation@Taskbar@winrt@@QEAAXAEBUhstring@4@@Z
    void ContentText(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExperienceVisible@SearchBoxLaunchListButton@implementation@Taskbar@winrt@@UEAAX_N@Z
    virtual void IsExperienceVisible(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@SearchBoxLaunchListButton@implementation@Taskbar@winrt@@UEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnPointerPressed(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@SearchBoxLaunchListButton@implementation@Taskbar@winrt@@UEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnPointerReleased(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SearchBoxLaunchListButton@implementation@Taskbar@winrt@@QEAA@XZ
    SearchBoxLaunchListButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Theme@SearchBoxLaunchListButton@implementation@Taskbar@winrt@@UEAAXW4VisualTheme@Themes@UI@WindowsUdk@4@@Z
    virtual void Theme(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SearchBoxLaunchListButton@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~SearchBoxLaunchListButton();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTemplateApplied@SearchBoxLaunchListButton@implementation@Taskbar@winrt@@MEBA_NXZ
    virtual bool IsTemplateApplied() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplateImpl@SearchBoxLaunchListButton@implementation@Taskbar@winrt@@MEAAXXZ
    virtual void OnApplyTemplateImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonPadding@SearchBoxLaunchListButton@implementation@Taskbar@winrt@@MEAAXXZ
    virtual void UpdateButtonPadding();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStates@SearchBoxLaunchListButton@implementation@Taskbar@winrt@@MEAAXXZ
    virtual void UpdateVisualStates();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceDictionary@SearchBoxLaunchListButton@implementation@Taskbar@winrt@@AEAA?AUResourceDictionary@Xaml@UI@Windows@4@W4VisualTheme@Themes@7WindowsUdk@4@@Z
    WindissectOpaque GetResourceDictionary(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePillExpandedState@SearchBoxLaunchListButton@implementation@Taskbar@winrt@@AEBAXXZ
    void UpdatePillExpandedState() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSearchIconGlyph@SearchBoxLaunchListButton@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateSearchIconGlyph();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStyling@SearchBoxLaunchListButton@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateStyling();
};
} // namespace winrt::Taskbar::implementation

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 43 member(s).
namespace winrt::Taskbar::implementation {
class TaskbarConfiguration {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppsListRank@TaskbarConfiguration@implementation@Taskbar@winrt@@QEBANXZ
    double GetAppsListRank() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameSize@TaskbarConfiguration@implementation@Taskbar@winrt@@SANW4TaskbarSize@Shell@UI@WindowsUdk@4@@Z
    static double GetFrameSize(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconHeightInViewPixels@TaskbarConfiguration@implementation@Taskbar@winrt@@SANW4TaskbarSize@Shell@UI@WindowsUdk@4@@Z
    static double GetIconHeightInViewPixels(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconHeightInViewPixels@TaskbarConfiguration@implementation@Taskbar@winrt@@SANN@Z
    static double GetIconHeightInViewPixels(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconHeightInViewPixels@TaskbarConfiguration@implementation@Taskbar@winrt@@QEAANXZ
    double GetIconHeightInViewPixels();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRank@TaskbarConfiguration@implementation@Taskbar@winrt@@QEBANW4ShellView@Shell@UI@WindowsUdk@4@@Z
    double GetRank(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconConfigurationChanged@TaskbarConfiguration@implementation@Taskbar@winrt@@QEAAXAEBU?$delegate@$$V@4@@Z
    void IconConfigurationChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconSizePreferenceChanged@TaskbarConfiguration@implementation@Taskbar@winrt@@QEAA?AUevent_token@4@AEBU?$delegate@$$V@4@@Z
    WindissectOpaque IconSizePreferenceChanged(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskbarComponentEnabled@TaskbarConfiguration@implementation@Taskbar@winrt@@QEBA_NAEBUextension_props@234@@Z
    bool IsTaskbarComponentEnabled(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NumTaskbarComponentsEnabled@TaskbarConfiguration@implementation@Taskbar@winrt@@QEBAIXZ
    unsigned int NumTaskbarComponentsEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDynamicIconSize@TaskbarConfiguration@implementation@Taskbar@winrt@@QEAA_NN@Z
    bool SetDynamicIconSize(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Settings@TaskbarConfiguration@implementation@Taskbar@winrt@@QEAA?AUTaskbarSettings@Shell@UI@WindowsUdk@4@XZ
    WindissectOpaque Settings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowFlashingChanged@TaskbarConfiguration@implementation@Taskbar@winrt@@QEAAXAEBU?$delegate@$$V@4@@Z
    void ShowFlashingChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowRecommendations@TaskbarConfiguration@implementation@Taskbar@winrt@@QEAA_NXZ
    bool ShowRecommendations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowRecommendationsChanged@TaskbarConfiguration@implementation@Taskbar@winrt@@QEAA?AUevent_token@4@AEBU?$delegate@$$V@4@@Z
    WindissectOpaque ShowRecommendationsChanged(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskbarConfiguration@implementation@Taskbar@winrt@@QEAA@AEBUTaskbarSettings@Shell@UI@WindowsUdk@3@_N@Z
    TaskbarConfiguration(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskbarLocationChanged@TaskbarConfiguration@implementation@Taskbar@winrt@@QEAAXAEBU?$delegate@$$V@4@@Z
    void TaskbarLocationChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateApplicationTheme@TaskbarConfiguration@implementation@Taskbar@winrt@@QEAAXW4ElementTheme@Xaml@UI@Windows@4@@Z
    void UpdateApplicationTheme(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTaskbarInteractionMode@TaskbarConfiguration@implementation@Taskbar@winrt@@QEAAXW4UserInteractionMode@ViewManagement@UI@Windows@4@@Z
    void UpdateTaskbarInteractionMode(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarConfiguration@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~TaskbarConfiguration();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskbarBackgroundColor@TaskbarConfiguration@implementation@Taskbar@winrt@@AEBA?AUColor@UI@Windows@4@XZ
    WindissectOpaque GetTaskbarBackgroundColor() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnColorValuesChanged@TaskbarConfiguration@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@AEBUUISettings@ViewManagement@UI@Windows@4@AEBUIInspectable@Foundation@94@@Z
    WindissectOpaque OnColorValuesChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHighContrastChanged@TaskbarConfiguration@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@AEBUAccessibilitySettings@ViewManagement@UI@Windows@4@AEBUIInspectable@Foundation@94@@Z
    WindissectOpaque OnHighContrastChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskbarSettingsChanged@TaskbarConfiguration@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@AEBUTaskbarSettings@Shell@UI@WindowsUdk@4@AEBUIInspectable@Foundation@Windows@4@@Z
    WindissectOpaque OnTaskbarSettingsChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldTaskbarComponentSettingBeEnabled@TaskbarConfiguration@implementation@Taskbar@winrt@@AEAA_NAEBUextension_props@234@@Z
    bool ShouldTaskbarComponentSettingBeEnabled(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAlignment@TaskbarConfiguration@implementation@Taskbar@winrt@@AEAA_NXZ
    bool UpdateAlignment();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAppsListRank@TaskbarConfiguration@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateAppsListRank();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCachedSettingValues@TaskbarConfiguration@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateCachedSettingValues();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFrameSize@TaskbarConfiguration@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateFrameSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGroupingMode@TaskbarConfiguration@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateGroupingMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIconConfiguration@TaskbarConfiguration@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateIconConfiguration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIconSizePreference@TaskbarConfiguration@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateIconSizePreference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShowBadges@TaskbarConfiguration@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateShowBadges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShowContextMenus@TaskbarConfiguration@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateShowContextMenus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShowFlashing@TaskbarConfiguration@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateShowFlashing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShowLabelsOnNonRunningGroups@TaskbarConfiguration@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateShowLabelsOnNonRunningGroups();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShowRecommendations@TaskbarConfiguration@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateShowRecommendations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShowSearchOnHover@TaskbarConfiguration@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateShowSearchOnHover();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShowXdr@TaskbarConfiguration@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateShowXdr();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTaskbarLocation@TaskbarConfiguration@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateTaskbarLocation();
};
} // namespace winrt::Taskbar::implementation

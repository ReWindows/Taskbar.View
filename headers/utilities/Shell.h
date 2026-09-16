#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 3 member(s).
namespace winrt::WindowsUdk::UI {
class Shell {
public:
    class Dashboard;
    class DismissShellViewOptions;
    class DismissShellViewRequestedEventArgs;
    class EffectiveSearchAppearance;
    class IDismissShellViewOptions;
    class IDismissShellViewOptions2;
    class IDismissShellViewRequestedEventArgs;
    class IEffectiveSearchAppearance;
    class IExtendedUICyclingRequestedEventArgs2;
    class IGleamHoverAction;
    class IGleamInvokeAction;
    class IInstallProgress;
    class ILaunchUriGleamInvokeAction;
    class ISearchAppearance;
    class ISearchAppearanceExtensionStatics;
    class ISearchBoxPlaceholder;
    class ISearchBoxPlaceholderStatics;
    class ISearchGleamAppearance;
    class IShareWindowCommandProvider;
    class IShareWindowCommandProvider2;
    class IShareWindowCommandProvider3;
    class IShellViewAnimationProperties;
    class IShellViewAnimationPropertiesFactory;
    class IShellViewCoordinator;
    class IShellViewCoordinator2;
    class IShellViewCoordinator3;
    class IShellViewCoordinatorFactory;
    class IShellViewGestureAnimationPropertySet;
    class IShellViewGestureAnimationPropertySetStatics;
    class IShellViewGestureReportedArgs;
    class IShellViewGestureReportedArgsFactory;
    class IShowShellViewOptions;
    class IShowShellViewOptions2;
    class IShowShellViewRequestedEventArgs;
    class ITaskGroup;
    class ITaskGroup2;
    class ITaskGroup3;
    class ITaskGroup4;
    class ITaskGroup5;
    class ITaskItem;
    class ITaskItem2;
    class ITaskItem3;
    class ITaskItem4;
    class ITaskItemProgress;
    class ITaskItemThumbnail;
    class ITaskItemThumbnail2;
    class ITaskItemThumbnail3;
    class ITaskItemThumbnailVisual;
    class ITaskbarAppsList;
    class ITaskbarAppsList2;
    class ITaskbarAppsList3;
    class ITaskbarAppsList4;
    class ITaskbarAppsList5;
    class ITaskbarControllerExtension;
    class ITaskbarFlyout;
    class ITaskbarFlyout2;
    class ITaskbarIconConfiguration;
    class ITaskbarModel;
    class ITaskbarModel2;
    class ITaskbarModel3;
    class ITaskbarModel7;
    class ITaskbarModel8;
    class ITaskbarModelStatics;
    class ITaskbarNotificationAreaLayout;
    class ITaskbarPinnableObject;
    class ITaskbarSearchBoxAppearance;
    class ITaskbarSearchBoxInputAppearance;
    class ITaskbarSettings;
    class ITaskbarSettings10;
    class ITaskbarSettings11;
    class ITaskbarSettings13;
    class ITaskbarSettings14;
    class ITaskbarSettings3;
    class ITaskbarSettings5;
    class ITaskbarSettings6;
    class ITaskbarSettings7;
    class ITaskbarSettings9;
    class IThumbBarButton;
    class IThumbBarButton2;
    class InstallProgress;
    class LaunchUriGleamInvokeAction;
    class SearchAppearance;
    class SearchBoxPlaceholder;
    class SearchGleamAppearance;
    class ShareWindowCommandProvider;
    class ShellViewAnimationProperties;
    class ShellViewCoordinator;
    class ShellViewGestureAnimationPropertySet;
    class ShellViewGestureReportedArgs;
    class ShowShellViewOptions;
    class ShowShellViewRequestedEventArgs;
    class TaskGroup;
    class TaskItem;
    class TaskItemProgress;
    class TaskItemThumbnail;
    class TaskItemThumbnailVisual;
    class TaskbarAppsList;
    class TaskbarIconConfiguration;
    class TaskbarModel;
    class TaskbarNotificationAreaLayout;
    class TaskbarSearchBoxAppearance;
    class TaskbarSearchBoxInputAppearance;
    class TaskbarSettings;
    class ThumbBarButton;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSearchContractPresent@Shell@UI@WindowsUdk@winrt@@YA_NG@Z
    bool IsSearchContractPresent(unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShellContractPresent@Shell@UI@WindowsUdk@winrt@@YA_NG@Z
    bool IsShellContractPresent(unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskbarContractPresent@Shell@UI@WindowsUdk@winrt@@YA_NG@Z
    bool IsTaskbarContractPresent(unsigned short);
};
} // namespace winrt::WindowsUdk::UI

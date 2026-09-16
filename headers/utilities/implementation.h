#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 520 member(s).
namespace winrt::Taskbar {
class implementation {
public:
    class AepAnimatedIcon;
    class AepAnimatedIconFrameLoadFailure;
    class AepAnimatedIconLoadedEventArgs;
    class AnimationMarkers;
    class AppItem;
    class AppTaskGeneratedAssetViewModel;
    class AppTaskHoverCardView;
    class AppTaskHoverCardViewModel;
    class AppTaskHoverResources;
    class AppTaskHoverResources_obj12_BindingsTracking;
    class AppTaskHoverResources_obj15_BindingsTracking;
    class AppTaskHoverResources_obj18_BindingsTracking;
    class AugmentedEntryPointAdaptiveCardData;
    class AugmentedEntryPointAnimationMarkers;
    class AugmentedEntryPointButton;
    class AugmentedEntryPointButtonRenderEventArgs;
    class AugmentedEntryPointDataModel;
    class AugmentedEntryPointImageRenderer;
    class AugmentedEntryPointViewModel;
    class Badge;
    class BadgeConfiguration;
    class Beacon;
    class BindableIterator;
    class BindableVector;
    class BooleanToVisibilityConverter;
    class ButtonRearrangeArgs;
    class ContextMenus;
    class CrossDeviceResumeItem;
    class DashboardHelpers;
    class DropPlaceholder;
    class ExperienceToggleButton;
    class ExternalTaskListDragDropController;
    class FlyoutFrame;
    class GleamIconSource;
    class Gripper;
    class HitTestHandler;
    class HostWindowClip;
    class HoverCardBaseView;
    class HoverFlyoutController;
    class HoverFlyoutModel;
    class HoverUIItemsCollection;
    class IXamlBindings;
    class LaunchListItemResources;
    class LaunchListItemViewModel;
    class LocalBadgeData;
    class LocalPropertyChangedEventArgs;
    class LowLevelKeyboardHook;
    class MenuItemMnemonicsInfo;
    class Mnemonics;
    class MultiTaskbarController;
    class MultiWindowClipPath;
    class OverflowFlyoutController;
    class OverflowFlyoutLayout;
    class OverflowFlyoutList;
    class OverflowFlyoutModel;
    class OverflowItemViewModel;
    class OverflowToggleButton;
    class PostureTransition;
    class RecoHoverCardView;
    class RecoHoverCardViewModel;
    class RecoHoverResources;
    class RecommendationsOnTaskbarPayloadWrapper;
    class RecommendedItemViewModel;
    class SearchBoxButton;
    class SearchBoxLaunchListButton;
    class SearchItemViewModel;
    class ShapeBadge;
    class ShareWindowButton;
    class ShareWindowPanel;
    class ShareWindowResources;
    class ShareWindowViewModel;
    class SharedAnimations;
    class ShellHandwritingHelper;
    class StateRevoker;
    class StringNotEmptyToBooleanConverter;
    class SwipeRecognizer;
    class TaskItemHoverUITemplateSelector;
    class TaskItemThumbnailAnimator;
    class TaskItemThumbnailList;
    class TaskItemThumbnailListLayout;
    class TaskItemThumbnailResources;
    class TaskItemThumbnailScrollableList;
    class TaskItemThumbnailScrollableListLayout;
    class TaskItemThumbnailView;
    class TaskItemThumbnailViewAutomationPeer;
    class TaskItemThumbnailViewModel;
    class TaskListButton;
    class TaskListButtonAutomationPeer;
    class TaskListButtonHandlers;
    class TaskListButtonPanel;
    class TaskListButtonResources;
    class TaskListDragDropController;
    class TaskListDragOperation;
    class TaskListGroupViewModel;
    class TaskListLabeledButtonPanel;
    class TaskListWindowViewModel;
    class TaskbarBackground;
    class TaskbarCollapsibleItemsCollection;
    class TaskbarCollapsibleItemsCollectionChangeEventArgs;
    class TaskbarCollapsibleLayout;
    class TaskbarCollapsibleLayoutXamlTraits;
    class TaskbarConfiguration;
    class TaskbarController;
    class TaskbarEdgeGesture;
    class TaskbarEdgeGestureArgs;
    class TaskbarEdgeGestureManager;
    class TaskbarElementAnimator;
    class TaskbarExtension;
    class TaskbarExtensionElement;
    class TaskbarExtensionState;
    class TaskbarFrame;
    class TaskbarFrameAutomationPeer;
    class TaskbarItemHandlers;
    class TaskbarItemTemplateSelector;
    class TaskbarItemsCollectionHelpers;
    class TaskbarOverflowCollapsibleItemsCollection;
    class TaskbarRecommendationController;
    class TaskbarResources;
    class TaskbarResources_obj251_BindingsTracking;
    class TaskbarResources_obj254_BindingsTracking;
    class TaskbarResources_obj257_BindingsTracking;
    class ThumbBarButton;
    class ThumbBarButtonAutomationPeer;
    class ThumbBarButtonResources;
    class ThumbBarButtonViewModel;
    class ThumbnailHelpers;
    class UdkHelpers;
    class ViewCoordinator;
    class ViewServices;
    class WebsiteItem;
    class XamlBindingTrackingBase;
    class XamlBindings;
    class XamlMember;
    class XamlMetaDataProvider;
    class XamlSystemBaseType;
    class XamlTypeInfoProvider;
    class XamlUserType;
    class _tip_AEPRenderingPipeline;
    class _tip_AEPValidateParseJSON;
    class extension_props;
    class taskbar_alignment_props;
    class taskbar_layout_props;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMemberInfo@implementation@Taskbar@winrt@@YAPEBUMemberInfo@123@AEBUhstring@3@@Z
    WindissectOpaque const * GetMemberInfo(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlayIconBounds@implementation@Taskbar@winrt@@YA?AURect@Foundation@Windows@3@USize@563@00M@Z
    WindissectOpaque GetOverlayIconBounds(WindissectOpaque, WindissectOpaque, WindissectOpaque, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellViewShowDismissContext@implementation@Taskbar@winrt@@YA?AUhstring@3@W4ShellView@Shell@UI@WindowsUdk@3@@Z
    WindissectOpaque GetShellViewShowDismissContext(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfo@implementation@Taskbar@winrt@@YAPEBUTypeInfo@123@AEBUhstring@3@@Z
    WindissectOpaque const * GetTypeInfo(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RankToZone@implementation@Taskbar@winrt@@YA?AW4taskbar_zone@123@N@Z
    int RankToZone(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportConfigurationUpdateFailure@implementation@Taskbar@winrt@@YAXW4TaskbarAlignment@Shell@UI@WindowsUdk@3@AEBUextension_props@details@123@1NN@Z
    void ReportConfigurationUpdateFailure(int, WindissectOpaque const &, WindissectOpaque const &, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldInvertCtrlClick@implementation@Taskbar@winrt@@YA_NXZ
    bool ShouldInvertCtrlClick();
};
} // namespace winrt::Taskbar

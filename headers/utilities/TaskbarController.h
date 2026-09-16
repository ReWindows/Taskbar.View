#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 130 member(s).
namespace winrt::Taskbar::implementation {
class TaskbarController {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToRootVisualCoordinateSpace@TaskbarController@implementation@Taskbar@winrt@@QEBA?AURect@Foundation@Windows@4@U5674@@Z
    WindissectOpaque ConvertToRootVisualCoordinateSpace(WindissectOpaque) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBackgroundVisual@TaskbarController@implementation@Taskbar@winrt@@QEAA?AUFrameworkElement@Xaml@UI@Windows@4@XZ
    WindissectOpaque CreateBackgroundVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferredInitialize@TaskbarController@implementation@Taskbar@winrt@@QEAAXXZ
    void DeferredInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConvertedKey@TaskbarController@implementation@Taskbar@winrt@@QEAA?AUhstring@4@AEBU54@@Z
    WindissectOpaque GetConvertedKey(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertGroup@TaskbarController@implementation@Taskbar@winrt@@QEAAXIUTaskGroup@Shell@UI@WindowsUdk@4@@Z
    void InsertGroup(unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeExtensionItem@TaskbarController@implementation@Taskbar@winrt@@QEAA?AUTaskbarExtension@34@AEBUTaskbarXamlExtension@3Windows@Microsoft@4@AEBUextension_props@234@@Z
    WindissectOpaque MakeExtensionItem(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeLaunchListItemViewModel@TaskbarController@implementation@Taskbar@winrt@@QEAA?AULaunchListItemViewModel@34@W4ShellView@Shell@UI@WindowsUdk@4@@Z
    WindissectOpaque MakeLaunchListItemViewModel(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeLaunchListItemViewModel@TaskbarController@implementation@Taskbar@winrt@@QEAA?AULaunchListItemViewModel@34@AEBUextension_props@234@@Z
    WindissectOpaque MakeLaunchListItemViewModel(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeTaskListGroupViewModel@TaskbarController@implementation@Taskbar@winrt@@QEBA?AUTaskListGroupViewModel@34@AEBUTaskGroup@Shell@UI@WindowsUdk@4@@Z
    WindissectOpaque MakeTaskListGroupViewModel(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRecommendationStateChanged@TaskbarController@implementation@Taskbar@winrt@@QEAAXXZ
    void OnRecommendationStateChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterViewCoordinator@TaskbarController@implementation@Taskbar@winrt@@QEAAXAEBU?$com_ptr@UViewCoordinator@implementation@Taskbar@winrt@@@4@@Z
    void RegisterViewCoordinator(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskbarController@implementation@Taskbar@winrt@@QEAA@AEBUTaskbarModel@Shell@UI@WindowsUdk@3@V?$tip_test@V?$merged_data@U_tip_TaskbarInitialization@TaskbarTipTest@@U12@@details@tip2@@@tip2@@@Z
    TaskbarController(WindissectOpaque const &, WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskbarController@implementation@Taskbar@winrt@@QEAA@AEBUTaskbarModel@Shell@UI@WindowsUdk@3@@Z
    TaskbarController(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateActiveTaskListItem@TaskbarController@implementation@Taskbar@winrt@@QEAAXXZ
    void UpdateActiveTaskListItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCollapsedExtentForAnimations@TaskbarController@implementation@Taskbar@winrt@@QEAAXXZ
    void UpdateCollapsedExtentForAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRecommendationsShown@TaskbarController@implementation@Taskbar@winrt@@QEAAXXZ
    void UpdateRecommendationsShown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRecommendationsShownAndRefresh@TaskbarController@implementation@Taskbar@winrt@@QEAAXXZ
    void UpdateRecommendationsShownAndRefresh();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateXdrShown@TaskbarController@implementation@Taskbar@winrt@@QEAAXXZ
    void UpdateXdrShown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?View@TaskbarController@implementation@Taskbar@winrt@@QEAA?AUFrameworkElement@Xaml@UI@Windows@4@XZ
    WindissectOpaque View();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarController@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~TaskbarController();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginSmallFrameTransition@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void BeginSmallFrameTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectionRealityCheck@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void CollectionRealityCheck();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissVisibleShellViews@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void DismissVisibleShellViews();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandProgress@TaskbarController@implementation@Taskbar@winrt@@AEAA?AUCompositionPropertySet@Composition@UI@Windows@4@XZ
    WindissectOpaque ExpandProgress();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FetchTaskbarRecommendationsOnStateChangedAsync@TaskbarController@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@XZ
    WindissectOpaque FetchTaskbarRecommendationsOnStateChangedAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHostWindowId@TaskbarController@implementation@Taskbar@winrt@@AEBA_KXZ
    uint64_t GetHostWindowId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleLockscreenActiveAsync@TaskbarController@implementation@Taskbar@winrt@@CA?AUfire_and_forget@4@U?$weak_ref@UTaskbarController@implementation@Taskbar@winrt@@@4@KAEBUCoreDispatcher@Core@UI@Windows@4@@Z
    static WindissectOpaque HandleLockscreenActiveAsync(WindissectOpaque, unsigned long, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertCrossDeviceResumeRecommendationAsync@TaskbarController@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@XZ
    WindissectOpaque InsertCrossDeviceResumeRecommendationAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSmallFrameTransitionActive@TaskbarController@implementation@Taskbar@winrt@@AEAA_NXZ
    bool IsSmallFrameTransitionActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppTaskInfoUpdated@TaskbarController@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@UAppTaskInfoUpdatedArgs@@@Z
    WindissectOpaque OnAppTaskInfoUpdated(AppTaskInfoUpdatedArgs);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplicationThemeChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@4@AEBUDependencyProperty@6784@@Z
    void OnApplicationThemeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppsListActiveGroupChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarAppsList@Shell@UI@WindowsUdk@4@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnAppsListActiveGroupChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppsListActiveItemChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarAppsList@Shell@UI@WindowsUdk@4@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnAppsListActiveItemChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppsListGroupCollectionChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarAppsList@Shell@UI@WindowsUdk@4@AEBUTaskGroupCollectionChangedEventArgs@6784@@Z
    void OnAppsListGroupCollectionChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppsListGroupMoved@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarAppsList@Shell@UI@WindowsUdk@4@AEBUTaskGroupMovedEventArgs@6784@@Z
    void OnAppsListGroupMoved(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppsListGroupPropertyChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarAppsList@Shell@UI@WindowsUdk@4@AEBUTaskGroupPropertyChangedEventArgs@6784@@Z
    void OnAppsListGroupPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppsListItemAnimationRequested@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarAppsList@Shell@UI@WindowsUdk@4@AEBUTaskItemAnimationRequestedEventArgs@6784@@Z
    void OnAppsListItemAnimationRequested(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppsListItemCollectionChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarAppsList@Shell@UI@WindowsUdk@4@AEBUTaskItemCollectionChangedEventArgs@6784@@Z
    void OnAppsListItemCollectionChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppsListItemPropertyChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarAppsList@Shell@UI@WindowsUdk@4@AEBUTaskItemPropertyChangedEventArgs@6784@@Z
    void OnAppsListItemPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppsListVirtualDesktopChanging@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarAppsList@Shell@UI@WindowsUdk@4@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnAppsListVirtualDesktopChanging(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAreAllWindowsMinimizedChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarModel@Shell@UI@WindowsUdk@4@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnAreAllWindowsMinimizedChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollapseDelayRequested@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarExtension@34@AEB_N@Z
    void OnCollapseDelayRequested(WindissectOpaque const &, bool const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandInvoked@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarModel@Shell@UI@WindowsUdk@4@AEBUTaskbarCommandInvokedEventArgs@6784@@Z
    void OnCommandInvoked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandRequested@TaskbarController@implementation@Taskbar@winrt@@AEAAXW4TaskbarCommand@Shell@UI@WindowsUdk@4@@Z
    void OnCommandRequested(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnComponentHostChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarComponentHost@3Windows@Microsoft@4@AEBUTaskbarComponentHostChangedEventArgs@3674@@Z
    void OnComponentHostChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismissHoverFlyoutWithKeyboardFocusRequested@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnDismissHoverFlyoutWithKeyboardFocusRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismissOverflowWithKeyboardFocusRequested@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@@Z
    void OnDismissOverflowWithKeyboardFocusRequested(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayModeChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnDisplayModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragStarted@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnDragStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEdgeGestureCompleted@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBU?$com_ptr@UTaskbarEdgeGestureManager@implementation@Taskbar@winrt@@@4@AEBU?$com_ptr@UTaskbarEdgeGesture@implementation@Taskbar@winrt@@@4@@Z
    void OnEdgeGestureCompleted(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEdgeGestureStarted@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBU?$com_ptr@UTaskbarEdgeGestureManager@implementation@Taskbar@winrt@@@4@AEBU?$com_ptr@UTaskbarEdgeGesture@implementation@Taskbar@winrt@@@4@@Z
    void OnEdgeGestureStarted(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExtendedUICyclingRequested@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarAppsList@Shell@UI@WindowsUdk@4@AEBUExtendedUICyclingRequestedEventArgs@6784@@Z
    void OnExtendedUICyclingRequested(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExtendedUIHotTrackedItemChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarAppsList@Shell@UI@WindowsUdk@4@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnExtendedUIHotTrackedItemChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusSetFromCommand@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnFocusSetFromCommand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFrameChildItemBoundsChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnFrameChildItemBoundsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFrameIsPointerOverChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnFrameIsPointerOverChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFrameLoaded@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void OnFrameLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFramePointerEnteredScreenEdge@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnFramePointerEnteredScreenEdge();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFrameResized@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUSizeChangedEventArgs@Xaml@UI@74@@Z
    void OnFrameResized(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFrameSizeChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnFrameSizeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFrameSwipe@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUSwipeEventArgs@34@@Z
    void OnFrameSwipe(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFreezeLayoutRequested@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarExtension@34@AEB_N@Z
    void OnFreezeLayoutRequested(WindissectOpaque const &, bool const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotLostFocus@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnGotLostFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGroupingModeChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnGroupingModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHideHoverFlyoutRequested@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnHideHoverFlyoutRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHideLegacyExtendedUIRequested@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnHideLegacyExtendedUIRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHideOverflowFlyoutRequested@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnHideOverflowFlyoutRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHideSearchFlyoutRequested@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnHideSearchFlyoutRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHideSearchRequested@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnHideSearchRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHoverControllerExtendedUIGroupChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUTaskGroup@Shell@UI@WindowsUdk@4@@Z
    void OnHoverControllerExtendedUIGroupChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHoverControllerHotTrackedItemChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUTaskItem@Shell@UI@WindowsUdk@4@@Z
    void OnHoverControllerHotTrackedItemChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIconCensusDebounceTimerTick@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void OnIconCensusDebounceTimerTick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIconConfigurationChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnIconConfigurationChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInteractionModeChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarModel@Shell@UI@WindowsUdk@4@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnInteractionModeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsExpandedChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarModel@Shell@UI@WindowsUdk@4@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnIsExpandedChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsFlyoutVisibleChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarModel@Shell@UI@WindowsUdk@4@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnIsFlyoutVisibleChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsFullscreenWindowHidingTaskbarChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarModel@Shell@UI@WindowsUdk@4@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnIsFullscreenWindowHidingTaskbarChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsHoverFlyoutVisibleChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void OnIsHoverFlyoutVisibleChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsOverflowFlyoutVisibleChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnIsOverflowFlyoutVisibleChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemThumbnailPropertyChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarAppsList@Shell@UI@WindowsUdk@4@AEBUTaskItemThumbnailPropertyChangedEventArgs@6784@@Z
    void OnItemThumbnailPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLaunchListItemContextRequested@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBULaunchListItemViewModel@34@@Z
    void OnLaunchListItemContextRequested(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLaunchListItemGettingFocus@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBULaunchListItemViewModel@34@@Z
    void OnLaunchListItemGettingFocus(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLightDismissTriggered@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarModel@Shell@UI@WindowsUdk@4@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnLightDismissTriggered(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNotificationAreaLayoutChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarNotificationAreaLayout@Shell@UI@WindowsUdk@4@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnNotificationAreaLayoutChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOrientationChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXW4SimpleOrientation@Sensors@Devices@Windows@4@@Z
    void OnOrientationChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOverflowChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnOverflowChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressedHandler@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUPointerRoutedEventArgs@Input@Xaml@UI@74@@Z
    void OnPointerPressedHandler(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRootPropertyChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUXamlRoot@Xaml@UI@Windows@4@AEBUXamlRootChangedEventArgs@6784@@Z
    void OnRootPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShouldStayExpandedChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUTaskbarModel@Shell@UI@WindowsUdk@4@AEBUIInspectable@Foundation@Windows@4@@Z
    void OnShouldStayExpandedChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowBadgesChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnShowBadgesChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowFlashingChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnShowFlashingChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowLabelsOnNonRunningGroupsChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnShowLabelsOnNonRunningGroupsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowLegacyExtendedUIRequested@TaskbarController@implementation@Taskbar@winrt@@AEAAXUTaskGroup@Shell@UI@WindowsUdk@4@@Z
    void OnShowLegacyExtendedUIRequested(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStartContextRequested@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnStartContextRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskbarComponentChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUextension_props@234@@Z
    void OnTaskbarComponentChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskbarContextRequested@TaskbarController@implementation@Taskbar@winrt@@AEAAXAEBUUIElement@Xaml@UI@Windows@4@AEBUContextRequestedEventArgs@Input@6784@@Z
    void OnTaskbarContextRequested(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskbarFrameMeasured@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnTaskbarFrameMeasured();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskbarLayoutUpdateRequested@TaskbarController@implementation@Taskbar@winrt@@AEAAX_N@Z
    void OnTaskbarLayoutUpdateRequested(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskbarThemeChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnTaskbarThemeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransitionToPostureCompleted@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnTransitionToPostureCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransitionToTabletPostureCompleted@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void OnTransitionToTabletPostureCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemainingAvailableSlotsForRecommendations@TaskbarController@implementation@Taskbar@winrt@@AEAAIXZ
    unsigned int RemainingAvailableSlotsForRecommendations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCrossDeviceResumeRecommendationAsync@TaskbarController@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@W4CrossDeviceNotificationStatus@34@@Z
    WindissectOpaque RemoveCrossDeviceResumeRecommendationAsync(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveRecommendedCollection@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void RemoveRecommendedCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportTaskListSizeChanged@TaskbarController@implementation@Taskbar@winrt@@AEAAX_N@Z
    void ReportTaskListSizeChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestUpdateTaskbarRecommendations@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void RequestUpdateTaskbarRecommendations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleIconCensus@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void ScheduleIconCensus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppTaskAccessibleNameForGroup@TaskbarController@implementation@Taskbar@winrt@@AEAAXUTaskGroup@Shell@UI@WindowsUdk@4@AEBU?$com_ptr@UTaskListGroupViewModel@implementation@Taskbar@winrt@@@4@@Z
    void SetAppTaskAccessibleNameForGroup(WindissectOpaque, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppTaskDisplayNameForGroup@TaskbarController@implementation@Taskbar@winrt@@AEAAXUTaskGroup@Shell@UI@WindowsUdk@4@AEBU?$com_ptr@UTaskListGroupViewModel@implementation@Taskbar@winrt@@@4@@Z
    void SetAppTaskDisplayNameForGroup(WindissectOpaque, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppTaskDisplayNameForUpdatedWindow@TaskbarController@implementation@Taskbar@winrt@@AEAAXUTaskGroup@Shell@UI@WindowsUdk@4@@Z
    void SetAppTaskDisplayNameForUpdatedWindow(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppTaskIconForGroup@TaskbarController@implementation@Taskbar@winrt@@AEAAXUTaskGroup@Shell@UI@WindowsUdk@4@AEBU?$com_ptr@UTaskListGroupViewModel@implementation@Taskbar@winrt@@@4@@Z
    void SetAppTaskIconForGroup(WindissectOpaque, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppTaskStateForGroup@TaskbarController@implementation@Taskbar@winrt@@AEAAXUTaskGroup@Shell@UI@WindowsUdk@4@AEBU?$com_ptr@UTaskListGroupViewModel@implementation@Taskbar@winrt@@@4@@Z
    void SetAppTaskStateForGroup(WindissectOpaque, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionToDesktopPosture@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void TransitionToDesktopPosture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionToPosture@TaskbarController@implementation@Taskbar@winrt@@AEAAXW4UserInteractionMode@ViewManagement@UI@Windows@4@_N@Z
    void TransitionToPosture(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionToTabletPosture@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void TransitionToTabletPosture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetExtensionItem@TaskbarController@implementation@Taskbar@winrt@@AEAA?AUTaskbarExtension@34@AEBUextension_props@234@@Z
    WindissectOpaque TryGetExtensionItem(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAppTask@TaskbarController@implementation@Taskbar@winrt@@AEAAXUTaskGroup@Shell@UI@WindowsUdk@4@@Z
    void UpdateAppTask(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateApplicationTheme@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateApplicationTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCollectionOnComponentChange@TaskbarController@implementation@Taskbar@winrt@@AEAA_NAEBUextension_props@234@_N@Z
    bool UpdateCollectionOnComponentChange(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEdgeGestureOffset@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateEdgeGestureOffset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFrameHeight@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateFrameHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHostWindowClip@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateHostWindowClip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHostWindowClip_NoThrow@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateHostWindowClip_NoThrow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIconConfiguration@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateIconConfiguration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOverflow@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateOverflow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSystemTrayMargin@TaskbarController@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateSystemTrayMargin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTaskbarRecommendationsAsync@TaskbarController@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@XZ
    WindissectOpaque UpdateTaskbarRecommendationsAsync();
};
} // namespace winrt::Taskbar::implementation

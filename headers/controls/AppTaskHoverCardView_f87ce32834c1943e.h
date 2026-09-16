#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 78 member(s).
namespace winrt::Taskbar::implementation {
class AppTaskHoverCardView {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAA@XZ
    AppTaskHoverCardView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompletedSteps@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAA?AU?$IObservableVector@Uhstring@winrt@@@Collections@Foundation@Windows@4@XZ
    WindissectOpaque CompletedSteps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompletedStepsProperty@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque CompletedStepsProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentStepTextProperty@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque CurrentStepTextProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeepLinkButtonTextProperty@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque DeepLinkButtonTextProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ErrorTextProperty@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque ErrorTextProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GeneratedAssets@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAA?AU?$IObservableVector@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@4@XZ
    WindissectOpaque GeneratedAssets();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GeneratedAssetsProperty@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque GeneratedAssetsProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlyphState@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAA?AUhstring@4@XZ
    WindissectOpaque GlyphState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlyphStateProperty@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque GlyphStateProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Icon@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAAXAEBUIRandomAccessStream@Streams@Storage@Windows@4@@Z
    void Icon(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAAXXZ
    void Invoke();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCloseButtonAlwaysVisible@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAAX_N@Z
    void IsCloseButtonAlwaysVisible(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCloseButtonAvailable@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAA_NXZ
    bool IsCloseButtonAvailable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCloseButtonAvailableProperty@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque IsCloseButtonAvailableProperty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrepared@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAAX_N@Z
    void IsPrepared(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeBitmapImage@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUBitmapImage@Imaging@Media@Xaml@UI@Windows@4@AEBUIRandomAccessStream@Streams@Storage@Windows@4@@Z
    static WindissectOpaque MakeBitmapImage(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAA?AUSize@Foundation@Windows@4@U5674@@Z
    WindissectOpaque MeasureOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotLostFocus@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAAXXZ
    void OnGotLostFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAAXAEBUKeyRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnKeyDown(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnPointerEntered(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnPointerMoved(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnPointerReleased(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreviewThumbnail@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAA?AUBitmapImage@Imaging@Media@Xaml@UI@Windows@4@XZ
    WindissectOpaque PreviewThumbnail();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreviewThumbnailProperty@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque PreviewThumbnailProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrimaryChoiceTextProperty@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque PrimaryChoiceTextProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SecondaryChoiceTextProperty@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque SecondaryChoiceTextProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowBinaryChoiceGrid@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAA_NXZ
    bool ShowBinaryChoiceGrid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowBinaryChoiceGridProperty@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque ShowBinaryChoiceGridProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowCompletedSteps@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAA_NXZ
    bool ShowCompletedSteps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowCompletedStepsProperty@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque ShowCompletedStepsProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowCurrentStep@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAA_NXZ
    bool ShowCurrentStep();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowCurrentStepProperty@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque ShowCurrentStepProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowCurrentStepStateIconGrid@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAA_NXZ
    bool ShowCurrentStepStateIconGrid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowCurrentStepStateIconGridProperty@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque ShowCurrentStepStateIconGridProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDeepLinkButton@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAA_NXZ
    bool ShowDeepLinkButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDeepLinkButtonProperty@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque ShowDeepLinkButtonProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowErrorText@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAA_NXZ
    bool ShowErrorText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowErrorTextProperty@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque ShowErrorTextProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowGeneratedAssetsCompactLayout@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAA_NXZ
    bool ShowGeneratedAssetsCompactLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowGeneratedAssetsCompactLayoutProperty@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque ShowGeneratedAssetsCompactLayoutProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowGeneratedAssetsLargeLayout@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAA_NXZ
    bool ShowGeneratedAssetsLargeLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowGeneratedAssetsLargeLayoutProperty@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque ShowGeneratedAssetsLargeLayoutProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowPreviewThumbnail@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAA_NXZ
    bool ShowPreviewThumbnail();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowPreviewThumbnailProperty@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque ShowPreviewThumbnailProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowProgressRing@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAA_NXZ
    bool ShowProgressRing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowProgressRingProperty@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque ShowProgressRingProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowSummaryText@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAA_NXZ
    bool ShowSummaryText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowSummaryTextProperty@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque ShowSummaryTextProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowTaskStateText@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAA_NXZ
    bool ShowTaskStateText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowTaskStateTextProperty@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque ShowTaskStateTextProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowUserTextInputGrid@AppTaskHoverCardView@implementation@Taskbar@winrt@@QEAA_NXZ
    bool ShowUserTextInputGrid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowUserTextInputGridProperty@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque ShowUserTextInputGridProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SummaryTextProperty@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque SummaryTextProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskStateTextProperty@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque TaskStateTextProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskTitleTextProperty@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque TaskTitleTextProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextInputPlaceholderProperty@AppTaskHoverCardView@implementation@Taskbar@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque TextInputPlaceholderProperty();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppTaskHoverCardView@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~AppTaskHoverCardView();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureViewModel@AppTaskHoverCardView@implementation@Taskbar@winrt@@AEAA?AUAppTaskHoverCardViewModel@34@XZ
    WindissectOpaque EnsureViewModel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKeyboardFocus@AppTaskHoverCardView@implementation@Taskbar@winrt@@AEAA_NAEBUIInspectable@Foundation@Windows@4@@Z
    bool HasKeyboardFocus(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPointerOver@AppTaskHoverCardView@implementation@Taskbar@winrt@@CA_NAEBUFrameworkElement@Xaml@UI@Windows@4@AEBUPointerRoutedEventArgs@Input@6784@@Z
    static bool IsPointerOver(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTemplateLoaded@AppTaskHoverCardView@implementation@Taskbar@winrt@@AEBA_NXZ
    bool IsTemplateLoaded() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBinaryChoicePrimaryButtonClicked@AppTaskHoverCardView@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnBinaryChoicePrimaryButtonClicked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBinaryChoiceSecondaryButtonClicked@AppTaskHoverCardView@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnBinaryChoiceSecondaryButtonClicked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCloseButtonClicked@AppTaskHoverCardView@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnCloseButtonClicked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCurrentStepProgressRingAVPUnloaded@AppTaskHoverCardView@implementation@Taskbar@winrt@@AEAA?AUfire_and_forget@4@UIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@84@@Z
    WindissectOpaque OnCurrentStepProgressRingAVPUnloaded(WindissectOpaque, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCurrentStepProgressRingUnloaded@AppTaskHoverCardView@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnCurrentStepProgressRingUnloaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeepLinkButtonClicked@AppTaskHoverCardView@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnDeepLinkButtonClicked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayNameIsTextTrimmedChanged@AppTaskHoverCardView@implementation@Taskbar@winrt@@AEAAXAEBUTextBlock@Controls@Xaml@UI@Windows@4@AEBUIsTextTrimmedChangedEventArgs@67894@@Z
    void OnDisplayNameIsTextTrimmedChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGettingFocus@AppTaskHoverCardView@implementation@Taskbar@winrt@@AEAAXAEBUUIElement@Xaml@UI@Windows@4@AEBUGettingFocusEventArgs@Input@6784@@Z
    void OnGettingFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUserTextInputBoxSubmit@AppTaskHoverCardView@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUKeyRoutedEventArgs@Input@Xaml@UI@74@@Z
    void OnUserTextInputBoxSubmit(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUserTextInputButtonClicked@AppTaskHoverCardView@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnUserTextInputButtonClicked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutomationNamesOnCompletedSteps@AppTaskHoverCardView@implementation@Taskbar@winrt@@AEAAXAEBUhstring@4@@Z
    void SetAutomationNamesOnCompletedSteps(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateToolTip@AppTaskHoverCardView@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateToolTip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStates@AppTaskHoverCardView@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateVisualStates();
};
} // namespace winrt::Taskbar::implementation

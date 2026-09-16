#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 48 member(s).
namespace winrt::Taskbar::implementation {
class TaskItemThumbnailView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccessibleName@TaskItemThumbnailView@implementation@Taskbar@winrt@@QEAAXUhstring@4@@Z
    void AccessibleName(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayName@TaskItemThumbnailView@implementation@Taskbar@winrt@@QEAAXUhstring@4@@Z
    void DisplayName(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@TaskItemThumbnailView@implementation@Taskbar@winrt@@QEAAXXZ
    void Invoke();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCloseButtonAlwaysVisible@TaskItemThumbnailView@implementation@Taskbar@winrt@@QEAAX_N@Z
    void IsCloseButtonAlwaysVisible(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrepared@TaskItemThumbnailView@implementation@Taskbar@winrt@@QEAAX_N@Z
    void IsPrepared(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeBitmapImage@TaskItemThumbnailView@implementation@Taskbar@winrt@@SA?AUBitmapImage@Imaging@Media@Xaml@UI@Windows@4@AEBUIRandomAccessStream@Streams@Storage@Windows@4@@Z
    static WindissectOpaque MakeBitmapImage(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@TaskItemThumbnailView@implementation@Taskbar@winrt@@QEAA?AUSize@Foundation@Windows@4@U5674@@Z
    WindissectOpaque MeasureOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@TaskItemThumbnailView@implementation@Taskbar@winrt@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextRequested@TaskItemThumbnailView@implementation@Taskbar@winrt@@QEAAXUUIElement@Xaml@UI@Windows@4@AEBUContextRequestedEventArgs@Input@6784@@Z
    void OnContextRequested(WindissectOpaque, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@TaskItemThumbnailView@implementation@Taskbar@winrt@@QEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@4@XZ
    WindissectOpaque OnCreateAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotLostFocus@TaskItemThumbnailView@implementation@Taskbar@winrt@@QEAAXXZ
    void OnGotLostFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@TaskItemThumbnailView@implementation@Taskbar@winrt@@QEAAXAEBUKeyRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnKeyDown(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@TaskItemThumbnailView@implementation@Taskbar@winrt@@QEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnPointerCaptureLost(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@TaskItemThumbnailView@implementation@Taskbar@winrt@@QEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnPointerEntered(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@TaskItemThumbnailView@implementation@Taskbar@winrt@@QEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnPointerExited(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@TaskItemThumbnailView@implementation@Taskbar@winrt@@QEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnPointerMoved(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@TaskItemThumbnailView@implementation@Taskbar@winrt@@QEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnPointerPressed(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@TaskItemThumbnailView@implementation@Taskbar@winrt@@QEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnPointerReleased(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreviewKeyDown@TaskItemThumbnailView@implementation@Taskbar@winrt@@QEAAXAEBUKeyRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnPreviewKeyDown(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShareWindowViewModel@TaskItemThumbnailView@implementation@Taskbar@winrt@@QEAAXAEBU034@@Z
    void ShareWindowViewModel(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShareWindowViewModels@TaskItemThumbnailView@implementation@Taskbar@winrt@@QEAAXAEBU?$IVector@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@4@@Z
    void ShareWindowViewModels(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskItemThumbnailView@implementation@Taskbar@winrt@@QEAA@XZ
    TaskItemThumbnailView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThumbBarButtons@TaskItemThumbnailView@implementation@Taskbar@winrt@@QEAAXAEBU?$IVector@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@4@@Z
    void ThumbBarButtons(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThumbnailScaleFactor@TaskItemThumbnailView@implementation@Taskbar@winrt@@QEAAXN@Z
    void ThumbnailScaleFactor(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThumbnailSource@TaskItemThumbnailView@implementation@Taskbar@winrt@@QEAAXAEBUIThumbnailSource@34@@Z
    void ThumbnailSource(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskItemThumbnailView@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~TaskItemThumbnailView();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelPreview@TaskItemThumbnailView@implementation@Taskbar@winrt@@AEAAXXZ
    void CancelPreview();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelSwitchTimer@TaskItemThumbnailView@implementation@Taskbar@winrt@@AEAAXXZ
    void CancelSwitchTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInvokeLauncherOptions@TaskItemThumbnailView@implementation@Taskbar@winrt@@AEAA?AULauncherOptions@System@Windows@4@XZ
    WindissectOpaque CreateInvokeLauncherOptions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstVisibleItemInRepeater@TaskItemThumbnailView@implementation@Taskbar@winrt@@AEAA?AUControl@Controls@Xaml@UI@Windows@4@AEBUItemsRepeater@678Microsoft@4@@Z
    WindissectOpaque GetFirstVisibleItemInRepeater(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLauncherOptions@TaskItemThumbnailView@implementation@Taskbar@winrt@@AEAA?AULauncherOptions@System@Windows@4@UPointerPoint@Input@UI@74@@Z
    WindissectOpaque GetLauncherOptions(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePreviewStart@TaskItemThumbnailView@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUPointerRoutedEventArgs@Input@Xaml@UI@74@@Z
    void HandlePreviewStart(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePreviewStop@TaskItemThumbnailView@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUPointerRoutedEventArgs@Input@Xaml@UI@74@@Z
    void HandlePreviewStop(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKeyboardFocus@TaskItemThumbnailView@implementation@Taskbar@winrt@@AEAA_NAEBUIInspectable@Foundation@Windows@4@@Z
    bool HasKeyboardFocus(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsKeyboardFocusWithinRepeater@TaskItemThumbnailView@implementation@Taskbar@winrt@@AEAA_NAEBUItemsRepeater@Controls@Xaml@UI@Microsoft@4@@Z
    bool IsKeyboardFocusWithinRepeater(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPointerOver@TaskItemThumbnailView@implementation@Taskbar@winrt@@CA_NAEBUFrameworkElement@Xaml@UI@Windows@4@AEBUPointerRoutedEventArgs@Input@6784@@Z
    static bool IsPointerOver(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTemplateLoaded@TaskItemThumbnailView@implementation@Taskbar@winrt@@AEBA_NXZ
    bool IsTemplateLoaded() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCloseButtonClicked@TaskItemThumbnailView@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnCloseButtonClicked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayNameIsTextTrimmedChanged@TaskItemThumbnailView@implementation@Taskbar@winrt@@AEAAXAEBUTextBlock@Controls@Xaml@UI@Windows@4@AEBUIsTextTrimmedChangedEventArgs@67894@@Z
    void OnDisplayNameIsTextTrimmedChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGettingFocus@TaskItemThumbnailView@implementation@Taskbar@winrt@@AEAAXAEBUUIElement@Xaml@UI@Windows@4@AEBUGettingFocusEventArgs@Input@6784@@Z
    void OnGettingFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShareWindowViewModelPropertyChanged@TaskItemThumbnailView@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUPropertyChangedEventArgs@Data@Xaml@UI@74@@Z
    void OnShareWindowViewModelPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartPreviewTimer@TaskItemThumbnailView@implementation@Taskbar@winrt@@AEAAXXZ
    void StartPreviewTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartSwitchTimer@TaskItemThumbnailView@implementation@Taskbar@winrt@@AEAAXXZ
    void StartSwitchTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateThumbnail@TaskItemThumbnailView@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateThumbnail();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateToolTip@TaskItemThumbnailView@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateToolTip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStates@TaskItemThumbnailView@implementation@Taskbar@winrt@@AEAAXXZ
    void UpdateVisualStates();
};
} // namespace winrt::Taskbar::implementation

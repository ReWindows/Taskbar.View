#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 31 member(s).
namespace winrt::Taskbar::implementation {
class SharedAnimations {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGlommingAnimation@SharedAnimations@implementation@Taskbar@winrt@@QEBA?AUVector3KeyFrameAnimation@Composition@UI@Windows@4@MUfloat3@Numerics@Foundation@84@@Z
    WindissectOpaque CreateGlommingAnimation(float, WindissectOpaque) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRepositionAnimation@SharedAnimations@implementation@Taskbar@winrt@@QEBA?AUVector3KeyFrameAnimation@Composition@UI@Windows@4@M@Z
    WindissectOpaque CreateRepositionAnimation(float) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTabletPostureAnimation@SharedAnimations@implementation@Taskbar@winrt@@QEBA?AUVector3KeyFrameAnimation@Composition@UI@Windows@4@XZ
    WindissectOpaque CreateTabletPostureAnimation() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SharedAnimations@implementation@Taskbar@winrt@@QEAAXXZ
    void Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertTransition@SharedAnimations@implementation@Taskbar@winrt@@SAXAEBUUIElement@Xaml@UI@Windows@4@AEBUhstring@4@AEBUICompositionAnimationBase@Composition@784@@Z
    static void InsertTransition(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemExitAnimation@SharedAnimations@implementation@Taskbar@winrt@@QEBA?AUICompositionAnimationBase@Composition@UI@Windows@4@XZ
    WindissectOpaque ItemExitAnimation() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransition@SharedAnimations@implementation@Taskbar@winrt@@SAXAEBUUIElement@Xaml@UI@Windows@4@AEBUImplicitAnimationCollection@Composition@784@@Z
    static void SetTransition(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SharedAnimations@implementation@Taskbar@winrt@@QEAA@UUISettings@ViewManagement@UI@Windows@3@@Z
    SharedAnimations(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAugmentedEntryPointEntranceAnimation@SharedAnimations@implementation@Taskbar@winrt@@QEBAXAEBUUIElement@Xaml@UI@Windows@4@Ufloat3@Numerics@Foundation@84@1@Z
    void StartAugmentedEntryPointEntranceAnimation(WindissectOpaque const &, WindissectOpaque, WindissectOpaque) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAugmentedEntryPointExitAnimation@SharedAnimations@implementation@Taskbar@winrt@@QEBAXAEBUUIElement@Xaml@UI@Windows@4@Ufloat3@Numerics@Foundation@84@1@Z
    void StartAugmentedEntryPointExitAnimation(WindissectOpaque const &, WindissectOpaque, WindissectOpaque) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartBadgeExitAnimation@SharedAnimations@implementation@Taskbar@winrt@@QEBAXAEBUUIElement@Xaml@UI@Windows@4@@Z
    void StartBadgeExitAnimation(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartFlyoutEntranceAnimation@SharedAnimations@implementation@Taskbar@winrt@@QEBAXAEBUUIElement@Xaml@UI@Windows@4@@Z
    void StartFlyoutEntranceAnimation(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartFlyoutExitAnimation@SharedAnimations@implementation@Taskbar@winrt@@QEBAXAEBUUIElement@Xaml@UI@Windows@4@@Z
    void StartFlyoutExitAnimation(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartFlyoutItemRepositionAnimation@SharedAnimations@implementation@Taskbar@winrt@@QEBAXAEBUUIElement@Xaml@UI@Windows@4@Ufloat2@Numerics@Foundation@84@@Z
    void StartFlyoutItemRepositionAnimation(WindissectOpaque const &, WindissectOpaque) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartFlyoutReinvokeAnimation@SharedAnimations@implementation@Taskbar@winrt@@QEBAXAEBUUIElement@Xaml@UI@Windows@4@@Z
    void StartFlyoutReinvokeAnimation(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartFlyoutSizeChangedAnimation@SharedAnimations@implementation@Taskbar@winrt@@QEBAXAEBUUIElement@Xaml@UI@Windows@4@0AEBUInsetClip@Composition@784@USize@Foundation@84@2@Z
    void StartFlyoutSizeChangedAnimation(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque, WindissectOpaque) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartItemDragCompletedScaleAnimation@SharedAnimations@implementation@Taskbar@winrt@@QEBAXAEBUUIElement@Xaml@UI@Windows@4@@Z
    void StartItemDragCompletedScaleAnimation(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartItemDragStartedScaleAnimation@SharedAnimations@implementation@Taskbar@winrt@@QEBAXAEBUUIElement@Xaml@UI@Windows@4@@Z
    void StartItemDragStartedScaleAnimation(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartItemMinimizeAnimation@SharedAnimations@implementation@Taskbar@winrt@@QEBAXAEBUUIElement@Xaml@UI@Windows@4@M@Z
    void StartItemMinimizeAnimation(WindissectOpaque const &, float) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartItemPressedScaleAnimation@SharedAnimations@implementation@Taskbar@winrt@@QEBAXAEBUUIElement@Xaml@UI@Windows@4@@Z
    void StartItemPressedScaleAnimation(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartItemReleasedScaleAnimation@SharedAnimations@implementation@Taskbar@winrt@@QEBAXAEBUUIElement@Xaml@UI@Windows@4@@Z
    void StartItemReleasedScaleAnimation(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartItemRestoreAnimation@SharedAnimations@implementation@Taskbar@winrt@@QEBAXAEBUUIElement@Xaml@UI@Windows@4@M@Z
    void StartItemRestoreAnimation(WindissectOpaque const &, float) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartItemTranslationAnimation@SharedAnimations@implementation@Taskbar@winrt@@QEBAXAEBUUIElement@Xaml@UI@Windows@4@Ufloat3@Numerics@Foundation@84@1@Z
    void StartItemTranslationAnimation(WindissectOpaque const &, WindissectOpaque, WindissectOpaque) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartLabelAnimation@SharedAnimations@implementation@Taskbar@winrt@@QEBAXAEBUUIElement@Xaml@UI@Windows@4@MM@Z
    void StartLabelAnimation(WindissectOpaque const &, float, float) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartMostRecentlyUsedSwitchAnimation@SharedAnimations@implementation@Taskbar@winrt@@QEBAXAEBUUIElement@Xaml@UI@Windows@4@M@Z
    void StartMostRecentlyUsedSwitchAnimation(WindissectOpaque const &, float) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartOverflowButtonEntranceAnimation@SharedAnimations@implementation@Taskbar@winrt@@QEBAXAEBUUIElement@Xaml@UI@Windows@4@M@Z
    void StartOverflowButtonEntranceAnimation(WindissectOpaque const &, float) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartPaginationButtonDisabledOpacityAnimation@SharedAnimations@implementation@Taskbar@winrt@@QEBAXAEBUUIElement@Xaml@UI@Windows@4@@Z
    void StartPaginationButtonDisabledOpacityAnimation(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartPaginationButtonEnabledOpacityAnimation@SharedAnimations@implementation@Taskbar@winrt@@QEBAXAEBUUIElement@Xaml@UI@Windows@4@@Z
    void StartPaginationButtonEnabledOpacityAnimation(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartPaginationButtonReleasedAnimation@SharedAnimations@implementation@Taskbar@winrt@@QEBAXAEBUUIElement@Xaml@UI@Windows@4@@Z
    void StartPaginationButtonReleasedAnimation(WindissectOpaque const &) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SharedAnimations@implementation@Taskbar@winrt@@QEAA@XZ
    ~SharedAnimations();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransitions@SharedAnimations@implementation@Taskbar@winrt@@AEBAXXZ
    void UpdateTransitions() const;
};
} // namespace winrt::Taskbar::implementation

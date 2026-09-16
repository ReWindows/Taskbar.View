#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 33 member(s).
namespace winrt::Taskbar::implementation {
class AppTaskHoverCardViewModel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayNameForScrollableList@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@QEAA?AUhstring@4@XZ
    WindissectOpaque DisplayNameForScrollableList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlyphState@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@QEAA?AUhstring@4@XZ
    WindissectOpaque GlyphState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleBinaryChoiceSubmission@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@QEAAX_N@Z
    void HandleBinaryChoiceSubmission(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleUserTextInputSubmission@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@QEAAXAEBUhstring@4@@Z
    void HandleUserTextInputSubmission(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasGeneratedAssets@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@QEAA_NXZ
    bool HasGeneratedAssets();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Icon@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@QEAA?AUIRandomAccessStream@Streams@Storage@Windows@4@XZ
    WindissectOpaque Icon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeDeepLink@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@QEAAXXZ
    void InvokeDeepLink();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBinaryChoice@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@QEAA_NXZ
    bool IsBinaryChoice();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTextInput@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@QEAA_NXZ
    bool IsTextInput();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewCreated@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@QEAAXXZ
    void OnViewCreated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshHoverCard@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@QEAAXXZ
    void RefreshHoverCard();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestClose@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@QEAAXXZ
    void RequestClose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTaskStateAccessibleText@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@QEAAXXZ
    void UpdateTaskStateAccessibleText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTaskStateText@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@QEAAXXZ
    void UpdateTaskStateText();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~AppTaskHoverCardViewModel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreGeneralRequiredFieldsPresent@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@AEAA_NV?$tip_test@V?$merged_data@U_tip_AppTaskHoverCardViewModelParsingTest@TaskbarTipTest@@U12@@details@tip2@@@tip2@@@Z
    bool AreGeneralRequiredFieldsPresent(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreLargePreviewRequiredFieldsPresent@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@AEAA_NV?$tip_test@V?$merged_data@U_tip_AppTaskHoverCardViewModelParsingTest@TaskbarTipTest@@U12@@details@tip2@@@tip2@@@Z
    bool AreLargePreviewRequiredFieldsPresent(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreNeedsAttentionVariantRequiredFieldsPresent@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@AEAA_NV?$tip_test@V?$merged_data@U_tip_AppTaskHoverCardViewModelParsingTest@TaskbarTipTest@@U12@@details@tip2@@@tip2@@@Z
    bool AreNeedsAttentionVariantRequiredFieldsPresent(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreResultSummaryRequiredFieldsPresent@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@AEAA_NV?$tip_test@V?$merged_data@U_tip_AppTaskHoverCardViewModelParsingTest@TaskbarTipTest@@U12@@details@tip2@@@tip2@@@Z
    bool AreResultSummaryRequiredFieldsPresent(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreSequenceOfStepsRequiredFieldsPresent@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@AEAA_NV?$tip_test@V?$merged_data@U_tip_AppTaskHoverCardViewModelParsingTest@TaskbarTipTest@@U12@@details@tip2@@@tip2@@@Z
    bool AreSequenceOfStepsRequiredFieldsPresent(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeTaskStateAccessibleText@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@AEAA?AUhstring@4@XZ
    WindissectOpaque ComputeTaskStateAccessibleText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeTaskStateText@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@AEAA?AUhstring@4@XZ
    WindissectOpaque ComputeTaskStateText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriAndDismissHoverCard@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@AEAAXAEBUUri@Foundation@Windows@4@@Z
    void LaunchUriAndDismissHoverCard(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseJson@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@AEAAXXZ
    void ParseJson();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseLargePreview@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@AEAAXV?$tip_test@V?$merged_data@U_tip_AppTaskHoverCardViewModelParsingTest@TaskbarTipTest@@U12@@details@tip2@@@tip2@@@Z
    void ParseLargePreview(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseNeedsAttentionVariant@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@AEAAXV?$tip_test@V?$merged_data@U_tip_AppTaskHoverCardViewModelParsingTest@TaskbarTipTest@@U12@@details@tip2@@@tip2@@@Z
    void ParseNeedsAttentionVariant(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseResultSummary@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@AEAAXV?$tip_test@V?$merged_data@U_tip_AppTaskHoverCardViewModelParsingTest@TaskbarTipTest@@U12@@details@tip2@@@tip2@@@Z
    void ParseResultSummary(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseSequenceOfSteps@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@AEAAXV?$tip_test@V?$merged_data@U_tip_AppTaskHoverCardViewModelParsingTest@TaskbarTipTest@@U12@@details@tip2@@@tip2@@@Z
    void ParseSequenceOfSteps(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetJsonMembers@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@AEAAXXZ
    void ResetJsonMembers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTemplateKindFromString@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@AEAAXUhstring@4@@Z
    void SetTemplateKindFromString(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTemplateVariantFromString@AppTaskHoverCardViewModel@implementation@Taskbar@winrt@@AEAAXUhstring@4@@Z
    void SetTemplateVariantFromString(WindissectOpaque);
};
} // namespace winrt::Taskbar::implementation

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 1 member(s).
namespace winrt::WindowsUdk::System::UserProfile {
class SearchSettings {
public:
    class ISearchPolicySettings;
    class ISearchPolicySettings2;
    class ISearchPolicySettings3;
    class ISearchPolicySettings4;
    class ISearchPolicySettingsStatics;
    class SearchPolicySettings;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSearchSettingsContractPresent@SearchSettings@UserProfile@System@WindowsUdk@winrt@@YA_NG@Z
    bool IsSearchSettingsContractPresent(unsigned short);
};
} // namespace winrt::WindowsUdk::System::UserProfile

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 9 member(s).
namespace winrt::Taskbar::implementation {
class XamlTypeInfoProvider {
public:
    class CriticalSection;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMemberByLongName@XamlTypeInfoProvider@implementation@Taskbar@winrt@@QEAA?AUIXamlMember@Markup@Xaml@UI@Windows@4@AEBUhstring@4@@Z
    WindissectOpaque GetMemberByLongName(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXamlTypeByName@XamlTypeInfoProvider@implementation@Taskbar@winrt@@QEAA?AUIXamlType@Markup@Xaml@UI@Windows@4@AEBUhstring@4@@Z
    WindissectOpaque GetXamlTypeByName(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXamlTypeByType@XamlTypeInfoProvider@implementation@Taskbar@winrt@@QEAA?AUIXamlType@Markup@Xaml@UI@Windows@4@AEBUTypeName@Interop@7894@@Z
    WindissectOpaque GetXamlTypeByType(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XamlTypeInfoProvider@implementation@Taskbar@winrt@@QEAA@XZ
    XamlTypeInfoProvider();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlTypeInfoProvider@implementation@Taskbar@winrt@@QEAA@XZ
    ~XamlTypeInfoProvider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOtherMetadataProvidersForName@XamlTypeInfoProvider@implementation@Taskbar@winrt@@AEAA?AUIXamlType@Markup@Xaml@UI@Windows@4@AEBUhstring@4@@Z
    WindissectOpaque CheckOtherMetadataProvidersForName(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOtherMetadataProvidersForType@XamlTypeInfoProvider@implementation@Taskbar@winrt@@AEAA?AUIXamlType@Markup@Xaml@UI@Windows@4@AEBUTypeName@Interop@7894@@Z
    WindissectOpaque CheckOtherMetadataProvidersForType(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateXamlMember@XamlTypeInfoProvider@implementation@Taskbar@winrt@@AEAA?AUIXamlMember@Markup@Xaml@UI@Windows@4@AEBUhstring@4@@Z
    WindissectOpaque CreateXamlMember(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateXamlType@XamlTypeInfoProvider@implementation@Taskbar@winrt@@AEAA?AUIXamlType@Markup@Xaml@UI@Windows@4@AEBUhstring@4@@Z
    WindissectOpaque CreateXamlType(WindissectOpaque const &);
};
} // namespace winrt::Taskbar::implementation

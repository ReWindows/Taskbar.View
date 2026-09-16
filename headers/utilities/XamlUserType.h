#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 13 member(s).
namespace winrt::Taskbar::implementation {
class XamlUserType {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEnumValue@XamlUserType@implementation@Taskbar@winrt@@QEAAXAEBUhstring@4@UIInspectable@Foundation@Windows@4@@Z
    void AddEnumValue(WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMemberName@XamlUserType@implementation@Taskbar@winrt@@QEAAXAEBUhstring@4@@Z
    void AddMemberName(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxedType@XamlUserType@implementation@Taskbar@winrt@@QEBA?AUIXamlType@Markup@Xaml@UI@Windows@4@XZ
    WindissectOpaque BoxedType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEnumUIntFromString@XamlUserType@implementation@Taskbar@winrt@@QEBAIAEBUhstring@4@@Z
    unsigned int CreateEnumUIntFromString(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromString@XamlUserType@implementation@Taskbar@winrt@@QEBA?AUIInspectable@Foundation@Windows@4@AEBUhstring@4@@Z
    WindissectOpaque CreateFromString(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMember@XamlUserType@implementation@Taskbar@winrt@@QEBA?AUIXamlMember@Markup@Xaml@UI@Windows@4@AEBUhstring@4@@Z
    WindissectOpaque GetMember(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@XamlUserType@implementation@Taskbar@winrt@@UEBA?AUhstring@4@XZ
    virtual WindissectOpaque GetRuntimeClassName() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLocalType@XamlUserType@implementation@Taskbar@winrt@@UEBA_NXZ
    virtual bool IsLocalType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReturnTypeStub@XamlUserType@implementation@Taskbar@winrt@@UEBA_NXZ
    virtual bool IsReturnTypeStub() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlUserType@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~XamlUserType();
};
} // namespace winrt::Taskbar::implementation

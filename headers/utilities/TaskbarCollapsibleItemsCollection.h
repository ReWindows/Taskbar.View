#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 31 member(s).
namespace winrt::Taskbar::implementation {
class TaskbarCollapsibleItemsCollection {
public:
    class ChildCollectionInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsTaskbarComponent@TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEAA_NAEBUITaskbarItemViewModel@34@@Z
    bool ContainsTaskbarComponent(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionAt@TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEAA?AUIInspectable@Foundation@Windows@4@I@Z
    WindissectOpaque GetCollectionAt(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverflowButtonIndex@TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEBAIXZ
    unsigned int GetOverflowButtonIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexFromKey@TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEBAHAEBUhstring@4@@Z
    int IndexFromKey(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertCrossDeviceResumeRecommendedItem@TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEAAXUIInspectable@Foundation@Windows@4@@Z
    void InsertCrossDeviceResumeRecommendedItem(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertTaskbarComponent@TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEAAXAEBUITaskbarItemViewModel@34@@Z
    void InsertTaskbarComponent(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInOverflow@TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEAA_NXZ
    bool IsInOverflow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeyFromIndex@TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEBA?AUhstring@4@I@Z
    WindissectOpaque KeyFromIndex(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveCollection@TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEAAXII@Z
    void MoveCollection(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NumNonOverflowItems@TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEBAIXZ
    unsigned int NumNonOverflowItems() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NumTaskListGroups@TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEBAIXZ
    unsigned int NumTaskListGroups() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NumTaskListVisuals@TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEBAIXZ
    unsigned int NumTaskListVisuals() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecommendedCollectionSize@TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEAAIXZ
    unsigned int RecommendedCollectionSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCrossDeviceResumeRecommendation@TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEAAXW4CrossDeviceNotificationStatus@34@@Z
    void RemoveCrossDeviceResumeRecommendation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveRecommendedCollection@TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEAAXXZ
    void RemoveRecommendedCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTaskListGroup@TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEAAXAEBUTaskGroup@Shell@UI@WindowsUdk@4@@Z
    void RemoveTaskListGroup(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTaskListGroupAt@TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEAAXI@Z
    void RemoveTaskListGroupAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTaskbarComponent@TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEAAXAEBUITaskbarItemViewModel@34@@Z
    void RemoveTaskbarComponent(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SortTaskbarComponents@TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEAAXN@Z
    void SortTaskbarComponents(double);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEAA@AEBUTaskbarAppsList@Shell@UI@WindowsUdk@3@N@Z
    TaskbarCollapsibleItemsCollection(WindissectOpaque const &, double);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEAA@AEBUTaskbarAppsList@Shell@UI@WindowsUdk@3@NUOverflowItemViewModel@23@U?$array_view@$$CBUITaskbarItemViewModel@Taskbar@winrt@@@3@2@Z
    TaskbarCollapsibleItemsCollection(WindissectOpaque const &, double, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindTaskListGroupViewModel@TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEAA?AU?$com_ptr@UTaskListGroupViewModel@implementation@Taskbar@winrt@@@4@AEBUTaskGroup@Shell@UI@WindowsUdk@4@@Z
    WindissectOpaque TryFindTaskListGroupViewModel(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetOverflowItem@TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@QEAA?AUIInspectable@Foundation@Windows@4@XZ
    WindissectOpaque TryGetOverflowItem();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@UEAA@XZ
    virtual ~TaskbarCollapsibleItemsCollection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CountFlattenedItems@TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@AEBAIII@Z
    unsigned int CountFlattenedItems(unsigned int, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChildCollection@TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@AEAAXIAEBU?$IVectorView@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@4@@Z
    void InsertChildCollection(unsigned int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildCollectionChanged@TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUNotifyCollectionChangedEventArgs@Interop@Xaml@UI@74@@Z
    void OnChildCollectionChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildVectorChanged@TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@AEAAXAEBU?$IObservableVector@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@4@AEBUIVectorChangedEventArgs@6784@@Z
    void OnChildVectorChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveChildCollection@TaskbarCollapsibleItemsCollection@implementation@Taskbar@winrt@@AEAAXI@Z
    void RemoveChildCollection(unsigned int);
};
} // namespace winrt::Taskbar::implementation

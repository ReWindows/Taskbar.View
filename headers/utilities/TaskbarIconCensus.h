#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 2 member(s).
class TaskbarIconCensus {
public:
    class Impl;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogIconChanged@TaskbarIconCensus@@YAXAEBUhstring@winrt@@AEBUIRandomAccessStream@Streams@Storage@Windows@3@@Z
    void LogIconChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogIconConfigurationChanged@TaskbarIconCensus@@YAXAEBUTaskbarIconConfiguration@Shell@UI@WindowsUdk@winrt@@@Z
    void LogIconConfigurationChanged(WindissectOpaque const &);
};

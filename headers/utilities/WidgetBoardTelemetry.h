#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 18 member(s).
class WidgetBoardTelemetry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?WidgetTaskbarBadgeShown_@WidgetBoardTelemetry@@QEAAXAEBQEB_WAEBN1AEBUAugmentedEntryPointBadgeMetrics@TaskbarTelemetry@@@Z
    void WidgetTaskbarBadgeShown_(wchar_t const * const &, double const &, double const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WidgetTaskbarContentUpdated_@WidgetBoardTelemetry@@QEAAXPEB_W00_N11100AEBH210111111@Z
    void WidgetTaskbarContentUpdated_(wchar_t const *, wchar_t const *, wchar_t const *, bool, bool, bool, bool, wchar_t const *, wchar_t const *, int const &, int const &, bool, wchar_t const *, bool, bool, bool, bool, bool, bool);
};

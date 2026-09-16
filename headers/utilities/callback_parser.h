#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 18 member(s).
namespace fc_tson {
class callback_parser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?tson_to_callback@callback_parser@fc_tson@@SAJPEBDAEAUtson_parse_callback@2@W4callback_options@2@@Z
    static long tson_to_callback(char const *, WindissectOpaque &, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?parse@callback_parser@fc_tson@@AEAAJAEAW4archive_marker@details@2@PEBD@Z
    long parse(int &, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?parse@callback_parser@fc_tson@@AEAAJXZ
    long parse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?parse_until@callback_parser@fc_tson@@AEAAJW4archive_marker@details@2@@Z
    long parse_until(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?save_string@callback_parser@fc_tson@@AEAAJPEBDIPEA_WG@Z
    long save_string(char const *, unsigned int, wchar_t *, unsigned short);
};
} // namespace fc_tson

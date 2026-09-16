#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 4 member(s).
class fc_tson {
public:
    class callback_parser;
    class output_archive;
    class read_buffer;
    class write_buffer;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?is_tson_string@fc_tson@@YA_NPEBDAEA_K@Z
    bool is_tson_string(char const *, uint64_t &);
};

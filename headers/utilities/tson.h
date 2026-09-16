#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 10 member(s).
class tson {
public:
    class input_archive;
    class output_archive;
    class read_buffer;
    class write_buffer;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?is_tson_string@tson@@YA_NPEBDAEA_K@Z
    bool is_tson_string(char const *, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z
    void load_nothrow(WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z
    void save_nothrow(WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?tson_size_to_marker@tson@@YAI_K@Z
    unsigned int tson_size_to_marker(uint64_t);
};

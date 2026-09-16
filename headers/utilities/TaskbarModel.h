#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 2 member(s).
namespace winrt::WindowsUdk::UI::Shell {
class TaskbarModel {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupported@TaskbarModel@Shell@UI@WindowsUdk@winrt@@SA@AEBW4TaskbarFeature@2345@@Z
    static IsSupported(int const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarModel@Shell@UI@WindowsUdk@winrt@@QEAA@XZ
    ~TaskbarModel();
};
} // namespace winrt::WindowsUdk::UI::Shell

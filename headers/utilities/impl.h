#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Taskbar.View.dll by Windissect. 394 member(s).
namespace winrt {
class impl {
public:
    class agile_ref_fallback;
    class atomic_ref_count;
    class error_info_fallback;
    class factory_cache;
    class factory_count_guard;
    class hstring_builder;
    class resume_apartment_context;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z
    void check_status_canceled(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEB_WI@Z
    WindissectOpaque * create_hstring_on_heap(wchar_t const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?create_hstring_on_stack@impl@winrt@@YAXAEAUhstring_header@12@PEB_WI@Z
    void create_hstring_on_stack(WindissectOpaque &, wchar_t const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z
    WindissectOpaque * duplicate_hstring(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?fallback_RoFailFastWithErrorContext@impl@winrt@@YAXH@Z
    void fallback_RoFailFastWithErrorContext(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?fallback_RoGetActivationFactory@impl@winrt@@YAHPEAXAEBUguid@2@PEAPEAX@Z
    int fallback_RoGetActivationFactory(void *, WindissectOpaque const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?fallback_RoGetAgileReference@impl@winrt@@YAHIAEBUguid@2@PEAXPEAPEAX@Z
    int fallback_RoGetAgileReference(unsigned int, WindissectOpaque const &, void *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?fallback_RoTransformError@impl@winrt@@YAHHHPEAX@Z
    int fallback_RoTransformError(int, int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?fallback_submit_threadpool_callback@impl@winrt@@YAXPEAX0@Z
    void fallback_submit_threadpool_callback(void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_agile_reference@impl@winrt@@YA?AUhresult@2@AEBUguid@2@PEAXPEAPEAX@Z
    WindissectOpaque get_agile_reference(WindissectOpaque const &, void *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_static_lifetime_map@impl@winrt@@YA?AU?$com_ptr@UIStaticLifetimeCollection@impl@winrt@@@2@XZ
    WindissectOpaque get_static_lifetime_map();
    // Category: Method | Source: PDB Internal
    // Symbol: ?is_sta_thread@impl@winrt@@YA_NXZ
    bool is_sta_thread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z
    int make_marshaler(WindissectOpaque *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?message_from_hresult@impl@winrt@@YA?AUhstring@2@Uhresult@2@@Z
    WindissectOpaque message_from_hresult(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z
    WindissectOpaque * precreate_hstring_on_heap(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?resume_apartment_callback@impl@winrt@@YAHPEAUcom_callback_args@12@@Z
    int resume_apartment_callback(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?resume_background_callback@impl@winrt@@YAXPEAX0@Z
    void resume_background_callback(void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEB_WI@Z
    WindissectOpaque trim_hresult_message(wchar_t const * const, unsigned int);
};
} // namespace winrt

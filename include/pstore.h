/*** Autogenerated by WIDL 0.1 from pstore.idl - Do not edit ***/
#include <rpc.h>
#include <rpcndr.h>

#ifndef __WIDL_PSTORE_H
#define __WIDL_PSTORE_H
#ifdef __cplusplus
extern "C" {
#endif
#include <oaidl.h>
#define PST_KEY_CURRENT_USER    0
#define PST_KEY_LOCAL_MACHINE   1
#define PST_E_OK          0x00000000L
#define PST_E_TYPE_EXISTS 0x800C0004L
#define PST_AUTHENTICODE        1
#define PST_BINARY_CHECK        2
#define PST_SECURITY_DESCRIPTOR 4
typedef DWORD PST_ACCESSMODE;

typedef DWORD PST_ACCESSCLAUSETYPE;

typedef DWORD PST_KEY;

typedef DWORD PST_PROVIDERCAPABILITIES;

typedef GUID PST_PROVIDERID, *PPST_PROVIDERID;

typedef struct _PST_PROVIDERINFO {
    DWORD cbSize;
    PST_PROVIDERID ID;
    PST_PROVIDERCAPABILITIES Capabilities;
    LPWSTR szProviderName;
} PST_PROVIDERINFO, *PPST_PROVIDERINFO;

typedef void *PPST_PROMPTIFO;

typedef struct {
    DWORD cbSize;
    PST_ACCESSCLAUSETYPE ClauseType;
    DWORD cbClauseData;
    BYTE *pbClauseData;
} PST_ACCESSCLAUSE, *PPST_ACCESSCLAUSE;

typedef struct {
    DWORD cbSize;
    PST_ACCESSMODE AccessModeFlags;
    DWORD cClauses;
    PST_ACCESSCLAUSE *rgClauses;
} PST_ACCESSRULE, *PPST_ACCESSRULE;

typedef struct {
    DWORD cbSize;
    DWORD cClause;
    PST_ACCESSRULE *rgRules;
} PST_ACCESSRULESET, *PPST_ACCESSRULESET;

typedef struct {
    DWORD cbSize;
    LPWSTR szDisplayName;
} PST_TYPEINFO, *PPST_TYPEINFO;

typedef struct {
    DWORD cbSize;
    DWORD dwPromptFlags;
    DWORD_PTR hwndApp;
    LPCWSTR szPrompt;
} PST_PROMPTINFO, *PPST_PROMPTINFO;

#ifndef __IEnumPStoreItems_FWD_DEFINED__
#define __IEnumPStoreItems_FWD_DEFINED__
typedef struct IEnumPStoreItems IEnumPStoreItems;
#endif

/*****************************************************************************
 * IEnumPStoreItems interface
 */
#ifndef __IEnumPStoreItems_INTERFACE_DEFINED__
#define __IEnumPStoreItems_INTERFACE_DEFINED__

#if defined(__cplusplus) && !defined(CINTERFACE)
struct IEnumPStoreItems : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Clone(
        IEnumPStoreItems** ppenum) = 0;

    virtual HRESULT STDMETHODCALLTYPE Next(
        DWORD celt,
        LPWSTR* rgelt,
        DWORD* pceltFetched) = 0;

    virtual HRESULT STDMETHODCALLTYPE Reset(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Skip(
        DWORD celt) = 0;

};
#else
typedef struct IEnumPStoreItemsVtbl IEnumPStoreItemsVtbl;
struct IEnumPStoreItems {
    const IEnumPStoreItemsVtbl* lpVtbl;
};
struct IEnumPStoreItemsVtbl {
    ICOM_MSVTABLE_COMPAT_FIELDS

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumPStoreItems* This,
        REFIID riid,
        void** ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumPStoreItems* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumPStoreItems* This);

    /*** IEnumPStoreItems methods ***/
    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumPStoreItems* This,
        IEnumPStoreItems** ppenum);

    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumPStoreItems* This,
        DWORD celt,
        LPWSTR* rgelt,
        DWORD* pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumPStoreItems* This);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumPStoreItems* This,
        DWORD celt);

};

/*** IUnknown methods ***/
#define IEnumPStoreItems_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define IEnumPStoreItems_AddRef(p) (p)->lpVtbl->AddRef(p)
#define IEnumPStoreItems_Release(p) (p)->lpVtbl->Release(p)
/*** IEnumPStoreItems methods ***/
#define IEnumPStoreItems_Clone(p,a) (p)->lpVtbl->Clone(p,a)
#define IEnumPStoreItems_Next(p,a,b,c) (p)->lpVtbl->Next(p,a,b,c)
#define IEnumPStoreItems_Reset(p) (p)->lpVtbl->Reset(p)
#define IEnumPStoreItems_Skip(p,a) (p)->lpVtbl->Skip(p,a)

#endif

#define IEnumPStoreItems_METHODS \
    ICOM_MSVTABLE_COMPAT_FIELDS \
    /*** IUnknown methods ***/ \
    STDMETHOD_(HRESULT,QueryInterface)(THIS_ REFIID riid, void** ppvObject) PURE; \
    STDMETHOD_(ULONG,AddRef)(THIS) PURE; \
    STDMETHOD_(ULONG,Release)(THIS) PURE; \
    /*** IEnumPStoreItems methods ***/ \
    STDMETHOD_(HRESULT,Clone)(THIS_ IEnumPStoreItems** ppenum) PURE; \
    STDMETHOD_(HRESULT,Next)(THIS_ DWORD celt, LPWSTR* rgelt, DWORD* pceltFetched) PURE; \
    STDMETHOD_(HRESULT,Reset)(THIS) PURE; \
    STDMETHOD_(HRESULT,Skip)(THIS_ DWORD celt) PURE;

HRESULT CALLBACK IEnumPStoreItems_Clone_Proxy(
    IEnumPStoreItems* This,
    IEnumPStoreItems** ppenum);
void __RPC_STUB IEnumPStoreItems_Clone_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IEnumPStoreItems_Next_Proxy(
    IEnumPStoreItems* This,
    DWORD celt,
    LPWSTR* rgelt,
    DWORD* pceltFetched);
void __RPC_STUB IEnumPStoreItems_Next_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IEnumPStoreItems_Reset_Proxy(
    IEnumPStoreItems* This);
void __RPC_STUB IEnumPStoreItems_Reset_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IEnumPStoreItems_Skip_Proxy(
    IEnumPStoreItems* This,
    DWORD celt);
void __RPC_STUB IEnumPStoreItems_Skip_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IEnumPStoreItems_INTERFACE_DEFINED__ */

#ifndef __IEnumPStoreTypes_FWD_DEFINED__
#define __IEnumPStoreTypes_FWD_DEFINED__
typedef struct IEnumPStoreTypes IEnumPStoreTypes;
#endif

/*****************************************************************************
 * IEnumPStoreTypes interface
 */
#ifndef __IEnumPStoreTypes_INTERFACE_DEFINED__
#define __IEnumPStoreTypes_INTERFACE_DEFINED__

#if defined(__cplusplus) && !defined(CINTERFACE)
struct IEnumPStoreTypes : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Clone(
        IEnumPStoreTypes** ppenum) = 0;

    virtual HRESULT STDMETHODCALLTYPE Next(
        DWORD celt,
        LPWSTR* rgelt,
        DWORD* pceltFetched) = 0;

    virtual HRESULT STDMETHODCALLTYPE Reset(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Skip(
        DWORD celt) = 0;

};
#else
typedef struct IEnumPStoreTypesVtbl IEnumPStoreTypesVtbl;
struct IEnumPStoreTypes {
    const IEnumPStoreTypesVtbl* lpVtbl;
};
struct IEnumPStoreTypesVtbl {
    ICOM_MSVTABLE_COMPAT_FIELDS

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumPStoreTypes* This,
        REFIID riid,
        void** ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumPStoreTypes* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumPStoreTypes* This);

    /*** IEnumPStoreTypes methods ***/
    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumPStoreTypes* This,
        IEnumPStoreTypes** ppenum);

    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumPStoreTypes* This,
        DWORD celt,
        LPWSTR* rgelt,
        DWORD* pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumPStoreTypes* This);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumPStoreTypes* This,
        DWORD celt);

};

/*** IUnknown methods ***/
#define IEnumPStoreTypes_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define IEnumPStoreTypes_AddRef(p) (p)->lpVtbl->AddRef(p)
#define IEnumPStoreTypes_Release(p) (p)->lpVtbl->Release(p)
/*** IEnumPStoreTypes methods ***/
#define IEnumPStoreTypes_Clone(p,a) (p)->lpVtbl->Clone(p,a)
#define IEnumPStoreTypes_Next(p,a,b,c) (p)->lpVtbl->Next(p,a,b,c)
#define IEnumPStoreTypes_Reset(p) (p)->lpVtbl->Reset(p)
#define IEnumPStoreTypes_Skip(p,a) (p)->lpVtbl->Skip(p,a)

#endif

#define IEnumPStoreTypes_METHODS \
    ICOM_MSVTABLE_COMPAT_FIELDS \
    /*** IUnknown methods ***/ \
    STDMETHOD_(HRESULT,QueryInterface)(THIS_ REFIID riid, void** ppvObject) PURE; \
    STDMETHOD_(ULONG,AddRef)(THIS) PURE; \
    STDMETHOD_(ULONG,Release)(THIS) PURE; \
    /*** IEnumPStoreTypes methods ***/ \
    STDMETHOD_(HRESULT,Clone)(THIS_ IEnumPStoreTypes** ppenum) PURE; \
    STDMETHOD_(HRESULT,Next)(THIS_ DWORD celt, LPWSTR* rgelt, DWORD* pceltFetched) PURE; \
    STDMETHOD_(HRESULT,Reset)(THIS) PURE; \
    STDMETHOD_(HRESULT,Skip)(THIS_ DWORD celt) PURE;

HRESULT CALLBACK IEnumPStoreTypes_Clone_Proxy(
    IEnumPStoreTypes* This,
    IEnumPStoreTypes** ppenum);
void __RPC_STUB IEnumPStoreTypes_Clone_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IEnumPStoreTypes_Next_Proxy(
    IEnumPStoreTypes* This,
    DWORD celt,
    LPWSTR* rgelt,
    DWORD* pceltFetched);
void __RPC_STUB IEnumPStoreTypes_Next_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IEnumPStoreTypes_Reset_Proxy(
    IEnumPStoreTypes* This);
void __RPC_STUB IEnumPStoreTypes_Reset_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IEnumPStoreTypes_Skip_Proxy(
    IEnumPStoreTypes* This,
    DWORD celt);
void __RPC_STUB IEnumPStoreTypes_Skip_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IEnumPStoreTypes_INTERFACE_DEFINED__ */

#ifndef __IPStore_FWD_DEFINED__
#define __IPStore_FWD_DEFINED__
typedef struct IPStore IPStore;
#endif

/*****************************************************************************
 * IPStore interface
 */
#ifndef __IPStore_INTERFACE_DEFINED__
#define __IPStore_INTERFACE_DEFINED__

#if defined(__cplusplus) && !defined(CINTERFACE)
struct IPStore : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetInfo(
        PPST_PROVIDERINFO* ppProperties) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetProvParam(
        DWORD dwParam,
        DWORD* pcbData,
        BYTE** ppbData,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetProvParam(
        DWORD dwParam,
        DWORD cbData,
        BYTE* pbData,
        DWORD* dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE CreateType(
        PST_KEY Key,
        const GUID* pType,
        PPST_TYPEINFO pInfo,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetTypeInfo(
        PST_KEY Key,
        const GUID* pType,
        PPST_TYPEINFO** ppInfo,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE DeleteType(
        PST_KEY Key,
        const GUID* pType,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE CreateSubtype(
        PST_KEY Key,
        const GUID* pType,
        const GUID* pSubtype,
        PPST_TYPEINFO pInfo,
        PPST_ACCESSRULESET pRules,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSubtypeInfo(
        PST_KEY Key,
        const GUID* pType,
        const GUID* pSubtype,
        PPST_TYPEINFO** ppInfo,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE DeleteSubtype(
        PST_KEY Key,
        const GUID* pType,
        const GUID* pSubtype,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE ReadAccessRuleset(
        PST_KEY Key,
        const GUID* pType,
        const GUID* pSubtype,
        PPST_TYPEINFO pInfo,
        PPST_ACCESSRULESET** ppRules,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteAccessRuleset(
        PST_KEY Key,
        const GUID* pType,
        const GUID* pSubtype,
        PPST_TYPEINFO pInfo,
        PPST_ACCESSRULESET pRules,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE EnumTypes(
        PST_KEY Key,
        DWORD dwFlags,
        IEnumPStoreTypes** ppenum) = 0;

    virtual HRESULT STDMETHODCALLTYPE EnumSubtypes(
        PST_KEY Key,
        const GUID* pType,
        DWORD dwFlags,
        IEnumPStoreTypes** ppenum) = 0;

    virtual HRESULT STDMETHODCALLTYPE DeleteItem(
        PST_KEY Key,
        const GUID* pItemType,
        const GUID* pItemSubType,
        LPCWSTR szItemName,
        PPST_PROMPTINFO pPromptInfo,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE ReadItem(
        PST_KEY Key,
        const GUID* pItemType,
        const GUID* pItemSubtype,
        LPCWSTR szItemName,
        DWORD* cbData,
        BYTE** pbData,
        PPST_PROMPTIFO pPromptInfo,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteItem(
        PST_KEY Key,
        const GUID* pItemType,
        const GUID* pItemSubtype,
        LPCWSTR szItemName,
        DWORD cbData,
        BYTE* ppbData,
        PPST_PROMPTIFO pPromptInfo,
        DWORD dwDefaultConfirmationStyle,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE OpenItem(
        PST_KEY Key,
        const GUID* pItemType,
        const GUID* pItemSubtype,
        LPCWSTR* szItemName,
        PST_ACCESSMODE ModeFlags,
        PPST_PROMPTIFO pProomptInfo,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE CloseItem(
        PST_KEY Key,
        const GUID* pItemType,
        const GUID* pItemSubtype,
        LPCWSTR* szItemName,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE EnumItems(
        PST_KEY Key,
        const GUID* pItemType,
        const GUID* pItemSubtype,
        DWORD dwFlags,
        IEnumPStoreItems** ppenum) = 0;

};
#else
typedef struct IPStoreVtbl IPStoreVtbl;
struct IPStore {
    const IPStoreVtbl* lpVtbl;
};
struct IPStoreVtbl {
    ICOM_MSVTABLE_COMPAT_FIELDS

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPStore* This,
        REFIID riid,
        void** ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPStore* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPStore* This);

    /*** IPStore methods ***/
    HRESULT (STDMETHODCALLTYPE *GetInfo)(
        IPStore* This,
        PPST_PROVIDERINFO* ppProperties);

    HRESULT (STDMETHODCALLTYPE *GetProvParam)(
        IPStore* This,
        DWORD dwParam,
        DWORD* pcbData,
        BYTE** ppbData,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *SetProvParam)(
        IPStore* This,
        DWORD dwParam,
        DWORD cbData,
        BYTE* pbData,
        DWORD* dwFlags);

    HRESULT (STDMETHODCALLTYPE *CreateType)(
        IPStore* This,
        PST_KEY Key,
        const GUID* pType,
        PPST_TYPEINFO pInfo,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IPStore* This,
        PST_KEY Key,
        const GUID* pType,
        PPST_TYPEINFO** ppInfo,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *DeleteType)(
        IPStore* This,
        PST_KEY Key,
        const GUID* pType,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *CreateSubtype)(
        IPStore* This,
        PST_KEY Key,
        const GUID* pType,
        const GUID* pSubtype,
        PPST_TYPEINFO pInfo,
        PPST_ACCESSRULESET pRules,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetSubtypeInfo)(
        IPStore* This,
        PST_KEY Key,
        const GUID* pType,
        const GUID* pSubtype,
        PPST_TYPEINFO** ppInfo,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *DeleteSubtype)(
        IPStore* This,
        PST_KEY Key,
        const GUID* pType,
        const GUID* pSubtype,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *ReadAccessRuleset)(
        IPStore* This,
        PST_KEY Key,
        const GUID* pType,
        const GUID* pSubtype,
        PPST_TYPEINFO pInfo,
        PPST_ACCESSRULESET** ppRules,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *WriteAccessRuleset)(
        IPStore* This,
        PST_KEY Key,
        const GUID* pType,
        const GUID* pSubtype,
        PPST_TYPEINFO pInfo,
        PPST_ACCESSRULESET pRules,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *EnumTypes)(
        IPStore* This,
        PST_KEY Key,
        DWORD dwFlags,
        IEnumPStoreTypes** ppenum);

    HRESULT (STDMETHODCALLTYPE *EnumSubtypes)(
        IPStore* This,
        PST_KEY Key,
        const GUID* pType,
        DWORD dwFlags,
        IEnumPStoreTypes** ppenum);

    HRESULT (STDMETHODCALLTYPE *DeleteItem)(
        IPStore* This,
        PST_KEY Key,
        const GUID* pItemType,
        const GUID* pItemSubType,
        LPCWSTR szItemName,
        PPST_PROMPTINFO pPromptInfo,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *ReadItem)(
        IPStore* This,
        PST_KEY Key,
        const GUID* pItemType,
        const GUID* pItemSubtype,
        LPCWSTR szItemName,
        DWORD* cbData,
        BYTE** pbData,
        PPST_PROMPTIFO pPromptInfo,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *WriteItem)(
        IPStore* This,
        PST_KEY Key,
        const GUID* pItemType,
        const GUID* pItemSubtype,
        LPCWSTR szItemName,
        DWORD cbData,
        BYTE* ppbData,
        PPST_PROMPTIFO pPromptInfo,
        DWORD dwDefaultConfirmationStyle,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *OpenItem)(
        IPStore* This,
        PST_KEY Key,
        const GUID* pItemType,
        const GUID* pItemSubtype,
        LPCWSTR* szItemName,
        PST_ACCESSMODE ModeFlags,
        PPST_PROMPTIFO pProomptInfo,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *CloseItem)(
        IPStore* This,
        PST_KEY Key,
        const GUID* pItemType,
        const GUID* pItemSubtype,
        LPCWSTR* szItemName,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *EnumItems)(
        IPStore* This,
        PST_KEY Key,
        const GUID* pItemType,
        const GUID* pItemSubtype,
        DWORD dwFlags,
        IEnumPStoreItems** ppenum);

};

/*** IUnknown methods ***/
#define IPStore_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define IPStore_AddRef(p) (p)->lpVtbl->AddRef(p)
#define IPStore_Release(p) (p)->lpVtbl->Release(p)
/*** IPStore methods ***/
#define IPStore_GetInfo(p,a) (p)->lpVtbl->GetInfo(p,a)
#define IPStore_GetProvParam(p,a,b,c,d) (p)->lpVtbl->GetProvParam(p,a,b,c,d)
#define IPStore_SetProvParam(p,a,b,c,d) (p)->lpVtbl->SetProvParam(p,a,b,c,d)
#define IPStore_CreateType(p,a,b,c,d) (p)->lpVtbl->CreateType(p,a,b,c,d)
#define IPStore_GetTypeInfo(p,a,b,c,d) (p)->lpVtbl->GetTypeInfo(p,a,b,c,d)
#define IPStore_DeleteType(p,a,b,c) (p)->lpVtbl->DeleteType(p,a,b,c)
#define IPStore_CreateSubtype(p,a,b,c,d,e,f) (p)->lpVtbl->CreateSubtype(p,a,b,c,d,e,f)
#define IPStore_GetSubtypeInfo(p,a,b,c,d,e) (p)->lpVtbl->GetSubtypeInfo(p,a,b,c,d,e)
#define IPStore_DeleteSubtype(p,a,b,c,d) (p)->lpVtbl->DeleteSubtype(p,a,b,c,d)
#define IPStore_ReadAccessRuleset(p,a,b,c,d,e,f) (p)->lpVtbl->ReadAccessRuleset(p,a,b,c,d,e,f)
#define IPStore_WriteAccessRuleset(p,a,b,c,d,e,f) (p)->lpVtbl->WriteAccessRuleset(p,a,b,c,d,e,f)
#define IPStore_EnumTypes(p,a,b,c) (p)->lpVtbl->EnumTypes(p,a,b,c)
#define IPStore_EnumSubtypes(p,a,b,c,d) (p)->lpVtbl->EnumSubtypes(p,a,b,c,d)
#define IPStore_DeleteItem(p,a,b,c,d,e,f) (p)->lpVtbl->DeleteItem(p,a,b,c,d,e,f)
#define IPStore_ReadItem(p,a,b,c,d,e,f,g,h) (p)->lpVtbl->ReadItem(p,a,b,c,d,e,f,g,h)
#define IPStore_WriteItem(p,a,b,c,d,e,f,g,h,i) (p)->lpVtbl->WriteItem(p,a,b,c,d,e,f,g,h,i)
#define IPStore_OpenItem(p,a,b,c,d,e,f,g) (p)->lpVtbl->OpenItem(p,a,b,c,d,e,f,g)
#define IPStore_CloseItem(p,a,b,c,d,e) (p)->lpVtbl->CloseItem(p,a,b,c,d,e)
#define IPStore_EnumItems(p,a,b,c,d,e) (p)->lpVtbl->EnumItems(p,a,b,c,d,e)

#endif

#define IPStore_METHODS \
    ICOM_MSVTABLE_COMPAT_FIELDS \
    /*** IUnknown methods ***/ \
    STDMETHOD_(HRESULT,QueryInterface)(THIS_ REFIID riid, void** ppvObject) PURE; \
    STDMETHOD_(ULONG,AddRef)(THIS) PURE; \
    STDMETHOD_(ULONG,Release)(THIS) PURE; \
    /*** IPStore methods ***/ \
    STDMETHOD_(HRESULT,GetInfo)(THIS_ PPST_PROVIDERINFO* ppProperties) PURE; \
    STDMETHOD_(HRESULT,GetProvParam)(THIS_ DWORD dwParam, DWORD* pcbData, BYTE** ppbData, DWORD dwFlags) PURE; \
    STDMETHOD_(HRESULT,SetProvParam)(THIS_ DWORD dwParam, DWORD cbData, BYTE* pbData, DWORD* dwFlags) PURE; \
    STDMETHOD_(HRESULT,CreateType)(THIS_ PST_KEY Key, const GUID* pType, PPST_TYPEINFO pInfo, DWORD dwFlags) PURE; \
    STDMETHOD_(HRESULT,GetTypeInfo)(THIS_ PST_KEY Key, const GUID* pType, PPST_TYPEINFO** ppInfo, DWORD dwFlags) PURE; \
    STDMETHOD_(HRESULT,DeleteType)(THIS_ PST_KEY Key, const GUID* pType, DWORD dwFlags) PURE; \
    STDMETHOD_(HRESULT,CreateSubtype)(THIS_ PST_KEY Key, const GUID* pType, const GUID* pSubtype, PPST_TYPEINFO pInfo, PPST_ACCESSRULESET pRules, DWORD dwFlags) PURE; \
    STDMETHOD_(HRESULT,GetSubtypeInfo)(THIS_ PST_KEY Key, const GUID* pType, const GUID* pSubtype, PPST_TYPEINFO** ppInfo, DWORD dwFlags) PURE; \
    STDMETHOD_(HRESULT,DeleteSubtype)(THIS_ PST_KEY Key, const GUID* pType, const GUID* pSubtype, DWORD dwFlags) PURE; \
    STDMETHOD_(HRESULT,ReadAccessRuleset)(THIS_ PST_KEY Key, const GUID* pType, const GUID* pSubtype, PPST_TYPEINFO pInfo, PPST_ACCESSRULESET** ppRules, DWORD dwFlags) PURE; \
    STDMETHOD_(HRESULT,WriteAccessRuleset)(THIS_ PST_KEY Key, const GUID* pType, const GUID* pSubtype, PPST_TYPEINFO pInfo, PPST_ACCESSRULESET pRules, DWORD dwFlags) PURE; \
    STDMETHOD_(HRESULT,EnumTypes)(THIS_ PST_KEY Key, DWORD dwFlags, IEnumPStoreTypes** ppenum) PURE; \
    STDMETHOD_(HRESULT,EnumSubtypes)(THIS_ PST_KEY Key, const GUID* pType, DWORD dwFlags, IEnumPStoreTypes** ppenum) PURE; \
    STDMETHOD_(HRESULT,DeleteItem)(THIS_ PST_KEY Key, const GUID* pItemType, const GUID* pItemSubType, LPCWSTR szItemName, PPST_PROMPTINFO pPromptInfo, DWORD dwFlags) PURE; \
    STDMETHOD_(HRESULT,ReadItem)(THIS_ PST_KEY Key, const GUID* pItemType, const GUID* pItemSubtype, LPCWSTR szItemName, DWORD* cbData, BYTE** pbData, PPST_PROMPTIFO pPromptInfo, DWORD dwFlags) PURE; \
    STDMETHOD_(HRESULT,WriteItem)(THIS_ PST_KEY Key, const GUID* pItemType, const GUID* pItemSubtype, LPCWSTR szItemName, DWORD cbData, BYTE* ppbData, PPST_PROMPTIFO pPromptInfo, DWORD dwDefaultConfirmationStyle, DWORD dwFlags) PURE; \
    STDMETHOD_(HRESULT,OpenItem)(THIS_ PST_KEY Key, const GUID* pItemType, const GUID* pItemSubtype, LPCWSTR* szItemName, PST_ACCESSMODE ModeFlags, PPST_PROMPTIFO pProomptInfo, DWORD dwFlags) PURE; \
    STDMETHOD_(HRESULT,CloseItem)(THIS_ PST_KEY Key, const GUID* pItemType, const GUID* pItemSubtype, LPCWSTR* szItemName, DWORD dwFlags) PURE; \
    STDMETHOD_(HRESULT,EnumItems)(THIS_ PST_KEY Key, const GUID* pItemType, const GUID* pItemSubtype, DWORD dwFlags, IEnumPStoreItems** ppenum) PURE;

HRESULT CALLBACK IPStore_GetInfo_Proxy(
    IPStore* This,
    PPST_PROVIDERINFO* ppProperties);
void __RPC_STUB IPStore_GetInfo_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IPStore_GetProvParam_Proxy(
    IPStore* This,
    DWORD dwParam,
    DWORD* pcbData,
    BYTE** ppbData,
    DWORD dwFlags);
void __RPC_STUB IPStore_GetProvParam_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IPStore_SetProvParam_Proxy(
    IPStore* This,
    DWORD dwParam,
    DWORD cbData,
    BYTE* pbData,
    DWORD* dwFlags);
void __RPC_STUB IPStore_SetProvParam_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IPStore_CreateType_Proxy(
    IPStore* This,
    PST_KEY Key,
    const GUID* pType,
    PPST_TYPEINFO pInfo,
    DWORD dwFlags);
void __RPC_STUB IPStore_CreateType_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IPStore_GetTypeInfo_Proxy(
    IPStore* This,
    PST_KEY Key,
    const GUID* pType,
    PPST_TYPEINFO** ppInfo,
    DWORD dwFlags);
void __RPC_STUB IPStore_GetTypeInfo_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IPStore_DeleteType_Proxy(
    IPStore* This,
    PST_KEY Key,
    const GUID* pType,
    DWORD dwFlags);
void __RPC_STUB IPStore_DeleteType_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IPStore_CreateSubtype_Proxy(
    IPStore* This,
    PST_KEY Key,
    const GUID* pType,
    const GUID* pSubtype,
    PPST_TYPEINFO pInfo,
    PPST_ACCESSRULESET pRules,
    DWORD dwFlags);
void __RPC_STUB IPStore_CreateSubtype_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IPStore_GetSubtypeInfo_Proxy(
    IPStore* This,
    PST_KEY Key,
    const GUID* pType,
    const GUID* pSubtype,
    PPST_TYPEINFO** ppInfo,
    DWORD dwFlags);
void __RPC_STUB IPStore_GetSubtypeInfo_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IPStore_DeleteSubtype_Proxy(
    IPStore* This,
    PST_KEY Key,
    const GUID* pType,
    const GUID* pSubtype,
    DWORD dwFlags);
void __RPC_STUB IPStore_DeleteSubtype_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IPStore_ReadAccessRuleset_Proxy(
    IPStore* This,
    PST_KEY Key,
    const GUID* pType,
    const GUID* pSubtype,
    PPST_TYPEINFO pInfo,
    PPST_ACCESSRULESET** ppRules,
    DWORD dwFlags);
void __RPC_STUB IPStore_ReadAccessRuleset_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IPStore_WriteAccessRuleset_Proxy(
    IPStore* This,
    PST_KEY Key,
    const GUID* pType,
    const GUID* pSubtype,
    PPST_TYPEINFO pInfo,
    PPST_ACCESSRULESET pRules,
    DWORD dwFlags);
void __RPC_STUB IPStore_WriteAccessRuleset_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IPStore_EnumTypes_Proxy(
    IPStore* This,
    PST_KEY Key,
    DWORD dwFlags,
    IEnumPStoreTypes** ppenum);
void __RPC_STUB IPStore_EnumTypes_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IPStore_EnumSubtypes_Proxy(
    IPStore* This,
    PST_KEY Key,
    const GUID* pType,
    DWORD dwFlags,
    IEnumPStoreTypes** ppenum);
void __RPC_STUB IPStore_EnumSubtypes_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IPStore_DeleteItem_Proxy(
    IPStore* This,
    PST_KEY Key,
    const GUID* pItemType,
    const GUID* pItemSubType,
    LPCWSTR szItemName,
    PPST_PROMPTINFO pPromptInfo,
    DWORD dwFlags);
void __RPC_STUB IPStore_DeleteItem_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IPStore_ReadItem_Proxy(
    IPStore* This,
    PST_KEY Key,
    const GUID* pItemType,
    const GUID* pItemSubtype,
    LPCWSTR szItemName,
    DWORD* cbData,
    BYTE** pbData,
    PPST_PROMPTIFO pPromptInfo,
    DWORD dwFlags);
void __RPC_STUB IPStore_ReadItem_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IPStore_WriteItem_Proxy(
    IPStore* This,
    PST_KEY Key,
    const GUID* pItemType,
    const GUID* pItemSubtype,
    LPCWSTR szItemName,
    DWORD cbData,
    BYTE* ppbData,
    PPST_PROMPTIFO pPromptInfo,
    DWORD dwDefaultConfirmationStyle,
    DWORD dwFlags);
void __RPC_STUB IPStore_WriteItem_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IPStore_OpenItem_Proxy(
    IPStore* This,
    PST_KEY Key,
    const GUID* pItemType,
    const GUID* pItemSubtype,
    LPCWSTR* szItemName,
    PST_ACCESSMODE ModeFlags,
    PPST_PROMPTIFO pProomptInfo,
    DWORD dwFlags);
void __RPC_STUB IPStore_OpenItem_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IPStore_CloseItem_Proxy(
    IPStore* This,
    PST_KEY Key,
    const GUID* pItemType,
    const GUID* pItemSubtype,
    LPCWSTR* szItemName,
    DWORD dwFlags);
void __RPC_STUB IPStore_CloseItem_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IPStore_EnumItems_Proxy(
    IPStore* This,
    PST_KEY Key,
    const GUID* pItemType,
    const GUID* pItemSubtype,
    DWORD dwFlags,
    IEnumPStoreItems** ppenum);
void __RPC_STUB IPStore_EnumItems_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IPStore_INTERFACE_DEFINED__ */

#ifdef __cplusplus
}
#endif
#endif /* __WIDL_PSTORE_H */

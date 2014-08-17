

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jan 10 23:46:31 2011
 */
/* Compiler settings for .\ASocket.idl:
    Oicf, W1, Zp8, env=Win64 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ASocket_h__
#define __ASocket_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IRSh_FWD_DEFINED__
#define __IRSh_FWD_DEFINED__
typedef interface IRSh IRSh;
#endif 	/* __IRSh_FWD_DEFINED__ */


#ifndef __INtp_FWD_DEFINED__
#define __INtp_FWD_DEFINED__
typedef interface INtp INtp;
#endif 	/* __INtp_FWD_DEFINED__ */


#ifndef __IWOL_FWD_DEFINED__
#define __IWOL_FWD_DEFINED__
typedef interface IWOL IWOL;
#endif 	/* __IWOL_FWD_DEFINED__ */


#ifndef __IIcmp_FWD_DEFINED__
#define __IIcmp_FWD_DEFINED__
typedef interface IIcmp IIcmp;
#endif 	/* __IIcmp_FWD_DEFINED__ */


#ifndef __IHttp_FWD_DEFINED__
#define __IHttp_FWD_DEFINED__
typedef interface IHttp IHttp;
#endif 	/* __IHttp_FWD_DEFINED__ */


#ifndef __ISocketConstants_FWD_DEFINED__
#define __ISocketConstants_FWD_DEFINED__
typedef interface ISocketConstants ISocketConstants;
#endif 	/* __ISocketConstants_FWD_DEFINED__ */


#ifndef __ISnmpManager_FWD_DEFINED__
#define __ISnmpManager_FWD_DEFINED__
typedef interface ISnmpManager ISnmpManager;
#endif 	/* __ISnmpManager_FWD_DEFINED__ */


#ifndef __ISnmpObject_FWD_DEFINED__
#define __ISnmpObject_FWD_DEFINED__
typedef interface ISnmpObject ISnmpObject;
#endif 	/* __ISnmpObject_FWD_DEFINED__ */


#ifndef __ISnmpTrap_FWD_DEFINED__
#define __ISnmpTrap_FWD_DEFINED__
typedef interface ISnmpTrap ISnmpTrap;
#endif 	/* __ISnmpTrap_FWD_DEFINED__ */


#ifndef __ISnmpTrapManager_FWD_DEFINED__
#define __ISnmpTrapManager_FWD_DEFINED__
typedef interface ISnmpTrapManager ISnmpTrapManager;
#endif 	/* __ISnmpTrapManager_FWD_DEFINED__ */


#ifndef __IFtpServer_FWD_DEFINED__
#define __IFtpServer_FWD_DEFINED__
typedef interface IFtpServer IFtpServer;
#endif 	/* __IFtpServer_FWD_DEFINED__ */


#ifndef __IFtpFile_FWD_DEFINED__
#define __IFtpFile_FWD_DEFINED__
typedef interface IFtpFile IFtpFile;
#endif 	/* __IFtpFile_FWD_DEFINED__ */


#ifndef __IUdp_FWD_DEFINED__
#define __IUdp_FWD_DEFINED__
typedef interface IUdp IUdp;
#endif 	/* __IUdp_FWD_DEFINED__ */


#ifndef __ITcp_FWD_DEFINED__
#define __ITcp_FWD_DEFINED__
typedef interface ITcp ITcp;
#endif 	/* __ITcp_FWD_DEFINED__ */


#ifndef __IIPtoCountry_FWD_DEFINED__
#define __IIPtoCountry_FWD_DEFINED__
typedef interface IIPtoCountry IIPtoCountry;
#endif 	/* __IIPtoCountry_FWD_DEFINED__ */


#ifndef __IDnsServer_FWD_DEFINED__
#define __IDnsServer_FWD_DEFINED__
typedef interface IDnsServer IDnsServer;
#endif 	/* __IDnsServer_FWD_DEFINED__ */


#ifndef __IDnsRecord_FWD_DEFINED__
#define __IDnsRecord_FWD_DEFINED__
typedef interface IDnsRecord IDnsRecord;
#endif 	/* __IDnsRecord_FWD_DEFINED__ */


#ifndef __ISsh_FWD_DEFINED__
#define __ISsh_FWD_DEFINED__
typedef interface ISsh ISsh;
#endif 	/* __ISsh_FWD_DEFINED__ */


#ifndef __ISnmpMibBrowser_FWD_DEFINED__
#define __ISnmpMibBrowser_FWD_DEFINED__
typedef interface ISnmpMibBrowser ISnmpMibBrowser;
#endif 	/* __ISnmpMibBrowser_FWD_DEFINED__ */


#ifndef __ITftpServer_FWD_DEFINED__
#define __ITftpServer_FWD_DEFINED__
typedef interface ITftpServer ITftpServer;
#endif 	/* __ITftpServer_FWD_DEFINED__ */


#ifndef __IMsn_FWD_DEFINED__
#define __IMsn_FWD_DEFINED__
typedef interface IMsn IMsn;
#endif 	/* __IMsn_FWD_DEFINED__ */


#ifndef __IRadius_FWD_DEFINED__
#define __IRadius_FWD_DEFINED__
typedef interface IRadius IRadius;
#endif 	/* __IRadius_FWD_DEFINED__ */


#ifndef __IScp_FWD_DEFINED__
#define __IScp_FWD_DEFINED__
typedef interface IScp IScp;
#endif 	/* __IScp_FWD_DEFINED__ */


#ifndef __ISFtp_FWD_DEFINED__
#define __ISFtp_FWD_DEFINED__
typedef interface ISFtp ISFtp;
#endif 	/* __ISFtp_FWD_DEFINED__ */


#ifndef __ISFtpFile_FWD_DEFINED__
#define __ISFtpFile_FWD_DEFINED__
typedef interface ISFtpFile ISFtpFile;
#endif 	/* __ISFtpFile_FWD_DEFINED__ */


#ifndef __IHttpEx_FWD_DEFINED__
#define __IHttpEx_FWD_DEFINED__
typedef interface IHttpEx IHttpEx;
#endif 	/* __IHttpEx_FWD_DEFINED__ */


#ifndef __RSh_FWD_DEFINED__
#define __RSh_FWD_DEFINED__

#ifdef __cplusplus
typedef class RSh RSh;
#else
typedef struct RSh RSh;
#endif /* __cplusplus */

#endif 	/* __RSh_FWD_DEFINED__ */


#ifndef __Ntp_FWD_DEFINED__
#define __Ntp_FWD_DEFINED__

#ifdef __cplusplus
typedef class Ntp Ntp;
#else
typedef struct Ntp Ntp;
#endif /* __cplusplus */

#endif 	/* __Ntp_FWD_DEFINED__ */


#ifndef __WOL_FWD_DEFINED__
#define __WOL_FWD_DEFINED__

#ifdef __cplusplus
typedef class WOL WOL;
#else
typedef struct WOL WOL;
#endif /* __cplusplus */

#endif 	/* __WOL_FWD_DEFINED__ */


#ifndef __Icmp_FWD_DEFINED__
#define __Icmp_FWD_DEFINED__

#ifdef __cplusplus
typedef class Icmp Icmp;
#else
typedef struct Icmp Icmp;
#endif /* __cplusplus */

#endif 	/* __Icmp_FWD_DEFINED__ */


#ifndef __Http_FWD_DEFINED__
#define __Http_FWD_DEFINED__

#ifdef __cplusplus
typedef class Http Http;
#else
typedef struct Http Http;
#endif /* __cplusplus */

#endif 	/* __Http_FWD_DEFINED__ */


#ifndef __SocketConstants_FWD_DEFINED__
#define __SocketConstants_FWD_DEFINED__

#ifdef __cplusplus
typedef class SocketConstants SocketConstants;
#else
typedef struct SocketConstants SocketConstants;
#endif /* __cplusplus */

#endif 	/* __SocketConstants_FWD_DEFINED__ */


#ifndef __SnmpManager_FWD_DEFINED__
#define __SnmpManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class SnmpManager SnmpManager;
#else
typedef struct SnmpManager SnmpManager;
#endif /* __cplusplus */

#endif 	/* __SnmpManager_FWD_DEFINED__ */


#ifndef __SnmpTrap_FWD_DEFINED__
#define __SnmpTrap_FWD_DEFINED__

#ifdef __cplusplus
typedef class SnmpTrap SnmpTrap;
#else
typedef struct SnmpTrap SnmpTrap;
#endif /* __cplusplus */

#endif 	/* __SnmpTrap_FWD_DEFINED__ */


#ifndef __SnmpTrapManager_FWD_DEFINED__
#define __SnmpTrapManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class SnmpTrapManager SnmpTrapManager;
#else
typedef struct SnmpTrapManager SnmpTrapManager;
#endif /* __cplusplus */

#endif 	/* __SnmpTrapManager_FWD_DEFINED__ */


#ifndef __FtpServer_FWD_DEFINED__
#define __FtpServer_FWD_DEFINED__

#ifdef __cplusplus
typedef class FtpServer FtpServer;
#else
typedef struct FtpServer FtpServer;
#endif /* __cplusplus */

#endif 	/* __FtpServer_FWD_DEFINED__ */


#ifndef __FtpFile_FWD_DEFINED__
#define __FtpFile_FWD_DEFINED__

#ifdef __cplusplus
typedef class FtpFile FtpFile;
#else
typedef struct FtpFile FtpFile;
#endif /* __cplusplus */

#endif 	/* __FtpFile_FWD_DEFINED__ */


#ifndef __Udp_FWD_DEFINED__
#define __Udp_FWD_DEFINED__

#ifdef __cplusplus
typedef class Udp Udp;
#else
typedef struct Udp Udp;
#endif /* __cplusplus */

#endif 	/* __Udp_FWD_DEFINED__ */


#ifndef __SnmpObject_FWD_DEFINED__
#define __SnmpObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class SnmpObject SnmpObject;
#else
typedef struct SnmpObject SnmpObject;
#endif /* __cplusplus */

#endif 	/* __SnmpObject_FWD_DEFINED__ */


#ifndef __Tcp_FWD_DEFINED__
#define __Tcp_FWD_DEFINED__

#ifdef __cplusplus
typedef class Tcp Tcp;
#else
typedef struct Tcp Tcp;
#endif /* __cplusplus */

#endif 	/* __Tcp_FWD_DEFINED__ */


#ifndef __IPtoCountry_FWD_DEFINED__
#define __IPtoCountry_FWD_DEFINED__

#ifdef __cplusplus
typedef class IPtoCountry IPtoCountry;
#else
typedef struct IPtoCountry IPtoCountry;
#endif /* __cplusplus */

#endif 	/* __IPtoCountry_FWD_DEFINED__ */


#ifndef __DnsServer_FWD_DEFINED__
#define __DnsServer_FWD_DEFINED__

#ifdef __cplusplus
typedef class DnsServer DnsServer;
#else
typedef struct DnsServer DnsServer;
#endif /* __cplusplus */

#endif 	/* __DnsServer_FWD_DEFINED__ */


#ifndef __DnsRecord_FWD_DEFINED__
#define __DnsRecord_FWD_DEFINED__

#ifdef __cplusplus
typedef class DnsRecord DnsRecord;
#else
typedef struct DnsRecord DnsRecord;
#endif /* __cplusplus */

#endif 	/* __DnsRecord_FWD_DEFINED__ */


#ifndef __Ssh_FWD_DEFINED__
#define __Ssh_FWD_DEFINED__

#ifdef __cplusplus
typedef class Ssh Ssh;
#else
typedef struct Ssh Ssh;
#endif /* __cplusplus */

#endif 	/* __Ssh_FWD_DEFINED__ */


#ifndef __SnmpMibBrowser_FWD_DEFINED__
#define __SnmpMibBrowser_FWD_DEFINED__

#ifdef __cplusplus
typedef class SnmpMibBrowser SnmpMibBrowser;
#else
typedef struct SnmpMibBrowser SnmpMibBrowser;
#endif /* __cplusplus */

#endif 	/* __SnmpMibBrowser_FWD_DEFINED__ */


#ifndef __TftpServer_FWD_DEFINED__
#define __TftpServer_FWD_DEFINED__

#ifdef __cplusplus
typedef class TftpServer TftpServer;
#else
typedef struct TftpServer TftpServer;
#endif /* __cplusplus */

#endif 	/* __TftpServer_FWD_DEFINED__ */


#ifndef __Msn_FWD_DEFINED__
#define __Msn_FWD_DEFINED__

#ifdef __cplusplus
typedef class Msn Msn;
#else
typedef struct Msn Msn;
#endif /* __cplusplus */

#endif 	/* __Msn_FWD_DEFINED__ */


#ifndef __Radius_FWD_DEFINED__
#define __Radius_FWD_DEFINED__

#ifdef __cplusplus
typedef class Radius Radius;
#else
typedef struct Radius Radius;
#endif /* __cplusplus */

#endif 	/* __Radius_FWD_DEFINED__ */


#ifndef __Scp_FWD_DEFINED__
#define __Scp_FWD_DEFINED__

#ifdef __cplusplus
typedef class Scp Scp;
#else
typedef struct Scp Scp;
#endif /* __cplusplus */

#endif 	/* __Scp_FWD_DEFINED__ */


#ifndef __SFtp_FWD_DEFINED__
#define __SFtp_FWD_DEFINED__

#ifdef __cplusplus
typedef class SFtp SFtp;
#else
typedef struct SFtp SFtp;
#endif /* __cplusplus */

#endif 	/* __SFtp_FWD_DEFINED__ */


#ifndef __SFtpFile_FWD_DEFINED__
#define __SFtpFile_FWD_DEFINED__

#ifdef __cplusplus
typedef class SFtpFile SFtpFile;
#else
typedef struct SFtpFile SFtpFile;
#endif /* __cplusplus */

#endif 	/* __SFtpFile_FWD_DEFINED__ */


#ifndef __HttpEx_FWD_DEFINED__
#define __HttpEx_FWD_DEFINED__

#ifdef __cplusplus
typedef class HttpEx HttpEx;
#else
typedef struct HttpEx HttpEx;
#endif /* __cplusplus */

#endif 	/* __HttpEx_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IRSh_INTERFACE_DEFINED__
#define __IRSh_INTERFACE_DEFINED__

/* interface IRSh */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IRSh;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("844E4159-8D81-466B-9D13-7CE8098D4A6B")
    IRSh : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            long ErrorCode,
            /* [retval][out] */ BSTR *__MIDL__IRSh0000) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Host( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Host( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UserName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_UserName( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Command( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Command( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ScriptTimeOut( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ScriptTimeOut( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_StdOut( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_StdErr( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Run( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Sleep( 
            LONG lMilliSeconds) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRShVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRSh * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRSh * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRSh * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRSh * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRSh * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRSh * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRSh * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IRSh * This,
            /* [retval][out] */ long *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IRSh * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            IRSh * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            IRSh * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            IRSh * This,
            /* [in] */ long newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            IRSh * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            IRSh * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            IRSh * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            IRSh * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IRSh * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IRSh * This,
            long ErrorCode,
            /* [retval][out] */ BSTR *__MIDL__IRSh0000);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IRSh * This,
            BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Host )( 
            IRSh * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Host )( 
            IRSh * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            IRSh * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserName )( 
            IRSh * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Command )( 
            IRSh * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Command )( 
            IRSh * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScriptTimeOut )( 
            IRSh * This,
            /* [retval][out] */ long *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScriptTimeOut )( 
            IRSh * This,
            /* [in] */ long newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StdOut )( 
            IRSh * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StdErr )( 
            IRSh * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Run )( 
            IRSh * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Sleep )( 
            IRSh * This,
            LONG lMilliSeconds);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IRSh * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IRShVtbl;

    interface IRSh
    {
        CONST_VTBL struct IRShVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRSh_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRSh_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRSh_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRSh_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRSh_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRSh_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRSh_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRSh_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define IRSh_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define IRSh_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define IRSh_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define IRSh_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define IRSh_get_LogFile(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFile(This,pVal) ) 

#define IRSh_put_LogFile(This,newVal)	\
    ( (This)->lpVtbl -> put_LogFile(This,newVal) ) 

#define IRSh_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define IRSh_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define IRSh_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IRSh_GetErrorDescription(This,ErrorCode,__MIDL__IRSh0000)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,ErrorCode,__MIDL__IRSh0000) ) 

#define IRSh_Activate(This,bstrRegKey,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,bstrRegKey,bPersistent) ) 

#define IRSh_get_Host(This,pVal)	\
    ( (This)->lpVtbl -> get_Host(This,pVal) ) 

#define IRSh_put_Host(This,newVal)	\
    ( (This)->lpVtbl -> put_Host(This,newVal) ) 

#define IRSh_get_UserName(This,pVal)	\
    ( (This)->lpVtbl -> get_UserName(This,pVal) ) 

#define IRSh_put_UserName(This,newVal)	\
    ( (This)->lpVtbl -> put_UserName(This,newVal) ) 

#define IRSh_get_Command(This,pVal)	\
    ( (This)->lpVtbl -> get_Command(This,pVal) ) 

#define IRSh_put_Command(This,newVal)	\
    ( (This)->lpVtbl -> put_Command(This,newVal) ) 

#define IRSh_get_ScriptTimeOut(This,pVal)	\
    ( (This)->lpVtbl -> get_ScriptTimeOut(This,pVal) ) 

#define IRSh_put_ScriptTimeOut(This,newVal)	\
    ( (This)->lpVtbl -> put_ScriptTimeOut(This,newVal) ) 

#define IRSh_get_StdOut(This,pVal)	\
    ( (This)->lpVtbl -> get_StdOut(This,pVal) ) 

#define IRSh_get_StdErr(This,pVal)	\
    ( (This)->lpVtbl -> get_StdErr(This,pVal) ) 

#define IRSh_Run(This)	\
    ( (This)->lpVtbl -> Run(This) ) 

#define IRSh_Sleep(This,lMilliSeconds)	\
    ( (This)->lpVtbl -> Sleep(This,lMilliSeconds) ) 

#define IRSh_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRSh_INTERFACE_DEFINED__ */


#ifndef __INtp_INTERFACE_DEFINED__
#define __INtp_INTERFACE_DEFINED__

/* interface INtp */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_INtp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CC932613-BE5F-43B3-9955-A40E1A8D736C")
    INtp : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            long ErrorCode,
            /* [retval][out] */ BSTR *__MIDL__INtp0000) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Year( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Month( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Day( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Hour( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Minute( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Second( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LocalOffsetSeconds( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetTime( 
            /* [in] */ BSTR TimeServer) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Sleep( 
            LONG lMilliSeconds) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INtpVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INtp * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INtp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INtp * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INtp * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INtp * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INtp * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INtp * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            INtp * This,
            /* [retval][out] */ long *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            INtp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            INtp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            INtp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            INtp * This,
            /* [in] */ long newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            INtp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            INtp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            INtp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            INtp * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            INtp * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            INtp * This,
            long ErrorCode,
            /* [retval][out] */ BSTR *__MIDL__INtp0000);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            INtp * This,
            BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Year )( 
            INtp * This,
            /* [retval][out] */ long *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Month )( 
            INtp * This,
            /* [retval][out] */ long *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Day )( 
            INtp * This,
            /* [retval][out] */ long *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Hour )( 
            INtp * This,
            /* [retval][out] */ long *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Minute )( 
            INtp * This,
            /* [retval][out] */ long *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Second )( 
            INtp * This,
            /* [retval][out] */ long *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LocalOffsetSeconds )( 
            INtp * This,
            /* [retval][out] */ long *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetTime )( 
            INtp * This,
            /* [in] */ BSTR TimeServer);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Sleep )( 
            INtp * This,
            LONG lMilliSeconds);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            INtp * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } INtpVtbl;

    interface INtp
    {
        CONST_VTBL struct INtpVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INtp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INtp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INtp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INtp_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INtp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INtp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INtp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INtp_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define INtp_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define INtp_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define INtp_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define INtp_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define INtp_get_LogFile(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFile(This,pVal) ) 

#define INtp_put_LogFile(This,newVal)	\
    ( (This)->lpVtbl -> put_LogFile(This,newVal) ) 

#define INtp_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define INtp_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define INtp_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define INtp_GetErrorDescription(This,ErrorCode,__MIDL__INtp0000)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,ErrorCode,__MIDL__INtp0000) ) 

#define INtp_Activate(This,bstrRegKey,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,bstrRegKey,bPersistent) ) 

#define INtp_get_Year(This,pVal)	\
    ( (This)->lpVtbl -> get_Year(This,pVal) ) 

#define INtp_get_Month(This,pVal)	\
    ( (This)->lpVtbl -> get_Month(This,pVal) ) 

#define INtp_get_Day(This,pVal)	\
    ( (This)->lpVtbl -> get_Day(This,pVal) ) 

#define INtp_get_Hour(This,pVal)	\
    ( (This)->lpVtbl -> get_Hour(This,pVal) ) 

#define INtp_get_Minute(This,pVal)	\
    ( (This)->lpVtbl -> get_Minute(This,pVal) ) 

#define INtp_get_Second(This,pVal)	\
    ( (This)->lpVtbl -> get_Second(This,pVal) ) 

#define INtp_get_LocalOffsetSeconds(This,pVal)	\
    ( (This)->lpVtbl -> get_LocalOffsetSeconds(This,pVal) ) 

#define INtp_GetTime(This,TimeServer)	\
    ( (This)->lpVtbl -> GetTime(This,TimeServer) ) 

#define INtp_Sleep(This,lMilliSeconds)	\
    ( (This)->lpVtbl -> Sleep(This,lMilliSeconds) ) 

#define INtp_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INtp_INTERFACE_DEFINED__ */


#ifndef __IWOL_INTERFACE_DEFINED__
#define __IWOL_INTERFACE_DEFINED__

/* interface IWOL */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWOL;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("18AD1230-A4C9-4A48-98B3-B3C669D28001")
    IWOL : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            long ErrorCode,
            /* [retval][out] */ BSTR *__MIDL__IWOL0000) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE WakeUp( 
            BSTR MacAddress) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Sleep( 
            LONG lMilliSeconds) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWOLVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWOL * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWOL * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWOL * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWOL * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWOL * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWOL * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWOL * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IWOL * This,
            /* [retval][out] */ long *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IWOL * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            IWOL * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            IWOL * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            IWOL * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            IWOL * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            IWOL * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            IWOL * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            IWOL * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IWOL * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IWOL * This,
            long ErrorCode,
            /* [retval][out] */ BSTR *__MIDL__IWOL0000);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IWOL * This,
            BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *WakeUp )( 
            IWOL * This,
            BSTR MacAddress);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Sleep )( 
            IWOL * This,
            LONG lMilliSeconds);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IWOL * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IWOLVtbl;

    interface IWOL
    {
        CONST_VTBL struct IWOLVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWOL_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWOL_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWOL_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWOL_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWOL_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWOL_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWOL_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWOL_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define IWOL_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define IWOL_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define IWOL_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define IWOL_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define IWOL_get_LogFile(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFile(This,pVal) ) 

#define IWOL_put_LogFile(This,newVal)	\
    ( (This)->lpVtbl -> put_LogFile(This,newVal) ) 

#define IWOL_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define IWOL_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define IWOL_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IWOL_GetErrorDescription(This,ErrorCode,__MIDL__IWOL0000)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,ErrorCode,__MIDL__IWOL0000) ) 

#define IWOL_Activate(This,bstrRegKey,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,bstrRegKey,bPersistent) ) 

#define IWOL_WakeUp(This,MacAddress)	\
    ( (This)->lpVtbl -> WakeUp(This,MacAddress) ) 

#define IWOL_Sleep(This,lMilliSeconds)	\
    ( (This)->lpVtbl -> Sleep(This,lMilliSeconds) ) 

#define IWOL_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWOL_INTERFACE_DEFINED__ */


#ifndef __IIcmp_INTERFACE_DEFINED__
#define __IIcmp_INTERFACE_DEFINED__

/* interface IIcmp */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IIcmp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A92A390F-E285-4A8E-ACE1-C9981CE951E9")
    IIcmp : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            long ErrorCode,
            /* [retval][out] */ BSTR *__MIDL__IIcmp0000) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastDuration( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Ttl( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Ttl( 
            /* [in] */ long Ttl) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastTtl( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BufferSize( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_BufferSize( 
            /* [in] */ long newval) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Ping( 
            /* [in] */ BSTR DestinationHost,
            /* [in] */ long TimeoutMsecs) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Sleep( 
            long MilliSecs) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IIcmpVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIcmp * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIcmp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIcmp * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIcmp * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIcmp * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIcmp * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIcmp * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IIcmp * This,
            /* [retval][out] */ long *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IIcmp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            IIcmp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            IIcmp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            IIcmp * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            IIcmp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            IIcmp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            IIcmp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            IIcmp * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IIcmp * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IIcmp * This,
            long ErrorCode,
            /* [retval][out] */ BSTR *__MIDL__IIcmp0000);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IIcmp * This,
            BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastDuration )( 
            IIcmp * This,
            /* [retval][out] */ long *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Ttl )( 
            IIcmp * This,
            /* [retval][out] */ long *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Ttl )( 
            IIcmp * This,
            /* [in] */ long Ttl);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastTtl )( 
            IIcmp * This,
            /* [retval][out] */ long *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BufferSize )( 
            IIcmp * This,
            /* [retval][out] */ long *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BufferSize )( 
            IIcmp * This,
            /* [in] */ long newval);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Ping )( 
            IIcmp * This,
            /* [in] */ BSTR DestinationHost,
            /* [in] */ long TimeoutMsecs);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Sleep )( 
            IIcmp * This,
            long MilliSecs);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IIcmp * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IIcmpVtbl;

    interface IIcmp
    {
        CONST_VTBL struct IIcmpVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIcmp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIcmp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIcmp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIcmp_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIcmp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIcmp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIcmp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IIcmp_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define IIcmp_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define IIcmp_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define IIcmp_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define IIcmp_put_Reserved(This,Value)	\
    ( (This)->lpVtbl -> put_Reserved(This,Value) ) 

#define IIcmp_get_LogFile(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFile(This,pVal) ) 

#define IIcmp_put_LogFile(This,newVal)	\
    ( (This)->lpVtbl -> put_LogFile(This,newVal) ) 

#define IIcmp_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define IIcmp_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define IIcmp_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IIcmp_GetErrorDescription(This,ErrorCode,__MIDL__IIcmp0000)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,ErrorCode,__MIDL__IIcmp0000) ) 

#define IIcmp_Activate(This,bstrRegKey,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,bstrRegKey,bPersistent) ) 

#define IIcmp_get_LastDuration(This,pVal)	\
    ( (This)->lpVtbl -> get_LastDuration(This,pVal) ) 

#define IIcmp_get_Ttl(This,pVal)	\
    ( (This)->lpVtbl -> get_Ttl(This,pVal) ) 

#define IIcmp_put_Ttl(This,Ttl)	\
    ( (This)->lpVtbl -> put_Ttl(This,Ttl) ) 

#define IIcmp_get_LastTtl(This,pVal)	\
    ( (This)->lpVtbl -> get_LastTtl(This,pVal) ) 

#define IIcmp_get_BufferSize(This,pVal)	\
    ( (This)->lpVtbl -> get_BufferSize(This,pVal) ) 

#define IIcmp_put_BufferSize(This,newval)	\
    ( (This)->lpVtbl -> put_BufferSize(This,newval) ) 

#define IIcmp_Ping(This,DestinationHost,TimeoutMsecs)	\
    ( (This)->lpVtbl -> Ping(This,DestinationHost,TimeoutMsecs) ) 

#define IIcmp_Sleep(This,MilliSecs)	\
    ( (This)->lpVtbl -> Sleep(This,MilliSecs) ) 

#define IIcmp_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIcmp_INTERFACE_DEFINED__ */


#ifndef __IHttp_INTERFACE_DEFINED__
#define __IHttp_INTERFACE_DEFINED__

/* interface IHttp */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IHttp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F0938A42-5986-4AD2-A548-9F087D450312")
    IHttp : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            long ErrorCode,
            /* [retval][out] */ BSTR *__MIDL__IHttp0000) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HttpLibrary( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_HttpLibrary( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_WebAccount( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_WebAccount( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_WebPassword( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_WebPassword( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UseSSL( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_UseSSL( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UsePost( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_UsePost( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PostData( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PostData( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProxyServer( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProxyServer( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProxyAccount( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProxyAccount( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProxyPassword( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProxyPassword( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RequestTimeout( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RequestTimeout( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_KeepAlive( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_KeepAlive( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Connect( 
            BSTR Url) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Disconnect( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ReadData( 
            /* [retval][out] */ BSTR *__MIDL__IHttp0001) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE HasData( 
            /* [retval][out] */ BOOL *pbHasData) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ReadHeader( 
            /* [in] */ LONG lHeader,
            /* [retval][out] */ BSTR *pbstrHeader) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Sleep( 
            LONG lMilliSeconds) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IHttpVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IHttp * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IHttp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IHttp * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IHttp * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IHttp * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IHttp * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IHttp * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IHttp * This,
            /* [retval][out] */ long *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            IHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            IHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            IHttp * This,
            /* [in] */ long newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            IHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            IHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            IHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            IHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IHttp * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IHttp * This,
            long ErrorCode,
            /* [retval][out] */ BSTR *__MIDL__IHttp0000);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IHttp * This,
            BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HttpLibrary )( 
            IHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HttpLibrary )( 
            IHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WebAccount )( 
            IHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WebAccount )( 
            IHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WebPassword )( 
            IHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WebPassword )( 
            IHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseSSL )( 
            IHttp * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseSSL )( 
            IHttp * This,
            /* [in] */ BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsePost )( 
            IHttp * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UsePost )( 
            IHttp * This,
            /* [in] */ BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PostData )( 
            IHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PostData )( 
            IHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyServer )( 
            IHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProxyServer )( 
            IHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyAccount )( 
            IHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProxyAccount )( 
            IHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyPassword )( 
            IHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProxyPassword )( 
            IHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequestTimeout )( 
            IHttp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RequestTimeout )( 
            IHttp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeepAlive )( 
            IHttp * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeepAlive )( 
            IHttp * This,
            /* [in] */ BOOL newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IHttp * This,
            BSTR Url);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IHttp * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ReadData )( 
            IHttp * This,
            /* [retval][out] */ BSTR *__MIDL__IHttp0001);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *HasData )( 
            IHttp * This,
            /* [retval][out] */ BOOL *pbHasData);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ReadHeader )( 
            IHttp * This,
            /* [in] */ LONG lHeader,
            /* [retval][out] */ BSTR *pbstrHeader);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Sleep )( 
            IHttp * This,
            LONG lMilliSeconds);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IHttpVtbl;

    interface IHttp
    {
        CONST_VTBL struct IHttpVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHttp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IHttp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IHttp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IHttp_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IHttp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IHttp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IHttp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IHttp_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define IHttp_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define IHttp_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define IHttp_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define IHttp_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define IHttp_get_LogFile(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFile(This,pVal) ) 

#define IHttp_put_LogFile(This,newVal)	\
    ( (This)->lpVtbl -> put_LogFile(This,newVal) ) 

#define IHttp_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define IHttp_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define IHttp_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IHttp_GetErrorDescription(This,ErrorCode,__MIDL__IHttp0000)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,ErrorCode,__MIDL__IHttp0000) ) 

#define IHttp_Activate(This,bstrRegKey,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,bstrRegKey,bPersistent) ) 

#define IHttp_get_HttpLibrary(This,pVal)	\
    ( (This)->lpVtbl -> get_HttpLibrary(This,pVal) ) 

#define IHttp_put_HttpLibrary(This,newVal)	\
    ( (This)->lpVtbl -> put_HttpLibrary(This,newVal) ) 

#define IHttp_get_WebAccount(This,pVal)	\
    ( (This)->lpVtbl -> get_WebAccount(This,pVal) ) 

#define IHttp_put_WebAccount(This,newVal)	\
    ( (This)->lpVtbl -> put_WebAccount(This,newVal) ) 

#define IHttp_get_WebPassword(This,pVal)	\
    ( (This)->lpVtbl -> get_WebPassword(This,pVal) ) 

#define IHttp_put_WebPassword(This,newVal)	\
    ( (This)->lpVtbl -> put_WebPassword(This,newVal) ) 

#define IHttp_get_UseSSL(This,pVal)	\
    ( (This)->lpVtbl -> get_UseSSL(This,pVal) ) 

#define IHttp_put_UseSSL(This,newVal)	\
    ( (This)->lpVtbl -> put_UseSSL(This,newVal) ) 

#define IHttp_get_UsePost(This,pVal)	\
    ( (This)->lpVtbl -> get_UsePost(This,pVal) ) 

#define IHttp_put_UsePost(This,newVal)	\
    ( (This)->lpVtbl -> put_UsePost(This,newVal) ) 

#define IHttp_get_PostData(This,pVal)	\
    ( (This)->lpVtbl -> get_PostData(This,pVal) ) 

#define IHttp_put_PostData(This,newVal)	\
    ( (This)->lpVtbl -> put_PostData(This,newVal) ) 

#define IHttp_get_ProxyServer(This,pVal)	\
    ( (This)->lpVtbl -> get_ProxyServer(This,pVal) ) 

#define IHttp_put_ProxyServer(This,newVal)	\
    ( (This)->lpVtbl -> put_ProxyServer(This,newVal) ) 

#define IHttp_get_ProxyAccount(This,pVal)	\
    ( (This)->lpVtbl -> get_ProxyAccount(This,pVal) ) 

#define IHttp_put_ProxyAccount(This,newVal)	\
    ( (This)->lpVtbl -> put_ProxyAccount(This,newVal) ) 

#define IHttp_get_ProxyPassword(This,pVal)	\
    ( (This)->lpVtbl -> get_ProxyPassword(This,pVal) ) 

#define IHttp_put_ProxyPassword(This,newVal)	\
    ( (This)->lpVtbl -> put_ProxyPassword(This,newVal) ) 

#define IHttp_get_RequestTimeout(This,pVal)	\
    ( (This)->lpVtbl -> get_RequestTimeout(This,pVal) ) 

#define IHttp_put_RequestTimeout(This,newVal)	\
    ( (This)->lpVtbl -> put_RequestTimeout(This,newVal) ) 

#define IHttp_get_KeepAlive(This,pVal)	\
    ( (This)->lpVtbl -> get_KeepAlive(This,pVal) ) 

#define IHttp_put_KeepAlive(This,newVal)	\
    ( (This)->lpVtbl -> put_KeepAlive(This,newVal) ) 

#define IHttp_Connect(This,Url)	\
    ( (This)->lpVtbl -> Connect(This,Url) ) 

#define IHttp_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IHttp_ReadData(This,__MIDL__IHttp0001)	\
    ( (This)->lpVtbl -> ReadData(This,__MIDL__IHttp0001) ) 

#define IHttp_HasData(This,pbHasData)	\
    ( (This)->lpVtbl -> HasData(This,pbHasData) ) 

#define IHttp_ReadHeader(This,lHeader,pbstrHeader)	\
    ( (This)->lpVtbl -> ReadHeader(This,lHeader,pbstrHeader) ) 

#define IHttp_Sleep(This,lMilliSeconds)	\
    ( (This)->lpVtbl -> Sleep(This,lMilliSeconds) ) 

#define IHttp_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHttp_INTERFACE_DEFINED__ */


#ifndef __ISocketConstants_INTERFACE_DEFINED__
#define __ISocketConstants_INTERFACE_DEFINED__

/* interface ISocketConstants */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISocketConstants;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("37B4E86F-AAE3-48AC-922B-DF90945125B9")
    ISocketConstants : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSOCKET_PROTOCOL_RAW( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSOCKET_PROTOCOL_TELNET( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSOCKET_CONNSTATE_DISCONNECTED( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSOCKET_CONNSTATE_LISTENING( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSOCKET_CONNSTATE_CONNECTED( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSNMP_TYPE_UNDEFINED( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSNMP_TYPE_INTEGER( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSNMP_TYPE_INTEGER32( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSNMP_TYPE_BITS( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSNMP_TYPE_OCTETSTRING( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSNMP_TYPE_NULL( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSNMP_TYPE_OBJECTIDENTIFIER( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSNMP_TYPE_SEQUENCE( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSNMP_TYPE_IPADDRESS( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSNMP_TYPE_COUNTER32( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSNMP_TYPE_GAUGE32( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSNMP_TYPE_TIMETICKS( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSNMP_TYPE_OPAQUE( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSNMP_TYPE_COUNTER64( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSNMP_TYPE_UNSIGNED32( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSNMP_TRAP_COLDSTART( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSNMP_TRAP_WARMSTART( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSNMP_TRAP_LINKDOWN( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSNMP_TRAP_LINKUP( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSNMP_TRAP_AUTHFAILURE( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSNMP_TRAP_EGPNEIGHLOSS( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSNMP_TRAP_ENTERSPECIFIC( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSNMP_VERSION_V1( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSNMP_VERSION_V2C( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDNS_TYPE_A( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDNS_TYPE_NS( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDNS_TYPE_CNAME( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDNS_TYPE_SOA( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDNS_TYPE_PTR( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDNS_TYPE_MX( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDNS_TYPE_AAAA( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDNS_TYPE_ANY( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDNS_TYPE_UNDEFINED( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDNS_TYPE_SRV( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDNS_TYPE_CERT( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMIB_ACCESS_NOACCESS( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMIB_ACCESS_NOTIFY( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMIB_ACCESS_READONLY( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMIB_ACCESS_WRITEONLY( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMIB_ACCESS_READWRITE( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMIB_ACCESS_READCREATE( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMIB_STATUS_CURRENT( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMIB_STATUS_DEPRECATED( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMIB_STATUS_OBSOLETE( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMIB_STATUS_MANDATORY( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISocketConstantsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISocketConstants * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISocketConstants * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISocketConstants * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISocketConstants * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISocketConstants * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISocketConstants * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISocketConstants * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSOCKET_PROTOCOL_RAW )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSOCKET_PROTOCOL_TELNET )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSOCKET_CONNSTATE_DISCONNECTED )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSOCKET_CONNSTATE_LISTENING )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSOCKET_CONNSTATE_CONNECTED )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSNMP_TYPE_UNDEFINED )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSNMP_TYPE_INTEGER )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSNMP_TYPE_INTEGER32 )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSNMP_TYPE_BITS )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSNMP_TYPE_OCTETSTRING )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSNMP_TYPE_NULL )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSNMP_TYPE_OBJECTIDENTIFIER )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSNMP_TYPE_SEQUENCE )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSNMP_TYPE_IPADDRESS )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSNMP_TYPE_COUNTER32 )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSNMP_TYPE_GAUGE32 )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSNMP_TYPE_TIMETICKS )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSNMP_TYPE_OPAQUE )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSNMP_TYPE_COUNTER64 )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSNMP_TYPE_UNSIGNED32 )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSNMP_TRAP_COLDSTART )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSNMP_TRAP_WARMSTART )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSNMP_TRAP_LINKDOWN )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSNMP_TRAP_LINKUP )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSNMP_TRAP_AUTHFAILURE )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSNMP_TRAP_EGPNEIGHLOSS )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSNMP_TRAP_ENTERSPECIFIC )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSNMP_VERSION_V1 )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSNMP_VERSION_V2C )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDNS_TYPE_A )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDNS_TYPE_NS )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDNS_TYPE_CNAME )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDNS_TYPE_SOA )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDNS_TYPE_PTR )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDNS_TYPE_MX )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDNS_TYPE_AAAA )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDNS_TYPE_ANY )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDNS_TYPE_UNDEFINED )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDNS_TYPE_SRV )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDNS_TYPE_CERT )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMIB_ACCESS_NOACCESS )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMIB_ACCESS_NOTIFY )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMIB_ACCESS_READONLY )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMIB_ACCESS_WRITEONLY )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMIB_ACCESS_READWRITE )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMIB_ACCESS_READCREATE )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMIB_STATUS_CURRENT )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMIB_STATUS_DEPRECATED )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMIB_STATUS_OBSOLETE )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMIB_STATUS_MANDATORY )( 
            ISocketConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } ISocketConstantsVtbl;

    interface ISocketConstants
    {
        CONST_VTBL struct ISocketConstantsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISocketConstants_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISocketConstants_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISocketConstants_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISocketConstants_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISocketConstants_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISocketConstants_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISocketConstants_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISocketConstants_get_asSOCKET_PROTOCOL_RAW(This,pVal)	\
    ( (This)->lpVtbl -> get_asSOCKET_PROTOCOL_RAW(This,pVal) ) 

#define ISocketConstants_get_asSOCKET_PROTOCOL_TELNET(This,pVal)	\
    ( (This)->lpVtbl -> get_asSOCKET_PROTOCOL_TELNET(This,pVal) ) 

#define ISocketConstants_get_asSOCKET_CONNSTATE_DISCONNECTED(This,pVal)	\
    ( (This)->lpVtbl -> get_asSOCKET_CONNSTATE_DISCONNECTED(This,pVal) ) 

#define ISocketConstants_get_asSOCKET_CONNSTATE_LISTENING(This,pVal)	\
    ( (This)->lpVtbl -> get_asSOCKET_CONNSTATE_LISTENING(This,pVal) ) 

#define ISocketConstants_get_asSOCKET_CONNSTATE_CONNECTED(This,pVal)	\
    ( (This)->lpVtbl -> get_asSOCKET_CONNSTATE_CONNECTED(This,pVal) ) 

#define ISocketConstants_get_asSNMP_TYPE_UNDEFINED(This,pVal)	\
    ( (This)->lpVtbl -> get_asSNMP_TYPE_UNDEFINED(This,pVal) ) 

#define ISocketConstants_get_asSNMP_TYPE_INTEGER(This,pVal)	\
    ( (This)->lpVtbl -> get_asSNMP_TYPE_INTEGER(This,pVal) ) 

#define ISocketConstants_get_asSNMP_TYPE_INTEGER32(This,pVal)	\
    ( (This)->lpVtbl -> get_asSNMP_TYPE_INTEGER32(This,pVal) ) 

#define ISocketConstants_get_asSNMP_TYPE_BITS(This,pVal)	\
    ( (This)->lpVtbl -> get_asSNMP_TYPE_BITS(This,pVal) ) 

#define ISocketConstants_get_asSNMP_TYPE_OCTETSTRING(This,pVal)	\
    ( (This)->lpVtbl -> get_asSNMP_TYPE_OCTETSTRING(This,pVal) ) 

#define ISocketConstants_get_asSNMP_TYPE_NULL(This,pVal)	\
    ( (This)->lpVtbl -> get_asSNMP_TYPE_NULL(This,pVal) ) 

#define ISocketConstants_get_asSNMP_TYPE_OBJECTIDENTIFIER(This,pVal)	\
    ( (This)->lpVtbl -> get_asSNMP_TYPE_OBJECTIDENTIFIER(This,pVal) ) 

#define ISocketConstants_get_asSNMP_TYPE_SEQUENCE(This,pVal)	\
    ( (This)->lpVtbl -> get_asSNMP_TYPE_SEQUENCE(This,pVal) ) 

#define ISocketConstants_get_asSNMP_TYPE_IPADDRESS(This,pVal)	\
    ( (This)->lpVtbl -> get_asSNMP_TYPE_IPADDRESS(This,pVal) ) 

#define ISocketConstants_get_asSNMP_TYPE_COUNTER32(This,pVal)	\
    ( (This)->lpVtbl -> get_asSNMP_TYPE_COUNTER32(This,pVal) ) 

#define ISocketConstants_get_asSNMP_TYPE_GAUGE32(This,pVal)	\
    ( (This)->lpVtbl -> get_asSNMP_TYPE_GAUGE32(This,pVal) ) 

#define ISocketConstants_get_asSNMP_TYPE_TIMETICKS(This,pVal)	\
    ( (This)->lpVtbl -> get_asSNMP_TYPE_TIMETICKS(This,pVal) ) 

#define ISocketConstants_get_asSNMP_TYPE_OPAQUE(This,pVal)	\
    ( (This)->lpVtbl -> get_asSNMP_TYPE_OPAQUE(This,pVal) ) 

#define ISocketConstants_get_asSNMP_TYPE_COUNTER64(This,pVal)	\
    ( (This)->lpVtbl -> get_asSNMP_TYPE_COUNTER64(This,pVal) ) 

#define ISocketConstants_get_asSNMP_TYPE_UNSIGNED32(This,pVal)	\
    ( (This)->lpVtbl -> get_asSNMP_TYPE_UNSIGNED32(This,pVal) ) 

#define ISocketConstants_get_asSNMP_TRAP_COLDSTART(This,pVal)	\
    ( (This)->lpVtbl -> get_asSNMP_TRAP_COLDSTART(This,pVal) ) 

#define ISocketConstants_get_asSNMP_TRAP_WARMSTART(This,pVal)	\
    ( (This)->lpVtbl -> get_asSNMP_TRAP_WARMSTART(This,pVal) ) 

#define ISocketConstants_get_asSNMP_TRAP_LINKDOWN(This,pVal)	\
    ( (This)->lpVtbl -> get_asSNMP_TRAP_LINKDOWN(This,pVal) ) 

#define ISocketConstants_get_asSNMP_TRAP_LINKUP(This,pVal)	\
    ( (This)->lpVtbl -> get_asSNMP_TRAP_LINKUP(This,pVal) ) 

#define ISocketConstants_get_asSNMP_TRAP_AUTHFAILURE(This,pVal)	\
    ( (This)->lpVtbl -> get_asSNMP_TRAP_AUTHFAILURE(This,pVal) ) 

#define ISocketConstants_get_asSNMP_TRAP_EGPNEIGHLOSS(This,pVal)	\
    ( (This)->lpVtbl -> get_asSNMP_TRAP_EGPNEIGHLOSS(This,pVal) ) 

#define ISocketConstants_get_asSNMP_TRAP_ENTERSPECIFIC(This,pVal)	\
    ( (This)->lpVtbl -> get_asSNMP_TRAP_ENTERSPECIFIC(This,pVal) ) 

#define ISocketConstants_get_asSNMP_VERSION_V1(This,pVal)	\
    ( (This)->lpVtbl -> get_asSNMP_VERSION_V1(This,pVal) ) 

#define ISocketConstants_get_asSNMP_VERSION_V2C(This,pVal)	\
    ( (This)->lpVtbl -> get_asSNMP_VERSION_V2C(This,pVal) ) 

#define ISocketConstants_get_asDNS_TYPE_A(This,pVal)	\
    ( (This)->lpVtbl -> get_asDNS_TYPE_A(This,pVal) ) 

#define ISocketConstants_get_asDNS_TYPE_NS(This,pVal)	\
    ( (This)->lpVtbl -> get_asDNS_TYPE_NS(This,pVal) ) 

#define ISocketConstants_get_asDNS_TYPE_CNAME(This,pVal)	\
    ( (This)->lpVtbl -> get_asDNS_TYPE_CNAME(This,pVal) ) 

#define ISocketConstants_get_asDNS_TYPE_SOA(This,pVal)	\
    ( (This)->lpVtbl -> get_asDNS_TYPE_SOA(This,pVal) ) 

#define ISocketConstants_get_asDNS_TYPE_PTR(This,pVal)	\
    ( (This)->lpVtbl -> get_asDNS_TYPE_PTR(This,pVal) ) 

#define ISocketConstants_get_asDNS_TYPE_MX(This,pVal)	\
    ( (This)->lpVtbl -> get_asDNS_TYPE_MX(This,pVal) ) 

#define ISocketConstants_get_asDNS_TYPE_AAAA(This,pVal)	\
    ( (This)->lpVtbl -> get_asDNS_TYPE_AAAA(This,pVal) ) 

#define ISocketConstants_get_asDNS_TYPE_ANY(This,pVal)	\
    ( (This)->lpVtbl -> get_asDNS_TYPE_ANY(This,pVal) ) 

#define ISocketConstants_get_asDNS_TYPE_UNDEFINED(This,pVal)	\
    ( (This)->lpVtbl -> get_asDNS_TYPE_UNDEFINED(This,pVal) ) 

#define ISocketConstants_get_asDNS_TYPE_SRV(This,pVal)	\
    ( (This)->lpVtbl -> get_asDNS_TYPE_SRV(This,pVal) ) 

#define ISocketConstants_get_asDNS_TYPE_CERT(This,pVal)	\
    ( (This)->lpVtbl -> get_asDNS_TYPE_CERT(This,pVal) ) 

#define ISocketConstants_get_asMIB_ACCESS_NOACCESS(This,pVal)	\
    ( (This)->lpVtbl -> get_asMIB_ACCESS_NOACCESS(This,pVal) ) 

#define ISocketConstants_get_asMIB_ACCESS_NOTIFY(This,pVal)	\
    ( (This)->lpVtbl -> get_asMIB_ACCESS_NOTIFY(This,pVal) ) 

#define ISocketConstants_get_asMIB_ACCESS_READONLY(This,pVal)	\
    ( (This)->lpVtbl -> get_asMIB_ACCESS_READONLY(This,pVal) ) 

#define ISocketConstants_get_asMIB_ACCESS_WRITEONLY(This,pVal)	\
    ( (This)->lpVtbl -> get_asMIB_ACCESS_WRITEONLY(This,pVal) ) 

#define ISocketConstants_get_asMIB_ACCESS_READWRITE(This,pVal)	\
    ( (This)->lpVtbl -> get_asMIB_ACCESS_READWRITE(This,pVal) ) 

#define ISocketConstants_get_asMIB_ACCESS_READCREATE(This,pVal)	\
    ( (This)->lpVtbl -> get_asMIB_ACCESS_READCREATE(This,pVal) ) 

#define ISocketConstants_get_asMIB_STATUS_CURRENT(This,pVal)	\
    ( (This)->lpVtbl -> get_asMIB_STATUS_CURRENT(This,pVal) ) 

#define ISocketConstants_get_asMIB_STATUS_DEPRECATED(This,pVal)	\
    ( (This)->lpVtbl -> get_asMIB_STATUS_DEPRECATED(This,pVal) ) 

#define ISocketConstants_get_asMIB_STATUS_OBSOLETE(This,pVal)	\
    ( (This)->lpVtbl -> get_asMIB_STATUS_OBSOLETE(This,pVal) ) 

#define ISocketConstants_get_asMIB_STATUS_MANDATORY(This,pVal)	\
    ( (This)->lpVtbl -> get_asMIB_STATUS_MANDATORY(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISocketConstants_INTERFACE_DEFINED__ */


#ifndef __ISnmpManager_INTERFACE_DEFINED__
#define __ISnmpManager_INTERFACE_DEFINED__

/* interface ISnmpManager */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISnmpManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F46A9413-336E-4E18-A2C3-CD4068C25A0A")
    ISnmpManager : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            LONG Error,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProtocolVersion( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProtocolVersion( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Timeout( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Timeout( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialize( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Shutdown( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Open( 
            BSTR Agent,
            /* [defaultvalue][in] */ BSTR Community = L"public",
            /* [defaultvalue][in] */ LONG Port = 161) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Get( 
            BSTR OID,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetNext( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Set( 
            VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE LoadMibFile( 
            BSTR bstrMibFile) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Sleep( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISnmpManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISnmpManager * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISnmpManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISnmpManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISnmpManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISnmpManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISnmpManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISnmpManager * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ISnmpManager * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ISnmpManager * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            ISnmpManager * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            ISnmpManager * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            ISnmpManager * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            ISnmpManager * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            ISnmpManager * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            ISnmpManager * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            ISnmpManager * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ISnmpManager * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            ISnmpManager * This,
            LONG Error,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ISnmpManager * This,
            BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProtocolVersion )( 
            ISnmpManager * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProtocolVersion )( 
            ISnmpManager * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Timeout )( 
            ISnmpManager * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Timeout )( 
            ISnmpManager * This,
            /* [in] */ LONG newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            ISnmpManager * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Shutdown )( 
            ISnmpManager * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            ISnmpManager * This,
            BSTR Agent,
            /* [defaultvalue][in] */ BSTR Community,
            /* [defaultvalue][in] */ LONG Port);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            ISnmpManager * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Get )( 
            ISnmpManager * This,
            BSTR OID,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetNext )( 
            ISnmpManager * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Set )( 
            ISnmpManager * This,
            VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *LoadMibFile )( 
            ISnmpManager * This,
            BSTR bstrMibFile);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Sleep )( 
            ISnmpManager * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            ISnmpManager * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } ISnmpManagerVtbl;

    interface ISnmpManager
    {
        CONST_VTBL struct ISnmpManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISnmpManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISnmpManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISnmpManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISnmpManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISnmpManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISnmpManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISnmpManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISnmpManager_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define ISnmpManager_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define ISnmpManager_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define ISnmpManager_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define ISnmpManager_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define ISnmpManager_get_LogFile(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFile(This,pVal) ) 

#define ISnmpManager_put_LogFile(This,newVal)	\
    ( (This)->lpVtbl -> put_LogFile(This,newVal) ) 

#define ISnmpManager_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define ISnmpManager_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define ISnmpManager_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ISnmpManager_GetErrorDescription(This,Error,pVal)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,Error,pVal) ) 

#define ISnmpManager_Activate(This,bstrRegKey,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,bstrRegKey,bPersistent) ) 

#define ISnmpManager_get_ProtocolVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_ProtocolVersion(This,pVal) ) 

#define ISnmpManager_put_ProtocolVersion(This,newVal)	\
    ( (This)->lpVtbl -> put_ProtocolVersion(This,newVal) ) 

#define ISnmpManager_get_Timeout(This,pVal)	\
    ( (This)->lpVtbl -> get_Timeout(This,pVal) ) 

#define ISnmpManager_put_Timeout(This,newVal)	\
    ( (This)->lpVtbl -> put_Timeout(This,newVal) ) 

#define ISnmpManager_Initialize(This)	\
    ( (This)->lpVtbl -> Initialize(This) ) 

#define ISnmpManager_Shutdown(This)	\
    ( (This)->lpVtbl -> Shutdown(This) ) 

#define ISnmpManager_Open(This,Agent,Community,Port)	\
    ( (This)->lpVtbl -> Open(This,Agent,Community,Port) ) 

#define ISnmpManager_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define ISnmpManager_Get(This,OID,pVal)	\
    ( (This)->lpVtbl -> Get(This,OID,pVal) ) 

#define ISnmpManager_GetNext(This,pVal)	\
    ( (This)->lpVtbl -> GetNext(This,pVal) ) 

#define ISnmpManager_Set(This,pVal)	\
    ( (This)->lpVtbl -> Set(This,pVal) ) 

#define ISnmpManager_LoadMibFile(This,bstrMibFile)	\
    ( (This)->lpVtbl -> LoadMibFile(This,bstrMibFile) ) 

#define ISnmpManager_Sleep(This,newVal)	\
    ( (This)->lpVtbl -> Sleep(This,newVal) ) 

#define ISnmpManager_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISnmpManager_INTERFACE_DEFINED__ */


#ifndef __ISnmpObject_INTERFACE_DEFINED__
#define __ISnmpObject_INTERFACE_DEFINED__

/* interface ISnmpObject */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISnmpObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C3E4F5F3-C188-4F3B-9A41-9CAE2891150E")
    ISnmpObject : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_OID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_OID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Value( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Description( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NodeID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_NodeID( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ParentNodeID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ParentNodeID( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RequestID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RequestID( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Syntax( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Syntax( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Access( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Access( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Status( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Path( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Path( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsUserMib( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_IsUserMib( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISnmpObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISnmpObject * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISnmpObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISnmpObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISnmpObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISnmpObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISnmpObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISnmpObject * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ISnmpObject * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OID )( 
            ISnmpObject * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OID )( 
            ISnmpObject * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            ISnmpObject * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            ISnmpObject * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ISnmpObject * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            ISnmpObject * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            ISnmpObject * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            ISnmpObject * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NodeID )( 
            ISnmpObject * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NodeID )( 
            ISnmpObject * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentNodeID )( 
            ISnmpObject * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParentNodeID )( 
            ISnmpObject * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ISnmpObject * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            ISnmpObject * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequestID )( 
            ISnmpObject * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RequestID )( 
            ISnmpObject * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Syntax )( 
            ISnmpObject * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Syntax )( 
            ISnmpObject * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Access )( 
            ISnmpObject * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Access )( 
            ISnmpObject * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            ISnmpObject * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Status )( 
            ISnmpObject * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Path )( 
            ISnmpObject * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Path )( 
            ISnmpObject * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsUserMib )( 
            ISnmpObject * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsUserMib )( 
            ISnmpObject * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        END_INTERFACE
    } ISnmpObjectVtbl;

    interface ISnmpObject
    {
        CONST_VTBL struct ISnmpObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISnmpObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISnmpObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISnmpObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISnmpObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISnmpObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISnmpObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISnmpObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISnmpObject_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ISnmpObject_get_OID(This,pVal)	\
    ( (This)->lpVtbl -> get_OID(This,pVal) ) 

#define ISnmpObject_put_OID(This,newVal)	\
    ( (This)->lpVtbl -> put_OID(This,newVal) ) 

#define ISnmpObject_get_Value(This,pVal)	\
    ( (This)->lpVtbl -> get_Value(This,pVal) ) 

#define ISnmpObject_put_Value(This,newVal)	\
    ( (This)->lpVtbl -> put_Value(This,newVal) ) 

#define ISnmpObject_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define ISnmpObject_put_Type(This,newVal)	\
    ( (This)->lpVtbl -> put_Type(This,newVal) ) 

#define ISnmpObject_get_Description(This,pVal)	\
    ( (This)->lpVtbl -> get_Description(This,pVal) ) 

#define ISnmpObject_put_Description(This,newVal)	\
    ( (This)->lpVtbl -> put_Description(This,newVal) ) 

#define ISnmpObject_get_NodeID(This,pVal)	\
    ( (This)->lpVtbl -> get_NodeID(This,pVal) ) 

#define ISnmpObject_put_NodeID(This,newVal)	\
    ( (This)->lpVtbl -> put_NodeID(This,newVal) ) 

#define ISnmpObject_get_ParentNodeID(This,pVal)	\
    ( (This)->lpVtbl -> get_ParentNodeID(This,pVal) ) 

#define ISnmpObject_put_ParentNodeID(This,newVal)	\
    ( (This)->lpVtbl -> put_ParentNodeID(This,newVal) ) 

#define ISnmpObject_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define ISnmpObject_put_Name(This,newVal)	\
    ( (This)->lpVtbl -> put_Name(This,newVal) ) 

#define ISnmpObject_get_RequestID(This,pVal)	\
    ( (This)->lpVtbl -> get_RequestID(This,pVal) ) 

#define ISnmpObject_put_RequestID(This,newVal)	\
    ( (This)->lpVtbl -> put_RequestID(This,newVal) ) 

#define ISnmpObject_get_Syntax(This,pVal)	\
    ( (This)->lpVtbl -> get_Syntax(This,pVal) ) 

#define ISnmpObject_put_Syntax(This,newVal)	\
    ( (This)->lpVtbl -> put_Syntax(This,newVal) ) 

#define ISnmpObject_get_Access(This,pVal)	\
    ( (This)->lpVtbl -> get_Access(This,pVal) ) 

#define ISnmpObject_put_Access(This,newVal)	\
    ( (This)->lpVtbl -> put_Access(This,newVal) ) 

#define ISnmpObject_get_Status(This,pVal)	\
    ( (This)->lpVtbl -> get_Status(This,pVal) ) 

#define ISnmpObject_put_Status(This,newVal)	\
    ( (This)->lpVtbl -> put_Status(This,newVal) ) 

#define ISnmpObject_get_Path(This,pVal)	\
    ( (This)->lpVtbl -> get_Path(This,pVal) ) 

#define ISnmpObject_put_Path(This,newVal)	\
    ( (This)->lpVtbl -> put_Path(This,newVal) ) 

#define ISnmpObject_get_IsUserMib(This,pVal)	\
    ( (This)->lpVtbl -> get_IsUserMib(This,pVal) ) 

#define ISnmpObject_put_IsUserMib(This,newVal)	\
    ( (This)->lpVtbl -> put_IsUserMib(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISnmpObject_INTERFACE_DEFINED__ */


#ifndef __ISnmpTrap_INTERFACE_DEFINED__
#define __ISnmpTrap_INTERFACE_DEFINED__

/* interface ISnmpTrap */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISnmpTrap;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("66673904-CCFB-45C5-8AFA-5C003BFE48FA")
    ISnmpTrap : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Host( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Host( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Community( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Community( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GenericTrap( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_GenericTrap( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SpecificTrap( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SpecificTrap( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Enterprise( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Enterprise( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Uptime( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Uptime( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Port( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Port( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetFirstObject( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetNextObject( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddObject( 
            VARIANT *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISnmpTrapVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISnmpTrap * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISnmpTrap * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISnmpTrap * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISnmpTrap * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISnmpTrap * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISnmpTrap * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISnmpTrap * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ISnmpTrap * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ISnmpTrap * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Host )( 
            ISnmpTrap * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Host )( 
            ISnmpTrap * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Community )( 
            ISnmpTrap * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Community )( 
            ISnmpTrap * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GenericTrap )( 
            ISnmpTrap * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GenericTrap )( 
            ISnmpTrap * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SpecificTrap )( 
            ISnmpTrap * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SpecificTrap )( 
            ISnmpTrap * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enterprise )( 
            ISnmpTrap * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enterprise )( 
            ISnmpTrap * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Uptime )( 
            ISnmpTrap * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Uptime )( 
            ISnmpTrap * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Port )( 
            ISnmpTrap * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Port )( 
            ISnmpTrap * This,
            /* [in] */ LONG newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetFirstObject )( 
            ISnmpTrap * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetNextObject )( 
            ISnmpTrap * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddObject )( 
            ISnmpTrap * This,
            VARIANT *pVal);
        
        END_INTERFACE
    } ISnmpTrapVtbl;

    interface ISnmpTrap
    {
        CONST_VTBL struct ISnmpTrapVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISnmpTrap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISnmpTrap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISnmpTrap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISnmpTrap_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISnmpTrap_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISnmpTrap_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISnmpTrap_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISnmpTrap_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define ISnmpTrap_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ISnmpTrap_get_Host(This,pVal)	\
    ( (This)->lpVtbl -> get_Host(This,pVal) ) 

#define ISnmpTrap_put_Host(This,newVal)	\
    ( (This)->lpVtbl -> put_Host(This,newVal) ) 

#define ISnmpTrap_get_Community(This,pVal)	\
    ( (This)->lpVtbl -> get_Community(This,pVal) ) 

#define ISnmpTrap_put_Community(This,newVal)	\
    ( (This)->lpVtbl -> put_Community(This,newVal) ) 

#define ISnmpTrap_get_GenericTrap(This,pVal)	\
    ( (This)->lpVtbl -> get_GenericTrap(This,pVal) ) 

#define ISnmpTrap_put_GenericTrap(This,newVal)	\
    ( (This)->lpVtbl -> put_GenericTrap(This,newVal) ) 

#define ISnmpTrap_get_SpecificTrap(This,pVal)	\
    ( (This)->lpVtbl -> get_SpecificTrap(This,pVal) ) 

#define ISnmpTrap_put_SpecificTrap(This,newVal)	\
    ( (This)->lpVtbl -> put_SpecificTrap(This,newVal) ) 

#define ISnmpTrap_get_Enterprise(This,pVal)	\
    ( (This)->lpVtbl -> get_Enterprise(This,pVal) ) 

#define ISnmpTrap_put_Enterprise(This,newVal)	\
    ( (This)->lpVtbl -> put_Enterprise(This,newVal) ) 

#define ISnmpTrap_get_Uptime(This,pVal)	\
    ( (This)->lpVtbl -> get_Uptime(This,pVal) ) 

#define ISnmpTrap_put_Uptime(This,newVal)	\
    ( (This)->lpVtbl -> put_Uptime(This,newVal) ) 

#define ISnmpTrap_get_Port(This,pVal)	\
    ( (This)->lpVtbl -> get_Port(This,pVal) ) 

#define ISnmpTrap_put_Port(This,newVal)	\
    ( (This)->lpVtbl -> put_Port(This,newVal) ) 

#define ISnmpTrap_GetFirstObject(This,pVal)	\
    ( (This)->lpVtbl -> GetFirstObject(This,pVal) ) 

#define ISnmpTrap_GetNextObject(This,pVal)	\
    ( (This)->lpVtbl -> GetNextObject(This,pVal) ) 

#define ISnmpTrap_AddObject(This,pVal)	\
    ( (This)->lpVtbl -> AddObject(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISnmpTrap_INTERFACE_DEFINED__ */


#ifndef __ISnmpTrapManager_INTERFACE_DEFINED__
#define __ISnmpTrapManager_INTERFACE_DEFINED__

/* interface ISnmpTrapManager */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISnmpTrapManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("07316FD5-B0E6-4A17-9015-9ABC7FECAEB4")
    ISnmpTrapManager : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            LONG Error,
            /* [retval][out] */ BSTR *Description) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProtocolVersion( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProtocolVersion( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialize( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Shutdown( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE LoadMibFile( 
            BSTR bstrMibFile) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE StartListening( 
            BSTR Community,
            /* [defaultvalue][in] */ LONG Port = 162) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE StopListening( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetFirstTrap( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetNextTrap( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Send( 
            /* [in] */ VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Sleep( 
            LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISnmpTrapManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISnmpTrapManager * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISnmpTrapManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISnmpTrapManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISnmpTrapManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISnmpTrapManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISnmpTrapManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISnmpTrapManager * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ISnmpTrapManager * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ISnmpTrapManager * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            ISnmpTrapManager * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            ISnmpTrapManager * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            ISnmpTrapManager * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            ISnmpTrapManager * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            ISnmpTrapManager * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            ISnmpTrapManager * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            ISnmpTrapManager * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ISnmpTrapManager * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            ISnmpTrapManager * This,
            LONG Error,
            /* [retval][out] */ BSTR *Description);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ISnmpTrapManager * This,
            BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProtocolVersion )( 
            ISnmpTrapManager * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProtocolVersion )( 
            ISnmpTrapManager * This,
            /* [in] */ LONG newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            ISnmpTrapManager * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Shutdown )( 
            ISnmpTrapManager * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *LoadMibFile )( 
            ISnmpTrapManager * This,
            BSTR bstrMibFile);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *StartListening )( 
            ISnmpTrapManager * This,
            BSTR Community,
            /* [defaultvalue][in] */ LONG Port);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *StopListening )( 
            ISnmpTrapManager * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetFirstTrap )( 
            ISnmpTrapManager * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetNextTrap )( 
            ISnmpTrapManager * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Send )( 
            ISnmpTrapManager * This,
            /* [in] */ VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Sleep )( 
            ISnmpTrapManager * This,
            LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            ISnmpTrapManager * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } ISnmpTrapManagerVtbl;

    interface ISnmpTrapManager
    {
        CONST_VTBL struct ISnmpTrapManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISnmpTrapManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISnmpTrapManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISnmpTrapManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISnmpTrapManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISnmpTrapManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISnmpTrapManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISnmpTrapManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISnmpTrapManager_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define ISnmpTrapManager_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define ISnmpTrapManager_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define ISnmpTrapManager_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define ISnmpTrapManager_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define ISnmpTrapManager_get_LogFile(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFile(This,pVal) ) 

#define ISnmpTrapManager_put_LogFile(This,newVal)	\
    ( (This)->lpVtbl -> put_LogFile(This,newVal) ) 

#define ISnmpTrapManager_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define ISnmpTrapManager_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define ISnmpTrapManager_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ISnmpTrapManager_GetErrorDescription(This,Error,Description)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,Error,Description) ) 

#define ISnmpTrapManager_Activate(This,bstrRegKey,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,bstrRegKey,bPersistent) ) 

#define ISnmpTrapManager_get_ProtocolVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_ProtocolVersion(This,pVal) ) 

#define ISnmpTrapManager_put_ProtocolVersion(This,newVal)	\
    ( (This)->lpVtbl -> put_ProtocolVersion(This,newVal) ) 

#define ISnmpTrapManager_Initialize(This)	\
    ( (This)->lpVtbl -> Initialize(This) ) 

#define ISnmpTrapManager_Shutdown(This)	\
    ( (This)->lpVtbl -> Shutdown(This) ) 

#define ISnmpTrapManager_LoadMibFile(This,bstrMibFile)	\
    ( (This)->lpVtbl -> LoadMibFile(This,bstrMibFile) ) 

#define ISnmpTrapManager_StartListening(This,Community,Port)	\
    ( (This)->lpVtbl -> StartListening(This,Community,Port) ) 

#define ISnmpTrapManager_StopListening(This)	\
    ( (This)->lpVtbl -> StopListening(This) ) 

#define ISnmpTrapManager_GetFirstTrap(This,pVal)	\
    ( (This)->lpVtbl -> GetFirstTrap(This,pVal) ) 

#define ISnmpTrapManager_GetNextTrap(This,pVal)	\
    ( (This)->lpVtbl -> GetNextTrap(This,pVal) ) 

#define ISnmpTrapManager_Send(This,pVal)	\
    ( (This)->lpVtbl -> Send(This,pVal) ) 

#define ISnmpTrapManager_Sleep(This,newVal)	\
    ( (This)->lpVtbl -> Sleep(This,newVal) ) 

#define ISnmpTrapManager_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISnmpTrapManager_INTERFACE_DEFINED__ */


#ifndef __IFtpServer_INTERFACE_DEFINED__
#define __IFtpServer_INTERFACE_DEFINED__

/* interface IFtpServer */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFtpServer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B629A000-C7D2-4CFB-94D7-9797545EA6D1")
    IFtpServer : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            LONG newVal,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HostPort( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_HostPort( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BinaryTransfer( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_BinaryTransfer( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PassiveMode( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PassiveMode( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastResponse( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Connect( 
            BSTR bstrHost,
            BSTR bstrAccount,
            BSTR bstrPassword) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Disconnect( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FindFirstFile( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FindNextFile( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetCurrentDir( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ChangeDir( 
            BSTR bstrDir) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CreateDir( 
            BSTR bstrDir) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DeleteDir( 
            BSTR bstrDir) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DeleteFile( 
            BSTR bstrFile) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RenameFile( 
            BSTR bstrOld,
            BSTR bstrNew) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetFile( 
            BSTR bstrRemote,
            BSTR bstrLocal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PutFile( 
            BSTR bstrLocal,
            /* [defaultvalue][in] */ BSTR bstrRemote = L"") = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FindFile( 
            BSTR bstrSearch,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RenameDir( 
            BSTR bstrOld,
            BSTR bstrNew) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Sleep( 
            LONG lMilliSeconds) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFtpServerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFtpServer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFtpServer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFtpServer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFtpServer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFtpServer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFtpServer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFtpServer * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IFtpServer * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IFtpServer * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            IFtpServer * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            IFtpServer * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            IFtpServer * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            IFtpServer * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            IFtpServer * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            IFtpServer * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            IFtpServer * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IFtpServer * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IFtpServer * This,
            LONG newVal,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IFtpServer * This,
            BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HostPort )( 
            IFtpServer * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HostPort )( 
            IFtpServer * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BinaryTransfer )( 
            IFtpServer * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BinaryTransfer )( 
            IFtpServer * This,
            /* [in] */ BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PassiveMode )( 
            IFtpServer * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PassiveMode )( 
            IFtpServer * This,
            /* [in] */ BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastResponse )( 
            IFtpServer * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IFtpServer * This,
            BSTR bstrHost,
            BSTR bstrAccount,
            BSTR bstrPassword);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IFtpServer * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FindFirstFile )( 
            IFtpServer * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FindNextFile )( 
            IFtpServer * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetCurrentDir )( 
            IFtpServer * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ChangeDir )( 
            IFtpServer * This,
            BSTR bstrDir);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateDir )( 
            IFtpServer * This,
            BSTR bstrDir);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DeleteDir )( 
            IFtpServer * This,
            BSTR bstrDir);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DeleteFile )( 
            IFtpServer * This,
            BSTR bstrFile);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RenameFile )( 
            IFtpServer * This,
            BSTR bstrOld,
            BSTR bstrNew);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetFile )( 
            IFtpServer * This,
            BSTR bstrRemote,
            BSTR bstrLocal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PutFile )( 
            IFtpServer * This,
            BSTR bstrLocal,
            /* [defaultvalue][in] */ BSTR bstrRemote);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FindFile )( 
            IFtpServer * This,
            BSTR bstrSearch,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RenameDir )( 
            IFtpServer * This,
            BSTR bstrOld,
            BSTR bstrNew);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Sleep )( 
            IFtpServer * This,
            LONG lMilliSeconds);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IFtpServer * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IFtpServerVtbl;

    interface IFtpServer
    {
        CONST_VTBL struct IFtpServerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFtpServer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFtpServer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFtpServer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFtpServer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFtpServer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFtpServer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFtpServer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFtpServer_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define IFtpServer_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define IFtpServer_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define IFtpServer_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define IFtpServer_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define IFtpServer_get_LogFile(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFile(This,pVal) ) 

#define IFtpServer_put_LogFile(This,newVal)	\
    ( (This)->lpVtbl -> put_LogFile(This,newVal) ) 

#define IFtpServer_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define IFtpServer_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define IFtpServer_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IFtpServer_GetErrorDescription(This,newVal,pVal)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,newVal,pVal) ) 

#define IFtpServer_Activate(This,bstrRegKey,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,bstrRegKey,bPersistent) ) 

#define IFtpServer_get_HostPort(This,pVal)	\
    ( (This)->lpVtbl -> get_HostPort(This,pVal) ) 

#define IFtpServer_put_HostPort(This,newVal)	\
    ( (This)->lpVtbl -> put_HostPort(This,newVal) ) 

#define IFtpServer_get_BinaryTransfer(This,pVal)	\
    ( (This)->lpVtbl -> get_BinaryTransfer(This,pVal) ) 

#define IFtpServer_put_BinaryTransfer(This,newVal)	\
    ( (This)->lpVtbl -> put_BinaryTransfer(This,newVal) ) 

#define IFtpServer_get_PassiveMode(This,pVal)	\
    ( (This)->lpVtbl -> get_PassiveMode(This,pVal) ) 

#define IFtpServer_put_PassiveMode(This,newVal)	\
    ( (This)->lpVtbl -> put_PassiveMode(This,newVal) ) 

#define IFtpServer_get_LastResponse(This,pVal)	\
    ( (This)->lpVtbl -> get_LastResponse(This,pVal) ) 

#define IFtpServer_Connect(This,bstrHost,bstrAccount,bstrPassword)	\
    ( (This)->lpVtbl -> Connect(This,bstrHost,bstrAccount,bstrPassword) ) 

#define IFtpServer_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IFtpServer_FindFirstFile(This,pVal)	\
    ( (This)->lpVtbl -> FindFirstFile(This,pVal) ) 

#define IFtpServer_FindNextFile(This,pVal)	\
    ( (This)->lpVtbl -> FindNextFile(This,pVal) ) 

#define IFtpServer_GetCurrentDir(This,pVal)	\
    ( (This)->lpVtbl -> GetCurrentDir(This,pVal) ) 

#define IFtpServer_ChangeDir(This,bstrDir)	\
    ( (This)->lpVtbl -> ChangeDir(This,bstrDir) ) 

#define IFtpServer_CreateDir(This,bstrDir)	\
    ( (This)->lpVtbl -> CreateDir(This,bstrDir) ) 

#define IFtpServer_DeleteDir(This,bstrDir)	\
    ( (This)->lpVtbl -> DeleteDir(This,bstrDir) ) 

#define IFtpServer_DeleteFile(This,bstrFile)	\
    ( (This)->lpVtbl -> DeleteFile(This,bstrFile) ) 

#define IFtpServer_RenameFile(This,bstrOld,bstrNew)	\
    ( (This)->lpVtbl -> RenameFile(This,bstrOld,bstrNew) ) 

#define IFtpServer_GetFile(This,bstrRemote,bstrLocal)	\
    ( (This)->lpVtbl -> GetFile(This,bstrRemote,bstrLocal) ) 

#define IFtpServer_PutFile(This,bstrLocal,bstrRemote)	\
    ( (This)->lpVtbl -> PutFile(This,bstrLocal,bstrRemote) ) 

#define IFtpServer_FindFile(This,bstrSearch,pVal)	\
    ( (This)->lpVtbl -> FindFile(This,bstrSearch,pVal) ) 

#define IFtpServer_RenameDir(This,bstrOld,bstrNew)	\
    ( (This)->lpVtbl -> RenameDir(This,bstrOld,bstrNew) ) 

#define IFtpServer_Sleep(This,lMilliSeconds)	\
    ( (This)->lpVtbl -> Sleep(This,lMilliSeconds) ) 

#define IFtpServer_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFtpServer_INTERFACE_DEFINED__ */


#ifndef __IFtpFile_INTERFACE_DEFINED__
#define __IFtpFile_INTERFACE_DEFINED__

/* interface IFtpFile */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFtpFile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0B545BC4-BFB2-4426-8EDF-2F482EA5C511")
    IFtpFile : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Size( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DateSeconds( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DateSeconds( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Date( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Date( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsDirectory( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_IsDirectory( 
            /* [in] */ BOOL newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFtpFileVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFtpFile * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFtpFile * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFtpFile * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFtpFile * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFtpFile * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFtpFile * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFtpFile * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IFtpFile * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            IFtpFile * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Size )( 
            IFtpFile * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IFtpFile * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IFtpFile * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DateSeconds )( 
            IFtpFile * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DateSeconds )( 
            IFtpFile * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Date )( 
            IFtpFile * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Date )( 
            IFtpFile * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDirectory )( 
            IFtpFile * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsDirectory )( 
            IFtpFile * This,
            /* [in] */ BOOL newVal);
        
        END_INTERFACE
    } IFtpFileVtbl;

    interface IFtpFile
    {
        CONST_VTBL struct IFtpFileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFtpFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFtpFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFtpFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFtpFile_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFtpFile_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFtpFile_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFtpFile_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFtpFile_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IFtpFile_get_Size(This,pVal)	\
    ( (This)->lpVtbl -> get_Size(This,pVal) ) 

#define IFtpFile_put_Size(This,newVal)	\
    ( (This)->lpVtbl -> put_Size(This,newVal) ) 

#define IFtpFile_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IFtpFile_put_Name(This,newVal)	\
    ( (This)->lpVtbl -> put_Name(This,newVal) ) 

#define IFtpFile_get_DateSeconds(This,pVal)	\
    ( (This)->lpVtbl -> get_DateSeconds(This,pVal) ) 

#define IFtpFile_put_DateSeconds(This,newVal)	\
    ( (This)->lpVtbl -> put_DateSeconds(This,newVal) ) 

#define IFtpFile_get_Date(This,pVal)	\
    ( (This)->lpVtbl -> get_Date(This,pVal) ) 

#define IFtpFile_put_Date(This,newVal)	\
    ( (This)->lpVtbl -> put_Date(This,newVal) ) 

#define IFtpFile_get_IsDirectory(This,pVal)	\
    ( (This)->lpVtbl -> get_IsDirectory(This,pVal) ) 

#define IFtpFile_put_IsDirectory(This,newVal)	\
    ( (This)->lpVtbl -> put_IsDirectory(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFtpFile_INTERFACE_DEFINED__ */


#ifndef __IUdp_INTERFACE_DEFINED__
#define __IUdp_INTERFACE_DEFINED__

/* interface IUdp */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IUdp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("96DD0191-EFBF-4C6E-B045-DB33F0D4A72F")
    IUdp : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *plLastError) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pbstrVersion) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pbstrBuild) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pbstrExpirationDate) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pbstrLogFile) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR bstrLogFile) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            LONG lError,
            /* [retval][out] */ BSTR *pbstrDescription) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RemoteAddress( 
            /* [retval][out] */ BSTR *pbstrRemoteIP) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NewLine( 
            /* [retval][out] */ BSTR *pbstrNewLine) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_NewLine( 
            /* [in] */ BSTR bstrNewLine) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IOTimeout( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_IOTimeout( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Open( 
            BSTR bstrHost,
            LONG lPort,
            BOOL bListen) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SendByte( 
            short sByte) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SendBytes( 
            BSTR bstrBytes) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SendString( 
            BSTR bstrString) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ReceiveByte( 
            /* [retval][out] */ short *pByte) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ReceiveBytes( 
            /* [retval][out] */ BSTR *pBytes) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ReceiveString( 
            /* [retval][out] */ BSTR *bstrString) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Sleep( 
            LONG lMilliSeconds) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE HasData( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUdpVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUdp * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUdp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUdp * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUdp * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUdp * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUdp * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUdp * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IUdp * This,
            /* [retval][out] */ LONG *plLastError);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IUdp * This,
            /* [retval][out] */ BSTR *pbstrVersion);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            IUdp * This,
            /* [retval][out] */ BSTR *pbstrBuild);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            IUdp * This,
            /* [retval][out] */ BSTR *pbstrExpirationDate);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            IUdp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            IUdp * This,
            /* [retval][out] */ BSTR *pbstrLogFile);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            IUdp * This,
            /* [in] */ BSTR bstrLogFile);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            IUdp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            IUdp * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IUdp * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IUdp * This,
            LONG lError,
            /* [retval][out] */ BSTR *pbstrDescription);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IUdp * This,
            BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RemoteAddress )( 
            IUdp * This,
            /* [retval][out] */ BSTR *pbstrRemoteIP);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NewLine )( 
            IUdp * This,
            /* [retval][out] */ BSTR *pbstrNewLine);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NewLine )( 
            IUdp * This,
            /* [in] */ BSTR bstrNewLine);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IOTimeout )( 
            IUdp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IOTimeout )( 
            IUdp * This,
            /* [in] */ LONG newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IUdp * This,
            BSTR bstrHost,
            LONG lPort,
            BOOL bListen);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IUdp * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendByte )( 
            IUdp * This,
            short sByte);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendBytes )( 
            IUdp * This,
            BSTR bstrBytes);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendString )( 
            IUdp * This,
            BSTR bstrString);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ReceiveByte )( 
            IUdp * This,
            /* [retval][out] */ short *pByte);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ReceiveBytes )( 
            IUdp * This,
            /* [retval][out] */ BSTR *pBytes);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ReceiveString )( 
            IUdp * This,
            /* [retval][out] */ BSTR *bstrString);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Sleep )( 
            IUdp * This,
            LONG lMilliSeconds);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *HasData )( 
            IUdp * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IUdp * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IUdpVtbl;

    interface IUdp
    {
        CONST_VTBL struct IUdpVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUdp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUdp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUdp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUdp_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUdp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUdp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUdp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUdp_get_LastError(This,plLastError)	\
    ( (This)->lpVtbl -> get_LastError(This,plLastError) ) 

#define IUdp_get_Version(This,pbstrVersion)	\
    ( (This)->lpVtbl -> get_Version(This,pbstrVersion) ) 

#define IUdp_get_Build(This,pbstrBuild)	\
    ( (This)->lpVtbl -> get_Build(This,pbstrBuild) ) 

#define IUdp_get_ExpirationDate(This,pbstrExpirationDate)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pbstrExpirationDate) ) 

#define IUdp_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define IUdp_get_LogFile(This,pbstrLogFile)	\
    ( (This)->lpVtbl -> get_LogFile(This,pbstrLogFile) ) 

#define IUdp_put_LogFile(This,bstrLogFile)	\
    ( (This)->lpVtbl -> put_LogFile(This,bstrLogFile) ) 

#define IUdp_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define IUdp_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define IUdp_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IUdp_GetErrorDescription(This,lError,pbstrDescription)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,lError,pbstrDescription) ) 

#define IUdp_Activate(This,bstrRegKey,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,bstrRegKey,bPersistent) ) 

#define IUdp_get_RemoteAddress(This,pbstrRemoteIP)	\
    ( (This)->lpVtbl -> get_RemoteAddress(This,pbstrRemoteIP) ) 

#define IUdp_get_NewLine(This,pbstrNewLine)	\
    ( (This)->lpVtbl -> get_NewLine(This,pbstrNewLine) ) 

#define IUdp_put_NewLine(This,bstrNewLine)	\
    ( (This)->lpVtbl -> put_NewLine(This,bstrNewLine) ) 

#define IUdp_get_IOTimeout(This,pVal)	\
    ( (This)->lpVtbl -> get_IOTimeout(This,pVal) ) 

#define IUdp_put_IOTimeout(This,newVal)	\
    ( (This)->lpVtbl -> put_IOTimeout(This,newVal) ) 

#define IUdp_Open(This,bstrHost,lPort,bListen)	\
    ( (This)->lpVtbl -> Open(This,bstrHost,lPort,bListen) ) 

#define IUdp_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IUdp_SendByte(This,sByte)	\
    ( (This)->lpVtbl -> SendByte(This,sByte) ) 

#define IUdp_SendBytes(This,bstrBytes)	\
    ( (This)->lpVtbl -> SendBytes(This,bstrBytes) ) 

#define IUdp_SendString(This,bstrString)	\
    ( (This)->lpVtbl -> SendString(This,bstrString) ) 

#define IUdp_ReceiveByte(This,pByte)	\
    ( (This)->lpVtbl -> ReceiveByte(This,pByte) ) 

#define IUdp_ReceiveBytes(This,pBytes)	\
    ( (This)->lpVtbl -> ReceiveBytes(This,pBytes) ) 

#define IUdp_ReceiveString(This,bstrString)	\
    ( (This)->lpVtbl -> ReceiveString(This,bstrString) ) 

#define IUdp_Sleep(This,lMilliSeconds)	\
    ( (This)->lpVtbl -> Sleep(This,lMilliSeconds) ) 

#define IUdp_HasData(This,pVal)	\
    ( (This)->lpVtbl -> HasData(This,pVal) ) 

#define IUdp_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUdp_INTERFACE_DEFINED__ */


#ifndef __ITcp_INTERFACE_DEFINED__
#define __ITcp_INTERFACE_DEFINED__

/* interface ITcp */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ITcp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4CCDB6A4-1BEE-4D3C-9937-D53CDFB5E1A3")
    ITcp : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            long ErrorCode,
            /* [retval][out] */ BSTR *__MIDL__ITcp0000) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR RegistrationCode,
            /* [defaultvalue][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Protocol( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Protocol( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NewLine( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_NewLine( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IOTimeout( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_IOTimeout( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RemoteAddress( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ConnectionState( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Connect( 
            BSTR HostName,
            long PortNumber) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Disconnect( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE StartListening( 
            long PortNumber) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE StopListening( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE HasData( 
            /* [retval][out] */ BOOL *__MIDL__ITcp0001) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ReceiveString( 
            /* [retval][out] */ BSTR *__MIDL__ITcp0002) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SendString( 
            BSTR DataString) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SendByte( 
            short Byte) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ReceiveByte( 
            /* [retval][out] */ short *__MIDL__ITcp0003) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SendBytes( 
            BSTR Bytes) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ReceiveBytes( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Sleep( 
            long MilliSecs) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetHostName( 
            /* [in] */ BSTR Host,
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITcpVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITcp * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITcp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITcp * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITcp * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITcp * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITcp * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITcp * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ITcp * This,
            /* [retval][out] */ long *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ITcp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            ITcp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            ITcp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            ITcp * This,
            /* [in] */ long newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            ITcp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            ITcp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            ITcp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            ITcp * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ITcp * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            ITcp * This,
            long ErrorCode,
            /* [retval][out] */ BSTR *__MIDL__ITcp0000);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ITcp * This,
            BSTR RegistrationCode,
            /* [defaultvalue][in] */ BOOL bPersistent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Protocol )( 
            ITcp * This,
            /* [retval][out] */ long *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Protocol )( 
            ITcp * This,
            /* [in] */ long newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NewLine )( 
            ITcp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NewLine )( 
            ITcp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IOTimeout )( 
            ITcp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IOTimeout )( 
            ITcp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RemoteAddress )( 
            ITcp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionState )( 
            ITcp * This,
            /* [retval][out] */ long *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            ITcp * This,
            BSTR HostName,
            long PortNumber);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            ITcp * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *StartListening )( 
            ITcp * This,
            long PortNumber);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *StopListening )( 
            ITcp * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *HasData )( 
            ITcp * This,
            /* [retval][out] */ BOOL *__MIDL__ITcp0001);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ReceiveString )( 
            ITcp * This,
            /* [retval][out] */ BSTR *__MIDL__ITcp0002);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendString )( 
            ITcp * This,
            BSTR DataString);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendByte )( 
            ITcp * This,
            short Byte);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ReceiveByte )( 
            ITcp * This,
            /* [retval][out] */ short *__MIDL__ITcp0003);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendBytes )( 
            ITcp * This,
            BSTR Bytes);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ReceiveBytes )( 
            ITcp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Sleep )( 
            ITcp * This,
            long MilliSecs);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            ITcp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetHostName )( 
            ITcp * This,
            /* [in] */ BSTR Host,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } ITcpVtbl;

    interface ITcp
    {
        CONST_VTBL struct ITcpVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITcp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITcp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITcp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITcp_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITcp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITcp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITcp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITcp_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define ITcp_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define ITcp_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define ITcp_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define ITcp_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define ITcp_get_LogFile(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFile(This,pVal) ) 

#define ITcp_put_LogFile(This,newVal)	\
    ( (This)->lpVtbl -> put_LogFile(This,newVal) ) 

#define ITcp_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define ITcp_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define ITcp_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ITcp_GetErrorDescription(This,ErrorCode,__MIDL__ITcp0000)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,ErrorCode,__MIDL__ITcp0000) ) 

#define ITcp_Activate(This,RegistrationCode,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,RegistrationCode,bPersistent) ) 

#define ITcp_get_Protocol(This,pVal)	\
    ( (This)->lpVtbl -> get_Protocol(This,pVal) ) 

#define ITcp_put_Protocol(This,newVal)	\
    ( (This)->lpVtbl -> put_Protocol(This,newVal) ) 

#define ITcp_get_NewLine(This,pVal)	\
    ( (This)->lpVtbl -> get_NewLine(This,pVal) ) 

#define ITcp_put_NewLine(This,newVal)	\
    ( (This)->lpVtbl -> put_NewLine(This,newVal) ) 

#define ITcp_get_IOTimeout(This,pVal)	\
    ( (This)->lpVtbl -> get_IOTimeout(This,pVal) ) 

#define ITcp_put_IOTimeout(This,newVal)	\
    ( (This)->lpVtbl -> put_IOTimeout(This,newVal) ) 

#define ITcp_get_RemoteAddress(This,pVal)	\
    ( (This)->lpVtbl -> get_RemoteAddress(This,pVal) ) 

#define ITcp_get_ConnectionState(This,pVal)	\
    ( (This)->lpVtbl -> get_ConnectionState(This,pVal) ) 

#define ITcp_Connect(This,HostName,PortNumber)	\
    ( (This)->lpVtbl -> Connect(This,HostName,PortNumber) ) 

#define ITcp_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define ITcp_StartListening(This,PortNumber)	\
    ( (This)->lpVtbl -> StartListening(This,PortNumber) ) 

#define ITcp_StopListening(This)	\
    ( (This)->lpVtbl -> StopListening(This) ) 

#define ITcp_HasData(This,__MIDL__ITcp0001)	\
    ( (This)->lpVtbl -> HasData(This,__MIDL__ITcp0001) ) 

#define ITcp_ReceiveString(This,__MIDL__ITcp0002)	\
    ( (This)->lpVtbl -> ReceiveString(This,__MIDL__ITcp0002) ) 

#define ITcp_SendString(This,DataString)	\
    ( (This)->lpVtbl -> SendString(This,DataString) ) 

#define ITcp_SendByte(This,Byte)	\
    ( (This)->lpVtbl -> SendByte(This,Byte) ) 

#define ITcp_ReceiveByte(This,__MIDL__ITcp0003)	\
    ( (This)->lpVtbl -> ReceiveByte(This,__MIDL__ITcp0003) ) 

#define ITcp_SendBytes(This,Bytes)	\
    ( (This)->lpVtbl -> SendBytes(This,Bytes) ) 

#define ITcp_ReceiveBytes(This,pVal)	\
    ( (This)->lpVtbl -> ReceiveBytes(This,pVal) ) 

#define ITcp_Sleep(This,MilliSecs)	\
    ( (This)->lpVtbl -> Sleep(This,MilliSecs) ) 

#define ITcp_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#define ITcp_GetHostName(This,Host,pVal)	\
    ( (This)->lpVtbl -> GetHostName(This,Host,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITcp_INTERFACE_DEFINED__ */


#ifndef __IIPtoCountry_INTERFACE_DEFINED__
#define __IIPtoCountry_INTERFACE_DEFINED__

/* interface IIPtoCountry */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IIPtoCountry;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D886339C-6F33-49AC-9FA8-73FC5A227769")
    IIPtoCountry : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            LONG lError,
            /* [retval][out] */ BSTR *pbstrErrorDescription) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            /* [in] */ BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Host( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Host( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CountryCode( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CountryCodeEx( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CountryName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Query( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Sleep( 
            LONG lMilliSeconds) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IIPtoCountryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIPtoCountry * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIPtoCountry * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIPtoCountry * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIPtoCountry * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIPtoCountry * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIPtoCountry * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIPtoCountry * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IIPtoCountry * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IIPtoCountry * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            IIPtoCountry * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            IIPtoCountry * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            IIPtoCountry * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            IIPtoCountry * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            IIPtoCountry * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            IIPtoCountry * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            IIPtoCountry * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IIPtoCountry * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IIPtoCountry * This,
            LONG lError,
            /* [retval][out] */ BSTR *pbstrErrorDescription);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IIPtoCountry * This,
            /* [in] */ BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Host )( 
            IIPtoCountry * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Host )( 
            IIPtoCountry * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CountryCode )( 
            IIPtoCountry * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CountryCodeEx )( 
            IIPtoCountry * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CountryName )( 
            IIPtoCountry * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Query )( 
            IIPtoCountry * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Sleep )( 
            IIPtoCountry * This,
            LONG lMilliSeconds);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IIPtoCountry * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IIPtoCountryVtbl;

    interface IIPtoCountry
    {
        CONST_VTBL struct IIPtoCountryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIPtoCountry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIPtoCountry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIPtoCountry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIPtoCountry_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIPtoCountry_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIPtoCountry_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIPtoCountry_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IIPtoCountry_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define IIPtoCountry_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define IIPtoCountry_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define IIPtoCountry_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define IIPtoCountry_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define IIPtoCountry_get_LogFile(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFile(This,pVal) ) 

#define IIPtoCountry_put_LogFile(This,newVal)	\
    ( (This)->lpVtbl -> put_LogFile(This,newVal) ) 

#define IIPtoCountry_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define IIPtoCountry_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define IIPtoCountry_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IIPtoCountry_GetErrorDescription(This,lError,pbstrErrorDescription)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,lError,pbstrErrorDescription) ) 

#define IIPtoCountry_Activate(This,bstrRegKey,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,bstrRegKey,bPersistent) ) 

#define IIPtoCountry_get_Host(This,pVal)	\
    ( (This)->lpVtbl -> get_Host(This,pVal) ) 

#define IIPtoCountry_put_Host(This,newVal)	\
    ( (This)->lpVtbl -> put_Host(This,newVal) ) 

#define IIPtoCountry_get_CountryCode(This,pVal)	\
    ( (This)->lpVtbl -> get_CountryCode(This,pVal) ) 

#define IIPtoCountry_get_CountryCodeEx(This,pVal)	\
    ( (This)->lpVtbl -> get_CountryCodeEx(This,pVal) ) 

#define IIPtoCountry_get_CountryName(This,pVal)	\
    ( (This)->lpVtbl -> get_CountryName(This,pVal) ) 

#define IIPtoCountry_Query(This)	\
    ( (This)->lpVtbl -> Query(This) ) 

#define IIPtoCountry_Sleep(This,lMilliSeconds)	\
    ( (This)->lpVtbl -> Sleep(This,lMilliSeconds) ) 

#define IIPtoCountry_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIPtoCountry_INTERFACE_DEFINED__ */


#ifndef __IDnsServer_INTERFACE_DEFINED__
#define __IDnsServer_INTERFACE_DEFINED__

/* interface IDnsServer */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDnsServer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D51DDAA9-6264-4ED7-82DF-1A46DE9D1C37")
    IDnsServer : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ActivityFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ActivityFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            LONG lError,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Server( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Server( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ServerPort( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ServerPort( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsAuthoritative( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Lookup( 
            BSTR bstrHost,
            LONG lType) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetFirstRecord( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetNextRecord( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDnsServerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDnsServer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDnsServer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDnsServer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDnsServer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDnsServer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDnsServer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDnsServer * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IDnsServer * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IDnsServer * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            IDnsServer * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            IDnsServer * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            IDnsServer * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            IDnsServer * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            IDnsServer * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActivityFile )( 
            IDnsServer * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActivityFile )( 
            IDnsServer * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            IDnsServer * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            IDnsServer * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IDnsServer * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IDnsServer * This,
            LONG lError,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IDnsServer * This,
            BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Server )( 
            IDnsServer * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Server )( 
            IDnsServer * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ServerPort )( 
            IDnsServer * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ServerPort )( 
            IDnsServer * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsAuthoritative )( 
            IDnsServer * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Lookup )( 
            IDnsServer * This,
            BSTR bstrHost,
            LONG lType);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetFirstRecord )( 
            IDnsServer * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetNextRecord )( 
            IDnsServer * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IDnsServer * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IDnsServerVtbl;

    interface IDnsServer
    {
        CONST_VTBL struct IDnsServerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDnsServer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDnsServer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDnsServer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDnsServer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDnsServer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDnsServer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDnsServer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDnsServer_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define IDnsServer_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define IDnsServer_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define IDnsServer_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define IDnsServer_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define IDnsServer_get_LogFile(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFile(This,pVal) ) 

#define IDnsServer_put_LogFile(This,newVal)	\
    ( (This)->lpVtbl -> put_LogFile(This,newVal) ) 

#define IDnsServer_get_ActivityFile(This,pVal)	\
    ( (This)->lpVtbl -> get_ActivityFile(This,pVal) ) 

#define IDnsServer_put_ActivityFile(This,newVal)	\
    ( (This)->lpVtbl -> put_ActivityFile(This,newVal) ) 

#define IDnsServer_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define IDnsServer_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define IDnsServer_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IDnsServer_GetErrorDescription(This,lError,pVal)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,lError,pVal) ) 

#define IDnsServer_Activate(This,bstrRegKey,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,bstrRegKey,bPersistent) ) 

#define IDnsServer_get_Server(This,pVal)	\
    ( (This)->lpVtbl -> get_Server(This,pVal) ) 

#define IDnsServer_put_Server(This,newVal)	\
    ( (This)->lpVtbl -> put_Server(This,newVal) ) 

#define IDnsServer_get_ServerPort(This,pVal)	\
    ( (This)->lpVtbl -> get_ServerPort(This,pVal) ) 

#define IDnsServer_put_ServerPort(This,newVal)	\
    ( (This)->lpVtbl -> put_ServerPort(This,newVal) ) 

#define IDnsServer_get_IsAuthoritative(This,pVal)	\
    ( (This)->lpVtbl -> get_IsAuthoritative(This,pVal) ) 

#define IDnsServer_Lookup(This,bstrHost,lType)	\
    ( (This)->lpVtbl -> Lookup(This,bstrHost,lType) ) 

#define IDnsServer_GetFirstRecord(This,pVal)	\
    ( (This)->lpVtbl -> GetFirstRecord(This,pVal) ) 

#define IDnsServer_GetNextRecord(This,pVal)	\
    ( (This)->lpVtbl -> GetNextRecord(This,pVal) ) 

#define IDnsServer_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDnsServer_INTERFACE_DEFINED__ */


#ifndef __IDnsRecord_INTERFACE_DEFINED__
#define __IDnsRecord_INTERFACE_DEFINED__

/* interface IDnsRecord */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDnsRecord;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CFCFF8CA-30EA-44F8-856E-52AD9A971024")
    IDnsRecord : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Class( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Class( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_TTL( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_TTL( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Preference( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Preference( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NameServer( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_NameServer( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MailExchange( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MailExchange( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Address( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Address( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MailBox( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MailBox( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SerialNumber( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SerialNumber( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RefreshInterval( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RefreshInterval( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RetryInterval( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RetryInterval( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationLimit( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ExpirationLimit( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MinimumTTL( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MinimumTTL( 
            /* [in] */ LONG newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDnsRecordVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDnsRecord * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDnsRecord * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDnsRecord * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDnsRecord * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDnsRecord * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDnsRecord * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDnsRecord * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IDnsRecord * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDnsRecord * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IDnsRecord * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Class )( 
            IDnsRecord * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Class )( 
            IDnsRecord * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IDnsRecord * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IDnsRecord * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TTL )( 
            IDnsRecord * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TTL )( 
            IDnsRecord * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Preference )( 
            IDnsRecord * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Preference )( 
            IDnsRecord * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NameServer )( 
            IDnsRecord * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NameServer )( 
            IDnsRecord * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MailExchange )( 
            IDnsRecord * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MailExchange )( 
            IDnsRecord * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Address )( 
            IDnsRecord * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Address )( 
            IDnsRecord * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MailBox )( 
            IDnsRecord * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MailBox )( 
            IDnsRecord * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SerialNumber )( 
            IDnsRecord * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SerialNumber )( 
            IDnsRecord * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RefreshInterval )( 
            IDnsRecord * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RefreshInterval )( 
            IDnsRecord * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RetryInterval )( 
            IDnsRecord * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RetryInterval )( 
            IDnsRecord * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationLimit )( 
            IDnsRecord * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExpirationLimit )( 
            IDnsRecord * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinimumTTL )( 
            IDnsRecord * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MinimumTTL )( 
            IDnsRecord * This,
            /* [in] */ LONG newVal);
        
        END_INTERFACE
    } IDnsRecordVtbl;

    interface IDnsRecord
    {
        CONST_VTBL struct IDnsRecordVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDnsRecord_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDnsRecord_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDnsRecord_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDnsRecord_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDnsRecord_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDnsRecord_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDnsRecord_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDnsRecord_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IDnsRecord_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IDnsRecord_put_Name(This,newVal)	\
    ( (This)->lpVtbl -> put_Name(This,newVal) ) 

#define IDnsRecord_get_Class(This,pVal)	\
    ( (This)->lpVtbl -> get_Class(This,pVal) ) 

#define IDnsRecord_put_Class(This,newVal)	\
    ( (This)->lpVtbl -> put_Class(This,newVal) ) 

#define IDnsRecord_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IDnsRecord_put_Type(This,newVal)	\
    ( (This)->lpVtbl -> put_Type(This,newVal) ) 

#define IDnsRecord_get_TTL(This,pVal)	\
    ( (This)->lpVtbl -> get_TTL(This,pVal) ) 

#define IDnsRecord_put_TTL(This,newVal)	\
    ( (This)->lpVtbl -> put_TTL(This,newVal) ) 

#define IDnsRecord_get_Preference(This,pVal)	\
    ( (This)->lpVtbl -> get_Preference(This,pVal) ) 

#define IDnsRecord_put_Preference(This,newVal)	\
    ( (This)->lpVtbl -> put_Preference(This,newVal) ) 

#define IDnsRecord_get_NameServer(This,pVal)	\
    ( (This)->lpVtbl -> get_NameServer(This,pVal) ) 

#define IDnsRecord_put_NameServer(This,newVal)	\
    ( (This)->lpVtbl -> put_NameServer(This,newVal) ) 

#define IDnsRecord_get_MailExchange(This,pVal)	\
    ( (This)->lpVtbl -> get_MailExchange(This,pVal) ) 

#define IDnsRecord_put_MailExchange(This,newVal)	\
    ( (This)->lpVtbl -> put_MailExchange(This,newVal) ) 

#define IDnsRecord_get_Address(This,pVal)	\
    ( (This)->lpVtbl -> get_Address(This,pVal) ) 

#define IDnsRecord_put_Address(This,newVal)	\
    ( (This)->lpVtbl -> put_Address(This,newVal) ) 

#define IDnsRecord_get_MailBox(This,pVal)	\
    ( (This)->lpVtbl -> get_MailBox(This,pVal) ) 

#define IDnsRecord_put_MailBox(This,newVal)	\
    ( (This)->lpVtbl -> put_MailBox(This,newVal) ) 

#define IDnsRecord_get_SerialNumber(This,pVal)	\
    ( (This)->lpVtbl -> get_SerialNumber(This,pVal) ) 

#define IDnsRecord_put_SerialNumber(This,newVal)	\
    ( (This)->lpVtbl -> put_SerialNumber(This,newVal) ) 

#define IDnsRecord_get_RefreshInterval(This,pVal)	\
    ( (This)->lpVtbl -> get_RefreshInterval(This,pVal) ) 

#define IDnsRecord_put_RefreshInterval(This,newVal)	\
    ( (This)->lpVtbl -> put_RefreshInterval(This,newVal) ) 

#define IDnsRecord_get_RetryInterval(This,pVal)	\
    ( (This)->lpVtbl -> get_RetryInterval(This,pVal) ) 

#define IDnsRecord_put_RetryInterval(This,newVal)	\
    ( (This)->lpVtbl -> put_RetryInterval(This,newVal) ) 

#define IDnsRecord_get_ExpirationLimit(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationLimit(This,pVal) ) 

#define IDnsRecord_put_ExpirationLimit(This,newVal)	\
    ( (This)->lpVtbl -> put_ExpirationLimit(This,newVal) ) 

#define IDnsRecord_get_MinimumTTL(This,pVal)	\
    ( (This)->lpVtbl -> get_MinimumTTL(This,pVal) ) 

#define IDnsRecord_put_MinimumTTL(This,newVal)	\
    ( (This)->lpVtbl -> put_MinimumTTL(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDnsRecord_INTERFACE_DEFINED__ */


#ifndef __ISsh_INTERFACE_DEFINED__
#define __ISsh_INTERFACE_DEFINED__

/* interface ISsh */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISsh;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CF6C8D3D-1ACE-4111-AE15-724CB21DAC08")
    ISsh : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            long ErrorCode,
            /* [retval][out] */ BSTR *__MIDL__ISsh0000) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Host( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Host( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Port( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Port( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RequireHostVerification( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RequireHostVerification( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UserName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_UserName( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Password( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Password( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PrivateKeyFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PrivateKeyFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Command( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Command( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ScriptTimeOut( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ScriptTimeOut( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_StdOut( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_StdErr( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Run( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Sleep( 
            LONG lMilliSeconds) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_sysTmpFileRes( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_sysTmpFileRes( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_sysTmpFileOut( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_sysTmpFileOut( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_sysTmpFileErr( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_sysTmpFileErr( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HostFingerprint( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AcceptHostKey( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AcceptHostKey( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProtocolError( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISshVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISsh * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISsh * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISsh * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISsh * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISsh * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISsh * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISsh * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ISsh * This,
            /* [retval][out] */ long *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ISsh * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            ISsh * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            ISsh * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            ISsh * This,
            /* [in] */ long newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            ISsh * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            ISsh * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            ISsh * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            ISsh * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ISsh * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            ISsh * This,
            long ErrorCode,
            /* [retval][out] */ BSTR *__MIDL__ISsh0000);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ISsh * This,
            BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Host )( 
            ISsh * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Host )( 
            ISsh * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Port )( 
            ISsh * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Port )( 
            ISsh * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequireHostVerification )( 
            ISsh * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RequireHostVerification )( 
            ISsh * This,
            /* [in] */ BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            ISsh * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserName )( 
            ISsh * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Password )( 
            ISsh * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Password )( 
            ISsh * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PrivateKeyFile )( 
            ISsh * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PrivateKeyFile )( 
            ISsh * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Command )( 
            ISsh * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Command )( 
            ISsh * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScriptTimeOut )( 
            ISsh * This,
            /* [retval][out] */ long *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScriptTimeOut )( 
            ISsh * This,
            /* [in] */ long newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StdOut )( 
            ISsh * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StdErr )( 
            ISsh * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Run )( 
            ISsh * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Sleep )( 
            ISsh * This,
            LONG lMilliSeconds);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sysTmpFileRes )( 
            ISsh * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_sysTmpFileRes )( 
            ISsh * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sysTmpFileOut )( 
            ISsh * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_sysTmpFileOut )( 
            ISsh * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sysTmpFileErr )( 
            ISsh * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_sysTmpFileErr )( 
            ISsh * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            ISsh * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HostFingerprint )( 
            ISsh * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AcceptHostKey )( 
            ISsh * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AcceptHostKey )( 
            ISsh * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProtocolError )( 
            ISsh * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } ISshVtbl;

    interface ISsh
    {
        CONST_VTBL struct ISshVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISsh_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISsh_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISsh_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISsh_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISsh_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISsh_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISsh_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISsh_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define ISsh_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define ISsh_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define ISsh_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define ISsh_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define ISsh_get_LogFile(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFile(This,pVal) ) 

#define ISsh_put_LogFile(This,newVal)	\
    ( (This)->lpVtbl -> put_LogFile(This,newVal) ) 

#define ISsh_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define ISsh_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define ISsh_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ISsh_GetErrorDescription(This,ErrorCode,__MIDL__ISsh0000)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,ErrorCode,__MIDL__ISsh0000) ) 

#define ISsh_Activate(This,bstrRegKey,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,bstrRegKey,bPersistent) ) 

#define ISsh_get_Host(This,pVal)	\
    ( (This)->lpVtbl -> get_Host(This,pVal) ) 

#define ISsh_put_Host(This,newVal)	\
    ( (This)->lpVtbl -> put_Host(This,newVal) ) 

#define ISsh_get_Port(This,pVal)	\
    ( (This)->lpVtbl -> get_Port(This,pVal) ) 

#define ISsh_put_Port(This,newVal)	\
    ( (This)->lpVtbl -> put_Port(This,newVal) ) 

#define ISsh_get_RequireHostVerification(This,pVal)	\
    ( (This)->lpVtbl -> get_RequireHostVerification(This,pVal) ) 

#define ISsh_put_RequireHostVerification(This,newVal)	\
    ( (This)->lpVtbl -> put_RequireHostVerification(This,newVal) ) 

#define ISsh_get_UserName(This,pVal)	\
    ( (This)->lpVtbl -> get_UserName(This,pVal) ) 

#define ISsh_put_UserName(This,newVal)	\
    ( (This)->lpVtbl -> put_UserName(This,newVal) ) 

#define ISsh_get_Password(This,pVal)	\
    ( (This)->lpVtbl -> get_Password(This,pVal) ) 

#define ISsh_put_Password(This,newVal)	\
    ( (This)->lpVtbl -> put_Password(This,newVal) ) 

#define ISsh_get_PrivateKeyFile(This,pVal)	\
    ( (This)->lpVtbl -> get_PrivateKeyFile(This,pVal) ) 

#define ISsh_put_PrivateKeyFile(This,newVal)	\
    ( (This)->lpVtbl -> put_PrivateKeyFile(This,newVal) ) 

#define ISsh_get_Command(This,pVal)	\
    ( (This)->lpVtbl -> get_Command(This,pVal) ) 

#define ISsh_put_Command(This,newVal)	\
    ( (This)->lpVtbl -> put_Command(This,newVal) ) 

#define ISsh_get_ScriptTimeOut(This,pVal)	\
    ( (This)->lpVtbl -> get_ScriptTimeOut(This,pVal) ) 

#define ISsh_put_ScriptTimeOut(This,newVal)	\
    ( (This)->lpVtbl -> put_ScriptTimeOut(This,newVal) ) 

#define ISsh_get_StdOut(This,pVal)	\
    ( (This)->lpVtbl -> get_StdOut(This,pVal) ) 

#define ISsh_get_StdErr(This,pVal)	\
    ( (This)->lpVtbl -> get_StdErr(This,pVal) ) 

#define ISsh_Run(This)	\
    ( (This)->lpVtbl -> Run(This) ) 

#define ISsh_Sleep(This,lMilliSeconds)	\
    ( (This)->lpVtbl -> Sleep(This,lMilliSeconds) ) 

#define ISsh_get_sysTmpFileRes(This,pVal)	\
    ( (This)->lpVtbl -> get_sysTmpFileRes(This,pVal) ) 

#define ISsh_put_sysTmpFileRes(This,newVal)	\
    ( (This)->lpVtbl -> put_sysTmpFileRes(This,newVal) ) 

#define ISsh_get_sysTmpFileOut(This,pVal)	\
    ( (This)->lpVtbl -> get_sysTmpFileOut(This,pVal) ) 

#define ISsh_put_sysTmpFileOut(This,newVal)	\
    ( (This)->lpVtbl -> put_sysTmpFileOut(This,newVal) ) 

#define ISsh_get_sysTmpFileErr(This,pVal)	\
    ( (This)->lpVtbl -> get_sysTmpFileErr(This,pVal) ) 

#define ISsh_put_sysTmpFileErr(This,newVal)	\
    ( (This)->lpVtbl -> put_sysTmpFileErr(This,newVal) ) 

#define ISsh_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#define ISsh_get_HostFingerprint(This,pVal)	\
    ( (This)->lpVtbl -> get_HostFingerprint(This,pVal) ) 

#define ISsh_get_AcceptHostKey(This,pVal)	\
    ( (This)->lpVtbl -> get_AcceptHostKey(This,pVal) ) 

#define ISsh_put_AcceptHostKey(This,newVal)	\
    ( (This)->lpVtbl -> put_AcceptHostKey(This,newVal) ) 

#define ISsh_get_ProtocolError(This,pVal)	\
    ( (This)->lpVtbl -> get_ProtocolError(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISsh_INTERFACE_DEFINED__ */


#ifndef __ISnmpMibBrowser_INTERFACE_DEFINED__
#define __ISnmpMibBrowser_INTERFACE_DEFINED__

/* interface ISnmpMibBrowser */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISnmpMibBrowser;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3FEF0C60-A4D8-4740-A6B7-5DF4388996B0")
    ISnmpMibBrowser : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            LONG lError,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR bstrRegistrationCode,
            /* [defaultvalue][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE LoadMibFile( 
            BSTR bstrFileName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Get( 
            BSTR bstrParent,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetNext( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISnmpMibBrowserVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISnmpMibBrowser * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISnmpMibBrowser * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISnmpMibBrowser * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISnmpMibBrowser * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISnmpMibBrowser * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISnmpMibBrowser * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISnmpMibBrowser * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ISnmpMibBrowser * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ISnmpMibBrowser * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            ISnmpMibBrowser * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            ISnmpMibBrowser * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            ISnmpMibBrowser * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            ISnmpMibBrowser * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            ISnmpMibBrowser * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            ISnmpMibBrowser * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            ISnmpMibBrowser * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ISnmpMibBrowser * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            ISnmpMibBrowser * This,
            LONG lError,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ISnmpMibBrowser * This,
            BSTR bstrRegistrationCode,
            /* [defaultvalue][in] */ BOOL bPersistent);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *LoadMibFile )( 
            ISnmpMibBrowser * This,
            BSTR bstrFileName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Get )( 
            ISnmpMibBrowser * This,
            BSTR bstrParent,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetNext )( 
            ISnmpMibBrowser * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            ISnmpMibBrowser * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } ISnmpMibBrowserVtbl;

    interface ISnmpMibBrowser
    {
        CONST_VTBL struct ISnmpMibBrowserVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISnmpMibBrowser_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISnmpMibBrowser_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISnmpMibBrowser_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISnmpMibBrowser_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISnmpMibBrowser_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISnmpMibBrowser_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISnmpMibBrowser_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISnmpMibBrowser_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define ISnmpMibBrowser_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define ISnmpMibBrowser_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define ISnmpMibBrowser_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define ISnmpMibBrowser_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define ISnmpMibBrowser_get_LogFile(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFile(This,pVal) ) 

#define ISnmpMibBrowser_put_LogFile(This,newVal)	\
    ( (This)->lpVtbl -> put_LogFile(This,newVal) ) 

#define ISnmpMibBrowser_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define ISnmpMibBrowser_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define ISnmpMibBrowser_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ISnmpMibBrowser_GetErrorDescription(This,lError,pVal)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,lError,pVal) ) 

#define ISnmpMibBrowser_Activate(This,bstrRegistrationCode,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,bstrRegistrationCode,bPersistent) ) 

#define ISnmpMibBrowser_LoadMibFile(This,bstrFileName)	\
    ( (This)->lpVtbl -> LoadMibFile(This,bstrFileName) ) 

#define ISnmpMibBrowser_Get(This,bstrParent,pVal)	\
    ( (This)->lpVtbl -> Get(This,bstrParent,pVal) ) 

#define ISnmpMibBrowser_GetNext(This,pVal)	\
    ( (This)->lpVtbl -> GetNext(This,pVal) ) 

#define ISnmpMibBrowser_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISnmpMibBrowser_INTERFACE_DEFINED__ */


#ifndef __ITftpServer_INTERFACE_DEFINED__
#define __ITftpServer_INTERFACE_DEFINED__

/* interface ITftpServer */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ITftpServer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("411DBA2E-A588-4F74-AD8B-4E426E63894A")
    ITftpServer : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HostPort( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_HostPort( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BinaryTransfer( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_BinaryTransfer( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Timeout( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Timeout( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PacketsSent( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BytesSent( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PacketsReceived( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BytesReceived( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            long ErrorCode,
            /* [retval][out] */ BSTR *__MIDL__ITftpServer0000) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Get( 
            /* [in] */ BSTR Host,
            /* [in] */ BSTR RemoteFile,
            /* [defaultvalue][in] */ BSTR LocalFile = L"") = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Put( 
            /* [in] */ BSTR Host,
            /* [in] */ BSTR LocalFile,
            /* [defaultvalue][in] */ BSTR RemoteFile = L"") = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITftpServerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITftpServer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITftpServer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITftpServer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITftpServer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITftpServer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITftpServer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITftpServer * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ITftpServer * This,
            /* [retval][out] */ long *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ITftpServer * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            ITftpServer * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            ITftpServer * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            ITftpServer * This,
            /* [in] */ long newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            ITftpServer * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            ITftpServer * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            ITftpServer * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            ITftpServer * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HostPort )( 
            ITftpServer * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HostPort )( 
            ITftpServer * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BinaryTransfer )( 
            ITftpServer * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BinaryTransfer )( 
            ITftpServer * This,
            /* [in] */ BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Timeout )( 
            ITftpServer * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Timeout )( 
            ITftpServer * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PacketsSent )( 
            ITftpServer * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BytesSent )( 
            ITftpServer * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PacketsReceived )( 
            ITftpServer * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BytesReceived )( 
            ITftpServer * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ITftpServer * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            ITftpServer * This,
            long ErrorCode,
            /* [retval][out] */ BSTR *__MIDL__ITftpServer0000);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ITftpServer * This,
            BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Get )( 
            ITftpServer * This,
            /* [in] */ BSTR Host,
            /* [in] */ BSTR RemoteFile,
            /* [defaultvalue][in] */ BSTR LocalFile);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Put )( 
            ITftpServer * This,
            /* [in] */ BSTR Host,
            /* [in] */ BSTR LocalFile,
            /* [defaultvalue][in] */ BSTR RemoteFile);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            ITftpServer * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } ITftpServerVtbl;

    interface ITftpServer
    {
        CONST_VTBL struct ITftpServerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITftpServer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITftpServer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITftpServer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITftpServer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITftpServer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITftpServer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITftpServer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITftpServer_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define ITftpServer_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define ITftpServer_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define ITftpServer_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define ITftpServer_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define ITftpServer_get_LogFile(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFile(This,pVal) ) 

#define ITftpServer_put_LogFile(This,newVal)	\
    ( (This)->lpVtbl -> put_LogFile(This,newVal) ) 

#define ITftpServer_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define ITftpServer_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define ITftpServer_get_HostPort(This,pVal)	\
    ( (This)->lpVtbl -> get_HostPort(This,pVal) ) 

#define ITftpServer_put_HostPort(This,newVal)	\
    ( (This)->lpVtbl -> put_HostPort(This,newVal) ) 

#define ITftpServer_get_BinaryTransfer(This,pVal)	\
    ( (This)->lpVtbl -> get_BinaryTransfer(This,pVal) ) 

#define ITftpServer_put_BinaryTransfer(This,newVal)	\
    ( (This)->lpVtbl -> put_BinaryTransfer(This,newVal) ) 

#define ITftpServer_get_Timeout(This,pVal)	\
    ( (This)->lpVtbl -> get_Timeout(This,pVal) ) 

#define ITftpServer_put_Timeout(This,newVal)	\
    ( (This)->lpVtbl -> put_Timeout(This,newVal) ) 

#define ITftpServer_get_PacketsSent(This,pVal)	\
    ( (This)->lpVtbl -> get_PacketsSent(This,pVal) ) 

#define ITftpServer_get_BytesSent(This,pVal)	\
    ( (This)->lpVtbl -> get_BytesSent(This,pVal) ) 

#define ITftpServer_get_PacketsReceived(This,pVal)	\
    ( (This)->lpVtbl -> get_PacketsReceived(This,pVal) ) 

#define ITftpServer_get_BytesReceived(This,pVal)	\
    ( (This)->lpVtbl -> get_BytesReceived(This,pVal) ) 

#define ITftpServer_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ITftpServer_GetErrorDescription(This,ErrorCode,__MIDL__ITftpServer0000)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,ErrorCode,__MIDL__ITftpServer0000) ) 

#define ITftpServer_Activate(This,bstrRegKey,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,bstrRegKey,bPersistent) ) 

#define ITftpServer_Get(This,Host,RemoteFile,LocalFile)	\
    ( (This)->lpVtbl -> Get(This,Host,RemoteFile,LocalFile) ) 

#define ITftpServer_Put(This,Host,LocalFile,RemoteFile)	\
    ( (This)->lpVtbl -> Put(This,Host,LocalFile,RemoteFile) ) 

#define ITftpServer_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITftpServer_INTERFACE_DEFINED__ */


#ifndef __IMsn_INTERFACE_DEFINED__
#define __IMsn_INTERFACE_DEFINED__

/* interface IMsn */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsn;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6EA3B1C3-71BA-4404-AA01-BB39CE2A3423")
    IMsn : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Server( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Server( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ServerPort( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ServerPort( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ServerTimeout( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ServerTimeout( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MsnAccount( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MsnAccount( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MsnPassword( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MsnPassword( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MsnDisplayName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MsnDisplayName( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Message( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Message( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            /* [in] */ LONG lErrorCode,
            /* [retval][out] */ BSTR *pErrorDescription) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            /* [in] */ BSTR bstrRegKey,
            /* [in] */ VARIANT_BOOL bPersistent) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddRecipient( 
            /* [in] */ BSTR bstrRecipient) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Send( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMsnVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsn * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsn * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsn * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsn * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsn * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsn * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsn * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IMsn * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IMsn * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            IMsn * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            IMsn * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            IMsn * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            IMsn * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            IMsn * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            IMsn * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            IMsn * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IMsn * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Server )( 
            IMsn * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Server )( 
            IMsn * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ServerPort )( 
            IMsn * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ServerPort )( 
            IMsn * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ServerTimeout )( 
            IMsn * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ServerTimeout )( 
            IMsn * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MsnAccount )( 
            IMsn * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MsnAccount )( 
            IMsn * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MsnPassword )( 
            IMsn * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MsnPassword )( 
            IMsn * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MsnDisplayName )( 
            IMsn * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MsnDisplayName )( 
            IMsn * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Message )( 
            IMsn * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Message )( 
            IMsn * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IMsn * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IMsn * This,
            /* [in] */ LONG lErrorCode,
            /* [retval][out] */ BSTR *pErrorDescription);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IMsn * This,
            /* [in] */ BSTR bstrRegKey,
            /* [in] */ VARIANT_BOOL bPersistent);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddRecipient )( 
            IMsn * This,
            /* [in] */ BSTR bstrRecipient);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Send )( 
            IMsn * This);
        
        END_INTERFACE
    } IMsnVtbl;

    interface IMsn
    {
        CONST_VTBL struct IMsnVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsn_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsn_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsn_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsn_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsn_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsn_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsn_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsn_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define IMsn_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define IMsn_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define IMsn_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define IMsn_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define IMsn_get_LogFile(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFile(This,pVal) ) 

#define IMsn_put_LogFile(This,newVal)	\
    ( (This)->lpVtbl -> put_LogFile(This,newVal) ) 

#define IMsn_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define IMsn_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define IMsn_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#define IMsn_get_Server(This,pVal)	\
    ( (This)->lpVtbl -> get_Server(This,pVal) ) 

#define IMsn_put_Server(This,newVal)	\
    ( (This)->lpVtbl -> put_Server(This,newVal) ) 

#define IMsn_get_ServerPort(This,pVal)	\
    ( (This)->lpVtbl -> get_ServerPort(This,pVal) ) 

#define IMsn_put_ServerPort(This,newVal)	\
    ( (This)->lpVtbl -> put_ServerPort(This,newVal) ) 

#define IMsn_get_ServerTimeout(This,pVal)	\
    ( (This)->lpVtbl -> get_ServerTimeout(This,pVal) ) 

#define IMsn_put_ServerTimeout(This,newVal)	\
    ( (This)->lpVtbl -> put_ServerTimeout(This,newVal) ) 

#define IMsn_get_MsnAccount(This,pVal)	\
    ( (This)->lpVtbl -> get_MsnAccount(This,pVal) ) 

#define IMsn_put_MsnAccount(This,newVal)	\
    ( (This)->lpVtbl -> put_MsnAccount(This,newVal) ) 

#define IMsn_get_MsnPassword(This,pVal)	\
    ( (This)->lpVtbl -> get_MsnPassword(This,pVal) ) 

#define IMsn_put_MsnPassword(This,newVal)	\
    ( (This)->lpVtbl -> put_MsnPassword(This,newVal) ) 

#define IMsn_get_MsnDisplayName(This,pVal)	\
    ( (This)->lpVtbl -> get_MsnDisplayName(This,pVal) ) 

#define IMsn_put_MsnDisplayName(This,newVal)	\
    ( (This)->lpVtbl -> put_MsnDisplayName(This,newVal) ) 

#define IMsn_get_Message(This,pVal)	\
    ( (This)->lpVtbl -> get_Message(This,pVal) ) 

#define IMsn_put_Message(This,newVal)	\
    ( (This)->lpVtbl -> put_Message(This,newVal) ) 

#define IMsn_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IMsn_GetErrorDescription(This,lErrorCode,pErrorDescription)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,lErrorCode,pErrorDescription) ) 

#define IMsn_Activate(This,bstrRegKey,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,bstrRegKey,bPersistent) ) 

#define IMsn_AddRecipient(This,bstrRecipient)	\
    ( (This)->lpVtbl -> AddRecipient(This,bstrRecipient) ) 

#define IMsn_Send(This)	\
    ( (This)->lpVtbl -> Send(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsn_INTERFACE_DEFINED__ */


#ifndef __IRadius_INTERFACE_DEFINED__
#define __IRadius_INTERFACE_DEFINED__

/* interface IRadius */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IRadius;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8218765A-2229-40DF-B600-A8A64AF09AC5")
    IRadius : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Port( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Port( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Timeout( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Timeout( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            /* [in] */ LONG ErrorCode,
            /* [retval][out] */ BSTR *pErrorString) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Activate( 
            /* [in] */ BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CheckAccess( 
            BSTR Host,
            BSTR User,
            BSTR Password,
            BSTR Secret) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRadiusVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRadius * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRadius * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRadius * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRadius * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRadius * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRadius * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRadius * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IRadius * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IRadius * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            IRadius * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            IRadius * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            IRadius * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            IRadius * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            IRadius * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            IRadius * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            IRadius * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IRadius * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Port )( 
            IRadius * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Port )( 
            IRadius * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Timeout )( 
            IRadius * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Timeout )( 
            IRadius * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IRadius * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IRadius * This,
            /* [in] */ LONG ErrorCode,
            /* [retval][out] */ BSTR *pErrorString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IRadius * This,
            /* [in] */ BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CheckAccess )( 
            IRadius * This,
            BSTR Host,
            BSTR User,
            BSTR Password,
            BSTR Secret);
        
        END_INTERFACE
    } IRadiusVtbl;

    interface IRadius
    {
        CONST_VTBL struct IRadiusVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRadius_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRadius_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRadius_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRadius_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRadius_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRadius_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRadius_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRadius_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define IRadius_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define IRadius_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define IRadius_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define IRadius_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define IRadius_get_LogFile(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFile(This,pVal) ) 

#define IRadius_put_LogFile(This,newVal)	\
    ( (This)->lpVtbl -> put_LogFile(This,newVal) ) 

#define IRadius_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define IRadius_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define IRadius_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#define IRadius_get_Port(This,pVal)	\
    ( (This)->lpVtbl -> get_Port(This,pVal) ) 

#define IRadius_put_Port(This,newVal)	\
    ( (This)->lpVtbl -> put_Port(This,newVal) ) 

#define IRadius_get_Timeout(This,pVal)	\
    ( (This)->lpVtbl -> get_Timeout(This,pVal) ) 

#define IRadius_put_Timeout(This,newVal)	\
    ( (This)->lpVtbl -> put_Timeout(This,newVal) ) 

#define IRadius_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IRadius_GetErrorDescription(This,ErrorCode,pErrorString)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,ErrorCode,pErrorString) ) 

#define IRadius_Activate(This,bstrRegKey,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,bstrRegKey,bPersistent) ) 

#define IRadius_CheckAccess(This,Host,User,Password,Secret)	\
    ( (This)->lpVtbl -> CheckAccess(This,Host,User,Password,Secret) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRadius_INTERFACE_DEFINED__ */


#ifndef __IScp_INTERFACE_DEFINED__
#define __IScp_INTERFACE_DEFINED__

/* interface IScp */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IScp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4116F2EA-0122-496A-A70E-AFFD0A9B5F6A")
    IScp : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProtocolError( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_sysTempPath( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_sysTempPath( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Host( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Host( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Port( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Port( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserName( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Password( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Password( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PrivateKeyFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PrivateKeyFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HostFingerprint( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AcceptHostKey( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AcceptHostKey( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Recursive( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Recursive( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PreserveAttributes( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PreserveAttributes( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Compression( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Compression( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CopyToRemote( 
            BSTR localPath,
            BSTR remotePath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CopyToLocal( 
            BSTR remotePath,
            BSTR localPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            LONG lError,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR bstrRegKey,
            BOOL bPersistent) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Sleep( 
            LONG lMilliseconds) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IScpVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IScp * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IScp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IScp * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IScp * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IScp * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IScp * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IScp * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IScp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            IScp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IScp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            IScp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            IScp * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            IScp * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            IScp * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            IScp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            IScp * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IScp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProtocolError )( 
            IScp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_sysTempPath )( 
            IScp * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sysTempPath )( 
            IScp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Host )( 
            IScp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Host )( 
            IScp * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Port )( 
            IScp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Port )( 
            IScp * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            IScp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserName )( 
            IScp * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Password )( 
            IScp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Password )( 
            IScp * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PrivateKeyFile )( 
            IScp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PrivateKeyFile )( 
            IScp * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HostFingerprint )( 
            IScp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AcceptHostKey )( 
            IScp * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AcceptHostKey )( 
            IScp * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Recursive )( 
            IScp * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Recursive )( 
            IScp * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PreserveAttributes )( 
            IScp * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PreserveAttributes )( 
            IScp * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Compression )( 
            IScp * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Compression )( 
            IScp * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IScp * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyToRemote )( 
            IScp * This,
            BSTR localPath,
            BSTR remotePath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyToLocal )( 
            IScp * This,
            BSTR remotePath,
            BSTR localPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IScp * This,
            LONG lError,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IScp * This,
            BSTR bstrRegKey,
            BOOL bPersistent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Sleep )( 
            IScp * This,
            LONG lMilliseconds);
        
        END_INTERFACE
    } IScpVtbl;

    interface IScp
    {
        CONST_VTBL struct IScpVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IScp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IScp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IScp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IScp_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IScp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IScp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IScp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IScp_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define IScp_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define IScp_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#define IScp_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define IScp_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define IScp_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define IScp_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define IScp_get_LogFile(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFile(This,pVal) ) 

#define IScp_put_LogFile(This,newVal)	\
    ( (This)->lpVtbl -> put_LogFile(This,newVal) ) 

#define IScp_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define IScp_get_ProtocolError(This,pVal)	\
    ( (This)->lpVtbl -> get_ProtocolError(This,pVal) ) 

#define IScp_put_sysTempPath(This,newVal)	\
    ( (This)->lpVtbl -> put_sysTempPath(This,newVal) ) 

#define IScp_get_sysTempPath(This,pVal)	\
    ( (This)->lpVtbl -> get_sysTempPath(This,pVal) ) 

#define IScp_get_Host(This,pVal)	\
    ( (This)->lpVtbl -> get_Host(This,pVal) ) 

#define IScp_put_Host(This,newVal)	\
    ( (This)->lpVtbl -> put_Host(This,newVal) ) 

#define IScp_get_Port(This,pVal)	\
    ( (This)->lpVtbl -> get_Port(This,pVal) ) 

#define IScp_put_Port(This,newVal)	\
    ( (This)->lpVtbl -> put_Port(This,newVal) ) 

#define IScp_get_UserName(This,pVal)	\
    ( (This)->lpVtbl -> get_UserName(This,pVal) ) 

#define IScp_put_UserName(This,newVal)	\
    ( (This)->lpVtbl -> put_UserName(This,newVal) ) 

#define IScp_get_Password(This,pVal)	\
    ( (This)->lpVtbl -> get_Password(This,pVal) ) 

#define IScp_put_Password(This,newVal)	\
    ( (This)->lpVtbl -> put_Password(This,newVal) ) 

#define IScp_get_PrivateKeyFile(This,pVal)	\
    ( (This)->lpVtbl -> get_PrivateKeyFile(This,pVal) ) 

#define IScp_put_PrivateKeyFile(This,newVal)	\
    ( (This)->lpVtbl -> put_PrivateKeyFile(This,newVal) ) 

#define IScp_get_HostFingerprint(This,pVal)	\
    ( (This)->lpVtbl -> get_HostFingerprint(This,pVal) ) 

#define IScp_get_AcceptHostKey(This,pVal)	\
    ( (This)->lpVtbl -> get_AcceptHostKey(This,pVal) ) 

#define IScp_put_AcceptHostKey(This,newVal)	\
    ( (This)->lpVtbl -> put_AcceptHostKey(This,newVal) ) 

#define IScp_get_Recursive(This,pVal)	\
    ( (This)->lpVtbl -> get_Recursive(This,pVal) ) 

#define IScp_put_Recursive(This,newVal)	\
    ( (This)->lpVtbl -> put_Recursive(This,newVal) ) 

#define IScp_get_PreserveAttributes(This,pVal)	\
    ( (This)->lpVtbl -> get_PreserveAttributes(This,pVal) ) 

#define IScp_put_PreserveAttributes(This,newVal)	\
    ( (This)->lpVtbl -> put_PreserveAttributes(This,newVal) ) 

#define IScp_get_Compression(This,pVal)	\
    ( (This)->lpVtbl -> get_Compression(This,pVal) ) 

#define IScp_put_Compression(This,newVal)	\
    ( (This)->lpVtbl -> put_Compression(This,newVal) ) 

#define IScp_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IScp_CopyToRemote(This,localPath,remotePath)	\
    ( (This)->lpVtbl -> CopyToRemote(This,localPath,remotePath) ) 

#define IScp_CopyToLocal(This,remotePath,localPath)	\
    ( (This)->lpVtbl -> CopyToLocal(This,remotePath,localPath) ) 

#define IScp_GetErrorDescription(This,lError,pVal)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,lError,pVal) ) 

#define IScp_Activate(This,bstrRegKey,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,bstrRegKey,bPersistent) ) 

#define IScp_Sleep(This,lMilliseconds)	\
    ( (This)->lpVtbl -> Sleep(This,lMilliseconds) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IScp_INTERFACE_DEFINED__ */


#ifndef __ISFtp_INTERFACE_DEFINED__
#define __ISFtp_INTERFACE_DEFINED__

/* interface ISFtp */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISFtp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("06B4D9C1-3A2D-43C3-8E1E-72BD1EBA6B4D")
    ISFtp : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionId( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProtocolError( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_sysTempPath( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_sysTempPath( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Host( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Host( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Port( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Port( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserName( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Password( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Password( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PrivateKeyFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PrivateKeyFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AcceptHostKey( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AcceptHostKey( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HostFingerprint( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Compression( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Compression( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Connect( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Disconnect( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCurrentDir( 
            /* [retval][out] */ BSTR *bstrCwd) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ChangeDir( 
            BSTR bstrNewDir) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateDir( 
            BSTR bstrDirName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RenameDir( 
            BSTR bstrOldName,
            BSTR bstrNewName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteDir( 
            BSTR bstrDirName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RenameFile( 
            BSTR bstrOldFile,
            BSTR bstrNewFile) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteFile( 
            BSTR bstrFileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFile( 
            BSTR bstrRemotePath,
            BSTR bstrLocalPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PutFile( 
            BSTR bstrLocalPath,
            BSTR bstrRemotePath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindFile( 
            BSTR bstrSearch,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindFirstFile( 
            BSTR bstrSearch,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindNextFile( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            /* [in] */ LONG lErrorCode,
            /* [retval][out] */ BSTR *bstrErrorDescription) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Activate( 
            /* [in] */ BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Sleep( 
            /* [in] */ LONG lMilliSeconds) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISFtpVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISFtp * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISFtp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISFtp * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISFtp * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISFtp * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISFtp * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISFtp * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ISFtp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            ISFtp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            ISFtp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            ISFtp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            ISFtp * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionId )( 
            ISFtp * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            ISFtp * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            ISFtp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            ISFtp * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ISFtp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProtocolError )( 
            ISFtp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_sysTempPath )( 
            ISFtp * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sysTempPath )( 
            ISFtp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Host )( 
            ISFtp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Host )( 
            ISFtp * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Port )( 
            ISFtp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Port )( 
            ISFtp * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            ISFtp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserName )( 
            ISFtp * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Password )( 
            ISFtp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Password )( 
            ISFtp * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PrivateKeyFile )( 
            ISFtp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PrivateKeyFile )( 
            ISFtp * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AcceptHostKey )( 
            ISFtp * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AcceptHostKey )( 
            ISFtp * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HostFingerprint )( 
            ISFtp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Compression )( 
            ISFtp * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Compression )( 
            ISFtp * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ISFtp * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            ISFtp * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            ISFtp * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCurrentDir )( 
            ISFtp * This,
            /* [retval][out] */ BSTR *bstrCwd);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ChangeDir )( 
            ISFtp * This,
            BSTR bstrNewDir);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateDir )( 
            ISFtp * This,
            BSTR bstrDirName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RenameDir )( 
            ISFtp * This,
            BSTR bstrOldName,
            BSTR bstrNewName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteDir )( 
            ISFtp * This,
            BSTR bstrDirName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RenameFile )( 
            ISFtp * This,
            BSTR bstrOldFile,
            BSTR bstrNewFile);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteFile )( 
            ISFtp * This,
            BSTR bstrFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFile )( 
            ISFtp * This,
            BSTR bstrRemotePath,
            BSTR bstrLocalPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PutFile )( 
            ISFtp * This,
            BSTR bstrLocalPath,
            BSTR bstrRemotePath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindFile )( 
            ISFtp * This,
            BSTR bstrSearch,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindFirstFile )( 
            ISFtp * This,
            BSTR bstrSearch,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindNextFile )( 
            ISFtp * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            ISFtp * This,
            /* [in] */ LONG lErrorCode,
            /* [retval][out] */ BSTR *bstrErrorDescription);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ISFtp * This,
            /* [in] */ BSTR bstrRegKey,
            /* [defaultvalue][in] */ BOOL bPersistent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Sleep )( 
            ISFtp * This,
            /* [in] */ LONG lMilliSeconds);
        
        END_INTERFACE
    } ISFtpVtbl;

    interface ISFtp
    {
        CONST_VTBL struct ISFtpVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISFtp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISFtp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISFtp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISFtp_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISFtp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISFtp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISFtp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISFtp_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define ISFtp_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define ISFtp_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#define ISFtp_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define ISFtp_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define ISFtp_put_DistributionId(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionId(This,newVal) ) 

#define ISFtp_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define ISFtp_get_LogFile(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFile(This,pVal) ) 

#define ISFtp_put_LogFile(This,newVal)	\
    ( (This)->lpVtbl -> put_LogFile(This,newVal) ) 

#define ISFtp_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define ISFtp_get_ProtocolError(This,pVal)	\
    ( (This)->lpVtbl -> get_ProtocolError(This,pVal) ) 

#define ISFtp_put_sysTempPath(This,newVal)	\
    ( (This)->lpVtbl -> put_sysTempPath(This,newVal) ) 

#define ISFtp_get_sysTempPath(This,pVal)	\
    ( (This)->lpVtbl -> get_sysTempPath(This,pVal) ) 

#define ISFtp_get_Host(This,pVal)	\
    ( (This)->lpVtbl -> get_Host(This,pVal) ) 

#define ISFtp_put_Host(This,newVal)	\
    ( (This)->lpVtbl -> put_Host(This,newVal) ) 

#define ISFtp_get_Port(This,pVal)	\
    ( (This)->lpVtbl -> get_Port(This,pVal) ) 

#define ISFtp_put_Port(This,newVal)	\
    ( (This)->lpVtbl -> put_Port(This,newVal) ) 

#define ISFtp_get_UserName(This,pVal)	\
    ( (This)->lpVtbl -> get_UserName(This,pVal) ) 

#define ISFtp_put_UserName(This,newVal)	\
    ( (This)->lpVtbl -> put_UserName(This,newVal) ) 

#define ISFtp_get_Password(This,pVal)	\
    ( (This)->lpVtbl -> get_Password(This,pVal) ) 

#define ISFtp_put_Password(This,newVal)	\
    ( (This)->lpVtbl -> put_Password(This,newVal) ) 

#define ISFtp_get_PrivateKeyFile(This,pVal)	\
    ( (This)->lpVtbl -> get_PrivateKeyFile(This,pVal) ) 

#define ISFtp_put_PrivateKeyFile(This,newVal)	\
    ( (This)->lpVtbl -> put_PrivateKeyFile(This,newVal) ) 

#define ISFtp_get_AcceptHostKey(This,pVal)	\
    ( (This)->lpVtbl -> get_AcceptHostKey(This,pVal) ) 

#define ISFtp_put_AcceptHostKey(This,newVal)	\
    ( (This)->lpVtbl -> put_AcceptHostKey(This,newVal) ) 

#define ISFtp_get_HostFingerprint(This,pVal)	\
    ( (This)->lpVtbl -> get_HostFingerprint(This,pVal) ) 

#define ISFtp_get_Compression(This,pVal)	\
    ( (This)->lpVtbl -> get_Compression(This,pVal) ) 

#define ISFtp_put_Compression(This,newVal)	\
    ( (This)->lpVtbl -> put_Compression(This,newVal) ) 

#define ISFtp_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ISFtp_Connect(This)	\
    ( (This)->lpVtbl -> Connect(This) ) 

#define ISFtp_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define ISFtp_GetCurrentDir(This,bstrCwd)	\
    ( (This)->lpVtbl -> GetCurrentDir(This,bstrCwd) ) 

#define ISFtp_ChangeDir(This,bstrNewDir)	\
    ( (This)->lpVtbl -> ChangeDir(This,bstrNewDir) ) 

#define ISFtp_CreateDir(This,bstrDirName)	\
    ( (This)->lpVtbl -> CreateDir(This,bstrDirName) ) 

#define ISFtp_RenameDir(This,bstrOldName,bstrNewName)	\
    ( (This)->lpVtbl -> RenameDir(This,bstrOldName,bstrNewName) ) 

#define ISFtp_DeleteDir(This,bstrDirName)	\
    ( (This)->lpVtbl -> DeleteDir(This,bstrDirName) ) 

#define ISFtp_RenameFile(This,bstrOldFile,bstrNewFile)	\
    ( (This)->lpVtbl -> RenameFile(This,bstrOldFile,bstrNewFile) ) 

#define ISFtp_DeleteFile(This,bstrFileName)	\
    ( (This)->lpVtbl -> DeleteFile(This,bstrFileName) ) 

#define ISFtp_GetFile(This,bstrRemotePath,bstrLocalPath)	\
    ( (This)->lpVtbl -> GetFile(This,bstrRemotePath,bstrLocalPath) ) 

#define ISFtp_PutFile(This,bstrLocalPath,bstrRemotePath)	\
    ( (This)->lpVtbl -> PutFile(This,bstrLocalPath,bstrRemotePath) ) 

#define ISFtp_FindFile(This,bstrSearch,pVal)	\
    ( (This)->lpVtbl -> FindFile(This,bstrSearch,pVal) ) 

#define ISFtp_FindFirstFile(This,bstrSearch,pVal)	\
    ( (This)->lpVtbl -> FindFirstFile(This,bstrSearch,pVal) ) 

#define ISFtp_FindNextFile(This,pVal)	\
    ( (This)->lpVtbl -> FindNextFile(This,pVal) ) 

#define ISFtp_GetErrorDescription(This,lErrorCode,bstrErrorDescription)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,lErrorCode,bstrErrorDescription) ) 

#define ISFtp_Activate(This,bstrRegKey,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,bstrRegKey,bPersistent) ) 

#define ISFtp_Sleep(This,lMilliSeconds)	\
    ( (This)->lpVtbl -> Sleep(This,lMilliSeconds) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISFtp_INTERFACE_DEFINED__ */


#ifndef __ISFtpFile_INTERFACE_DEFINED__
#define __ISFtpFile_INTERFACE_DEFINED__

/* interface ISFtpFile */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISFtpFile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5479FBF8-C8BD-4DC0-9967-AAA27F768994")
    ISFtpFile : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SizeBytes( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SizeBytes( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SizeBytesHigh( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SizeBytesHigh( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SizeKB( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SizeMB( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsDirectory( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsDirectory( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Date( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Date( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DateSeconds( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DateSeconds( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISFtpFileVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISFtpFile * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISFtpFile * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISFtpFile * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISFtpFile * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISFtpFile * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISFtpFile * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISFtpFile * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ISFtpFile * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            ISFtpFile * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SizeBytes )( 
            ISFtpFile * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SizeBytes )( 
            ISFtpFile * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SizeBytesHigh )( 
            ISFtpFile * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SizeBytesHigh )( 
            ISFtpFile * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SizeKB )( 
            ISFtpFile * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SizeMB )( 
            ISFtpFile * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDirectory )( 
            ISFtpFile * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsDirectory )( 
            ISFtpFile * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Date )( 
            ISFtpFile * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Date )( 
            ISFtpFile * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DateSeconds )( 
            ISFtpFile * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DateSeconds )( 
            ISFtpFile * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ISFtpFile * This);
        
        END_INTERFACE
    } ISFtpFileVtbl;

    interface ISFtpFile
    {
        CONST_VTBL struct ISFtpFileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISFtpFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISFtpFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISFtpFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISFtpFile_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISFtpFile_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISFtpFile_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISFtpFile_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISFtpFile_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define ISFtpFile_put_Name(This,newVal)	\
    ( (This)->lpVtbl -> put_Name(This,newVal) ) 

#define ISFtpFile_get_SizeBytes(This,pVal)	\
    ( (This)->lpVtbl -> get_SizeBytes(This,pVal) ) 

#define ISFtpFile_put_SizeBytes(This,newVal)	\
    ( (This)->lpVtbl -> put_SizeBytes(This,newVal) ) 

#define ISFtpFile_get_SizeBytesHigh(This,pVal)	\
    ( (This)->lpVtbl -> get_SizeBytesHigh(This,pVal) ) 

#define ISFtpFile_put_SizeBytesHigh(This,newVal)	\
    ( (This)->lpVtbl -> put_SizeBytesHigh(This,newVal) ) 

#define ISFtpFile_get_SizeKB(This,pVal)	\
    ( (This)->lpVtbl -> get_SizeKB(This,pVal) ) 

#define ISFtpFile_get_SizeMB(This,pVal)	\
    ( (This)->lpVtbl -> get_SizeMB(This,pVal) ) 

#define ISFtpFile_get_IsDirectory(This,pVal)	\
    ( (This)->lpVtbl -> get_IsDirectory(This,pVal) ) 

#define ISFtpFile_put_IsDirectory(This,newVal)	\
    ( (This)->lpVtbl -> put_IsDirectory(This,newVal) ) 

#define ISFtpFile_get_Date(This,pVal)	\
    ( (This)->lpVtbl -> get_Date(This,pVal) ) 

#define ISFtpFile_put_Date(This,newVal)	\
    ( (This)->lpVtbl -> put_Date(This,newVal) ) 

#define ISFtpFile_get_DateSeconds(This,pVal)	\
    ( (This)->lpVtbl -> get_DateSeconds(This,pVal) ) 

#define ISFtpFile_put_DateSeconds(This,newVal)	\
    ( (This)->lpVtbl -> put_DateSeconds(This,newVal) ) 

#define ISFtpFile_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISFtpFile_INTERFACE_DEFINED__ */


#ifndef __IHttpEx_INTERFACE_DEFINED__
#define __IHttpEx_INTERFACE_DEFINED__

/* interface IHttpEx */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IHttpEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("805D87DC-5860-4562-BE30-802A47A2F7E0")
    IHttpEx : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            /* [in] */ LONG lErrorCode,
            /* [retval][out] */ BSTR *bstrErrorDescription) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Activate( 
            /* [in] */ BSTR bstrKey,
            /* [in] */ VARIANT_BOOL bPersistent) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProxyServer( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ProxyServer( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProxyAccount( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ProxyAccount( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProxyPassword( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ProxyPassword( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WebAccount( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_WebAccount( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WebPassword( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_WebPassword( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Get( 
            /* [in] */ BSTR bstrUrl,
            /* [retval][out] */ BSTR *bstrResponse) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Post( 
            /* [in] */ BSTR bstrUrl,
            /* [in] */ BSTR bstrData,
            /* [retval][out] */ BSTR *bstrResponse) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Head( 
            /* [in] */ BSTR bstrUrl,
            /* [retval][out] */ BSTR *bstrResponse) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFile( 
            /* [in] */ BSTR vsUrl,
            /* [in] */ BSTR bstrFileName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ConnectionPoolSize( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ConnectionPoolSize( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ConnectionExpireTimeout( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ConnectionExpireTimeout( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Sleep( 
            /* [in] */ LONG lTime) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RequestTimeout( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RequestTimeout( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ResponseTimeout( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ResponseTimeout( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserAgent( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserAgent( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddHeader( 
            /* [in] */ BSTR bstrHeader,
            /* [in] */ BSTR bstrValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastResponseCode( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UrlEncode( 
            /* [in] */ BSTR bstrIn,
            /* [retval][out] */ BSTR *bstrOut) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HttpLibrary( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HttpLibrary( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FollowRedirect( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FollowRedirect( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IHttpExVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IHttpEx * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IHttpEx * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IHttpEx * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IHttpEx * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IHttpEx * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IHttpEx * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IHttpEx * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IHttpEx * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            IHttpEx * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            IHttpEx * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IHttpEx * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            IHttpEx * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            IHttpEx * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IHttpEx * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IHttpEx * This,
            /* [in] */ LONG lErrorCode,
            /* [retval][out] */ BSTR *bstrErrorDescription);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IHttpEx * This,
            /* [in] */ BSTR bstrKey,
            /* [in] */ VARIANT_BOOL bPersistent);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IHttpEx * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyServer )( 
            IHttpEx * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProxyServer )( 
            IHttpEx * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyAccount )( 
            IHttpEx * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProxyAccount )( 
            IHttpEx * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyPassword )( 
            IHttpEx * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProxyPassword )( 
            IHttpEx * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WebAccount )( 
            IHttpEx * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WebAccount )( 
            IHttpEx * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WebPassword )( 
            IHttpEx * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WebPassword )( 
            IHttpEx * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Get )( 
            IHttpEx * This,
            /* [in] */ BSTR bstrUrl,
            /* [retval][out] */ BSTR *bstrResponse);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Post )( 
            IHttpEx * This,
            /* [in] */ BSTR bstrUrl,
            /* [in] */ BSTR bstrData,
            /* [retval][out] */ BSTR *bstrResponse);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Head )( 
            IHttpEx * This,
            /* [in] */ BSTR bstrUrl,
            /* [retval][out] */ BSTR *bstrResponse);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFile )( 
            IHttpEx * This,
            /* [in] */ BSTR vsUrl,
            /* [in] */ BSTR bstrFileName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionPoolSize )( 
            IHttpEx * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionPoolSize )( 
            IHttpEx * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionExpireTimeout )( 
            IHttpEx * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionExpireTimeout )( 
            IHttpEx * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Sleep )( 
            IHttpEx * This,
            /* [in] */ LONG lTime);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequestTimeout )( 
            IHttpEx * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RequestTimeout )( 
            IHttpEx * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResponseTimeout )( 
            IHttpEx * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ResponseTimeout )( 
            IHttpEx * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserAgent )( 
            IHttpEx * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserAgent )( 
            IHttpEx * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddHeader )( 
            IHttpEx * This,
            /* [in] */ BSTR bstrHeader,
            /* [in] */ BSTR bstrValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastResponseCode )( 
            IHttpEx * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UrlEncode )( 
            IHttpEx * This,
            /* [in] */ BSTR bstrIn,
            /* [retval][out] */ BSTR *bstrOut);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            IHttpEx * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HttpLibrary )( 
            IHttpEx * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HttpLibrary )( 
            IHttpEx * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FollowRedirect )( 
            IHttpEx * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FollowRedirect )( 
            IHttpEx * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        END_INTERFACE
    } IHttpExVtbl;

    interface IHttpEx
    {
        CONST_VTBL struct IHttpExVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHttpEx_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IHttpEx_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IHttpEx_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IHttpEx_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IHttpEx_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IHttpEx_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IHttpEx_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IHttpEx_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define IHttpEx_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define IHttpEx_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define IHttpEx_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define IHttpEx_get_LogFile(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFile(This,pVal) ) 

#define IHttpEx_put_LogFile(This,newVal)	\
    ( (This)->lpVtbl -> put_LogFile(This,newVal) ) 

#define IHttpEx_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IHttpEx_GetErrorDescription(This,lErrorCode,bstrErrorDescription)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,lErrorCode,bstrErrorDescription) ) 

#define IHttpEx_Activate(This,bstrKey,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,bstrKey,bPersistent) ) 

#define IHttpEx_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#define IHttpEx_get_ProxyServer(This,pVal)	\
    ( (This)->lpVtbl -> get_ProxyServer(This,pVal) ) 

#define IHttpEx_put_ProxyServer(This,newVal)	\
    ( (This)->lpVtbl -> put_ProxyServer(This,newVal) ) 

#define IHttpEx_get_ProxyAccount(This,pVal)	\
    ( (This)->lpVtbl -> get_ProxyAccount(This,pVal) ) 

#define IHttpEx_put_ProxyAccount(This,newVal)	\
    ( (This)->lpVtbl -> put_ProxyAccount(This,newVal) ) 

#define IHttpEx_get_ProxyPassword(This,pVal)	\
    ( (This)->lpVtbl -> get_ProxyPassword(This,pVal) ) 

#define IHttpEx_put_ProxyPassword(This,newVal)	\
    ( (This)->lpVtbl -> put_ProxyPassword(This,newVal) ) 

#define IHttpEx_get_WebAccount(This,pVal)	\
    ( (This)->lpVtbl -> get_WebAccount(This,pVal) ) 

#define IHttpEx_put_WebAccount(This,newVal)	\
    ( (This)->lpVtbl -> put_WebAccount(This,newVal) ) 

#define IHttpEx_get_WebPassword(This,pVal)	\
    ( (This)->lpVtbl -> get_WebPassword(This,pVal) ) 

#define IHttpEx_put_WebPassword(This,newVal)	\
    ( (This)->lpVtbl -> put_WebPassword(This,newVal) ) 

#define IHttpEx_Get(This,bstrUrl,bstrResponse)	\
    ( (This)->lpVtbl -> Get(This,bstrUrl,bstrResponse) ) 

#define IHttpEx_Post(This,bstrUrl,bstrData,bstrResponse)	\
    ( (This)->lpVtbl -> Post(This,bstrUrl,bstrData,bstrResponse) ) 

#define IHttpEx_Head(This,bstrUrl,bstrResponse)	\
    ( (This)->lpVtbl -> Head(This,bstrUrl,bstrResponse) ) 

#define IHttpEx_GetFile(This,vsUrl,bstrFileName)	\
    ( (This)->lpVtbl -> GetFile(This,vsUrl,bstrFileName) ) 

#define IHttpEx_get_ConnectionPoolSize(This,pVal)	\
    ( (This)->lpVtbl -> get_ConnectionPoolSize(This,pVal) ) 

#define IHttpEx_put_ConnectionPoolSize(This,newVal)	\
    ( (This)->lpVtbl -> put_ConnectionPoolSize(This,newVal) ) 

#define IHttpEx_get_ConnectionExpireTimeout(This,pVal)	\
    ( (This)->lpVtbl -> get_ConnectionExpireTimeout(This,pVal) ) 

#define IHttpEx_put_ConnectionExpireTimeout(This,newVal)	\
    ( (This)->lpVtbl -> put_ConnectionExpireTimeout(This,newVal) ) 

#define IHttpEx_Sleep(This,lTime)	\
    ( (This)->lpVtbl -> Sleep(This,lTime) ) 

#define IHttpEx_get_RequestTimeout(This,pVal)	\
    ( (This)->lpVtbl -> get_RequestTimeout(This,pVal) ) 

#define IHttpEx_put_RequestTimeout(This,newVal)	\
    ( (This)->lpVtbl -> put_RequestTimeout(This,newVal) ) 

#define IHttpEx_get_ResponseTimeout(This,pVal)	\
    ( (This)->lpVtbl -> get_ResponseTimeout(This,pVal) ) 

#define IHttpEx_put_ResponseTimeout(This,newVal)	\
    ( (This)->lpVtbl -> put_ResponseTimeout(This,newVal) ) 

#define IHttpEx_get_UserAgent(This,pVal)	\
    ( (This)->lpVtbl -> get_UserAgent(This,pVal) ) 

#define IHttpEx_put_UserAgent(This,newVal)	\
    ( (This)->lpVtbl -> put_UserAgent(This,newVal) ) 

#define IHttpEx_AddHeader(This,bstrHeader,bstrValue)	\
    ( (This)->lpVtbl -> AddHeader(This,bstrHeader,bstrValue) ) 

#define IHttpEx_get_LastResponseCode(This,pVal)	\
    ( (This)->lpVtbl -> get_LastResponseCode(This,pVal) ) 

#define IHttpEx_UrlEncode(This,bstrIn,bstrOut)	\
    ( (This)->lpVtbl -> UrlEncode(This,bstrIn,bstrOut) ) 

#define IHttpEx_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define IHttpEx_get_HttpLibrary(This,pVal)	\
    ( (This)->lpVtbl -> get_HttpLibrary(This,pVal) ) 

#define IHttpEx_put_HttpLibrary(This,newVal)	\
    ( (This)->lpVtbl -> put_HttpLibrary(This,newVal) ) 

#define IHttpEx_get_FollowRedirect(This,pVal)	\
    ( (This)->lpVtbl -> get_FollowRedirect(This,pVal) ) 

#define IHttpEx_put_FollowRedirect(This,newVal)	\
    ( (This)->lpVtbl -> put_FollowRedirect(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHttpEx_INTERFACE_DEFINED__ */



#ifndef __ASOCKETLib_LIBRARY_DEFINED__
#define __ASOCKETLib_LIBRARY_DEFINED__

/* library ASOCKETLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ASOCKETLib;

EXTERN_C const CLSID CLSID_RSh;

#ifdef __cplusplus

class DECLSPEC_UUID("5A128291-2445-441C-A8E9-ED886D053019")
RSh;
#endif

EXTERN_C const CLSID CLSID_Ntp;

#ifdef __cplusplus

class DECLSPEC_UUID("9591DC19-DD2F-4AD4-A3B6-65CDC428ABD1")
Ntp;
#endif

EXTERN_C const CLSID CLSID_WOL;

#ifdef __cplusplus

class DECLSPEC_UUID("454BE66D-12D0-43D0-87FE-99EE02E2C05B")
WOL;
#endif

EXTERN_C const CLSID CLSID_Icmp;

#ifdef __cplusplus

class DECLSPEC_UUID("743A672A-9985-4866-BC54-9C89087E01AE")
Icmp;
#endif

EXTERN_C const CLSID CLSID_Http;

#ifdef __cplusplus

class DECLSPEC_UUID("ACFF15A9-A9F6-4515-AD74-B325A796B877")
Http;
#endif

EXTERN_C const CLSID CLSID_SocketConstants;

#ifdef __cplusplus

class DECLSPEC_UUID("EC4937DE-1B46-4AB4-BE3B-2CEF007F0D36")
SocketConstants;
#endif

EXTERN_C const CLSID CLSID_SnmpManager;

#ifdef __cplusplus

class DECLSPEC_UUID("A16CD138-E448-47AA-BFD7-5A6F10C5793B")
SnmpManager;
#endif

EXTERN_C const CLSID CLSID_SnmpTrap;

#ifdef __cplusplus

class DECLSPEC_UUID("E00A6261-0E7E-46FD-AEFF-36995D4F202A")
SnmpTrap;
#endif

EXTERN_C const CLSID CLSID_SnmpTrapManager;

#ifdef __cplusplus

class DECLSPEC_UUID("634320AF-A7F3-4048-8A52-D1387F44B8CC")
SnmpTrapManager;
#endif

EXTERN_C const CLSID CLSID_FtpServer;

#ifdef __cplusplus

class DECLSPEC_UUID("0BBB8BEE-8043-4807-A9D6-8B5AFC8E0308")
FtpServer;
#endif

EXTERN_C const CLSID CLSID_FtpFile;

#ifdef __cplusplus

class DECLSPEC_UUID("B58DEFA2-B1D6-4381-AA80-E746F03F95CF")
FtpFile;
#endif

EXTERN_C const CLSID CLSID_Udp;

#ifdef __cplusplus

class DECLSPEC_UUID("01E89353-9C04-4B25-8CAF-436D147BEA0D")
Udp;
#endif

EXTERN_C const CLSID CLSID_SnmpObject;

#ifdef __cplusplus

class DECLSPEC_UUID("A6174470-3F28-4350-8621-BD0A20A5E0B6")
SnmpObject;
#endif

EXTERN_C const CLSID CLSID_Tcp;

#ifdef __cplusplus

class DECLSPEC_UUID("916C28A2-8314-4AA5-9E25-18E5DEFBE2A3")
Tcp;
#endif

EXTERN_C const CLSID CLSID_IPtoCountry;

#ifdef __cplusplus

class DECLSPEC_UUID("E6645574-3DB3-418F-AF16-229EF24EE2C8")
IPtoCountry;
#endif

EXTERN_C const CLSID CLSID_DnsServer;

#ifdef __cplusplus

class DECLSPEC_UUID("13BE898F-BED8-4DD5-95A8-1D07FC891E5A")
DnsServer;
#endif

EXTERN_C const CLSID CLSID_DnsRecord;

#ifdef __cplusplus

class DECLSPEC_UUID("3506465E-79C9-4486-AB94-D91EFF87CAC0")
DnsRecord;
#endif

EXTERN_C const CLSID CLSID_Ssh;

#ifdef __cplusplus

class DECLSPEC_UUID("EC34BA42-AFDE-4B9C-BDBF-CB994E5493E5")
Ssh;
#endif

EXTERN_C const CLSID CLSID_SnmpMibBrowser;

#ifdef __cplusplus

class DECLSPEC_UUID("895ABC88-39A6-4BA0-9733-2A7392D5AD50")
SnmpMibBrowser;
#endif

EXTERN_C const CLSID CLSID_TftpServer;

#ifdef __cplusplus

class DECLSPEC_UUID("115B3846-4A61-499B-AC97-7ED71862B7A9")
TftpServer;
#endif

EXTERN_C const CLSID CLSID_Msn;

#ifdef __cplusplus

class DECLSPEC_UUID("2F2FA2B6-3391-4BDC-8447-01E62DBCD367")
Msn;
#endif

EXTERN_C const CLSID CLSID_Radius;

#ifdef __cplusplus

class DECLSPEC_UUID("BA61EEFD-EA47-4E5B-BE28-89E71633E226")
Radius;
#endif

EXTERN_C const CLSID CLSID_Scp;

#ifdef __cplusplus

class DECLSPEC_UUID("14EDB06A-7BAF-403C-955A-87E01DD81368")
Scp;
#endif

EXTERN_C const CLSID CLSID_SFtp;

#ifdef __cplusplus

class DECLSPEC_UUID("63C9D46B-2391-4399-8202-EC7464D55526")
SFtp;
#endif

EXTERN_C const CLSID CLSID_SFtpFile;

#ifdef __cplusplus

class DECLSPEC_UUID("0B5F4F80-E099-4158-96A4-54CD81AD212B")
SFtpFile;
#endif

EXTERN_C const CLSID CLSID_HttpEx;

#ifdef __cplusplus

class DECLSPEC_UUID("522D4F3C-0F01-42E1-A22D-19068FDA0EC7")
HttpEx;
#endif
#endif /* __ASOCKETLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



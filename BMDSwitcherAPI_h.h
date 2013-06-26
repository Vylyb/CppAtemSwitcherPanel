

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Sat Jun 08 13:38:44 2013
 */
/* Compiler settings for ..\..\include\BMDSwitcherAPI.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0595 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

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


#ifndef __BMDSwitcherAPI_h_h__
#define __BMDSwitcherAPI_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IBMDSwitcherAudioMonitorOutputCallback_FWD_DEFINED__
#define __IBMDSwitcherAudioMonitorOutputCallback_FWD_DEFINED__
typedef interface IBMDSwitcherAudioMonitorOutputCallback IBMDSwitcherAudioMonitorOutputCallback;

#endif 	/* __IBMDSwitcherAudioMonitorOutputCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherAudioMonitorOutput_FWD_DEFINED__
#define __IBMDSwitcherAudioMonitorOutput_FWD_DEFINED__
typedef interface IBMDSwitcherAudioMonitorOutput IBMDSwitcherAudioMonitorOutput;

#endif 	/* __IBMDSwitcherAudioMonitorOutput_FWD_DEFINED__ */


#ifndef __IBMDSwitcherAudioInputCallback_FWD_DEFINED__
#define __IBMDSwitcherAudioInputCallback_FWD_DEFINED__
typedef interface IBMDSwitcherAudioInputCallback IBMDSwitcherAudioInputCallback;

#endif 	/* __IBMDSwitcherAudioInputCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherAudioInput_FWD_DEFINED__
#define __IBMDSwitcherAudioInput_FWD_DEFINED__
typedef interface IBMDSwitcherAudioInput IBMDSwitcherAudioInput;

#endif 	/* __IBMDSwitcherAudioInput_FWD_DEFINED__ */


#ifndef __IBMDSwitcherAudioMixerCallback_FWD_DEFINED__
#define __IBMDSwitcherAudioMixerCallback_FWD_DEFINED__
typedef interface IBMDSwitcherAudioMixerCallback IBMDSwitcherAudioMixerCallback;

#endif 	/* __IBMDSwitcherAudioMixerCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherAudioMixer_FWD_DEFINED__
#define __IBMDSwitcherAudioMixer_FWD_DEFINED__
typedef interface IBMDSwitcherAudioMixer IBMDSwitcherAudioMixer;

#endif 	/* __IBMDSwitcherAudioMixer_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyLumaParametersCallback_FWD_DEFINED__
#define __IBMDSwitcherKeyLumaParametersCallback_FWD_DEFINED__
typedef interface IBMDSwitcherKeyLumaParametersCallback IBMDSwitcherKeyLumaParametersCallback;

#endif 	/* __IBMDSwitcherKeyLumaParametersCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyLumaParameters_FWD_DEFINED__
#define __IBMDSwitcherKeyLumaParameters_FWD_DEFINED__
typedef interface IBMDSwitcherKeyLumaParameters IBMDSwitcherKeyLumaParameters;

#endif 	/* __IBMDSwitcherKeyLumaParameters_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyChromaParametersCallback_FWD_DEFINED__
#define __IBMDSwitcherKeyChromaParametersCallback_FWD_DEFINED__
typedef interface IBMDSwitcherKeyChromaParametersCallback IBMDSwitcherKeyChromaParametersCallback;

#endif 	/* __IBMDSwitcherKeyChromaParametersCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyChromaParameters_FWD_DEFINED__
#define __IBMDSwitcherKeyChromaParameters_FWD_DEFINED__
typedef interface IBMDSwitcherKeyChromaParameters IBMDSwitcherKeyChromaParameters;

#endif 	/* __IBMDSwitcherKeyChromaParameters_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyPatternParametersCallback_FWD_DEFINED__
#define __IBMDSwitcherKeyPatternParametersCallback_FWD_DEFINED__
typedef interface IBMDSwitcherKeyPatternParametersCallback IBMDSwitcherKeyPatternParametersCallback;

#endif 	/* __IBMDSwitcherKeyPatternParametersCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyPatternParameters_FWD_DEFINED__
#define __IBMDSwitcherKeyPatternParameters_FWD_DEFINED__
typedef interface IBMDSwitcherKeyPatternParameters IBMDSwitcherKeyPatternParameters;

#endif 	/* __IBMDSwitcherKeyPatternParameters_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyFlyParametersCallback_FWD_DEFINED__
#define __IBMDSwitcherKeyFlyParametersCallback_FWD_DEFINED__
typedef interface IBMDSwitcherKeyFlyParametersCallback IBMDSwitcherKeyFlyParametersCallback;

#endif 	/* __IBMDSwitcherKeyFlyParametersCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyFlyParameters_FWD_DEFINED__
#define __IBMDSwitcherKeyFlyParameters_FWD_DEFINED__
typedef interface IBMDSwitcherKeyFlyParameters IBMDSwitcherKeyFlyParameters;

#endif 	/* __IBMDSwitcherKeyFlyParameters_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyDVEParametersCallback_FWD_DEFINED__
#define __IBMDSwitcherKeyDVEParametersCallback_FWD_DEFINED__
typedef interface IBMDSwitcherKeyDVEParametersCallback IBMDSwitcherKeyDVEParametersCallback;

#endif 	/* __IBMDSwitcherKeyDVEParametersCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyDVEParameters_FWD_DEFINED__
#define __IBMDSwitcherKeyDVEParameters_FWD_DEFINED__
typedef interface IBMDSwitcherKeyDVEParameters IBMDSwitcherKeyDVEParameters;

#endif 	/* __IBMDSwitcherKeyDVEParameters_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyCallback_FWD_DEFINED__
#define __IBMDSwitcherKeyCallback_FWD_DEFINED__
typedef interface IBMDSwitcherKeyCallback IBMDSwitcherKeyCallback;

#endif 	/* __IBMDSwitcherKeyCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKey_FWD_DEFINED__
#define __IBMDSwitcherKey_FWD_DEFINED__
typedef interface IBMDSwitcherKey IBMDSwitcherKey;

#endif 	/* __IBMDSwitcherKey_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMediaPlayerCallback_FWD_DEFINED__
#define __IBMDSwitcherMediaPlayerCallback_FWD_DEFINED__
typedef interface IBMDSwitcherMediaPlayerCallback IBMDSwitcherMediaPlayerCallback;

#endif 	/* __IBMDSwitcherMediaPlayerCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMediaPlayer_FWD_DEFINED__
#define __IBMDSwitcherMediaPlayer_FWD_DEFINED__
typedef interface IBMDSwitcherMediaPlayer IBMDSwitcherMediaPlayer;

#endif 	/* __IBMDSwitcherMediaPlayer_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTransitionMixParametersCallback_FWD_DEFINED__
#define __IBMDSwitcherTransitionMixParametersCallback_FWD_DEFINED__
typedef interface IBMDSwitcherTransitionMixParametersCallback IBMDSwitcherTransitionMixParametersCallback;

#endif 	/* __IBMDSwitcherTransitionMixParametersCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTransitionMixParameters_FWD_DEFINED__
#define __IBMDSwitcherTransitionMixParameters_FWD_DEFINED__
typedef interface IBMDSwitcherTransitionMixParameters IBMDSwitcherTransitionMixParameters;

#endif 	/* __IBMDSwitcherTransitionMixParameters_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTransitionDipParametersCallback_FWD_DEFINED__
#define __IBMDSwitcherTransitionDipParametersCallback_FWD_DEFINED__
typedef interface IBMDSwitcherTransitionDipParametersCallback IBMDSwitcherTransitionDipParametersCallback;

#endif 	/* __IBMDSwitcherTransitionDipParametersCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTransitionDipParameters_FWD_DEFINED__
#define __IBMDSwitcherTransitionDipParameters_FWD_DEFINED__
typedef interface IBMDSwitcherTransitionDipParameters IBMDSwitcherTransitionDipParameters;

#endif 	/* __IBMDSwitcherTransitionDipParameters_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTransitionWipeParametersCallback_FWD_DEFINED__
#define __IBMDSwitcherTransitionWipeParametersCallback_FWD_DEFINED__
typedef interface IBMDSwitcherTransitionWipeParametersCallback IBMDSwitcherTransitionWipeParametersCallback;

#endif 	/* __IBMDSwitcherTransitionWipeParametersCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTransitionWipeParameters_FWD_DEFINED__
#define __IBMDSwitcherTransitionWipeParameters_FWD_DEFINED__
typedef interface IBMDSwitcherTransitionWipeParameters IBMDSwitcherTransitionWipeParameters;

#endif 	/* __IBMDSwitcherTransitionWipeParameters_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTransitionDVEParametersCallback_FWD_DEFINED__
#define __IBMDSwitcherTransitionDVEParametersCallback_FWD_DEFINED__
typedef interface IBMDSwitcherTransitionDVEParametersCallback IBMDSwitcherTransitionDVEParametersCallback;

#endif 	/* __IBMDSwitcherTransitionDVEParametersCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTransitionDVEParameters_FWD_DEFINED__
#define __IBMDSwitcherTransitionDVEParameters_FWD_DEFINED__
typedef interface IBMDSwitcherTransitionDVEParameters IBMDSwitcherTransitionDVEParameters;

#endif 	/* __IBMDSwitcherTransitionDVEParameters_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTransitionStingerParametersCallback_FWD_DEFINED__
#define __IBMDSwitcherTransitionStingerParametersCallback_FWD_DEFINED__
typedef interface IBMDSwitcherTransitionStingerParametersCallback IBMDSwitcherTransitionStingerParametersCallback;

#endif 	/* __IBMDSwitcherTransitionStingerParametersCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTransitionStingerParameters_FWD_DEFINED__
#define __IBMDSwitcherTransitionStingerParameters_FWD_DEFINED__
typedef interface IBMDSwitcherTransitionStingerParameters IBMDSwitcherTransitionStingerParameters;

#endif 	/* __IBMDSwitcherTransitionStingerParameters_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTransitionParametersCallback_FWD_DEFINED__
#define __IBMDSwitcherTransitionParametersCallback_FWD_DEFINED__
typedef interface IBMDSwitcherTransitionParametersCallback IBMDSwitcherTransitionParametersCallback;

#endif 	/* __IBMDSwitcherTransitionParametersCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTransitionParameters_FWD_DEFINED__
#define __IBMDSwitcherTransitionParameters_FWD_DEFINED__
typedef interface IBMDSwitcherTransitionParameters IBMDSwitcherTransitionParameters;

#endif 	/* __IBMDSwitcherTransitionParameters_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMixEffectBlockCallback_FWD_DEFINED__
#define __IBMDSwitcherMixEffectBlockCallback_FWD_DEFINED__
typedef interface IBMDSwitcherMixEffectBlockCallback IBMDSwitcherMixEffectBlockCallback;

#endif 	/* __IBMDSwitcherMixEffectBlockCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMixEffectBlock_FWD_DEFINED__
#define __IBMDSwitcherMixEffectBlock_FWD_DEFINED__
typedef interface IBMDSwitcherMixEffectBlock IBMDSwitcherMixEffectBlock;

#endif 	/* __IBMDSwitcherMixEffectBlock_FWD_DEFINED__ */


#ifndef __IBMDSwitcherInputCallback_FWD_DEFINED__
#define __IBMDSwitcherInputCallback_FWD_DEFINED__
typedef interface IBMDSwitcherInputCallback IBMDSwitcherInputCallback;

#endif 	/* __IBMDSwitcherInputCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherInput_FWD_DEFINED__
#define __IBMDSwitcherInput_FWD_DEFINED__
typedef interface IBMDSwitcherInput IBMDSwitcherInput;

#endif 	/* __IBMDSwitcherInput_FWD_DEFINED__ */


#ifndef __IBMDSwitcherInputColorCallback_FWD_DEFINED__
#define __IBMDSwitcherInputColorCallback_FWD_DEFINED__
typedef interface IBMDSwitcherInputColorCallback IBMDSwitcherInputColorCallback;

#endif 	/* __IBMDSwitcherInputColorCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherInputColor_FWD_DEFINED__
#define __IBMDSwitcherInputColor_FWD_DEFINED__
typedef interface IBMDSwitcherInputColor IBMDSwitcherInputColor;

#endif 	/* __IBMDSwitcherInputColor_FWD_DEFINED__ */


#ifndef __IBMDSwitcherInputAuxCallback_FWD_DEFINED__
#define __IBMDSwitcherInputAuxCallback_FWD_DEFINED__
typedef interface IBMDSwitcherInputAuxCallback IBMDSwitcherInputAuxCallback;

#endif 	/* __IBMDSwitcherInputAuxCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherInputAux_FWD_DEFINED__
#define __IBMDSwitcherInputAux_FWD_DEFINED__
typedef interface IBMDSwitcherInputAux IBMDSwitcherInputAux;

#endif 	/* __IBMDSwitcherInputAux_FWD_DEFINED__ */


#ifndef __IBMDSwitcherSuperSourceBoxCallback_FWD_DEFINED__
#define __IBMDSwitcherSuperSourceBoxCallback_FWD_DEFINED__
typedef interface IBMDSwitcherSuperSourceBoxCallback IBMDSwitcherSuperSourceBoxCallback;

#endif 	/* __IBMDSwitcherSuperSourceBoxCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherSuperSourceBox_FWD_DEFINED__
#define __IBMDSwitcherSuperSourceBox_FWD_DEFINED__
typedef interface IBMDSwitcherSuperSourceBox IBMDSwitcherSuperSourceBox;

#endif 	/* __IBMDSwitcherSuperSourceBox_FWD_DEFINED__ */


#ifndef __IBMDSwitcherInputSuperSourceCallback_FWD_DEFINED__
#define __IBMDSwitcherInputSuperSourceCallback_FWD_DEFINED__
typedef interface IBMDSwitcherInputSuperSourceCallback IBMDSwitcherInputSuperSourceCallback;

#endif 	/* __IBMDSwitcherInputSuperSourceCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherInputSuperSource_FWD_DEFINED__
#define __IBMDSwitcherInputSuperSource_FWD_DEFINED__
typedef interface IBMDSwitcherInputSuperSource IBMDSwitcherInputSuperSource;

#endif 	/* __IBMDSwitcherInputSuperSource_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMultiViewCallback_FWD_DEFINED__
#define __IBMDSwitcherMultiViewCallback_FWD_DEFINED__
typedef interface IBMDSwitcherMultiViewCallback IBMDSwitcherMultiViewCallback;

#endif 	/* __IBMDSwitcherMultiViewCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMultiView_FWD_DEFINED__
#define __IBMDSwitcherMultiView_FWD_DEFINED__
typedef interface IBMDSwitcherMultiView IBMDSwitcherMultiView;

#endif 	/* __IBMDSwitcherMultiView_FWD_DEFINED__ */


#ifndef __IBMDSwitcherDownstreamKeyCallback_FWD_DEFINED__
#define __IBMDSwitcherDownstreamKeyCallback_FWD_DEFINED__
typedef interface IBMDSwitcherDownstreamKeyCallback IBMDSwitcherDownstreamKeyCallback;

#endif 	/* __IBMDSwitcherDownstreamKeyCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherDownstreamKey_FWD_DEFINED__
#define __IBMDSwitcherDownstreamKey_FWD_DEFINED__
typedef interface IBMDSwitcherDownstreamKey IBMDSwitcherDownstreamKey;

#endif 	/* __IBMDSwitcherDownstreamKey_FWD_DEFINED__ */


#ifndef __IBMDSwitcherInputIterator_FWD_DEFINED__
#define __IBMDSwitcherInputIterator_FWD_DEFINED__
typedef interface IBMDSwitcherInputIterator IBMDSwitcherInputIterator;

#endif 	/* __IBMDSwitcherInputIterator_FWD_DEFINED__ */


#ifndef __IBMDSwitcherSuperSourceBoxIterator_FWD_DEFINED__
#define __IBMDSwitcherSuperSourceBoxIterator_FWD_DEFINED__
typedef interface IBMDSwitcherSuperSourceBoxIterator IBMDSwitcherSuperSourceBoxIterator;

#endif 	/* __IBMDSwitcherSuperSourceBoxIterator_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMixEffectBlockIterator_FWD_DEFINED__
#define __IBMDSwitcherMixEffectBlockIterator_FWD_DEFINED__
typedef interface IBMDSwitcherMixEffectBlockIterator IBMDSwitcherMixEffectBlockIterator;

#endif 	/* __IBMDSwitcherMixEffectBlockIterator_FWD_DEFINED__ */


#ifndef __IBMDSwitcherDownstreamKeyIterator_FWD_DEFINED__
#define __IBMDSwitcherDownstreamKeyIterator_FWD_DEFINED__
typedef interface IBMDSwitcherDownstreamKeyIterator IBMDSwitcherDownstreamKeyIterator;

#endif 	/* __IBMDSwitcherDownstreamKeyIterator_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyIterator_FWD_DEFINED__
#define __IBMDSwitcherKeyIterator_FWD_DEFINED__
typedef interface IBMDSwitcherKeyIterator IBMDSwitcherKeyIterator;

#endif 	/* __IBMDSwitcherKeyIterator_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMediaPlayerIterator_FWD_DEFINED__
#define __IBMDSwitcherMediaPlayerIterator_FWD_DEFINED__
typedef interface IBMDSwitcherMediaPlayerIterator IBMDSwitcherMediaPlayerIterator;

#endif 	/* __IBMDSwitcherMediaPlayerIterator_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMultiViewIterator_FWD_DEFINED__
#define __IBMDSwitcherMultiViewIterator_FWD_DEFINED__
typedef interface IBMDSwitcherMultiViewIterator IBMDSwitcherMultiViewIterator;

#endif 	/* __IBMDSwitcherMultiViewIterator_FWD_DEFINED__ */


#ifndef __IBMDSwitcherAudioMonitorOutputIterator_FWD_DEFINED__
#define __IBMDSwitcherAudioMonitorOutputIterator_FWD_DEFINED__
typedef interface IBMDSwitcherAudioMonitorOutputIterator IBMDSwitcherAudioMonitorOutputIterator;

#endif 	/* __IBMDSwitcherAudioMonitorOutputIterator_FWD_DEFINED__ */


#ifndef __IBMDSwitcherAudioInputIterator_FWD_DEFINED__
#define __IBMDSwitcherAudioInputIterator_FWD_DEFINED__
typedef interface IBMDSwitcherAudioInputIterator IBMDSwitcherAudioInputIterator;

#endif 	/* __IBMDSwitcherAudioInputIterator_FWD_DEFINED__ */


#ifndef __IBMDSwitcherCallback_FWD_DEFINED__
#define __IBMDSwitcherCallback_FWD_DEFINED__
typedef interface IBMDSwitcherCallback IBMDSwitcherCallback;

#endif 	/* __IBMDSwitcherCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcher_FWD_DEFINED__
#define __IBMDSwitcher_FWD_DEFINED__
typedef interface IBMDSwitcher IBMDSwitcher;

#endif 	/* __IBMDSwitcher_FWD_DEFINED__ */


#ifndef __IBMDSwitcherDiscovery_FWD_DEFINED__
#define __IBMDSwitcherDiscovery_FWD_DEFINED__
typedef interface IBMDSwitcherDiscovery IBMDSwitcherDiscovery;

#endif 	/* __IBMDSwitcherDiscovery_FWD_DEFINED__ */


#ifndef __IBMDSwitcherFrame_FWD_DEFINED__
#define __IBMDSwitcherFrame_FWD_DEFINED__
typedef interface IBMDSwitcherFrame IBMDSwitcherFrame;

#endif 	/* __IBMDSwitcherFrame_FWD_DEFINED__ */


#ifndef __IBMDSwitcherAudio_FWD_DEFINED__
#define __IBMDSwitcherAudio_FWD_DEFINED__
typedef interface IBMDSwitcherAudio IBMDSwitcherAudio;

#endif 	/* __IBMDSwitcherAudio_FWD_DEFINED__ */


#ifndef __IBMDSwitcherLockCallback_FWD_DEFINED__
#define __IBMDSwitcherLockCallback_FWD_DEFINED__
typedef interface IBMDSwitcherLockCallback IBMDSwitcherLockCallback;

#endif 	/* __IBMDSwitcherLockCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherStillsCallback_FWD_DEFINED__
#define __IBMDSwitcherStillsCallback_FWD_DEFINED__
typedef interface IBMDSwitcherStillsCallback IBMDSwitcherStillsCallback;

#endif 	/* __IBMDSwitcherStillsCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherStills_FWD_DEFINED__
#define __IBMDSwitcherStills_FWD_DEFINED__
typedef interface IBMDSwitcherStills IBMDSwitcherStills;

#endif 	/* __IBMDSwitcherStills_FWD_DEFINED__ */


#ifndef __IBMDSwitcherClipCallback_FWD_DEFINED__
#define __IBMDSwitcherClipCallback_FWD_DEFINED__
typedef interface IBMDSwitcherClipCallback IBMDSwitcherClipCallback;

#endif 	/* __IBMDSwitcherClipCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherClip_FWD_DEFINED__
#define __IBMDSwitcherClip_FWD_DEFINED__
typedef interface IBMDSwitcherClip IBMDSwitcherClip;

#endif 	/* __IBMDSwitcherClip_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMediaPoolCallback_FWD_DEFINED__
#define __IBMDSwitcherMediaPoolCallback_FWD_DEFINED__
typedef interface IBMDSwitcherMediaPoolCallback IBMDSwitcherMediaPoolCallback;

#endif 	/* __IBMDSwitcherMediaPoolCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMediaPool_FWD_DEFINED__
#define __IBMDSwitcherMediaPool_FWD_DEFINED__
typedef interface IBMDSwitcherMediaPool IBMDSwitcherMediaPool;

#endif 	/* __IBMDSwitcherMediaPool_FWD_DEFINED__ */


#ifndef __CBMDSwitcherDiscovery_FWD_DEFINED__
#define __CBMDSwitcherDiscovery_FWD_DEFINED__

#ifdef __cplusplus
typedef class CBMDSwitcherDiscovery CBMDSwitcherDiscovery;
#else
typedef struct CBMDSwitcherDiscovery CBMDSwitcherDiscovery;
#endif /* __cplusplus */

#endif 	/* __CBMDSwitcherDiscovery_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __BMDSwitcherAPI_LIBRARY_DEFINED__
#define __BMDSwitcherAPI_LIBRARY_DEFINED__

/* library BMDSwitcherAPI */
/* [helpstring][version][uuid] */ 

typedef LONGLONG BMDSwitcherInputId;

typedef /* [public][public][public][public] */ struct __MIDL___MIDL_itf_BMDSwitcherAPI_0000_0000_0001
    {
    unsigned char data[ 16 ];
    } 	BMDSwitcherHash;

typedef LONGLONG BMDSwitcherAudioInputId;

#if 0
#endif
typedef /* [v1_enum] */ 
enum _BMDSwitcherPropertyId
    {
        bmdSwitcherPropertyIdProductName	= 0x70646e6d,
        bmdSwitcherPropertyIdVideoMode	= 0x76646d64,
        bmdSwitcherPropertyIdDownConvertMode	= 0x64636d64
    } 	BMDSwitcherPropertyId;

typedef /* [v1_enum] */ 
enum _BMDSwitcherInputPropertyId
    {
        bmdSwitcherInputPropertyIdIsProgramTallied	= 0x69706774,
        bmdSwitcherInputPropertyIdIsPreviewTallied	= 0x69707274,
        bmdSwitcherInputPropertyIdAvailableExternalPortTypes	= 0x61657074,
        bmdSwitcherInputPropertyIdCurrentExternalPortType	= 0x63657074,
        bmdSwitcherInputPropertyIdPortType	= 0x70727470,
        bmdSwitcherInputPropertyIdInputAvailability	= 0x61766c62,
        bmdSwitcherInputPropertyIdShortName	= 0x73686e6d,
        bmdSwitcherInputPropertyIdLongName	= 0x6c676e6d
    } 	BMDSwitcherInputPropertyId;

typedef /* [v1_enum] */ 
enum _BMDSwitcherPortType
    {
        bmdSwitcherPortTypeExternal	= 0x6578746e,
        bmdSwitcherPortTypeBlack	= 0x626c616b,
        bmdSwitcherPortTypeColorBars	= 0x636f6c62,
        bmdSwitcherPortTypeColorGenerator	= 0x636f6c67,
        bmdSwitcherPortTypeMediaPlayerFill	= 0x6d70666c,
        bmdSwitcherPortTypeMediaPlayerCut	= 0x6d706374,
        bmdSwitcherPortTypeSuperSource	= 0x73737263,
        bmdSwitcherPortTypeMixEffectBlockOutput	= 0x6d65626f,
        bmdSwitcherPortTypeAuxOutput	= 0x6175786f
    } 	BMDSwitcherPortType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherExternalPortType
    {
        bmdSwitcherExternalPortTypeSDI	= 0x1,
        bmdSwitcherExternalPortTypeHDMI	= 0x2,
        bmdSwitcherExternalPortTypeComponent	= 0x4,
        bmdSwitcherExternalPortTypeComposite	= 0x8,
        bmdSwitcherExternalPortTypeSVideo	= 0x10,
        bmdSwitcherExternalPortTypeInternal	= 0x20
    } 	BMDSwitcherExternalPortType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherInputAvailability
    {
        bmdSwitcherInputAvailabilityMixEffectBlock0	= 0x1,
        bmdSwitcherInputAvailabilityMixEffectBlock1	= 0x2,
        bmdSwitcherInputAvailabilityAuxOutputs	= 0x4,
        bmdSwitcherInputAvailabilityMultiView	= 0x8,
        bmdSwitcherInputAvailabilitySuperSourceArt	= 0x10,
        bmdSwitcherInputAvailabilitySuperSourceBox	= 0x20
    } 	BMDSwitcherInputAvailability;

typedef /* [v1_enum] */ 
enum _BMDSwitcherInputColorEventType
    {
        bmdSwitcherInputColorEventTypeHueChanged	= 0x48756543,
        bmdSwitcherInputColorEventTypeSaturationChanged	= 0x53617443,
        bmdSwitcherInputColorEventTypeLumaChanged	= 0x4c756d43
    } 	BMDSwitcherInputColorEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherInputAuxEventType
    {
        bmdSwitcherInputAuxEventTypeInputSourceChanged	= 0x69707343
    } 	BMDSwitcherInputAuxEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherSuperSourceBoxEventType
    {
        bmdSwitcherSuperSourceBoxEventTypeEnabledChanged	= 0x656e6243,
        bmdSwitcherSuperSourceBoxEventTypeInputSourceChanged	= 0x69707343,
        bmdSwitcherSuperSourceBoxEventTypePositionXChanged	= 0x70737843,
        bmdSwitcherSuperSourceBoxEventTypePositionYChanged	= 0x70737943,
        bmdSwitcherSuperSourceBoxEventTypeSizeChanged	= 0x73697a43,
        bmdSwitcherSuperSourceBoxEventTypeCroppedChanged	= 0x63727043,
        bmdSwitcherSuperSourceBoxEventTypeCropTopChanged	= 0x63707443,
        bmdSwitcherSuperSourceBoxEventTypeCropBottomChanged	= 0x63706243,
        bmdSwitcherSuperSourceBoxEventTypeCropLeftChanged	= 0x63706c43,
        bmdSwitcherSuperSourceBoxEventTypeCropRightChanged	= 0x63707243
    } 	BMDSwitcherSuperSourceBoxEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherInputSuperSourceEventType
    {
        bmdSwitcherInputSuperSourceEventTypeInputFillChanged	= 0x69706643,
        bmdSwitcherInputSuperSourceEventTypeInputCutChanged	= 0x69706343,
        bmdSwitcherInputSuperSourceEventTypeArtOptionChanged	= 0x61746f43,
        bmdSwitcherInputSuperSourceEventTypePreMultipliedChanged	= 0x73687043,
        bmdSwitcherInputSuperSourceEventTypeClipChanged	= 0x636c7043,
        bmdSwitcherInputSuperSourceEventTypeGainChanged	= 0x67616e43,
        bmdSwitcherInputSuperSourceEventTypeInverseChanged	= 0x696e7643,
        bmdSwitcherInputSuperSourceEventTypeBorderEnabledChanged	= 0x656e6243,
        bmdSwitcherInputSuperSourceEventTypeBorderBevelChanged	= 0x62766c43,
        bmdSwitcherInputSuperSourceEventTypeBorderWidthOutChanged	= 0x77646f43,
        bmdSwitcherInputSuperSourceEventTypeBorderWidthInChanged	= 0x77646943,
        bmdSwitcherInputSuperSourceEventTypeBorderSoftnessOutChanged	= 0x73666f43,
        bmdSwitcherInputSuperSourceEventTypeBorderSoftnessInChanged	= 0x73666943,
        bmdSwitcherInputSuperSourceEventTypeBorderBevelSoftnessChanged	= 0x62767343,
        bmdSwitcherInputSuperSourceEventTypeBorderBevelPositionChanged	= 0x62767043,
        bmdSwitcherInputSuperSourceEventTypeBorderHueChanged	= 0x68756543,
        bmdSwitcherInputSuperSourceEventTypeBorderSaturationChanged	= 0x73617443,
        bmdSwitcherInputSuperSourceEventTypeBorderLumaChanged	= 0x6c756d43,
        bmdSwitcherInputSuperSourceEventTypeBorderLightSourceDirectionChanged	= 0x6c736443,
        bmdSwitcherInputSuperSourceEventTypeBorderLightSourceAltitudeChanged	= 0x6c736143
    } 	BMDSwitcherInputSuperSourceEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherBorderBevelOption
    {
        bmdSwitcherBorderBevelOptionNone	= 0x6e6f6e65,
        bmdSwitcherBorderBevelOptionInOut	= 0x696e6f74,
        bmdSwitcherBorderBevelOptionIn	= 0x696e696e,
        bmdSwitcherBorderBevelOptionOut	= 0x6f746f74
    } 	BMDSwitcherBorderBevelOption;

typedef /* [v1_enum] */ 
enum _BMDSwitcherTransitionMixParametersEventType
    {
        bmdSwitcherTransitionMixParametersEventTypeRateChanged	= 0x72746543
    } 	BMDSwitcherTransitionMixParametersEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherTransitionDipParametersEventType
    {
        bmdSwitcherTransitionDipParametersEventTypeRateChanged	= 0x72746543,
        bmdSwitcherTransitionDipParametersEventTypeInputDipChanged	= 0x69706443
    } 	BMDSwitcherTransitionDipParametersEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherTransitionWipeParametersEventType
    {
        bmdSwitcherTransitionWipeParametersEventTypeRateChanged	= 0x72746543,
        bmdSwitcherTransitionWipeParametersEventTypePatternChanged	= 0x70617443,
        bmdSwitcherTransitionWipeParametersEventTypeBorderSizeChanged	= 0x62647343,
        bmdSwitcherTransitionWipeParametersEventTypeInputBorderChanged	= 0x69706243,
        bmdSwitcherTransitionWipeParametersEventTypeSymmetryChanged	= 0x73796d43,
        bmdSwitcherTransitionWipeParametersEventTypeSoftnessChanged	= 0x73667443,
        bmdSwitcherTransitionWipeParametersEventTypeHorizontalOffsetChanged	= 0x686f6643,
        bmdSwitcherTransitionWipeParametersEventTypeVerticalOffsetChanged	= 0x766f6643,
        bmdSwitcherTransitionWipeParametersEventTypeReverseChanged	= 0x72657643,
        bmdSwitcherTransitionWipeParametersEventTypeFlipFlopChanged	= 0x66667043
    } 	BMDSwitcherTransitionWipeParametersEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherTransitionDVEParametersEventType
    {
        bmdSwitcherTransitionDVEParametersEventTypeRateChanged	= 0x72746543,
        bmdSwitcherTransitionDVEParametersEventTypeLogoRateChanged	= 0x6c727443,
        bmdSwitcherTransitionDVEParametersEventTypeReverseChanged	= 0x72657643,
        bmdSwitcherTransitionDVEParametersEventTypeFlipFlopChanged	= 0x66667043,
        bmdSwitcherTransitionDVEParametersEventTypeStyleChanged	= 0x73747943,
        bmdSwitcherTransitionDVEParametersEventTypeInputFillChanged	= 0x69706643,
        bmdSwitcherTransitionDVEParametersEventTypeInputCutChanged	= 0x69706343,
        bmdSwitcherTransitionDVEParametersEventTypeEnableKeyChanged	= 0x656e6b43,
        bmdSwitcherTransitionDVEParametersEventTypePreMultipliedChanged	= 0x706d7543,
        bmdSwitcherTransitionDVEParametersEventTypeClipChanged	= 0x636c7043,
        bmdSwitcherTransitionDVEParametersEventTypeGainChanged	= 0x676e6543,
        bmdSwitcherTransitionDVEParametersEventTypeInverseChanged	= 0x696e7643
    } 	BMDSwitcherTransitionDVEParametersEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherTransitionStingerParametersEventType
    {
        bmdSwitcherTransitionStingerParametersEventTypeSourceChanged	= 0x73726343,
        bmdSwitcherTransitionStingerParametersEventTypePreMultipliedChanged	= 0x706d7543,
        bmdSwitcherTransitionStingerParametersEventTypeClipChanged	= 0x636c7043,
        bmdSwitcherTransitionStingerParametersEventTypeGainChanged	= 0x676e6543,
        bmdSwitcherTransitionStingerParametersEventTypeInverseChanged	= 0x696e7643,
        bmdSwitcherTransitionStingerParametersEventTypePrerollChanged	= 0x70726c43,
        bmdSwitcherTransitionStingerParametersEventTypeClipDurationChanged	= 0x63647243,
        bmdSwitcherTransitionStingerParametersEventTypeTriggerPointChanged	= 0x74677043,
        bmdSwitcherTransitionStingerParametersEventTypeMixRateChanged	= 0x6d787243
    } 	BMDSwitcherTransitionStingerParametersEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherTransitionParametersEventType
    {
        bmdSwitcherTransitionParametersEventTypeTransitionStyleChanged	= 0x73747943,
        bmdSwitcherTransitionParametersEventTypeNextTransitionStyleChanged	= 0x6e737443,
        bmdSwitcherTransitionParametersEventTypeTransitionSelectionChanged	= 0x736c7443,
        bmdSwitcherTransitionParametersEventTypeNextTransitionSelectionChanged	= 0x6e736c43
    } 	BMDSwitcherTransitionParametersEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherSuperSourceArtOption
    {
        bmdSwitcherSuperSourceArtOptionBackground	= 0x626b6764,
        bmdSwitcherSuperSourceArtOptionForeground	= 0x66726764
    } 	BMDSwitcherSuperSourceArtOption;

typedef /* [v1_enum] */ 
enum _BMDSwitcherMixEffectBlockPropertyId
    {
        bmdSwitcherMixEffectBlockPropertyIdProgramInput	= 0x70676970,
        bmdSwitcherMixEffectBlockPropertyIdPreviewInput	= 0x70766970,
        bmdSwitcherMixEffectBlockPropertyIdTransitionPosition	= 0x74737073,
        bmdSwitcherMixEffectBlockPropertyIdTransitionFramesRemaining	= 0x7466726d,
        bmdSwitcherMixEffectBlockPropertyIdInTransition	= 0x69697473,
        bmdSwitcherMixEffectBlockPropertyIdFadeToBlackFramesRemaining	= 0x6666726d,
        bmdSwitcherMixEffectBlockPropertyIdInFadeToBlack	= 0x69696662,
        bmdSwitcherMixEffectBlockPropertyIdPreviewLive	= 0x70766c76,
        bmdSwitcherMixEffectBlockPropertyIdPreviewTransition	= 0x70767473,
        bmdSwitcherMixEffectBlockPropertyIdInputAvailabilityMask	= 0x6961766d,
        bmdSwitcherMixEffectBlockPropertyIdFadeToBlackRate	= 0x66746272
    } 	BMDSwitcherMixEffectBlockPropertyId;

typedef /* [v1_enum] */ 
enum _BMDSwitcherAudioMonitorOutputEventType
    {
        bmdSwitcherAudioMonitorOutputEventTypeMonitorEnableChanged	= 0x6d6e6543,
        bmdSwitcherAudioMonitorOutputEventTypeGainChanged	= 0x6d676e43,
        bmdSwitcherAudioMonitorOutputEventTypeMuteChanged	= 0x6d746543,
        bmdSwitcherAudioMonitorOutputEventTypeSoloChanged	= 0x736f6c43,
        bmdSwitcherAudioMonitorOutputEventTypeSoloInputChanged	= 0x736c6943,
        bmdSwitcherAudioMonitorOutputEventTypeDimChanged	= 0x64696d43,
        bmdSwitcherAudioMonitorOutputEventTypeDimLevelChanged	= 0x646d6c43
    } 	BMDSwitcherAudioMonitorOutputEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherAudioInputEventType
    {
        bmdSwitcherAudioInputEventTypeMixOptionChanged	= 0x6d786f43,
        bmdSwitcherAudioInputEventTypeGainChanged	= 0x69676e43,
        bmdSwitcherAudioInputEventTypeBalanceChanged	= 0x62616c43,
        bmdSwitcherAudioInputEventTypeIsMixedInChanged	= 0x696d6943
    } 	BMDSwitcherAudioInputEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherAudioMixerEventType
    {
        bmdSwitcherAudioMixerEventTypeProgramOutGainChanged	= 0x70676e43,
        bmdSwitcherAudioMixerEventTypeProgramOutBalanceChanged	= 0x62616c43
    } 	BMDSwitcherAudioMixerEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherAudioInputType
    {
        bmdSwitcherAudioInputTypeEmbeddedWithVideo	= 0x65777664,
        bmdSwitcherAudioInputTypeMediaPlayer	= 0x6d647079,
        bmdSwitcherAudioInputTypeAudioIn	= 0x6164696e
    } 	BMDSwitcherAudioInputType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherAudioMixOption
    {
        bmdSwitcherAudioMixOptionOff	= 0x6f666666,
        bmdSwitcherAudioMixOptionOn	= 0x6f6e6f6e,
        bmdSwitcherAudioMixOptionAudioFollowVideo	= 0x61667676
    } 	BMDSwitcherAudioMixOption;

typedef /* [v1_enum] */ 
enum _BMDSwitcherTransitionStyle
    {
        bmdSwitcherTransitionStyleMix	= 0x6d697878,
        bmdSwitcherTransitionStyleDip	= 0x64697070,
        bmdSwitcherTransitionStyleWipe	= 0x77697065,
        bmdSwitcherTransitionStyleDVE	= 0x64766565,
        bmdSwitcherTransitionStyleStinger	= 0x73746e67
    } 	BMDSwitcherTransitionStyle;

typedef /* [v1_enum] */ 
enum _BMDSwitcherTransitionSelection
    {
        bmdSwitcherTransitionSelectionBackground	= 0x1,
        bmdSwitcherTransitionSelectionKey1	= 0x2,
        bmdSwitcherTransitionSelectionKey2	= 0x4,
        bmdSwitcherTransitionSelectionKey3	= 0x8,
        bmdSwitcherTransitionSelectionKey4	= 0x10
    } 	BMDSwitcherTransitionSelection;

typedef /* [v1_enum] */ 
enum _BMDSwitcherKeyLumaParametersEventType
    {
        bmdSwitcherKeyLumaParametersEventTypePreMultipliedChanged	= 0x706d6c43,
        bmdSwitcherKeyLumaParametersEventTypeClipChanged	= 0x636c7043,
        bmdSwitcherKeyLumaParametersEventTypeGainChanged	= 0x676e6543,
        bmdSwitcherKeyLumaParametersEventTypeInverseChanged	= 0x696e7643
    } 	BMDSwitcherKeyLumaParametersEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherKeyChromaParametersEventType
    {
        bmdSwitcherKeyChromaParametersEventTypeHueChanged	= 0x68756543,
        bmdSwitcherKeyChromaParametersEventTypeGainChanged	= 0x676e6543,
        bmdSwitcherKeyChromaParametersEventTypeYSuppressChanged	= 0x79737043,
        bmdSwitcherKeyChromaParametersEventTypeLiftChanged	= 0x6c667443,
        bmdSwitcherKeyChromaParametersEventTypeNarrowChanged	= 0x6e727743
    } 	BMDSwitcherKeyChromaParametersEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherKeyPatternParametersEventType
    {
        bmdSwitcherKeyPatternParametersEventTypePatternChanged	= 0x70617443,
        bmdSwitcherKeyPatternParametersEventTypeSizeChanged	= 0x737a6543,
        bmdSwitcherKeyPatternParametersEventTypeSymmetryChanged	= 0x73796d43,
        bmdSwitcherKeyPatternParametersEventTypeSoftnessChanged	= 0x73667443,
        bmdSwitcherKeyPatternParametersEventTypeHorizontalOffsetChanged	= 0x687a6f43,
        bmdSwitcherKeyPatternParametersEventTypeVerticalOffsetChanged	= 0x76746f43,
        bmdSwitcherKeyPatternParametersEventTypeInverseChanged	= 0x696e7643
    } 	BMDSwitcherKeyPatternParametersEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherKeyFlyParametersEventType
    {
        bmdSwitcherKeyFlyParametersEventTypeFlyChanged	= 0x666c7943,
        bmdSwitcherKeyFlyParametersEventTypeCanFlyChanged	= 0x63666c43,
        bmdSwitcherKeyFlyParametersEventTypeRateChanged	= 0x72746543,
        bmdSwitcherKeyFlyParametersEventTypeSizeXChanged	= 0x737a7843,
        bmdSwitcherKeyFlyParametersEventTypeSizeYChanged	= 0x737a7943,
        bmdSwitcherKeyFlyParametersEventTypePositionXChanged	= 0x70737843,
        bmdSwitcherKeyFlyParametersEventTypePositionYChanged	= 0x70737943,
        bmdSwitcherKeyFlyParametersEventTypeRotationChanged	= 0x726f7443,
        bmdSwitcherKeyFlyParametersEventTypeIsKeyFrameStoredChanged	= 0x6b667343,
        bmdSwitcherKeyFlyParametersEventTypeIsAtKeyFramesChanged	= 0x616b6643,
        bmdSwitcherKeyFlyParametersEventTypeIsRunningChanged	= 0x726e6743
    } 	BMDSwitcherKeyFlyParametersEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherKeyDVEParametersEventType
    {
        bmdSwitcherKeyDVEParametersEventTypeShadowChanged	= 0x73686443,
        bmdSwitcherKeyDVEParametersEventTypeLightSourceDirectionChanged	= 0x6c746443,
        bmdSwitcherKeyDVEParametersEventTypeLightSourceAltitudeChanged	= 0x6c746143,
        bmdSwitcherKeyDVEParametersEventTypeBorderEnabledChanged	= 0x62656e43,
        bmdSwitcherKeyDVEParametersEventTypeBorderBevelChanged	= 0x62627643,
        bmdSwitcherKeyDVEParametersEventTypeBorderWidthInChanged	= 0x62776943,
        bmdSwitcherKeyDVEParametersEventTypeBorderWidthOutChanged	= 0x62776f43,
        bmdSwitcherKeyDVEParametersEventTypeBorderSoftnessInChanged	= 0x62736943,
        bmdSwitcherKeyDVEParametersEventTypeBorderSoftnessOutChanged	= 0x62736f43,
        bmdSwitcherKeyDVEParametersEventTypeBorderBevelSoftnessChanged	= 0x62627343,
        bmdSwitcherKeyDVEParametersEventTypeBorderBevelPositionChanged	= 0x62627043,
        bmdSwitcherKeyDVEParametersEventTypeBorderOpacityChanged	= 0x626f7043,
        bmdSwitcherKeyDVEParametersEventTypeBorderHueChanged	= 0x62687543,
        bmdSwitcherKeyDVEParametersEventTypeBorderSaturationChanged	= 0x62737443,
        bmdSwitcherKeyDVEParametersEventTypeBorderLumaChanged	= 0x626c6d43,
        bmdSwitcherKeyDVEParametersEventTypeMaskedChanged	= 0x6d736b43,
        bmdSwitcherKeyDVEParametersEventTypeMaskTopChanged	= 0x6d747043,
        bmdSwitcherKeyDVEParametersEventTypeMaskBottomChanged	= 0x6d627443,
        bmdSwitcherKeyDVEParametersEventTypeMaskLeftChanged	= 0x6d6c6643,
        bmdSwitcherKeyDVEParametersEventTypeMaskRightChanged	= 0x6d727443
    } 	BMDSwitcherKeyDVEParametersEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherKeyEventType
    {
        bmdSwitcherKeyEventTypeTypeChanged	= 0x74797043,
        bmdSwitcherKeyEventTypeInputCutChanged	= 0x69706343,
        bmdSwitcherKeyEventTypeInputFillChanged	= 0x69706643,
        bmdSwitcherKeyEventTypeOnAirChanged	= 0x6f6e6143,
        bmdSwitcherKeyEventTypeCanBeDVEKeyChanged	= 0x63626443,
        bmdSwitcherKeyEventTypeMaskedChanged	= 0x6d6b6543,
        bmdSwitcherKeyEventTypeMaskTopChanged	= 0x6d6b7443,
        bmdSwitcherKeyEventTypeMaskBottomChanged	= 0x6d6b6243,
        bmdSwitcherKeyEventTypeMaskLeftChanged	= 0x6d6b6c43,
        bmdSwitcherKeyEventTypeMaskRightChanged	= 0x6d6b7243
    } 	BMDSwitcherKeyEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherKeyType
    {
        bmdSwitcherKeyTypeLuma	= 0x6c756d61,
        bmdSwitcherKeyTypeChroma	= 0x6368726d,
        bmdSwitcherKeyTypePattern	= 0x7074726e,
        bmdSwitcherKeyTypeDVE	= 0x64766565
    } 	BMDSwitcherKeyType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherPatternStyle
    {
        bmdSwitcherPatternStyleLeftToRightBar	= 0x6c747262,
        bmdSwitcherPatternStyleTopToBottomBar	= 0x74746262,
        bmdSwitcherPatternStyleHorizontalBarnDoor	= 0x68626e64,
        bmdSwitcherPatternStyleVerticalBarnDoor	= 0x76626e64,
        bmdSwitcherPatternStyleCornersInFourBox	= 0x63696662,
        bmdSwitcherPatternStyleRectangleIris	= 0x72656369,
        bmdSwitcherPatternStyleDiamondIris	= 0x64696169,
        bmdSwitcherPatternStyleCircleIris	= 0x63697269,
        bmdSwitcherPatternStyleTopLeftBox	= 0x746c6278,
        bmdSwitcherPatternStyleTopRightBox	= 0x74726278,
        bmdSwitcherPatternStyleBottomRightBox	= 0x62726278,
        bmdSwitcherPatternStyleBottomLeftBox	= 0x626c6278,
        bmdSwitcherPatternStyleTopCentreBox	= 0x74636278,
        bmdSwitcherPatternStyleRightCentreBox	= 0x72636278,
        bmdSwitcherPatternStyleBottomCentreBox	= 0x62636278,
        bmdSwitcherPatternStyleLeftCentreBox	= 0x6c636278,
        bmdSwitcherPatternStyleTopLeftDiagonal	= 0x746c6467,
        bmdSwitcherPatternStyleTopRightDiagonal	= 0x74726467
    } 	BMDSwitcherPatternStyle;

typedef /* [v1_enum] */ 
enum _BMDSwitcherVideoMode
    {
        bmdSwitcherVideoMode525i5994NTSC	= 0x6e747363,
        bmdSwitcherVideoMode625i50PAL	= 0x70616c6c,
        bmdSwitcherVideoMode525i5994Anamorphic	= 0x6e747341,
        bmdSwitcherVideoMode625i50Anamorphic	= 0x70616c41,
        bmdSwitcherVideoMode720p50	= 0x37327030,
        bmdSwitcherVideoMode720p5994	= 0x37327039,
        bmdSwitcherVideoMode1080i50	= 0x31306930,
        bmdSwitcherVideoMode1080i5994	= 0x31306939
    } 	BMDSwitcherVideoMode;

typedef /* [v1_enum] */ 
enum _BMDSwitcherDownConverterMode
    {
        bmdSwitcherDownConverterModeCentreCut	= 0x64636363,
        bmdSwitcherDownConverterModeLetterbox	= 0x64636c62,
        bmdSwitcherDownConverterModeAnamorphic	= 0x6463616d
    } 	BMDSwitcherDownConverterMode;

typedef /* [v1_enum] */ 
enum _BMDSwitcherPixelFormat
    {
        bmdSwitcherPixelFormat8BitARGB	= 0x61726762,
        bmdSwitcherPixelFormat8BitXRGB	= 0x78726762,
        bmdSwitcherPixelFormat8BitYUV	= 0x32767579,
        bmdSwitcherPixelFormat10BitYUVA	= 0x79757661
    } 	BMDSwitcherPixelFormat;

typedef /* [v1_enum] */ 
enum _BMDSwitcherFlyKeyFrame
    {
        bmdSwitcherFlyKeyFrameFull	= 0x1,
        bmdSwitcherFlyKeyFrameInfinityCentreOfKey	= 0x2,
        bmdSwitcherFlyKeyFrameInfinityTopLeft	= 0x4,
        bmdSwitcherFlyKeyFrameInfinityTop	= 0x8,
        bmdSwitcherFlyKeyFrameInfinityTopRight	= 0x10,
        bmdSwitcherFlyKeyFrameInfinityLeft	= 0x20,
        bmdSwitcherFlyKeyFrameInfinityCentre	= 0x40,
        bmdSwitcherFlyKeyFrameInfinityRight	= 0x80,
        bmdSwitcherFlyKeyFrameInfinityBottomLeft	= 0x100,
        bmdSwitcherFlyKeyFrameInfinityBottom	= 0x200,
        bmdSwitcherFlyKeyFrameInfinityBottomRight	= 0x400,
        bmdSwitcherFlyKeyFrameA	= 0x800,
        bmdSwitcherFlyKeyFrameB	= 0x1000
    } 	BMDSwitcherFlyKeyFrame;

typedef /* [v1_enum] */ 
enum _BMDSwitcherDVETransitionStyle
    {
        bmdSwitcherDVETransitionStyleSwooshTopLeft	= 0x7377746c,
        bmdSwitcherDVETransitionStyleSwooshTop	= 0x73777463,
        bmdSwitcherDVETransitionStyleSwooshTopRight	= 0x73777472,
        bmdSwitcherDVETransitionStyleSwooshLeft	= 0x73776c63,
        bmdSwitcherDVETransitionStyleSwooshRight	= 0x73777263,
        bmdSwitcherDVETransitionStyleSwooshBottomLeft	= 0x7377626c,
        bmdSwitcherDVETransitionStyleSwooshBottom	= 0x73776263,
        bmdSwitcherDVETransitionStyleSwooshBottomRight	= 0x73776272,
        bmdSwitcherDVETransitionStyleSpinCWTopLeft	= 0x7370746c,
        bmdSwitcherDVETransitionStyleSpinCWTopRight	= 0x73707472,
        bmdSwitcherDVETransitionStyleSpinCWBottomLeft	= 0x7370626c,
        bmdSwitcherDVETransitionStyleSpinCWBottomRight	= 0x73706272,
        bmdSwitcherDVETransitionStyleSpinCCWTopLeft	= 0x7363746c,
        bmdSwitcherDVETransitionStyleSpinCCWTopRight	= 0x73637472,
        bmdSwitcherDVETransitionStyleSpinCCWBottomLeft	= 0x7363626c,
        bmdSwitcherDVETransitionStyleSpinCCWBottomRight	= 0x73636272,
        bmdSwitcherDVETransitionStyleSqueezeTopLeft	= 0x7371746c,
        bmdSwitcherDVETransitionStyleSqueezeTop	= 0x73717463,
        bmdSwitcherDVETransitionStyleSqueezeTopRight	= 0x73717472,
        bmdSwitcherDVETransitionStyleSqueezeLeft	= 0x73716c63,
        bmdSwitcherDVETransitionStyleSqueezeRight	= 0x73717263,
        bmdSwitcherDVETransitionStyleSqueezeBottomLeft	= 0x7371626c,
        bmdSwitcherDVETransitionStyleSqueezeBottom	= 0x73716263,
        bmdSwitcherDVETransitionStyleSqueezeBottomRight	= 0x73716272,
        bmdSwitcherDVETransitionStylePushTopLeft	= 0x7375746c,
        bmdSwitcherDVETransitionStylePushTop	= 0x73757463,
        bmdSwitcherDVETransitionStylePushTopRight	= 0x73757472,
        bmdSwitcherDVETransitionStylePushLeft	= 0x73756c63,
        bmdSwitcherDVETransitionStylePushRight	= 0x73757263,
        bmdSwitcherDVETransitionStylePushBottomLeft	= 0x7375626c,
        bmdSwitcherDVETransitionStylePushBottom	= 0x73756263,
        bmdSwitcherDVETransitionStylePushBottomRight	= 0x73756272,
        bmdSwitcherDVETransitionStyleGraphicCWSpin	= 0x73676377,
        bmdSwitcherDVETransitionStyleGraphicCCWSpin	= 0x73676363,
        bmdSwitcherDVETransitionStyleGraphicLogoWipe	= 0x73676c77
    } 	BMDSwitcherDVETransitionStyle;

typedef /* [v1_enum] */ 
enum _BMDSwitcherStingerTransitionSource
    {
        bmdSwitcherStingerTransitionSourceMediaPlayer1	= 0x736d7031,
        bmdSwitcherStingerTransitionSourceMediaPlayer2	= 0x736d7032,
        bmdSwitcherStingerTransitionSourceNone	= 0x736e6f6e
    } 	BMDSwitcherStingerTransitionSource;

typedef /* [v1_enum] */ 
enum _BMDSwitcherMediaPlayerSourceType
    {
        bmdSwitcherMediaPlayerSourceTypeStill	= 0x736d7073,
        bmdSwitcherMediaPlayerSourceTypeClip	= 0x736d7063
    } 	BMDSwitcherMediaPlayerSourceType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherMultiViewLayout
    {
        bmdSwitcherMultiViewLayoutProgramTop	= 0x6d767074,
        bmdSwitcherMultiViewLayoutProgramBottom	= 0x6d767062,
        bmdSwitcherMultiViewLayoutProgramLeft	= 0x6d76706c,
        bmdSwitcherMultiViewLayoutProgramRight	= 0x6d767072
    } 	BMDSwitcherMultiViewLayout;

typedef /* [v1_enum] */ 
enum _BMDSwitcherMultiViewEventType
    {
        bmdSwitcherMultiViewEventTypeLayoutChanged	= 0x6c6f7443,
        bmdSwitcherMultiViewEventTypeWindowChanged	= 0x77647743
    } 	BMDSwitcherMultiViewEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherDownstreamKeyEventType
    {
        bmdSwitcherDownstreamKeyEventTypeInputCutChanged	= 0x69706343,
        bmdSwitcherDownstreamKeyEventTypeInputFillChanged	= 0x69706643,
        bmdSwitcherDownstreamKeyEventTypeTieChanged	= 0x74696543,
        bmdSwitcherDownstreamKeyEventTypeRateChanged	= 0x72746543,
        bmdSwitcherDownstreamKeyEventTypeOnAirChanged	= 0x6f6e6143,
        bmdSwitcherDownstreamKeyEventTypeIsTransitioningChanged	= 0x69747343,
        bmdSwitcherDownstreamKeyEventTypeIsAutoTransitioningChanged	= 0x69617443,
        bmdSwitcherDownstreamKeyEventTypeFramesRemainingChanged	= 0x66726d43,
        bmdSwitcherDownstreamKeyEventTypePreMultipliedChanged	= 0x706d6c43,
        bmdSwitcherDownstreamKeyEventTypeClipChanged	= 0x636c7043,
        bmdSwitcherDownstreamKeyEventTypeGainChanged	= 0x676e6543,
        bmdSwitcherDownstreamKeyEventTypeInverseChanged	= 0x696e7643,
        bmdSwitcherDownstreamKeyEventTypeMaskedChanged	= 0x6d736b43,
        bmdSwitcherDownstreamKeyEventTypeMaskTopChanged	= 0x6d6b7443,
        bmdSwitcherDownstreamKeyEventTypeMaskBottomChanged	= 0x6d6b6243,
        bmdSwitcherDownstreamKeyEventTypeMaskLeftChanged	= 0x6d6b6c43,
        bmdSwitcherDownstreamKeyEventTypeMaskRightChanged	= 0x6d6b7243
    } 	BMDSwitcherDownstreamKeyEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherConnectToFailure
    {
        bmdSwitcherConnectToFailureNoResponse	= 0x63666e72,
        bmdSwitcherConnectToFailureIncompatibleFirmware	= 0x63666966,
        bmdSwitcherConnectToFailureCorruptData	= 0x63666364,
        bmdSwitcherConnectToFailureStateSync	= 0x63667373,
        bmdSwitcherConnectToFailureStateSyncTimedOut	= 0x63667374
    } 	BMDSwitcherConnectToFailure;

typedef /* [v1_enum] */ 
enum _BMDSwitcherMediaPoolEventType
    {
        bmdSwitcherMediaPoolEventTypeValidChanged	= 0x766c6964,
        bmdSwitcherMediaPoolEventTypeNameChanged	= 0x6e616d65,
        bmdSwitcherMediaPoolEventTypeHashChanged	= 0x68617368,
        bmdSwitcherMediaPoolEventTypeAudioValidChanged	= 0x61766c64,
        bmdSwitcherMediaPoolEventTypeLockBusy	= 0x6c627379,
        bmdSwitcherMediaPoolEventTypeLockIdle	= 0x6c69646c,
        bmdSwitcherMediaPoolEventTypeTransferCompleted	= 0x636d7074,
        bmdSwitcherMediaPoolEventTypeTransferCancelled	= 0x636e636c,
        bmdSwitcherMediaPoolEventTypeTransferFailed	= 0x6661696c
    } 	BMDSwitcherMediaPoolEventType;







































































EXTERN_C const IID LIBID_BMDSwitcherAPI;

#ifndef __IBMDSwitcherAudioMonitorOutputCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherAudioMonitorOutputCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherAudioMonitorOutputCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherAudioMonitorOutputCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CB5EFB16-0474-4FAA-B071-17FA0DADD19F")
    IBMDSwitcherAudioMonitorOutputCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherAudioMonitorOutputEventType eventType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LevelNotification( 
            /* [in] */ double left,
            /* [in] */ double right,
            /* [in] */ double peakLeft,
            /* [in] */ double peakRight) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherAudioMonitorOutputCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherAudioMonitorOutputCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherAudioMonitorOutputCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherAudioMonitorOutputCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherAudioMonitorOutputCallback * This,
            /* [in] */ BMDSwitcherAudioMonitorOutputEventType eventType);
        
        HRESULT ( STDMETHODCALLTYPE *LevelNotification )( 
            IBMDSwitcherAudioMonitorOutputCallback * This,
            /* [in] */ double left,
            /* [in] */ double right,
            /* [in] */ double peakLeft,
            /* [in] */ double peakRight);
        
        END_INTERFACE
    } IBMDSwitcherAudioMonitorOutputCallbackVtbl;

    interface IBMDSwitcherAudioMonitorOutputCallback
    {
        CONST_VTBL struct IBMDSwitcherAudioMonitorOutputCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherAudioMonitorOutputCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherAudioMonitorOutputCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherAudioMonitorOutputCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherAudioMonitorOutputCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#define IBMDSwitcherAudioMonitorOutputCallback_LevelNotification(This,left,right,peakLeft,peakRight)	\
    ( (This)->lpVtbl -> LevelNotification(This,left,right,peakLeft,peakRight) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherAudioMonitorOutputCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherAudioMonitorOutput_INTERFACE_DEFINED__
#define __IBMDSwitcherAudioMonitorOutput_INTERFACE_DEFINED__

/* interface IBMDSwitcherAudioMonitorOutput */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherAudioMonitorOutput;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("21E041C3-6C69-4A95-A6CC-AE7A57257407")
    IBMDSwitcherAudioMonitorOutput : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetMonitorEnable( 
            /* [out] */ BOOL *enable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMonitorEnable( 
            /* [in] */ BOOL enable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGain( 
            /* [out] */ double *gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGain( 
            /* [in] */ double gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMute( 
            /* [out] */ BOOL *mute) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMute( 
            /* [in] */ BOOL mute) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSolo( 
            /* [out] */ BOOL *solo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSolo( 
            /* [in] */ BOOL solo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSoloInput( 
            /* [out] */ BMDSwitcherAudioInputId *audioInput) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSoloInput( 
            /* [in] */ BMDSwitcherAudioInputId audioInput) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDim( 
            /* [out] */ BOOL *dim) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDim( 
            /* [in] */ BOOL dim) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDimLevel( 
            /* [out] */ double *gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDimLevel( 
            /* [in] */ double gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetLevelNotificationPeaks( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherAudioMonitorOutputCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherAudioMonitorOutputCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherAudioMonitorOutputVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherAudioMonitorOutput * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherAudioMonitorOutput * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetMonitorEnable )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [out] */ BOOL *enable);
        
        HRESULT ( STDMETHODCALLTYPE *SetMonitorEnable )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [in] */ BOOL enable);
        
        HRESULT ( STDMETHODCALLTYPE *GetGain )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [out] */ double *gain);
        
        HRESULT ( STDMETHODCALLTYPE *SetGain )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [in] */ double gain);
        
        HRESULT ( STDMETHODCALLTYPE *GetMute )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [out] */ BOOL *mute);
        
        HRESULT ( STDMETHODCALLTYPE *SetMute )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [in] */ BOOL mute);
        
        HRESULT ( STDMETHODCALLTYPE *GetSolo )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [out] */ BOOL *solo);
        
        HRESULT ( STDMETHODCALLTYPE *SetSolo )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [in] */ BOOL solo);
        
        HRESULT ( STDMETHODCALLTYPE *GetSoloInput )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [out] */ BMDSwitcherAudioInputId *audioInput);
        
        HRESULT ( STDMETHODCALLTYPE *SetSoloInput )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [in] */ BMDSwitcherAudioInputId audioInput);
        
        HRESULT ( STDMETHODCALLTYPE *GetDim )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [out] */ BOOL *dim);
        
        HRESULT ( STDMETHODCALLTYPE *SetDim )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [in] */ BOOL dim);
        
        HRESULT ( STDMETHODCALLTYPE *GetDimLevel )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [out] */ double *gain);
        
        HRESULT ( STDMETHODCALLTYPE *SetDimLevel )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [in] */ double gain);
        
        HRESULT ( STDMETHODCALLTYPE *ResetLevelNotificationPeaks )( 
            IBMDSwitcherAudioMonitorOutput * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [in] */ IBMDSwitcherAudioMonitorOutputCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [in] */ IBMDSwitcherAudioMonitorOutputCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherAudioMonitorOutputVtbl;

    interface IBMDSwitcherAudioMonitorOutput
    {
        CONST_VTBL struct IBMDSwitcherAudioMonitorOutputVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherAudioMonitorOutput_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherAudioMonitorOutput_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherAudioMonitorOutput_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherAudioMonitorOutput_GetMonitorEnable(This,enable)	\
    ( (This)->lpVtbl -> GetMonitorEnable(This,enable) ) 

#define IBMDSwitcherAudioMonitorOutput_SetMonitorEnable(This,enable)	\
    ( (This)->lpVtbl -> SetMonitorEnable(This,enable) ) 

#define IBMDSwitcherAudioMonitorOutput_GetGain(This,gain)	\
    ( (This)->lpVtbl -> GetGain(This,gain) ) 

#define IBMDSwitcherAudioMonitorOutput_SetGain(This,gain)	\
    ( (This)->lpVtbl -> SetGain(This,gain) ) 

#define IBMDSwitcherAudioMonitorOutput_GetMute(This,mute)	\
    ( (This)->lpVtbl -> GetMute(This,mute) ) 

#define IBMDSwitcherAudioMonitorOutput_SetMute(This,mute)	\
    ( (This)->lpVtbl -> SetMute(This,mute) ) 

#define IBMDSwitcherAudioMonitorOutput_GetSolo(This,solo)	\
    ( (This)->lpVtbl -> GetSolo(This,solo) ) 

#define IBMDSwitcherAudioMonitorOutput_SetSolo(This,solo)	\
    ( (This)->lpVtbl -> SetSolo(This,solo) ) 

#define IBMDSwitcherAudioMonitorOutput_GetSoloInput(This,audioInput)	\
    ( (This)->lpVtbl -> GetSoloInput(This,audioInput) ) 

#define IBMDSwitcherAudioMonitorOutput_SetSoloInput(This,audioInput)	\
    ( (This)->lpVtbl -> SetSoloInput(This,audioInput) ) 

#define IBMDSwitcherAudioMonitorOutput_GetDim(This,dim)	\
    ( (This)->lpVtbl -> GetDim(This,dim) ) 

#define IBMDSwitcherAudioMonitorOutput_SetDim(This,dim)	\
    ( (This)->lpVtbl -> SetDim(This,dim) ) 

#define IBMDSwitcherAudioMonitorOutput_GetDimLevel(This,gain)	\
    ( (This)->lpVtbl -> GetDimLevel(This,gain) ) 

#define IBMDSwitcherAudioMonitorOutput_SetDimLevel(This,gain)	\
    ( (This)->lpVtbl -> SetDimLevel(This,gain) ) 

#define IBMDSwitcherAudioMonitorOutput_ResetLevelNotificationPeaks(This)	\
    ( (This)->lpVtbl -> ResetLevelNotificationPeaks(This) ) 

#define IBMDSwitcherAudioMonitorOutput_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherAudioMonitorOutput_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherAudioMonitorOutput_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherAudioInputCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherAudioInputCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherAudioInputCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherAudioInputCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("26E05D77-EFB9-4253-86D8-2F1E82E462F6")
    IBMDSwitcherAudioInputCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherAudioInputEventType eventType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LevelNotification( 
            /* [in] */ double left,
            /* [in] */ double right,
            /* [in] */ double peakLeft,
            /* [in] */ double peakRight) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherAudioInputCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherAudioInputCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherAudioInputCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherAudioInputCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherAudioInputCallback * This,
            /* [in] */ BMDSwitcherAudioInputEventType eventType);
        
        HRESULT ( STDMETHODCALLTYPE *LevelNotification )( 
            IBMDSwitcherAudioInputCallback * This,
            /* [in] */ double left,
            /* [in] */ double right,
            /* [in] */ double peakLeft,
            /* [in] */ double peakRight);
        
        END_INTERFACE
    } IBMDSwitcherAudioInputCallbackVtbl;

    interface IBMDSwitcherAudioInputCallback
    {
        CONST_VTBL struct IBMDSwitcherAudioInputCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherAudioInputCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherAudioInputCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherAudioInputCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherAudioInputCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#define IBMDSwitcherAudioInputCallback_LevelNotification(This,left,right,peakLeft,peakRight)	\
    ( (This)->lpVtbl -> LevelNotification(This,left,right,peakLeft,peakRight) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherAudioInputCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherAudioInput_INTERFACE_DEFINED__
#define __IBMDSwitcherAudioInput_INTERFACE_DEFINED__

/* interface IBMDSwitcherAudioInput */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherAudioInput;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("87B99021-FA29-4720-9526-4512CA553858")
    IBMDSwitcherAudioInput : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetType( 
            /* [out] */ BMDSwitcherAudioInputType *type) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMixOption( 
            /* [out] */ BMDSwitcherAudioMixOption *mixOption) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMixOption( 
            /* [in] */ BMDSwitcherAudioMixOption mixOption) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGain( 
            /* [out] */ double *gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGain( 
            /* [in] */ double gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBalance( 
            /* [out] */ double *balance) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBalance( 
            /* [in] */ double balance) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsMixedIn( 
            /* [out] */ BOOL *mixedIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAudioInputId( 
            /* [out] */ BMDSwitcherAudioInputId *audioInputId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetLevelNotificationPeaks( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherAudioInputCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherAudioInputCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherAudioInputVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherAudioInput * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherAudioInput * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherAudioInput * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IBMDSwitcherAudioInput * This,
            /* [out] */ BMDSwitcherAudioInputType *type);
        
        HRESULT ( STDMETHODCALLTYPE *GetMixOption )( 
            IBMDSwitcherAudioInput * This,
            /* [out] */ BMDSwitcherAudioMixOption *mixOption);
        
        HRESULT ( STDMETHODCALLTYPE *SetMixOption )( 
            IBMDSwitcherAudioInput * This,
            /* [in] */ BMDSwitcherAudioMixOption mixOption);
        
        HRESULT ( STDMETHODCALLTYPE *GetGain )( 
            IBMDSwitcherAudioInput * This,
            /* [out] */ double *gain);
        
        HRESULT ( STDMETHODCALLTYPE *SetGain )( 
            IBMDSwitcherAudioInput * This,
            /* [in] */ double gain);
        
        HRESULT ( STDMETHODCALLTYPE *GetBalance )( 
            IBMDSwitcherAudioInput * This,
            /* [out] */ double *balance);
        
        HRESULT ( STDMETHODCALLTYPE *SetBalance )( 
            IBMDSwitcherAudioInput * This,
            /* [in] */ double balance);
        
        HRESULT ( STDMETHODCALLTYPE *IsMixedIn )( 
            IBMDSwitcherAudioInput * This,
            /* [out] */ BOOL *mixedIn);
        
        HRESULT ( STDMETHODCALLTYPE *GetAudioInputId )( 
            IBMDSwitcherAudioInput * This,
            /* [out] */ BMDSwitcherAudioInputId *audioInputId);
        
        HRESULT ( STDMETHODCALLTYPE *ResetLevelNotificationPeaks )( 
            IBMDSwitcherAudioInput * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherAudioInput * This,
            /* [in] */ IBMDSwitcherAudioInputCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherAudioInput * This,
            /* [in] */ IBMDSwitcherAudioInputCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherAudioInputVtbl;

    interface IBMDSwitcherAudioInput
    {
        CONST_VTBL struct IBMDSwitcherAudioInputVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherAudioInput_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherAudioInput_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherAudioInput_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherAudioInput_GetType(This,type)	\
    ( (This)->lpVtbl -> GetType(This,type) ) 

#define IBMDSwitcherAudioInput_GetMixOption(This,mixOption)	\
    ( (This)->lpVtbl -> GetMixOption(This,mixOption) ) 

#define IBMDSwitcherAudioInput_SetMixOption(This,mixOption)	\
    ( (This)->lpVtbl -> SetMixOption(This,mixOption) ) 

#define IBMDSwitcherAudioInput_GetGain(This,gain)	\
    ( (This)->lpVtbl -> GetGain(This,gain) ) 

#define IBMDSwitcherAudioInput_SetGain(This,gain)	\
    ( (This)->lpVtbl -> SetGain(This,gain) ) 

#define IBMDSwitcherAudioInput_GetBalance(This,balance)	\
    ( (This)->lpVtbl -> GetBalance(This,balance) ) 

#define IBMDSwitcherAudioInput_SetBalance(This,balance)	\
    ( (This)->lpVtbl -> SetBalance(This,balance) ) 

#define IBMDSwitcherAudioInput_IsMixedIn(This,mixedIn)	\
    ( (This)->lpVtbl -> IsMixedIn(This,mixedIn) ) 

#define IBMDSwitcherAudioInput_GetAudioInputId(This,audioInputId)	\
    ( (This)->lpVtbl -> GetAudioInputId(This,audioInputId) ) 

#define IBMDSwitcherAudioInput_ResetLevelNotificationPeaks(This)	\
    ( (This)->lpVtbl -> ResetLevelNotificationPeaks(This) ) 

#define IBMDSwitcherAudioInput_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherAudioInput_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherAudioInput_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherAudioMixerCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherAudioMixerCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherAudioMixerCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherAudioMixerCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A203DA24-9910-450C-AA6A-9AA05C5C856E")
    IBMDSwitcherAudioMixerCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherAudioMixerEventType eventType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProgramOutLevelNotification( 
            /* [in] */ double left,
            /* [in] */ double right,
            /* [in] */ double peakLeft,
            /* [in] */ double peakRight) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherAudioMixerCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherAudioMixerCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherAudioMixerCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherAudioMixerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherAudioMixerCallback * This,
            /* [in] */ BMDSwitcherAudioMixerEventType eventType);
        
        HRESULT ( STDMETHODCALLTYPE *ProgramOutLevelNotification )( 
            IBMDSwitcherAudioMixerCallback * This,
            /* [in] */ double left,
            /* [in] */ double right,
            /* [in] */ double peakLeft,
            /* [in] */ double peakRight);
        
        END_INTERFACE
    } IBMDSwitcherAudioMixerCallbackVtbl;

    interface IBMDSwitcherAudioMixerCallback
    {
        CONST_VTBL struct IBMDSwitcherAudioMixerCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherAudioMixerCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherAudioMixerCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherAudioMixerCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherAudioMixerCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#define IBMDSwitcherAudioMixerCallback_ProgramOutLevelNotification(This,left,right,peakLeft,peakRight)	\
    ( (This)->lpVtbl -> ProgramOutLevelNotification(This,left,right,peakLeft,peakRight) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherAudioMixerCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherAudioMixer_INTERFACE_DEFINED__
#define __IBMDSwitcherAudioMixer_INTERFACE_DEFINED__

/* interface IBMDSwitcherAudioMixer */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherAudioMixer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("58739C15-063E-4FC1-B59B-CC3D9A012D99")
    IBMDSwitcherAudioMixer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetProgramOutGain( 
            /* [out] */ double *gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProgramOutGain( 
            /* [in] */ double gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProgramOutBalance( 
            /* [out] */ double *balance) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProgramOutBalance( 
            /* [in] */ double balance) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAllLevelNotificationsEnable( 
            /* [in] */ BOOL enable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetProgramOutLevelNotificationPeaks( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetAllLevelNotificationPeaks( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherAudioMixerCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherAudioMixerCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateIterator( 
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherAudioMixerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherAudioMixer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherAudioMixer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherAudioMixer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetProgramOutGain )( 
            IBMDSwitcherAudioMixer * This,
            /* [out] */ double *gain);
        
        HRESULT ( STDMETHODCALLTYPE *SetProgramOutGain )( 
            IBMDSwitcherAudioMixer * This,
            /* [in] */ double gain);
        
        HRESULT ( STDMETHODCALLTYPE *GetProgramOutBalance )( 
            IBMDSwitcherAudioMixer * This,
            /* [out] */ double *balance);
        
        HRESULT ( STDMETHODCALLTYPE *SetProgramOutBalance )( 
            IBMDSwitcherAudioMixer * This,
            /* [in] */ double balance);
        
        HRESULT ( STDMETHODCALLTYPE *SetAllLevelNotificationsEnable )( 
            IBMDSwitcherAudioMixer * This,
            /* [in] */ BOOL enable);
        
        HRESULT ( STDMETHODCALLTYPE *ResetProgramOutLevelNotificationPeaks )( 
            IBMDSwitcherAudioMixer * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResetAllLevelNotificationPeaks )( 
            IBMDSwitcherAudioMixer * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherAudioMixer * This,
            /* [in] */ IBMDSwitcherAudioMixerCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherAudioMixer * This,
            /* [in] */ IBMDSwitcherAudioMixerCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *CreateIterator )( 
            IBMDSwitcherAudioMixer * This,
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv);
        
        END_INTERFACE
    } IBMDSwitcherAudioMixerVtbl;

    interface IBMDSwitcherAudioMixer
    {
        CONST_VTBL struct IBMDSwitcherAudioMixerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherAudioMixer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherAudioMixer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherAudioMixer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherAudioMixer_GetProgramOutGain(This,gain)	\
    ( (This)->lpVtbl -> GetProgramOutGain(This,gain) ) 

#define IBMDSwitcherAudioMixer_SetProgramOutGain(This,gain)	\
    ( (This)->lpVtbl -> SetProgramOutGain(This,gain) ) 

#define IBMDSwitcherAudioMixer_GetProgramOutBalance(This,balance)	\
    ( (This)->lpVtbl -> GetProgramOutBalance(This,balance) ) 

#define IBMDSwitcherAudioMixer_SetProgramOutBalance(This,balance)	\
    ( (This)->lpVtbl -> SetProgramOutBalance(This,balance) ) 

#define IBMDSwitcherAudioMixer_SetAllLevelNotificationsEnable(This,enable)	\
    ( (This)->lpVtbl -> SetAllLevelNotificationsEnable(This,enable) ) 

#define IBMDSwitcherAudioMixer_ResetProgramOutLevelNotificationPeaks(This)	\
    ( (This)->lpVtbl -> ResetProgramOutLevelNotificationPeaks(This) ) 

#define IBMDSwitcherAudioMixer_ResetAllLevelNotificationPeaks(This)	\
    ( (This)->lpVtbl -> ResetAllLevelNotificationPeaks(This) ) 

#define IBMDSwitcherAudioMixer_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherAudioMixer_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#define IBMDSwitcherAudioMixer_CreateIterator(This,iid,ppv)	\
    ( (This)->lpVtbl -> CreateIterator(This,iid,ppv) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherAudioMixer_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyLumaParametersCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyLumaParametersCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyLumaParametersCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyLumaParametersCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AB31E347-5177-4595-8E52-650BF9B08B7F")
    IBMDSwitcherKeyLumaParametersCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherKeyLumaParametersEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyLumaParametersCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyLumaParametersCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyLumaParametersCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyLumaParametersCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherKeyLumaParametersCallback * This,
            /* [in] */ BMDSwitcherKeyLumaParametersEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherKeyLumaParametersCallbackVtbl;

    interface IBMDSwitcherKeyLumaParametersCallback
    {
        CONST_VTBL struct IBMDSwitcherKeyLumaParametersCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyLumaParametersCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyLumaParametersCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyLumaParametersCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyLumaParametersCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyLumaParametersCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyLumaParameters_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyLumaParameters_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyLumaParameters */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyLumaParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EE88B575-6044-4372-B1D6-9733AF342DCA")
    IBMDSwitcherKeyLumaParameters : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPreMultiplied( 
            /* [out] */ BOOL *preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPreMultiplied( 
            /* [in] */ BOOL preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClip( 
            /* [out] */ double *clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClip( 
            /* [in] */ double clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGain( 
            /* [out] */ double *gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGain( 
            /* [in] */ double gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInverse( 
            /* [out] */ BOOL *inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInverse( 
            /* [in] */ BOOL inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherKeyLumaParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherKeyLumaParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyLumaParametersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyLumaParameters * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyLumaParameters * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyLumaParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPreMultiplied )( 
            IBMDSwitcherKeyLumaParameters * This,
            /* [out] */ BOOL *preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *SetPreMultiplied )( 
            IBMDSwitcherKeyLumaParameters * This,
            /* [in] */ BOOL preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *GetClip )( 
            IBMDSwitcherKeyLumaParameters * This,
            /* [out] */ double *clip);
        
        HRESULT ( STDMETHODCALLTYPE *SetClip )( 
            IBMDSwitcherKeyLumaParameters * This,
            /* [in] */ double clip);
        
        HRESULT ( STDMETHODCALLTYPE *GetGain )( 
            IBMDSwitcherKeyLumaParameters * This,
            /* [out] */ double *gain);
        
        HRESULT ( STDMETHODCALLTYPE *SetGain )( 
            IBMDSwitcherKeyLumaParameters * This,
            /* [in] */ double gain);
        
        HRESULT ( STDMETHODCALLTYPE *GetInverse )( 
            IBMDSwitcherKeyLumaParameters * This,
            /* [out] */ BOOL *inverse);
        
        HRESULT ( STDMETHODCALLTYPE *SetInverse )( 
            IBMDSwitcherKeyLumaParameters * This,
            /* [in] */ BOOL inverse);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherKeyLumaParameters * This,
            /* [in] */ IBMDSwitcherKeyLumaParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherKeyLumaParameters * This,
            /* [in] */ IBMDSwitcherKeyLumaParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherKeyLumaParametersVtbl;

    interface IBMDSwitcherKeyLumaParameters
    {
        CONST_VTBL struct IBMDSwitcherKeyLumaParametersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyLumaParameters_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyLumaParameters_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyLumaParameters_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyLumaParameters_GetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> GetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherKeyLumaParameters_SetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> SetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherKeyLumaParameters_GetClip(This,clip)	\
    ( (This)->lpVtbl -> GetClip(This,clip) ) 

#define IBMDSwitcherKeyLumaParameters_SetClip(This,clip)	\
    ( (This)->lpVtbl -> SetClip(This,clip) ) 

#define IBMDSwitcherKeyLumaParameters_GetGain(This,gain)	\
    ( (This)->lpVtbl -> GetGain(This,gain) ) 

#define IBMDSwitcherKeyLumaParameters_SetGain(This,gain)	\
    ( (This)->lpVtbl -> SetGain(This,gain) ) 

#define IBMDSwitcherKeyLumaParameters_GetInverse(This,inverse)	\
    ( (This)->lpVtbl -> GetInverse(This,inverse) ) 

#define IBMDSwitcherKeyLumaParameters_SetInverse(This,inverse)	\
    ( (This)->lpVtbl -> SetInverse(This,inverse) ) 

#define IBMDSwitcherKeyLumaParameters_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherKeyLumaParameters_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyLumaParameters_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyChromaParametersCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyChromaParametersCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyChromaParametersCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyChromaParametersCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FE3F97EC-5F2D-4E47-AA7A-38962F9CB3CE")
    IBMDSwitcherKeyChromaParametersCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherKeyChromaParametersEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyChromaParametersCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyChromaParametersCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyChromaParametersCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyChromaParametersCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherKeyChromaParametersCallback * This,
            /* [in] */ BMDSwitcherKeyChromaParametersEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherKeyChromaParametersCallbackVtbl;

    interface IBMDSwitcherKeyChromaParametersCallback
    {
        CONST_VTBL struct IBMDSwitcherKeyChromaParametersCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyChromaParametersCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyChromaParametersCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyChromaParametersCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyChromaParametersCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyChromaParametersCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyChromaParameters_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyChromaParameters_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyChromaParameters */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyChromaParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("07658026-6AE3-4694-B814-2AB7EBBE7D1C")
    IBMDSwitcherKeyChromaParameters : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetHue( 
            /* [out] */ double *hue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetHue( 
            /* [in] */ double hue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGain( 
            /* [out] */ double *gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGain( 
            /* [in] */ double gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetYSuppress( 
            /* [out] */ double *ySuppress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetYSuppress( 
            /* [in] */ double ySuppress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLift( 
            /* [out] */ double *lift) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLift( 
            /* [in] */ double lift) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNarrow( 
            /* [out] */ BOOL *narrow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetNarrow( 
            /* [in] */ BOOL narrow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherKeyChromaParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherKeyChromaParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyChromaParametersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyChromaParameters * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyChromaParameters * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyChromaParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetHue )( 
            IBMDSwitcherKeyChromaParameters * This,
            /* [out] */ double *hue);
        
        HRESULT ( STDMETHODCALLTYPE *SetHue )( 
            IBMDSwitcherKeyChromaParameters * This,
            /* [in] */ double hue);
        
        HRESULT ( STDMETHODCALLTYPE *GetGain )( 
            IBMDSwitcherKeyChromaParameters * This,
            /* [out] */ double *gain);
        
        HRESULT ( STDMETHODCALLTYPE *SetGain )( 
            IBMDSwitcherKeyChromaParameters * This,
            /* [in] */ double gain);
        
        HRESULT ( STDMETHODCALLTYPE *GetYSuppress )( 
            IBMDSwitcherKeyChromaParameters * This,
            /* [out] */ double *ySuppress);
        
        HRESULT ( STDMETHODCALLTYPE *SetYSuppress )( 
            IBMDSwitcherKeyChromaParameters * This,
            /* [in] */ double ySuppress);
        
        HRESULT ( STDMETHODCALLTYPE *GetLift )( 
            IBMDSwitcherKeyChromaParameters * This,
            /* [out] */ double *lift);
        
        HRESULT ( STDMETHODCALLTYPE *SetLift )( 
            IBMDSwitcherKeyChromaParameters * This,
            /* [in] */ double lift);
        
        HRESULT ( STDMETHODCALLTYPE *GetNarrow )( 
            IBMDSwitcherKeyChromaParameters * This,
            /* [out] */ BOOL *narrow);
        
        HRESULT ( STDMETHODCALLTYPE *SetNarrow )( 
            IBMDSwitcherKeyChromaParameters * This,
            /* [in] */ BOOL narrow);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherKeyChromaParameters * This,
            /* [in] */ IBMDSwitcherKeyChromaParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherKeyChromaParameters * This,
            /* [in] */ IBMDSwitcherKeyChromaParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherKeyChromaParametersVtbl;

    interface IBMDSwitcherKeyChromaParameters
    {
        CONST_VTBL struct IBMDSwitcherKeyChromaParametersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyChromaParameters_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyChromaParameters_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyChromaParameters_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyChromaParameters_GetHue(This,hue)	\
    ( (This)->lpVtbl -> GetHue(This,hue) ) 

#define IBMDSwitcherKeyChromaParameters_SetHue(This,hue)	\
    ( (This)->lpVtbl -> SetHue(This,hue) ) 

#define IBMDSwitcherKeyChromaParameters_GetGain(This,gain)	\
    ( (This)->lpVtbl -> GetGain(This,gain) ) 

#define IBMDSwitcherKeyChromaParameters_SetGain(This,gain)	\
    ( (This)->lpVtbl -> SetGain(This,gain) ) 

#define IBMDSwitcherKeyChromaParameters_GetYSuppress(This,ySuppress)	\
    ( (This)->lpVtbl -> GetYSuppress(This,ySuppress) ) 

#define IBMDSwitcherKeyChromaParameters_SetYSuppress(This,ySuppress)	\
    ( (This)->lpVtbl -> SetYSuppress(This,ySuppress) ) 

#define IBMDSwitcherKeyChromaParameters_GetLift(This,lift)	\
    ( (This)->lpVtbl -> GetLift(This,lift) ) 

#define IBMDSwitcherKeyChromaParameters_SetLift(This,lift)	\
    ( (This)->lpVtbl -> SetLift(This,lift) ) 

#define IBMDSwitcherKeyChromaParameters_GetNarrow(This,narrow)	\
    ( (This)->lpVtbl -> GetNarrow(This,narrow) ) 

#define IBMDSwitcherKeyChromaParameters_SetNarrow(This,narrow)	\
    ( (This)->lpVtbl -> SetNarrow(This,narrow) ) 

#define IBMDSwitcherKeyChromaParameters_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherKeyChromaParameters_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyChromaParameters_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyPatternParametersCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyPatternParametersCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyPatternParametersCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyPatternParametersCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FBF24499-06EB-4C54-BE92-21C403C1093C")
    IBMDSwitcherKeyPatternParametersCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherKeyPatternParametersEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyPatternParametersCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyPatternParametersCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyPatternParametersCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyPatternParametersCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherKeyPatternParametersCallback * This,
            /* [in] */ BMDSwitcherKeyPatternParametersEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherKeyPatternParametersCallbackVtbl;

    interface IBMDSwitcherKeyPatternParametersCallback
    {
        CONST_VTBL struct IBMDSwitcherKeyPatternParametersCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyPatternParametersCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyPatternParametersCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyPatternParametersCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyPatternParametersCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyPatternParametersCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyPatternParameters_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyPatternParameters_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyPatternParameters */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyPatternParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("267EDB96-5921-4BA5-88BA-C83123E153D2")
    IBMDSwitcherKeyPatternParameters : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPattern( 
            /* [out] */ BMDSwitcherPatternStyle *pattern) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPattern( 
            /* [in] */ BMDSwitcherPatternStyle pattern) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSize( 
            /* [out] */ double *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSize( 
            /* [in] */ double size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSymmetry( 
            /* [out] */ double *symmetry) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSymmetry( 
            /* [in] */ double symmetry) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSoftness( 
            /* [out] */ double *softness) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSoftness( 
            /* [in] */ double softness) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHorizontalOffset( 
            /* [out] */ double *hOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetHorizontalOffset( 
            /* [in] */ double hOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVerticalOffset( 
            /* [out] */ double *vOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetVerticalOffset( 
            /* [in] */ double vOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInverse( 
            /* [out] */ BOOL *inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInverse( 
            /* [in] */ BOOL inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherKeyPatternParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherKeyPatternParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyPatternParametersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyPatternParameters * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyPatternParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPattern )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [out] */ BMDSwitcherPatternStyle *pattern);
        
        HRESULT ( STDMETHODCALLTYPE *SetPattern )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [in] */ BMDSwitcherPatternStyle pattern);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [out] */ double *size);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [in] */ double size);
        
        HRESULT ( STDMETHODCALLTYPE *GetSymmetry )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [out] */ double *symmetry);
        
        HRESULT ( STDMETHODCALLTYPE *SetSymmetry )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [in] */ double symmetry);
        
        HRESULT ( STDMETHODCALLTYPE *GetSoftness )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [out] */ double *softness);
        
        HRESULT ( STDMETHODCALLTYPE *SetSoftness )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [in] */ double softness);
        
        HRESULT ( STDMETHODCALLTYPE *GetHorizontalOffset )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [out] */ double *hOffset);
        
        HRESULT ( STDMETHODCALLTYPE *SetHorizontalOffset )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [in] */ double hOffset);
        
        HRESULT ( STDMETHODCALLTYPE *GetVerticalOffset )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [out] */ double *vOffset);
        
        HRESULT ( STDMETHODCALLTYPE *SetVerticalOffset )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [in] */ double vOffset);
        
        HRESULT ( STDMETHODCALLTYPE *GetInverse )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [out] */ BOOL *inverse);
        
        HRESULT ( STDMETHODCALLTYPE *SetInverse )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [in] */ BOOL inverse);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [in] */ IBMDSwitcherKeyPatternParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [in] */ IBMDSwitcherKeyPatternParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherKeyPatternParametersVtbl;

    interface IBMDSwitcherKeyPatternParameters
    {
        CONST_VTBL struct IBMDSwitcherKeyPatternParametersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyPatternParameters_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyPatternParameters_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyPatternParameters_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyPatternParameters_GetPattern(This,pattern)	\
    ( (This)->lpVtbl -> GetPattern(This,pattern) ) 

#define IBMDSwitcherKeyPatternParameters_SetPattern(This,pattern)	\
    ( (This)->lpVtbl -> SetPattern(This,pattern) ) 

#define IBMDSwitcherKeyPatternParameters_GetSize(This,size)	\
    ( (This)->lpVtbl -> GetSize(This,size) ) 

#define IBMDSwitcherKeyPatternParameters_SetSize(This,size)	\
    ( (This)->lpVtbl -> SetSize(This,size) ) 

#define IBMDSwitcherKeyPatternParameters_GetSymmetry(This,symmetry)	\
    ( (This)->lpVtbl -> GetSymmetry(This,symmetry) ) 

#define IBMDSwitcherKeyPatternParameters_SetSymmetry(This,symmetry)	\
    ( (This)->lpVtbl -> SetSymmetry(This,symmetry) ) 

#define IBMDSwitcherKeyPatternParameters_GetSoftness(This,softness)	\
    ( (This)->lpVtbl -> GetSoftness(This,softness) ) 

#define IBMDSwitcherKeyPatternParameters_SetSoftness(This,softness)	\
    ( (This)->lpVtbl -> SetSoftness(This,softness) ) 

#define IBMDSwitcherKeyPatternParameters_GetHorizontalOffset(This,hOffset)	\
    ( (This)->lpVtbl -> GetHorizontalOffset(This,hOffset) ) 

#define IBMDSwitcherKeyPatternParameters_SetHorizontalOffset(This,hOffset)	\
    ( (This)->lpVtbl -> SetHorizontalOffset(This,hOffset) ) 

#define IBMDSwitcherKeyPatternParameters_GetVerticalOffset(This,vOffset)	\
    ( (This)->lpVtbl -> GetVerticalOffset(This,vOffset) ) 

#define IBMDSwitcherKeyPatternParameters_SetVerticalOffset(This,vOffset)	\
    ( (This)->lpVtbl -> SetVerticalOffset(This,vOffset) ) 

#define IBMDSwitcherKeyPatternParameters_GetInverse(This,inverse)	\
    ( (This)->lpVtbl -> GetInverse(This,inverse) ) 

#define IBMDSwitcherKeyPatternParameters_SetInverse(This,inverse)	\
    ( (This)->lpVtbl -> SetInverse(This,inverse) ) 

#define IBMDSwitcherKeyPatternParameters_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherKeyPatternParameters_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyPatternParameters_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyFlyParametersCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyFlyParametersCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyFlyParametersCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyFlyParametersCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A9D6543D-0447-4048-B5AD-806622B9BF1A")
    IBMDSwitcherKeyFlyParametersCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherKeyFlyParametersEventType eventType,
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyFlyParametersCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyFlyParametersCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyFlyParametersCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyFlyParametersCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherKeyFlyParametersCallback * This,
            /* [in] */ BMDSwitcherKeyFlyParametersEventType eventType,
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame);
        
        END_INTERFACE
    } IBMDSwitcherKeyFlyParametersCallbackVtbl;

    interface IBMDSwitcherKeyFlyParametersCallback
    {
        CONST_VTBL struct IBMDSwitcherKeyFlyParametersCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyFlyParametersCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyFlyParametersCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyFlyParametersCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyFlyParametersCallback_Notify(This,eventType,keyFrame)	\
    ( (This)->lpVtbl -> Notify(This,eventType,keyFrame) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyFlyParametersCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyFlyParameters_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyFlyParameters_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyFlyParameters */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyFlyParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C522E970-DDB1-4027-B492-F52C1DFA5D09")
    IBMDSwitcherKeyFlyParameters : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFly( 
            /* [out] */ BOOL *isFlyKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFly( 
            /* [in] */ BOOL isFlyKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCanFly( 
            /* [out] */ BOOL *canFly) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRate( 
            /* [out] */ unsigned long *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRate( 
            /* [in] */ unsigned long frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSizeX( 
            /* [out] */ double *multiplierX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSizeX( 
            /* [in] */ double multiplierX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSizeY( 
            /* [out] */ double *multiplierY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSizeY( 
            /* [in] */ double multiplierY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPositionX( 
            /* [out] */ double *offsetX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPositionX( 
            /* [in] */ double offsetX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPositionY( 
            /* [out] */ double *offsetY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPositionY( 
            /* [in] */ double offsetY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRotation( 
            /* [out] */ double *degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRotation( 
            /* [in] */ double degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetRotation( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetDVE( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetDVEFull( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsKeyFrameStored( 
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame,
            /* [out] */ BOOL *stored) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StoreAsKeyFrame( 
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RunToKeyFrame( 
            /* [in] */ BMDSwitcherFlyKeyFrame destination) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsAtKeyFrames( 
            /* [out] */ BMDSwitcherFlyKeyFrame *keyFrames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsRunning( 
            /* [out] */ BOOL *isRunning,
            /* [out] */ BMDSwitcherFlyKeyFrame *destination) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherKeyFlyParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherKeyFlyParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyFlyParametersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyFlyParameters * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyFlyParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFly )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [out] */ BOOL *isFlyKey);
        
        HRESULT ( STDMETHODCALLTYPE *SetFly )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ BOOL isFlyKey);
        
        HRESULT ( STDMETHODCALLTYPE *GetCanFly )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [out] */ BOOL *canFly);
        
        HRESULT ( STDMETHODCALLTYPE *GetRate )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [out] */ unsigned long *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetRate )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ unsigned long frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetSizeX )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [out] */ double *multiplierX);
        
        HRESULT ( STDMETHODCALLTYPE *SetSizeX )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ double multiplierX);
        
        HRESULT ( STDMETHODCALLTYPE *GetSizeY )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [out] */ double *multiplierY);
        
        HRESULT ( STDMETHODCALLTYPE *SetSizeY )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ double multiplierY);
        
        HRESULT ( STDMETHODCALLTYPE *GetPositionX )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [out] */ double *offsetX);
        
        HRESULT ( STDMETHODCALLTYPE *SetPositionX )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ double offsetX);
        
        HRESULT ( STDMETHODCALLTYPE *GetPositionY )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [out] */ double *offsetY);
        
        HRESULT ( STDMETHODCALLTYPE *SetPositionY )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ double offsetY);
        
        HRESULT ( STDMETHODCALLTYPE *GetRotation )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [out] */ double *degrees);
        
        HRESULT ( STDMETHODCALLTYPE *SetRotation )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ double degrees);
        
        HRESULT ( STDMETHODCALLTYPE *ResetRotation )( 
            IBMDSwitcherKeyFlyParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResetDVE )( 
            IBMDSwitcherKeyFlyParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResetDVEFull )( 
            IBMDSwitcherKeyFlyParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsKeyFrameStored )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame,
            /* [out] */ BOOL *stored);
        
        HRESULT ( STDMETHODCALLTYPE *StoreAsKeyFrame )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame);
        
        HRESULT ( STDMETHODCALLTYPE *RunToKeyFrame )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ BMDSwitcherFlyKeyFrame destination);
        
        HRESULT ( STDMETHODCALLTYPE *IsAtKeyFrames )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [out] */ BMDSwitcherFlyKeyFrame *keyFrames);
        
        HRESULT ( STDMETHODCALLTYPE *IsRunning )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [out] */ BOOL *isRunning,
            /* [out] */ BMDSwitcherFlyKeyFrame *destination);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ IBMDSwitcherKeyFlyParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ IBMDSwitcherKeyFlyParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherKeyFlyParametersVtbl;

    interface IBMDSwitcherKeyFlyParameters
    {
        CONST_VTBL struct IBMDSwitcherKeyFlyParametersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyFlyParameters_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyFlyParameters_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyFlyParameters_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyFlyParameters_GetFly(This,isFlyKey)	\
    ( (This)->lpVtbl -> GetFly(This,isFlyKey) ) 

#define IBMDSwitcherKeyFlyParameters_SetFly(This,isFlyKey)	\
    ( (This)->lpVtbl -> SetFly(This,isFlyKey) ) 

#define IBMDSwitcherKeyFlyParameters_GetCanFly(This,canFly)	\
    ( (This)->lpVtbl -> GetCanFly(This,canFly) ) 

#define IBMDSwitcherKeyFlyParameters_GetRate(This,frames)	\
    ( (This)->lpVtbl -> GetRate(This,frames) ) 

#define IBMDSwitcherKeyFlyParameters_SetRate(This,frames)	\
    ( (This)->lpVtbl -> SetRate(This,frames) ) 

#define IBMDSwitcherKeyFlyParameters_GetSizeX(This,multiplierX)	\
    ( (This)->lpVtbl -> GetSizeX(This,multiplierX) ) 

#define IBMDSwitcherKeyFlyParameters_SetSizeX(This,multiplierX)	\
    ( (This)->lpVtbl -> SetSizeX(This,multiplierX) ) 

#define IBMDSwitcherKeyFlyParameters_GetSizeY(This,multiplierY)	\
    ( (This)->lpVtbl -> GetSizeY(This,multiplierY) ) 

#define IBMDSwitcherKeyFlyParameters_SetSizeY(This,multiplierY)	\
    ( (This)->lpVtbl -> SetSizeY(This,multiplierY) ) 

#define IBMDSwitcherKeyFlyParameters_GetPositionX(This,offsetX)	\
    ( (This)->lpVtbl -> GetPositionX(This,offsetX) ) 

#define IBMDSwitcherKeyFlyParameters_SetPositionX(This,offsetX)	\
    ( (This)->lpVtbl -> SetPositionX(This,offsetX) ) 

#define IBMDSwitcherKeyFlyParameters_GetPositionY(This,offsetY)	\
    ( (This)->lpVtbl -> GetPositionY(This,offsetY) ) 

#define IBMDSwitcherKeyFlyParameters_SetPositionY(This,offsetY)	\
    ( (This)->lpVtbl -> SetPositionY(This,offsetY) ) 

#define IBMDSwitcherKeyFlyParameters_GetRotation(This,degrees)	\
    ( (This)->lpVtbl -> GetRotation(This,degrees) ) 

#define IBMDSwitcherKeyFlyParameters_SetRotation(This,degrees)	\
    ( (This)->lpVtbl -> SetRotation(This,degrees) ) 

#define IBMDSwitcherKeyFlyParameters_ResetRotation(This)	\
    ( (This)->lpVtbl -> ResetRotation(This) ) 

#define IBMDSwitcherKeyFlyParameters_ResetDVE(This)	\
    ( (This)->lpVtbl -> ResetDVE(This) ) 

#define IBMDSwitcherKeyFlyParameters_ResetDVEFull(This)	\
    ( (This)->lpVtbl -> ResetDVEFull(This) ) 

#define IBMDSwitcherKeyFlyParameters_IsKeyFrameStored(This,keyFrame,stored)	\
    ( (This)->lpVtbl -> IsKeyFrameStored(This,keyFrame,stored) ) 

#define IBMDSwitcherKeyFlyParameters_StoreAsKeyFrame(This,keyFrame)	\
    ( (This)->lpVtbl -> StoreAsKeyFrame(This,keyFrame) ) 

#define IBMDSwitcherKeyFlyParameters_RunToKeyFrame(This,destination)	\
    ( (This)->lpVtbl -> RunToKeyFrame(This,destination) ) 

#define IBMDSwitcherKeyFlyParameters_IsAtKeyFrames(This,keyFrames)	\
    ( (This)->lpVtbl -> IsAtKeyFrames(This,keyFrames) ) 

#define IBMDSwitcherKeyFlyParameters_IsRunning(This,isRunning,destination)	\
    ( (This)->lpVtbl -> IsRunning(This,isRunning,destination) ) 

#define IBMDSwitcherKeyFlyParameters_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherKeyFlyParameters_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyFlyParameters_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyDVEParametersCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyDVEParametersCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyDVEParametersCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyDVEParametersCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E437655F-32BB-4652-BA77-4083B435566A")
    IBMDSwitcherKeyDVEParametersCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherKeyDVEParametersEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyDVEParametersCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyDVEParametersCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyDVEParametersCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyDVEParametersCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherKeyDVEParametersCallback * This,
            /* [in] */ BMDSwitcherKeyDVEParametersEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherKeyDVEParametersCallbackVtbl;

    interface IBMDSwitcherKeyDVEParametersCallback
    {
        CONST_VTBL struct IBMDSwitcherKeyDVEParametersCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyDVEParametersCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyDVEParametersCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyDVEParametersCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyDVEParametersCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyDVEParametersCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyDVEParameters_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyDVEParameters_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyDVEParameters */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyDVEParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("92AA5433-70FB-423D-9435-646D171C9D82")
    IBMDSwitcherKeyDVEParameters : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetShadow( 
            /* [out] */ BOOL *shadowOn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetShadow( 
            /* [in] */ BOOL shadowOn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLightSourceDirection( 
            /* [out] */ double *degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLightSourceDirection( 
            /* [in] */ double degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLightSourceAltitude( 
            /* [out] */ double *altitude) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLightSourceAltitude( 
            /* [in] */ double altitude) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderEnabled( 
            /* [out] */ BOOL *on) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderEnabled( 
            /* [in] */ BOOL on) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderBevel( 
            /* [out] */ BMDSwitcherBorderBevelOption *bevelOption) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderBevel( 
            /* [in] */ BMDSwitcherBorderBevelOption bevelOption) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderWidthIn( 
            /* [out] */ double *widthIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderWidthIn( 
            /* [in] */ double widthIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderWidthOut( 
            /* [out] */ double *widthOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderWidthOut( 
            /* [in] */ double widthOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderSoftnessIn( 
            /* [out] */ double *softIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderSoftnessIn( 
            /* [in] */ double softIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderSoftnessOut( 
            /* [out] */ double *softOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderSoftnessOut( 
            /* [in] */ double softOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderBevelSoftness( 
            /* [out] */ double *bevelSoft) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderBevelSoftness( 
            /* [in] */ double bevelSoft) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderBevelPosition( 
            /* [out] */ double *bevelPosition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderBevelPosition( 
            /* [in] */ double bevelPosition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderOpacity( 
            /* [out] */ double *opacity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderOpacity( 
            /* [in] */ double opacity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderHue( 
            /* [out] */ double *hue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderHue( 
            /* [in] */ double hue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderSaturation( 
            /* [out] */ double *sat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderSaturation( 
            /* [in] */ double sat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderLuma( 
            /* [out] */ double *luma) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderLuma( 
            /* [in] */ double luma) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMasked( 
            /* [out] */ BOOL *maskEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMasked( 
            /* [in] */ BOOL maskEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskTop( 
            /* [out] */ double *top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskTop( 
            /* [in] */ double top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskBottom( 
            /* [out] */ double *bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskBottom( 
            /* [in] */ double bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskLeft( 
            /* [out] */ double *left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskLeft( 
            /* [in] */ double left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskRight( 
            /* [out] */ double *right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskRight( 
            /* [in] */ double right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetMask( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherKeyDVEParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherKeyDVEParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyDVEParametersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyDVEParameters * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyDVEParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetShadow )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ BOOL *shadowOn);
        
        HRESULT ( STDMETHODCALLTYPE *SetShadow )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ BOOL shadowOn);
        
        HRESULT ( STDMETHODCALLTYPE *GetLightSourceDirection )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *degrees);
        
        HRESULT ( STDMETHODCALLTYPE *SetLightSourceDirection )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double degrees);
        
        HRESULT ( STDMETHODCALLTYPE *GetLightSourceAltitude )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *altitude);
        
        HRESULT ( STDMETHODCALLTYPE *SetLightSourceAltitude )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double altitude);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderEnabled )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ BOOL *on);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderEnabled )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ BOOL on);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderBevel )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ BMDSwitcherBorderBevelOption *bevelOption);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderBevel )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ BMDSwitcherBorderBevelOption bevelOption);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderWidthIn )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *widthIn);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderWidthIn )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double widthIn);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderWidthOut )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *widthOut);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderWidthOut )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double widthOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderSoftnessIn )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *softIn);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderSoftnessIn )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double softIn);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderSoftnessOut )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *softOut);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderSoftnessOut )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double softOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderBevelSoftness )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *bevelSoft);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderBevelSoftness )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double bevelSoft);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderBevelPosition )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *bevelPosition);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderBevelPosition )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double bevelPosition);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderOpacity )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *opacity);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderOpacity )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double opacity);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderHue )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *hue);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderHue )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double hue);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderSaturation )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *sat);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderSaturation )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double sat);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderLuma )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *luma);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderLuma )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double luma);
        
        HRESULT ( STDMETHODCALLTYPE *GetMasked )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ BOOL *maskEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *SetMasked )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ BOOL maskEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskTop )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *top);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskTop )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double top);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskBottom )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *bottom);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskBottom )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double bottom);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskLeft )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *left);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskLeft )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double left);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskRight )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *right);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskRight )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double right);
        
        HRESULT ( STDMETHODCALLTYPE *ResetMask )( 
            IBMDSwitcherKeyDVEParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ IBMDSwitcherKeyDVEParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ IBMDSwitcherKeyDVEParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherKeyDVEParametersVtbl;

    interface IBMDSwitcherKeyDVEParameters
    {
        CONST_VTBL struct IBMDSwitcherKeyDVEParametersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyDVEParameters_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyDVEParameters_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyDVEParameters_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyDVEParameters_GetShadow(This,shadowOn)	\
    ( (This)->lpVtbl -> GetShadow(This,shadowOn) ) 

#define IBMDSwitcherKeyDVEParameters_SetShadow(This,shadowOn)	\
    ( (This)->lpVtbl -> SetShadow(This,shadowOn) ) 

#define IBMDSwitcherKeyDVEParameters_GetLightSourceDirection(This,degrees)	\
    ( (This)->lpVtbl -> GetLightSourceDirection(This,degrees) ) 

#define IBMDSwitcherKeyDVEParameters_SetLightSourceDirection(This,degrees)	\
    ( (This)->lpVtbl -> SetLightSourceDirection(This,degrees) ) 

#define IBMDSwitcherKeyDVEParameters_GetLightSourceAltitude(This,altitude)	\
    ( (This)->lpVtbl -> GetLightSourceAltitude(This,altitude) ) 

#define IBMDSwitcherKeyDVEParameters_SetLightSourceAltitude(This,altitude)	\
    ( (This)->lpVtbl -> SetLightSourceAltitude(This,altitude) ) 

#define IBMDSwitcherKeyDVEParameters_GetBorderEnabled(This,on)	\
    ( (This)->lpVtbl -> GetBorderEnabled(This,on) ) 

#define IBMDSwitcherKeyDVEParameters_SetBorderEnabled(This,on)	\
    ( (This)->lpVtbl -> SetBorderEnabled(This,on) ) 

#define IBMDSwitcherKeyDVEParameters_GetBorderBevel(This,bevelOption)	\
    ( (This)->lpVtbl -> GetBorderBevel(This,bevelOption) ) 

#define IBMDSwitcherKeyDVEParameters_SetBorderBevel(This,bevelOption)	\
    ( (This)->lpVtbl -> SetBorderBevel(This,bevelOption) ) 

#define IBMDSwitcherKeyDVEParameters_GetBorderWidthIn(This,widthIn)	\
    ( (This)->lpVtbl -> GetBorderWidthIn(This,widthIn) ) 

#define IBMDSwitcherKeyDVEParameters_SetBorderWidthIn(This,widthIn)	\
    ( (This)->lpVtbl -> SetBorderWidthIn(This,widthIn) ) 

#define IBMDSwitcherKeyDVEParameters_GetBorderWidthOut(This,widthOut)	\
    ( (This)->lpVtbl -> GetBorderWidthOut(This,widthOut) ) 

#define IBMDSwitcherKeyDVEParameters_SetBorderWidthOut(This,widthOut)	\
    ( (This)->lpVtbl -> SetBorderWidthOut(This,widthOut) ) 

#define IBMDSwitcherKeyDVEParameters_GetBorderSoftnessIn(This,softIn)	\
    ( (This)->lpVtbl -> GetBorderSoftnessIn(This,softIn) ) 

#define IBMDSwitcherKeyDVEParameters_SetBorderSoftnessIn(This,softIn)	\
    ( (This)->lpVtbl -> SetBorderSoftnessIn(This,softIn) ) 

#define IBMDSwitcherKeyDVEParameters_GetBorderSoftnessOut(This,softOut)	\
    ( (This)->lpVtbl -> GetBorderSoftnessOut(This,softOut) ) 

#define IBMDSwitcherKeyDVEParameters_SetBorderSoftnessOut(This,softOut)	\
    ( (This)->lpVtbl -> SetBorderSoftnessOut(This,softOut) ) 

#define IBMDSwitcherKeyDVEParameters_GetBorderBevelSoftness(This,bevelSoft)	\
    ( (This)->lpVtbl -> GetBorderBevelSoftness(This,bevelSoft) ) 

#define IBMDSwitcherKeyDVEParameters_SetBorderBevelSoftness(This,bevelSoft)	\
    ( (This)->lpVtbl -> SetBorderBevelSoftness(This,bevelSoft) ) 

#define IBMDSwitcherKeyDVEParameters_GetBorderBevelPosition(This,bevelPosition)	\
    ( (This)->lpVtbl -> GetBorderBevelPosition(This,bevelPosition) ) 

#define IBMDSwitcherKeyDVEParameters_SetBorderBevelPosition(This,bevelPosition)	\
    ( (This)->lpVtbl -> SetBorderBevelPosition(This,bevelPosition) ) 

#define IBMDSwitcherKeyDVEParameters_GetBorderOpacity(This,opacity)	\
    ( (This)->lpVtbl -> GetBorderOpacity(This,opacity) ) 

#define IBMDSwitcherKeyDVEParameters_SetBorderOpacity(This,opacity)	\
    ( (This)->lpVtbl -> SetBorderOpacity(This,opacity) ) 

#define IBMDSwitcherKeyDVEParameters_GetBorderHue(This,hue)	\
    ( (This)->lpVtbl -> GetBorderHue(This,hue) ) 

#define IBMDSwitcherKeyDVEParameters_SetBorderHue(This,hue)	\
    ( (This)->lpVtbl -> SetBorderHue(This,hue) ) 

#define IBMDSwitcherKeyDVEParameters_GetBorderSaturation(This,sat)	\
    ( (This)->lpVtbl -> GetBorderSaturation(This,sat) ) 

#define IBMDSwitcherKeyDVEParameters_SetBorderSaturation(This,sat)	\
    ( (This)->lpVtbl -> SetBorderSaturation(This,sat) ) 

#define IBMDSwitcherKeyDVEParameters_GetBorderLuma(This,luma)	\
    ( (This)->lpVtbl -> GetBorderLuma(This,luma) ) 

#define IBMDSwitcherKeyDVEParameters_SetBorderLuma(This,luma)	\
    ( (This)->lpVtbl -> SetBorderLuma(This,luma) ) 

#define IBMDSwitcherKeyDVEParameters_GetMasked(This,maskEnabled)	\
    ( (This)->lpVtbl -> GetMasked(This,maskEnabled) ) 

#define IBMDSwitcherKeyDVEParameters_SetMasked(This,maskEnabled)	\
    ( (This)->lpVtbl -> SetMasked(This,maskEnabled) ) 

#define IBMDSwitcherKeyDVEParameters_GetMaskTop(This,top)	\
    ( (This)->lpVtbl -> GetMaskTop(This,top) ) 

#define IBMDSwitcherKeyDVEParameters_SetMaskTop(This,top)	\
    ( (This)->lpVtbl -> SetMaskTop(This,top) ) 

#define IBMDSwitcherKeyDVEParameters_GetMaskBottom(This,bottom)	\
    ( (This)->lpVtbl -> GetMaskBottom(This,bottom) ) 

#define IBMDSwitcherKeyDVEParameters_SetMaskBottom(This,bottom)	\
    ( (This)->lpVtbl -> SetMaskBottom(This,bottom) ) 

#define IBMDSwitcherKeyDVEParameters_GetMaskLeft(This,left)	\
    ( (This)->lpVtbl -> GetMaskLeft(This,left) ) 

#define IBMDSwitcherKeyDVEParameters_SetMaskLeft(This,left)	\
    ( (This)->lpVtbl -> SetMaskLeft(This,left) ) 

#define IBMDSwitcherKeyDVEParameters_GetMaskRight(This,right)	\
    ( (This)->lpVtbl -> GetMaskRight(This,right) ) 

#define IBMDSwitcherKeyDVEParameters_SetMaskRight(This,right)	\
    ( (This)->lpVtbl -> SetMaskRight(This,right) ) 

#define IBMDSwitcherKeyDVEParameters_ResetMask(This)	\
    ( (This)->lpVtbl -> ResetMask(This) ) 

#define IBMDSwitcherKeyDVEParameters_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherKeyDVEParameters_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyDVEParameters_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1972E4DF-1D5F-4C4E-A79B-E5A6E8CE1511")
    IBMDSwitcherKeyCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherKeyEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherKeyCallback * This,
            /* [in] */ BMDSwitcherKeyEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherKeyCallbackVtbl;

    interface IBMDSwitcherKeyCallback
    {
        CONST_VTBL struct IBMDSwitcherKeyCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKey_INTERFACE_DEFINED__
#define __IBMDSwitcherKey_INTERFACE_DEFINED__

/* interface IBMDSwitcherKey */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKey;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("918E234D-67C1-452F-80A0-DB39FE6BCB21")
    IBMDSwitcherKey : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetType( 
            /* [out] */ BMDSwitcherKeyType *type) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetType( 
            /* [in] */ BMDSwitcherKeyType type) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputCut( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputCut( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputFill( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputFill( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOnAir( 
            /* [out] */ BOOL *onAir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOnAir( 
            /* [in] */ BOOL onAir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CanBeDVEKey( 
            /* [out] */ BOOL *canDVE) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMasked( 
            /* [out] */ BOOL *maskEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMasked( 
            /* [in] */ BOOL maskEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskTop( 
            /* [out] */ double *top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskTop( 
            /* [in] */ double top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskBottom( 
            /* [out] */ double *bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskBottom( 
            /* [in] */ double bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskLeft( 
            /* [out] */ double *left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskLeft( 
            /* [in] */ double left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskRight( 
            /* [out] */ double *right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskRight( 
            /* [in] */ double right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetMask( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTransitionSelectionMask( 
            /* [out] */ BMDSwitcherTransitionSelection *selectionMask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherKeyCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherKeyCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKey * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKey * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKey * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IBMDSwitcherKey * This,
            /* [out] */ BMDSwitcherKeyType *type);
        
        HRESULT ( STDMETHODCALLTYPE *SetType )( 
            IBMDSwitcherKey * This,
            /* [in] */ BMDSwitcherKeyType type);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputCut )( 
            IBMDSwitcherKey * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputCut )( 
            IBMDSwitcherKey * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputFill )( 
            IBMDSwitcherKey * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputFill )( 
            IBMDSwitcherKey * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetOnAir )( 
            IBMDSwitcherKey * This,
            /* [out] */ BOOL *onAir);
        
        HRESULT ( STDMETHODCALLTYPE *SetOnAir )( 
            IBMDSwitcherKey * This,
            /* [in] */ BOOL onAir);
        
        HRESULT ( STDMETHODCALLTYPE *CanBeDVEKey )( 
            IBMDSwitcherKey * This,
            /* [out] */ BOOL *canDVE);
        
        HRESULT ( STDMETHODCALLTYPE *GetMasked )( 
            IBMDSwitcherKey * This,
            /* [out] */ BOOL *maskEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *SetMasked )( 
            IBMDSwitcherKey * This,
            /* [in] */ BOOL maskEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskTop )( 
            IBMDSwitcherKey * This,
            /* [out] */ double *top);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskTop )( 
            IBMDSwitcherKey * This,
            /* [in] */ double top);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskBottom )( 
            IBMDSwitcherKey * This,
            /* [out] */ double *bottom);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskBottom )( 
            IBMDSwitcherKey * This,
            /* [in] */ double bottom);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskLeft )( 
            IBMDSwitcherKey * This,
            /* [out] */ double *left);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskLeft )( 
            IBMDSwitcherKey * This,
            /* [in] */ double left);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskRight )( 
            IBMDSwitcherKey * This,
            /* [out] */ double *right);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskRight )( 
            IBMDSwitcherKey * This,
            /* [in] */ double right);
        
        HRESULT ( STDMETHODCALLTYPE *ResetMask )( 
            IBMDSwitcherKey * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTransitionSelectionMask )( 
            IBMDSwitcherKey * This,
            /* [out] */ BMDSwitcherTransitionSelection *selectionMask);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherKey * This,
            /* [in] */ IBMDSwitcherKeyCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherKey * This,
            /* [in] */ IBMDSwitcherKeyCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherKeyVtbl;

    interface IBMDSwitcherKey
    {
        CONST_VTBL struct IBMDSwitcherKeyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKey_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKey_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKey_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKey_GetType(This,type)	\
    ( (This)->lpVtbl -> GetType(This,type) ) 

#define IBMDSwitcherKey_SetType(This,type)	\
    ( (This)->lpVtbl -> SetType(This,type) ) 

#define IBMDSwitcherKey_GetInputCut(This,input)	\
    ( (This)->lpVtbl -> GetInputCut(This,input) ) 

#define IBMDSwitcherKey_SetInputCut(This,input)	\
    ( (This)->lpVtbl -> SetInputCut(This,input) ) 

#define IBMDSwitcherKey_GetInputFill(This,input)	\
    ( (This)->lpVtbl -> GetInputFill(This,input) ) 

#define IBMDSwitcherKey_SetInputFill(This,input)	\
    ( (This)->lpVtbl -> SetInputFill(This,input) ) 

#define IBMDSwitcherKey_GetOnAir(This,onAir)	\
    ( (This)->lpVtbl -> GetOnAir(This,onAir) ) 

#define IBMDSwitcherKey_SetOnAir(This,onAir)	\
    ( (This)->lpVtbl -> SetOnAir(This,onAir) ) 

#define IBMDSwitcherKey_CanBeDVEKey(This,canDVE)	\
    ( (This)->lpVtbl -> CanBeDVEKey(This,canDVE) ) 

#define IBMDSwitcherKey_GetMasked(This,maskEnabled)	\
    ( (This)->lpVtbl -> GetMasked(This,maskEnabled) ) 

#define IBMDSwitcherKey_SetMasked(This,maskEnabled)	\
    ( (This)->lpVtbl -> SetMasked(This,maskEnabled) ) 

#define IBMDSwitcherKey_GetMaskTop(This,top)	\
    ( (This)->lpVtbl -> GetMaskTop(This,top) ) 

#define IBMDSwitcherKey_SetMaskTop(This,top)	\
    ( (This)->lpVtbl -> SetMaskTop(This,top) ) 

#define IBMDSwitcherKey_GetMaskBottom(This,bottom)	\
    ( (This)->lpVtbl -> GetMaskBottom(This,bottom) ) 

#define IBMDSwitcherKey_SetMaskBottom(This,bottom)	\
    ( (This)->lpVtbl -> SetMaskBottom(This,bottom) ) 

#define IBMDSwitcherKey_GetMaskLeft(This,left)	\
    ( (This)->lpVtbl -> GetMaskLeft(This,left) ) 

#define IBMDSwitcherKey_SetMaskLeft(This,left)	\
    ( (This)->lpVtbl -> SetMaskLeft(This,left) ) 

#define IBMDSwitcherKey_GetMaskRight(This,right)	\
    ( (This)->lpVtbl -> GetMaskRight(This,right) ) 

#define IBMDSwitcherKey_SetMaskRight(This,right)	\
    ( (This)->lpVtbl -> SetMaskRight(This,right) ) 

#define IBMDSwitcherKey_ResetMask(This)	\
    ( (This)->lpVtbl -> ResetMask(This) ) 

#define IBMDSwitcherKey_GetTransitionSelectionMask(This,selectionMask)	\
    ( (This)->lpVtbl -> GetTransitionSelectionMask(This,selectionMask) ) 

#define IBMDSwitcherKey_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherKey_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKey_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMediaPlayerCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherMediaPlayerCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherMediaPlayerCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMediaPlayerCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3A82C121-18FA-469E-AE9A-73255356CA5B")
    IBMDSwitcherMediaPlayerCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SourceChanged( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PlayingChanged( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoopChanged( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AtBeginningChanged( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClipFrameChanged( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMediaPlayerCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMediaPlayerCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMediaPlayerCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMediaPlayerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *SourceChanged )( 
            IBMDSwitcherMediaPlayerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *PlayingChanged )( 
            IBMDSwitcherMediaPlayerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *LoopChanged )( 
            IBMDSwitcherMediaPlayerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *AtBeginningChanged )( 
            IBMDSwitcherMediaPlayerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *ClipFrameChanged )( 
            IBMDSwitcherMediaPlayerCallback * This);
        
        END_INTERFACE
    } IBMDSwitcherMediaPlayerCallbackVtbl;

    interface IBMDSwitcherMediaPlayerCallback
    {
        CONST_VTBL struct IBMDSwitcherMediaPlayerCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMediaPlayerCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMediaPlayerCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMediaPlayerCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMediaPlayerCallback_SourceChanged(This)	\
    ( (This)->lpVtbl -> SourceChanged(This) ) 

#define IBMDSwitcherMediaPlayerCallback_PlayingChanged(This)	\
    ( (This)->lpVtbl -> PlayingChanged(This) ) 

#define IBMDSwitcherMediaPlayerCallback_LoopChanged(This)	\
    ( (This)->lpVtbl -> LoopChanged(This) ) 

#define IBMDSwitcherMediaPlayerCallback_AtBeginningChanged(This)	\
    ( (This)->lpVtbl -> AtBeginningChanged(This) ) 

#define IBMDSwitcherMediaPlayerCallback_ClipFrameChanged(This)	\
    ( (This)->lpVtbl -> ClipFrameChanged(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMediaPlayerCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMediaPlayer_INTERFACE_DEFINED__
#define __IBMDSwitcherMediaPlayer_INTERFACE_DEFINED__

/* interface IBMDSwitcherMediaPlayer */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMediaPlayer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B5240E1F-CE0A-4C38-9FAB-D7FAC227205A")
    IBMDSwitcherMediaPlayer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSource( 
            /* [out] */ BMDSwitcherMediaPlayerSourceType *type,
            /* [out] */ unsigned long *index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSource( 
            /* [in] */ BMDSwitcherMediaPlayerSourceType type,
            /* [in] */ unsigned long index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPlaying( 
            /* [out] */ BOOL *playing) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPlaying( 
            /* [in] */ BOOL playing) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLoop( 
            /* [out] */ BOOL *loop) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLoop( 
            /* [in] */ BOOL loop) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAtBeginning( 
            /* [out] */ BOOL *atBegining) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAtBeginning( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClipFrame( 
            /* [out] */ unsigned long *clipFrameIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClipFrame( 
            /* [in] */ unsigned long clipFrameIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherMediaPlayerCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherMediaPlayerCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMediaPlayerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMediaPlayer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMediaPlayer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMediaPlayer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSource )( 
            IBMDSwitcherMediaPlayer * This,
            /* [out] */ BMDSwitcherMediaPlayerSourceType *type,
            /* [out] */ unsigned long *index);
        
        HRESULT ( STDMETHODCALLTYPE *SetSource )( 
            IBMDSwitcherMediaPlayer * This,
            /* [in] */ BMDSwitcherMediaPlayerSourceType type,
            /* [in] */ unsigned long index);
        
        HRESULT ( STDMETHODCALLTYPE *GetPlaying )( 
            IBMDSwitcherMediaPlayer * This,
            /* [out] */ BOOL *playing);
        
        HRESULT ( STDMETHODCALLTYPE *SetPlaying )( 
            IBMDSwitcherMediaPlayer * This,
            /* [in] */ BOOL playing);
        
        HRESULT ( STDMETHODCALLTYPE *GetLoop )( 
            IBMDSwitcherMediaPlayer * This,
            /* [out] */ BOOL *loop);
        
        HRESULT ( STDMETHODCALLTYPE *SetLoop )( 
            IBMDSwitcherMediaPlayer * This,
            /* [in] */ BOOL loop);
        
        HRESULT ( STDMETHODCALLTYPE *GetAtBeginning )( 
            IBMDSwitcherMediaPlayer * This,
            /* [out] */ BOOL *atBegining);
        
        HRESULT ( STDMETHODCALLTYPE *SetAtBeginning )( 
            IBMDSwitcherMediaPlayer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetClipFrame )( 
            IBMDSwitcherMediaPlayer * This,
            /* [out] */ unsigned long *clipFrameIndex);
        
        HRESULT ( STDMETHODCALLTYPE *SetClipFrame )( 
            IBMDSwitcherMediaPlayer * This,
            /* [in] */ unsigned long clipFrameIndex);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherMediaPlayer * This,
            /* [in] */ IBMDSwitcherMediaPlayerCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherMediaPlayer * This,
            /* [in] */ IBMDSwitcherMediaPlayerCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherMediaPlayerVtbl;

    interface IBMDSwitcherMediaPlayer
    {
        CONST_VTBL struct IBMDSwitcherMediaPlayerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMediaPlayer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMediaPlayer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMediaPlayer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMediaPlayer_GetSource(This,type,index)	\
    ( (This)->lpVtbl -> GetSource(This,type,index) ) 

#define IBMDSwitcherMediaPlayer_SetSource(This,type,index)	\
    ( (This)->lpVtbl -> SetSource(This,type,index) ) 

#define IBMDSwitcherMediaPlayer_GetPlaying(This,playing)	\
    ( (This)->lpVtbl -> GetPlaying(This,playing) ) 

#define IBMDSwitcherMediaPlayer_SetPlaying(This,playing)	\
    ( (This)->lpVtbl -> SetPlaying(This,playing) ) 

#define IBMDSwitcherMediaPlayer_GetLoop(This,loop)	\
    ( (This)->lpVtbl -> GetLoop(This,loop) ) 

#define IBMDSwitcherMediaPlayer_SetLoop(This,loop)	\
    ( (This)->lpVtbl -> SetLoop(This,loop) ) 

#define IBMDSwitcherMediaPlayer_GetAtBeginning(This,atBegining)	\
    ( (This)->lpVtbl -> GetAtBeginning(This,atBegining) ) 

#define IBMDSwitcherMediaPlayer_SetAtBeginning(This)	\
    ( (This)->lpVtbl -> SetAtBeginning(This) ) 

#define IBMDSwitcherMediaPlayer_GetClipFrame(This,clipFrameIndex)	\
    ( (This)->lpVtbl -> GetClipFrame(This,clipFrameIndex) ) 

#define IBMDSwitcherMediaPlayer_SetClipFrame(This,clipFrameIndex)	\
    ( (This)->lpVtbl -> SetClipFrame(This,clipFrameIndex) ) 

#define IBMDSwitcherMediaPlayer_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherMediaPlayer_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMediaPlayer_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTransitionMixParametersCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherTransitionMixParametersCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherTransitionMixParametersCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTransitionMixParametersCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FE9730BB-F60B-46DF-B182-2992FFC884DE")
    IBMDSwitcherTransitionMixParametersCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherTransitionMixParametersEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTransitionMixParametersCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTransitionMixParametersCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTransitionMixParametersCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTransitionMixParametersCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherTransitionMixParametersCallback * This,
            /* [in] */ BMDSwitcherTransitionMixParametersEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherTransitionMixParametersCallbackVtbl;

    interface IBMDSwitcherTransitionMixParametersCallback
    {
        CONST_VTBL struct IBMDSwitcherTransitionMixParametersCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTransitionMixParametersCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTransitionMixParametersCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTransitionMixParametersCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTransitionMixParametersCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTransitionMixParametersCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTransitionMixParameters_INTERFACE_DEFINED__
#define __IBMDSwitcherTransitionMixParameters_INTERFACE_DEFINED__

/* interface IBMDSwitcherTransitionMixParameters */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTransitionMixParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4C5D18C9-0955-4525-9947-527EA0679140")
    IBMDSwitcherTransitionMixParameters : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRate( 
            /* [out] */ unsigned long *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRate( 
            /* [in] */ unsigned long frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherTransitionMixParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherTransitionMixParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTransitionMixParametersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTransitionMixParameters * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTransitionMixParameters * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTransitionMixParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRate )( 
            IBMDSwitcherTransitionMixParameters * This,
            /* [out] */ unsigned long *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetRate )( 
            IBMDSwitcherTransitionMixParameters * This,
            /* [in] */ unsigned long frames);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherTransitionMixParameters * This,
            /* [in] */ IBMDSwitcherTransitionMixParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherTransitionMixParameters * This,
            /* [in] */ IBMDSwitcherTransitionMixParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherTransitionMixParametersVtbl;

    interface IBMDSwitcherTransitionMixParameters
    {
        CONST_VTBL struct IBMDSwitcherTransitionMixParametersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTransitionMixParameters_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTransitionMixParameters_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTransitionMixParameters_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTransitionMixParameters_GetRate(This,frames)	\
    ( (This)->lpVtbl -> GetRate(This,frames) ) 

#define IBMDSwitcherTransitionMixParameters_SetRate(This,frames)	\
    ( (This)->lpVtbl -> SetRate(This,frames) ) 

#define IBMDSwitcherTransitionMixParameters_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherTransitionMixParameters_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTransitionMixParameters_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTransitionDipParametersCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherTransitionDipParametersCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherTransitionDipParametersCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTransitionDipParametersCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("410BE711-DB1A-48D1-93E7-382A0B1781B5")
    IBMDSwitcherTransitionDipParametersCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherTransitionDipParametersEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTransitionDipParametersCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTransitionDipParametersCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTransitionDipParametersCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTransitionDipParametersCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherTransitionDipParametersCallback * This,
            /* [in] */ BMDSwitcherTransitionDipParametersEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherTransitionDipParametersCallbackVtbl;

    interface IBMDSwitcherTransitionDipParametersCallback
    {
        CONST_VTBL struct IBMDSwitcherTransitionDipParametersCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTransitionDipParametersCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTransitionDipParametersCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTransitionDipParametersCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTransitionDipParametersCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTransitionDipParametersCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTransitionDipParameters_INTERFACE_DEFINED__
#define __IBMDSwitcherTransitionDipParameters_INTERFACE_DEFINED__

/* interface IBMDSwitcherTransitionDipParameters */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTransitionDipParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DACC2FF3-6B54-4459-AAA6-2B1EA2D6887A")
    IBMDSwitcherTransitionDipParameters : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRate( 
            /* [out] */ unsigned long *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRate( 
            /* [in] */ unsigned long frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputDip( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputDip( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherTransitionDipParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherTransitionDipParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTransitionDipParametersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTransitionDipParameters * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTransitionDipParameters * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTransitionDipParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRate )( 
            IBMDSwitcherTransitionDipParameters * This,
            /* [out] */ unsigned long *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetRate )( 
            IBMDSwitcherTransitionDipParameters * This,
            /* [in] */ unsigned long frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputDip )( 
            IBMDSwitcherTransitionDipParameters * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputDip )( 
            IBMDSwitcherTransitionDipParameters * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherTransitionDipParameters * This,
            /* [in] */ IBMDSwitcherTransitionDipParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherTransitionDipParameters * This,
            /* [in] */ IBMDSwitcherTransitionDipParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherTransitionDipParametersVtbl;

    interface IBMDSwitcherTransitionDipParameters
    {
        CONST_VTBL struct IBMDSwitcherTransitionDipParametersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTransitionDipParameters_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTransitionDipParameters_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTransitionDipParameters_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTransitionDipParameters_GetRate(This,frames)	\
    ( (This)->lpVtbl -> GetRate(This,frames) ) 

#define IBMDSwitcherTransitionDipParameters_SetRate(This,frames)	\
    ( (This)->lpVtbl -> SetRate(This,frames) ) 

#define IBMDSwitcherTransitionDipParameters_GetInputDip(This,input)	\
    ( (This)->lpVtbl -> GetInputDip(This,input) ) 

#define IBMDSwitcherTransitionDipParameters_SetInputDip(This,input)	\
    ( (This)->lpVtbl -> SetInputDip(This,input) ) 

#define IBMDSwitcherTransitionDipParameters_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherTransitionDipParameters_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTransitionDipParameters_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTransitionWipeParametersCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherTransitionWipeParametersCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherTransitionWipeParametersCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTransitionWipeParametersCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0FC4E095-DF7A-4128-933A-AAE4B7FD6119")
    IBMDSwitcherTransitionWipeParametersCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherTransitionWipeParametersEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTransitionWipeParametersCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTransitionWipeParametersCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTransitionWipeParametersCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTransitionWipeParametersCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherTransitionWipeParametersCallback * This,
            /* [in] */ BMDSwitcherTransitionWipeParametersEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherTransitionWipeParametersCallbackVtbl;

    interface IBMDSwitcherTransitionWipeParametersCallback
    {
        CONST_VTBL struct IBMDSwitcherTransitionWipeParametersCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTransitionWipeParametersCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTransitionWipeParametersCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTransitionWipeParametersCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTransitionWipeParametersCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTransitionWipeParametersCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTransitionWipeParameters_INTERFACE_DEFINED__
#define __IBMDSwitcherTransitionWipeParameters_INTERFACE_DEFINED__

/* interface IBMDSwitcherTransitionWipeParameters */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTransitionWipeParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FAC84D37-11A2-4152-8E5E-D9EB0DC48619")
    IBMDSwitcherTransitionWipeParameters : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRate( 
            /* [out] */ unsigned long *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRate( 
            /* [in] */ unsigned long frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPattern( 
            /* [out] */ BMDSwitcherPatternStyle *pattern) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPattern( 
            /* [in] */ BMDSwitcherPatternStyle pattern) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderSize( 
            /* [out] */ double *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderSize( 
            /* [in] */ double size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputBorder( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputBorder( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSymmetry( 
            /* [out] */ double *symmetry) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSymmetry( 
            /* [in] */ double symmetry) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSoftness( 
            /* [out] */ double *soft) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSoftness( 
            /* [in] */ double soft) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHorizontalOffset( 
            /* [out] */ double *hOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetHorizontalOffset( 
            /* [in] */ double hOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVerticalOffset( 
            /* [out] */ double *vOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetVerticalOffset( 
            /* [in] */ double vOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetReverse( 
            /* [out] */ BOOL *reverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetReverse( 
            /* [in] */ BOOL reverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlipFlop( 
            /* [out] */ BOOL *flipflop) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFlipFlop( 
            /* [in] */ BOOL flipflop) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherTransitionWipeParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherTransitionWipeParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTransitionWipeParametersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTransitionWipeParameters * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTransitionWipeParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRate )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [out] */ unsigned long *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetRate )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [in] */ unsigned long frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetPattern )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [out] */ BMDSwitcherPatternStyle *pattern);
        
        HRESULT ( STDMETHODCALLTYPE *SetPattern )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [in] */ BMDSwitcherPatternStyle pattern);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderSize )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [out] */ double *size);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderSize )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [in] */ double size);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputBorder )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputBorder )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetSymmetry )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [out] */ double *symmetry);
        
        HRESULT ( STDMETHODCALLTYPE *SetSymmetry )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [in] */ double symmetry);
        
        HRESULT ( STDMETHODCALLTYPE *GetSoftness )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [out] */ double *soft);
        
        HRESULT ( STDMETHODCALLTYPE *SetSoftness )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [in] */ double soft);
        
        HRESULT ( STDMETHODCALLTYPE *GetHorizontalOffset )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [out] */ double *hOffset);
        
        HRESULT ( STDMETHODCALLTYPE *SetHorizontalOffset )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [in] */ double hOffset);
        
        HRESULT ( STDMETHODCALLTYPE *GetVerticalOffset )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [out] */ double *vOffset);
        
        HRESULT ( STDMETHODCALLTYPE *SetVerticalOffset )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [in] */ double vOffset);
        
        HRESULT ( STDMETHODCALLTYPE *GetReverse )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [out] */ BOOL *reverse);
        
        HRESULT ( STDMETHODCALLTYPE *SetReverse )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [in] */ BOOL reverse);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlipFlop )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [out] */ BOOL *flipflop);
        
        HRESULT ( STDMETHODCALLTYPE *SetFlipFlop )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [in] */ BOOL flipflop);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [in] */ IBMDSwitcherTransitionWipeParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [in] */ IBMDSwitcherTransitionWipeParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherTransitionWipeParametersVtbl;

    interface IBMDSwitcherTransitionWipeParameters
    {
        CONST_VTBL struct IBMDSwitcherTransitionWipeParametersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTransitionWipeParameters_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTransitionWipeParameters_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTransitionWipeParameters_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTransitionWipeParameters_GetRate(This,frames)	\
    ( (This)->lpVtbl -> GetRate(This,frames) ) 

#define IBMDSwitcherTransitionWipeParameters_SetRate(This,frames)	\
    ( (This)->lpVtbl -> SetRate(This,frames) ) 

#define IBMDSwitcherTransitionWipeParameters_GetPattern(This,pattern)	\
    ( (This)->lpVtbl -> GetPattern(This,pattern) ) 

#define IBMDSwitcherTransitionWipeParameters_SetPattern(This,pattern)	\
    ( (This)->lpVtbl -> SetPattern(This,pattern) ) 

#define IBMDSwitcherTransitionWipeParameters_GetBorderSize(This,size)	\
    ( (This)->lpVtbl -> GetBorderSize(This,size) ) 

#define IBMDSwitcherTransitionWipeParameters_SetBorderSize(This,size)	\
    ( (This)->lpVtbl -> SetBorderSize(This,size) ) 

#define IBMDSwitcherTransitionWipeParameters_GetInputBorder(This,input)	\
    ( (This)->lpVtbl -> GetInputBorder(This,input) ) 

#define IBMDSwitcherTransitionWipeParameters_SetInputBorder(This,input)	\
    ( (This)->lpVtbl -> SetInputBorder(This,input) ) 

#define IBMDSwitcherTransitionWipeParameters_GetSymmetry(This,symmetry)	\
    ( (This)->lpVtbl -> GetSymmetry(This,symmetry) ) 

#define IBMDSwitcherTransitionWipeParameters_SetSymmetry(This,symmetry)	\
    ( (This)->lpVtbl -> SetSymmetry(This,symmetry) ) 

#define IBMDSwitcherTransitionWipeParameters_GetSoftness(This,soft)	\
    ( (This)->lpVtbl -> GetSoftness(This,soft) ) 

#define IBMDSwitcherTransitionWipeParameters_SetSoftness(This,soft)	\
    ( (This)->lpVtbl -> SetSoftness(This,soft) ) 

#define IBMDSwitcherTransitionWipeParameters_GetHorizontalOffset(This,hOffset)	\
    ( (This)->lpVtbl -> GetHorizontalOffset(This,hOffset) ) 

#define IBMDSwitcherTransitionWipeParameters_SetHorizontalOffset(This,hOffset)	\
    ( (This)->lpVtbl -> SetHorizontalOffset(This,hOffset) ) 

#define IBMDSwitcherTransitionWipeParameters_GetVerticalOffset(This,vOffset)	\
    ( (This)->lpVtbl -> GetVerticalOffset(This,vOffset) ) 

#define IBMDSwitcherTransitionWipeParameters_SetVerticalOffset(This,vOffset)	\
    ( (This)->lpVtbl -> SetVerticalOffset(This,vOffset) ) 

#define IBMDSwitcherTransitionWipeParameters_GetReverse(This,reverse)	\
    ( (This)->lpVtbl -> GetReverse(This,reverse) ) 

#define IBMDSwitcherTransitionWipeParameters_SetReverse(This,reverse)	\
    ( (This)->lpVtbl -> SetReverse(This,reverse) ) 

#define IBMDSwitcherTransitionWipeParameters_GetFlipFlop(This,flipflop)	\
    ( (This)->lpVtbl -> GetFlipFlop(This,flipflop) ) 

#define IBMDSwitcherTransitionWipeParameters_SetFlipFlop(This,flipflop)	\
    ( (This)->lpVtbl -> SetFlipFlop(This,flipflop) ) 

#define IBMDSwitcherTransitionWipeParameters_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherTransitionWipeParameters_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTransitionWipeParameters_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTransitionDVEParametersCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherTransitionDVEParametersCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherTransitionDVEParametersCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTransitionDVEParametersCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6535115F-B64C-4512-BF5A-12969253E2F9")
    IBMDSwitcherTransitionDVEParametersCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherTransitionDVEParametersEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTransitionDVEParametersCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTransitionDVEParametersCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTransitionDVEParametersCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTransitionDVEParametersCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherTransitionDVEParametersCallback * This,
            /* [in] */ BMDSwitcherTransitionDVEParametersEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherTransitionDVEParametersCallbackVtbl;

    interface IBMDSwitcherTransitionDVEParametersCallback
    {
        CONST_VTBL struct IBMDSwitcherTransitionDVEParametersCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTransitionDVEParametersCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTransitionDVEParametersCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTransitionDVEParametersCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTransitionDVEParametersCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTransitionDVEParametersCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTransitionDVEParameters_INTERFACE_DEFINED__
#define __IBMDSwitcherTransitionDVEParameters_INTERFACE_DEFINED__

/* interface IBMDSwitcherTransitionDVEParameters */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTransitionDVEParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("31CA3097-D178-4398-B041-059C1312F129")
    IBMDSwitcherTransitionDVEParameters : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRate( 
            /* [out] */ unsigned long *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRate( 
            /* [in] */ unsigned long frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLogoRate( 
            /* [out] */ unsigned long *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLogoRate( 
            /* [in] */ unsigned long frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetReverse( 
            /* [out] */ BOOL *reverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetReverse( 
            /* [in] */ BOOL reverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlipFlop( 
            /* [out] */ BOOL *flipflop) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFlipFlop( 
            /* [in] */ BOOL flipflop) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStyle( 
            /* [out] */ BMDSwitcherDVETransitionStyle *style) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetStyle( 
            /* [in] */ BMDSwitcherDVETransitionStyle style) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputFill( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputFill( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputCut( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputCut( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnableKey( 
            /* [out] */ BOOL *enableKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetEnableKey( 
            /* [in] */ BOOL enableKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPreMultiplied( 
            /* [out] */ BOOL *preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPreMultiplied( 
            /* [in] */ BOOL preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClip( 
            /* [out] */ double *clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClip( 
            /* [in] */ double clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGain( 
            /* [out] */ double *gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGain( 
            /* [in] */ double gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInverse( 
            /* [out] */ BOOL *inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInverse( 
            /* [in] */ BOOL inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherTransitionDVEParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherTransitionDVEParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTransitionDVEParametersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTransitionDVEParameters * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTransitionDVEParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRate )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ unsigned long *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetRate )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ unsigned long frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetLogoRate )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ unsigned long *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetLogoRate )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ unsigned long frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetReverse )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ BOOL *reverse);
        
        HRESULT ( STDMETHODCALLTYPE *SetReverse )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ BOOL reverse);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlipFlop )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ BOOL *flipflop);
        
        HRESULT ( STDMETHODCALLTYPE *SetFlipFlop )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ BOOL flipflop);
        
        HRESULT ( STDMETHODCALLTYPE *GetStyle )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ BMDSwitcherDVETransitionStyle *style);
        
        HRESULT ( STDMETHODCALLTYPE *SetStyle )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ BMDSwitcherDVETransitionStyle style);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputFill )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputFill )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputCut )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputCut )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnableKey )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ BOOL *enableKey);
        
        HRESULT ( STDMETHODCALLTYPE *SetEnableKey )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ BOOL enableKey);
        
        HRESULT ( STDMETHODCALLTYPE *GetPreMultiplied )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ BOOL *preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *SetPreMultiplied )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ BOOL preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *GetClip )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ double *clip);
        
        HRESULT ( STDMETHODCALLTYPE *SetClip )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ double clip);
        
        HRESULT ( STDMETHODCALLTYPE *GetGain )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ double *gain);
        
        HRESULT ( STDMETHODCALLTYPE *SetGain )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ double gain);
        
        HRESULT ( STDMETHODCALLTYPE *GetInverse )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ BOOL *inverse);
        
        HRESULT ( STDMETHODCALLTYPE *SetInverse )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ BOOL inverse);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ IBMDSwitcherTransitionDVEParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ IBMDSwitcherTransitionDVEParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherTransitionDVEParametersVtbl;

    interface IBMDSwitcherTransitionDVEParameters
    {
        CONST_VTBL struct IBMDSwitcherTransitionDVEParametersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTransitionDVEParameters_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTransitionDVEParameters_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTransitionDVEParameters_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTransitionDVEParameters_GetRate(This,frames)	\
    ( (This)->lpVtbl -> GetRate(This,frames) ) 

#define IBMDSwitcherTransitionDVEParameters_SetRate(This,frames)	\
    ( (This)->lpVtbl -> SetRate(This,frames) ) 

#define IBMDSwitcherTransitionDVEParameters_GetLogoRate(This,frames)	\
    ( (This)->lpVtbl -> GetLogoRate(This,frames) ) 

#define IBMDSwitcherTransitionDVEParameters_SetLogoRate(This,frames)	\
    ( (This)->lpVtbl -> SetLogoRate(This,frames) ) 

#define IBMDSwitcherTransitionDVEParameters_GetReverse(This,reverse)	\
    ( (This)->lpVtbl -> GetReverse(This,reverse) ) 

#define IBMDSwitcherTransitionDVEParameters_SetReverse(This,reverse)	\
    ( (This)->lpVtbl -> SetReverse(This,reverse) ) 

#define IBMDSwitcherTransitionDVEParameters_GetFlipFlop(This,flipflop)	\
    ( (This)->lpVtbl -> GetFlipFlop(This,flipflop) ) 

#define IBMDSwitcherTransitionDVEParameters_SetFlipFlop(This,flipflop)	\
    ( (This)->lpVtbl -> SetFlipFlop(This,flipflop) ) 

#define IBMDSwitcherTransitionDVEParameters_GetStyle(This,style)	\
    ( (This)->lpVtbl -> GetStyle(This,style) ) 

#define IBMDSwitcherTransitionDVEParameters_SetStyle(This,style)	\
    ( (This)->lpVtbl -> SetStyle(This,style) ) 

#define IBMDSwitcherTransitionDVEParameters_GetInputFill(This,input)	\
    ( (This)->lpVtbl -> GetInputFill(This,input) ) 

#define IBMDSwitcherTransitionDVEParameters_SetInputFill(This,input)	\
    ( (This)->lpVtbl -> SetInputFill(This,input) ) 

#define IBMDSwitcherTransitionDVEParameters_GetInputCut(This,input)	\
    ( (This)->lpVtbl -> GetInputCut(This,input) ) 

#define IBMDSwitcherTransitionDVEParameters_SetInputCut(This,input)	\
    ( (This)->lpVtbl -> SetInputCut(This,input) ) 

#define IBMDSwitcherTransitionDVEParameters_GetEnableKey(This,enableKey)	\
    ( (This)->lpVtbl -> GetEnableKey(This,enableKey) ) 

#define IBMDSwitcherTransitionDVEParameters_SetEnableKey(This,enableKey)	\
    ( (This)->lpVtbl -> SetEnableKey(This,enableKey) ) 

#define IBMDSwitcherTransitionDVEParameters_GetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> GetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherTransitionDVEParameters_SetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> SetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherTransitionDVEParameters_GetClip(This,clip)	\
    ( (This)->lpVtbl -> GetClip(This,clip) ) 

#define IBMDSwitcherTransitionDVEParameters_SetClip(This,clip)	\
    ( (This)->lpVtbl -> SetClip(This,clip) ) 

#define IBMDSwitcherTransitionDVEParameters_GetGain(This,gain)	\
    ( (This)->lpVtbl -> GetGain(This,gain) ) 

#define IBMDSwitcherTransitionDVEParameters_SetGain(This,gain)	\
    ( (This)->lpVtbl -> SetGain(This,gain) ) 

#define IBMDSwitcherTransitionDVEParameters_GetInverse(This,inverse)	\
    ( (This)->lpVtbl -> GetInverse(This,inverse) ) 

#define IBMDSwitcherTransitionDVEParameters_SetInverse(This,inverse)	\
    ( (This)->lpVtbl -> SetInverse(This,inverse) ) 

#define IBMDSwitcherTransitionDVEParameters_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherTransitionDVEParameters_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTransitionDVEParameters_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTransitionStingerParametersCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherTransitionStingerParametersCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherTransitionStingerParametersCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTransitionStingerParametersCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9A8B3FB6-DD56-4DFF-AEB3-2C8A26585389")
    IBMDSwitcherTransitionStingerParametersCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherTransitionStingerParametersEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTransitionStingerParametersCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTransitionStingerParametersCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTransitionStingerParametersCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTransitionStingerParametersCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherTransitionStingerParametersCallback * This,
            /* [in] */ BMDSwitcherTransitionStingerParametersEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherTransitionStingerParametersCallbackVtbl;

    interface IBMDSwitcherTransitionStingerParametersCallback
    {
        CONST_VTBL struct IBMDSwitcherTransitionStingerParametersCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTransitionStingerParametersCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTransitionStingerParametersCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTransitionStingerParametersCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTransitionStingerParametersCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTransitionStingerParametersCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTransitionStingerParameters_INTERFACE_DEFINED__
#define __IBMDSwitcherTransitionStingerParameters_INTERFACE_DEFINED__

/* interface IBMDSwitcherTransitionStingerParameters */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTransitionStingerParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0F449A50-4083-49E8-BBF5-C3D95BFA1908")
    IBMDSwitcherTransitionStingerParameters : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSource( 
            /* [out] */ BMDSwitcherStingerTransitionSource *src) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSource( 
            /* [in] */ BMDSwitcherStingerTransitionSource src) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPreMultiplied( 
            /* [out] */ BOOL *preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPreMultiplied( 
            /* [in] */ BOOL preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClip( 
            /* [out] */ double *clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClip( 
            /* [in] */ double clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGain( 
            /* [out] */ double *gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGain( 
            /* [in] */ double gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInverse( 
            /* [out] */ BOOL *inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInverse( 
            /* [in] */ BOOL inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPreroll( 
            /* [out] */ unsigned long *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPreroll( 
            /* [in] */ unsigned long frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClipDuration( 
            /* [out] */ unsigned long *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClipDuration( 
            /* [in] */ unsigned long frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTriggerPoint( 
            /* [out] */ unsigned long *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTriggerPoint( 
            /* [in] */ unsigned long frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMixRate( 
            /* [out] */ unsigned long *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMixRate( 
            /* [in] */ unsigned long frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherTransitionStingerParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherTransitionStingerParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTransitionStingerParametersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTransitionStingerParameters * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTransitionStingerParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSource )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [out] */ BMDSwitcherStingerTransitionSource *src);
        
        HRESULT ( STDMETHODCALLTYPE *SetSource )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [in] */ BMDSwitcherStingerTransitionSource src);
        
        HRESULT ( STDMETHODCALLTYPE *GetPreMultiplied )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [out] */ BOOL *preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *SetPreMultiplied )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [in] */ BOOL preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *GetClip )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [out] */ double *clip);
        
        HRESULT ( STDMETHODCALLTYPE *SetClip )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [in] */ double clip);
        
        HRESULT ( STDMETHODCALLTYPE *GetGain )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [out] */ double *gain);
        
        HRESULT ( STDMETHODCALLTYPE *SetGain )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [in] */ double gain);
        
        HRESULT ( STDMETHODCALLTYPE *GetInverse )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [out] */ BOOL *inverse);
        
        HRESULT ( STDMETHODCALLTYPE *SetInverse )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [in] */ BOOL inverse);
        
        HRESULT ( STDMETHODCALLTYPE *GetPreroll )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [out] */ unsigned long *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetPreroll )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [in] */ unsigned long frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetClipDuration )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [out] */ unsigned long *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetClipDuration )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [in] */ unsigned long frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetTriggerPoint )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [out] */ unsigned long *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetTriggerPoint )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [in] */ unsigned long frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetMixRate )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [out] */ unsigned long *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetMixRate )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [in] */ unsigned long frames);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [in] */ IBMDSwitcherTransitionStingerParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [in] */ IBMDSwitcherTransitionStingerParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherTransitionStingerParametersVtbl;

    interface IBMDSwitcherTransitionStingerParameters
    {
        CONST_VTBL struct IBMDSwitcherTransitionStingerParametersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTransitionStingerParameters_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTransitionStingerParameters_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTransitionStingerParameters_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTransitionStingerParameters_GetSource(This,src)	\
    ( (This)->lpVtbl -> GetSource(This,src) ) 

#define IBMDSwitcherTransitionStingerParameters_SetSource(This,src)	\
    ( (This)->lpVtbl -> SetSource(This,src) ) 

#define IBMDSwitcherTransitionStingerParameters_GetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> GetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherTransitionStingerParameters_SetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> SetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherTransitionStingerParameters_GetClip(This,clip)	\
    ( (This)->lpVtbl -> GetClip(This,clip) ) 

#define IBMDSwitcherTransitionStingerParameters_SetClip(This,clip)	\
    ( (This)->lpVtbl -> SetClip(This,clip) ) 

#define IBMDSwitcherTransitionStingerParameters_GetGain(This,gain)	\
    ( (This)->lpVtbl -> GetGain(This,gain) ) 

#define IBMDSwitcherTransitionStingerParameters_SetGain(This,gain)	\
    ( (This)->lpVtbl -> SetGain(This,gain) ) 

#define IBMDSwitcherTransitionStingerParameters_GetInverse(This,inverse)	\
    ( (This)->lpVtbl -> GetInverse(This,inverse) ) 

#define IBMDSwitcherTransitionStingerParameters_SetInverse(This,inverse)	\
    ( (This)->lpVtbl -> SetInverse(This,inverse) ) 

#define IBMDSwitcherTransitionStingerParameters_GetPreroll(This,frames)	\
    ( (This)->lpVtbl -> GetPreroll(This,frames) ) 

#define IBMDSwitcherTransitionStingerParameters_SetPreroll(This,frames)	\
    ( (This)->lpVtbl -> SetPreroll(This,frames) ) 

#define IBMDSwitcherTransitionStingerParameters_GetClipDuration(This,frames)	\
    ( (This)->lpVtbl -> GetClipDuration(This,frames) ) 

#define IBMDSwitcherTransitionStingerParameters_SetClipDuration(This,frames)	\
    ( (This)->lpVtbl -> SetClipDuration(This,frames) ) 

#define IBMDSwitcherTransitionStingerParameters_GetTriggerPoint(This,frames)	\
    ( (This)->lpVtbl -> GetTriggerPoint(This,frames) ) 

#define IBMDSwitcherTransitionStingerParameters_SetTriggerPoint(This,frames)	\
    ( (This)->lpVtbl -> SetTriggerPoint(This,frames) ) 

#define IBMDSwitcherTransitionStingerParameters_GetMixRate(This,frames)	\
    ( (This)->lpVtbl -> GetMixRate(This,frames) ) 

#define IBMDSwitcherTransitionStingerParameters_SetMixRate(This,frames)	\
    ( (This)->lpVtbl -> SetMixRate(This,frames) ) 

#define IBMDSwitcherTransitionStingerParameters_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherTransitionStingerParameters_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTransitionStingerParameters_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTransitionParametersCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherTransitionParametersCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherTransitionParametersCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTransitionParametersCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DED1876A-38E3-418E-8044-F3C126C626E7")
    IBMDSwitcherTransitionParametersCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherTransitionParametersEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTransitionParametersCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTransitionParametersCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTransitionParametersCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTransitionParametersCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherTransitionParametersCallback * This,
            /* [in] */ BMDSwitcherTransitionParametersEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherTransitionParametersCallbackVtbl;

    interface IBMDSwitcherTransitionParametersCallback
    {
        CONST_VTBL struct IBMDSwitcherTransitionParametersCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTransitionParametersCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTransitionParametersCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTransitionParametersCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTransitionParametersCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTransitionParametersCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTransitionParameters_INTERFACE_DEFINED__
#define __IBMDSwitcherTransitionParameters_INTERFACE_DEFINED__

/* interface IBMDSwitcherTransitionParameters */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTransitionParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83755CE5-748B-4E49-A856-AC95B8CCD215")
    IBMDSwitcherTransitionParameters : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetTransitionStyle( 
            /* [out] */ BMDSwitcherTransitionStyle *style) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNextTransitionStyle( 
            /* [out] */ BMDSwitcherTransitionStyle *style) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetNextTransitionStyle( 
            /* [in] */ BMDSwitcherTransitionStyle style) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTransitionSelection( 
            /* [out] */ BMDSwitcherTransitionSelection *selection) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetNextTransitionSelection( 
            /* [in] */ BMDSwitcherTransitionSelection selection) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNextTransitionSelection( 
            /* [out] */ BMDSwitcherTransitionSelection *selection) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherTransitionParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherTransitionParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTransitionParametersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTransitionParameters * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTransitionParameters * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTransitionParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTransitionStyle )( 
            IBMDSwitcherTransitionParameters * This,
            /* [out] */ BMDSwitcherTransitionStyle *style);
        
        HRESULT ( STDMETHODCALLTYPE *GetNextTransitionStyle )( 
            IBMDSwitcherTransitionParameters * This,
            /* [out] */ BMDSwitcherTransitionStyle *style);
        
        HRESULT ( STDMETHODCALLTYPE *SetNextTransitionStyle )( 
            IBMDSwitcherTransitionParameters * This,
            /* [in] */ BMDSwitcherTransitionStyle style);
        
        HRESULT ( STDMETHODCALLTYPE *GetTransitionSelection )( 
            IBMDSwitcherTransitionParameters * This,
            /* [out] */ BMDSwitcherTransitionSelection *selection);
        
        HRESULT ( STDMETHODCALLTYPE *SetNextTransitionSelection )( 
            IBMDSwitcherTransitionParameters * This,
            /* [in] */ BMDSwitcherTransitionSelection selection);
        
        HRESULT ( STDMETHODCALLTYPE *GetNextTransitionSelection )( 
            IBMDSwitcherTransitionParameters * This,
            /* [out] */ BMDSwitcherTransitionSelection *selection);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherTransitionParameters * This,
            /* [in] */ IBMDSwitcherTransitionParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherTransitionParameters * This,
            /* [in] */ IBMDSwitcherTransitionParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherTransitionParametersVtbl;

    interface IBMDSwitcherTransitionParameters
    {
        CONST_VTBL struct IBMDSwitcherTransitionParametersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTransitionParameters_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTransitionParameters_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTransitionParameters_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTransitionParameters_GetTransitionStyle(This,style)	\
    ( (This)->lpVtbl -> GetTransitionStyle(This,style) ) 

#define IBMDSwitcherTransitionParameters_GetNextTransitionStyle(This,style)	\
    ( (This)->lpVtbl -> GetNextTransitionStyle(This,style) ) 

#define IBMDSwitcherTransitionParameters_SetNextTransitionStyle(This,style)	\
    ( (This)->lpVtbl -> SetNextTransitionStyle(This,style) ) 

#define IBMDSwitcherTransitionParameters_GetTransitionSelection(This,selection)	\
    ( (This)->lpVtbl -> GetTransitionSelection(This,selection) ) 

#define IBMDSwitcherTransitionParameters_SetNextTransitionSelection(This,selection)	\
    ( (This)->lpVtbl -> SetNextTransitionSelection(This,selection) ) 

#define IBMDSwitcherTransitionParameters_GetNextTransitionSelection(This,selection)	\
    ( (This)->lpVtbl -> GetNextTransitionSelection(This,selection) ) 

#define IBMDSwitcherTransitionParameters_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherTransitionParameters_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTransitionParameters_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMixEffectBlockCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherMixEffectBlockCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherMixEffectBlockCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMixEffectBlockCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("96010829-2029-4DA3-A34B-70368605ABAA")
    IBMDSwitcherMixEffectBlockCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE PropertyChanged( 
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMixEffectBlockCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMixEffectBlockCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMixEffectBlockCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMixEffectBlockCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *PropertyChanged )( 
            IBMDSwitcherMixEffectBlockCallback * This,
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId);
        
        END_INTERFACE
    } IBMDSwitcherMixEffectBlockCallbackVtbl;

    interface IBMDSwitcherMixEffectBlockCallback
    {
        CONST_VTBL struct IBMDSwitcherMixEffectBlockCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMixEffectBlockCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMixEffectBlockCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMixEffectBlockCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMixEffectBlockCallback_PropertyChanged(This,propertyId)	\
    ( (This)->lpVtbl -> PropertyChanged(This,propertyId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMixEffectBlockCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMixEffectBlock_INTERFACE_DEFINED__
#define __IBMDSwitcherMixEffectBlock_INTERFACE_DEFINED__

/* interface IBMDSwitcherMixEffectBlock */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMixEffectBlock;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("11974D55-45E0-49D8-AE06-EEF4D5F81DF6")
    IBMDSwitcherMixEffectBlock : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateIterator( 
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherMixEffectBlockCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherMixEffectBlockCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFlag( 
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [in] */ BOOL value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlag( 
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [out] */ BOOL *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInt( 
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [in] */ LONGLONG value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInt( 
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [out] */ LONGLONG *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFloat( 
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [in] */ double value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFloat( 
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [out] */ double *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetString( 
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [in] */ BSTR value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetString( 
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [out] */ BSTR *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PerformAutoTransition( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PerformCut( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PerformFadeToBlack( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMixEffectBlockVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMixEffectBlock * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMixEffectBlock * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMixEffectBlock * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateIterator )( 
            IBMDSwitcherMixEffectBlock * This,
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherMixEffectBlock * This,
            /* [in] */ IBMDSwitcherMixEffectBlockCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherMixEffectBlock * This,
            /* [in] */ IBMDSwitcherMixEffectBlockCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *SetFlag )( 
            IBMDSwitcherMixEffectBlock * This,
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [in] */ BOOL value);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlag )( 
            IBMDSwitcherMixEffectBlock * This,
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [out] */ BOOL *value);
        
        HRESULT ( STDMETHODCALLTYPE *SetInt )( 
            IBMDSwitcherMixEffectBlock * This,
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [in] */ LONGLONG value);
        
        HRESULT ( STDMETHODCALLTYPE *GetInt )( 
            IBMDSwitcherMixEffectBlock * This,
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [out] */ LONGLONG *value);
        
        HRESULT ( STDMETHODCALLTYPE *SetFloat )( 
            IBMDSwitcherMixEffectBlock * This,
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [in] */ double value);
        
        HRESULT ( STDMETHODCALLTYPE *GetFloat )( 
            IBMDSwitcherMixEffectBlock * This,
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [out] */ double *value);
        
        HRESULT ( STDMETHODCALLTYPE *SetString )( 
            IBMDSwitcherMixEffectBlock * This,
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [in] */ BSTR value);
        
        HRESULT ( STDMETHODCALLTYPE *GetString )( 
            IBMDSwitcherMixEffectBlock * This,
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [out] */ BSTR *value);
        
        HRESULT ( STDMETHODCALLTYPE *PerformAutoTransition )( 
            IBMDSwitcherMixEffectBlock * This);
        
        HRESULT ( STDMETHODCALLTYPE *PerformCut )( 
            IBMDSwitcherMixEffectBlock * This);
        
        HRESULT ( STDMETHODCALLTYPE *PerformFadeToBlack )( 
            IBMDSwitcherMixEffectBlock * This);
        
        END_INTERFACE
    } IBMDSwitcherMixEffectBlockVtbl;

    interface IBMDSwitcherMixEffectBlock
    {
        CONST_VTBL struct IBMDSwitcherMixEffectBlockVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMixEffectBlock_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMixEffectBlock_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMixEffectBlock_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMixEffectBlock_CreateIterator(This,iid,ppv)	\
    ( (This)->lpVtbl -> CreateIterator(This,iid,ppv) ) 

#define IBMDSwitcherMixEffectBlock_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherMixEffectBlock_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#define IBMDSwitcherMixEffectBlock_SetFlag(This,propertyId,value)	\
    ( (This)->lpVtbl -> SetFlag(This,propertyId,value) ) 

#define IBMDSwitcherMixEffectBlock_GetFlag(This,propertyId,value)	\
    ( (This)->lpVtbl -> GetFlag(This,propertyId,value) ) 

#define IBMDSwitcherMixEffectBlock_SetInt(This,propertyId,value)	\
    ( (This)->lpVtbl -> SetInt(This,propertyId,value) ) 

#define IBMDSwitcherMixEffectBlock_GetInt(This,propertyId,value)	\
    ( (This)->lpVtbl -> GetInt(This,propertyId,value) ) 

#define IBMDSwitcherMixEffectBlock_SetFloat(This,propertyId,value)	\
    ( (This)->lpVtbl -> SetFloat(This,propertyId,value) ) 

#define IBMDSwitcherMixEffectBlock_GetFloat(This,propertyId,value)	\
    ( (This)->lpVtbl -> GetFloat(This,propertyId,value) ) 

#define IBMDSwitcherMixEffectBlock_SetString(This,propertyId,value)	\
    ( (This)->lpVtbl -> SetString(This,propertyId,value) ) 

#define IBMDSwitcherMixEffectBlock_GetString(This,propertyId,value)	\
    ( (This)->lpVtbl -> GetString(This,propertyId,value) ) 

#define IBMDSwitcherMixEffectBlock_PerformAutoTransition(This)	\
    ( (This)->lpVtbl -> PerformAutoTransition(This) ) 

#define IBMDSwitcherMixEffectBlock_PerformCut(This)	\
    ( (This)->lpVtbl -> PerformCut(This) ) 

#define IBMDSwitcherMixEffectBlock_PerformFadeToBlack(This)	\
    ( (This)->lpVtbl -> PerformFadeToBlack(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMixEffectBlock_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherInputCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherInputCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherInputCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherInputCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8E583D89-0BAF-4447-AB8C-6A12CD8724CB")
    IBMDSwitcherInputCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE PropertyChanged( 
            /* [in] */ BMDSwitcherInputPropertyId propertyId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherInputCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherInputCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherInputCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherInputCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *PropertyChanged )( 
            IBMDSwitcherInputCallback * This,
            /* [in] */ BMDSwitcherInputPropertyId propertyId);
        
        END_INTERFACE
    } IBMDSwitcherInputCallbackVtbl;

    interface IBMDSwitcherInputCallback
    {
        CONST_VTBL struct IBMDSwitcherInputCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherInputCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherInputCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherInputCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherInputCallback_PropertyChanged(This,propertyId)	\
    ( (This)->lpVtbl -> PropertyChanged(This,propertyId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherInputCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherInput_INTERFACE_DEFINED__
#define __IBMDSwitcherInput_INTERFACE_DEFINED__

/* interface IBMDSwitcherInput */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherInput;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("66F3D466-8C8C-4DB4-B313-8DD2EC665DBB")
    IBMDSwitcherInput : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherInputCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherInputCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFlag( 
            /* [in] */ BMDSwitcherInputPropertyId propertyId,
            /* [in] */ BOOL value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlag( 
            /* [in] */ BMDSwitcherInputPropertyId propertyId,
            /* [out] */ BOOL *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInt( 
            /* [in] */ BMDSwitcherInputPropertyId propertyId,
            /* [in] */ LONGLONG value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInt( 
            /* [in] */ BMDSwitcherInputPropertyId propertyId,
            /* [out] */ LONGLONG *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFloat( 
            /* [in] */ BMDSwitcherInputPropertyId propertyId,
            /* [in] */ double value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFloat( 
            /* [in] */ BMDSwitcherInputPropertyId propertyId,
            /* [out] */ double *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetString( 
            /* [in] */ BMDSwitcherInputPropertyId propertyId,
            /* [in] */ BSTR value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetString( 
            /* [in] */ BMDSwitcherInputPropertyId propertyId,
            /* [out] */ BSTR *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputId( 
            /* [out] */ BMDSwitcherInputId *inputId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherInputVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherInput * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherInput * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherInput * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherInput * This,
            /* [in] */ IBMDSwitcherInputCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherInput * This,
            /* [in] */ IBMDSwitcherInputCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *SetFlag )( 
            IBMDSwitcherInput * This,
            /* [in] */ BMDSwitcherInputPropertyId propertyId,
            /* [in] */ BOOL value);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlag )( 
            IBMDSwitcherInput * This,
            /* [in] */ BMDSwitcherInputPropertyId propertyId,
            /* [out] */ BOOL *value);
        
        HRESULT ( STDMETHODCALLTYPE *SetInt )( 
            IBMDSwitcherInput * This,
            /* [in] */ BMDSwitcherInputPropertyId propertyId,
            /* [in] */ LONGLONG value);
        
        HRESULT ( STDMETHODCALLTYPE *GetInt )( 
            IBMDSwitcherInput * This,
            /* [in] */ BMDSwitcherInputPropertyId propertyId,
            /* [out] */ LONGLONG *value);
        
        HRESULT ( STDMETHODCALLTYPE *SetFloat )( 
            IBMDSwitcherInput * This,
            /* [in] */ BMDSwitcherInputPropertyId propertyId,
            /* [in] */ double value);
        
        HRESULT ( STDMETHODCALLTYPE *GetFloat )( 
            IBMDSwitcherInput * This,
            /* [in] */ BMDSwitcherInputPropertyId propertyId,
            /* [out] */ double *value);
        
        HRESULT ( STDMETHODCALLTYPE *SetString )( 
            IBMDSwitcherInput * This,
            /* [in] */ BMDSwitcherInputPropertyId propertyId,
            /* [in] */ BSTR value);
        
        HRESULT ( STDMETHODCALLTYPE *GetString )( 
            IBMDSwitcherInput * This,
            /* [in] */ BMDSwitcherInputPropertyId propertyId,
            /* [out] */ BSTR *value);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputId )( 
            IBMDSwitcherInput * This,
            /* [out] */ BMDSwitcherInputId *inputId);
        
        END_INTERFACE
    } IBMDSwitcherInputVtbl;

    interface IBMDSwitcherInput
    {
        CONST_VTBL struct IBMDSwitcherInputVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherInput_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherInput_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherInput_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherInput_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherInput_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#define IBMDSwitcherInput_SetFlag(This,propertyId,value)	\
    ( (This)->lpVtbl -> SetFlag(This,propertyId,value) ) 

#define IBMDSwitcherInput_GetFlag(This,propertyId,value)	\
    ( (This)->lpVtbl -> GetFlag(This,propertyId,value) ) 

#define IBMDSwitcherInput_SetInt(This,propertyId,value)	\
    ( (This)->lpVtbl -> SetInt(This,propertyId,value) ) 

#define IBMDSwitcherInput_GetInt(This,propertyId,value)	\
    ( (This)->lpVtbl -> GetInt(This,propertyId,value) ) 

#define IBMDSwitcherInput_SetFloat(This,propertyId,value)	\
    ( (This)->lpVtbl -> SetFloat(This,propertyId,value) ) 

#define IBMDSwitcherInput_GetFloat(This,propertyId,value)	\
    ( (This)->lpVtbl -> GetFloat(This,propertyId,value) ) 

#define IBMDSwitcherInput_SetString(This,propertyId,value)	\
    ( (This)->lpVtbl -> SetString(This,propertyId,value) ) 

#define IBMDSwitcherInput_GetString(This,propertyId,value)	\
    ( (This)->lpVtbl -> GetString(This,propertyId,value) ) 

#define IBMDSwitcherInput_GetInputId(This,inputId)	\
    ( (This)->lpVtbl -> GetInputId(This,inputId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherInput_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherInputColorCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherInputColorCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherInputColorCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherInputColorCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BAE02C95-9394-439C-BE18-CEF0C0784EC3")
    IBMDSwitcherInputColorCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherInputColorEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherInputColorCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherInputColorCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherInputColorCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherInputColorCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherInputColorCallback * This,
            /* [in] */ BMDSwitcherInputColorEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherInputColorCallbackVtbl;

    interface IBMDSwitcherInputColorCallback
    {
        CONST_VTBL struct IBMDSwitcherInputColorCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherInputColorCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherInputColorCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherInputColorCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherInputColorCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherInputColorCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherInputColor_INTERFACE_DEFINED__
#define __IBMDSwitcherInputColor_INTERFACE_DEFINED__

/* interface IBMDSwitcherInputColor */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherInputColor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A0AF18D9-CBE6-49F3-B548-A44E856054D1")
    IBMDSwitcherInputColor : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetHue( 
            /* [out] */ double *hue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetHue( 
            /* [in] */ double hue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSaturation( 
            /* [out] */ double *sat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSaturation( 
            /* [in] */ double sat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLuma( 
            /* [out] */ double *luma) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLuma( 
            /* [in] */ double luma) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherInputColorCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherInputColorCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherInputColorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherInputColor * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherInputColor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherInputColor * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetHue )( 
            IBMDSwitcherInputColor * This,
            /* [out] */ double *hue);
        
        HRESULT ( STDMETHODCALLTYPE *SetHue )( 
            IBMDSwitcherInputColor * This,
            /* [in] */ double hue);
        
        HRESULT ( STDMETHODCALLTYPE *GetSaturation )( 
            IBMDSwitcherInputColor * This,
            /* [out] */ double *sat);
        
        HRESULT ( STDMETHODCALLTYPE *SetSaturation )( 
            IBMDSwitcherInputColor * This,
            /* [in] */ double sat);
        
        HRESULT ( STDMETHODCALLTYPE *GetLuma )( 
            IBMDSwitcherInputColor * This,
            /* [out] */ double *luma);
        
        HRESULT ( STDMETHODCALLTYPE *SetLuma )( 
            IBMDSwitcherInputColor * This,
            /* [in] */ double luma);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherInputColor * This,
            /* [in] */ IBMDSwitcherInputColorCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherInputColor * This,
            /* [in] */ IBMDSwitcherInputColorCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherInputColorVtbl;

    interface IBMDSwitcherInputColor
    {
        CONST_VTBL struct IBMDSwitcherInputColorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherInputColor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherInputColor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherInputColor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherInputColor_GetHue(This,hue)	\
    ( (This)->lpVtbl -> GetHue(This,hue) ) 

#define IBMDSwitcherInputColor_SetHue(This,hue)	\
    ( (This)->lpVtbl -> SetHue(This,hue) ) 

#define IBMDSwitcherInputColor_GetSaturation(This,sat)	\
    ( (This)->lpVtbl -> GetSaturation(This,sat) ) 

#define IBMDSwitcherInputColor_SetSaturation(This,sat)	\
    ( (This)->lpVtbl -> SetSaturation(This,sat) ) 

#define IBMDSwitcherInputColor_GetLuma(This,luma)	\
    ( (This)->lpVtbl -> GetLuma(This,luma) ) 

#define IBMDSwitcherInputColor_SetLuma(This,luma)	\
    ( (This)->lpVtbl -> SetLuma(This,luma) ) 

#define IBMDSwitcherInputColor_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherInputColor_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherInputColor_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherInputAuxCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherInputAuxCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherInputAuxCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherInputAuxCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5AD1FF91-143F-49E9-9964-1B9FAF9A712A")
    IBMDSwitcherInputAuxCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherInputAuxEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherInputAuxCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherInputAuxCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherInputAuxCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherInputAuxCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherInputAuxCallback * This,
            /* [in] */ BMDSwitcherInputAuxEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherInputAuxCallbackVtbl;

    interface IBMDSwitcherInputAuxCallback
    {
        CONST_VTBL struct IBMDSwitcherInputAuxCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherInputAuxCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherInputAuxCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherInputAuxCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherInputAuxCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherInputAuxCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherInputAux_INTERFACE_DEFINED__
#define __IBMDSwitcherInputAux_INTERFACE_DEFINED__

/* interface IBMDSwitcherInputAux */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherInputAux;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("52C745A8-89B1-449A-A149-C43F5108DAE7")
    IBMDSwitcherInputAux : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetInputSource( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputSource( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputAvailabilityMask( 
            /* [out] */ BMDSwitcherInputAvailability *availabilityMask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherInputAuxCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherInputAuxCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherInputAuxVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherInputAux * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherInputAux * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherInputAux * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputSource )( 
            IBMDSwitcherInputAux * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputSource )( 
            IBMDSwitcherInputAux * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputAvailabilityMask )( 
            IBMDSwitcherInputAux * This,
            /* [out] */ BMDSwitcherInputAvailability *availabilityMask);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherInputAux * This,
            /* [in] */ IBMDSwitcherInputAuxCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherInputAux * This,
            /* [in] */ IBMDSwitcherInputAuxCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherInputAuxVtbl;

    interface IBMDSwitcherInputAux
    {
        CONST_VTBL struct IBMDSwitcherInputAuxVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherInputAux_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherInputAux_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherInputAux_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherInputAux_GetInputSource(This,input)	\
    ( (This)->lpVtbl -> GetInputSource(This,input) ) 

#define IBMDSwitcherInputAux_SetInputSource(This,input)	\
    ( (This)->lpVtbl -> SetInputSource(This,input) ) 

#define IBMDSwitcherInputAux_GetInputAvailabilityMask(This,availabilityMask)	\
    ( (This)->lpVtbl -> GetInputAvailabilityMask(This,availabilityMask) ) 

#define IBMDSwitcherInputAux_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherInputAux_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherInputAux_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherSuperSourceBoxCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherSuperSourceBoxCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherSuperSourceBoxCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherSuperSourceBoxCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7F667AF6-9B4E-4CDE-9F2F-2DF4505BF877")
    IBMDSwitcherSuperSourceBoxCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherSuperSourceBoxEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherSuperSourceBoxCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherSuperSourceBoxCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherSuperSourceBoxCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherSuperSourceBoxCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherSuperSourceBoxCallback * This,
            /* [in] */ BMDSwitcherSuperSourceBoxEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherSuperSourceBoxCallbackVtbl;

    interface IBMDSwitcherSuperSourceBoxCallback
    {
        CONST_VTBL struct IBMDSwitcherSuperSourceBoxCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherSuperSourceBoxCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherSuperSourceBoxCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherSuperSourceBoxCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherSuperSourceBoxCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherSuperSourceBoxCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherSuperSourceBox_INTERFACE_DEFINED__
#define __IBMDSwitcherSuperSourceBox_INTERFACE_DEFINED__

/* interface IBMDSwitcherSuperSourceBox */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherSuperSourceBox;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("137028E5-87B2-407E-846F-283B18C82CE9")
    IBMDSwitcherSuperSourceBox : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetEnabled( 
            /* [out] */ BOOL *enabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetEnabled( 
            /* [in] */ BOOL enabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputSource( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputSource( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPositionX( 
            /* [out] */ double *positionX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPositionX( 
            /* [in] */ double positionX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPositionY( 
            /* [out] */ double *positionY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPositionY( 
            /* [in] */ double positionY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSize( 
            /* [out] */ double *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSize( 
            /* [in] */ double size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCropped( 
            /* [out] */ BOOL *cropped) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCropped( 
            /* [in] */ BOOL cropped) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCropTop( 
            /* [out] */ double *top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCropTop( 
            /* [in] */ double top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCropBottom( 
            /* [out] */ double *bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCropBottom( 
            /* [in] */ double bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCropLeft( 
            /* [out] */ double *left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCropLeft( 
            /* [in] */ double left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCropRight( 
            /* [out] */ double *right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCropRight( 
            /* [in] */ double right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetCrop( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputAvailabilityMask( 
            /* [in] */ BMDSwitcherInputAvailability *mask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherSuperSourceBoxCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherSuperSourceBoxCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherSuperSourceBoxVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherSuperSourceBox * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherSuperSourceBox * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnabled )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [out] */ BOOL *enabled);
        
        HRESULT ( STDMETHODCALLTYPE *SetEnabled )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [in] */ BOOL enabled);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputSource )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputSource )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetPositionX )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [out] */ double *positionX);
        
        HRESULT ( STDMETHODCALLTYPE *SetPositionX )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [in] */ double positionX);
        
        HRESULT ( STDMETHODCALLTYPE *GetPositionY )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [out] */ double *positionY);
        
        HRESULT ( STDMETHODCALLTYPE *SetPositionY )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [in] */ double positionY);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [out] */ double *size);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [in] */ double size);
        
        HRESULT ( STDMETHODCALLTYPE *GetCropped )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [out] */ BOOL *cropped);
        
        HRESULT ( STDMETHODCALLTYPE *SetCropped )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [in] */ BOOL cropped);
        
        HRESULT ( STDMETHODCALLTYPE *GetCropTop )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [out] */ double *top);
        
        HRESULT ( STDMETHODCALLTYPE *SetCropTop )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [in] */ double top);
        
        HRESULT ( STDMETHODCALLTYPE *GetCropBottom )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [out] */ double *bottom);
        
        HRESULT ( STDMETHODCALLTYPE *SetCropBottom )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [in] */ double bottom);
        
        HRESULT ( STDMETHODCALLTYPE *GetCropLeft )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [out] */ double *left);
        
        HRESULT ( STDMETHODCALLTYPE *SetCropLeft )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [in] */ double left);
        
        HRESULT ( STDMETHODCALLTYPE *GetCropRight )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [out] */ double *right);
        
        HRESULT ( STDMETHODCALLTYPE *SetCropRight )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [in] */ double right);
        
        HRESULT ( STDMETHODCALLTYPE *ResetCrop )( 
            IBMDSwitcherSuperSourceBox * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputAvailabilityMask )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [in] */ BMDSwitcherInputAvailability *mask);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [in] */ IBMDSwitcherSuperSourceBoxCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [in] */ IBMDSwitcherSuperSourceBoxCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherSuperSourceBoxVtbl;

    interface IBMDSwitcherSuperSourceBox
    {
        CONST_VTBL struct IBMDSwitcherSuperSourceBoxVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherSuperSourceBox_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherSuperSourceBox_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherSuperSourceBox_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherSuperSourceBox_GetEnabled(This,enabled)	\
    ( (This)->lpVtbl -> GetEnabled(This,enabled) ) 

#define IBMDSwitcherSuperSourceBox_SetEnabled(This,enabled)	\
    ( (This)->lpVtbl -> SetEnabled(This,enabled) ) 

#define IBMDSwitcherSuperSourceBox_GetInputSource(This,input)	\
    ( (This)->lpVtbl -> GetInputSource(This,input) ) 

#define IBMDSwitcherSuperSourceBox_SetInputSource(This,input)	\
    ( (This)->lpVtbl -> SetInputSource(This,input) ) 

#define IBMDSwitcherSuperSourceBox_GetPositionX(This,positionX)	\
    ( (This)->lpVtbl -> GetPositionX(This,positionX) ) 

#define IBMDSwitcherSuperSourceBox_SetPositionX(This,positionX)	\
    ( (This)->lpVtbl -> SetPositionX(This,positionX) ) 

#define IBMDSwitcherSuperSourceBox_GetPositionY(This,positionY)	\
    ( (This)->lpVtbl -> GetPositionY(This,positionY) ) 

#define IBMDSwitcherSuperSourceBox_SetPositionY(This,positionY)	\
    ( (This)->lpVtbl -> SetPositionY(This,positionY) ) 

#define IBMDSwitcherSuperSourceBox_GetSize(This,size)	\
    ( (This)->lpVtbl -> GetSize(This,size) ) 

#define IBMDSwitcherSuperSourceBox_SetSize(This,size)	\
    ( (This)->lpVtbl -> SetSize(This,size) ) 

#define IBMDSwitcherSuperSourceBox_GetCropped(This,cropped)	\
    ( (This)->lpVtbl -> GetCropped(This,cropped) ) 

#define IBMDSwitcherSuperSourceBox_SetCropped(This,cropped)	\
    ( (This)->lpVtbl -> SetCropped(This,cropped) ) 

#define IBMDSwitcherSuperSourceBox_GetCropTop(This,top)	\
    ( (This)->lpVtbl -> GetCropTop(This,top) ) 

#define IBMDSwitcherSuperSourceBox_SetCropTop(This,top)	\
    ( (This)->lpVtbl -> SetCropTop(This,top) ) 

#define IBMDSwitcherSuperSourceBox_GetCropBottom(This,bottom)	\
    ( (This)->lpVtbl -> GetCropBottom(This,bottom) ) 

#define IBMDSwitcherSuperSourceBox_SetCropBottom(This,bottom)	\
    ( (This)->lpVtbl -> SetCropBottom(This,bottom) ) 

#define IBMDSwitcherSuperSourceBox_GetCropLeft(This,left)	\
    ( (This)->lpVtbl -> GetCropLeft(This,left) ) 

#define IBMDSwitcherSuperSourceBox_SetCropLeft(This,left)	\
    ( (This)->lpVtbl -> SetCropLeft(This,left) ) 

#define IBMDSwitcherSuperSourceBox_GetCropRight(This,right)	\
    ( (This)->lpVtbl -> GetCropRight(This,right) ) 

#define IBMDSwitcherSuperSourceBox_SetCropRight(This,right)	\
    ( (This)->lpVtbl -> SetCropRight(This,right) ) 

#define IBMDSwitcherSuperSourceBox_ResetCrop(This)	\
    ( (This)->lpVtbl -> ResetCrop(This) ) 

#define IBMDSwitcherSuperSourceBox_GetInputAvailabilityMask(This,mask)	\
    ( (This)->lpVtbl -> GetInputAvailabilityMask(This,mask) ) 

#define IBMDSwitcherSuperSourceBox_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherSuperSourceBox_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherSuperSourceBox_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherInputSuperSourceCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherInputSuperSourceCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherInputSuperSourceCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherInputSuperSourceCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6B02A84C-0085-4593-973A-5E458079BD16")
    IBMDSwitcherInputSuperSourceCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherInputSuperSourceEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherInputSuperSourceCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherInputSuperSourceCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherInputSuperSourceCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherInputSuperSourceCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherInputSuperSourceCallback * This,
            /* [in] */ BMDSwitcherInputSuperSourceEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherInputSuperSourceCallbackVtbl;

    interface IBMDSwitcherInputSuperSourceCallback
    {
        CONST_VTBL struct IBMDSwitcherInputSuperSourceCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherInputSuperSourceCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherInputSuperSourceCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherInputSuperSourceCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherInputSuperSourceCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherInputSuperSourceCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherInputSuperSource_INTERFACE_DEFINED__
#define __IBMDSwitcherInputSuperSource_INTERFACE_DEFINED__

/* interface IBMDSwitcherInputSuperSource */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherInputSuperSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("327DBE95-F003-409E-8FEB-D9C624C439BC")
    IBMDSwitcherInputSuperSource : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetInputCut( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputCut( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputFill( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputFill( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetArtOption( 
            /* [out] */ BMDSwitcherSuperSourceArtOption *artOption) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetArtOption( 
            /* [in] */ BMDSwitcherSuperSourceArtOption artOption) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPreMultiplied( 
            /* [out] */ BOOL *preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPreMultiplied( 
            /* [in] */ BOOL preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClip( 
            /* [out] */ double *clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClip( 
            /* [in] */ double clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGain( 
            /* [out] */ double *gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGain( 
            /* [in] */ double gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInverse( 
            /* [in] */ BOOL *inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInverse( 
            /* [in] */ BOOL inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputAvailabilityMask( 
            /* [in] */ BMDSwitcherInputAvailability *mask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderEnabled( 
            /* [out] */ BOOL *enabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderEnabled( 
            /* [in] */ BOOL enabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderBevel( 
            /* [out] */ BMDSwitcherBorderBevelOption *bevelOption) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderBevel( 
            /* [in] */ BMDSwitcherBorderBevelOption bevelOption) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderWidthOut( 
            /* [out] */ double *widthOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderWidthOut( 
            /* [in] */ double widthOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderWidthIn( 
            /* [out] */ double *widthIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderWidthIn( 
            /* [in] */ double widthIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderSoftnessOut( 
            /* [out] */ double *softnessOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderSoftnessOut( 
            /* [in] */ double softnessOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderSoftnessIn( 
            /* [out] */ double *softnessIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderSoftnessIn( 
            /* [in] */ double softnessIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderBevelSoftness( 
            /* [out] */ double *bevelSoftness) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderBevelSoftness( 
            /* [in] */ double bevelSoftness) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderBevelPosition( 
            /* [out] */ double *bevelPosition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderBevelPosition( 
            /* [in] */ double bevelPosition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderHue( 
            /* [out] */ double *hue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderHue( 
            /* [in] */ double hue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderSaturation( 
            /* [out] */ double *sat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderSaturation( 
            /* [in] */ double sat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderLuma( 
            /* [out] */ double *luma) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderLuma( 
            /* [in] */ double luma) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderLightSourceDirection( 
            /* [out] */ double *degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderLightSourceDirection( 
            /* [in] */ double degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderLightSourceAltitude( 
            /* [out] */ double *altitude) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderLightSourceAltitude( 
            /* [in] */ double altitude) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherInputSuperSourceCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherInputSuperSourceCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateIterator( 
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherInputSuperSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherInputSuperSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherInputSuperSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputCut )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputCut )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputFill )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputFill )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetArtOption )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ BMDSwitcherSuperSourceArtOption *artOption);
        
        HRESULT ( STDMETHODCALLTYPE *SetArtOption )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ BMDSwitcherSuperSourceArtOption artOption);
        
        HRESULT ( STDMETHODCALLTYPE *GetPreMultiplied )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ BOOL *preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *SetPreMultiplied )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ BOOL preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *GetClip )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ double *clip);
        
        HRESULT ( STDMETHODCALLTYPE *SetClip )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ double clip);
        
        HRESULT ( STDMETHODCALLTYPE *GetGain )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ double *gain);
        
        HRESULT ( STDMETHODCALLTYPE *SetGain )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ double gain);
        
        HRESULT ( STDMETHODCALLTYPE *GetInverse )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ BOOL *inverse);
        
        HRESULT ( STDMETHODCALLTYPE *SetInverse )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ BOOL inverse);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputAvailabilityMask )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ BMDSwitcherInputAvailability *mask);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderEnabled )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ BOOL *enabled);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderEnabled )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ BOOL enabled);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderBevel )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ BMDSwitcherBorderBevelOption *bevelOption);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderBevel )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ BMDSwitcherBorderBevelOption bevelOption);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderWidthOut )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ double *widthOut);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderWidthOut )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ double widthOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderWidthIn )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ double *widthIn);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderWidthIn )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ double widthIn);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderSoftnessOut )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ double *softnessOut);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderSoftnessOut )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ double softnessOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderSoftnessIn )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ double *softnessIn);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderSoftnessIn )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ double softnessIn);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderBevelSoftness )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ double *bevelSoftness);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderBevelSoftness )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ double bevelSoftness);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderBevelPosition )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ double *bevelPosition);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderBevelPosition )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ double bevelPosition);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderHue )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ double *hue);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderHue )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ double hue);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderSaturation )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ double *sat);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderSaturation )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ double sat);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderLuma )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ double *luma);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderLuma )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ double luma);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderLightSourceDirection )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ double *degrees);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderLightSourceDirection )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ double degrees);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderLightSourceAltitude )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ double *altitude);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderLightSourceAltitude )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ double altitude);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ IBMDSwitcherInputSuperSourceCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ IBMDSwitcherInputSuperSourceCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *CreateIterator )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv);
        
        END_INTERFACE
    } IBMDSwitcherInputSuperSourceVtbl;

    interface IBMDSwitcherInputSuperSource
    {
        CONST_VTBL struct IBMDSwitcherInputSuperSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherInputSuperSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherInputSuperSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherInputSuperSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherInputSuperSource_GetInputCut(This,input)	\
    ( (This)->lpVtbl -> GetInputCut(This,input) ) 

#define IBMDSwitcherInputSuperSource_SetInputCut(This,input)	\
    ( (This)->lpVtbl -> SetInputCut(This,input) ) 

#define IBMDSwitcherInputSuperSource_GetInputFill(This,input)	\
    ( (This)->lpVtbl -> GetInputFill(This,input) ) 

#define IBMDSwitcherInputSuperSource_SetInputFill(This,input)	\
    ( (This)->lpVtbl -> SetInputFill(This,input) ) 

#define IBMDSwitcherInputSuperSource_GetArtOption(This,artOption)	\
    ( (This)->lpVtbl -> GetArtOption(This,artOption) ) 

#define IBMDSwitcherInputSuperSource_SetArtOption(This,artOption)	\
    ( (This)->lpVtbl -> SetArtOption(This,artOption) ) 

#define IBMDSwitcherInputSuperSource_GetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> GetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherInputSuperSource_SetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> SetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherInputSuperSource_GetClip(This,clip)	\
    ( (This)->lpVtbl -> GetClip(This,clip) ) 

#define IBMDSwitcherInputSuperSource_SetClip(This,clip)	\
    ( (This)->lpVtbl -> SetClip(This,clip) ) 

#define IBMDSwitcherInputSuperSource_GetGain(This,gain)	\
    ( (This)->lpVtbl -> GetGain(This,gain) ) 

#define IBMDSwitcherInputSuperSource_SetGain(This,gain)	\
    ( (This)->lpVtbl -> SetGain(This,gain) ) 

#define IBMDSwitcherInputSuperSource_GetInverse(This,inverse)	\
    ( (This)->lpVtbl -> GetInverse(This,inverse) ) 

#define IBMDSwitcherInputSuperSource_SetInverse(This,inverse)	\
    ( (This)->lpVtbl -> SetInverse(This,inverse) ) 

#define IBMDSwitcherInputSuperSource_GetInputAvailabilityMask(This,mask)	\
    ( (This)->lpVtbl -> GetInputAvailabilityMask(This,mask) ) 

#define IBMDSwitcherInputSuperSource_GetBorderEnabled(This,enabled)	\
    ( (This)->lpVtbl -> GetBorderEnabled(This,enabled) ) 

#define IBMDSwitcherInputSuperSource_SetBorderEnabled(This,enabled)	\
    ( (This)->lpVtbl -> SetBorderEnabled(This,enabled) ) 

#define IBMDSwitcherInputSuperSource_GetBorderBevel(This,bevelOption)	\
    ( (This)->lpVtbl -> GetBorderBevel(This,bevelOption) ) 

#define IBMDSwitcherInputSuperSource_SetBorderBevel(This,bevelOption)	\
    ( (This)->lpVtbl -> SetBorderBevel(This,bevelOption) ) 

#define IBMDSwitcherInputSuperSource_GetBorderWidthOut(This,widthOut)	\
    ( (This)->lpVtbl -> GetBorderWidthOut(This,widthOut) ) 

#define IBMDSwitcherInputSuperSource_SetBorderWidthOut(This,widthOut)	\
    ( (This)->lpVtbl -> SetBorderWidthOut(This,widthOut) ) 

#define IBMDSwitcherInputSuperSource_GetBorderWidthIn(This,widthIn)	\
    ( (This)->lpVtbl -> GetBorderWidthIn(This,widthIn) ) 

#define IBMDSwitcherInputSuperSource_SetBorderWidthIn(This,widthIn)	\
    ( (This)->lpVtbl -> SetBorderWidthIn(This,widthIn) ) 

#define IBMDSwitcherInputSuperSource_GetBorderSoftnessOut(This,softnessOut)	\
    ( (This)->lpVtbl -> GetBorderSoftnessOut(This,softnessOut) ) 

#define IBMDSwitcherInputSuperSource_SetBorderSoftnessOut(This,softnessOut)	\
    ( (This)->lpVtbl -> SetBorderSoftnessOut(This,softnessOut) ) 

#define IBMDSwitcherInputSuperSource_GetBorderSoftnessIn(This,softnessIn)	\
    ( (This)->lpVtbl -> GetBorderSoftnessIn(This,softnessIn) ) 

#define IBMDSwitcherInputSuperSource_SetBorderSoftnessIn(This,softnessIn)	\
    ( (This)->lpVtbl -> SetBorderSoftnessIn(This,softnessIn) ) 

#define IBMDSwitcherInputSuperSource_GetBorderBevelSoftness(This,bevelSoftness)	\
    ( (This)->lpVtbl -> GetBorderBevelSoftness(This,bevelSoftness) ) 

#define IBMDSwitcherInputSuperSource_SetBorderBevelSoftness(This,bevelSoftness)	\
    ( (This)->lpVtbl -> SetBorderBevelSoftness(This,bevelSoftness) ) 

#define IBMDSwitcherInputSuperSource_GetBorderBevelPosition(This,bevelPosition)	\
    ( (This)->lpVtbl -> GetBorderBevelPosition(This,bevelPosition) ) 

#define IBMDSwitcherInputSuperSource_SetBorderBevelPosition(This,bevelPosition)	\
    ( (This)->lpVtbl -> SetBorderBevelPosition(This,bevelPosition) ) 

#define IBMDSwitcherInputSuperSource_GetBorderHue(This,hue)	\
    ( (This)->lpVtbl -> GetBorderHue(This,hue) ) 

#define IBMDSwitcherInputSuperSource_SetBorderHue(This,hue)	\
    ( (This)->lpVtbl -> SetBorderHue(This,hue) ) 

#define IBMDSwitcherInputSuperSource_GetBorderSaturation(This,sat)	\
    ( (This)->lpVtbl -> GetBorderSaturation(This,sat) ) 

#define IBMDSwitcherInputSuperSource_SetBorderSaturation(This,sat)	\
    ( (This)->lpVtbl -> SetBorderSaturation(This,sat) ) 

#define IBMDSwitcherInputSuperSource_GetBorderLuma(This,luma)	\
    ( (This)->lpVtbl -> GetBorderLuma(This,luma) ) 

#define IBMDSwitcherInputSuperSource_SetBorderLuma(This,luma)	\
    ( (This)->lpVtbl -> SetBorderLuma(This,luma) ) 

#define IBMDSwitcherInputSuperSource_GetBorderLightSourceDirection(This,degrees)	\
    ( (This)->lpVtbl -> GetBorderLightSourceDirection(This,degrees) ) 

#define IBMDSwitcherInputSuperSource_SetBorderLightSourceDirection(This,degrees)	\
    ( (This)->lpVtbl -> SetBorderLightSourceDirection(This,degrees) ) 

#define IBMDSwitcherInputSuperSource_GetBorderLightSourceAltitude(This,altitude)	\
    ( (This)->lpVtbl -> GetBorderLightSourceAltitude(This,altitude) ) 

#define IBMDSwitcherInputSuperSource_SetBorderLightSourceAltitude(This,altitude)	\
    ( (This)->lpVtbl -> SetBorderLightSourceAltitude(This,altitude) ) 

#define IBMDSwitcherInputSuperSource_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherInputSuperSource_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#define IBMDSwitcherInputSuperSource_CreateIterator(This,iid,ppv)	\
    ( (This)->lpVtbl -> CreateIterator(This,iid,ppv) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherInputSuperSource_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMultiViewCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherMultiViewCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherMultiViewCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMultiViewCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("345CE414-0BF1-46F9-97AC-FB1A47499005")
    IBMDSwitcherMultiViewCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherMultiViewEventType eventType,
            /* [in] */ long window) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMultiViewCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMultiViewCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMultiViewCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMultiViewCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherMultiViewCallback * This,
            /* [in] */ BMDSwitcherMultiViewEventType eventType,
            /* [in] */ long window);
        
        END_INTERFACE
    } IBMDSwitcherMultiViewCallbackVtbl;

    interface IBMDSwitcherMultiViewCallback
    {
        CONST_VTBL struct IBMDSwitcherMultiViewCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMultiViewCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMultiViewCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMultiViewCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMultiViewCallback_Notify(This,eventType,window)	\
    ( (This)->lpVtbl -> Notify(This,eventType,window) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMultiViewCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMultiView_INTERFACE_DEFINED__
#define __IBMDSwitcherMultiView_INTERFACE_DEFINED__

/* interface IBMDSwitcherMultiView */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMultiView;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("231AA55F-EC1D-4FFF-ACE7-3806BA7894BB")
    IBMDSwitcherMultiView : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetLayout( 
            /* [out] */ BMDSwitcherMultiViewLayout *layout) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLayout( 
            /* [in] */ BMDSwitcherMultiViewLayout layout) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetWindowInput( 
            /* [in] */ unsigned long window,
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetWindowInput( 
            /* [in] */ unsigned long window,
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetWindowCount( 
            /* [out] */ unsigned long *windowCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputAvailabilityMask( 
            /* [out] */ BMDSwitcherInputAvailability *availabilityMask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CanRouteInputs( 
            /* [out] */ BOOL *canRoute) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherMultiViewCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherMultiViewCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMultiViewVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMultiView * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMultiView * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMultiView * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetLayout )( 
            IBMDSwitcherMultiView * This,
            /* [out] */ BMDSwitcherMultiViewLayout *layout);
        
        HRESULT ( STDMETHODCALLTYPE *SetLayout )( 
            IBMDSwitcherMultiView * This,
            /* [in] */ BMDSwitcherMultiViewLayout layout);
        
        HRESULT ( STDMETHODCALLTYPE *GetWindowInput )( 
            IBMDSwitcherMultiView * This,
            /* [in] */ unsigned long window,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetWindowInput )( 
            IBMDSwitcherMultiView * This,
            /* [in] */ unsigned long window,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetWindowCount )( 
            IBMDSwitcherMultiView * This,
            /* [out] */ unsigned long *windowCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputAvailabilityMask )( 
            IBMDSwitcherMultiView * This,
            /* [out] */ BMDSwitcherInputAvailability *availabilityMask);
        
        HRESULT ( STDMETHODCALLTYPE *CanRouteInputs )( 
            IBMDSwitcherMultiView * This,
            /* [out] */ BOOL *canRoute);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherMultiView * This,
            /* [in] */ IBMDSwitcherMultiViewCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherMultiView * This,
            /* [in] */ IBMDSwitcherMultiViewCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherMultiViewVtbl;

    interface IBMDSwitcherMultiView
    {
        CONST_VTBL struct IBMDSwitcherMultiViewVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMultiView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMultiView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMultiView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMultiView_GetLayout(This,layout)	\
    ( (This)->lpVtbl -> GetLayout(This,layout) ) 

#define IBMDSwitcherMultiView_SetLayout(This,layout)	\
    ( (This)->lpVtbl -> SetLayout(This,layout) ) 

#define IBMDSwitcherMultiView_GetWindowInput(This,window,input)	\
    ( (This)->lpVtbl -> GetWindowInput(This,window,input) ) 

#define IBMDSwitcherMultiView_SetWindowInput(This,window,input)	\
    ( (This)->lpVtbl -> SetWindowInput(This,window,input) ) 

#define IBMDSwitcherMultiView_GetWindowCount(This,windowCount)	\
    ( (This)->lpVtbl -> GetWindowCount(This,windowCount) ) 

#define IBMDSwitcherMultiView_GetInputAvailabilityMask(This,availabilityMask)	\
    ( (This)->lpVtbl -> GetInputAvailabilityMask(This,availabilityMask) ) 

#define IBMDSwitcherMultiView_CanRouteInputs(This,canRoute)	\
    ( (This)->lpVtbl -> CanRouteInputs(This,canRoute) ) 

#define IBMDSwitcherMultiView_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherMultiView_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMultiView_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherDownstreamKeyCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherDownstreamKeyCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherDownstreamKeyCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherDownstreamKeyCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0C7D4DE3-E7D1-4062-86B4-9F82F7BB346D")
    IBMDSwitcherDownstreamKeyCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherDownstreamKeyEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherDownstreamKeyCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherDownstreamKeyCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherDownstreamKeyCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherDownstreamKeyCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherDownstreamKeyCallback * This,
            /* [in] */ BMDSwitcherDownstreamKeyEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherDownstreamKeyCallbackVtbl;

    interface IBMDSwitcherDownstreamKeyCallback
    {
        CONST_VTBL struct IBMDSwitcherDownstreamKeyCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherDownstreamKeyCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherDownstreamKeyCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherDownstreamKeyCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherDownstreamKeyCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherDownstreamKeyCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherDownstreamKey_INTERFACE_DEFINED__
#define __IBMDSwitcherDownstreamKey_INTERFACE_DEFINED__

/* interface IBMDSwitcherDownstreamKey */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherDownstreamKey;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6D10D51E-71FA-4031-BC13-95BE3653D0E6")
    IBMDSwitcherDownstreamKey : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetInputCut( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputCut( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputFill( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputFill( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTie( 
            /* [out] */ BOOL *tie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTie( 
            /* [in] */ BOOL tie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRate( 
            /* [out] */ unsigned long *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRate( 
            /* [in] */ unsigned long frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOnAir( 
            /* [out] */ BOOL *onAir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOnAir( 
            /* [in] */ BOOL onAir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PerformAutoTransition( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsTransitioning( 
            /* [out] */ BOOL *isTransitioning) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsAutoTransitioning( 
            /* [out] */ BOOL *isAutoTransitioning) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFramesRemaining( 
            /* [out] */ unsigned long *framesRemaining) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPreMultiplied( 
            /* [out] */ BOOL *preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPreMultiplied( 
            /* [in] */ BOOL preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClip( 
            /* [out] */ double *clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClip( 
            /* [in] */ double clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGain( 
            /* [out] */ double *gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGain( 
            /* [in] */ double gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInverse( 
            /* [in] */ BOOL *inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInverse( 
            /* [in] */ BOOL inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMasked( 
            /* [out] */ BOOL *maskEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMasked( 
            /* [in] */ BOOL maskEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskTop( 
            /* [out] */ double *top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskTop( 
            /* [in] */ double top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskBottom( 
            /* [out] */ double *bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskBottom( 
            /* [in] */ double bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskLeft( 
            /* [out] */ double *left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskLeft( 
            /* [in] */ double left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskRight( 
            /* [out] */ double *right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskRight( 
            /* [in] */ double right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetMask( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputAvailabilityMask( 
            /* [out] */ BMDSwitcherInputAvailability *availabilityMask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherDownstreamKeyCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherDownstreamKeyCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherDownstreamKeyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherDownstreamKey * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherDownstreamKey * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputCut )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputCut )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputFill )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputFill )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetTie )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ BOOL *tie);
        
        HRESULT ( STDMETHODCALLTYPE *SetTie )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ BOOL tie);
        
        HRESULT ( STDMETHODCALLTYPE *GetRate )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ unsigned long *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetRate )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ unsigned long frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetOnAir )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ BOOL *onAir);
        
        HRESULT ( STDMETHODCALLTYPE *SetOnAir )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ BOOL onAir);
        
        HRESULT ( STDMETHODCALLTYPE *PerformAutoTransition )( 
            IBMDSwitcherDownstreamKey * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsTransitioning )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ BOOL *isTransitioning);
        
        HRESULT ( STDMETHODCALLTYPE *IsAutoTransitioning )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ BOOL *isAutoTransitioning);
        
        HRESULT ( STDMETHODCALLTYPE *GetFramesRemaining )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ unsigned long *framesRemaining);
        
        HRESULT ( STDMETHODCALLTYPE *GetPreMultiplied )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ BOOL *preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *SetPreMultiplied )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ BOOL preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *GetClip )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ double *clip);
        
        HRESULT ( STDMETHODCALLTYPE *SetClip )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ double clip);
        
        HRESULT ( STDMETHODCALLTYPE *GetGain )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ double *gain);
        
        HRESULT ( STDMETHODCALLTYPE *SetGain )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ double gain);
        
        HRESULT ( STDMETHODCALLTYPE *GetInverse )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ BOOL *inverse);
        
        HRESULT ( STDMETHODCALLTYPE *SetInverse )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ BOOL inverse);
        
        HRESULT ( STDMETHODCALLTYPE *GetMasked )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ BOOL *maskEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *SetMasked )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ BOOL maskEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskTop )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ double *top);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskTop )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ double top);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskBottom )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ double *bottom);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskBottom )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ double bottom);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskLeft )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ double *left);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskLeft )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ double left);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskRight )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ double *right);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskRight )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ double right);
        
        HRESULT ( STDMETHODCALLTYPE *ResetMask )( 
            IBMDSwitcherDownstreamKey * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputAvailabilityMask )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ BMDSwitcherInputAvailability *availabilityMask);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ IBMDSwitcherDownstreamKeyCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ IBMDSwitcherDownstreamKeyCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherDownstreamKeyVtbl;

    interface IBMDSwitcherDownstreamKey
    {
        CONST_VTBL struct IBMDSwitcherDownstreamKeyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherDownstreamKey_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherDownstreamKey_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherDownstreamKey_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherDownstreamKey_GetInputCut(This,input)	\
    ( (This)->lpVtbl -> GetInputCut(This,input) ) 

#define IBMDSwitcherDownstreamKey_SetInputCut(This,input)	\
    ( (This)->lpVtbl -> SetInputCut(This,input) ) 

#define IBMDSwitcherDownstreamKey_GetInputFill(This,input)	\
    ( (This)->lpVtbl -> GetInputFill(This,input) ) 

#define IBMDSwitcherDownstreamKey_SetInputFill(This,input)	\
    ( (This)->lpVtbl -> SetInputFill(This,input) ) 

#define IBMDSwitcherDownstreamKey_GetTie(This,tie)	\
    ( (This)->lpVtbl -> GetTie(This,tie) ) 

#define IBMDSwitcherDownstreamKey_SetTie(This,tie)	\
    ( (This)->lpVtbl -> SetTie(This,tie) ) 

#define IBMDSwitcherDownstreamKey_GetRate(This,frames)	\
    ( (This)->lpVtbl -> GetRate(This,frames) ) 

#define IBMDSwitcherDownstreamKey_SetRate(This,frames)	\
    ( (This)->lpVtbl -> SetRate(This,frames) ) 

#define IBMDSwitcherDownstreamKey_GetOnAir(This,onAir)	\
    ( (This)->lpVtbl -> GetOnAir(This,onAir) ) 

#define IBMDSwitcherDownstreamKey_SetOnAir(This,onAir)	\
    ( (This)->lpVtbl -> SetOnAir(This,onAir) ) 

#define IBMDSwitcherDownstreamKey_PerformAutoTransition(This)	\
    ( (This)->lpVtbl -> PerformAutoTransition(This) ) 

#define IBMDSwitcherDownstreamKey_IsTransitioning(This,isTransitioning)	\
    ( (This)->lpVtbl -> IsTransitioning(This,isTransitioning) ) 

#define IBMDSwitcherDownstreamKey_IsAutoTransitioning(This,isAutoTransitioning)	\
    ( (This)->lpVtbl -> IsAutoTransitioning(This,isAutoTransitioning) ) 

#define IBMDSwitcherDownstreamKey_GetFramesRemaining(This,framesRemaining)	\
    ( (This)->lpVtbl -> GetFramesRemaining(This,framesRemaining) ) 

#define IBMDSwitcherDownstreamKey_GetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> GetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherDownstreamKey_SetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> SetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherDownstreamKey_GetClip(This,clip)	\
    ( (This)->lpVtbl -> GetClip(This,clip) ) 

#define IBMDSwitcherDownstreamKey_SetClip(This,clip)	\
    ( (This)->lpVtbl -> SetClip(This,clip) ) 

#define IBMDSwitcherDownstreamKey_GetGain(This,gain)	\
    ( (This)->lpVtbl -> GetGain(This,gain) ) 

#define IBMDSwitcherDownstreamKey_SetGain(This,gain)	\
    ( (This)->lpVtbl -> SetGain(This,gain) ) 

#define IBMDSwitcherDownstreamKey_GetInverse(This,inverse)	\
    ( (This)->lpVtbl -> GetInverse(This,inverse) ) 

#define IBMDSwitcherDownstreamKey_SetInverse(This,inverse)	\
    ( (This)->lpVtbl -> SetInverse(This,inverse) ) 

#define IBMDSwitcherDownstreamKey_GetMasked(This,maskEnabled)	\
    ( (This)->lpVtbl -> GetMasked(This,maskEnabled) ) 

#define IBMDSwitcherDownstreamKey_SetMasked(This,maskEnabled)	\
    ( (This)->lpVtbl -> SetMasked(This,maskEnabled) ) 

#define IBMDSwitcherDownstreamKey_GetMaskTop(This,top)	\
    ( (This)->lpVtbl -> GetMaskTop(This,top) ) 

#define IBMDSwitcherDownstreamKey_SetMaskTop(This,top)	\
    ( (This)->lpVtbl -> SetMaskTop(This,top) ) 

#define IBMDSwitcherDownstreamKey_GetMaskBottom(This,bottom)	\
    ( (This)->lpVtbl -> GetMaskBottom(This,bottom) ) 

#define IBMDSwitcherDownstreamKey_SetMaskBottom(This,bottom)	\
    ( (This)->lpVtbl -> SetMaskBottom(This,bottom) ) 

#define IBMDSwitcherDownstreamKey_GetMaskLeft(This,left)	\
    ( (This)->lpVtbl -> GetMaskLeft(This,left) ) 

#define IBMDSwitcherDownstreamKey_SetMaskLeft(This,left)	\
    ( (This)->lpVtbl -> SetMaskLeft(This,left) ) 

#define IBMDSwitcherDownstreamKey_GetMaskRight(This,right)	\
    ( (This)->lpVtbl -> GetMaskRight(This,right) ) 

#define IBMDSwitcherDownstreamKey_SetMaskRight(This,right)	\
    ( (This)->lpVtbl -> SetMaskRight(This,right) ) 

#define IBMDSwitcherDownstreamKey_ResetMask(This)	\
    ( (This)->lpVtbl -> ResetMask(This) ) 

#define IBMDSwitcherDownstreamKey_GetInputAvailabilityMask(This,availabilityMask)	\
    ( (This)->lpVtbl -> GetInputAvailabilityMask(This,availabilityMask) ) 

#define IBMDSwitcherDownstreamKey_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherDownstreamKey_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherDownstreamKey_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherInputIterator_INTERFACE_DEFINED__
#define __IBMDSwitcherInputIterator_INTERFACE_DEFINED__

/* interface IBMDSwitcherInputIterator */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherInputIterator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("92AB7A73-C6F6-47FC-92A7-C8EEADC9EAAC")
    IBMDSwitcherInputIterator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherInput **input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetById( 
            /* [in] */ BMDSwitcherInputId inputId,
            /* [out] */ IBMDSwitcherInput **input) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherInputIteratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherInputIterator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherInputIterator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherInputIterator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherInputIterator * This,
            /* [out] */ IBMDSwitcherInput **input);
        
        HRESULT ( STDMETHODCALLTYPE *GetById )( 
            IBMDSwitcherInputIterator * This,
            /* [in] */ BMDSwitcherInputId inputId,
            /* [out] */ IBMDSwitcherInput **input);
        
        END_INTERFACE
    } IBMDSwitcherInputIteratorVtbl;

    interface IBMDSwitcherInputIterator
    {
        CONST_VTBL struct IBMDSwitcherInputIteratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherInputIterator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherInputIterator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherInputIterator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherInputIterator_Next(This,input)	\
    ( (This)->lpVtbl -> Next(This,input) ) 

#define IBMDSwitcherInputIterator_GetById(This,inputId,input)	\
    ( (This)->lpVtbl -> GetById(This,inputId,input) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherInputIterator_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherSuperSourceBoxIterator_INTERFACE_DEFINED__
#define __IBMDSwitcherSuperSourceBoxIterator_INTERFACE_DEFINED__

/* interface IBMDSwitcherSuperSourceBoxIterator */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherSuperSourceBoxIterator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("96153CDA-C894-42EA-BA90-C387018CC334")
    IBMDSwitcherSuperSourceBoxIterator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherSuperSourceBox **box) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherSuperSourceBoxIteratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherSuperSourceBoxIterator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherSuperSourceBoxIterator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherSuperSourceBoxIterator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherSuperSourceBoxIterator * This,
            /* [out] */ IBMDSwitcherSuperSourceBox **box);
        
        END_INTERFACE
    } IBMDSwitcherSuperSourceBoxIteratorVtbl;

    interface IBMDSwitcherSuperSourceBoxIterator
    {
        CONST_VTBL struct IBMDSwitcherSuperSourceBoxIteratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherSuperSourceBoxIterator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherSuperSourceBoxIterator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherSuperSourceBoxIterator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherSuperSourceBoxIterator_Next(This,box)	\
    ( (This)->lpVtbl -> Next(This,box) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherSuperSourceBoxIterator_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMixEffectBlockIterator_INTERFACE_DEFINED__
#define __IBMDSwitcherMixEffectBlockIterator_INTERFACE_DEFINED__

/* interface IBMDSwitcherMixEffectBlockIterator */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMixEffectBlockIterator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("930BDE3B-4A78-43D0-8FD3-6E82ABA0E117")
    IBMDSwitcherMixEffectBlockIterator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherMixEffectBlock **mixEffectBlock) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMixEffectBlockIteratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMixEffectBlockIterator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMixEffectBlockIterator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMixEffectBlockIterator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherMixEffectBlockIterator * This,
            /* [out] */ IBMDSwitcherMixEffectBlock **mixEffectBlock);
        
        END_INTERFACE
    } IBMDSwitcherMixEffectBlockIteratorVtbl;

    interface IBMDSwitcherMixEffectBlockIterator
    {
        CONST_VTBL struct IBMDSwitcherMixEffectBlockIteratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMixEffectBlockIterator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMixEffectBlockIterator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMixEffectBlockIterator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMixEffectBlockIterator_Next(This,mixEffectBlock)	\
    ( (This)->lpVtbl -> Next(This,mixEffectBlock) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMixEffectBlockIterator_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherDownstreamKeyIterator_INTERFACE_DEFINED__
#define __IBMDSwitcherDownstreamKeyIterator_INTERFACE_DEFINED__

/* interface IBMDSwitcherDownstreamKeyIterator */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherDownstreamKeyIterator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FD063042-B7FD-4819-BD1E-809DC380DFE9")
    IBMDSwitcherDownstreamKeyIterator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherDownstreamKey **downstreamKey) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherDownstreamKeyIteratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherDownstreamKeyIterator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherDownstreamKeyIterator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherDownstreamKeyIterator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherDownstreamKeyIterator * This,
            /* [out] */ IBMDSwitcherDownstreamKey **downstreamKey);
        
        END_INTERFACE
    } IBMDSwitcherDownstreamKeyIteratorVtbl;

    interface IBMDSwitcherDownstreamKeyIterator
    {
        CONST_VTBL struct IBMDSwitcherDownstreamKeyIteratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherDownstreamKeyIterator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherDownstreamKeyIterator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherDownstreamKeyIterator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherDownstreamKeyIterator_Next(This,downstreamKey)	\
    ( (This)->lpVtbl -> Next(This,downstreamKey) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherDownstreamKeyIterator_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyIterator_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyIterator_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyIterator */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyIterator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EFD545AE-2879-412B-84B7-17A04E4707ED")
    IBMDSwitcherKeyIterator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherKey **key) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyIteratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyIterator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyIterator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyIterator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherKeyIterator * This,
            /* [out] */ IBMDSwitcherKey **key);
        
        END_INTERFACE
    } IBMDSwitcherKeyIteratorVtbl;

    interface IBMDSwitcherKeyIterator
    {
        CONST_VTBL struct IBMDSwitcherKeyIteratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyIterator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyIterator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyIterator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyIterator_Next(This,key)	\
    ( (This)->lpVtbl -> Next(This,key) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyIterator_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMediaPlayerIterator_INTERFACE_DEFINED__
#define __IBMDSwitcherMediaPlayerIterator_INTERFACE_DEFINED__

/* interface IBMDSwitcherMediaPlayerIterator */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMediaPlayerIterator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E910816F-59CB-4224-A77F-06DE3D232275")
    IBMDSwitcherMediaPlayerIterator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherMediaPlayer **mediaPlayer) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMediaPlayerIteratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMediaPlayerIterator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMediaPlayerIterator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMediaPlayerIterator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherMediaPlayerIterator * This,
            /* [out] */ IBMDSwitcherMediaPlayer **mediaPlayer);
        
        END_INTERFACE
    } IBMDSwitcherMediaPlayerIteratorVtbl;

    interface IBMDSwitcherMediaPlayerIterator
    {
        CONST_VTBL struct IBMDSwitcherMediaPlayerIteratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMediaPlayerIterator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMediaPlayerIterator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMediaPlayerIterator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMediaPlayerIterator_Next(This,mediaPlayer)	\
    ( (This)->lpVtbl -> Next(This,mediaPlayer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMediaPlayerIterator_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMultiViewIterator_INTERFACE_DEFINED__
#define __IBMDSwitcherMultiViewIterator_INTERFACE_DEFINED__

/* interface IBMDSwitcherMultiViewIterator */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMultiViewIterator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("51FED981-C2AD-45A2-8618-61429CEED48D")
    IBMDSwitcherMultiViewIterator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherMultiView **multiView) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMultiViewIteratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMultiViewIterator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMultiViewIterator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMultiViewIterator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherMultiViewIterator * This,
            /* [out] */ IBMDSwitcherMultiView **multiView);
        
        END_INTERFACE
    } IBMDSwitcherMultiViewIteratorVtbl;

    interface IBMDSwitcherMultiViewIterator
    {
        CONST_VTBL struct IBMDSwitcherMultiViewIteratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMultiViewIterator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMultiViewIterator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMultiViewIterator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMultiViewIterator_Next(This,multiView)	\
    ( (This)->lpVtbl -> Next(This,multiView) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMultiViewIterator_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherAudioMonitorOutputIterator_INTERFACE_DEFINED__
#define __IBMDSwitcherAudioMonitorOutputIterator_INTERFACE_DEFINED__

/* interface IBMDSwitcherAudioMonitorOutputIterator */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherAudioMonitorOutputIterator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C76BAC6A-DFEE-4F2F-B161-226B481D556A")
    IBMDSwitcherAudioMonitorOutputIterator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherAudioMonitorOutput **audioMonitorOutput) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherAudioMonitorOutputIteratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherAudioMonitorOutputIterator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherAudioMonitorOutputIterator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherAudioMonitorOutputIterator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherAudioMonitorOutputIterator * This,
            /* [out] */ IBMDSwitcherAudioMonitorOutput **audioMonitorOutput);
        
        END_INTERFACE
    } IBMDSwitcherAudioMonitorOutputIteratorVtbl;

    interface IBMDSwitcherAudioMonitorOutputIterator
    {
        CONST_VTBL struct IBMDSwitcherAudioMonitorOutputIteratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherAudioMonitorOutputIterator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherAudioMonitorOutputIterator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherAudioMonitorOutputIterator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherAudioMonitorOutputIterator_Next(This,audioMonitorOutput)	\
    ( (This)->lpVtbl -> Next(This,audioMonitorOutput) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherAudioMonitorOutputIterator_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherAudioInputIterator_INTERFACE_DEFINED__
#define __IBMDSwitcherAudioInputIterator_INTERFACE_DEFINED__

/* interface IBMDSwitcherAudioInputIterator */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherAudioInputIterator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0194C65A-3EDA-4853-A6D3-D59CD12B3C0A")
    IBMDSwitcherAudioInputIterator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherAudioInput **audioInput) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetById( 
            /* [in] */ BMDSwitcherAudioInputId audioInputId,
            /* [out] */ IBMDSwitcherAudioInput **audioInput) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherAudioInputIteratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherAudioInputIterator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherAudioInputIterator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherAudioInputIterator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherAudioInputIterator * This,
            /* [out] */ IBMDSwitcherAudioInput **audioInput);
        
        HRESULT ( STDMETHODCALLTYPE *GetById )( 
            IBMDSwitcherAudioInputIterator * This,
            /* [in] */ BMDSwitcherAudioInputId audioInputId,
            /* [out] */ IBMDSwitcherAudioInput **audioInput);
        
        END_INTERFACE
    } IBMDSwitcherAudioInputIteratorVtbl;

    interface IBMDSwitcherAudioInputIterator
    {
        CONST_VTBL struct IBMDSwitcherAudioInputIteratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherAudioInputIterator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherAudioInputIterator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherAudioInputIterator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherAudioInputIterator_Next(This,audioInput)	\
    ( (This)->lpVtbl -> Next(This,audioInput) ) 

#define IBMDSwitcherAudioInputIterator_GetById(This,audioInputId,audioInput)	\
    ( (This)->lpVtbl -> GetById(This,audioInputId,audioInput) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherAudioInputIterator_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6C6E4441-9421-4729-9951-988659E3A44A")
    IBMDSwitcherCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE PropertyChanged( 
            /* [in] */ BMDSwitcherPropertyId propertyId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Disconnected( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *PropertyChanged )( 
            IBMDSwitcherCallback * This,
            /* [in] */ BMDSwitcherPropertyId propertyId);
        
        HRESULT ( STDMETHODCALLTYPE *Disconnected )( 
            IBMDSwitcherCallback * This);
        
        END_INTERFACE
    } IBMDSwitcherCallbackVtbl;

    interface IBMDSwitcherCallback
    {
        CONST_VTBL struct IBMDSwitcherCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherCallback_PropertyChanged(This,propertyId)	\
    ( (This)->lpVtbl -> PropertyChanged(This,propertyId) ) 

#define IBMDSwitcherCallback_Disconnected(This)	\
    ( (This)->lpVtbl -> Disconnected(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcher_INTERFACE_DEFINED__
#define __IBMDSwitcher_INTERFACE_DEFINED__

/* interface IBMDSwitcher */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcher;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1E8701D0-258F-43ED-9EDC-434FD16E922D")
    IBMDSwitcher : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateIterator( 
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFlag( 
            /* [in] */ BMDSwitcherPropertyId propertyId,
            /* [in] */ BOOL value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlag( 
            /* [in] */ BMDSwitcherPropertyId propertyId,
            /* [out] */ BOOL *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInt( 
            /* [in] */ BMDSwitcherPropertyId propertyId,
            /* [in] */ LONGLONG value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInt( 
            /* [in] */ BMDSwitcherPropertyId propertyId,
            /* [out] */ LONGLONG *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFloat( 
            /* [in] */ BMDSwitcherPropertyId propertyId,
            /* [in] */ double value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFloat( 
            /* [in] */ BMDSwitcherPropertyId propertyId,
            /* [out] */ double *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetString( 
            /* [in] */ BMDSwitcherPropertyId propertyId,
            /* [in] */ BSTR value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetString( 
            /* [in] */ BMDSwitcherPropertyId propertyId,
            /* [out] */ BSTR *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcher * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcher * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcher * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateIterator )( 
            IBMDSwitcher * This,
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcher * This,
            /* [in] */ IBMDSwitcherCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcher * This,
            /* [in] */ IBMDSwitcherCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *SetFlag )( 
            IBMDSwitcher * This,
            /* [in] */ BMDSwitcherPropertyId propertyId,
            /* [in] */ BOOL value);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlag )( 
            IBMDSwitcher * This,
            /* [in] */ BMDSwitcherPropertyId propertyId,
            /* [out] */ BOOL *value);
        
        HRESULT ( STDMETHODCALLTYPE *SetInt )( 
            IBMDSwitcher * This,
            /* [in] */ BMDSwitcherPropertyId propertyId,
            /* [in] */ LONGLONG value);
        
        HRESULT ( STDMETHODCALLTYPE *GetInt )( 
            IBMDSwitcher * This,
            /* [in] */ BMDSwitcherPropertyId propertyId,
            /* [out] */ LONGLONG *value);
        
        HRESULT ( STDMETHODCALLTYPE *SetFloat )( 
            IBMDSwitcher * This,
            /* [in] */ BMDSwitcherPropertyId propertyId,
            /* [in] */ double value);
        
        HRESULT ( STDMETHODCALLTYPE *GetFloat )( 
            IBMDSwitcher * This,
            /* [in] */ BMDSwitcherPropertyId propertyId,
            /* [out] */ double *value);
        
        HRESULT ( STDMETHODCALLTYPE *SetString )( 
            IBMDSwitcher * This,
            /* [in] */ BMDSwitcherPropertyId propertyId,
            /* [in] */ BSTR value);
        
        HRESULT ( STDMETHODCALLTYPE *GetString )( 
            IBMDSwitcher * This,
            /* [in] */ BMDSwitcherPropertyId propertyId,
            /* [out] */ BSTR *value);
        
        END_INTERFACE
    } IBMDSwitcherVtbl;

    interface IBMDSwitcher
    {
        CONST_VTBL struct IBMDSwitcherVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcher_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcher_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcher_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcher_CreateIterator(This,iid,ppv)	\
    ( (This)->lpVtbl -> CreateIterator(This,iid,ppv) ) 

#define IBMDSwitcher_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcher_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#define IBMDSwitcher_SetFlag(This,propertyId,value)	\
    ( (This)->lpVtbl -> SetFlag(This,propertyId,value) ) 

#define IBMDSwitcher_GetFlag(This,propertyId,value)	\
    ( (This)->lpVtbl -> GetFlag(This,propertyId,value) ) 

#define IBMDSwitcher_SetInt(This,propertyId,value)	\
    ( (This)->lpVtbl -> SetInt(This,propertyId,value) ) 

#define IBMDSwitcher_GetInt(This,propertyId,value)	\
    ( (This)->lpVtbl -> GetInt(This,propertyId,value) ) 

#define IBMDSwitcher_SetFloat(This,propertyId,value)	\
    ( (This)->lpVtbl -> SetFloat(This,propertyId,value) ) 

#define IBMDSwitcher_GetFloat(This,propertyId,value)	\
    ( (This)->lpVtbl -> GetFloat(This,propertyId,value) ) 

#define IBMDSwitcher_SetString(This,propertyId,value)	\
    ( (This)->lpVtbl -> SetString(This,propertyId,value) ) 

#define IBMDSwitcher_GetString(This,propertyId,value)	\
    ( (This)->lpVtbl -> GetString(This,propertyId,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcher_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherDiscovery_INTERFACE_DEFINED__
#define __IBMDSwitcherDiscovery_INTERFACE_DEFINED__

/* interface IBMDSwitcherDiscovery */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherDiscovery;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A676047A-D3A4-44B1-B8B5-31D7289D266A")
    IBMDSwitcherDiscovery : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ConnectTo( 
            /* [in] */ BSTR deviceAddress,
            /* [out] */ IBMDSwitcher **switcherDevice,
            /* [out] */ BMDSwitcherConnectToFailure *failReason) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherDiscoveryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherDiscovery * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherDiscovery * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherDiscovery * This);
        
        HRESULT ( STDMETHODCALLTYPE *ConnectTo )( 
            IBMDSwitcherDiscovery * This,
            /* [in] */ BSTR deviceAddress,
            /* [out] */ IBMDSwitcher **switcherDevice,
            /* [out] */ BMDSwitcherConnectToFailure *failReason);
        
        END_INTERFACE
    } IBMDSwitcherDiscoveryVtbl;

    interface IBMDSwitcherDiscovery
    {
        CONST_VTBL struct IBMDSwitcherDiscoveryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherDiscovery_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherDiscovery_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherDiscovery_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherDiscovery_ConnectTo(This,deviceAddress,switcherDevice,failReason)	\
    ( (This)->lpVtbl -> ConnectTo(This,deviceAddress,switcherDevice,failReason) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherDiscovery_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherFrame_INTERFACE_DEFINED__
#define __IBMDSwitcherFrame_INTERFACE_DEFINED__

/* interface IBMDSwitcherFrame */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherFrame;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("35A1F6A6-D317-4F89-A565-0F0BD414CF77")
    IBMDSwitcherFrame : public IUnknown
    {
    public:
        virtual long STDMETHODCALLTYPE GetWidth( void) = 0;
        
        virtual long STDMETHODCALLTYPE GetHeight( void) = 0;
        
        virtual long STDMETHODCALLTYPE GetRowBytes( void) = 0;
        
        virtual BMDSwitcherPixelFormat STDMETHODCALLTYPE GetPixelFormat( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBytes( 
            /* [out] */ void **buffer) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherFrameVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherFrame * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherFrame * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherFrame * This);
        
        long ( STDMETHODCALLTYPE *GetWidth )( 
            IBMDSwitcherFrame * This);
        
        long ( STDMETHODCALLTYPE *GetHeight )( 
            IBMDSwitcherFrame * This);
        
        long ( STDMETHODCALLTYPE *GetRowBytes )( 
            IBMDSwitcherFrame * This);
        
        BMDSwitcherPixelFormat ( STDMETHODCALLTYPE *GetPixelFormat )( 
            IBMDSwitcherFrame * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetBytes )( 
            IBMDSwitcherFrame * This,
            /* [out] */ void **buffer);
        
        END_INTERFACE
    } IBMDSwitcherFrameVtbl;

    interface IBMDSwitcherFrame
    {
        CONST_VTBL struct IBMDSwitcherFrameVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherFrame_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherFrame_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherFrame_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherFrame_GetWidth(This)	\
    ( (This)->lpVtbl -> GetWidth(This) ) 

#define IBMDSwitcherFrame_GetHeight(This)	\
    ( (This)->lpVtbl -> GetHeight(This) ) 

#define IBMDSwitcherFrame_GetRowBytes(This)	\
    ( (This)->lpVtbl -> GetRowBytes(This) ) 

#define IBMDSwitcherFrame_GetPixelFormat(This)	\
    ( (This)->lpVtbl -> GetPixelFormat(This) ) 

#define IBMDSwitcherFrame_GetBytes(This,buffer)	\
    ( (This)->lpVtbl -> GetBytes(This,buffer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherFrame_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherAudio_INTERFACE_DEFINED__
#define __IBMDSwitcherAudio_INTERFACE_DEFINED__

/* interface IBMDSwitcherAudio */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherAudio;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E89BD25E-FD04-4FBE-A124-CCAF5ADBE5B2")
    IBMDSwitcherAudio : public IUnknown
    {
    public:
        virtual long STDMETHODCALLTYPE GetSize( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBytes( 
            /* [out] */ void **buffer) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherAudioVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherAudio * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherAudio * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherAudio * This);
        
        long ( STDMETHODCALLTYPE *GetSize )( 
            IBMDSwitcherAudio * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetBytes )( 
            IBMDSwitcherAudio * This,
            /* [out] */ void **buffer);
        
        END_INTERFACE
    } IBMDSwitcherAudioVtbl;

    interface IBMDSwitcherAudio
    {
        CONST_VTBL struct IBMDSwitcherAudioVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherAudio_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherAudio_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherAudio_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherAudio_GetSize(This)	\
    ( (This)->lpVtbl -> GetSize(This) ) 

#define IBMDSwitcherAudio_GetBytes(This,buffer)	\
    ( (This)->lpVtbl -> GetBytes(This,buffer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherAudio_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherLockCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherLockCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherLockCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherLockCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56663D7A-85A8-4DA0-9B13-2A52D3C7740C")
    IBMDSwitcherLockCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Obtained( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherLockCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherLockCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherLockCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherLockCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Obtained )( 
            IBMDSwitcherLockCallback * This);
        
        END_INTERFACE
    } IBMDSwitcherLockCallbackVtbl;

    interface IBMDSwitcherLockCallback
    {
        CONST_VTBL struct IBMDSwitcherLockCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherLockCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherLockCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherLockCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherLockCallback_Obtained(This)	\
    ( (This)->lpVtbl -> Obtained(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherLockCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherStillsCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherStillsCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherStillsCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherStillsCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AF82DC6-9A43-4CD2-9712-585E6BA159BA")
    IBMDSwitcherStillsCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherMediaPoolEventType eventType,
            /* [in] */ IBMDSwitcherFrame *frame,
            /* [in] */ long index) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherStillsCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherStillsCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherStillsCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherStillsCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherStillsCallback * This,
            /* [in] */ BMDSwitcherMediaPoolEventType eventType,
            /* [in] */ IBMDSwitcherFrame *frame,
            /* [in] */ long index);
        
        END_INTERFACE
    } IBMDSwitcherStillsCallbackVtbl;

    interface IBMDSwitcherStillsCallback
    {
        CONST_VTBL struct IBMDSwitcherStillsCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherStillsCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherStillsCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherStillsCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherStillsCallback_Notify(This,eventType,frame,index)	\
    ( (This)->lpVtbl -> Notify(This,eventType,frame,index) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherStillsCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherStills_INTERFACE_DEFINED__
#define __IBMDSwitcherStills_INTERFACE_DEFINED__

/* interface IBMDSwitcherStills */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherStills;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AA26D656-2400-407B-8D3C-796B506F99DB")
    IBMDSwitcherStills : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [out] */ unsigned long *count) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsValid( 
            /* [in] */ unsigned long index,
            /* [out] */ BOOL *valid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [in] */ unsigned long index,
            /* [out] */ BSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHash( 
            /* [in] */ unsigned long index,
            /* [out] */ BMDSwitcherHash *hash) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInvalid( 
            /* [in] */ unsigned long index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Lock( 
            /* [in] */ IBMDSwitcherLockCallback *lockCallback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unlock( 
            /* [in] */ IBMDSwitcherLockCallback *lockCallback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Upload( 
            /* [in] */ unsigned long index,
            /* [in] */ BSTR name,
            /* [in] */ IBMDSwitcherFrame *frame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Download( 
            /* [in] */ unsigned long index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CancelTransfer( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProgress( 
            /* [out] */ double *progress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherStillsCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherStillsCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherStillsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherStills * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherStills * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherStills * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            IBMDSwitcherStills * This,
            /* [out] */ unsigned long *count);
        
        HRESULT ( STDMETHODCALLTYPE *IsValid )( 
            IBMDSwitcherStills * This,
            /* [in] */ unsigned long index,
            /* [out] */ BOOL *valid);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IBMDSwitcherStills * This,
            /* [in] */ unsigned long index,
            /* [out] */ BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *GetHash )( 
            IBMDSwitcherStills * This,
            /* [in] */ unsigned long index,
            /* [out] */ BMDSwitcherHash *hash);
        
        HRESULT ( STDMETHODCALLTYPE *SetInvalid )( 
            IBMDSwitcherStills * This,
            /* [in] */ unsigned long index);
        
        HRESULT ( STDMETHODCALLTYPE *Lock )( 
            IBMDSwitcherStills * This,
            /* [in] */ IBMDSwitcherLockCallback *lockCallback);
        
        HRESULT ( STDMETHODCALLTYPE *Unlock )( 
            IBMDSwitcherStills * This,
            /* [in] */ IBMDSwitcherLockCallback *lockCallback);
        
        HRESULT ( STDMETHODCALLTYPE *Upload )( 
            IBMDSwitcherStills * This,
            /* [in] */ unsigned long index,
            /* [in] */ BSTR name,
            /* [in] */ IBMDSwitcherFrame *frame);
        
        HRESULT ( STDMETHODCALLTYPE *Download )( 
            IBMDSwitcherStills * This,
            /* [in] */ unsigned long index);
        
        HRESULT ( STDMETHODCALLTYPE *CancelTransfer )( 
            IBMDSwitcherStills * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetProgress )( 
            IBMDSwitcherStills * This,
            /* [out] */ double *progress);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherStills * This,
            /* [in] */ IBMDSwitcherStillsCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherStills * This,
            /* [in] */ IBMDSwitcherStillsCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherStillsVtbl;

    interface IBMDSwitcherStills
    {
        CONST_VTBL struct IBMDSwitcherStillsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherStills_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherStills_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherStills_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherStills_GetCount(This,count)	\
    ( (This)->lpVtbl -> GetCount(This,count) ) 

#define IBMDSwitcherStills_IsValid(This,index,valid)	\
    ( (This)->lpVtbl -> IsValid(This,index,valid) ) 

#define IBMDSwitcherStills_GetName(This,index,name)	\
    ( (This)->lpVtbl -> GetName(This,index,name) ) 

#define IBMDSwitcherStills_GetHash(This,index,hash)	\
    ( (This)->lpVtbl -> GetHash(This,index,hash) ) 

#define IBMDSwitcherStills_SetInvalid(This,index)	\
    ( (This)->lpVtbl -> SetInvalid(This,index) ) 

#define IBMDSwitcherStills_Lock(This,lockCallback)	\
    ( (This)->lpVtbl -> Lock(This,lockCallback) ) 

#define IBMDSwitcherStills_Unlock(This,lockCallback)	\
    ( (This)->lpVtbl -> Unlock(This,lockCallback) ) 

#define IBMDSwitcherStills_Upload(This,index,name,frame)	\
    ( (This)->lpVtbl -> Upload(This,index,name,frame) ) 

#define IBMDSwitcherStills_Download(This,index)	\
    ( (This)->lpVtbl -> Download(This,index) ) 

#define IBMDSwitcherStills_CancelTransfer(This)	\
    ( (This)->lpVtbl -> CancelTransfer(This) ) 

#define IBMDSwitcherStills_GetProgress(This,progress)	\
    ( (This)->lpVtbl -> GetProgress(This,progress) ) 

#define IBMDSwitcherStills_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherStills_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherStills_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherClipCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherClipCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherClipCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherClipCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("407117B4-B6A8-46D2-9911-43254171B1B7")
    IBMDSwitcherClipCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherMediaPoolEventType eventType,
            /* [in] */ IBMDSwitcherFrame *frame,
            /* [in] */ long frameIndex,
            /* [in] */ IBMDSwitcherAudio *audio,
            /* [in] */ long clipIndex) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherClipCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherClipCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherClipCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherClipCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherClipCallback * This,
            /* [in] */ BMDSwitcherMediaPoolEventType eventType,
            /* [in] */ IBMDSwitcherFrame *frame,
            /* [in] */ long frameIndex,
            /* [in] */ IBMDSwitcherAudio *audio,
            /* [in] */ long clipIndex);
        
        END_INTERFACE
    } IBMDSwitcherClipCallbackVtbl;

    interface IBMDSwitcherClipCallback
    {
        CONST_VTBL struct IBMDSwitcherClipCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherClipCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherClipCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherClipCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherClipCallback_Notify(This,eventType,frame,frameIndex,audio,clipIndex)	\
    ( (This)->lpVtbl -> Notify(This,eventType,frame,frameIndex,audio,clipIndex) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherClipCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherClip_INTERFACE_DEFINED__
#define __IBMDSwitcherClip_INTERFACE_DEFINED__

/* interface IBMDSwitcherClip */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherClip;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3CC10CA1-3E13-4C69-9FFC-A37A62B05869")
    IBMDSwitcherClip : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetIndex( 
            /* [out] */ unsigned long *index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsValid( 
            /* [out] */ BOOL *valid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [out] */ BSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetValid( 
            /* [in] */ BSTR name,
            /* [in] */ unsigned long frameCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInvalid( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFrameCount( 
            /* [out] */ unsigned long *frameCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaxFrameCount( 
            /* [out] */ unsigned long *maxFrameCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsFrameValid( 
            /* [in] */ unsigned long frameIndex,
            /* [out] */ BOOL *valid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFrameHash( 
            /* [in] */ unsigned long frameIndex,
            /* [out] */ BMDSwitcherHash *hash) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsAudioValid( 
            /* [out] */ BOOL *valid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAudioName( 
            /* [out] */ BSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAudioHash( 
            /* [out] */ BMDSwitcherHash *hash) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAudioInvalid( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Lock( 
            /* [in] */ IBMDSwitcherLockCallback *lockCallback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unlock( 
            /* [in] */ IBMDSwitcherLockCallback *lockCallback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UploadFrame( 
            /* [in] */ unsigned long frameIndex,
            /* [in] */ IBMDSwitcherFrame *frame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DownloadFrame( 
            /* [in] */ unsigned long frameIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UploadAudio( 
            /* [in] */ BSTR name,
            /* [in] */ IBMDSwitcherAudio *audio) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DownloadAudio( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CancelTransfer( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProgress( 
            /* [out] */ double *progress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherClipCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherClipCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherClipVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherClip * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherClip * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherClip * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIndex )( 
            IBMDSwitcherClip * This,
            /* [out] */ unsigned long *index);
        
        HRESULT ( STDMETHODCALLTYPE *IsValid )( 
            IBMDSwitcherClip * This,
            /* [out] */ BOOL *valid);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IBMDSwitcherClip * This,
            /* [out] */ BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *SetValid )( 
            IBMDSwitcherClip * This,
            /* [in] */ BSTR name,
            /* [in] */ unsigned long frameCount);
        
        HRESULT ( STDMETHODCALLTYPE *SetInvalid )( 
            IBMDSwitcherClip * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFrameCount )( 
            IBMDSwitcherClip * This,
            /* [out] */ unsigned long *frameCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaxFrameCount )( 
            IBMDSwitcherClip * This,
            /* [out] */ unsigned long *maxFrameCount);
        
        HRESULT ( STDMETHODCALLTYPE *IsFrameValid )( 
            IBMDSwitcherClip * This,
            /* [in] */ unsigned long frameIndex,
            /* [out] */ BOOL *valid);
        
        HRESULT ( STDMETHODCALLTYPE *GetFrameHash )( 
            IBMDSwitcherClip * This,
            /* [in] */ unsigned long frameIndex,
            /* [out] */ BMDSwitcherHash *hash);
        
        HRESULT ( STDMETHODCALLTYPE *IsAudioValid )( 
            IBMDSwitcherClip * This,
            /* [out] */ BOOL *valid);
        
        HRESULT ( STDMETHODCALLTYPE *GetAudioName )( 
            IBMDSwitcherClip * This,
            /* [out] */ BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *GetAudioHash )( 
            IBMDSwitcherClip * This,
            /* [out] */ BMDSwitcherHash *hash);
        
        HRESULT ( STDMETHODCALLTYPE *SetAudioInvalid )( 
            IBMDSwitcherClip * This);
        
        HRESULT ( STDMETHODCALLTYPE *Lock )( 
            IBMDSwitcherClip * This,
            /* [in] */ IBMDSwitcherLockCallback *lockCallback);
        
        HRESULT ( STDMETHODCALLTYPE *Unlock )( 
            IBMDSwitcherClip * This,
            /* [in] */ IBMDSwitcherLockCallback *lockCallback);
        
        HRESULT ( STDMETHODCALLTYPE *UploadFrame )( 
            IBMDSwitcherClip * This,
            /* [in] */ unsigned long frameIndex,
            /* [in] */ IBMDSwitcherFrame *frame);
        
        HRESULT ( STDMETHODCALLTYPE *DownloadFrame )( 
            IBMDSwitcherClip * This,
            /* [in] */ unsigned long frameIndex);
        
        HRESULT ( STDMETHODCALLTYPE *UploadAudio )( 
            IBMDSwitcherClip * This,
            /* [in] */ BSTR name,
            /* [in] */ IBMDSwitcherAudio *audio);
        
        HRESULT ( STDMETHODCALLTYPE *DownloadAudio )( 
            IBMDSwitcherClip * This);
        
        HRESULT ( STDMETHODCALLTYPE *CancelTransfer )( 
            IBMDSwitcherClip * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetProgress )( 
            IBMDSwitcherClip * This,
            /* [out] */ double *progress);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherClip * This,
            /* [in] */ IBMDSwitcherClipCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherClip * This,
            /* [in] */ IBMDSwitcherClipCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherClipVtbl;

    interface IBMDSwitcherClip
    {
        CONST_VTBL struct IBMDSwitcherClipVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherClip_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherClip_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherClip_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherClip_GetIndex(This,index)	\
    ( (This)->lpVtbl -> GetIndex(This,index) ) 

#define IBMDSwitcherClip_IsValid(This,valid)	\
    ( (This)->lpVtbl -> IsValid(This,valid) ) 

#define IBMDSwitcherClip_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IBMDSwitcherClip_SetValid(This,name,frameCount)	\
    ( (This)->lpVtbl -> SetValid(This,name,frameCount) ) 

#define IBMDSwitcherClip_SetInvalid(This)	\
    ( (This)->lpVtbl -> SetInvalid(This) ) 

#define IBMDSwitcherClip_GetFrameCount(This,frameCount)	\
    ( (This)->lpVtbl -> GetFrameCount(This,frameCount) ) 

#define IBMDSwitcherClip_GetMaxFrameCount(This,maxFrameCount)	\
    ( (This)->lpVtbl -> GetMaxFrameCount(This,maxFrameCount) ) 

#define IBMDSwitcherClip_IsFrameValid(This,frameIndex,valid)	\
    ( (This)->lpVtbl -> IsFrameValid(This,frameIndex,valid) ) 

#define IBMDSwitcherClip_GetFrameHash(This,frameIndex,hash)	\
    ( (This)->lpVtbl -> GetFrameHash(This,frameIndex,hash) ) 

#define IBMDSwitcherClip_IsAudioValid(This,valid)	\
    ( (This)->lpVtbl -> IsAudioValid(This,valid) ) 

#define IBMDSwitcherClip_GetAudioName(This,name)	\
    ( (This)->lpVtbl -> GetAudioName(This,name) ) 

#define IBMDSwitcherClip_GetAudioHash(This,hash)	\
    ( (This)->lpVtbl -> GetAudioHash(This,hash) ) 

#define IBMDSwitcherClip_SetAudioInvalid(This)	\
    ( (This)->lpVtbl -> SetAudioInvalid(This) ) 

#define IBMDSwitcherClip_Lock(This,lockCallback)	\
    ( (This)->lpVtbl -> Lock(This,lockCallback) ) 

#define IBMDSwitcherClip_Unlock(This,lockCallback)	\
    ( (This)->lpVtbl -> Unlock(This,lockCallback) ) 

#define IBMDSwitcherClip_UploadFrame(This,frameIndex,frame)	\
    ( (This)->lpVtbl -> UploadFrame(This,frameIndex,frame) ) 

#define IBMDSwitcherClip_DownloadFrame(This,frameIndex)	\
    ( (This)->lpVtbl -> DownloadFrame(This,frameIndex) ) 

#define IBMDSwitcherClip_UploadAudio(This,name,audio)	\
    ( (This)->lpVtbl -> UploadAudio(This,name,audio) ) 

#define IBMDSwitcherClip_DownloadAudio(This)	\
    ( (This)->lpVtbl -> DownloadAudio(This) ) 

#define IBMDSwitcherClip_CancelTransfer(This)	\
    ( (This)->lpVtbl -> CancelTransfer(This) ) 

#define IBMDSwitcherClip_GetProgress(This,progress)	\
    ( (This)->lpVtbl -> GetProgress(This,progress) ) 

#define IBMDSwitcherClip_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherClip_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherClip_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMediaPoolCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherMediaPoolCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherMediaPoolCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMediaPoolCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B8617A16-1B17-4FD6-93BF-664FA71F2A50")
    IBMDSwitcherMediaPoolCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ClipFrameMaxCountsChanged( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FrameTotalForClipsChanged( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMediaPoolCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMediaPoolCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMediaPoolCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMediaPoolCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *ClipFrameMaxCountsChanged )( 
            IBMDSwitcherMediaPoolCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *FrameTotalForClipsChanged )( 
            IBMDSwitcherMediaPoolCallback * This);
        
        END_INTERFACE
    } IBMDSwitcherMediaPoolCallbackVtbl;

    interface IBMDSwitcherMediaPoolCallback
    {
        CONST_VTBL struct IBMDSwitcherMediaPoolCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMediaPoolCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMediaPoolCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMediaPoolCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMediaPoolCallback_ClipFrameMaxCountsChanged(This)	\
    ( (This)->lpVtbl -> ClipFrameMaxCountsChanged(This) ) 

#define IBMDSwitcherMediaPoolCallback_FrameTotalForClipsChanged(This)	\
    ( (This)->lpVtbl -> FrameTotalForClipsChanged(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMediaPoolCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMediaPool_INTERFACE_DEFINED__
#define __IBMDSwitcherMediaPool_INTERFACE_DEFINED__

/* interface IBMDSwitcherMediaPool */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMediaPool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D9B2A1E7-023E-42EC-96C9-5FFE28CE8399")
    IBMDSwitcherMediaPool : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetStills( 
            /* [out] */ IBMDSwitcherStills **stills) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClip( 
            /* [in] */ unsigned long clipIndex,
            /* [out] */ IBMDSwitcherClip **clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClipCount( 
            /* [out] */ unsigned long *clipCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateFrame( 
            /* [in] */ BMDSwitcherPixelFormat pixelFormat,
            /* [in] */ unsigned long width,
            /* [in] */ unsigned long height,
            /* [out] */ IBMDSwitcherFrame **frame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateAudio( 
            /* [in] */ unsigned long sizeBytes,
            /* [out] */ IBMDSwitcherAudio **audio) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFrameTotalForClips( 
            /* [out] */ unsigned long *total) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClipMaxFrameCounts( 
            /* [in] */ unsigned long clipCount,
            /* [out] */ unsigned long *clipMaxFrameCounts) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClipMaxFrameCounts( 
            /* [in] */ unsigned long clipCount,
            /* [in] */ const unsigned long *clipMaxFrameCounts) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherMediaPoolCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherMediaPoolCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMediaPoolVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMediaPool * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMediaPool * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMediaPool * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetStills )( 
            IBMDSwitcherMediaPool * This,
            /* [out] */ IBMDSwitcherStills **stills);
        
        HRESULT ( STDMETHODCALLTYPE *GetClip )( 
            IBMDSwitcherMediaPool * This,
            /* [in] */ unsigned long clipIndex,
            /* [out] */ IBMDSwitcherClip **clip);
        
        HRESULT ( STDMETHODCALLTYPE *GetClipCount )( 
            IBMDSwitcherMediaPool * This,
            /* [out] */ unsigned long *clipCount);
        
        HRESULT ( STDMETHODCALLTYPE *CreateFrame )( 
            IBMDSwitcherMediaPool * This,
            /* [in] */ BMDSwitcherPixelFormat pixelFormat,
            /* [in] */ unsigned long width,
            /* [in] */ unsigned long height,
            /* [out] */ IBMDSwitcherFrame **frame);
        
        HRESULT ( STDMETHODCALLTYPE *CreateAudio )( 
            IBMDSwitcherMediaPool * This,
            /* [in] */ unsigned long sizeBytes,
            /* [out] */ IBMDSwitcherAudio **audio);
        
        HRESULT ( STDMETHODCALLTYPE *GetFrameTotalForClips )( 
            IBMDSwitcherMediaPool * This,
            /* [out] */ unsigned long *total);
        
        HRESULT ( STDMETHODCALLTYPE *GetClipMaxFrameCounts )( 
            IBMDSwitcherMediaPool * This,
            /* [in] */ unsigned long clipCount,
            /* [out] */ unsigned long *clipMaxFrameCounts);
        
        HRESULT ( STDMETHODCALLTYPE *SetClipMaxFrameCounts )( 
            IBMDSwitcherMediaPool * This,
            /* [in] */ unsigned long clipCount,
            /* [in] */ const unsigned long *clipMaxFrameCounts);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherMediaPool * This,
            /* [in] */ IBMDSwitcherMediaPoolCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherMediaPool * This,
            /* [in] */ IBMDSwitcherMediaPoolCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherMediaPoolVtbl;

    interface IBMDSwitcherMediaPool
    {
        CONST_VTBL struct IBMDSwitcherMediaPoolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMediaPool_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMediaPool_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMediaPool_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMediaPool_GetStills(This,stills)	\
    ( (This)->lpVtbl -> GetStills(This,stills) ) 

#define IBMDSwitcherMediaPool_GetClip(This,clipIndex,clip)	\
    ( (This)->lpVtbl -> GetClip(This,clipIndex,clip) ) 

#define IBMDSwitcherMediaPool_GetClipCount(This,clipCount)	\
    ( (This)->lpVtbl -> GetClipCount(This,clipCount) ) 

#define IBMDSwitcherMediaPool_CreateFrame(This,pixelFormat,width,height,frame)	\
    ( (This)->lpVtbl -> CreateFrame(This,pixelFormat,width,height,frame) ) 

#define IBMDSwitcherMediaPool_CreateAudio(This,sizeBytes,audio)	\
    ( (This)->lpVtbl -> CreateAudio(This,sizeBytes,audio) ) 

#define IBMDSwitcherMediaPool_GetFrameTotalForClips(This,total)	\
    ( (This)->lpVtbl -> GetFrameTotalForClips(This,total) ) 

#define IBMDSwitcherMediaPool_GetClipMaxFrameCounts(This,clipCount,clipMaxFrameCounts)	\
    ( (This)->lpVtbl -> GetClipMaxFrameCounts(This,clipCount,clipMaxFrameCounts) ) 

#define IBMDSwitcherMediaPool_SetClipMaxFrameCounts(This,clipCount,clipMaxFrameCounts)	\
    ( (This)->lpVtbl -> SetClipMaxFrameCounts(This,clipCount,clipMaxFrameCounts) ) 

#define IBMDSwitcherMediaPool_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherMediaPool_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMediaPool_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CBMDSwitcherDiscovery;

#ifdef __cplusplus

class DECLSPEC_UUID("F2DC5149-9599-47E4-84B9-054C78A1A46D")
CBMDSwitcherDiscovery;
#endif
#endif /* __BMDSwitcherAPI_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



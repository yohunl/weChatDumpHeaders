//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class AMRAudioPlayer, CDownloadVoiceMgr, CMainControll, NSString, SPXAudioPlayer, SilkAudioPlayer;

@interface AudioReceiver : MMService <MMService>
{
    AMRAudioPlayer *m_amrplayer;
    SPXAudioPlayer *m_spxplayer;
    SilkAudioPlayer *m_silkPlayer;
    CMainControll *m_mainController;
    CDownloadVoiceMgr *m_download;
}

- (void).cxx_destruct;
- (void)downloadVoiceMessage:(id)arg1;
- (_Bool)isPlaying;
- (_Bool)StopPlayTmpAudio:(unsigned int)arg1;
- (_Bool)StartPlayTmpAudioWithAutoMode:(unsigned int)arg1;
- (_Bool)StartPlayTmpAudioWithEarpieceMode:(unsigned int)arg1;
- (_Bool)StartPlayTmpAudio:(unsigned int)arg1;
- (_Bool)StartPlayTmpAudio:(unsigned int)arg1 forceEarpieceMode:(_Bool)arg2 forceAutoMode:(_Bool)arg3;
- (_Bool)StopPlay:(id)arg1 MesLocalID:(unsigned int)arg2;
- (_Bool)StartPlayWithAutoMode:(id)arg1 MesLocalID:(unsigned int)arg2;
- (_Bool)StartPlayWithEarpieceMode:(id)arg1 MesLocalID:(unsigned int)arg2;
- (_Bool)StartPlay:(id)arg1 MesLocalID:(unsigned int)arg2 Path:(id)arg3;
- (_Bool)StartPlay:(id)arg1 MesLocalID:(unsigned int)arg2;
- (_Bool)StartPlay:(id)arg1 MesLocalID:(unsigned int)arg2 Path:(id)arg3 forceEarpieceMode:(_Bool)arg4 forceAutoMode:(_Bool)arg5;
- (void)dealloc;
- (_Bool)initFacade:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


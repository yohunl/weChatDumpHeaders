//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "SPXAudioRecorderDelegate-Protocol.h"
#import "UploadSearchVoiceMgrDelegate-Protocol.h"

@class NSString, SPXAudioRecorder, UploadSearchVoiceMgr;

@interface VoiceSearchMgr : MMService <SPXAudioRecorderDelegate, MMService, UploadSearchVoiceMgrDelegate>
{
    unsigned int _curSearchId;
    UploadSearchVoiceMgr *_uploadMgr;
    SPXAudioRecorder *_recoder;
}

- (void).cxx_destruct;
- (void)OnNetworkError:(unsigned int)arg1;
- (void)OnLocalFileOperationError;
- (void)OnGetResult:(id)arg1 VoiceId:(unsigned int)arg2;
- (void)OnSPXPart:(id)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4 ForceDelete:(_Bool)arg5;
- (void)OnSPXEndRecording:(id)arg1;
- (void)OnSPXBeginRecording:(id)arg1 ErrNo:(int)arg2;
- (void)OnSPXLevelMeter:(id)arg1 Peak:(float)arg2;
- (_Bool)StopSearch:(unsigned int)arg1;
- (_Bool)StopRecord:(unsigned int)arg1;
- (int)StartSearchSession;
- (int)StartSearchContact;
- (int)StartSearchWithType:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


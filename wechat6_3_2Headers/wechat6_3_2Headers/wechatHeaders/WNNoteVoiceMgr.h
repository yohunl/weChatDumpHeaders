//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IFavAudioPlayerExt-Protocol.h"

@class NSString, WNNoteVoicePlayView, WNNoteVoiceRecordView;
@protocol WNNoteVoicePlayDelegate;

@interface WNNoteVoiceMgr : NSObject <IFavAudioPlayerExt>
{
    WNNoteVoiceRecordView *_voiceRecordView;
    WNNoteVoicePlayView *_voicePlayView;
    NSString *_curAudioPlayLocalEditorId;
    _Bool _playing;
    _Bool _recording;
    id <WNNoteVoicePlayDelegate> _playDelegate;
}

@property(nonatomic) __weak id <WNNoteVoicePlayDelegate> playDelegate; // @synthesize playDelegate=_playDelegate;
@property(readonly, nonatomic) _Bool recording; // @synthesize recording=_recording;
@property(readonly, nonatomic) _Bool playing; // @synthesize playing=_playing;
- (void).cxx_destruct;
- (void)OnAudioPlaying:(id)arg1 Offset:(unsigned int)arg2;
- (void)OnPlayError:(id)arg1;
- (void)OnEndPlay:(id)arg1 isForceStop:(_Bool)arg2;
- (void)OnBeginPlay:(id)arg1;
- (void)stopPlay;
- (id)curPlayId;
- (id)createPlayViewWithLocalId:(id)arg1 LocalPath:(id)arg2 Fmt:(unsigned int)arg3 Len:(int)arg4;
- (void)cancelRecord;
- (void)stopRecord;
- (id)createRecordViewWithObj:(id)arg1 Delegate:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


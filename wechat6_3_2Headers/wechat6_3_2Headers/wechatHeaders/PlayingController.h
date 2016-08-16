//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IAudioReceiverExt-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class CMessageWrap, NSString;
@protocol PlayControllerDelegate;

@interface PlayingController : MMObject <IAudioReceiverExt, UIAlertViewDelegate>
{
    _Bool m_bPlaying;
    unsigned int m_uiMesLocalID;
    CMessageWrap *m_msgWrap;
    id <PlayControllerDelegate> m_delegate;
}

@property(nonatomic) __weak id <PlayControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)Reset;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)PlayVideo:(id)arg1;
- (void)videoPlayFinished:(id)arg1;
- (void)OnEarTip;
- (void)OnBeginPlaying:(unsigned int)arg1 ErrNo:(int)arg2;
- (void)OnEndPlaying:(unsigned int)arg1 isForceStop:(_Bool)arg2;
- (void)OnPlayProcess:(unsigned int)arg1 Process:(unsigned int)arg2;
- (void)StopPlayMessageWithUsrName:(id)arg1;
- (void)StopPlayMessage:(id)arg1;
- (void)StartPlayMessage:(id)arg1;
- (id)getChatName:(id)arg1;
- (_Bool)isPlaying;
- (void)UnRegister;
- (void)Register;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


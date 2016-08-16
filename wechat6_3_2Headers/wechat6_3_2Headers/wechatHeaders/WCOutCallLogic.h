//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "AVAudioPlayerDelegate-Protocol.h"
#import "IPSTNExt-Protocol.h"

@class AVAudioPlayer, NSMutableString, NSString, WCOutRecentCallItem;

@interface WCOutCallLogic : MMObject <IPSTNExt, AVAudioPlayerDelegate>
{
    unsigned long long m_status;
    _Bool m_isSpeaker;
    _Bool m_isMute;
    WCOutRecentCallItem *m_curCallItem;
    int m_recentCallLocalID;
    int m_roomid;
    _Bool mIsAccepted;
    _Bool mIsConnected;
    _Bool mIsOnCalling;
    _Bool mIsPlayingCallSound;
    AVAudioPlayer *_player;
    NSMutableString *_callBackSteam;
}

@property(retain, nonatomic) NSMutableString *callBackSteam; // @synthesize callBackSteam=_callBackSteam;
@property(retain, nonatomic) AVAudioPlayer *player; // @synthesize player=_player;
@property(readonly, nonatomic) _Bool isOnCalling; // @synthesize isOnCalling=mIsOnCalling;
@property(readonly, nonatomic) WCOutRecentCallItem *curCallItem; // @synthesize curCallItem=m_curCallItem;
- (void).cxx_destruct;
- (int)getNetSpeed;
- (void)OnPSTNInviteGap:(int)arg1;
- (void)OnPSTNTalkBrokenError:(id)arg1 ErrNo:(int)arg2;
- (void)OnPSTNNetWorkError:(id)arg1 ErrNo:(int)arg2;
- (void)OnPSTNSyncError:(id)arg1 ErrNo:(int)arg2;
- (void)OnPSTNTimeOut:(id)arg1;
- (void)OnPSTNInterrupt:(id)arg1;
- (void)OnPSTNNotifyError:(id)arg1 ErrNo:(int)arg2 ErrLevel:(int)arg3 ErrMsg:(id)arg4 ErrTitle:(id)arg5;
- (void)OnPSTNInviteError:(id)arg1 ErrNo:(int)arg2 ErrLevel:(int)arg3 ErrMsg:(id)arg4 ErrTitle:(id)arg5;
- (void)OnPSTNError:(id)arg1 ErrNo:(int)arg2 ErrMsg:(id)arg3 ErrTitle:(id)arg4;
- (void)OnPSTNBeginConnect:(id)arg1;
- (void)OnPSTNDataConnected:(id)arg1;
- (void)OnPSTNBeAccepted:(id)arg1;
- (void)OnPSTNBeginTalk:(id)arg1;
- (void)OnPSTNRing:(id)arg1;
- (void)onPSTNCheckNumberResp:(id)arg1;
- (void)OnPSTNCall:(id)arg1 ErrNo:(int)arg2;
- (void)OnPSTNTellMeViewIsExist:(_Bool *)arg1;
- (void)OnPSTNLightInterrupt:(_Bool)arg1;
- (void)OnPSTNCallInterrupt:(id)arg1;
- (void)OnPSTNAutoHangUp:(id)arg1;
- (void)OnPSTNBeHanguped:(id)arg1;
- (void)OnPSTNBeRejected:(id)arg1;
- (void)OnPSTNNoAnswer:(id)arg1;
- (void)handlePSTNErrorMsg:(id)arg1 errorlevel:(unsigned long long)arg2 ErrTitle:(id)arg3 showChargeAlert:(_Bool)arg4;
- (void)handlePSTNErrorCode:(int)arg1 ErrMsg:(id)arg2 ErrTitle:(id)arg3;
- (void)handlePSTNStatus:(unsigned long long)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)stopPlaySound;
- (void)playCallingSound;
- (void)playEndingSound;
- (void)OnCallEnded:(_Bool)arg1;
- (void)beginToTalk;
- (void)prepareCalling;
- (id)GetNeedShowLogWithIsHidePhoneNum:(_Bool)arg1;
- (id)GetNeedShowLog;
- (id)GetCurCallItem;
- (_Bool)pressKeyWhileCallingWithKeyCode:(int)arg1;
- (_Bool)isSpeakerMode;
- (void)setSpeaker:(_Bool)arg1;
- (void)setMute:(_Bool)arg1;
- (void)hangUpCall;
- (void)checkNumber:(id)arg1 PureNum:(id)arg2 LastCountryCode:(id)arg3 DialScece:(unsigned long long)arg4;
- (void)callWCoutContact:(id)arg1 fromViewController:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


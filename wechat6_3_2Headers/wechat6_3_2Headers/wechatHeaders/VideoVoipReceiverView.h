//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VideoVoipView.h"

#import "IRecordPermissionCheckExt-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class MMTimer, NSString, VoipDescriptionButton;

@interface VideoVoipReceiverView : VideoVoipView <UIAlertViewDelegate, IRecordPermissionCheckExt>
{
    _Bool isNeedFormSysMsg;
    _Bool hasAcceptCall;
    _Bool hasHangUp;
    unsigned int m_dotCountIncresement;
    VoipDescriptionButton *m_acceptBtn;
    VoipDescriptionButton *m_hangupBtn;
    VoipDescriptionButton *m_voiceModeButton;
    MMTimer *m_actingTimer;
}

@property(nonatomic) _Bool hasHangUp; // @synthesize hasHangUp;
@property(nonatomic) _Bool hasAcceptCall; // @synthesize hasAcceptCall;
@property(nonatomic) _Bool isNeedFormSysMsg; // @synthesize isNeedFormSysMsg;
@property(nonatomic) unsigned int m_dotCountIncresement; // @synthesize m_dotCountIncresement;
@property(retain, nonatomic) MMTimer *m_actingTimer; // @synthesize m_actingTimer;
@property(retain, nonatomic) VoipDescriptionButton *m_voiceModeButton; // @synthesize m_voiceModeButton;
@property(retain, nonatomic) VoipDescriptionButton *m_hangupBtn; // @synthesize m_hangupBtn;
@property(retain, nonatomic) VoipDescriptionButton *m_acceptBtn; // @synthesize m_acceptBtn;
- (void).cxx_destruct;
- (void)OnRemoteEarModeFor2G;
- (void)OnRemoteEarMode;
- (_Bool)hasVideoVoipTalkingViewClickChangeToAudioMode;
- (void)changeToRemoteEarModeBeforeAnswer;
- (void)changeToAcceptedAnimation;
- (void)OnBeHanguped:(id)arg1;
- (void)OnSyncError:(id)arg1 ErrNo:(int)arg2;
- (void)OnError:(id)arg1 ErrNo:(int)arg2;
- (void)OnTalkBrokenError:(id)arg1 ErrNo:(int)arg2;
- (void)OnNetWorkError:(id)arg1 ErrNo:(int)arg2;
- (void)OnTimeOut:(id)arg1;
- (void)OnAutoHangUp:(id)arg1;
- (void)OnCallInterrupt:(id)arg1;
- (void)OnInterrupt:(id)arg1;
- (void)OnBeginTalk:(id)arg1;
- (void)OnBeginConnect:(id)arg1;
- (void)OnPreConnect:(id)arg1;
- (void)OnAccept:(id)arg1 ErrNo:(int)arg2;
- (void)endCallByCancel;
- (void)endCallAfterDelay:(double)arg1;
- (void)checkLostNotifySync;
- (void)startShowView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkAndShowAlertView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andContact:(id)arg2 isEarMode:(_Bool)arg3 andInitViewMode:(int)arg4;
- (id)init;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)hangup;
- (void)rejectCall;
- (void)ignoreCallAction;
- (void)ignoreCall;
- (void)realAcceptCall;
- (void)acceptCall;
- (void)acceptByVoiceCall;
- (void)updateFooterView;
- (void)asyncStartNetDetect;
- (void)onFromBackgroundToForeground;
- (void)asyncPlaySound;
- (void)asyncAcceptAudio;
- (void)asyncAcceptVideo;
- (void)markLastVoipInfo;
- (_Bool)isCaller;
- (void)layoutVoiceModeButton;
- (void)layoutAcceptButton;
- (void)layoutHangupButton;
- (void)updateStatusLabel;
- (void)autoUpdateMainStatusString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


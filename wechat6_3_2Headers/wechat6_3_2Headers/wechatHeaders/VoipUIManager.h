//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IVOIPExt-Protocol.h"
#import "MMConfigMgrExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMService-Protocol.h"
#import "MultiTalkMainWindowDelegate-Protocol.h"
#import "VideoVoipViewDelegate-Protocol.h"
#import "VoipAlertViewDelegate-Protocol.h"
#import "VoipMinimizeWindowDelegate-Protocol.h"

@class CContact, MMVoipToastWindow, MultiTalkMainWindow, NSString, VideoVoipCallerView, VideoVoipReceiverView, VoipAlertView, VoipMinimizeWindow;

@interface VoipUIManager : MMService <MMKernelExt, MultiTalkMainWindowDelegate, VideoVoipViewDelegate, VoipMinimizeWindowDelegate, MMService, IVOIPExt, VoipAlertViewDelegate, MMConfigMgrExt>
{
    CContact *m_tempContact;
    VoipAlertView *m_voipAlertView;
    VideoVoipCallerView *m_videoVoipCallerViewController;
    VideoVoipReceiverView *m_videoVoipReceiverViewController;
    VoipMinimizeWindow *m_voipMinimizeWindow;
    MMVoipToastWindow *m_voipToastWindow;
    MultiTalkMainWindow *m_mainWindow;
}

+ (_Bool)canForceStartVoiceWithContact:(id)arg1;
+ (_Bool)canStartVoiceWithContact:(id)arg1;
+ (_Bool)canStartVideoWithContact:(id)arg1;
@property(retain, nonatomic) MultiTalkMainWindow *m_mainWindow; // @synthesize m_mainWindow;
@property(retain, nonatomic) MMVoipToastWindow *m_voipToastWindow; // @synthesize m_voipToastWindow;
@property(retain, nonatomic) VoipMinimizeWindow *m_voipMinimizeWindow; // @synthesize m_voipMinimizeWindow;
@property(retain, nonatomic) VideoVoipReceiverView *m_videoVoipReceiverViewController; // @synthesize m_videoVoipReceiverViewController;
@property(retain, nonatomic) VideoVoipCallerView *m_videoVoipCallerViewController; // @synthesize m_videoVoipCallerViewController;
@property(retain, nonatomic) VoipAlertView *m_voipAlertView; // @synthesize m_voipAlertView;
@property(retain, nonatomic) CContact *m_tempContact; // @synthesize m_tempContact;
- (void).cxx_destruct;
- (void)onPreQuit;
- (void)onMMDynamicConfigUpdated;
- (void)OnTellMeViewIsExist:(_Bool *)arg1;
- (void)SendInvite:(int)arg1;
- (void)Cancel;
- (struct CGRect)onMultiTalkMainWindowRequestMinimizeFrame;
- (void)onMultiTalkMainWindowExtendFromCollapseAnimationDidEnd;
- (void)onMultiTalkMainWindowExtendFromCollapseAnimationWillStart;
- (void)onMultiTalkMainWindowCollapseAnimationWillStart;
- (void)onMultiTalkMainWindowCollapseAnimationDidEnd;
- (void)onMultiTalkMainWindowQuitAnimationDidEnd;
- (void)onMultiTalkMainWindowQuitAnimationWillStart;
- (void)onMultiTalkMainWindowExtendAnimationDidEnd;
- (_Bool)onVideoVoipViewRequestMinimizeStatus;
- (void)onVideoVoipViewChangeToMinimizeMode;
- (void)onVideoVoipViewClose;
- (void)onVoipMinimizeWindowClicked;
- (void)switchToSpeakPhoneMode:(_Bool)arg1;
- (void)clearCurrentString;
- (_Bool)isUsingEarDevice;
- (void)changeToMinimizeToast;
- (void)changeToAudioToast;
- (void)changeToVideoToast;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2;
- (_Bool)isMinimizeMode;
- (void)showCannotStartVoipTwice;
- (id)getConflictWording;
- (void)showConflictWording;
- (void)recoverVoipAudioMode;
- (_Bool)isVoipSpeakerMode;
- (_Bool)isVideoVoipWorking;
- (_Bool)isVoipWorking;
- (_Bool)isViewEnding;
- (_Bool)showVideoEntranceInMainFrame;
- (_Bool)closeViewWith:(id)arg1;
- (void)openVoipViewWithContact:(id)arg1 isCaller:(_Bool)arg2 andMsgWrap:(id)arg3;
- (void)hangupForNotSupportVoiceVoip;
- (_Bool)isTheSameContactWithCurrentVoip:(id)arg1;
- (void)openVideoVoipViewWithContact:(id)arg1 isCaller:(_Bool)arg2 andMsgWrap:(id)arg3 isEarMode:(_Bool)arg4;
- (_Bool)canStartVoip;
- (_Bool)canOpenVoipByTimeLogic:(id)arg1;
- (void)onServiceReloadData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

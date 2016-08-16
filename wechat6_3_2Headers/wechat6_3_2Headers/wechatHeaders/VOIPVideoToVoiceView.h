//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMTipsViewControllerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "VoiceViewSpeakerModeCheckExt-Protocol.h"
#import "Voip480ScreenExt-Protocol.h"
#import "VoipUIManagerExt-Protocol.h"
#import "WCAudioSessionExt-Protocol.h"

@class CContact, MMHDHeadImageView, MMHeadImageView, MMTimerLabel, NSString, UIImageView, UILabel, UIView, VoipDescriptionButton;
@protocol VOIPVideoToVoiceViewDelegate;

@interface VOIPVideoToVoiceView : MMUIView <VoipUIManagerExt, UIAlertViewDelegate, VoiceViewSpeakerModeCheckExt, Voip480ScreenExt, MMTipsViewControllerDelegate, WCAudioSessionExt>
{
    _Bool m_isOperating;
    CContact *m_contact;
    UIImageView *m_backgroundView;
    UILabel *m_remoteNameLabel;
    VoipDescriptionButton *m_hangupButton;
    VoipDescriptionButton *m_micButton;
    VoipDescriptionButton *m_speakerButton;
    MMHDHeadImageView *m_remoteHeadImageView;
    MMTimerLabel *m_timer;
    UIView *m_blurView;
    MMHeadImageView *m_blurHeadImageView;
    id <VOIPVideoToVoiceViewDelegate> m_delegate;
}

@property(nonatomic) _Bool m_isOperating; // @synthesize m_isOperating;
@property(nonatomic) __weak id <VOIPVideoToVoiceViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) MMHeadImageView *m_blurHeadImageView; // @synthesize m_blurHeadImageView;
@property(retain, nonatomic) UIView *m_blurView; // @synthesize m_blurView;
@property(retain, nonatomic) MMTimerLabel *m_timer; // @synthesize m_timer;
@property(retain, nonatomic) MMHDHeadImageView *m_remoteHeadImageView; // @synthesize m_remoteHeadImageView;
@property(retain, nonatomic) VoipDescriptionButton *m_speakerButton; // @synthesize m_speakerButton;
@property(retain, nonatomic) VoipDescriptionButton *m_micButton; // @synthesize m_micButton;
@property(retain, nonatomic) VoipDescriptionButton *m_hangupButton; // @synthesize m_hangupButton;
@property(retain, nonatomic) UILabel *m_remoteNameLabel; // @synthesize m_remoteNameLabel;
@property(retain, nonatomic) UIImageView *m_backgroundView; // @synthesize m_backgroundView;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (void).cxx_destruct;
- (void)onWCAudioSessionOverride;
- (void)voipToastMarginBottomOffsetFor480Screen:(double *)arg1;
- (void)getVoiceViewSpeakerMode:(_Bool *)arg1;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)onVoipAudioDevicePlugin;
- (void)onVoipAudioDeviceUnPlugin;
- (void)onVoipChangeToEarMode;
- (void)onVoipChangeToSpeakerMode;
- (void)startOperate:(_Bool)arg1;
- (void)startTimer;
- (void)updateMicButton;
- (void)updateSpeakerButton;
- (void)onClickHandup;
- (void)layoutHangupButton;
- (void)layoutMicButton;
- (void)layoutSpeakerButton;
- (void)layoutNameView;
- (void)layoutHeadView;
- (void)layoutBlurView;
- (void)onSmallSwitchButtonClick;
- (void)initMinimizeButton;
- (void)layoutBackground;
- (void)layoutTimerView;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 withContact:(id)arg2 withDelegate:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


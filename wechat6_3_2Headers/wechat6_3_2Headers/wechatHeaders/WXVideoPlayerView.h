//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "IMsgExt-Protocol.h"
#import "IVOIPUILogicMgrExt-Protocol.h"
#import "SightViewDelegate-Protocol.h"

@class CMessageWrap, MMTimer, NSString, NSURL, SightView, UIButton, UILabel;
@protocol WXVideoPlayerViewDelegate, WXVideoPlayerViewTouchDelegate;

@interface WXVideoPlayerView : MMUIView <SightViewDelegate, IVOIPUILogicMgrExt, IMsgExt>
{
    unsigned long long m_ui64PlayStartTime;
    unsigned long long _sightLegalityType;
    _Bool _mayBeIllegalAD;
    _Bool m_shouldRestartPlay;
    _Bool m_videoExpired;
    _Bool _isAnimating;
    NSURL *m_url;
    CMessageWrap *m_msgWrap;
    NSString *m_videoPath;
    MMTimer *m_updateTimer;
    UILabel *m_percentageLabel;
    UILabel *m_quitTips;
    UIButton *m_voiceModeButton;
    id <WXVideoPlayerViewDelegate> m_delegate;
    id <WXVideoPlayerViewTouchDelegate> m_touchDelegate;
    unsigned long long m_fullPlayTimes;
    UIButton *m_playAttachVideoButton;
    SightView *_sightView;
}

@property(retain, nonatomic) SightView *sightView; // @synthesize sightView=_sightView;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) UIButton *m_playAttachVideoButton; // @synthesize m_playAttachVideoButton;
@property(nonatomic) unsigned long long m_fullPlayTimes; // @synthesize m_fullPlayTimes;
@property(nonatomic) __weak id <WXVideoPlayerViewTouchDelegate> m_touchDelegate; // @synthesize m_touchDelegate;
@property(nonatomic) __weak id <WXVideoPlayerViewDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool m_videoExpired; // @synthesize m_videoExpired;
@property(nonatomic) _Bool m_shouldRestartPlay; // @synthesize m_shouldRestartPlay;
@property(retain, nonatomic) UIButton *m_voiceModeButton; // @synthesize m_voiceModeButton;
@property(retain, nonatomic) UILabel *m_quitTips; // @synthesize m_quitTips;
@property(retain, nonatomic) UILabel *m_percentageLabel; // @synthesize m_percentageLabel;
@property(retain, nonatomic) MMTimer *m_updateTimer; // @synthesize m_updateTimer;
@property(retain, nonatomic) NSString *m_videoPath; // @synthesize m_videoPath;
@property(retain, nonatomic) CMessageWrap *m_msgWrap; // @synthesize m_msgWrap;
@property(retain, nonatomic) NSURL *m_url; // @synthesize m_url;
- (void).cxx_destruct;
- (void)setLegal:(_Bool)arg1;
- (void)checkLegalityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onVideoVoipViewDisappear;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (_Bool)isNeedShowPlayWithAudioButton;
- (_Bool)isNeedPlayFromEveryDisplay;
- (void)setPlayAttachVideoButtonFrameWithPlayerHeight:(double)arg1;
- (void)layoutSubviews;
- (_Bool)onPlayEnd:(_Bool)arg1;
- (_Bool)sightView:(id)arg1 playbackDidReadEnd:(_Bool)arg2;
- (void)onClickIconViewOfSightView:(id)arg1;
- (void)OnMsgDownloadVideoExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnUpdateVideoStatus:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)handleDownloadFail;
- (void)updateProgress:(unsigned int)arg1;
- (void)hideProgress;
- (void)InternalUpdateVideo:(id)arg1;
- (void)clearPlayer;
- (void)seekTo:(unsigned int)arg1;
- (void)pause;
- (void)stopPlay;
- (void)hideQuitTips;
- (_Bool)startPlay;
- (void)updateTimerLabel;
- (void)onLongPress:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (_Bool)canPlayVideo;
- (_Bool)shouldDownloadVideo;
- (void)initView;
- (void)onClickDetailButton;
- (void)onClickPlayAttachVideoBtn;
- (void)genVideoPlayStat;
- (void)resetPlayerView;
- (id)initWithMsgWrap:(id)arg1 VideoPath:(id)arg2 Frame:(struct CGRect)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (void)resetViewPosition;
- (unsigned long long)totalTime;
- (void)setTouchDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)whenGoingToResign;
- (void)whenDidActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


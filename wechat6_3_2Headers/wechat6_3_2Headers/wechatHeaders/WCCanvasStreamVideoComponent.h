//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCCanvasComponent.h"

#import "WCNetworkMediaCoreDelegate-Protocol.h"

@class MMProgressViewEx, MMTimer, MMUILabel, NSString, UIButton, UIView, WCNetworkMediaCore, WCNetworkMediaSlider;

@interface WCCanvasStreamVideoComponent : WCCanvasComponent <WCNetworkMediaCoreDelegate>
{
    MMProgressViewEx *_loadingView;
    MMUILabel *_durationLabel;
    UIView *_bottomView;
    MMUILabel *_currentLabel;
    WCNetworkMediaSlider *_sliderView;
    UIButton *_playButton;
    UIButton *_detailButton;
    MMTimer *_timer;
    WCNetworkMediaCore *_mediaCore;
    struct CGSize _videoSize;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) WCNetworkMediaCore *mediaCore; // @synthesize mediaCore=_mediaCore;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) WCNetworkMediaSlider *sliderView; // @synthesize sliderView=_sliderView;
@property(retain, nonatomic) MMUILabel *currentLabel; // @synthesize currentLabel=_currentLabel;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) MMUILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) MMProgressViewEx *loadingView; // @synthesize loadingView=_loadingView;
- (void).cxx_destruct;
- (void)onMediaCore:(id)arg1 VideoSizeUpdate:(struct CGSize)arg2;
- (void)onMediaCore:(id)arg1 DarutionUpdate:(double)arg2;
- (void)onMediaCore:(id)arg1 CacheDarutionChange:(double)arg2;
- (void)onMediaCore:(id)arg1 StateChange:(int)arg2;
- (void)onShowDetail:(id)arg1;
- (void)onPlayClick:(id)arg1;
- (void)onPlaySliderChange:(id)arg1;
- (void)onSliderChange:(id)arg1;
- (void)retryToLoadVideo;
- (id)stringFromTimeInterval:(double)arg1;
- (void)updateSubviewsFrame:(long long)arg1;
- (void)updateVideoFrame:(long long)arg1;
- (void)refreshCurrentTime;
- (void)willRotateToOrientation:(long long)arg1 duration:(double)arg2;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentDidFullyApperaInMainScreen:(_Bool)arg1;
- (void)componentWillApperaInMainScreen:(_Bool)arg1;
- (void)configureWithCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCVideoRender.h"

@class MMTimer, OpenglRenderView, UIView, VoipOpenglesContext;

@interface WCVideoOpenglRender : WCVideoRender
{
    _Bool _m_frontCamera;
    unsigned int _m_frontFpsCount;
    unsigned int _m_backFpsCount;
    VoipOpenglesContext *m_backOpenglesContext;
    VoipOpenglesContext *m_frontOpenglesContext;
    OpenglRenderView *m_backRenderView;
    OpenglRenderView *m_frontRenderView;
    UIView *m_renderView;
    MMTimer *_m_fpsTimer;
}

@property(nonatomic) _Bool m_frontCamera; // @synthesize m_frontCamera=_m_frontCamera;
@property(nonatomic) unsigned int m_backFpsCount; // @synthesize m_backFpsCount=_m_backFpsCount;
@property(nonatomic) unsigned int m_frontFpsCount; // @synthesize m_frontFpsCount=_m_frontFpsCount;
@property(retain, nonatomic) MMTimer *m_fpsTimer; // @synthesize m_fpsTimer=_m_fpsTimer;
@property(retain, nonatomic) UIView *m_renderView; // @synthesize m_renderView;
@property(retain, nonatomic) OpenglRenderView *m_frontRenderView; // @synthesize m_frontRenderView;
@property(retain, nonatomic) OpenglRenderView *m_backRenderView; // @synthesize m_backRenderView;
@property(retain, nonatomic) VoipOpenglesContext *m_frontOpenglesContext; // @synthesize m_frontOpenglesContext;
@property(retain, nonatomic) VoipOpenglesContext *m_backOpenglesContext; // @synthesize m_backOpenglesContext;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupELGS;
- (void)whenBecomeActive;
- (id)getRenderView;
- (void)changeFrame:(struct CGRect)arg1;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)fpsTimerCheck;
- (void)updateViewWithFrontCamera;
- (void)cameraFrontMode:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


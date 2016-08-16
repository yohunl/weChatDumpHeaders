//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCCanvasComponent.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "WCCanvasFullScreenImageScrollViewDelegate-Protocol.h"
#import "scrollViewDelegate-Protocol.h"

@class MMScrollView, NSMutableArray, NSString, UIPageControl, UIView;

@interface WCCanvasTurnImageComponent : WCCanvasComponent <UIScrollViewDelegate, scrollViewDelegate, WCCanvasFullScreenImageScrollViewDelegate>
{
    _Bool _m_isAnimating;
    _Bool _m_hasScroll;
    unsigned int _m_iCurIndex;
    UIView *_m_blackMask;
    MMScrollView *_m_scrollView;
    UIPageControl *_m_pageCtrl;
    NSMutableArray *_m_arrImage;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
@property(retain, nonatomic) NSMutableArray *m_arrImage; // @synthesize m_arrImage=_m_arrImage;
@property(nonatomic) _Bool m_hasScroll; // @synthesize m_hasScroll=_m_hasScroll;
@property(nonatomic) unsigned int m_iCurIndex; // @synthesize m_iCurIndex=_m_iCurIndex;
@property(nonatomic) _Bool m_isAnimating; // @synthesize m_isAnimating=_m_isAnimating;
@property(retain, nonatomic) UIPageControl *m_pageCtrl; // @synthesize m_pageCtrl=_m_pageCtrl;
@property(retain, nonatomic) MMScrollView *m_scrollView; // @synthesize m_scrollView=_m_scrollView;
@property(retain, nonatomic) UIView *m_blackMask; // @synthesize m_blackMask=_m_blackMask;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)willRotateToOrientation:(long long)arg1 duration:(double)arg2;
- (void)configureWithCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (void)animationShowWithIndex:(unsigned long long)arg1;
- (void)resetScrollView;
- (void)clearStatus;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


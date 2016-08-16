//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MMUIScrollView, NSString, UIPanGestureRecognizer;
@protocol WCMallAcrivityLoopPageScrollViewDataSourceDelegate;

@interface WCMallAcrivityLoopPageScrollView : MMUIView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    MMUIScrollView *m_scrollView;
    id <WCMallAcrivityLoopPageScrollViewDataSourceDelegate> m_delegate;
    int m_curPageNum;
    UIPanGestureRecognizer *m_panGesture;
}

@property(retain, nonatomic) UIPanGestureRecognizer *m_panGesture; // @synthesize m_panGesture;
@property(nonatomic) int m_curPageNum; // @synthesize m_curPageNum;
@property(nonatomic) __weak id <WCMallAcrivityLoopPageScrollViewDataSourceDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) MMUIScrollView *m_scrollView; // @synthesize m_scrollView;
- (void).cxx_destruct;
- (void)setCurrentPage:(unsigned int)arg1;
- (int)getCurrentPageNumber;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (int)getRealPageNum:(int)arg1;
- (void)reloadData;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 withDelegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


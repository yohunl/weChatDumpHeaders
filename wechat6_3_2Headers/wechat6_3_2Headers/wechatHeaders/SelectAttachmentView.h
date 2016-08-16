//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "scrollViewDelegate-Protocol.h"

@class MMScrollView, NSMutableArray, NSString, UIImageView, UIPageControl;
@protocol SelectAttachmentViewDataSource, SelectAttachmentViewDelegate;

@interface SelectAttachmentView : MMUIView <UIScrollViewDelegate, scrollViewDelegate>
{
    id <SelectAttachmentViewDelegate> _delegate;
    id <SelectAttachmentViewDataSource> _dataSource;
    MMScrollView *_scrollView;
    UIPageControl *_pageController;
    UIImageView *m_tipsView;
    unsigned long long _iCurSelection;
    _Bool bPageControlUsed;
    unsigned long long iCount;
    unsigned long long iRow;
    unsigned long long iCol;
    unsigned long long iPage;
    unsigned long long iTouchBeganTime;
    _Bool isLayout;
    _Bool bIsLongPressedCalled;
    NSMutableArray *m_arrAttachmentButton;
}

@property(nonatomic) __weak id <SelectAttachmentViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SelectAttachmentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setVoiceOverAccessibilityElements:(_Bool)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)appIDAtIndex:(unsigned int)arg1;
- (void)touchesCancelled_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onLongPress:(id)arg1;
- (void)onPageControllerChangePage:(id)arg1;
- (void)resetContainerViewOffset;
- (void)resetView;
- (void)layoutSubviews;
- (struct CGRect)calculateEmoticonViewFrameAtIndex:(unsigned int)arg1 forViewWidth:(double)arg2;
- (double)getContentMarginCurOri;
- (unsigned long long)calculateEmoticonOrder:(struct CGPoint)arg1;
- (_Bool)pointInScrollView:(struct CGPoint)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


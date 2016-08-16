//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IVOIPUILogicMgrExt-Protocol.h"
#import "MMExposeViewControllerDelegate-Protocol.h"
#import "SessionSelectControllerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WCImageFullScreenViewContainerDelegateForHBV4-Protocol.h"
#import "scrollViewDelegate-Protocol.h"

@class MMAnimationTipView, MMScrollView, MMUIWindow, NSArray, NSMutableArray, NSString, UIPageControl, UIView;
@protocol WCImageFullScreenViewControllerDelegateV4;

@interface WCImageFullScreenViewControllerForHBV4 : MMUIViewController <UIScrollViewDelegate, scrollViewDelegate, WCImageFullScreenViewContainerDelegateForHBV4, IVOIPUILogicMgrExt, SessionSelectControllerDelegate, MMExposeViewControllerDelegate, UIAlertViewDelegate>
{
    UIView *m_fakeScreenView;
    struct CGRect m_originImageRectInScreen;
    _Bool m_isAnimating;
    MMScrollView *m_scrollView;
    UIPageControl *m_pageCtrl;
    UIView *m_blackMask;
    NSArray *m_arrMediaDataWrap;
    NSArray *m_arrMediaData;
    NSMutableArray *m_arrImage;
    unsigned int m_iCurIndex;
    _Bool m_hasScroll;
    long long m_lastDeviceOrientation;
    _Bool m_isAnimationShowing;
    _Bool m_isRotating;
    _Bool m_forbidPreloadImg;
    MMUIWindow *m_fullScreenWindow;
    NSString *m_visibleTitle;
    MMAnimationTipView *_tipView;
    id <WCImageFullScreenViewControllerDelegateV4> m_delegate;
}

@property(nonatomic) __weak id <WCImageFullScreenViewControllerDelegateV4> m_delegate; // @synthesize m_delegate;
@property(nonatomic) unsigned int m_iCurIndex; // @synthesize m_iCurIndex;
- (void).cxx_destruct;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)touchesEnded_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)onPushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)onGetViewController;
- (void)onExposeWithDataItem:(id)arg1;
- (void)onLongPressedWithMediaItem:(id)arg1;
- (void)captureScreen;
- (void)animationHideWithRotate;
- (void)onAnimateFadeOut;
- (void)onContainerAnimationHideStop;
- (void)onContainerAnimationHideStart;
- (void)onContainerAnimationShowStop;
- (void)onContainerAnimationShowStart;
- (void)animationHideStop;
- (_Bool)shouldHideContainerOnRotate;
- (_Bool)isContainerVisible:(id)arg1;
- (void)onDetailViewReturn;
- (void)onExposeComplete;
- (void)onExposeCancel;
- (void)stopImageLoading;
- (void)startImageLoadingBlocked;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showErrorTip:(id)arg1;
- (void)cancelCaptureFakeWindow;
- (void)captureFakeWindow;
- (void)showBarButton:(id)arg1;
- (void)hiddenBarButton:(id)arg1;
- (id)getBarButton:(id)arg1;
- (void)captureFakeScreen;
- (void)showNavigationBar;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (id)getVisibleViewController;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)downloadImage;
- (void)animationShowWithMediaDataArray:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3;
- (void)animationShowWithHint:(id)arg1;
- (void)animationShowWithMediaDataArray:(id)arg1 mediaDataWrapArray:(id)arg2 originView:(id)arg3 index:(unsigned int)arg4;
- (void)windowNeed2Hide;
- (void)windowNeed2Show;
- (void)resetScrollView;
- (void)clearStatus;
- (void)viewDidLayoutSubviews;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldRotateToInterfaceOrientation:(long long)arg1;
- (_Bool)useTransparentNavibar;
- (void)onTopBarFrameChanged;
- (void)dealloc;
- (id)getDataItem;
- (void)showTipView:(id)arg1;
- (void)onGreetingTipBtnClicked;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


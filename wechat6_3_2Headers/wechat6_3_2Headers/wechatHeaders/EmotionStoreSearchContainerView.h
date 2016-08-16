//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "UIScrollViewDelegate-Protocol.h"

@class MMUIButton, MMUISearchBar, NSMutableArray, NSString, StoreEmotionSearchJSLogic, UIColor, UIImageView, UIScreenEdgePanGestureRecognizer, UIView, UIWebView;

@interface EmotionStoreSearchContainerView : MMUIView <UIScrollViewDelegate>
{
    NSMutableArray *m_logicStack;
    MMUISearchBar *m_originSearchBar;
    UIImageView *m_searchBarWrap;
    MMUIButton *m_backButton;
    MMUISearchBar *m_fakeSearchBar;
    UIScreenEdgePanGestureRecognizer *m_panGesture;
    _Bool m_hasMoving;
    double m_moveStartOffset;
    double m_moveCurOffset;
    UIWebView *m_frontestView;
    UIWebView *m_bottomView;
    UIView *m_bottomViewShadow;
    UIColor *_webViewBGColor;
}

@property(retain, nonatomic) UIColor *webViewBGColor; // @synthesize webViewBGColor=_webViewBGColor;
- (void).cxx_destruct;
- (void)updateFrontestViewPosition;
- (void)moveFrontestViewToRight;
- (void)cancelMoveFrontestView;
- (void)handlePanGesture:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)onBackBtnClick;
- (void)showFakeSearchBarAnimate;
- (void)showFakeSearchBarWithBackButton;
- (void)configFakeSearchBarWithBackButton;
- (void)keyboardDidHide:(id)arg1;
- (void)hideKeyboard;
- (void)enableButton:(id)arg1;
- (void)removeLastSearchJSLogic;
- (void)cancelSearch;
@property(readonly, nonatomic) StoreEmotionSearchJSLogic *lastSearchJSLogic;
- (void)addSearchJSLogic:(id)arg1;
- (id)initWithUISearchBar:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


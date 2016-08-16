//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol TipsViewDelegate;

@interface TipsView : UIView
{
    id <TipsViewDelegate> _delegate;
    id _oUsrData;
    id _usrData;
}

+ (id)showSelectContactTipWithDelegate:(id)arg1 ParentView:(id)arg2 showTip:(id)arg3 paddingTop:(double)arg4;
+ (id)showWCDeviceTipsWithDelegate:(id)arg1 ParentView:(id)arg2 TextContent:(id)arg3 isError:(_Bool)arg4;
+ (id)showSecurityBannerTipWithDelegate:(id)arg1 displayWord:(id)arg2;
+ (id)showChatRecommandFriendTipWithDelegate:(id)arg1 user:(id)arg2 displayName:(id)arg3;
+ (id)showChatAddFriendTipWithDelegate:(id)arg1 user:(id)arg2;
+ (void)showWebviewDangerousTips:(id)arg1;
+ (id)showTalkRoomTips:(id)arg1 withDelegate:(id)arg2;
+ (void)showNearEarTips:(id)arg1;
+ (void)showMsgShieldedTipsForTempChat:(id)arg1;
+ (void)showAutoSaveTips:(id)arg1;
+ (void)showLoudModeTips:(id)arg1;
+ (void)showEarModeTips:(id)arg1;
+ (void)showVolumeTips:(id)arg1;
+ (void)showEarBackTips:(id)arg1;
+ (void)showEarTips:(id)arg1;
+ (id)showChatRoomStatusTips:(id)arg1 text:(id)arg2 action:(id)arg3 delegate:(id)arg4;
@property(retain, nonatomic) id usrData; // @synthesize usrData=_usrData;
@property(nonatomic) __weak id <TipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setFriendName:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)performExposeAction;
- (void)performIconAction;
- (void)performAction;
- (void)performBgAction;
- (void)hideTipsView;
- (void)closeTipsView;
- (void)showUndismissTipsView:(double)arg1 withAction:(id)arg2;
- (void)showTipsView:(double)arg1 withAnimationTimes:(id)arg2 AnimationValues:(id)arg3;
- (_Bool)isShowingTip;
- (void)showTipsViewForever;
- (void)showTipsView:(double)arg1;
- (void)alignTipsTitle;
- (void)setArrow:(_Bool)arg1;
- (void)setTipsTitle:(id)arg1;
- (void)setTipsButton:(_Bool)arg1;
- (void)setTipsIconVerticalAlign:(id)arg1;
- (void)setTipsIcon:(id)arg1;
- (void)didMoveToSuperview;
- (void)initViewWithArrowType:(id)arg1 user:(id)arg2;
- (void)initViewWithButtonType:(id)arg1 btnText:(id)arg2 user:(id)arg3;
- (void)initSecurityBannerViewType:(id)arg1;
- (void)initViewUndismissType;
- (void)initViewNormalType;
- (id)initForSecurityBanner:(id)arg1;
- (id)initForRecommandFriend:(id)arg1 displayName:(id)arg2;
- (id)initForAddFriend:(id)arg1;
- (id)initWithMsgShieldType;
- (id)initWithUndismissType;
- (id)init;

@end

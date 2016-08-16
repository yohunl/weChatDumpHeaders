//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IMusicPlayerExt-Protocol.h"
#import "MMMusicPageViewDelegate-Protocol.h"
#import "MMScrollActionSheetDelegate-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "SendAppMsgHandleDelegate-Protocol.h"
#import "ShakeCheckerDelegate-Protocol.h"
#import "ShareUploadTaskConfirmLogicHelperDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class CShakeChecker, MMAnimationTipView, MMMusicInfo, MMMusicPageView, MMMusicPlayerModeTipView, MMScrollActionSheet, MMScrollView, MMTipsViewController, NSMutableArray, NSString, SendAppMsgHandler, UIButton, UIImageView;

@interface MMMultipleMusicViewController : MMUIViewController <WCActionSheetDelegate, ShareUploadTaskConfirmLogicHelperDelegate, SendAppMsgHandleDelegate, UIScrollViewDelegate, MMScrollActionSheetDelegate, MMMusicPageViewDelegate, ShakeCheckerDelegate, IMusicPlayerExt, MMTipsViewControllerDelegate>
{
    MMScrollView *_musicPageScrollView;
    MMMusicPageView *_leftPageView;
    MMMusicPageView *_centerPageView;
    MMMusicPageView *_rightPageView;
    NSMutableArray *_musicInfoArray;
    MMMusicInfo *_curMusicInfo;
    int _numberOfPages;
    unsigned long long _currentPageIndex;
    SendAppMsgHandler *_sendAppMsgHandler;
    _Bool _isSingleLyricPage;
    float _offset;
    UIImageView *_bottomView;
    UIButton *_playMusicButton;
    MMAnimationTipView *_tipView;
    MMMusicPlayerModeTipView *_transModeTipView;
    int _pushedFromType;
    _Bool _isFromShaking;
    MMScrollActionSheet *_scrollActionSheet;
    CShakeChecker *_shakeChecker;
    _Bool _isOnShakeCheck;
    unsigned long long _beginShakeTime;
    unsigned long long _endShakeTime;
    unsigned long long _startEntranceTime;
    MMTipsViewController *_easterEggTipView;
    MMMusicPlayerModeTipView *_justOneSongTipView;
    _Bool _bLayoutScrollView;
    int _playMode;
}

@property(nonatomic) int playMode; // @synthesize playMode=_playMode;
@property(nonatomic) _Bool isFromShaking; // @synthesize isFromShaking=_isFromShaking;
- (void).cxx_destruct;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)playSoundByAQAudioPlayer:(id)arg1 type:(id)arg2;
- (void)playShakeSound;
- (id)getEasterEggcontentTip;
- (void)showEasterEgg;
- (void)transPlayMode;
- (void)startShakeCheck;
- (void)OnShake;
- (void)onStatusBarHiddenChanged;
- (void)layoutMusicPageView;
- (void)layoutScrollView;
- (void)layoutMusicPlayBtn;
- (void)layoutTipView;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)onBack2FirstPage;
- (void)onShowSecondPage;
- (void)onFollowArrayUpToShowSecondPage;
- (void)updateNavBarTintColorByColor:(id)arg1;
- (void)updateNavBarByColor:(id)arg1;
- (void)onUpdateBottomBtnColor:(id)arg1;
- (void)OnSendAppMsgOK;
- (void)updateCurMusicInfo;
- (void)updatePlayBtn;
- (void)setPlayMusicButtonImage:(_Bool)arg1;
- (id)getMessageWrap:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (id)getUpLoadTask:(id)arg1;
- (id)getCoverImageData;
- (void)OnUpdateDuarationOnForeGround;
- (void)onPlayPreviousMusic;
- (void)onPlayNextMusic;
- (void)onMusicPlayStatusChanged;
- (void)onLyricsChanged:(id)arg1 Lyrics:(id)arg2;
- (void)OnGetSongAlbumUrl:(id)arg1 AlbumUrl:(id)arg2;
- (void)cancelSetShakePage;
- (void)updateMusicScrollView:(_Bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onSwipeScrollView;
- (void)addGestureRecognizers;
- (void)onShowCommonMore:(id)arg1;
- (void)onPlayMusicBtnClicked;
- (void)onMinimizeMusicPlayer;
- (void)initMusicPlayBtn;
- (void)setMusicPageDelegate;
- (void)tileMusicPages;
- (void)initScrollView;
- (void)initNavigationItem;
- (void)initSelfView;
- (void)updateButtomBtnColor:(id)arg1;
- (void)initView;
- (void)userDidTakeScreenshot:(id)arg1;
- (void)dealloc;
- (_Bool)useTransparentNavibar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)beginPlayCurMusic;
- (void)viewWillBePresented:(_Bool)arg1;
- (_Bool)shouldShowSearchPlayAllTip;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)updateLogEntranceType;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned int)getSceneByPushFromType:(int)arg1;
- (void)setPushedFromType:(int)arg1;
- (void)commonInit;
- (unsigned long long)indexOfCurrentPage;
- (void)initPageInfo;
- (id)initFromBanner;
- (id)initWithMusicInfo:(id)arg1 withMusicListSource:(int)arg2 withOffset:(float)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

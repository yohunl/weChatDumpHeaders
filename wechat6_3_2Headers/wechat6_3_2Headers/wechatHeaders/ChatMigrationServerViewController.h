//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CNetworkStatusExt-Protocol.h"
#import "ChatMigrationBackupNotificationExt-Protocol.h"
#import "ChatMigrationServerLogicDelegate-Protocol.h"
#import "IdleTimerUtilExt-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class ChatMigrationServerLogic, NSString, UIActivityIndicatorView, UIImageView, UILabel, UIScrollView, UIView;

@interface ChatMigrationServerViewController : MMUIViewController <UIAlertViewDelegate, ChatMigrationServerLogicDelegate, ChatMigrationBackupNotificationExt, IdleTimerUtilExt, CNetworkStatusExt>
{
    id kickOutLogicObj;
    SEL kickOutSel;
    ChatMigrationServerLogic *m_CMServerLogic;
    UIScrollView *m_ScollView;
    UIView *m_WhiteBgView;
    UILabel *m_TitleTipsLabel;
    UIView *m_TitleTipsDetailView;
    UILabel *m_FooterTipsLabel;
    UIImageView *m_QRCodeImg;
    UIActivityIndicatorView *m_QRCLoadingView;
    UIActivityIndicatorView *m_LoadingView;
    UILabel *m_StatusTipsLabel;
    UILabel *m_NewQRCodeViewLabel;
    UIView *m_IconView;
    UIView *m_WaitDataSizeHeaderView;
    UIView *m_WaitDataSizeFooterView;
    UIView *m_TransferHeaderView;
    UIView *m_TransferFooterView;
    _Bool bIsExitView;
    _Bool bIsTransferFinished;
    int iStep;
    unsigned int uiSurplusSize;
    unsigned int uiCurSpeed;
    NSString *m_WifiName;
    int iTransferErrorCode;
    _Bool bIsShowNoWifiAlert;
    _Bool bIsShowDisconnect;
    _Bool bIsNetworkAble;
    int m_retryGetQRCodeTimes;
}

- (void).cxx_destruct;
- (void)onSimCardNetTypeChange;
- (void)dealWithDisconnetOrNetworkChange;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onIdleTimerUtilVoipQuit;
- (void)onGetBackupPkgProgress:(unsigned long long)arg1 andReadySize:(unsigned long long)arg2;
- (void)onTransferFinish;
- (void)onTransferSpeed:(float)arg1;
- (void)onTransferProgress:(unsigned int)arg1 processedSize:(unsigned int)arg2;
- (void)onTransferStart;
- (void)onConfirmStart;
- (void)onTransferError:(int)arg1;
- (void)onDisconnect;
- (void)onConnected;
- (void)onGetQRCodeImgOffline:(id)arg1;
- (void)onGetQRCodeImg:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)DidEnterBackground:(id)arg1;
- (void)makeWaitScanStage;
- (void)makeTransferStage;
- (void)makeWaitComputeDataSizeStage;
- (void)makeIconView;
- (void)fixStatusLabelFrame;
- (void)fixFooterLabelFrame;
- (void)fixTitleLabelFrame;
- (void)makeTitleDetailView;
- (void)makeQRCodeStage;
- (void)makeNewQRCodeViewLabelNetworkFailureTips;
- (void)makeNewQRCodeViewLabelGetQRCodeFailureTips;
- (void)makeNewQRCodeStage;
- (void)makeScrollView;
- (void)startNetWorkingService;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)refreshQRCode;
- (void)onShowDebugReportViewController;
- (void)onBackBtnDone:(id)arg1;
- (void)RealDismissMyself;
- (double)getContentViewY;
- (void)showDisconnect;
- (void)showOnConnecting;
- (void)alarmUserHasKickOut;
- (void)registerKickOutEvent:(id)arg1 sel:(SEL)arg2;
- (void)dealloc;
- (id)initWithSessionArray:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


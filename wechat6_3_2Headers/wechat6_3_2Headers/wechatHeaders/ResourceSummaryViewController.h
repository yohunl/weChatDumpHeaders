//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IClearDataMgrExt-Protocol.h"
#import "IScanAppSpaceSizeServiceExt-Protocol.h"
#import "MMPieChartDataSource-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class MMActivityIndicator, MMPieChartView, NSString, UIButton, UILabel, UIScrollView, UIView;

@interface ResourceSummaryViewController : MMUIViewController <UIAlertViewDelegate, WCActionSheetDelegate, IClearDataMgrExt, IScanAppSpaceSizeServiceExt, MMPieChartDataSource>
{
    UIScrollView *_rootScrollView;
    UIView *_tableHeaderView;
    UIButton *_startManualCleanBtn;
    unsigned int _percent;
    _Bool _hasFinishScanSession;
    MMActivityIndicator *_loadingView;
    UILabel *_loadingTip;
    MMPieChartView *_pieChartView;
    UILabel *_diskUsageLabel;
    UIView *_spaceDescView;
    UILabel *_weixinSpaceLabel;
    UILabel *_otherSpaceLabel;
    UILabel *_availableSpaceLabel;
    _Bool _hasFinishLoadingData;
    _Bool _canEnableMaunalCleanBtn;
    NSString *navigationReturnButtonTitle;
}

@property(retain, nonatomic) NSString *navigationReturnButtonTitle; // @synthesize navigationReturnButtonTitle;
- (void).cxx_destruct;
- (void)onLoadDataFinished;
- (void)forceUpdateOnWillEnterForground;
- (double)pieChart:(id)arg1 radiuForPieAtIndex:(unsigned long long)arg2;
- (id)pieChart:(id)arg1 colorForPieAtIndex:(unsigned long long)arg2;
- (double)pieChart:(id)arg1 valueForPieAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPiesInChart:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onShowMoreAction;
- (void)showSessionResourse;
- (void)onReturn;
- (void)onCleanedOver3MonthFileSize:(unsigned long long)arg1;
- (void)enableManualCleanLater;
- (void)updateHeaderViewOnCleanCacheEnd;
- (void)onCleanedCacheSize:(unsigned long long)arg1;
- (void)fakeScaneFinishProgress;
- (void)onScanTaskFinished;
- (void)onScanTaskUpdateProgress;
- (void)updateProgress:(unsigned int)arg1;
- (void)onReloadDataItem;
- (void)initHeaderView;
- (void)updateHeaderView;
- (void)initView;
- (struct CGRect)getTableViewFrame;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)isDataEmpty;
- (void)initData;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


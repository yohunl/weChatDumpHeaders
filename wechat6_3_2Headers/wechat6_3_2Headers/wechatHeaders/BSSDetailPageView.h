//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BSSDetailPageLogicControllerDelegate-Protocol.h"
#import "BSSItemViewDelegate-Protocol.h"
#import "MMRefreshTableFooterDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BSSDetailPageLogicController, MMLoadingView, MMTableView, MMUILabel, NSMutableDictionary, NSString, UIButton, UIViewController, WCTimeLineFooterView;
@protocol BSSDetailViewDelegate;

@interface BSSDetailPageView : UIView <UITableViewDataSource, UITableViewDelegate, BSSDetailPageLogicControllerDelegate, MMRefreshTableFooterDelegate, BSSItemViewDelegate>
{
    unsigned int _friendScene;
    id <BSSDetailViewDelegate> _delegate;
    MMTableView *_tableView;
    UIViewController *_parentVC;
    WCTimeLineFooterView *_footerView;
    UIButton *_backBtn;
    MMLoadingView *_loadingView;
    MMUILabel *_nonResultLabel;
    NSString *_keyword;
    long long _resultType;
    NSMutableDictionary *_dicItemViews;
    BSSDetailPageLogicController *_logicController;
}

@property(retain, nonatomic) BSSDetailPageLogicController *logicController; // @synthesize logicController=_logicController;
@property(retain, nonatomic) NSMutableDictionary *dicItemViews; // @synthesize dicItemViews=_dicItemViews;
@property(nonatomic) long long resultType; // @synthesize resultType=_resultType;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) unsigned int friendScene; // @synthesize friendScene=_friendScene;
@property(retain, nonatomic) MMUILabel *nonResultLabel; // @synthesize nonResultLabel=_nonResultLabel;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak UIViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <BSSDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onItemViewInnerSelectWithServiceUrlString:(id)arg1;
- (double)getSearchTextFieldWidth;
- (void)stopLoading;
- (void)startLoading;
- (id)getCellItemViewWithDataItem:(id)arg1 keywords:(id)arg2;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onSvrError;
- (void)onSelectItemWithProductId:(id)arg1;
- (void)onSelectItemWithContactInfo:(id)arg1 andSearchId:(id)arg2;
- (void)onSelectItemWithUrlAddress:(id)arg1;
- (void)onResultViewNeedReload;
- (void)onSearchStart;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didDeviceRotate;
- (void)onReturn:(id)arg1;
- (long long)getCurrentResultType;
- (void)handleDetailViewCancelSearch;
- (void)handleDetailSearchWithKeyword:(id)arg1;
- (void)removeFromParentView;
- (void)dismissView;
- (void)showView;
- (void)initBackBtn;
- (void)initFooterView;
- (id)initBSSDetailPageViewWithResultType:(long long)arg1 andBusinessType:(unsigned long long)arg2 andKeyword:(id)arg3 andLocation:(id)arg4 andParentVC:(id)arg5 andFriendScene:(unsigned int)arg6 andEntrySrc:(unsigned int)arg7;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


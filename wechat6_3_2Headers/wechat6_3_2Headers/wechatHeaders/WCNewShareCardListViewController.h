//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMTipsViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCCardPackageViewControllerDelegate-Protocol.h"
#import "WCNewCardDetailViewControllerDelegate-Protocol.h"
#import "WCNewShareCardListLogicDelegate-Protocol.h"
#import "WCShareCardMyCardEntryViewDelegate-Protocol.h"

@class MMTableView, MMUIScrollView, MMUIView, NSMutableDictionary, NSString, UIActivityIndicatorView, WCNewShareCardListLogicController;

@interface WCNewShareCardListViewController : MMUIViewController <WCNewShareCardListLogicDelegate, UITableViewDelegate, UITableViewDataSource, WCCardPackageViewControllerDelegate, WCNewCardDetailViewControllerDelegate, WCActionSheetDelegate, WCShareCardMyCardEntryViewDelegate, MMTipsViewControllerDelegate>
{
    double _enterTimeForState;
    _Bool _bIsOtherCityListShow;
    _Bool _bIsShowUnReadMsgSection;
    _Bool _isLoadMoreDuringOneDrag;
    CDUnknownBlockType _onBackBlock;
    WCNewShareCardListLogicController *_logicController;
    MMUIView *_navHeaderView;
    MMTableView *_tableView;
    MMUIView *_unReadTipsView;
    MMUIView *_shareCardEmptyTipsView;
    MMUIView *_otherCityEntryContentView;
    MMUIScrollView *_emptyDataTipsView;
    MMUIView *_tableFooterView;
    UIActivityIndicatorView *_footerActivityView;
    NSMutableDictionary *_dicStatCardDisplay;
}

@property(retain, nonatomic) NSMutableDictionary *dicStatCardDisplay; // @synthesize dicStatCardDisplay=_dicStatCardDisplay;
@property(nonatomic) _Bool isLoadMoreDuringOneDrag; // @synthesize isLoadMoreDuringOneDrag=_isLoadMoreDuringOneDrag;
@property(retain, nonatomic) UIActivityIndicatorView *footerActivityView; // @synthesize footerActivityView=_footerActivityView;
@property(retain, nonatomic) MMUIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(nonatomic) _Bool bIsShowUnReadMsgSection; // @synthesize bIsShowUnReadMsgSection=_bIsShowUnReadMsgSection;
@property(nonatomic) _Bool bIsOtherCityListShow; // @synthesize bIsOtherCityListShow=_bIsOtherCityListShow;
@property(retain, nonatomic) MMUIScrollView *emptyDataTipsView; // @synthesize emptyDataTipsView=_emptyDataTipsView;
@property(retain, nonatomic) MMUIView *otherCityEntryContentView; // @synthesize otherCityEntryContentView=_otherCityEntryContentView;
@property(retain, nonatomic) MMUIView *shareCardEmptyTipsView; // @synthesize shareCardEmptyTipsView=_shareCardEmptyTipsView;
@property(retain, nonatomic) MMUIView *unReadTipsView; // @synthesize unReadTipsView=_unReadTipsView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMUIView *navHeaderView; // @synthesize navHeaderView=_navHeaderView;
@property(retain, nonatomic) WCNewShareCardListLogicController *logicController; // @synthesize logicController=_logicController;
@property(copy, nonatomic) CDUnknownBlockType onBackBlock; // @synthesize onBackBlock=_onBackBlock;
- (void).cxx_destruct;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)showFirstUseShareCardTip;
- (void)tryShowShareCardTips;
- (void)setHasEnterShareCardListBefore;
- (_Bool)hasEnterShareCardListBefore;
- (void)onDeleteShareCard:(id)arg1;
- (void)onShareCardConsumed:(id)arg1 isGetReward:(_Bool)arg2;
- (void)onCardShareComplete;
- (void)onLoadMoreLayoutDataEnd;
- (void)onGetHomePageLayoutFail;
- (void)onTableViewNeedReloadWithAnimation:(_Bool)arg1;
- (void)onBackClick;
- (void)otherCityEntryBtnPress:(id)arg1;
- (void)tryAnimationToNewCard;
- (void)setTableFooterNoData;
- (void)updateTableFooterHasMore:(_Bool)arg1;
- (void)loadMoreLayoutData;
- (void)reloadData;
- (void)stopRefreshHeaderView;
- (void)refreshHead;
- (void)scrollViewDidScroll:(id)arg1;
- (void)openCardDetailViewControllerWithShareCardList:(id)arg1;
- (id)getFirstNormalCardFromList:(id)arg1;
- (void)handleSelectOtherCityCardInRow:(unsigned long long)arg1;
- (void)handleSelectLocalCityCardInRow:(unsigned long long)arg1;
- (void)showMessageListByNewMsg;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)createOtherCityItemCellContentViewAtIndexPath:(id)arg1 withCell:(id)arg2;
- (void)createLocalCityItemCellContentViewAtIndexPath:(id)arg1 withCell:(id)arg2;
- (id)createOtherCityCardHeaderView;
- (id)createLocalCityCardHeaderView;
- (void)showNoMyCardAndNoShareCardView;
- (void)makeShareCardEmptyTipsView;
- (double)calcLocalCityHeaderViewHeight;
- (id)getCardMsgTipWording;
- (id)genNewMessageTipView;
- (void)initTableView;
- (void)initNavigationBarItem;
- (void)initView;
- (void)initData;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)useTransparentNavibar;
- (id)initWithLogicController:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


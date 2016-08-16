//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "FavFileDetailDelegate-Protocol.h"
#import "FavForwardLogicDelegate-Protocol.h"
#import "FavPostControllerDelegate-Protocol.h"
#import "FavSearchControllerDelegate-Protocol.h"
#import "FavSightViewDelegate-Protocol.h"
#import "FavTagSearchFilterDelegate-Protocol.h"
#import "FavTagViewDelegate-Protocol.h"
#import "FavVideoDetailDelegate-Protocol.h"
#import "FavoritesDataControllerDelegate-Protocol.h"
#import "IFavSightViewExt-Protocol.h"
#import "IFavoritesExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCNetworkMediaPlayerDelegate-Protocol.h"

@class FavForwardLogicController, FavSightView, MMFavoritesDataController, MMFavoritesSearchController, MMTableView, MMUIWindow, NSMutableArray, NSString, UIActivityIndicatorView, UIImageView, UILabel, UIView;
@protocol MyFavoritesViewControllerDelegate;

@interface MyFavoritesViewController : MMSearchBarDisplayController <FavPostControllerDelegate, FavSearchControllerDelegate, FavoritesDataControllerDelegate, IFavoritesExt, FavFileDetailDelegate, FavVideoDetailDelegate, FavTagSearchFilterDelegate, FavForwardLogicDelegate, FavTagViewDelegate, WCActionSheetDelegate, WCNetworkMediaPlayerDelegate, IFavSightViewExt, FavSightViewDelegate>
{
    MMFavoritesDataController *m_dataController;
    MMFavoritesSearchController *m_searchController;
    UIView *m_multiSelectActionView;
    NSMutableArray *m_multiSelectButtons;
    FavForwardLogicController *m_favForwardController;
    MMTableView *m_tableView;
    UIView *m_emptyView;
    UIView *m_loadingView;
    UIView *m_switchLoadingView;
    UIView *m_headView;
    UIImageView *m_tipsView;
    UILabel *m_uploadFailLabel;
    UILabel *m_capFullLabel;
    UIView *m_footerView;
    UIActivityIndicatorView *m_activityView;
    MMUIWindow *m_fullScreenWindow;
    FavSightView *m_sightView;
    _Bool m_hasLogCostTime;
    id <MyFavoritesViewControllerDelegate> _m_delegate;
}

@property(nonatomic) __weak id <MyFavoritesViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)playFavSight:(id)arg1;
- (void)checkDBAutoRecover;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onClosePlayer;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (_Bool)onResponseForSelectFavItem:(id)arg1;
- (void)jumpToViewStreamVideo:(id)arg1;
- (id)getCurrentViewController;
- (void)onLoadingMore;
- (void)reloadTableAtIndexPath:(id)arg1;
- (void)onSelectCountChanged:(unsigned long long)arg1;
- (void)showEmptyView;
- (void)onShowPostActionSheet:(id)arg1;
- (void)addPostItem:(id)arg1;
- (id)getFavForawrdViewController;
- (void)OnForwardDone;
- (void)onFavTagEditCancel;
- (void)onFavTagEditOK;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addTagForItems;
- (void)onForwardItems;
- (void)forwardItem:(id)arg1;
- (void)onDeleteItems;
- (void)hideSelectActionView;
- (void)onMultiSelectDone;
- (void)initMultiSelectActionView;
- (void)enableBtns;
- (void)disableBtns;
- (void)hideSearchBar;
- (void)onBtnEdit;
- (void)hideTips;
- (void)onShowFailTips;
- (void)showTips;
- (void)showCapacityExceedTips;
- (void)showUploadFailTips;
- (void)OnDelFavoritesItem:(unsigned int)arg1;
- (void)OnAddFavoritesItem:(id)arg1 ErrCode:(int)arg2;
- (void)OnNewFavoritesItemUpdate:(id)arg1;
- (void)OnGetNextPageFavoritesItemList:(id)arg1 ErrCode:(int)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnGetFirstPageFavoritesItemList:(id)arg1 ErrCode:(int)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnHasAnyFavoriteData:(_Bool)arg1;
- (void)onHandleJumpToViewDetail:(id)arg1;
- (void)stopActivityLoading;
- (double)getContentOffsetAfterAdd:(id)arg1;
- (void)OpenVideoFavItem:(id)arg1;
- (void)OpenVideoFile:(id)arg1;
- (_Bool)shouldShowSearchResult:(id)arg1;
- (void)onWillBeginSearch;
- (void)onSelectFavDataItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (void)onSelectFavItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (void)restartAllFailedItem;
- (void)resetTableViewOffset:(id)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)onViewControllerBeDeleted;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)initEmptyView;
- (void)initSwithLoadingView;
- (void)initLoadingView;
- (void)initTableFooterView;
- (void)updateTableFooterHasMore:(_Bool)arg1;
- (void)resetHeaderView:(id)arg1;
- (void)initHeaderView;
- (void)initTableView;
- (id)genLabel:(id)arg1;
- (void)setViewTitle;
- (void)initNavigationBar;
- (id)getAddBarButton;
- (id)getCancelBarButton;
- (void)reLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)checkForHideFailBanner;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)HideLoadingView;
- (void)reloadTableView;
- (_Bool)isSeachActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "GameLibrarayLogicControllerDelegate-Protocol.h"
#import "GameSearchManagerDelegate-Protocol.h"
#import "GameSettingLogicControllerDelegate-Protocol.h"
#import "IAPExt-Protocol.h"
#import "IAppDataExt-Protocol.h"
#import "MMService-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class GameCenterDetailLogicController, GameCenterHomeData, GameLibrarayLogicController, GameSearchManager, GameSearchRecommendList, GameSettingLogicController, MMUIViewController, MMWebViewController, NSMutableArray, NSMutableDictionary, NSString, UIButton;

@interface GameCenterManager : MMService <MMService, IAppDataExt, PBMessageObserverDelegate, GameLibrarayLogicControllerDelegate, GameSearchManagerDelegate, IAPExt, MMWebViewDelegate, GameSettingLogicControllerDelegate>
{
    GameCenterHomeData *_homeData;
    NSMutableArray *_gameIntroList;
    NSMutableDictionary *_gameDetailDict;
    NSMutableDictionary *_subscribeInfoDict;
    _Bool _gameIntroLoaded;
    NSMutableArray *_allGameList;
    NSMutableDictionary *_appid2UrlInGlobalSearch;
    unsigned int _lastFetchCountryTime;
    NSString *_appStoreCountryCode;
    GameSearchRecommendList *_searchRecommendList;
    GameCenterDetailLogicController *_detailLogicController;
    GameLibrarayLogicController *_librarayLogicController;
    GameSettingLogicController *_settingLogicController;
    GameSearchManager *_searchMgr;
    int _floatLayerRequestTime;
    NSString *_iapProductID;
    MMWebViewController *_floatLayerWebViewController;
    NSString *_floatLayerUrl;
    UIButton *_floatLayerCloseButton;
    MMUIViewController *_gameCenterVC;
}

@property(nonatomic) __weak MMUIViewController *gameCenterVC; // @synthesize gameCenterVC=_gameCenterVC;
@property(retain, nonatomic) UIButton *floatLayerCloseButton; // @synthesize floatLayerCloseButton=_floatLayerCloseButton;
@property(nonatomic) int floatLayerRequestTime; // @synthesize floatLayerRequestTime=_floatLayerRequestTime;
@property(retain, nonatomic) NSString *floatLayerUrl; // @synthesize floatLayerUrl=_floatLayerUrl;
@property(retain, nonatomic) MMWebViewController *floatLayerWebViewController; // @synthesize floatLayerWebViewController=_floatLayerWebViewController;
@property(retain, nonatomic) NSString *iapProductID; // @synthesize iapProductID=_iapProductID;
- (void).cxx_destruct;
- (void)onCloseH5FloatLayer:(id)arg1;
- (id)webViewFailToLoad:(id)arg1;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (int)gameButtonActionWithoutReport:(id)arg1 Controller:(id)arg2;
- (void)jumpToAppstoreWithUrl:(id)arg1 Url:(id)arg2;
- (int)tryLaunchGameOrJumpAppStore:(id)arg1 AppId:(id)arg2 DowLoadUrl:(id)arg3;
- (int)launchGameWithFailProcess:(id)arg1;
- (int)reportLaunchGameSuccess:(id)arg1;
- (id)urlForGameCenterSetting;
- (id)urlForGameMessageCenter;
- (id)urlForGameLibraryView;
- (id)urlForGameDetailView;
- (id)urlForGameHomepageView;
- (int)viewTypeForMessageCenter;
- (int)viewTypeForLibrary;
- (int)viewTypeForDetailView;
- (int)viewTypeForHomepage;
- (id)fakeNewFeedFriendItem;
- (id)fakeNewFeedItem:(id)arg1;
- (void)exposureKvReport:(int)arg1 AppId:(id)arg2 ExtInfo:(id)arg3;
- (void)myGameExposureReport;
- (void)handlePullNewHomeDataResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)pullNewHomeDataFromServer;
- (_Bool)fetchNewHomeData;
- (void)sendGetSearchGameListReq:(unsigned int)arg1;
- (void)getAllGameList:(_Bool)arg1;
- (void)gameSearchManager:(id)arg1 didFinishSearchWithResultGroups:(id)arg2 searchWithText:(id)arg3 error:(long long)arg4;
- (void)onGetMoreGameList:(id)arg1 classifyID:(id)arg2 errCode:(int)arg3;
- (void)onGetLibGameList:(id)arg1 errCode:(int)arg2;
- (void)getMoreGameListGameType:(unsigned int)arg1 ClassifyID:(id)arg2 startOffset:(unsigned int)arg3 limit:(unsigned int)arg4;
- (void)getLibGameListSortType:(unsigned int)arg1 startOffset:(unsigned int)arg2 limit:(unsigned int)arg3 isFirstTime:(_Bool)arg4;
- (void)onGetUpList:(id)arg1 appID:(id)arg2 errCode:(int)arg3;
- (void)onUpFriend:(id)arg1 appID:(id)arg2 errCode:(int)arg3;
- (void)onGetGameDetailInfo:(id)arg1 errCode:(int)arg2;
- (void)getUpListWithAppID:(id)arg1;
- (void)upFriend:(id)arg1 appID:(id)arg2;
- (void)getNewGameDetailInfo:(id)arg1;
- (unsigned long long)getGameDetailJumpTypeAndUrl:(id)arg1 DetailUrl:(id *)arg2;
- (void)OnGotBizAppInfo;
- (void)onGetProduct:(id)arg1 invalidProductID:(id)arg2;
- (void)fetchAppStoreRegion;
- (void)saveCountryInfoToFile;
- (void)loadCountryInfoFromFile;
- (id)getAppStoreCountryCode;
- (void)releaseTransparentH5FloatLayer;
- (id)addTransparentH5FloatLayer:(id)arg1;
- (id)getGameCenterLibraryViewController:(int)arg1;
- (id)getGameCenterHomeViewController:(int)arg1 webviewInfo:(id)arg2;
- (id)getGameCenterDetailViewController:(id)arg1 sourceScene:(int)arg2;
- (id)getDetailUrlGlobalSearch:(id)arg1;
- (void)openGameCenterDetailView:(id)arg1 appId:(id)arg2 sourceScene:(int)arg3 webviewInfo:(id)arg4;
- (void)jumpToWebView:(id)arg1 JumpUrl:(id)arg2 Title:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGameSetBlockState:(_Bool)arg1 appID:(id)arg2 error:(long long)arg3;
- (void)onGameGetBlockState:(_Bool)arg1 appID:(id)arg2 error:(long long)arg3;
- (void)setGameBlockState:(id)arg1 onOrOff:(_Bool)arg2;
- (_Bool)getGameBlockState:(id)arg1;
- (void)handleSearchEntryChange:(id)arg1;
- (id)searchPlaceholder;
- (_Bool)showSearchEntry;
- (_Bool)isGameSubscribedWithAppID:(id)arg1;
- (id)getGameSearchRecommendList;
- (void)saveGameSearchRecommendList:(id)arg1;
- (void)handleGameReportResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGameSearchSmartBoxResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetAllGameListResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSubscribeNewGameResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)subscribeNewGameWithAppID:(id)arg1 hasEnableChatRoom:(_Bool)arg2 noticeID:(id)arg3;
- (void)loadSubscribeDataFromFile;
- (void)saveSubscribeDataToFile;
- (id)recentGameInfoArrayToLogString:(id)arg1;
- (id)gameBriefInfoArrayToLogString:(id)arg1;
- (id)appInfoArrayToLogString:(id)arg1;
- (void)forceUpdateNewGameAppInfo;
- (id)getLocalHomeData;
- (void)loadCachedHomeData;
- (void)loadHomeDataFromFile;
- (void)saveHomeDataToFile;
- (void)sendGameSearchSmartBoxRequest:(id)arg1;
- (_Bool)requestGameSearch:(id)arg1;
- (void)setLocalGameDetailInfo:(id)arg1;
- (id)getLocalGameDetailInfoWithAppID:(id)arg1;
- (void)loadGlobalSearchGameList;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


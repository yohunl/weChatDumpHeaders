//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "LocationRetrieveDelegate-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "WCCardBulkImportMgrDelegate-Protocol.h"
#import "WCCardLayoutMgrDelegate-Protocol.h"
#import "WCCardMsgCenterMgrDelegate-Protocol.h"
#import "WCCardPkgBatchDelMgrDelegate-Protocol.h"
#import "WCCardPkgBatchGetCardItemByTpInfoMgrDelegate-Protocol.h"
#import "WCCardPkgBatchGetMgrDelegate-Protocol.h"
#import "WCCardSyncMgrDelegate-Protocol.h"

@class CLLocation, LocationRetriever, NSDictionary, NSString, WCCardBulkImportMgr, WCCardLayoutMgr, WCCardMsgCenterMgr, WCCardPkgBatchDelMgr, WCCardPkgBatchGetCardItemByTpInfoMgr, WCCardPkgBatchGetMgr, WCCardPkgDB, WCCardPkgSyncMgr, WCCardTipController;

@interface WCCardPkgMgr : MMService <MMService, WCCardSyncMgrDelegate, WCCardPkgBatchGetMgrDelegate, WCCardPkgBatchDelMgrDelegate, WCCardMsgCenterMgrDelegate, WCCardBulkImportMgrDelegate, WCCardPkgBatchGetCardItemByTpInfoMgrDelegate, PBMessageObserverDelegate, LocationRetrieveDelegate, MMKernelExt, WCCardLayoutMgrDelegate>
{
    WCCardPkgDB *_wcCardPkgDB;
    WCCardPkgSyncMgr *_wcCardPkgSyncMgr;
    WCCardPkgBatchGetMgr *_wcCardPkgBatchGetMgr;
    WCCardPkgBatchDelMgr *_wcCardPkgBatchDelMgr;
    WCCardMsgCenterMgr *_wcCardMsgCenterMgr;
    WCCardBulkImportMgr *_wcCardBulkImportMgr;
    WCCardPkgBatchGetCardItemByTpInfoMgr *_wcCardBatchGetCardItemByIpInfoMgr;
    WCCardLayoutMgr *_wcCardLayoutMgr;
    WCCardTipController *_wcCardTipController;
    LocationRetriever *_locationRetrieve;
    CLLocation *_locationForReport;
    unsigned int _lastLocationTime;
    unsigned int _getItemInfoEventID;
    unsigned int _acceptItemEventID;
    unsigned int _giftItemEventID;
    unsigned int _getShopsEventID;
    unsigned int _getSerialEventID;
    unsigned int _getAvailableEventID;
    NSDictionary *_dicCardIdCacheForTips;
    CLLocation *_location;
}

@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (void)cleanBubbleMessage;
- (id)bubbleMessageIconUrl;
- (id)bubbleMessageWording;
- (unsigned int)bubbleMessageCount;
- (void)tryToClearEntryTipsForCards:(id)arg1;
- (void)cleanRedDotBuffBySvr;
- (id)getRedDotBuffBySvr;
- (void)cleanEntryTipBySvr;
- (id)entryTipIconUrlBySvr;
- (id)entryTipWordingBySvr;
- (_Bool)hasEntryShowRedDotBySvr;
- (_Bool)hasEntryShowNewBySvr;
- (id)getAllAvailableMemberCards;
- (_Bool)isHaveShowTipForCardId:(id)arg1;
- (void)setHaveShowTipForCardId:(id)arg1;
- (void)loadCardIdCacheForTips;
- (_Bool)saveCardIdCacheForTips:(id)arg1;
- (id)getPathOfCardIdCacheForTips;
- (void)giftMyCard:(id)arg1;
- (id)getCardTip;
- (void)clearWCCardTip;
- (void)setWCCardShareTip:(id)arg1;
- (void)setWCCardUnreadTip:(unsigned int)arg1;
- (_Bool)isGettingLayout;
- (id)layoutRedDotTip;
- (_Bool)hasLayoutRedDot;
- (void)clearLayoutRedDot;
- (id)getHardCodeData;
- (_Bool)batchDelWCCard:(id)arg1;
- (void)onLayoutRedDotChanged;
- (void)onGetCardLayoutStop;
- (void)onGetCardLayoutResp;
- (unsigned int)getTopScene;
- (id)getLayoutSubTitle;
- (id)getRecentList;
- (id)getNearByList;
- (id)getMemberCardList;
- (id)getExpiringList;
- (void)GetLayoutFromSvr:(unsigned int)arg1;
- (id)getLayoutBuf;
- (void)reportLocation:(unsigned int)arg1 TpId:(id)arg2 CardId:(id)arg3;
- (id)getLastLocation;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)handleShareCardResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetCardConfigResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetAvailableCardResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetCardCountResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetCardSerialNumberResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetApplicableShopsListResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGiftCard:(id)arg1 Event:(unsigned int)arg2;
- (void)handleAcceptCard:(id)arg1 Event:(unsigned int)arg2;
- (void)keepCachedDataFromOldCard:(id)arg1 toNewCard:(id)arg2;
- (void)handleGetCardData:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetCardsItemByTpInfo:(id)arg1 ErrCode:(int)arg2;
- (void)onImportBulkCard:(id)arg1 errCode:(int)arg2;
- (void)onGetBulkInfo:(id)arg1 errCode:(int)arg2;
- (void)onGetBulkCard:(id)arg1 errCode:(int)arg2;
- (void)onWCCardListUpdate:(unsigned int)arg1;
- (void)onWCCardMessageEntryTipChanged:(id)arg1;
- (void)onWCCardMessageUnreadCountChanged:(id)arg1;
- (void)onBatchGetCardList:(id)arg1 ErrCode:(int)arg2;
- (void)onBatchDelCardIDList:(id)arg1 ErrCode:(int)arg2;
- (void)onSyncResult:(int)arg1;
- (void)onAuthOK;
- (void)fixDatabaseBug;
- (id)getCardConfigInfo;
- (unsigned int)getMyCardCount;
- (_Bool)needShowEntrance;
- (void)getCardCount;
- (void)batchGetCardItemByIpInfo:(id)arg1;
- (void)importBulkCard:(id)arg1;
- (void)getBulkCard:(id)arg1;
- (void)stopGetAvailableCardInfo;
- (void)getAvailableCardInfo:(id)arg1 buff:(id)arg2;
- (_Bool)setConsumedMsgRead:(id)arg1;
- (void)cleanAllMsg;
- (_Bool)setAllMsgRead;
- (id)getLastMsg;
- (_Bool)delMsg:(id)arg1;
- (id)getNextPageMsgListByCurMinUpdateTime:(unsigned int)arg1 HasMore:(_Bool *)arg2;
- (id)getFirstPageMsgList;
- (id)getUnreadMsgList;
- (unsigned int)getUnreadMsgCount;
- (void)getSerialNumberByWXCardID:(id)arg1;
- (void)stopGetUsedStoreList;
- (void)getUsedStoreList:(id)arg1 hasLocation:(_Bool)arg2;
- (void)stopRetrieveLocation;
- (void)startRetrieveLocation;
- (unsigned int)getNeedBatchGetWCCardCount;
- (_Bool)delWCCard:(id)arg1;
- (void)getNextPageWCCardListByCurMinUpdateTime:(unsigned int)arg1;
- (void)getFirstPageWCCardList;
- (void)syncByNotify:(unsigned int)arg1 scene:(unsigned int)arg2;
- (void)clearSyncKey;
- (void)insertOrUpdateWCCard:(id)arg1;
- (void)stopGiftCard;
- (void)giftCard:(id)arg1 staticScene:(int)arg2;
- (void)stopAcceptCard;
- (void)acceptCard:(id)arg1;
- (id)getCardDataFromDB:(id)arg1;
- (void)stopGetCardData;
- (void)getCardData:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


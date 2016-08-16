//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCShareCardDB.h"

@interface WCShareCardDB (ShareCardDataInfo)
- (_Bool)getAllShareCard:(id)arg1;
- (_Bool)searchShareCardByKey:(id)arg1 CardList:(id)arg2 HasMore:(_Bool *)arg3;
- (_Bool)getNextPageWCShareCardListByShare:(id)arg1 ShareUserName:(id)arg2 CurMinUpdateTime:(unsigned int)arg3;
- (_Bool)getFirstPageWCShareCardListByShare:(id)arg1 ShareUserName:(id)arg2;
- (_Bool)getNextPageWCShareCardListByAppId:(id)arg1 AppId:(id)arg2 CurMinUpdateTime:(unsigned int)arg3;
- (_Bool)getFirstPageWCShareCardListByAppId:(id)arg1 AppId:(id)arg2;
- (_Bool)getNextPageWCShareCardList:(id)arg1 CurMinShareTime:(unsigned int)arg2;
- (_Bool)getFirstPageWCShareCardList:(id)arg1;
- (_Bool)getWCShareCardByCardTPID:(id)arg1 andShareCardList:(id)arg2;
- (id)getWCShareCardByCardID:(id)arg1;
- (unsigned int)getWCShareCardCountByAppId:(id)arg1;
- (_Bool)getAllMyMarked:(id)arg1;
- (_Bool)getShareUserList:(id)arg1 AppId:(id)arg2;
- (_Bool)getLastThreeShareCardList:(id)arg1 AppId:(id)arg2;
- (unsigned int)getNoramlShareCardCount:(id)arg1;
- (void)deleteUselessShareCard;
- (_Bool)deleteWCShareCardByCardID:(id)arg1;
- (_Bool)insertOrUpdateShareCardData:(id)arg1;
- (_Bool)insertOrUpdateShareCardBySyncItem:(id)arg1;
- (unsigned int)getValidShareCardCountByTpId:(id)arg1;
- (_Bool)getNeedBatchGetWCShareCardIdList:(id)arg1 byMinUpdateTime:(unsigned int)arg2;
- (_Bool)getNextPageNeedBatchGetWCShareCardIdList:(id)arg1 byCurMinUpdateTime:(unsigned int)arg2;
- (_Bool)getFirstPageNeedBatchGetWCShareCardIdList:(id)arg1;
- (unsigned int)getShareCardAvailableCount;
- (unsigned int)getShareCardCount;
@end

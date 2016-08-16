//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FavoritesCDNInfo, FavoritesItem, NSString;

@protocol FavoritesUploaderDelegate <NSObject>
- (void)onUsedCapacityUpdate:(unsigned long long)arg1;
- (_Bool)deleteCdnInfoByFavoritesItemLocalIdIgnoringStatus:(unsigned int)arg1;
- (_Bool)deleteCdnInfoByFavoritesItemLocalId:(unsigned int)arg1;
- (_Bool)updateCdnInfo:(FavoritesCDNInfo *)arg1;
- (FavoritesCDNInfo *)getUploadCdnInfoByLocalItemDataId:(NSString *)arg1 andType:(int)arg2;
- (FavoritesCDNInfo *)getNextUploadCdnInfoByLocalItemId:(unsigned int)arg1;
- (void)onUploadFavItem:(FavoritesItem *)arg1 LocalDataId:(NSString *)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
- (void)onUploadFail:(FavoritesItem *)arg1 ErrCode:(int)arg2;
- (void)onUploadFinished:(FavoritesItem *)arg1;

@optional
- (void)onCopyFileFinished:(FavoritesItem *)arg1;
@end


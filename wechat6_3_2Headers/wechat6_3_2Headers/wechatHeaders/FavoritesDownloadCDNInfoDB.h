//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MyFavoritesDB;

@interface FavoritesDownloadCDNInfoDB : NSObject
{
    MyFavoritesDB *_mmDB;
}

- (void).cxx_destruct;
- (_Bool)deleteDownloadCdnInfoByFavoritesItemLocalId:(unsigned int)arg1;
- (id)getDownloadCdnInfoByLocalItemDataId:(id)arg1 andType:(int)arg2;
- (_Bool)updateDownloadCdnInfo:(id)arg1;
- (id)getNextDownloadCdnInfoByLocalItemId:(unsigned int)arg1;
- (_Bool)addDownloadCDNInfo:(id)arg1;
- (void)initDB:(id)arg1;
- (id)init;

@end

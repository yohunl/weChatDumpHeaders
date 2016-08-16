//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableArray, NSString;

@interface WebCacheMgr : MMService <MMService>
{
    NSMutableArray *_needCachedUrlList;
}

- (void).cxx_destruct;
- (void)clearAllCache;
- (_Bool)canUrlBeCached:(id)arg1;
- (void)clearNeedCacheUrlList;
- (void)addNeedCacheUrl:(id)arg1;
- (id)cachePathForUrl:(id)arg1;
- (id)baseCachesPath;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "INewABTestLogicExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface NewABTestKeyMgr : MMService <MMService, MMKernelExt, INewABTestLogicExt>
{
    _Bool _bABTestCacheLoaded;
    NSMutableDictionary *_cachedABTestItems;
}

@property(nonatomic) _Bool bABTestCacheLoaded; // @synthesize bABTestCacheLoaded=_bABTestCacheLoaded;
@property(retain, nonatomic) NSMutableDictionary *cachedABTestItems; // @synthesize cachedABTestItems=_cachedABTestItems;
- (void).cxx_destruct;
- (void)onAuthOK;
- (void)onGetABTestExpKeyItems:(id)arg1 expiredExpids:(id)arg2 isAutoGet:(_Bool)arg3;
- (void)mergeNewABTestItemFromSvr:(id)arg1;
- (void)handleNewABTestList:(id)arg1;
- (_Bool)saveNewABTestCache;
- (id)pathForNewABTestCache;
- (_Bool)tryLoadNewABTestCache;
- (void)reportABTestLogWithKey:(id)arg1 expId:(id)arg2 logId:(unsigned int)arg3 logExt:(id)arg4;
- (void)reportABTestRunning:(id)arg1;
- (id)getExpItemsArray;
- (void)tryUpdateABTestFromSvr;
- (void)filterExpsUsingBlock:(CDUnknownBlockType)arg1;
- (id)getABTestItemWithKey:(id)arg1;
- (void)dealloc;
- (void)onServiceEnterForeground;
- (void)onServiceReloadData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


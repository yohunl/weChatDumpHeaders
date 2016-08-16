//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString;

@interface FICImageTableMetadata : NSObject <PBCoding>
{
    NSRecursiveLock *m_lock;
    unsigned int m_entryCount;
    NSMutableArray *m_imgCacheFIFO;
    NSMutableDictionary *m_imgMemoryCache;
    NSMutableDictionary *m_entityUsedCountDict;
    unsigned int imgSizeWidth;
    unsigned int imgSizeHeight;
    unsigned int imgMaxCnt;
    unsigned int maxLRUFactor;
    unsigned int cpuzSize;
    unsigned int pageSize;
    unsigned int version;
    NSMutableDictionary *indexMap;
    NSMutableSet *occupiedIndexes;
    NSMutableDictionary *MRUEntries;
    NSString *formatName;
}

+ (void)initialize;
@property(nonatomic) unsigned int entryCount; // @synthesize entryCount=m_entryCount;
@property(nonatomic) unsigned int version; // @synthesize version;
@property(nonatomic) unsigned int pageSize; // @synthesize pageSize;
@property(nonatomic) unsigned int cpuzSize; // @synthesize cpuzSize;
@property(nonatomic) unsigned int maxLRUFactor; // @synthesize maxLRUFactor;
@property(nonatomic) unsigned int imgMaxCnt; // @synthesize imgMaxCnt;
@property(nonatomic) unsigned int imgSizeHeight; // @synthesize imgSizeHeight;
@property(nonatomic) unsigned int imgSizeWidth; // @synthesize imgSizeWidth;
@property(retain, nonatomic) NSString *formatName; // @synthesize formatName;
@property(retain, nonatomic) NSMutableDictionary *MRUEntries; // @synthesize MRUEntries;
@property(retain, nonatomic) NSMutableSet *occupiedIndexes; // @synthesize occupiedIndexes;
@property(retain, nonatomic) NSMutableDictionary *indexMap; // @synthesize indexMap;
- (void).cxx_destruct;
- (void)clearImageCache;
- (void)removeImageCacheWithEntityUUID:(id)arg1;
- (void)setImageCache:(id)arg1 withEntityUUID:(id)arg2;
- (id)imageCacheForEntityUUID:(id)arg1;
- (_Bool)isAnyEntityInUsed;
- (void)setEntityInUse:(_Bool)arg1 entityUUID:(id)arg2;
- (unsigned long long)nextEntryIndex:(out id *)arg1;
- (unsigned long long)entityUsedCountWithEntityUUID:(id)arg1;
- (_Bool)deleteEntryForEntityUUID:(id)arg1;
- (unsigned long long)indexOfEntryForEntityUUID:(id)arg1;
- (void)reset;
- (_Bool)saveMetadata:(id)arg1 imgFormat:(id)arg2;
- (_Bool)loadMetadata:(id)arg1 imgFormat:(id)arg2;
- (id)initWithLock:(id)arg1;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


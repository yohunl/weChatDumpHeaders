//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface GoogleContactLocalCacheImpl : NSObject <PBCoding>
{
    NSMutableArray *m_contactList;
    NSString *m_googleContactName;
    NSMutableDictionary *m_nickNameDic;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *m_nickNameDic; // @synthesize m_nickNameDic;
@property(retain, nonatomic) NSString *m_googleContactName; // @synthesize m_googleContactName;
@property(retain, nonatomic) NSMutableArray *m_contactList; // @synthesize m_contactList;
- (void).cxx_destruct;
- (id)getGoogleNickNameForGmail:(id)arg1 forKey:(id)arg2;
- (id)getContactListForKey:(id)arg1;
- (void)clearCacheForKey:(id)arg1;
- (_Bool)saveContactToFile:(id)arg1 forKey:(id)arg2;
- (id)loadContactForKey:(id)arg1;
- (id)getGoogleContactLocalCachePath;
- (id)getGoogleContactLocalCacheRootDir;
- (void)dealloc;
- (id)init;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


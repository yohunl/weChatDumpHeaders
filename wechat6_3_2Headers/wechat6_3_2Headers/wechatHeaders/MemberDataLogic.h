//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MemberDataLogicProtocol-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface MemberDataLogic : NSObject <MemberDataLogicProtocol>
{
    NSString *m_adminName;
    NSMutableDictionary *m_dicAllContacts;
    NSMutableArray *m_searchFilterContacts;
    NSMutableArray *m_keyArr;
    NSMutableArray *m_allContacts;
}

- (void).cxx_destruct;
- (id)filtContactsByName:(id)arg1;
- (id)getFilteredContacts;
- (void)cancelSearch;
- (void)doSearch:(id)arg1;
- (id)getItemInSection:(unsigned long long)arg1 atRow:(unsigned long long)arg2;
- (unsigned long long)getSectionItemCount:(unsigned long long)arg1;
- (unsigned long long)getSectionCount;
- (id)getKeyAtSection:(unsigned long long)arg1;
- (id)getKeyArray;
- (void)sortKeys;
- (_Bool)removeContact:(id)arg1;
- (void)addContact:(id)arg1;
- (void)reloadMemberList:(id)arg1;
- (id)addSectionKey:(id)arg1;
- (id)getAllContacts;
- (unsigned long long)getTotalCount;
- (void)dealloc;
- (id)initWithMemberList:(id)arg1 admin:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCDBRestoreInfo : NSObject <PBCoding>
{
    unsigned int m_rootpage;
    NSString *m_tableName;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *m_tableName; // @synthesize m_tableName;
@property(nonatomic) unsigned int m_rootpage; // @synthesize m_rootpage;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithRootPage:(unsigned int)arg1 andTableName:(id)arg2;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


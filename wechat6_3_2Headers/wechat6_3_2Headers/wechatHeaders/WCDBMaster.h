//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCDBCoding-Protocol.h"

@class NSString;

@interface WCDBMaster : NSObject <WCDBCoding>
{
    unsigned int rootpage;
    NSString *type;
    NSString *name;
    NSString *tbl_name;
    NSString *sql;
    long long m___rowID;
}

+ (const map_0e718273 *)getFileValueTagIndexMap;
+ (id)getFileValueTypeTable;
+ (const map_0e718273 *)getPackedValueTagIndexMap;
+ (id)getPackedValueTypeTable;
+ (const map_7a576766 *)getValueNameIndexMap;
+ (id)getValueTable;
+ (id)dummyObject;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(retain, nonatomic) NSString *sql; // @synthesize sql;
@property(nonatomic) unsigned int rootpage; // @synthesize rootpage;
@property(retain, nonatomic) NSString *tbl_name; // @synthesize tbl_name;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *type; // @synthesize type;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_22fabacd *)db_sql;
- (const WCDBCondition_c6db074e *)db_rootpage;
- (const WCDBCondition_22fabacd *)db_tbl_name;
- (const WCDBCondition_22fabacd *)db_name;
- (const WCDBCondition_22fabacd *)db_type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

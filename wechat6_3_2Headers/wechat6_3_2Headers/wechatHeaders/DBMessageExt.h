//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCDBCoding-Protocol.h"

@class NSString;

@interface DBMessageExt : NSObject <WCDBCoding>
{
    unsigned int msgLocalId;
    unsigned int msgFlag;
    unsigned int ConIntRes2;
    unsigned int ConIntRes3;
    unsigned int ConIntRes1;
    NSString *msgSource;
    NSString *msgIdentify;
    NSString *ConStrRes1;
    NSString *ConStrRes2;
    NSString *ConStrRes3;
    long long m___rowID;
}

+ (const basic_string_a490aa4c *)getWCDBPrimaryColumnName;
+ (const struct WCDBIndexHelper *)getWCDBIndexArray;
+ (unsigned long long)getWCDBIndexArrayCount;
+ (const map_0e718273 *)getFileValueTagIndexMap;
+ (id)getFileValueTypeTable;
+ (const map_0e718273 *)getPackedValueTagIndexMap;
+ (id)getPackedValueTypeTable;
+ (const map_7a576766 *)getValueNameIndexMap;
+ (id)getValueTable;
+ (id)dummyObject;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(nonatomic) unsigned int ConIntRes1; // @synthesize ConIntRes1;
@property(retain, nonatomic) NSString *ConStrRes3; // @synthesize ConStrRes3;
@property(retain, nonatomic) NSString *ConStrRes2; // @synthesize ConStrRes2;
@property(retain, nonatomic) NSString *ConStrRes1; // @synthesize ConStrRes1;
@property(retain, nonatomic) NSString *msgIdentify; // @synthesize msgIdentify;
@property(retain, nonatomic) NSString *msgSource; // @synthesize msgSource;
@property(nonatomic) unsigned int ConIntRes3; // @synthesize ConIntRes3;
@property(nonatomic) unsigned int ConIntRes2; // @synthesize ConIntRes2;
@property(nonatomic) unsigned int msgFlag; // @synthesize msgFlag;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_c6db074e *)db_ConIntRes1;
- (const WCDBCondition_22fabacd *)db_ConStrRes3;
- (const WCDBCondition_22fabacd *)db_ConStrRes2;
- (const WCDBCondition_22fabacd *)db_ConStrRes1;
- (const WCDBCondition_22fabacd *)db_msgIdentify;
- (const WCDBCondition_22fabacd *)db_msgSource;
- (const WCDBCondition_c6db074e *)db_ConIntRes3;
- (const WCDBCondition_c6db074e *)db_ConIntRes2;
- (const WCDBCondition_c6db074e *)db_msgFlag;
- (const WCDBCondition_c6db074e *)db_msgLocalId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


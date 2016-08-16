//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCDBCoding-Protocol.h"

@class NSString;

@interface DBSendMessage : NSObject <WCDBCoding>
{
    unsigned int version;
    unsigned int msgLocalId;
    unsigned int createTime;
    unsigned int status;
    unsigned int imageStatus;
    unsigned int type;
    unsigned int des;
    NSString *userName;
    long long msgServerId;
    NSString *message;
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
@property(nonatomic) unsigned int des; // @synthesize des;
@property(nonatomic) unsigned int type; // @synthesize type;
@property(nonatomic) unsigned int imageStatus; // @synthesize imageStatus;
@property(nonatomic) unsigned int status; // @synthesize status;
@property(retain, nonatomic) NSString *message; // @synthesize message;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(nonatomic) long long msgServerId; // @synthesize msgServerId;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
@property(nonatomic) unsigned int version; // @synthesize version;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_c6db074e *)db_des;
- (const WCDBCondition_c6db074e *)db_type;
- (const WCDBCondition_c6db074e *)db_imageStatus;
- (const WCDBCondition_c6db074e *)db_status;
- (const WCDBCondition_22fabacd *)db_message;
- (const WCDBCondition_c6db074e *)db_createTime;
- (const WCDBCondition_94982106 *)db_msgServerId;
- (const WCDBCondition_c6db074e *)db_msgLocalId;
- (const WCDBCondition_22fabacd *)db_userName;
- (const WCDBCondition_c6db074e *)db_version;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


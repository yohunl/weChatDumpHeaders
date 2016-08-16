//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMResInfo.h"

#import "WCDBCoding-Protocol.h"

@class NSString;

@interface MMWCResInfo : MMResInfo <WCDBCoding>
{
    NSString *configId;
    NSString *packageId;
    NSString *resUrl;
    NSString *protocol;
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
@property(retain, nonatomic) NSString *protocol; // @synthesize protocol;
@property(retain, nonatomic) NSString *resUrl; // @synthesize resUrl;
@property(retain, nonatomic) NSString *packageId; // @synthesize packageId;
@property(retain, nonatomic) NSString *configId; // @synthesize configId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *fullPath;
- (id)init;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_22fabacd *)db_protocol;
- (const WCDBCondition_22fabacd *)db_resUrl;
- (const WCDBCondition_22fabacd *)db_packageId;
- (const WCDBCondition_22fabacd *)db_configId;
- (const WCDBCondition_d7690721 *)db_isTemp;
- (const WCDBCondition_c6db074e *)db_supportVersion;
- (const WCDBCondition_c6db074e *)db_fileId;
- (const WCDBCondition_c6db074e *)db_resSubType;
- (const WCDBCondition_d7690721 *)db_isCompress;
- (const WCDBCondition_d7690721 *)db_isEncrypt;
- (const WCDBCondition_7786cbb5 *)db_chunkLength;
- (const WCDBCondition_c6db074e *)db_resType;
- (const WCDBCondition_c6db074e *)db_crc32;
- (const WCDBCondition_7786cbb5 *)db_offset;
- (const WCDBCondition_7786cbb5 *)db_size;
- (const WCDBCondition_c6db074e *)db_accessTime;
- (const WCDBCondition_c6db074e *)db_expireTime;
- (const WCDBCondition_c6db074e *)db_createTime;
- (const WCDBCondition_22fabacd *)db_localSubPath;
- (const WCDBCondition_22fabacd *)db_version;
- (const WCDBCondition_22fabacd *)db_domain;
- (const WCDBCondition_22fabacd *)db_appId;
- (const WCDBCondition_22fabacd *)db_resMd5;
- (const WCDBCondition_22fabacd *)db_resUrlMd5;
- (const WCDBCondition_c6db074e *)db_resInfoId;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying-Protocol.h"
#import "WCDBCoding-Protocol.h"

@class NSString;

@interface WCOutRecentCallItem : MMObject <WCDBCoding, NSCopying>
{
    unsigned int localID;
    unsigned int createTime;
    unsigned int startTime;
    unsigned int endTime;
    unsigned int statusCode;
    unsigned int _dialScene;
    unsigned int _countyrCodeType;
    NSString *countryCode;
    NSString *phoneNum;
    long long m___rowID;
    NSString *nickName;
    NSString *phoneTag;
    NSString *_checkCountryCode;
    NSString *_inviteRespFullPhoneNum;
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
@property(nonatomic) unsigned int countyrCodeType; // @synthesize countyrCodeType=_countyrCodeType;
@property(nonatomic) unsigned int dialScene; // @synthesize dialScene=_dialScene;
@property(retain, nonatomic) NSString *inviteRespFullPhoneNum; // @synthesize inviteRespFullPhoneNum=_inviteRespFullPhoneNum;
@property(retain, nonatomic) NSString *checkCountryCode; // @synthesize checkCountryCode=_checkCountryCode;
@property(retain, nonatomic) NSString *phoneTag; // @synthesize phoneTag;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(nonatomic) unsigned int statusCode; // @synthesize statusCode;
@property(nonatomic) unsigned int endTime; // @synthesize endTime;
@property(nonatomic) unsigned int startTime; // @synthesize startTime;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(retain, nonatomic) NSString *phoneNum; // @synthesize phoneNum;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode;
@property(nonatomic) unsigned int localID; // @synthesize localID;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *fullPhoneNumInLog;
@property(readonly, nonatomic) NSString *fullPhoneNum;
@property(readonly, nonatomic) NSString *statusWording;
- (void)dealloc;
- (void)CopyValueToCopy:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_c6db074e *)db_statusCode;
- (const WCDBCondition_c6db074e *)db_endTime;
- (const WCDBCondition_c6db074e *)db_startTime;
- (const WCDBCondition_c6db074e *)db_createTime;
- (const WCDBCondition_22fabacd *)db_phoneNum;
- (const WCDBCondition_22fabacd *)db_countryCode;
- (const WCDBCondition_c6db074e *)db_localID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


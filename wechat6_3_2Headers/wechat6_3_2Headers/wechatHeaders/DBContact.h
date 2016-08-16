//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCDBCoding-Protocol.h"

@class NSData, NSString;

@interface DBContact : NSObject <WCDBCoding>
{
    unsigned int version;
    unsigned int uin;
    unsigned int sex;
    unsigned int type;
    unsigned int LastChatTime;
    NSString *userName;
    NSString *nickName;
    NSString *email;
    NSString *mobile;
    NSString *fullPinYin;
    NSData *extent;
    NSString *image;
    NSString *draft;
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
@property(retain, nonatomic) NSString *draft; // @synthesize draft;
@property(nonatomic) unsigned int LastChatTime; // @synthesize LastChatTime;
@property(nonatomic) unsigned int type; // @synthesize type;
@property(retain, nonatomic) NSString *image; // @synthesize image;
@property(retain, nonatomic) NSData *extent; // @synthesize extent;
@property(retain, nonatomic) NSString *fullPinYin; // @synthesize fullPinYin;
@property(nonatomic) unsigned int sex; // @synthesize sex;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile;
@property(retain, nonatomic) NSString *email; // @synthesize email;
@property(nonatomic) unsigned int uin; // @synthesize uin;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
@property(nonatomic) unsigned int version; // @synthesize version;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_22fabacd *)db_draft;
- (const WCDBCondition_c6db074e *)db_LastChatTime;
- (const WCDBCondition_c6db074e *)db_type;
- (const WCDBCondition_22fabacd *)db_image;
- (const WCDBCondition_91e67114 *)db_extent;
- (const WCDBCondition_22fabacd *)db_fullPinYin;
- (const WCDBCondition_c6db074e *)db_sex;
- (const WCDBCondition_22fabacd *)db_mobile;
- (const WCDBCondition_22fabacd *)db_email;
- (const WCDBCondition_c6db074e *)db_uin;
- (const WCDBCondition_22fabacd *)db_nickName;
- (const WCDBCondition_22fabacd *)db_userName;
- (const WCDBCondition_c6db074e *)db_version;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


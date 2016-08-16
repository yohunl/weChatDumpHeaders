//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ChatRoomUpgradeInfo : NSObject
{
    unsigned int chatRoomLevel;
    unsigned int maxMemberCount;
    NSString *chatRoomName;
    NSString *desc;
    NSArray *productList;
    NSString *bannerIconUrl;
    NSString *bannerBgUrl;
    NSString *bannerDesc;
    NSString *bannerAction;
    _Bool needVerifyPersonal;
    unsigned int productStatus;
    unsigned int bannerActionType;
}

+ (void)initialize;
@property(nonatomic) unsigned int bannerActionType; // @synthesize bannerActionType;
@property(nonatomic) unsigned int productStatus; // @synthesize productStatus;
@property(nonatomic) _Bool needVerifyPersonal; // @synthesize needVerifyPersonal;
@property(retain, nonatomic) NSString *bannerAction; // @synthesize bannerAction;
@property(retain, nonatomic) NSString *bannerDesc; // @synthesize bannerDesc;
@property(retain, nonatomic) NSString *bannerBgUrl; // @synthesize bannerBgUrl;
@property(retain, nonatomic) NSString *bannerIconUrl; // @synthesize bannerIconUrl;
@property(retain, nonatomic) NSArray *productList; // @synthesize productList;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *chatRoomName; // @synthesize chatRoomName;
@property(nonatomic) unsigned int maxMemberCount; // @synthesize maxMemberCount;
@property(nonatomic) unsigned int chatRoomLevel; // @synthesize chatRoomLevel;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

@end


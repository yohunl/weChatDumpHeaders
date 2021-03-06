//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSString;

@interface ShakeBeaconItem : NSObject <PBCoding, NSCoding, NSCopying>
{
    unsigned int createTime;
    unsigned int guideState;
    NSString *title;
    NSString *content;
    NSString *url;
    NSString *headImgUrlSmall;
    NSString *headImgUrlBig;
    NSString *uuid;
    NSString *major;
    NSString *minor;
    double distance;
    unsigned long long shopId;
}

+ (void)initialize;
@property(nonatomic) unsigned long long shopId; // @synthesize shopId;
@property(nonatomic) unsigned int guideState; // @synthesize guideState;
@property(nonatomic) double distance; // @synthesize distance;
@property(copy, nonatomic) NSString *minor; // @synthesize minor;
@property(copy, nonatomic) NSString *major; // @synthesize major;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(copy, nonatomic) NSString *headImgUrlBig; // @synthesize headImgUrlBig;
@property(copy, nonatomic) NSString *headImgUrlSmall; // @synthesize headImgUrlSmall;
@property(copy, nonatomic) NSString *url; // @synthesize url;
@property(copy, nonatomic) NSString *content; // @synthesize content;
@property(copy, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


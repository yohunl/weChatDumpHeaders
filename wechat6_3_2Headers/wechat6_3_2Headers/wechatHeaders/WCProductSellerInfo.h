//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCProductLocationInfo;

@interface WCProductSellerInfo : NSObject
{
    unsigned int flag;
    NSString *appID;
    NSString *usrName;
    NSString *name;
    WCProductLocationInfo *locationInfo;
    NSString *contactWay;
    NSString *logoImg;
}

@property(nonatomic) unsigned int flag; // @synthesize flag;
@property(retain, nonatomic) NSString *logoImg; // @synthesize logoImg;
@property(retain, nonatomic) NSString *contactWay; // @synthesize contactWay;
@property(retain, nonatomic) WCProductLocationInfo *locationInfo; // @synthesize locationInfo;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *usrName; // @synthesize usrName;
@property(retain, nonatomic) NSString *appID; // @synthesize appID;
- (void).cxx_destruct;

@end

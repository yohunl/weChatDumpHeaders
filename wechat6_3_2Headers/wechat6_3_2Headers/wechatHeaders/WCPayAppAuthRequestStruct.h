//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayAppAuthRequestStruct : NSObject
{
    NSString *appId;
    NSString *partnerId;
    NSString *prepayId;
    NSString *nonceStr;
    NSString *timeStamp;
    NSString *package;
    NSString *sign;
    NSString *signType;
    NSString *scene;
}

@property(retain, nonatomic) NSString *scene; // @synthesize scene;
@property(retain, nonatomic) NSString *signType; // @synthesize signType;
@property(retain, nonatomic) NSString *timeStamp; // @synthesize timeStamp;
@property(retain, nonatomic) NSString *sign; // @synthesize sign;
@property(retain, nonatomic) NSString *prepayId; // @synthesize prepayId;
@property(retain, nonatomic) NSString *partnerId; // @synthesize partnerId;
@property(retain, nonatomic) NSString *package; // @synthesize package;
@property(retain, nonatomic) NSString *nonceStr; // @synthesize nonceStr;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
- (void).cxx_destruct;
- (void)dealloc;

@end


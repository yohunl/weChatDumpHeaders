//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface PublicWifiGetA8keyResult : MMObject
{
    NSString *_ssid;
    NSString *_qrCode;
    NSString *_mpUrl;
    NSString *_mid;
    NSString *_sessionKey;
    NSString *_ticket;
    NSString *_appId;
    NSString *_shopId;
    NSString *_authUrl;
    NSString *_extend;
    NSString *_timestamp;
    NSString *_sign;
}

@property(copy, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *extend; // @synthesize extend=_extend;
@property(copy, nonatomic) NSString *authUrl; // @synthesize authUrl=_authUrl;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(copy, nonatomic) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(copy, nonatomic) NSString *mpUrl; // @synthesize mpUrl=_mpUrl;
@property(copy, nonatomic) NSString *qrCode; // @synthesize qrCode=_qrCode;
@property(copy, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
- (void).cxx_destruct;
- (id)initWithSsid:(id)arg1 withQRCode:(id)arg2;
- (void)dealloc;

@end


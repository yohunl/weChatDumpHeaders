//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSData;

@interface BaseRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int clientVersion; // @dynamic clientVersion;
@property(retain, nonatomic) NSData *deviceId; // @dynamic deviceId;
@property(retain, nonatomic) NSData *deviceType; // @dynamic deviceType;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSData *sessionKey; // @dynamic sessionKey;
@property(nonatomic) unsigned int uin; // @dynamic uin;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface IphoneRegRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *sound; // @dynamic sound;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(retain, nonatomic) NSString *token; // @dynamic token;
@property(nonatomic) unsigned int tokenCert; // @dynamic tokenCert;
@property(nonatomic) unsigned int tokenEnv; // @dynamic tokenEnv;
@property(nonatomic) unsigned int tokenScene; // @dynamic tokenScene;
@property(retain, nonatomic) NSString *voipSound; // @dynamic voipSound;

@end

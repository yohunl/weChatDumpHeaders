//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, DeepLinkBitSet, GeneralControlBitSet, JSAPIPermissionBitSet, NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface GetA8KeyResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *a8Key; // @dynamic a8Key;
@property(nonatomic) unsigned int actionCode; // @dynamic actionCode;
@property(retain, nonatomic) NSString *antispamTicket; // @dynamic antispamTicket;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) DeepLinkBitSet *deepLinkBitSet; // @dynamic deepLinkBitSet;
@property(retain, nonatomic) NSString *fullUrl; // @dynamic fullUrl;
@property(retain, nonatomic) GeneralControlBitSet *generalControlBitSet; // @dynamic generalControlBitSet;
@property(retain, nonatomic) SKBuiltinBuffer_t *jsapicontrolBytes; // @dynamic jsapicontrolBytes;
@property(retain, nonatomic) JSAPIPermissionBitSet *jsapipermission; // @dynamic jsapipermission;
@property(retain, nonatomic) NSString *mid; // @dynamic mid;
@property(nonatomic) unsigned int scopeCount; // @dynamic scopeCount;
@property(retain, nonatomic) NSMutableArray *scopeList; // @dynamic scopeList;
@property(retain, nonatomic) NSString *shareUrl; // @dynamic shareUrl;
@property(retain, nonatomic) NSString *ssid; // @dynamic ssid;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end


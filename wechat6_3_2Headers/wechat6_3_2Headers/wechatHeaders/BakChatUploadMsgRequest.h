//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BakChatMsgList, BaseRequest, NSString, SKBuiltinBuffer_t;

@interface BakChatUploadMsgRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bakChatClientId; // @dynamic bakChatClientId;
@property(nonatomic) unsigned int bakChatSvrId; // @dynamic bakChatSvrId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(retain, nonatomic) BakChatMsgList *data; // @dynamic data;
@property(retain, nonatomic) SKBuiltinBuffer_t *dataBuffer; // @dynamic dataBuffer;
@property(nonatomic) unsigned int dataLen; // @dynamic dataLen;

@end


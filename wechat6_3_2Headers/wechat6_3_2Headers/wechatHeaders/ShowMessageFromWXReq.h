//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseReq.h"

@class NSString, WXMediaMessage;

@interface ShowMessageFromWXReq : BaseReq
{
    WXMediaMessage *message;
    NSString *country;
    NSString *lang;
}

@property(retain, nonatomic) NSString *lang; // @synthesize lang;
@property(retain, nonatomic) NSString *country; // @synthesize country;
@property(retain, nonatomic) WXMediaMessage *message; // @synthesize message;
- (void).cxx_destruct;
- (id)init;

@end


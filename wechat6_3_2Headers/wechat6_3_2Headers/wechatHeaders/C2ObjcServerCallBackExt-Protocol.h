//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol C2ObjcServerCallBackExt <NSObject>
- (void)onDisconnect:(NSString *)arg1 port:(unsigned short)arg2;
- (void)onConnected:(NSString *)arg1 port:(unsigned short)arg2;
- (void)onRecv:(NSString *)arg1 port:(unsigned short)arg2 data:(NSData *)arg3 length:(unsigned int)arg4;
@end


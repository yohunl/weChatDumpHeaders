//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol ChatMigrationClientDataProcessMgrDelegate <NSObject>
- (void)onSizeNoGrow;
- (void)onTransferProgress:(unsigned int)arg1 procSize:(unsigned int)arg2;
- (void)onNotifyEvent:(int)arg1;
- (void)onProcError:(int)arg1;
- (void)onSendData:(NSData *)arg1;

@optional
- (_Bool)getLocalDiskCheckResult:(unsigned long long)arg1;
@end


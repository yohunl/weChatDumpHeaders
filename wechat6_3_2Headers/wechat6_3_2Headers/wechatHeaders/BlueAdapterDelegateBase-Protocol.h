//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol BlueAdapterDelegateBase <NSObject>

@optional
- (void)onStateChange:(int)arg1;
- (void)onDeviceLost:(long long)arg1;
- (void)onDeviceFound:(long long)arg1 WithExtData:(NSData *)arg2;
- (void)onDeviceFound:(long long)arg1;
@end


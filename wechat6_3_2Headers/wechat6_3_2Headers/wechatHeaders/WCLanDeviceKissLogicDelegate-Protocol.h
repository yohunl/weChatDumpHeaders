//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCDevice;

@protocol WCLanDeviceKissLogicDelegate <NSObject>
- (void)onDeviceFound:(WCDevice *)arg1;

@optional
- (void)onKissDeviceProgressUpdate:(double)arg1 device:(WCDevice *)arg2;
- (void)onKissDeviceWithDevice:(WCDevice *)arg1 errCode:(int)arg2;
@end


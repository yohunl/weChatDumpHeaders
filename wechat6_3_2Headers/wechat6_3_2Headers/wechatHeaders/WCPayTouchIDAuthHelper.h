//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface WCPayTouchIDAuthHelper : MMObject
{
}

+ (void)logAbTestItem:(id)arg1 transactionId:(id)arg2 event:(int)arg3;
+ (_Bool)isDeviceTouchIDAvailableAndNotJailBreak;
+ (_Bool)isDeviceTouchIDAvailable;
+ (_Bool)isDeviceTouchIDHardwareSupportedAndNotJailBreak;
+ (_Bool)isDeviceTouchIDHardwareSupported;
+ (_Bool)isDeviceJailBreak;
+ (_Bool)isInWhiteList:(id)arg1;
+ (_Bool)canUseTouchIDFromData:(id)arg1;
+ (void)showTouchIDAuthView:(id)arg1 whenSuccess:(CDUnknownBlockType)arg2 whenFail:(CDUnknownBlockType)arg3;

@end


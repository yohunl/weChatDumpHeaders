//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCDevice.h"

@interface WCDevice (AbilityDevice)
+ (_Bool)hasBoundValidDevices;
+ (_Bool)hasBoundAbilityDevices;
- (id)ownerDevice;
- (id)subDevices;
- (id)subDeviceMd5;
- (_Bool)isSubLanDevice;
- (_Bool)canApplyURL:(id)arg1;
- (id)getDeviceSupportUrls;
- (id)getExternalInfoDictionary;
- (_Bool)isValidDevice;
- (_Bool)hasAbility:(id)arg1;
@end


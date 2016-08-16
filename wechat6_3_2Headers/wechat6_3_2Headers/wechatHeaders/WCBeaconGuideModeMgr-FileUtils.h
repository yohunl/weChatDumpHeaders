//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBeaconGuideModeMgr.h"

@interface WCBeaconGuideModeMgr (FileUtils)
- (void)cleanGuideModeCache;
- (void)clearIsInShakeViewController;
- (void)markIsInShakeViewController;
- (_Bool)isInShakeViewController;
- (id)shakeVcFlagFilePath;
- (void)clearRedDot:(unsigned long long)arg1;
- (void)markRedDot:(unsigned long long)arg1;
- (_Bool)hasTabRedDot;
- (_Bool)hasShakeRedDot;
- (id)tabRedDotFlagFilePath;
- (id)shakeRedDotFlagFilePath;
- (_Bool)isDeviceHasBeenFirstReadWithUUID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (_Bool)isDeviceHasBeenDiscoveredWithUUID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (_Bool)isDeviceHasBeenReadWithUUID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (_Bool)updateRangedDeviceFirstReadStateByUUID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (_Bool)updateRangedDeviceDiscoverStateByUUID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (_Bool)updateRangedDeviceReadStateByUUID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (id)loadRangedDeviceByUUID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (_Bool)addHadRangedDevice:(id)arg1;
- (id)rangedDevicesFilePath;
- (unsigned int)getShakeTabDisplay;
- (unsigned int)getChannelOpenTime;
- (unsigned int)getChannelOpenMethod;
- (id)loadGuideSwitcgFromFile;
- (_Bool)saveGuideSwitch:(id)arg1;
- (id)guideSwitchFilePath;
- (void)clearLastFetchedContent;
- (id)loadLastFetchedContentFromFile;
- (_Bool)saveLastFetchedContent:(id)arg1;
- (id)lastFetchedContentFilePath;
- (unsigned long long)getShopId;
- (id)loadAuthorizationInfoFromFile;
- (_Bool)saveAuthorizationInfo:(id)arg1;
- (id)authorizedInfoFilePath;
@end


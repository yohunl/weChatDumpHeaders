//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSTNMgr.h"

#import "IAUAudioDeviceExt-Protocol.h"

@class NSString;

@interface PSTNMgr (AudioDeviceDelegate) <IAUAudioDeviceExt>
- (void)audioDeviceStartedFail:(id)arg1;
- (void)audioDeviceUnPluginHeadset:(id)arg1;
- (void)audioDevicePluginHeadset:(id)arg1;
- (void)audioDeviceFarawayEar:(id)arg1;
- (void)audioDeviceNearEar:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end


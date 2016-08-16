//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AUAudioDevice;

@protocol IAUAudioDeviceExt <NSObject>

@optional
- (void)audioDeviceStartedSuccess:(AUAudioDevice *)arg1;
- (void)audioDeviceStartedFail:(AUAudioDevice *)arg1;
- (void)audioDeviceRestart:(AUAudioDevice *)arg1;
- (void)audioDeviceResetCallback:(AUAudioDevice *)arg1;
- (void)audioDevicePause:(AUAudioDevice *)arg1;
- (void)audioDeviceForceStop:(AUAudioDevice *)arg1;
- (void)audioDeviceOutputMeterLevel:(AUAudioDevice *)arg1 Peak:(float)arg2;
- (void)audioDeviceInputMeterLevel:(AUAudioDevice *)arg1 Peak:(float)arg2;
- (void)audioDeviceUnPluginHeadset:(AUAudioDevice *)arg1;
- (void)audioDevicePluginHeadset:(AUAudioDevice *)arg1;
- (void)audioDeviceFarawayEar:(AUAudioDevice *)arg1;
- (void)audioDeviceNearEar:(AUAudioDevice *)arg1;
@end

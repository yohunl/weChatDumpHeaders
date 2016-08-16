//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IWCDeviceAccountMgrExt-Protocol.h"
#import "IWCDeviceBrandMgrExt-Protocol.h"

@class CContact, NSMutableArray, NSString;
@protocol BrandDeviceConnectLogicControllerDelegate;

@interface BrandDeviceConnectLogicController : MMObject <IWCDeviceBrandMgrExt, IWCDeviceAccountMgrExt>
{
    CContact *m_contact;
    int m_brandDeviceConnectedCount;
    NSMutableArray *m_devices;
    id <BrandDeviceConnectLogicControllerDelegate> m_delegate;
}

@property(nonatomic) __weak id <BrandDeviceConnectLogicControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onWCDeviceAccountUnbind:(id)arg1;
- (void)onWCDeviceAccountBound:(id)arg1;
- (void)onBlueProfilePedometerInfoUpdated:(long long)arg1 Info:(id)arg2;
- (void)onBlueProfileConnectStateChanged:(long long)arg1 State:(int)arg2 ErrorCode:(int)arg3;
- (void)onWCDeviceSessionTimeout:(long long)arg1;
- (void)onWCDeviceBlueToothStateChanged:(int)arg1;
- (void)onWCDeviceInitEnd:(int)arg1 DID:(long long)arg2 isHandled:(_Bool *)arg3;
- (void)onWCDeviceAuthEnd:(int)arg1 DID:(long long)arg2 isHandled:(_Bool *)arg3;
- (void)onWCDeviceChannelStateChanged:(long long)arg1:(int)arg2:(int)arg3;
- (void)onWCDeviceLost:(long long)arg1;
- (void)onWCDeviceFound:(long long)arg1 canHandled:(_Bool *)arg2;
- (void)onWCDeviceWifiStatusUpdate:(id)arg1 Status:(unsigned int)arg2;
- (void)showErrTips:(int)arg1;
- (void)scanTimeout;
- (void)stopScan;
- (void)restartScan;
- (void)startScan;
- (void)wifiStateUpdate;
- (void)updateSubTitle;
- (void)internalStartScan:(_Bool)arg1;
- (id)getDeviceForDid:(long long)arg1;
- (void)willEnterForeground;
- (id)initWithContact:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


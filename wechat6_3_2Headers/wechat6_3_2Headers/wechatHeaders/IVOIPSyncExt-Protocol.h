//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, VoipMultiRelayData;

@protocol IVOIPSyncExt

@optional
- (void)OnGotRemoteControlStatus:(unsigned int)arg1;
- (void)OnGotRemoteRelayData:(NSData *)arg1;
- (void)OnGotRemoteConnectData:(VoipMultiRelayData *)arg1;
- (void)OnGotRemoteStatus:(unsigned int)arg1;
- (void)OnSyncError:(int)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CBaseEvent, CLocalInfo, NSDictionary;

@protocol NotifyFromEventDelegate

@optional
- (CLocalInfo *)GetLocalInfo;
- (unsigned int)GetNetworkReachabilitySeed;
- (_Bool)IsLogIn;
- (void)SpeedyNotifyFromEvent:(CBaseEvent *)arg1 Message:(unsigned int)arg2 MessageInfo:(NSDictionary *)arg3;
- (void)NotifyFromEvent:(CBaseEvent *)arg1 Message:(unsigned int)arg2 MessageInfo:(NSDictionary *)arg3;
@end

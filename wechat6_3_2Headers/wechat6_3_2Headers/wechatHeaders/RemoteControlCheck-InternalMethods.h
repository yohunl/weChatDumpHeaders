//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RemoteControlCheck.h"

@interface RemoteControlCheck (InternalMethods)
- (void)unregisterNotify;
- (void)registerNotify;
- (void)endReceiveRemoteControlEvent:(unsigned int)arg1;
- (void)realEndReceiveRemoteControlEvent;
- (void)beginReceiveRemoteControlEvent:(unsigned int)arg1;
- (void)realBeginReceiveRemoteControlEvent;
- (void)plugin_off;
- (void)plugin_on;
- (_Bool)CanRecord;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VOIPMgr.h"

#import "ISysCallCheckExt-Protocol.h"

@interface VOIPMgr (Session) <ISysCallCheckExt>
- (void)GotMultiRelayData:(id)arg1;
- (void)StopSessionWithProtocolErr:(int)arg1;
- (void)StopSession;
- (void)StartSession;
- (int)SetServerAddr;
- (void)handleEnterForeground;
- (void)handleEnterBackground;
- (void)BeginInterruption;
- (void)TimerCheck;
- (void)UnInitAll;
- (void)resetCameraDevice;
- (void)InitAll;
@end


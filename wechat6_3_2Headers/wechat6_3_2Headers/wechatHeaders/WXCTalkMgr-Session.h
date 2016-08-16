//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXCTalkMgr.h"

#import "WXCCNetworkStatusExt-Protocol.h"

@interface WXCTalkMgr (Session) <WXCCNetworkStatusExt>
- (void)heartbeatTimeoutFire;
- (void)stopHeartbeatTimeoutTimer;
- (void)restartHeartbeatTimeoutTimer;
- (void)OnNotifyMP:(long long)arg1 Param:(int)arg2 ViewId:(int)arg3;
- (void)OnReportChannel:(id)arg1;
- (void)OnReportEngineSend:(id)arg1;
- (void)OnReportEngineRecv:(id)arg1 memberId:(int)arg2;
- (void)onReceOtherMemberData;
- (void)OnEngineError:(int)arg1;
- (void)OnOpenEngineSuccess;
- (void)OnNetworkChanged:(id)arg1;
- (void)NotifyMainThreadEngineError:(id)arg1;
- (void)NotifyMainThreadDataConnected;
- (void)StopSession;
- (void)RedirectTo:(id)arg1 withEngineConf:(id)arg2 withHeadSignArray:(id)arg3 withIsEncode:(_Bool)arg4;
- (void)StartSession:(id)arg1 withEngineConf:(id)arg2 withHeadSignArray:(id)arg3 withIsEncode:(_Bool)arg4;
- (void)onAllNetworkChange:(id)arg1;
- (void)CloseRecordDumpFile;
- (void)CreateRecordDumpFile;
- (void)TimerCheck;
- (void)SendHeartBeatRequest;
- (_Bool)checkFriendHasEnterRoom;
- (void)WXCReachabilityChange:(unsigned int)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSTNMgr.h"

@interface PSTNMgr (SendRequest)
- (void)SendCheckNumberRequest:(id)arg1;
- (void)SendRedirectRequest;
- (void)SendStatReportRequest;
- (void)SendHeartbeatRequest;
- (void)SendShutdownRequest;
- (void)SendCancelInviteRequest;
- (void)SendInviteRequestBy:(id)arg1 phoneNum:(id)arg2 withCallType:(int)arg3 DialScene:(unsigned int)arg4 CountryCodeFrom:(unsigned int)arg5;
- (void)SetReportData:(id *)arg1 channelReport:(id *)arg2 engineReport:(id *)arg3;
@end


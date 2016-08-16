//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableSet, NSString;

@interface EnterpriseChatMgr : MMService <MMService, PBMessageObserverDelegate>
{
    NSMutableSet *m_markingMsgRead;
    NSMutableSet *m_pendingMarkMsgRead;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)clearUnReadForRemoteDevice:(id)arg1;
- (void)onRemoteDeviceMarkChatRead:(id)arg1;
- (void)onRemoteDeviceQuitChat:(id)arg1;
- (void)onRemoteDeviceEnterChat:(id)arg1;
- (void)statusNotifyMarkRead:(id)arg1;
- (void)statusNotifyQuitSession:(id)arg1;
- (void)statusNotifyEnterSession:(id)arg1;
- (void)handleStatusNotifyResp:(id)arg1;
- (void)statusNotify:(id)arg1 code:(int)arg2 arg:(id)arg3;
- (unsigned int)genRandomClienMsgId;
- (void)handleQyMsgStateNotifyResp:(id)arg1;
- (void)qyStatusNotify:(id)arg1 bizChatId:(id)arg2;
- (void)markChatRead:(id)arg1;
- (void)quitChat:(id)arg1;
- (void)enterChat:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


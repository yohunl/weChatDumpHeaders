//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VOIPCSSyncMgr.h"

#import "PBMessageObserverDelegate-Protocol.h"

@interface VOIPCSSyncMgr (RecvResponse) <PBMessageObserverDelegate>
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipCSSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)retriveKeyFrom:(id)arg1 StatusKey:(unsigned int *)arg2 RelayKey:(unsigned int *)arg3 ConnectingKey:(unsigned int *)arg4;
- (_Bool)isSyncKeyNew:(id)arg1;
- (_Bool)isCSNotifySeqNew:(unsigned int)arg1;
- (void)check_next_sync;
@end


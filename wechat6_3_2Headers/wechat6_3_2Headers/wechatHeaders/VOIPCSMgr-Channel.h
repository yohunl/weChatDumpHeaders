//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VOIPCSMgr.h"

@interface VOIPCSMgr (Channel)
- (void)DataNotify_pp:(char *)arg1 len:(int)arg2 param:(short)arg3;
- (void)DataNotify_Arq:(char *)arg1 len:(int)arg2 type:(unsigned char)arg3;
- (void)DataNotify:(char *)arg1 len:(int)arg2;
- (void)OnCSVoipNotify:(id)arg1;
- (int)OnTransportChannelData:(int)arg1 pData:(void *)arg2 len:(int)arg3;
- (void)StopCSTalk;
- (void)StartCSTalk;
- (void)ConnectFail:(id)arg1;
- (void)NetworkErr:(id)arg1;
- (void)TalkBroken:(id)arg1;
- (int)OnCSChannelEvent:(unsigned short)arg1 ErrNo:(int)arg2;
- (void)StopCSConnect;
- (void)StartCSConnect;
- (int)InitVoipCSChannel;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CMultiEvent.h"

@class NSString;

@interface CGetSxEvent : CMultiEvent
{
    unsigned int m_uiSyncCount;
    NSString *m_nsLastSyncKeyMD5;
}

- (void).cxx_destruct;
- (void)NotifyFromEvent:(id)arg1 Message:(unsigned int)arg2 MessageInfo:(id)arg3;
- (_Bool)CreateSyncEvent;
- (void)Stop;
- (_Bool)Start:(unsigned int *)arg1 RetInfo:(id)arg2;
- (void)TimerCheckEvent;
- (_Bool)SetEventInfo:(id)arg1;
- (void)dealloc;
- (id)init;

@end

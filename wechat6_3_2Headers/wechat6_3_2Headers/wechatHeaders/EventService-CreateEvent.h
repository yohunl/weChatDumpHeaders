//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EventService.h"

@interface EventService (CreateEvent)
- (unsigned int)AddEvent:(id)arg1;
- (unsigned int)CreateEvent:(unsigned int)arg1 EventInfo:(id)arg2 Flag:(unsigned int)arg3 Ret:(unsigned int *)arg4 RetInfo:(id)arg5 Delegate:(id)arg6 MultiEvent:(id)arg7;
- (unsigned int)CreateEvent:(unsigned int)arg1 EventInfo:(id)arg2 Flag:(unsigned int)arg3 Ret:(unsigned int *)arg4 RetInfo:(id)arg5;
- (unsigned int)CreateEvent:(unsigned int)arg1 EventInfo:(id)arg2 Flag:(unsigned int)arg3 Ret:(unsigned int *)arg4 RetInfo:(id)arg5 Delegate:(id)arg6;
- (unsigned int)CreateEvent:(unsigned int)arg1 EventInfo:(id)arg2 Flag:(unsigned int)arg3 Ret:(unsigned int *)arg4 RetInfo:(id)arg5 LogicDelegate:(id)arg6;
- (unsigned int)CreateEvent:(unsigned int)arg1 EventInfo:(id)arg2 Flag:(unsigned int)arg3 Ret:(unsigned int *)arg4 RetInfo:(id)arg5 Delegate:(id)arg6 LogicDelegate:(id)arg7;
- (unsigned int)CreateEvent:(unsigned int)arg1 EventInfo:(id)arg2 Flag:(unsigned int)arg3 Ret:(unsigned int *)arg4 RetInfo:(id)arg5 Delegate:(id)arg6 LogicDelegate:(id)arg7 MultiEvent:(id)arg8;
@end


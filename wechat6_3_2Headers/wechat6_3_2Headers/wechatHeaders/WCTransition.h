//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSDictionary, WCEvent, WCState;

@interface WCTransition : MMObject
{
    WCEvent *_event;
    WCState *_sourceState;
    NSDictionary *_userInfo;
}

@property(readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) WCState *sourceState; // @synthesize sourceState=_sourceState;
@property(readonly, nonatomic) WCEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) WCState *destinationState;
- (id)initWithEvent:(id)arg1 fromState:(id)arg2 userInfo:(id)arg3;

@end


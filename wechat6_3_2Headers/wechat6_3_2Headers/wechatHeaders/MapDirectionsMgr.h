//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;

@interface MapDirectionsMgr : MMService <PBMessageObserverDelegate, MMService>
{
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (CDStruct_c3b9c2ee *)parseRouteWithRouteArray:(id)arg1 outCount:(unsigned long long *)arg2;
- (void)requestDirections:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@protocol WCFindFriendLogicDelegate;

@interface WCFindFriendLogic : MMObject <PBMessageObserverDelegate>
{
    id <WCFindFriendLogicDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleRespForListMFriend:(id)arg1;
- (_Bool)checkMFriendList:(id)arg1 arrMobile:(id)arg2 arrEmail:(id)arg3;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end


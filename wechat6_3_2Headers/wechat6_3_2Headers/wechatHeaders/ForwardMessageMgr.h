//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "MMService-Protocol.h"

@class ForwardMessageLogicController, NSString, UIViewController;

@interface ForwardMessageMgr : MMService <MMService, ForwardMessageLogicDelegate>
{
    ForwardMessageLogicController *m_forwardLogicController;
    UIViewController *m_forwardFromViewController;
}

- (void).cxx_destruct;
- (void)forwardMessageToBrand:(id)arg1 toContact:(id)arg2 fromViewController:(id)arg3;
- (void)forwardMessage:(id)arg1 fromViewController:(id)arg2;
- (id)getCurrentViewController;
- (void)onServiceClearData;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

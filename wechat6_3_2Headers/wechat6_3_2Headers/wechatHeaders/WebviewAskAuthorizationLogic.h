//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class NSMutableArray, NSString, WebviewAuthorizationCache, WebviewAuthorizationInfo;

@interface WebviewAskAuthorizationLogic : MMObject <PBMessageObserverDelegate, UIAlertViewDelegate>
{
    WebviewAuthorizationCache *_authCache;
    NSMutableArray *_needCheckQueue;
    WebviewAuthorizationInfo *_willSetScopeInfo;
    NSMutableArray *_willSetScopeList;
    NSString *_alertTitle;
    _Bool _isQueueHandling;
}

- (void).cxx_destruct;
- (id)getScopeListStrFromArray:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)structCGI:(id)arg1 withType:(unsigned int)arg2 withUserData:(id)arg3;
- (void)onSetScopeReq:(id)arg1 scopeResp:(id)arg2;
- (void)setScopeAuthInfo:(id)arg1 scopeInfoList:(id)arg2;
- (void)onCheckScopeReq:(id)arg1 scopeResp:(id)arg2 authInfo:(id)arg3;
- (void)checkScopeAuthInfo;
- (void)askUserAuthInfo:(id)arg1;
- (void)askSvrAuthInfo:(id)arg1;
- (void)askAuthInfo:(id)arg1;
- (void)updateScopeInfoList:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "MMWebViewDelegate-Protocol.h"

@class NSString;

@interface WCAccountSecurityCenterLogic : WCAccountBaseControlLogic <MMWebViewDelegate>
{
    NSString *rid;
}

- (void).cxx_destruct;
- (void)accessDeepLink:(id)arg1 Url:(id)arg2 Webview:(id)arg3;
- (_Bool)canAccessDeepLink:(id)arg1 Url:(id)arg2 Webview:(id)arg3;
- (void)webViewReturn:(id)arg1;
- (id)getLoginViewNameDeepLink:(id)arg1 Url:(id)arg2;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


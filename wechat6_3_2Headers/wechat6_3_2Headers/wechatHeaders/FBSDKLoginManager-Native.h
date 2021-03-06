//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBSDKLoginManager.h"

#import "FBSDKURLOpening-Protocol.h"

@class NSString;

@interface FBSDKLoginManager (Native) <FBSDKURLOpening>
- (void)handleImplicitCancelOfLogIn;
- (void)applicationDidBecomeActive:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)tryOpenURL:(id)arg1;
- (_Bool)performBrowserLogInWithParameters:(id)arg1 error:(id *)arg2;
- (_Bool)performNativeLogInWithParameters:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end


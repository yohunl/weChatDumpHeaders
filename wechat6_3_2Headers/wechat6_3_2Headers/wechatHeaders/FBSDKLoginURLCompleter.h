//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKLoginCompleting-Protocol.h"

@class FBSDKLoginCompletionParameters;
@protocol NSObject;

@interface FBSDKLoginURLCompleter : NSObject <FBSDKLoginCompleting>
{
    FBSDKLoginCompletionParameters *_parameters;
    id <NSObject> _observer;
    _Bool _performExplicitFallback;
}

- (void).cxx_destruct;
- (void)attemptBrowserLogIn:(id)arg1;
- (void)setErrorWithDictionary:(id)arg1;
- (void)setParametersWithDictionary:(id)arg1 appID:(id)arg2;
- (void)completeLogIn:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)initWithURLParameters:(id)arg1 appID:(id)arg2;

@end


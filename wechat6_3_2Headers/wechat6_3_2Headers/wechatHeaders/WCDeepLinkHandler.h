//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCDeepLinkHandler : NSObject
{
}

+ (id)visibleViewController:(id)arg1;
+ (void)jumpDeepLinkWithoutBitSetControl:(id)arg1 animation:(_Bool)arg2;
+ (void)jumpDeepLink:(id)arg1;
+ (void)jumpDeepLink:(id)arg1 animation:(_Bool)arg2;
+ (_Bool)isDeepLink:(id)arg1;
+ (id)deepLinkByUrl:(id)arg1;
+ (id)getDeepLinkNameFromUrl:(id)arg1;
+ (id)deepLinkByName:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CContact, NSArray, NSString;

@protocol IStrangerContactMgrExt <NSObject>

@optional
- (void)onStrangerContactUpdateForbidden:(NSString *)arg1;
- (void)onStrangerContactUpdated:(NSString *)arg1 Contact:(CContact *)arg2;
- (void)onStrangerContactUpdated:(NSArray *)arg1;
@end


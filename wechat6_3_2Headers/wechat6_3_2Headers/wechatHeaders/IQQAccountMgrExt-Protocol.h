//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BindQQResponse;

@protocol IQQAccountMgrExt <NSObject>

@optional
- (void)OnLocalUnBindQQFail;
- (void)OnLocalUnBindQQOK;
- (void)OnUnBindQQFail;
- (void)OnUnBindQQOK;
- (void)OnBindQQOK;
- (void)OnBindQQErrorReturn:(BindQQResponse *)arg1;
@end


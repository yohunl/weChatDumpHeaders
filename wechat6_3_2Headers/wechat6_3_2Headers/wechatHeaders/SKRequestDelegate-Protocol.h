//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SKRequest;

@protocol SKRequestDelegate <NSObject>

@optional
- (void)request:(SKRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)requestDidFinish:(SKRequest *)arg1;
@end


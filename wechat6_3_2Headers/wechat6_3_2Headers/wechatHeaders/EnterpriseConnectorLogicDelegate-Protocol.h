//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EnterpriseConnectorLogic, NSString;

@protocol EnterpriseConnectorLogicDelegate <NSObject>

@optional
- (void)onEnterpriseConnectFail:(EnterpriseConnectorLogic *)arg1;
- (void)onEnterpriseConnectSucceed:(EnterpriseConnectorLogic *)arg1;
- (void)onEnterpriseSelectChat:(NSString *)arg1 brand:(NSString *)arg2 logic:(EnterpriseConnectorLogic *)arg3;
- (void)onEnterpriseSelectBrand:(NSString *)arg1 logic:(EnterpriseConnectorLogic *)arg2;
@end


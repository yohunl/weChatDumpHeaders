//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseControlMgr.h"

@interface WCMallControlMgr : WCBaseControlMgr
{
}

- (unsigned int)startFunctionJumpToMobileRecharge:(id)arg1;
- (unsigned int)startFunctionJumpWCMall:(id)arg1 WithFunctionID:(id)arg2 AppID:(id)arg3;
- (unsigned int)startFunctionJumpWCMall:(id)arg1 WithEvent:(id)arg2 StepUrl:(id)arg3;
- (unsigned int)startNewFunctionActivityPay:(id)arg1 With:(id)arg2 PayData:(id)arg3;
- (unsigned int)startFunctionActivityPay:(id)arg1 With:(id)arg2 PayData:(id)arg3;
- (unsigned int)startNewFunctionActivityPay:(id)arg1 With:(id)arg2 PayData:(id)arg3 FirstStepToProductsView:(_Bool)arg4;
- (unsigned int)startFunctionActivityPay:(id)arg1 With:(id)arg2 PayData:(id)arg3 FirstStepToProductsView:(_Bool)arg4;
- (unsigned int)startFunctionActivityList:(id)arg1 With:(id)arg2;

@end

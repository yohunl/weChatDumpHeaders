//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCPayOrderDetailHistoryViewControllerDelegate-Protocol.h"

@class NSString;

@interface WCPayPaidSuccessLogic : WCPayControlLogic <WCPayOrderDetailHistoryViewControllerDelegate>
{
    int m_eWCPayPaidSuccessLogicWCPaySituationType;
}

- (void)OnSelectedSuccessBtnDown;
- (void)OnClickedBrandAppUserName:(id)arg1 NickName:(id)arg2;
- (void)OnHistoryOrderDetailRightActionBack:(_Bool)arg1;
- (void)OnHistoryOrderDetailBack:(_Bool)arg1;
- (void)stopLogic;
- (void)startLogic;
- (void)convertIAPOrderDetailToWCPayOrderDetailStruct;
- (void)setPayPaidSuccessLogicSituationType:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


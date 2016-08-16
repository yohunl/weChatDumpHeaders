//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString, WCPayTradeFavInfo;

@interface WCPayCouponsLogicMgr : MMService <MMService>
{
    WCPayTradeFavInfo *m_oWCPayTradeFavInfo;
    NSMutableDictionary *m_dicFavorItemInComponseInfo;
}

- (void).cxx_destruct;
- (id)GetBankFavorItemAndCouponsInfo;
- (id)GetWCPayTradeFavInfo;
- (void)ClearBankFavorInfo;
- (id)AutoAdjustCouponsInfoForSelectedCard:(id)arg1 BalanceBankType:(id)arg2;
- (id)ResetComposeInfo:(id)arg1;
- (id)DeselectTradeFavItem:(id)arg1;
- (id)SelectTradeFavItem:(id)arg1;
- (void)ResetTradeFavInfo:(id)arg1;
- (void)autoChangeTradeFavorItemStatusToAdjustConpons;
- (void)onServiceClearData;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


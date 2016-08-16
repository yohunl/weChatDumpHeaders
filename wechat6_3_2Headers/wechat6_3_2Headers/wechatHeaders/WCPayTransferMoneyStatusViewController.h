//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt-Protocol.h"

@class NSString;
@protocol WCPayTransferMoneyStatusViewControllerDelegate;

@interface WCPayTransferMoneyStatusViewController : WCPayBaseViewController <ILinkEventExt>
{
    id <WCPayTransferMoneyStatusViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)OnRealnameSucceed;
- (void)OnConfirmTransferMoneyBtnDone;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadTableView;
- (void)initNavigationBar;
- (void)OnHistoryOrderDetailBack;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt-Protocol.h"

@class NSString, UIButton, WCBaseTextFieldItem, WCPayMoneyTextFieldItem;
@protocol WCPayFacingReceiveFixedAmountViewControllerDelegate;

@interface WCPayFacingReceiveFixedAmountViewController : WCPayBaseViewController <ILinkEventExt>
{
    UIButton *m_footerButton;
    id <WCPayFacingReceiveFixedAmountViewControllerDelegate> m_delegate;
    WCPayMoneyTextFieldItem *m_textFieldItem;
    WCBaseTextFieldItem *m_descTextFieldItem;
    _Bool m_bLoadDescTextField;
    NSString *_remark;
}

@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
- (void).cxx_destruct;
- (void)remarkCancel:(id)arg1;
- (void)remarkConfirm:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)setDelegate:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)refreshViewWithData:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onNext;
- (void)viewDidLoad;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)reloadTableView;
- (void)initNavigationBar;
- (void)FillSaveMoneyCancel;
- (void)initFooterView;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


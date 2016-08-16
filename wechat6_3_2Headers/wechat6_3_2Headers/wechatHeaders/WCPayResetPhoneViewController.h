//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt-Protocol.h"

@class NSString, UIButton, WCBaseKeyboardToolBar, WCBizInfoGroup, WCPayPhoneTextItem;
@protocol WCPayResetPhoneViewViewControllerDelegate;

@interface WCPayResetPhoneViewController : WCPayBaseViewController <ILinkEventExt>
{
    UIButton *m_footerButton;
    WCBizInfoGroup *m_group;
    WCPayPhoneTextItem *m_textFieldItem;
    WCBaseKeyboardToolBar *m_keyboardBar;
    id <WCPayResetPhoneViewViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onPhoneClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)showDetailTip;
- (void)reloadTableView;
- (void)initNavigationBar;
- (void)initFooterView;
- (void)onNext;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


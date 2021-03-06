//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class UIButton, WCPayPwdCtrlPanelView;
@protocol WCPayPayPwdViewControllerDelegate;

@interface WCPayPayPwdViewController : WCPayBaseViewController
{
    UIButton *m_footerButton;
    WCPayPwdCtrlPanelView *m_VerifyView;
    WCPayPwdCtrlPanelView *m_FirstView;
    WCPayPwdCtrlPanelView *m_SecondView;
    WCPayPwdCtrlPanelView *m_currentView;
    id <WCPayPayPwdViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)setNavigationBarTitle:(id)arg1 Stype:(int)arg2;
- (void)resignInputViewFirstResponse;
- (void)clearPwdInput;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onNext;
- (void)setFooterBtnTitle:(id)arg1;
- (void)showSecondPwdCtrlWithTip:(id)arg1 withShowFooterButton:(_Bool)arg2;
- (void)showSetPwdCtrlWithTip:(id)arg1 fromError:(_Bool)arg2;
- (void)showSetPwdCtrlWithTip:(id)arg1;
- (void)showVerifyPwdCtrlWithTip:(id)arg1;
- (void)showVerifyPwdCtrlWithTip:(id)arg1 withShowFooterButton:(_Bool)arg2;
- (void)showViewWithCurrentView:(id)arg1 NextView:(id)arg2;
- (void)initNavigationBar;
- (void)setDelegate:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)refreshViewWithData:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)initFooterView;
- (void)dealloc;
- (id)init;

@end


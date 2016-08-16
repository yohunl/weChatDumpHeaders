//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "contactVerifyLogicDelegate-Protocol.h"

@class CContact, CContactVerifyLogic, CMessageWrap, MMTableView, NSString, UISwitch, UITextField;
@protocol SendVerifyMsgViewControllerDelegate;

@interface SendVerifyMsgViewController : MMUIViewController <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate, contactVerifyLogicDelegate>
{
    CContact *m_oVerifyContact;
    UITextField *m_tfVerifyMsg;
    MMTableView *m_tableView;
    UISwitch *m_swWCOutsider;
    CContactVerifyLogic *m_oContactVerifyLogic;
    CContact *m_oChatContact;
    CMessageWrap *m_oSourceMsg;
    id <SendVerifyMsgViewControllerDelegate> _m_delegate;
}

@property(nonatomic) __weak id <SendVerifyMsgViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) CMessageWrap *m_oSourceMsg; // @synthesize m_oSourceMsg;
@property(retain, nonatomic) CContact *m_oChatContact; // @synthesize m_oChatContact;
@property(retain, nonatomic) CContact *m_oVerifyContact; // @synthesize m_oVerifyContact;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)updateWordCount:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)contactVerifyOk:(id)arg1 opCode:(unsigned int)arg2;
- (void)onContactVerifyFail;
- (void)onSendVerifyMsg;
- (void)onHideKeyBoard;
- (void)onReturn;
- (void)onCancel;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


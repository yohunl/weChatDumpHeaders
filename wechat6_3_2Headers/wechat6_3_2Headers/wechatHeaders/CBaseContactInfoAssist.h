//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IContactMgrExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "contactVerifyLogicDelegate-Protocol.h"

@class CContact, MMHDHeadImageView, MMHeadImageView, MMLoadingView, NSString, UILabel, UIView;
@protocol ContactInfoAssistDelegate;

@interface CBaseContactInfoAssist : MMObject <contactVerifyLogicDelegate, IContactMgrExt, WCActionSheetDelegate, UIAlertViewDelegate, PBMessageObserverDelegate>
{
    UIView *m_headerView;
    UIView *m_footerView;
    MMHeadImageView *m_headView;
    MMHDHeadImageView *m_HDHeadView;
    MMLoadingView *m_loadingView;
    CContact *m_contact;
    UILabel *m_displayNameLabel;
    UILabel *m_userNameLabel;
    id <ContactInfoAssistDelegate> m_delegate;
}

@property(retain, nonatomic) MMHeadImageView *m_headView; // @synthesize m_headView;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(nonatomic) __weak id <ContactInfoAssistDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)baseViewWillBePoped;
- (void)onContactUpdated;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)makeContactIntroCell:(id)arg1 text:(id)arg2;
- (double)heightForPluginIntroCell:(id)arg1;
- (double)getSignatureWidth;
- (void)dealloc;
- (id)GetFloatView;
- (id)GetTableView;
- (void)initLoadingView;
- (void)stopLoading;
- (void)contactVerifyOk:(id)arg1 opCode:(unsigned int)arg2;
- (void)addContactInternal;
- (void)handleAddedContact;
- (void)onContactVerifyFillVerifyMsg:(id)arg1;
- (void)onAddToContacts;
- (void)verifyContactWithOpCode:(unsigned int)arg1;
- (_Bool)isInMyContactList;
- (void)reloadView;
- (void)reloadTableView;
- (void)initNickNameLabel;
- (void)initUserNameLabel;
- (id)getUserNameCol;
- (void)updateInstallStateAndReloadTableView;
- (void)opShareMyFriend;
- (void)updateFooterView;
- (void)updateNickNameLabel;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "IAddressBookMgrExt-Protocol.h"
#import "IRsaCertMgrExt-Protocol.h"
#import "WCAccountGraphicVerifyViewControllerDelegate-Protocol.h"
#import "WCAccountRegisterViewControllerDelegate-Protocol.h"

@class NSMutableSet, NSString;

@interface WCAccountRegisterControlLogic : WCAccountBaseControlLogic <IAddressBookMgrExt, WCAccountRegisterViewControllerDelegate, WCAccountGraphicVerifyViewControllerDelegate, IRsaCertMgrExt>
{
    NSMutableSet *m_suggestAlias;
    _Bool m_bCanSyncAddressBook;
    unsigned int m_idc_redirect_count;
    unsigned int m_getSuggestAlias_EventID;
    unsigned long long m_ui64BeginTime;
}

- (void).cxx_destruct;
- (void)DidEnterForeground:(id)arg1;
- (void)DidEnterBackground:(id)arg1;
- (void)resume;
- (void)pause;
- (_Bool)recoverFromArchive:(id)arg1;
- (id)getArchive;
- (void)RSAProtobufMessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleRespForSuggestAlias:(id)arg1;
- (void)handleNewRegResponse:(id)arg1;
- (void)onEnableAddressBookTip;
- (void)showDeniedTip;
- (void)showEnableTip;
- (void)enableAddressBook;
- (void)jumpToMainFrame;
- (void)OnConfirmAddressBookStatus:(unsigned int)arg1;
- (void)onGraphicVerifyChangeImage;
- (void)onGraphicVerifyBack;
- (void)onGraphicVerifyWithVerifyCode:(id)arg1;
- (void)onGetSuggestAlias:(id)arg1 alias:(id)arg2;
- (void)onRegNickNameReg:(id)arg1 alias:(id)arg2 headImage:(id)arg3;
- (void)onRegNickNameBack;
- (void)getSuggestAlias;
- (_Bool)regAccount;
- (id)genNewRegRequest;
- (id)getBindName;
- (void)startLogic;
- (void)dealloc;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


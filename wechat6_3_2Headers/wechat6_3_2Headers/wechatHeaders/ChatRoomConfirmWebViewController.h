//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IGroupMgrExt-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"
#import "WCAccountBindPhoneControlLogicDelegate-Protocol.h"

@class CContact, NSString, UIWebView, WCAccountBindPhoneControlLogic;

@interface ChatRoomConfirmWebViewController : MMUIViewController <WCAccountBindPhoneControlLogicDelegate, IGroupMgrExt, UIWebViewDelegate>
{
    UIWebView *m_webView;
    CContact *m_chatRoomContact;
    WCAccountBindPhoneControlLogic *m_bindLogic;
    _Bool m_needBindPhone;
}

@property(nonatomic) _Bool needBindPhone; // @synthesize needBindPhone=m_needBindPhone;
@property(retain, nonatomic) CContact *chatRoomContact; // @synthesize chatRoomContact=m_chatRoomContact;
- (void).cxx_destruct;
- (void)OnChatRoomUpgrade:(id)arg1 rspCode:(int)arg2 restQuota:(unsigned int)arg3 maxCount:(unsigned int)arg4;
- (void)bindPhoneReturn;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)upgradeChatRoom;
- (void)checkBindPhone;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)dismissWithAnim;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


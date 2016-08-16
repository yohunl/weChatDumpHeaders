//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMMFacebookMgrExt-Protocol.h"
#import "InviteFriendViewDelegate-Protocol.h"
#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "MMTwitterAuthExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class InviteFriendView, NSDictionary, NSMutableDictionary, NSString, UIColor;
@protocol InviteFriendLogicDelegate;

@interface InviteFriendLogic : NSObject <MFMessageComposeViewControllerDelegate, MFMailComposeViewControllerDelegate, MMTwitterAuthExt, IMMFacebookMgrExt, PBMessageObserverDelegate, InviteFriendViewDelegate>
{
    id <InviteFriendLogicDelegate> m_delegate;
    NSMutableDictionary *m_dicMsg;
    NSMutableDictionary *m_dicSubject;
    _Bool m_bDefaultWording;
    InviteFriendView *m_inviteMsgView;
    UIColor *m_oldBarTintColor;
    NSDictionary *m_oldTitleTextAttributes;
    long long m_oldUIBarStyle;
}

+ (_Bool)isShowTwitter;
+ (_Bool)isShowFacebook;
+ (_Bool)isShowWhatsapp;
+ (_Bool)isShowSMS;
+ (_Bool)isShowEmail;
+ (_Bool)isShowInvite;
+ (_Bool)isEntryOnTheTop;
+ (_Bool)isShowEntryInContactList;
+ (_Bool)isShowEntryInMainFrame;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handlePostMsg:(id)arg1;
- (void)handleGetMsg:(id)arg1;
- (void)startAgain:(id)arg1;
- (void)updateWording:(unsigned int)arg1;
- (void)postInviteMsg:(unsigned int)arg1 msg:(id)arg2;
- (void)onInviteFriendViewPost:(id)arg1 View:(id)arg2;
- (void)onInviteFriendViewCancel:(id)arg1;
- (void)startInviteTwitter;
- (void)doSentInviteTwitter;
- (void)twitterCheckAccessTokenValidFinished:(int)arg1;
- (void)twitterAuthFinished:(int)arg1;
- (void)twitterWillStartOpenSafari;
- (void)onTwitterStartAuth;
- (void)onBindFacebookFinish:(unsigned int)arg1;
- (void)facebookCheckAccessTokenValidFinished:(_Bool)arg1;
- (void)facebookTryAuth;
- (void)doInviteFacebook;
- (void)startInviteFacebook;
- (void)startInviteWhatsapp;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)startInviteMessage;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)startInviteEmail;
- (void)recoverOldSetting;
- (void)saveOldSetting;
- (id)getSubject:(unsigned int)arg1;
- (id)getMsg:(unsigned int)arg1;
- (void)showInviteList:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


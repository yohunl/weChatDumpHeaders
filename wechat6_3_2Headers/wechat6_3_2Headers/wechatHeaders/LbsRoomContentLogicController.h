//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RoomContentLogicController.h"

#import "LbsRoomSessionMgrDelegate-Protocol.h"
#import "MMInputToolViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class NSString;

@interface LbsRoomContentLogicController : RoomContentLogicController <LbsRoomSessionMgrDelegate, MMInputToolViewDelegate, UIAlertViewDelegate>
{
}

- (_Bool)CanOpenServiceAppList;
- (_Bool)isShakeEnabled;
- (void)showAlertWithMessage:(id)arg1;
- (void)showAlert;
- (_Bool)CanShowSight;
- (_Bool)CanWXTalk;
- (_Bool)CanAddApp;
- (_Bool)CanOpenCamera;
- (_Bool)CanSendVoipMsg;
- (_Bool)CanSend3rdMsg;
- (_Bool)CanSendLocationMsg;
- (_Bool)CanSendVideoMsg;
- (_Bool)CanSendVoiceMsg;
- (_Bool)CanSendImageMsg:(id)arg1;
- (_Bool)CanSendEmoticonMessage;
- (void)SendEmoticonMessage:(id)arg1;
- (void)CustomToolViewEX:(id)arg1;
- (void)onTextChange:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (id)GetUsrTitleTail;
- (id)GetUsrTitleFront;
- (id)GetUsrTitle;
- (void)OpenContactInfo:(id)arg1;
- (void)OpenDetailInfo;
- (_Bool)canShowChatRoomInfo;
- (void)onQuitRoomFinishedWithSuccessFlag:(_Bool)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)GetRightBarButtonImageName;
- (id)getLeftBarButton;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)dealloc;
- (void)onBackButtonClicked:(id)arg1;
- (void)ViewDidInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


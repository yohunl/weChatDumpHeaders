//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSData, NSMutableArray, NSString, WXCMultiTalkGroup;

@protocol WXCMultiTalkApiDelegate
- (void)onOtherDeviceHandleTalk:(NSString *)arg1;
- (void)onMultiTalkRedirectOk;
- (void)onMultiTalkAudioDeviceUnPlugin;
- (void)onMultiTalkAudioDevicePlugin;
- (void)onReceiveVideoMemberChangeMsg:(WXCMultiTalkGroup *)arg1 extArray:(NSMutableArray *)arg2;
- (void)onReceiveReawakeOrPokerMsg:(WXCMultiTalkGroup *)arg1 extData:(NSData *)arg2;
- (void)onReawakeFriendOrSendPokerToFriendResult:(_Bool)arg1;
- (void)onRespActiveGroupBriefInfoList:(NSArray *)arg1 isSuccess:(_Bool)arg2;
- (void)onReceiveMutilTalkPokerMsg;
- (void)OnSysCallNotifyInterrupt:(int)arg1;
- (void)onAddMultiTalkMemberResult:(_Bool)arg1 groupInfo:(WXCMultiTalkGroup *)arg2;
- (void)onErr:(int)arg1;
- (void)onSpeakerStateChange:(_Bool)arg1;
- (void)onVideoData:(unsigned int)arg1 Bgra:(char *)arg2 Width:(unsigned int)arg3 Height:(unsigned int)arg4 frontCamera:(_Bool)arg5;
- (void)OnVideoStateChange:(_Bool)arg1 VideoOn:(_Bool)arg2;
- (void)onMuteStateChange:(_Bool)arg1;
- (void)onMultiTalkDeviceLauchSuccess;
- (void)onMultiTalkReady;
- (void)onMemberChange:(WXCMultiTalkGroup *)arg1;
- (void)onReceiveMissMultiTalk:(WXCMultiTalkGroup *)arg1;
- (void)onEnterMultiTalk:(WXCMultiTalkGroup *)arg1;
- (void)onCancelCreateMultiTalk:(WXCMultiTalkGroup *)arg1;
- (void)onCreateMultiTalk:(WXCMultiTalkGroup *)arg1;
- (void)onInviteMultiTalk:(WXCMultiTalkGroup *)arg1;
@end


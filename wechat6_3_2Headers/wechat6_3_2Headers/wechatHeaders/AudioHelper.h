//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AudioHelper : NSObject
{
}

+ (_Bool)isSilkFile:(id)arg1;
+ (void)showRecordDenied;
+ (void)playSendMsgNotify;
+ (_Bool)playNewMsgNotifyInMessageContent;
+ (_Bool)playNewMsgNotify;
+ (void)playVibration;
+ (void)AVPlaySystemSound:(id)arg1 FileType:(id)arg2 Ambient:(_Bool)arg3;
+ (void)PlaySystemSound:(id)arg1 FileType:(id)arg2 Ambient:(_Bool)arg3;
+ (void)RestartAudioTalk;
+ (_Bool)PauseAudioTalk;
+ (void)StopAudioTalk;
+ (_Bool)IsAudioTalkRecording;
+ (_Bool)IsAudioTalkPlaying;
+ (void)ForceStopMusic;
+ (void)NextMusic;
+ (void)RestartMusic;
+ (_Bool)PauseMusic;
+ (void)StopMusic;
+ (_Bool)IsMusicPaused;
+ (_Bool)IsMusicPlaying;
+ (void)StopAudio;
+ (_Bool)IsWeiXinSoundPaused;
+ (_Bool)IsWeiXinSoundPlaying;

@end


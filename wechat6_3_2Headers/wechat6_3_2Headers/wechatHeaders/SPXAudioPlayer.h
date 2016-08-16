//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseAudioPlayer.h"

@interface SPXAudioPlayer : BaseAudioPlayer
{
    _Bool mIsNeedRestartMusic;
}

@property(nonatomic) _Bool needRestartMusic; // @synthesize needRestartMusic=mIsNeedRestartMusic;
- (void)autostop;
- (void)stop;
- (void)replay;
- (void)setProgress:(unsigned int)arg1;
- (void)play;
- (_Bool)preparePlayWithSPXFile:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CMessageWrap;

@protocol IAudioSenderExt

@optional
- (void)OnSendError:(CMessageWrap *)arg1 ErrNo:(int)arg2;
- (void)OnEndRecording:(unsigned int)arg1;
- (void)OnBeginRecording:(unsigned int)arg1 ErrNo:(int)arg2;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
@end


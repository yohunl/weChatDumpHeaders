//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IFavAudioPlayerExt <NSObject>

@optional
- (void)OnEarTip;
- (void)OnAudioPlaying:(NSString *)arg1 Offset:(unsigned int)arg2;
- (void)OnPlayError:(NSString *)arg1;
- (void)OnEndPlay:(NSString *)arg1 isForceStop:(_Bool)arg2;
- (void)OnBeginPlay:(NSString *)arg1;
@end


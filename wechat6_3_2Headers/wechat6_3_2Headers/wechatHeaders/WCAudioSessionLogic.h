//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCAudioSessionDelegate-Protocol.h"

@class NSString;

@interface WCAudioSessionLogic : NSObject <WCAudioSessionDelegate>
{
}

+ (id)shareInstance;
- (_Bool)BlockDeactivateSpeaker;
- (_Bool)BlockDeactivateSession;
- (_Bool)BlockChangeCategoryToNotPlayAndRecord;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


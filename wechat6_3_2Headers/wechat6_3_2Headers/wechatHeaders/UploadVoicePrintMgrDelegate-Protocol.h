//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol UploadVoicePrintMgrDelegate <NSObject>

@optional
- (void)OnMgrVerifyOkWithRandomKey:(NSString *)arg1 VoiceId:(unsigned int)arg2;
- (void)OnMgrNetworkError:(int)arg1;
- (void)OnMgrLocalFileOperationError;
- (void)OnMgrGetMatchingResult:(int)arg1 VoiceId:(unsigned int)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IVoicePrintMgrExt <NSObject>

@optional
- (void)OnEnviromentCheckModeLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)OnEnviromentCheckResult:(_Bool)arg1;
- (void)OnVerifyOkWithRandomKey:(NSString *)arg1 andVoiceId:(unsigned int)arg2;
- (void)OnUploadError:(int)arg1 andVoiceId:(unsigned int)arg2;
- (void)OnGetMatchingResult:(int)arg1 andVoiceId:(unsigned int)arg2;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)OnEndRecord:(_Bool)arg1;
- (void)OnStartRecord;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMCommonAdapterDelegate <NSObject>

@optional
- (void)LogFeatureIdKey:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3 isKeyLog:(_Bool)arg4;
- (void)LogFeatureExt:(unsigned int)arg1 logExt:(NSString *)arg2 isReportNow:(_Bool)arg3 isImportant:(_Bool)arg4;
- (void)NetworkLogOutput:(NSString *)arg1;
- (void)LogWithinCommon:(int)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 funcName:(const char *)arg5 message:(NSString *)arg6;
- (_Bool)ShouldLog:(int)arg1;
- (_Bool)IsChinese;
@end


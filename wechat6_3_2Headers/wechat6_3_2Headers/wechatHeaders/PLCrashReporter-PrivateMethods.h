//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PLCrashReporter.h"

@interface PLCrashReporter (PrivateMethods)
- (id)crashReportPath;
- (id)queuedCrashReportDirectory;
- (id)crashReportDirectory;
- (_Bool)populateCrashReportDirectoryAndReturnError:(id *)arg1;
- (int)mapToAsyncSymbolicationStrategy:(unsigned long long)arg1;
- (void)dealloc;
- (id)enableMachExceptionServerWithPreviousPortSet:(id *)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3 error:(id *)arg4;
- (id)initWithBundle:(id)arg1 configuration:(id)arg2;
- (id)initWithApplicationIdentifier:(id)arg1 appVersion:(id)arg2 configuration:(id)arg3;
@end


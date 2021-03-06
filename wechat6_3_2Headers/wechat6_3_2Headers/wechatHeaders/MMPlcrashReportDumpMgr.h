//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PLCrashReporterLagDelegate-Protocol.h"

@class NSLock, NSString;

@interface MMPlcrashReportDumpMgr : NSObject <PLCrashReporterLagDelegate>
{
    unsigned long long m_reportBlockTIme;
    NSLock *m_nsLock;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (unsigned long long)getBlockTime;
- (void)dumpWithPcArray:(void **)arg1 withPcSize:(int)arg2 withReportType:(unsigned long long)arg3 withBlockTime:(unsigned long long)arg4;
- (void)dumpWithReportType:(unsigned long long)arg1 withBlockTime:(unsigned long long)arg2;
- (id)_generateDumpReportDataWithPcArray:(void **)arg1 withPcSize:(int)arg2;
- (id)_generateDumpReportDataWithCurrentThreadState;
- (void)getMainThreadCallStack:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


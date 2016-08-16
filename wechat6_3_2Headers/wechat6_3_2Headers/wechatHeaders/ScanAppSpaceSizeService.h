//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSString;

@interface ScanAppSpaceSizeService : MMService <MMService>
{
    _Bool _hasAppSpaceSize;
    int _runStatus;
    long long _appSpaceSize;
    long long _scannedFileCount;
}

@property long long scannedFileCount; // @synthesize scannedFileCount=_scannedFileCount;
@property long long appSpaceSize; // @synthesize appSpaceSize=_appSpaceSize;
@property int runStatus; // @synthesize runStatus=_runStatus;
@property _Bool hasAppSpaceSize; // @synthesize hasAppSpaceSize=_hasAppSpaceSize;
- (void)onServiceTerminate;
- (void)asyncStopTask;
- (void)asyncStartTask;
- (void)folderSizeAtPath:(const char *)arg1;
- (void)onScanTaskFinished;
- (void)onScanTaskUpdateProgress;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RecoverDataManager.h"

#import "MMPackageDownloadMgrExt-Protocol.h"
#import "RecoverDataWorker-Protocol.h"

@interface RecoverDataManager (MMPackageDownloadMgrExt) <MMPackageDownloadMgrExt, RecoverDataWorker>
- (void)onRecoverProgressUpdate:(float)arg1;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)onPackageListUpdated:(id)arg1;
@end


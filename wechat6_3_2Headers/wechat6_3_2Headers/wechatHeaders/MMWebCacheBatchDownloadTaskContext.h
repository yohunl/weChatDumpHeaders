//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMResBatchDownloadTaskContext.h"

@class MMWCPushInfo;

@interface MMWebCacheBatchDownloadTaskContext : MMResBatchDownloadTaskContext
{
    _Bool _needCleanWebviewCacheAfterBatchSave;
    unsigned int _configCrc32;
    MMWCPushInfo *_pushInfo;
    unsigned long long _scene;
}

@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) MMWCPushInfo *pushInfo; // @synthesize pushInfo=_pushInfo;
@property(nonatomic) _Bool needCleanWebviewCacheAfterBatchSave; // @synthesize needCleanWebviewCacheAfterBatchSave=_needCleanWebviewCacheAfterBatchSave;
@property(nonatomic) unsigned int configCrc32; // @synthesize configCrc32=_configCrc32;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMResConfigInfo, MMWCResBatchSaveHandler, NSArray;

@protocol MMResBatchSaveHandlerDelegate <NSObject>
- (void)onBatchSaveHandler:(MMWCResBatchSaveHandler *)arg1 finish:(_Bool)arg2 failedUrlInfoList:(NSArray *)arg3 errMsgList:(NSArray *)arg4 handlerId:(unsigned int)arg5 configInfo:(MMResConfigInfo *)arg6;
@end


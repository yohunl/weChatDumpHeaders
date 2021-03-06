//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMImageLoaderObserver-Protocol.h"
#import "MMService-Protocol.h"

@class NSString;

@interface WCCanvasDownloadMgr : MMService <MMImageLoaderObserver, MMService>
{
    unsigned long long minPagePreDownload;
}

@property(nonatomic) unsigned long long minPagePreDownload; // @synthesize minPagePreDownload;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (id)md5ForURL:(id)arg1;
- (_Bool)isFirstImageHasDownloaded:(id)arg1;
- (_Bool)isImageHasDownloaded:(id)arg1;
- (id)getFirstImageUrl:(id)arg1;
- (void)preDownloadSight:(id)arg1;
- (void)preDownloadImage:(id)arg1;
- (void)preDownloadH5:(id)arg1;
- (_Bool)tryToDownloadComponetResrc:(id)arg1;
- (void)tryToDownloadComponetList:(id)arg1;
- (void)preDownloadCanvasAdResource:(id)arg1;
- (void)tryToDownloadFirstTwoComponetResrc:(id)arg1;
- (void)tryToDownloadCanvasAdResourceWithBeginPage:(unsigned long long)arg1 EndPage:(unsigned long long)arg2 CanvasInfo:(id)arg3;
- (void)dealloc;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


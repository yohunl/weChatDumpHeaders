//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFacade.h"

@interface WCFacade (LogReport)
- (void)logSnsSightClick:(id)arg1 sightVideoExist:(_Bool)arg2 autoPlay:(_Bool)arg3;
- (void)tryLogABTestResultTime:(id)arg1 dataItemId:(id)arg2 startTime:(_Bool)arg3 endTime:(_Bool)arg4;
- (void)logABTestResult:(id)arg1 dataItemId:(id)arg2 tipActionResult:(id)arg3;
- (void)tryReportABTestResult;
- (void)onClickPostButtonForStat:(_Bool)arg1 contentType:(unsigned int)arg2;
- (void)onClickCameraButtonForStat;
- (void)removePreloadItemForBigImage:(id)arg1;
- (void)tryLogPreloadImageResult;
- (void)removeItemForBigImageLoadedEfficency:(id)arg1;
- (void)tryLogPreloadSucForBigImageLoadedEfficency:(id)arg1;
- (void)tryLogBigImageLoadedEfficency:(id)arg1 loadedResult:(unsigned int)arg2 costTime:(unsigned int)arg3;
- (_Bool)shouldLogBigImageLoadedEfficency:(id)arg1;
- (void)tryLogPreloadSucForSmallImageLoadedEfficency:(id)arg1;
- (void)tryLogSmallImageLoadedEfficency:(id)arg1 loadedResult:(unsigned int)arg2 costTime:(unsigned int)arg3 loadedCount:(unsigned int)arg4;
- (_Bool)shouldLogSmallImageLoadedEfficency:(id)arg1;
- (void)removeItemForClickBigImage:(id)arg1;
- (void)tryLogClickBigImage:(id)arg1 clickIndex:(unsigned int)arg2 clickCount:(unsigned int)arg3 downloadCount:(unsigned int)arg4;
- (void)logPreviewBigImageCount:(unsigned int)arg1 totalCount:(unsigned int)arg2;
@end


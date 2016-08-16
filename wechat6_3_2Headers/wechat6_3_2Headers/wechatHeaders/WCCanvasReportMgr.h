//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString, WCCanvasReportInfo, WCStatTimerHelper;

@interface WCCanvasReportMgr : MMService <MMService>
{
    _Bool _hasReportInit;
    WCCanvasReportInfo *_reportInfo;
    WCStatTimerHelper *_pageTimeHelper;
    NSMutableDictionary *_componentTimeHelperDict;
    NSMutableDictionary *_componentReportInfoDict;
    NSMutableDictionary *_videoTimeHelperDict;
    unsigned long long _lastStreamVideoPlayCompleteTime;
}

@property(nonatomic) unsigned long long lastStreamVideoPlayCompleteTime; // @synthesize lastStreamVideoPlayCompleteTime=_lastStreamVideoPlayCompleteTime;
@property(retain, nonatomic) NSMutableDictionary *videoTimeHelperDict; // @synthesize videoTimeHelperDict=_videoTimeHelperDict;
@property(retain, nonatomic) NSMutableDictionary *componentReportInfoDict; // @synthesize componentReportInfoDict=_componentReportInfoDict;
@property(retain, nonatomic) NSMutableDictionary *componentTimeHelperDict; // @synthesize componentTimeHelperDict=_componentTimeHelperDict;
@property(retain, nonatomic) WCStatTimerHelper *pageTimeHelper; // @synthesize pageTimeHelper=_pageTimeHelper;
@property(nonatomic) _Bool hasReportInit; // @synthesize hasReportInit=_hasReportInit;
@property(retain, nonatomic) WCCanvasReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
- (void).cxx_destruct;
- (id)getTimerHelperInDict:(id)arg1 usingKey:(id)arg2;
- (id)getComponentReportInfoUsingItem:(id)arg1 withAssertType:(Class)arg2;
- (id)getComponentReportInfoUsingItem:(id)arg1;
- (void)tryToReportStreamComponentIsAutoPlay:(id)arg1 isAutoPlay:(_Bool)arg2;
- (void)tryToReportStreamComponentClickVoiceControl:(id)arg1;
- (void)tryToReportStreamComponentClickPlayButton:(id)arg1;
- (void)tryToReportStreamComponentPlayComplete:(id)arg1;
- (void)tryToReportStreamComponentPlayEnd:(id)arg1;
- (void)tryToReportStreamComponentPlayStart:(id)arg1;
- (void)tryToReportStreamComponentDuration:(CDStruct_1b6d18a9)arg1 WithItem:(id)arg2;
- (void)tryToReportSightIsAutoPlay:(id)arg1 isAutoPlay:(_Bool)arg2;
- (void)tryToReportSightComponentClickVoiceControl:(id)arg1;
- (void)tryToReportSightComponentPlayComplete:(id)arg1;
- (void)tryToReportSightComponentPlayEnd:(id)arg1;
- (void)tryToReportSightComponentPlayStart:(id)arg1;
- (void)tryToReportSightComponentDuration:(CDStruct_1b6d18a9)arg1 WithItem:(id)arg2;
- (void)tryToReportButtonComponentClick:(id)arg1;
- (void)tryToAddReportComponentExposure:(id)arg1;
- (void)tryToReportComponentExposureEnd:(id)arg1;
- (void)tryToReportComponentExposureStart:(id)arg1;
- (void)tryToReportExitWithLeaveType:(unsigned int)arg1;
- (void)tryToReportAddFavItem;
- (void)tryToReportSendFriendMsg;
- (void)tryToReportShareTimeLine;
- (void)tryToReportRightSwipePage;
- (void)reportCanvasAdInitWithSnsId:(id)arg1 uxInfo:(id)arg2 inScene:(int)arg3 withEnterType:(unsigned int)arg4 enableSwipe:(_Bool)arg5 componentItemsCount:(unsigned int)arg6 snsStatExt:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFacade.h"

@interface WCFacade (BrowseInfoReport)
- (id)getTimeLineWebViewExtraInfo:(id)arg1;
- (void)reportBrowseInfo;
- (void)logUserAction:(int)arg1 onScene:(int)arg2 forFeed:(id)arg3;
- (void)onAdForwardCanvasViewStateChange:(int)arg1;
- (void)onAdCanvasViewStateChange:(int)arg1;
- (void)onAdLongVideoViewStateChange:(int)arg1;
- (void)onAdForwardSteamVideoStateChange:(int)arg1;
- (void)onAdFullScreenSightStateChange:(int)arg1;
- (void)onAdDetailPageStateChange:(int)arg1;
- (void)onAdFullScreenImageViewStateChange:(int)arg1;
- (void)onPOIDetailForDataItem:(id)arg1 StateChange:(int)arg2;
- (void)onExternalArticleViewStateChange:(int)arg1;
- (void)onMPArticleViewStateChange:(int)arg1;
- (void)onWebViewForURL:(id)arg1 Ad:(_Bool)arg2 StreamVideo:(_Bool)arg3 StateChange:(int)arg4;
- (void)onFullScreenSightViewStateChange:(int)arg1;
- (void)onFullScreenImageViewStateChange:(int)arg1;
- (void)onNewPostViewStateChange:(int)arg1;
- (void)onMessageListViewStateChange:(int)arg1;
- (void)onAlbumViewForOthersStateChange:(int)arg1;
- (void)onAlbumViewForMySelfStateChange:(int)arg1;
- (void)onTimeLineViewStateChange:(int)arg1;
- (id)getBrowseInfo;
- (void)WCFacadeBrowseInfoReportOnForeground;
- (void)WCFacadeBrowseInfoReportOnBackground;
- (void)WCFacadeBrowseInfoReportOnTerminate;
- (void)WCFacadeBrowseInfoReportOnUnRegisterExt;
- (void)WCFacadeBrowseInfoReportOnRegisterExt;
@property(nonatomic) int switchInfo;
@end


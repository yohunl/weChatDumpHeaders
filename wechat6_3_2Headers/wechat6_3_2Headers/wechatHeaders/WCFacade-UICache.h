//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFacade.h"

#import "IContactMgrExt-Protocol.h"

@interface WCFacade (UICache) <IContactMgrExt>
- (void)onModifyContact:(id)arg1;
- (void)removeCachesByContact:(id)arg1;
- (void)removeCachesOfContentWithUserComment:(id)arg1;
- (void)setLayoutStylesOfContent:(id)arg1 withUserComment:(id)arg2 width:(double)arg3;
- (id)layoutStylesOfContentWithUserComment:(id)arg1 width:(double)arg2;
- (void)removeContentHeightForWidth:(double)arg1 withDataItem:(id)arg2;
- (void)setContentHeight:(double)arg1 forWidth:(double)arg2 withUserComment:(id)arg3;
- (double)contentHeightForWidth:(double)arg1 withUserComment:(id)arg2;
- (void)removeCachesOfContentWithDataItemId:(id)arg1;
- (void)removeCachesOfLikeUserWithDataItemId:(id)arg1;
- (void)setLayoutStylesOfLikeUser:(id)arg1 withDataItem:(id)arg2 width:(double)arg3;
- (id)layoutStylesOfLikeUserWithDataItem:(id)arg1 width:(double)arg2;
- (void)setlikeUserHeight:(double)arg1 forWidth:(double)arg2 withDataItem:(id)arg3;
- (double)likeUserHeightForWidth:(double)arg1 withDataItem:(id)arg2;
- (void)setLayoutStylesOfContentDesc:(id)arg1 withDataItem:(id)arg2 width:(double)arg3 isShowDetail:(_Bool)arg4 scene:(int)arg5;
- (id)layoutStylesOfContentDescWithDataItem:(id)arg1 width:(double)arg2 isShowDetail:(_Bool)arg3 scene:(int)arg4;
- (void)removeContentDescHeightForWidth:(double)arg1 withDataItem:(id)arg2;
- (void)setContentDescHeight:(double)arg1 forWidth:(double)arg2 withDataItem:(id)arg3;
- (double)contentDescHeightForWidth:(double)arg1 withDataItem:(id)arg2;
- (id)getTipData:(id)arg1 layerId:(id)arg2;
- (_Bool)hiddenTip:(id)arg1 dataItem:(id)arg2;
- (_Bool)hitActionListShowTip:(id)arg1 layerId:(id)arg2;
- (_Bool)isFirstTip:(id)arg1 layerId:(id)arg2;
- (id)getShowTip:(id)arg1 layerId:(id)arg2;
- (id)getLayerIdForDataItem:(id)arg1;
- (void)replaceTipData:(id)arg1 dataItem:(id)arg2 layerId:(id)arg3;
- (void)removeTipData:(id)arg1 layerId:(id)arg2;
- (void)setDataItem:(id)arg1 showDetail:(_Bool)arg2;
- (_Bool)isDataItemShowDetail:(id)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface EmoticonStoreReportData : MMObject
{
}

+ (id)safeReportString:(id)arg1;
+ (void)ReportCellSetWithId:(unsigned int)arg1 Name:(id)arg2 SetType:(unsigned int)arg3 Action:(unsigned long long)arg4;
+ (void)ReportRecentHotItemWithPid:(id)arg1 Action:(unsigned long long)arg2;
+ (void)ReportOpenPageFromWebviewWithPageType:(unsigned long long)arg1 AndPid:(id)arg2 DesignerId:(id)arg3 ReqType:(unsigned int)arg4 Version:(unsigned int)arg5;
+ (void)ReportDoSearchForKeyword:(id)arg1 InScene:(unsigned long long)arg2;
+ (void)ReportStartSearchInScene:(unsigned long long)arg1;
+ (void)ReportEmoticonDownloadScene:(long long)arg1 Type:(long long)arg2 LayerId:(id)arg3 ProductId:(id)arg4;
+ (void)ReportEmoticonTopicPageExposure:(unsigned int)arg1 AndTitle:(id)arg2;
+ (void)ReportEmoticonDesignerPageExposure:(unsigned int)arg1;
+ (void)ReportEmoticonDetailPageExposure:(id)arg1;
+ (void)ReportRewardTipsAction:(unsigned long long)arg1 ForPid:(id)arg2;
+ (void)ReportClickRewardForPid:(id)arg1 InScene:(unsigned long long)arg2;
+ (void)markReportSendEmoticonFromNowUseButton;
+ (void)changeToolViewStateToNoneEmoticon;
+ (void)changeEmoticonBoardIndex;
+ (void)ReportSendEmoticonFromNowUseButton:(id)arg1;
+ (void)ReportClickNowUseButton:(id)arg1;
+ (void)ReportClickCollectionCellForReqType:(unsigned int)arg1;
+ (void)ReportClickEmoticonNew;
+ (void)ReportClickEmoticonFromDesc:(id)arg1;
+ (void)ReportShowDescToEmoticon:(id)arg1;
+ (void)ReportClickEmoticonShareFromTimeline:(id)arg1;
+ (void)ReportClickEmoticonShareFromMessage:(id)arg1;
+ (void)ReportEmoticonShareToTimeline:(id)arg1;
+ (void)ReportEmoticonShareToFriends:(id)arg1;

@end


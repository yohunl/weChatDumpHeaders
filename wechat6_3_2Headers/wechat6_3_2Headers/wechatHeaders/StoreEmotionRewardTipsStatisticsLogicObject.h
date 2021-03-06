//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class EmotionRewardTipsStatisticsData, NSString;

@interface StoreEmotionRewardTipsStatisticsLogicObject : MMObject
{
    unsigned int m_notCountAfterDaysConfig;
    unsigned int m_contiousSendTimesConfig;
    unsigned int m_totalSendTimesConfig;
    EmotionRewardTipsStatisticsData *m_statisticsData;
    NSString *m_statisticsFilePath;
}

- (void).cxx_destruct;
- (void)loadStatisticsData;
- (void)saveStatisticsData;
- (void)loadConfig;
- (void)hasRewardedPid:(id)arg1;
- (void)resetRewardStatisticsForPid:(id)arg1 hasShowTips:(_Bool)arg2;
- (void)resetRewardStatisticsForPid:(id)arg1;
- (void)hasShowedTipsForPid:(id)arg1;
- (_Bool)checkIsNeedShowRewardTipsWithPid:(id)arg1;
- (void)clearAllData;
- (id)init;

@end


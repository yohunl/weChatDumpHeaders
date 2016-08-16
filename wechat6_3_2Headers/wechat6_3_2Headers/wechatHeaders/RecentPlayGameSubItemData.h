//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class GiftCenterData, NSString, RankSummaryData, RecentPlayRecommendBannerData, RecentPlayRecommendTopic;

@interface RecentPlayGameSubItemData : MMObject <PBCoding>
{
    RecentPlayRecommendBannerData *recommendBanner;
    GiftCenterData *giftCenter;
    RecentPlayRecommendTopic *recommendTopic;
    RankSummaryData *rankSummary;
}

+ (void)initialize;
@property(retain, nonatomic) RankSummaryData *rankSummary; // @synthesize rankSummary;
@property(retain, nonatomic) RecentPlayRecommendTopic *recommendTopic; // @synthesize recommendTopic;
@property(retain, nonatomic) GiftCenterData *giftCenter; // @synthesize giftCenter;
@property(retain, nonatomic) RecentPlayRecommendBannerData *recommendBanner; // @synthesize recommendBanner;
- (void).cxx_destruct;
- (void)parse:(id)arg1;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


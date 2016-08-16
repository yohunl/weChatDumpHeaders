//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface GameCenterShareInfo : MMObject <PBCoding>
{
    _Bool shouldShareToFriend;
    _Bool shouldShareToTimeline;
    NSString *messageTitle;
    NSString *messageDetail;
    NSString *iconURL;
    NSString *webURL;
    NSString *timelineTitle;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *timelineTitle; // @synthesize timelineTitle;
@property(nonatomic) _Bool shouldShareToTimeline; // @synthesize shouldShareToTimeline;
@property(nonatomic) _Bool shouldShareToFriend; // @synthesize shouldShareToFriend;
@property(retain, nonatomic) NSString *webURL; // @synthesize webURL;
@property(retain, nonatomic) NSString *iconURL; // @synthesize iconURL;
@property(retain, nonatomic) NSString *messageDetail; // @synthesize messageDetail;
@property(retain, nonatomic) NSString *messageTitle; // @synthesize messageTitle;
- (void).cxx_destruct;
- (void)parseFromResp:(id)arg1;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


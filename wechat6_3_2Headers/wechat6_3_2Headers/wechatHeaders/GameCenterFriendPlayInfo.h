//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSArray, NSString;

@interface GameCenterFriendPlayInfo : MMObject <PBCoding>
{
    NSString *brief;
    NSArray *friendPlayList;
}

+ (void)initialize;
@property(retain, nonatomic) NSArray *friendPlayList; // @synthesize friendPlayList;
@property(retain, nonatomic) NSString *brief; // @synthesize brief;
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

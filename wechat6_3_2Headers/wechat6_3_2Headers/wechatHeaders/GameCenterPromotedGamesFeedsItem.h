//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSArray, NSString;

@interface GameCenterPromotedGamesFeedsItem : MMObject <PBCoding>
{
    NSArray *usernameList;
    NSString *detail;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *detail; // @synthesize detail;
@property(retain, nonatomic) NSArray *usernameList; // @synthesize usernameList;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


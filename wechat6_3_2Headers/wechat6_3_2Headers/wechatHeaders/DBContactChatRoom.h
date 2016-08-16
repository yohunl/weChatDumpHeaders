//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class DBContactChatRoomDetail, NSString;

@interface DBContactChatRoom : NSObject <PBCoding>
{
    unsigned int chatStatus;
    unsigned int chatRoomMaxCount;
    unsigned int chatRoomVersion;
    NSString *chatRoomMember;
    NSString *owner;
    NSString *chatRoomData;
    DBContactChatRoomDetail *chatRoomDetail;
}

+ (void)initialize;
@property(retain, nonatomic) DBContactChatRoomDetail *chatRoomDetail; // @synthesize chatRoomDetail;
@property(retain, nonatomic) NSString *chatRoomData; // @synthesize chatRoomData;
@property(nonatomic) unsigned int chatRoomVersion; // @synthesize chatRoomVersion;
@property(nonatomic) unsigned int chatRoomMaxCount; // @synthesize chatRoomMaxCount;
@property(nonatomic) unsigned int chatStatus; // @synthesize chatStatus;
@property(retain, nonatomic) NSString *owner; // @synthesize owner;
@property(retain, nonatomic) NSString *chatRoomMember; // @synthesize chatRoomMember;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


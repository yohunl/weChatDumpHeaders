//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary;

@protocol IContactLabelMgrExt <NSObject>

@optional
- (void)onContactTagNameUpdate:(NSDictionary *)arg1;
- (void)onAllTagNameUpdate;
- (void)setContactLabel:(NSArray *)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)updateContactLabelName:(NSArray *)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onDeleteContactLabel:(NSArray *)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onAddContactLabel:(NSArray *)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onAllContactLabelUpdated:(NSArray *)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
@end


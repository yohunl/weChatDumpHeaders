//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CContact, CLLocation, NSString;

@protocol BSSHomePageLogicControllerDelegate <NSObject>
- (void)onServerError;
- (void)onRespErrorWithInfo:(NSString *)arg1;
- (void)onSelectLoadMoreCellWithResultType:(long long)arg1 andBusinessType:(unsigned long long)arg2 andKeyword:(NSString *)arg3 andLocation:(CLLocation *)arg4;
- (void)onSelectItemWithProductId:(NSString *)arg1;
- (void)onSelectItemWithContactInfo:(CContact *)arg1 andSearchId:(NSString *)arg2;
- (void)onSelectItemWithUrlAddress:(NSString *)arg1;
- (void)onHomePageResultNeedReload;
- (void)onSearchStart;
@end


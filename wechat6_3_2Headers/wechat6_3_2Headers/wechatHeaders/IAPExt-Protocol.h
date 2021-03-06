//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, iAPTransation;

@protocol IAPExt <NSObject>

@optional
- (void)onRestoreFail;
- (void)onRestoreSuccessForProduct:(NSArray *)arg1;
- (void)onPurchaseFailForProduct:(NSString *)arg1 ErrCode:(unsigned int)arg2;
- (void)onPurchaseCancelForProduct:(NSString *)arg1;
- (void)onPurchaseSuccessForProduct:(iAPTransation *)arg1 ErrCode:(unsigned int)arg2;
- (void)onGetProduct:(NSArray *)arg1 invalidProductID:(NSArray *)arg2;
@end


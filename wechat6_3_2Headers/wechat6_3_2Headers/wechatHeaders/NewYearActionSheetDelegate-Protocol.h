//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NewYearActionSheet;

@protocol NewYearActionSheetDelegate <NSObject>

@optional
- (void)newYearActionSheet:(NewYearActionSheet *)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)newYearActionSheet:(NewYearActionSheet *)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)didPresentActionSheet:(NewYearActionSheet *)arg1;
- (void)willPresentActionSheet:(NewYearActionSheet *)arg1;
- (void)actionSheetCancel:(NewYearActionSheet *)arg1;
- (void)newYearActionSheet:(NewYearActionSheet *)arg1 clickedButtonAtIndex:(long long)arg2;
@end

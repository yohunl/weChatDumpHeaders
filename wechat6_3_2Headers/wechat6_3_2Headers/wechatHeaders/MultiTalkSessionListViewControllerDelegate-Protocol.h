//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MultiTalkSessionListCellData, MultiTalkSessionListControllerConfigData, NSIndexPath, UITableView;

@protocol MultiTalkSessionListViewControllerDelegate <NSObject>
- (void)viewControllerDidBePop;
- (_Bool)handleCellDeleteAtIndexPath:(NSIndexPath *)arg1 inTableView:(UITableView *)arg2;
- (void)handleCellSelectAtIndexPath:(NSIndexPath *)arg1 inTableView:(UITableView *)arg2;
- (double)cellHeightAtIndexPath:(NSIndexPath *)arg1 inTableView:(UITableView *)arg2;
- (MultiTalkSessionListCellData *)cellDataAtIndexPath:(NSIndexPath *)arg1 inTableView:(UITableView *)arg2;
- (long long)numberOfRowInSection:(long long)arg1 inTableView:(UITableView *)arg2;
- (long long)numberOfSectionInTableView:(UITableView *)arg1;

@optional
- (MultiTalkSessionListControllerConfigData *)getViewControllerConfigData;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMScrollActionSheet, MMScrollActionSheetItem;

@protocol MMScrollActionSheetDelegate <NSObject>

@optional
- (void)scrollActionSheet:(MMScrollActionSheet *)arg1 clickCustomBtn:(id)arg2;
- (void)scrollActionSheetWillDismiss:(MMScrollActionSheet *)arg1;
- (void)scrollActionSheetDidScroll:(MMScrollActionSheet *)arg1;
- (void)scrollActionSheetDidCancel:(MMScrollActionSheet *)arg1;
- (void)scrollActionSheetDidAppeared:(MMScrollActionSheet *)arg1;
- (void)scrollActionSheet:(MMScrollActionSheet *)arg1 didSelecteItem:(MMScrollActionSheetItem *)arg2;
@end


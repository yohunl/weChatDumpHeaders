//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CContact, NSArray, NSIndexPath;

@protocol MMNewMultiSelectContactsLogicDelegate <NSObject>
- (void)onSelectCountOutOfLimit;
- (void)onResultTableViewNeedReload;
- (void)onHandleCotnactTableViewSelected:(CContact *)arg1 atIndexPath:(NSIndexPath *)arg2 isSelected:(_Bool)arg3;
- (void)onGetContactSearchResult:(NSArray *)arg1;
@end


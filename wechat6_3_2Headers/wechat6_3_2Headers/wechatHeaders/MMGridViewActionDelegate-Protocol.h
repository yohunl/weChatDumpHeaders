//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMGridView;

@protocol MMGridViewActionDelegate <NSObject>
- (void)MMGridView:(MMGridView *)arg1 didTapOnItemAtIndex:(long long)arg2;

@optional
- (void)MMGridView:(MMGridView *)arg1 onDeleteAtIndex:(long long)arg2;
- (_Bool)MMGridView:(MMGridView *)arg1 canEditAtIndex:(long long)arg2;
- (void)MMGridView:(MMGridView *)arg1 changedEdit:(_Bool)arg2;
- (void)MMGridView:(MMGridView *)arg1 processDeleteActionForItemAtIndex:(long long)arg2;
- (void)MMGridViewDidTapOnEmptySpace:(MMGridView *)arg1;
@end


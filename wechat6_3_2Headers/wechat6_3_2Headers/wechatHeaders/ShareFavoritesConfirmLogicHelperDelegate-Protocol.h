//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ShareFavoritesConfirmLogicHelper;

@protocol ShareFavoritesConfirmLogicHelperDelegate <NSObject>

@optional
- (void)OnShareFavoritesItemCancel:(ShareFavoritesConfirmLogicHelper *)arg1;
- (void)OnShareFavoritesItemFail:(ShareFavoritesConfirmLogicHelper *)arg1 WithError:(int)arg2;
- (void)OnShareFavoritesItemOK:(ShareFavoritesConfirmLogicHelper *)arg1;
@end


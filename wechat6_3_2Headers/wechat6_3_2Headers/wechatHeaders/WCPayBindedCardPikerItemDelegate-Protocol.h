//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "WCBaseInfoItemDelegate-Protocol.h"

@class WCPayBindedCardPikerItem;

@protocol WCPayBindedCardPikerItemDelegate <NSObject, WCBaseInfoItemDelegate>

@optional
- (void)OnChooseCard:(WCPayBindedCardPikerItem *)arg1;
- (void)OnChooseNewCard:(WCPayBindedCardPikerItem *)arg1;
@end

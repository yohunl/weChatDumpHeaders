//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ShareMessageConfirmLogicHelper;

@protocol ShareMessageConfirmLogicHelperDelegate <NSObject>

@optional
- (void)OnStayAtWeChat:(ShareMessageConfirmLogicHelper *)arg1;
- (void)OnBackTo3rdApp:(ShareMessageConfirmLogicHelper *)arg1;
- (void)OnSendMessageCancel:(ShareMessageConfirmLogicHelper *)arg1;
- (void)OnSendMessageFail:(ShareMessageConfirmLogicHelper *)arg1 WithError:(int)arg2;
- (void)OnSendMessageOK:(ShareMessageConfirmLogicHelper *)arg1;
@end


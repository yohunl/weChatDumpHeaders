//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CMessageWrap, NSString;

@protocol ITranslateMsgMgrExt <NSObject>

@optional
- (void)onTranslateMessageChanged:(CMessageWrap *)arg1;
- (void)onTranslateMessageFailed:(CMessageWrap *)arg1 errTip:(NSString *)arg2;
@end


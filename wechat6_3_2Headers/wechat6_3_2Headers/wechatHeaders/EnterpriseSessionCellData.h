//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMBaseSessionCellData.h"

@interface EnterpriseSessionCellData : MMBaseSessionCellData
{
    _Bool m_isSessionTop;
}

@property(nonatomic) _Bool isSessionTop; // @synthesize isSessionTop=m_isSessionTop;
- (id)textForMsgLabelWithMessage:(id)arg1;
- (void)updateSessionTop;
- (void)updateUnreadCount;
- (void)updateHeadViewInfo:(id)arg1;
- (void)updateNameLabelText:(id)arg1;
- (void)updateMsgLabelTextForEnterpriseMsg:(id)arg1;
- (void)updateWithEnterpriseSessionInfo:(id)arg1;
- (void)updateWithBaseSessionInfo:(id)arg1;

@end


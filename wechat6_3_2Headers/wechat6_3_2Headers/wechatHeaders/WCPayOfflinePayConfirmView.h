//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "WCBaseInfoItemDelegate-Protocol.h"

@class NSString, UIImageView, WCPayTenpayPasswordCtrlItem;
@protocol WCPayOfflinePayConfirmViewDelegate;

@interface WCPayOfflinePayConfirmView : MMUIView <WCBaseInfoItemDelegate>
{
    UIImageView *m_backgroundView;
    WCPayTenpayPasswordCtrlItem *m_textFieldItemPwd;
    id m_userData;
    id <WCPayOfflinePayConfirmViewDelegate> m_delegate;
}

@property(retain, nonatomic) id m_userData; // @synthesize m_userData;
- (void).cxx_destruct;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (_Bool)shouldPreventedAutorotateToInterfaceOrientation;
- (void)onCancelBtnClick;
- (void)onPayBtnClick;
- (void)closeView;
- (void)showAnimation;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


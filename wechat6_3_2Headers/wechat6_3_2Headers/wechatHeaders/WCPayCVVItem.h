//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayTenpaySecureCtrlItem.h"

@class MMUIViewController, NSString, UIButton;

@interface WCPayCVVItem : WCPayTenpaySecureCtrlItem
{
    UIButton *m_tipBtn;
    MMUIViewController *m_viewController;
    NSString *m_nsTipTitle;
    NSString *m_nsTipContent;
}

- (void).cxx_destruct;
- (void)setTipBtnShowed:(_Bool)arg1;
- (void)showCVVTip;
- (void)setTipContent:(id)arg1 Title:(id)arg2;
- (void)setViewController:(id)arg1;
- (void)addTipBtnTarget:(id)arg1 sel:(SEL)arg2;
- (void)dealloc;
- (void)initView:(struct CGRect)arg1;

@end


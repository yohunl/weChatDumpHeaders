//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIWindow.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UITextField;
@protocol WCDeviceNameEditConfirmViewDelegate;

@interface WCDeviceNameEditConfirmView : MMUIWindow <UITextFieldDelegate>
{
    UITextField *m_textField;
    NSString *m_alias;
    NSString *_title;
    id <WCDeviceNameEditConfirmViewDelegate> _delegate;
}

@property(nonatomic) __weak id <WCDeviceNameEditConfirmViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)keyboardHide:(id)arg1;
- (void)keyboardShow:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)onConfirm;
- (void)onCancel;
- (id)getText;
- (id)genTextField;
- (id)genTitleLabel;
- (void)initBottomButtons;
- (void)initContentView;
- (void)initBackgroundView;
- (void)showView;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 andAlias:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


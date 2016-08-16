//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSMutableArray, NSString, TPIDKeyboardView, TenpayPasswordView, UIView;
@protocol TenpayPasswordCtrlDelegate;

@interface TenpayPasswordCtrl : UITextField <UITextFieldDelegate>
{
    NSMutableArray *_inputEncData;
    UIView *_keyboard;
    TenpayPasswordView *_pswView;
    TPIDKeyboardView *_iPadKeyboard;
    id <TenpayPasswordCtrlDelegate> ctrlDelegate;
    NSString *_saltVal;
}

@property(retain, nonatomic) NSString *saltVal; // @synthesize saltVal=_saltVal;
@property(nonatomic) id <TenpayPasswordCtrlDelegate> ctrlDelegate; // @synthesize ctrlDelegate;
- (id)GetHashData;
- (id)GetRsaEncryptData;
- (unsigned long long)GetInputLen;
- (void)SetSalt:(id)arg1;
- (void)ClearInput;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)onChange;
- (void)appendPsw:(id)arg1;
- (void)numberKeyBoardClicked:(id)arg1;
- (void)UseKeyboardWithImageNumNormal:(id)arg1 ImageNumPress:(id)arg2 ImageDelNormal:(id)arg3 ImageDelPess:(id)arg4;
- (void)setKeyboradOrientation:(long long)arg1;
- (id)customOverlayContainer;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 AndImage:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


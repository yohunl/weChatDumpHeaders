//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseInfoItem.h"

#import "UITextViewDelegate-Protocol.h"

@class NSString, UILabel, UITextView;

@interface WCBaseTextViewItem : WCBaseInfoItem <UITextViewDelegate>
{
    UITextView *m_textView;
    UILabel *placeHolderLabel;
    int m_iMaxInputLen;
    _Bool m_bRealLen;
}

- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)setMaxRealStringLen:(int)arg1;
- (void)setMaxInputLen:(int)arg1;
- (void)setColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (id)getTextView;
- (void)resignFirstResponder;
- (void)becomeFirstResponder;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (id)getValue;
- (void)initView:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


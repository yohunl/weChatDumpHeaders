//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseTextFieldItem.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"
#import "WCBizPickerViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UILabel, WCBizPickerView, WCPayCardBinInfo;

@interface WCPayCardTypeItem : WCBaseTextFieldItem <UIPickerViewDelegate, UIPickerViewDataSource, WCBizPickerViewDelegate>
{
    UILabel *m_textLabel;
    WCBizPickerView *m_pickerView;
    NSMutableArray *m_arrSection;
    NSMutableDictionary *m_dicRows;
    WCPayCardBinInfo *m_selectType;
    long long m_iCurrentSectoin;
    NSArray *m_arrOrderAvailableCards;
}

- (void).cxx_destruct;
- (void)WCBizPickerViewDidComplete:(id)arg1;
- (void)WCBizPickerViewDidCancel;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (_Bool)isOrderAvailableCard:(id)arg1;
- (void)setOrderAvailableCardList:(id)arg1;
- (void)setCardTypeList:(id)arg1;
- (void)setSelectCardType:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setText:(id)arg1;
- (id)getValue;
- (void)becomeFirstResponder;
- (id)getStringFrom:(id)arg1;
- (void)dealloc;
- (void)initView:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


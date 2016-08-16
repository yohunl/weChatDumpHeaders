//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class WCProductSKUAttrItem;
@protocol WCRadioButtonGroupDelegate;

@interface WCRadioButtonGroup : MMUIView
{
    WCProductSKUAttrItem *_skuAttrItem;
    id <WCRadioButtonGroupDelegate> _groupDelegate;
}

+ (float)calculateNOEqualWidthLimitMinWidth:(id)arg1;
+ (int)calculateNOEqualWidthButtonLineCount:(id)arg1;
+ (int)calculateEqualWidthButtonLineCount:(id)arg1;
+ (int)calculateSuitableColumn:(id)arg1;
+ (float)calculateRadioButtonGroupHeight:(id)arg1;
+ (_Bool)canUseEqualWidthStandard:(id)arg1;
@property(nonatomic) __weak id <WCRadioButtonGroupDelegate> groupDelegate; // @synthesize groupDelegate=_groupDelegate;
@property(retain, nonatomic) WCProductSKUAttrItem *skuAttrItem; // @synthesize skuAttrItem=_skuAttrItem;
- (void).cxx_destruct;
- (void)radioButtonClicked:(id)arg1;
- (void)loadAllNOEqualButton;
- (void)addSKUButtonInfo:(id)arg1 andItemValue:(id)arg2;
- (void)loadAllEqualButton;
- (void)loadRadioButtonGroupView;

@end


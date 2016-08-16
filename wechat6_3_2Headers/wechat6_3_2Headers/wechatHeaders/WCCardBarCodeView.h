//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class UIView, WCCardDataCardInfo, WCCardDataCardTPInfo;

@interface WCCardBarCodeView : MMUIView
{
    UIView *_codeView;
    _Bool _bShareCard;
    WCCardDataCardTPInfo *_cardTPInfo;
    WCCardDataCardInfo *_cardInfo;
}

- (void).cxx_destruct;
- (void)SetHighLight:(_Bool)arg1;
- (id)getCodeView;
- (_Bool)shouldShowSerialNumber;
- (void)loadNoticeView;
- (id)insertSpaceChar:(id)arg1 hasTransline:(_Bool)arg2;
- (void)loadSerialNumberDisplayView;
- (void)loadOneDimensionalCodeDisplayView;
- (void)loadTwoDimensionalCodeDisplayView;
- (void)loadMemberCardCodeDisplayView;
- (void)layoutSubviews;
- (double)getNoticeHeight;
- (struct CGRect)calFrame;
- (id)initWithCardTpInfo:(id)arg1 CardInfo:(id)arg2 bShareCard:(_Bool)arg3;
- (void)dealloc;

@end

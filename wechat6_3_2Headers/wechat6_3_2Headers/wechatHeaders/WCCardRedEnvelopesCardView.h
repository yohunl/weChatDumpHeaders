//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class WCCardDataCardInfo, WCCardDataCardTPInfo;

@interface WCCardRedEnvelopesCardView : MMUIView
{
    WCCardDataCardInfo *_cardInfo;
    WCCardDataCardTPInfo *_cardTPInfo;
    double _contentHeight;
}

@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(retain, nonatomic) WCCardDataCardTPInfo *cardTPInfo; // @synthesize cardTPInfo=_cardTPInfo;
@property(retain, nonatomic) WCCardDataCardInfo *cardInfo; // @synthesize cardInfo=_cardInfo;
- (void).cxx_destruct;
- (void)initView;
- (double)getContentViewRealHeight;
- (id)initRedEnvelopesCardViewWithFrame:(struct CGRect)arg1 withCardInfo:(id)arg2 withCardTpInfo:(id)arg3;

@end

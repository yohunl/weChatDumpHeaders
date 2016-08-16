//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface ShakeCardData : MMObject
{
    _Bool haveEgg;
    unsigned int resultType;
    unsigned int flowControlFlag;
    unsigned int flowControlLevel;
    unsigned int cardEndTime;
    NSString *viewTitle;
    NSString *viewSubTitle;
    NSString *viewDesc;
    NSString *cardTpId;
    NSString *cardExt;
    NSString *cardSubTitle;
    NSString *brandName;
    NSString *logoUrl;
    NSString *auxTitle;
    NSString *bkgColor;
    NSString *shareUrl;
    NSString *shareIconUrl;
    NSString *shareTitle;
    NSString *shareDesc;
    NSString *shareBtnTitle;
    NSString *tryAgainTipWording;
    NSString *acceptCardBtnTitle;
    NSString *_cardTitle;
}

@property(retain, nonatomic) NSString *cardTitle; // @synthesize cardTitle=_cardTitle;
@property(nonatomic) _Bool haveEgg; // @synthesize haveEgg;
@property(nonatomic) unsigned int cardEndTime; // @synthesize cardEndTime;
@property(nonatomic) unsigned int flowControlLevel; // @synthesize flowControlLevel;
@property(nonatomic) unsigned int flowControlFlag; // @synthesize flowControlFlag;
@property(retain, nonatomic) NSString *acceptCardBtnTitle; // @synthesize acceptCardBtnTitle;
@property(retain, nonatomic) NSString *tryAgainTipWording; // @synthesize tryAgainTipWording;
@property(retain, nonatomic) NSString *shareBtnTitle; // @synthesize shareBtnTitle;
@property(retain, nonatomic) NSString *shareDesc; // @synthesize shareDesc;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle;
@property(retain, nonatomic) NSString *shareIconUrl; // @synthesize shareIconUrl;
@property(retain, nonatomic) NSString *shareUrl; // @synthesize shareUrl;
@property(retain, nonatomic) NSString *bkgColor; // @synthesize bkgColor;
@property(retain, nonatomic) NSString *auxTitle; // @synthesize auxTitle;
@property(retain, nonatomic) NSString *logoUrl; // @synthesize logoUrl;
@property(retain, nonatomic) NSString *brandName; // @synthesize brandName;
@property(retain, nonatomic) NSString *cardSubTitle; // @synthesize cardSubTitle;
@property(retain, nonatomic) NSString *cardExt; // @synthesize cardExt;
@property(retain, nonatomic) NSString *cardTpId; // @synthesize cardTpId;
@property(retain, nonatomic) NSString *viewDesc; // @synthesize viewDesc;
@property(retain, nonatomic) NSString *viewSubTitle; // @synthesize viewSubTitle;
@property(retain, nonatomic) NSString *viewTitle; // @synthesize viewTitle;
@property(nonatomic) unsigned int resultType; // @synthesize resultType;
- (void).cxx_destruct;

@end


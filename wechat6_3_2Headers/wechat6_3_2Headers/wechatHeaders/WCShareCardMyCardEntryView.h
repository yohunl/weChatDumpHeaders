//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class NSArray, NSString, UIView;
@protocol WCShareCardMyCardEntryViewDelegate;

@interface WCShareCardMyCardEntryView : MMUIView
{
    _Bool _bForCard;
    NSArray *_arrNearByMyCardList;
    unsigned int _myCardCount;
    NSString *_subTitle;
    UIView *_cardBgView;
    UIView *_shadowView;
    UIView *_coverView;
    id <WCShareCardMyCardEntryViewDelegate> m_delegate;
}

+ (double)MyCardEntryViewHeight;
@property(nonatomic) __weak id <WCShareCardMyCardEntryViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (id)genLogoListView:(struct CGSize)arg1;
- (void)initView;
- (void)layoutSubviews;
- (id)initWithNearbyMyCardList:(id)arg1 myCardCount:(unsigned int)arg2 andSubTitle:(id)arg3;

@end


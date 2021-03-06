//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMWebImageViewDelegate-Protocol.h"

@class MMWebImageView, NSString, UILabel;
@protocol MMLocationAttributeBannerDelegate;

@interface MMLocationAttributeBanner : MMUIView <MMWebImageViewDelegate>
{
    NSString *_title;
    NSString *_logoUrl;
    NSString *_link;
    id <MMLocationAttributeBannerDelegate> _delegate;
    UILabel *_titleLable;
    MMWebImageView *_logoImgView;
}

@property(nonatomic) __weak id <MMLocationAttributeBannerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)onLoadImageOK:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateBanner:(id)arg1 LogoUrl:(id)arg2;
- (void)onTapBanner:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


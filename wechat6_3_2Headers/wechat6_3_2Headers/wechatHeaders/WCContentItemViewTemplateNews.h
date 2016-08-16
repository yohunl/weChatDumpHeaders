//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCContentItemBaseView.h"

#import "MMWebViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WCCanvasPageViewControllerDelegate-Protocol.h"
#import "WCForceTouchPreviewProtocol-Protocol.h"
#import "WCImageViewDelegate-Protocol.h"

@class MMImageGridView, NSString, UIImageView, UILabel;

@interface WCContentItemViewTemplateNews : WCContentItemBaseView <WCCanvasPageViewControllerDelegate, WCImageViewDelegate, MMWebViewDelegate, UIGestureRecognizerDelegate, WCForceTouchPreviewProtocol>
{
    MMImageGridView *_imageGridView;
    UIImageView *_defaultImageView;
    UILabel *_titleLabel;
    UIImageView *_originIconView;
    UILabel *_descLabel;
    double _targetMargin;
    double _targetWidth;
}

+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
+ (id)getTrimDesc:(id)arg1;
@property(nonatomic) double targetWidth; // @synthesize targetWidth=_targetWidth;
@property(nonatomic) double targetMargin; // @synthesize targetMargin=_targetMargin;
- (void).cxx_destruct;
- (void)onCloseCanvasPageView;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (_Bool)canPeek;
- (void)throwUrlMessage;
- (void)setNonInteractive;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void)dealloc;
- (void)onClickWCImage:(id)arg1;
- (void)layoutSubviews;
- (void)onLongTouch;
- (void)onShareToOpenSDK:(id)arg1;
- (void)addFavorite;
- (void)onFavoriteAdd:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)initViewsWithWCDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMessageNodeView.h"

#import "MMWebImageViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class NSString, UIImageView, UILabel;

@interface AppMusicMessageNodeView : BaseMessageNodeView <MMWebImageViewDelegate, UIAlertViewDelegate>
{
    UILabel *m_detailLabel;
    UILabel *m_titleLabel;
    UIImageView *m_thumbImageView;
    UIImageView *m_oBlurBkgImageView;
}

+ (_Bool)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (void)onLoadImageOK:(id)arg1;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (_Bool)canPeek;
- (id)getMoreMainInfomationAccessibilityDescription;
- (void)onMenuItemWillHide;
- (void)onTouchCancel;
- (void)onLongTouch;
- (void)onTouchUpInside;
- (void)onTouchDownRepeat;
- (void)onTouchDown;
- (void)onClearResource;
- (void)onDisappear;
- (void)onClick;
- (void)onMoreOperate:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onFavoriteAdd:(id)arg1;
- (void)showOpearation;
- (void)updateBkgImage:(_Bool)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)resend;
- (void)updateThumbImage;
- (void)updateStatus:(id)arg1;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (void)layoutSubviewsInternal;
- (id)getTitleText;
- (void)initMusicPlayView;
- (void)initDetailLabel;
- (id)getTitleLabel;
- (id)getThumbView:(id)arg1 LocalID:(unsigned int)arg2;
- (id)getDefaultThumbImage;
- (id)getBlurEffectAlbumBkg;
- (void)initBlurEffectAlbumBkg;
- (double)calBlurImageHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

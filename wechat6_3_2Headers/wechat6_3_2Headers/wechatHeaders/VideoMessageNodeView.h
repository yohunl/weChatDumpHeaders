//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMessageNodeView.h"

#import "IMsgExt-Protocol.h"
#import "IWXVideoPlayerViewExt-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class NSString, SightIconView, UIButton, UIImageView, UILabel;

@interface VideoMessageNodeView : BaseMessageNodeView <IMsgExt, IWXVideoPlayerViewExt, UIAlertViewDelegate>
{
    UIImageView *m_oImageView;
    SightIconView *m_oSightIconView;
    UIImageView *m_oVideoInfoBkgView;
    UILabel *m_oTimeLabel;
    UILabel *m_oFileSizeLabel;
    UIButton *m_oCancelBtn;
    NSString *m_videoPath;
    _Bool m_bhasDownloadComplete;
    _Bool m_bHasVideoFile;
    _Bool m_bIsLayoutsubView;
    int m_uiStatus;
}

+ (_Bool)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (id)getMoreMainInfomationAccessibilityDescription;
- (void)onDisappear;
- (void)onMenuItemWillHide;
- (void)onTouchCancel;
- (void)onLongTouch;
- (void)onTouchUpInside;
- (void)onTouchDownRepeat;
- (void)onTouchDown;
- (_Bool)isTouchInView:(id)arg1;
- (void)onClick;
- (void)showOpearation;
- (void)onWXVideoPlayerViewPlay:(id)arg1;
- (_Bool)canPlayVideo;
- (void)onDownloadVideoCommonFail:(id)arg1;
- (void)onDownloadVideoExpireFail:(id)arg1;
- (void)StartDownloadVideo:(id)arg1;
- (void)StartUploadVideo:(id)arg1;
- (void)StopDownloadVideo:(id)arg1;
- (void)StopUploadVideo:(id)arg1;
- (id)getMessageImageView;
- (void)onClearResource;
- (void)updateStatus:(id)arg1;
- (struct CGPoint)getSendOKViewOrgin;
- (void)updateBkgImage:(_Bool)arg1;
- (void)resend:(id)arg1;
- (void)onMoreOperate:(id)arg1;
- (void)onFavoriteAdd:(id)arg1;
- (void)onForward:(id)arg1;
- (void)initVideoInfoView;
- (void)layoutSubviewsInternal;
- (void)checkHasVideoFile;
- (void)updateContentViewHeight;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (id)getCoverImage;
- (id)thumbImage;
- (id)initWithMessageWrap:(id)arg1 Contact:(id)arg2 ChatContact:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


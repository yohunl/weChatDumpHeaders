//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ReaderNewMessageNodeView.h"

@interface ImageTextReaderMessageNodeView : ReaderNewMessageNodeView
{
}

+ (_Bool)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
- (id)genLabel:(id)arg1 maxWidth:(double)arg2 fone:(id)arg3;
- (double)calLabelHeight:(id)arg1 maxWidth:(double)arg2 fone:(id)arg3;
- (double)calLabelWidth:(id)arg1 maxWidth:(double)arg2 fone:(id)arg3;
- (id)getPubTimeString:(id)arg1;
- (_Bool)hasHeadImageAndNickName;
- (float)readerContentLMargin;
- (float)readerLineLMargin;
- (float)readerContentWidth;
- (float)readerViewWidth;
- (void)openWebUrl:(id)arg1;
- (void)onOPButtonClicked:(id)arg1;
- (void)onHeadImageClick;
- (void)onReaderViewClicked;
- (_Bool)CanWillShowReader:(id)arg1;
- (_Bool)CanResponseClicked;
- (void)onMenuItemWillHide;
- (void)onTouchCancel;
- (void)onLongTouch;
- (void)onTouchUpInside;
- (void)onTouchDownRepeat;
- (void)onTouchDown;
- (void)onFavoriteAdd:(id)arg1;
- (void)forwardMessage;
- (void)reLayoutSubviews;
- (void)updateBkgImage:(_Bool)arg1;
- (void)layoutSubviewsInternal;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;

@end

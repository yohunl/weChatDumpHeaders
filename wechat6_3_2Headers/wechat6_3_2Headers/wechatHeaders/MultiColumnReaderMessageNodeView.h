//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ReaderNewMessageNodeView.h"

@interface MultiColumnReaderMessageNodeView : ReaderNewMessageNodeView
{
}

+ (_Bool)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
- (id)genLabel:(id)arg1 maxWidth:(double)arg2 fone:(id)arg3;
- (double)calLabelHeight:(id)arg1 maxWidth:(double)arg2 fone:(id)arg3;
- (double)calLabelWidth:(id)arg1 maxWidth:(double)arg2 fone:(id)arg3;
- (id)getPubTimeString:(id)arg1;
- (float)readerContentLMargin;
- (float)readerLineLMargin;
- (float)readerContentWidth;
- (float)readerViewWidth;
- (void)onHeadImageClick;
- (void)onMenuItemWillHide;
- (void)onTouchCancel;
- (void)onLongTouch;
- (void)onTouchUpInside;
- (void)onTouchDownRepeat;
- (void)onTouchDown;
- (void)onReaderViewClicked;
- (_Bool)CanResponseClicked;
- (void)onFavoriteAdd:(id)arg1;
- (void)forwardMessage;
- (void)openWebUrl:(id)arg1;
- (_Bool)CanWillShowReader:(id)arg1;
- (void)updateBkgImage:(_Bool)arg1;
- (_Bool)isTouchInView:(id)arg1;
- (void)reLayoutSubviews;
- (void)onOPButtonClicked:(id)arg1;
- (_Bool)hasHeadImageAndNickName;
- (void)layoutSubviewsInternal;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;

@end


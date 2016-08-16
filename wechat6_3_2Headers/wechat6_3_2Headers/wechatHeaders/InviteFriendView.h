//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "IMMQRCodeExt-Protocol.h"

@class NSString, UIActivityIndicatorView, UIImageView, UITextView;
@protocol InviteFriendViewDelegate;

@interface InviteFriendView : MMUIView <IMMQRCodeExt>
{
    UIImageView *m_imageQRView;
    UIActivityIndicatorView *m_loadingView;
    UITextView *m_textView;
    id <InviteFriendViewDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)onDownloadQRCodeFinish:(id)arg1 FooterWording:(id)arg2;
- (void)dealloc;
- (void)onRight;
- (void)onLeft;
- (id)initWithFrame:(struct CGRect)arg1 Title:(id)arg2 Msg:(id)arg3 Delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

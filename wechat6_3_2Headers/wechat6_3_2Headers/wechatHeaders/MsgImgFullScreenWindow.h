//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIWindow.h"

#import "WCNetworkMediaPlayerDelegate-Protocol.h"

@class CMessageWrap, NSString;
@protocol MsgImgFullScreenWindowDelegate;

@interface MsgImgFullScreenWindow : MMUIWindow <WCNetworkMediaPlayerDelegate>
{
    NSString *_chatname;
    id <MsgImgFullScreenWindowDelegate> m_delegate;
    CMessageWrap *m_tempMessageWrap;
    _Bool m_bCloseForViewDetail;
}

@property(retain, nonatomic) NSString *chatname; // @synthesize chatname=_chatname;
- (void).cxx_destruct;
- (void)onShareVideoToTimeline:(_Bool)arg1;
- (void)onShareVideoToFriend:(id)arg1;
- (void)onClickFavVideoMenu;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)onClosePlayer;
- (void)onPlayAttachVideo:(id)arg1;
- (void)onHideStatusBar;
- (void)onShowStatusBar;
- (_Bool)viewAlreadyShow;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


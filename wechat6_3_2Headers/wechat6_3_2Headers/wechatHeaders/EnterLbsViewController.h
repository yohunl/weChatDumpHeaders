//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FriendAsistSessionExt-Protocol.h"

@class MMSayHelloButton, UIButton, UILabel;

@interface EnterLbsViewController : MMUIViewController <FriendAsistSessionExt>
{
    UIButton *m_btnLbs;
    MMSayHelloButton *m_btnSayHello;
    UILabel *m_labNoHello;
}

- (void).cxx_destruct;
- (void)onFriendAssistUnreadCountChanged;
- (void)UpdateView;
- (void)OnOpenLbs;
- (void)OnOpenSayHello;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initView;
- (void)initData;

@end


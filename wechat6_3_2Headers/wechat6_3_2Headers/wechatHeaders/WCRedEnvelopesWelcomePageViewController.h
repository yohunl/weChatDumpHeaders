//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCRedEnvelopesBaseViewController.h"

@protocol WCRedEnvelopesWelcomePageViewControllerDelegate;

@interface WCRedEnvelopesWelcomePageViewController : WCRedEnvelopesBaseViewController
{
    id <WCRedEnvelopesWelcomePageViewControllerDelegate> m_delegate;
    _Bool m_bDidBack;
}

- (void).cxx_destruct;
- (void)setDelegate:(id)arg1;
- (void)OnClickBannerActivity;
- (void)OnClickTailActivity;
- (void)OnClickHeadActivity;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)OnLeftBarButtonDone;
- (void)initNavigationBar;
- (_Bool)useTransparentNavibar;
- (id)init;

@end


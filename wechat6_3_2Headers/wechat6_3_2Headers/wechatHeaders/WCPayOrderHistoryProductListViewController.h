//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@protocol WCPayOrderHistoryProductListViewControllerDelegate;

@interface WCPayOrderHistoryProductListViewController : WCPayBaseViewController
{
    id <WCPayOrderHistoryProductListViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)clickInfoCell:(id)arg1;
- (void)makeProductCell:(id)arg1 cellInfo:(id)arg2;
- (void)reloadProductList;
- (void)reloadTableView;
- (void)refreshViewWithData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)backButtonDone;
- (void)viewDidLoad;
- (id)getHeaderView;

@end


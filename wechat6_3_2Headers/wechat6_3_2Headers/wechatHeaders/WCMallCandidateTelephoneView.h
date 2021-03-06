//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UIImageView, UITableView;
@protocol WCMallCandidateTelephoneViewDelegate;

@interface WCMallCandidateTelephoneView : MMUIView <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *m_oTelFilterTableView;
    UIImageView *bgImageView;
    id <WCMallCandidateTelephoneViewDelegate> m_delegate;
}

@property(nonatomic) __weak id <WCMallCandidateTelephoneViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)reloadTelFilterTableView;
- (void)reloadCandidateTelephoneView;
- (void)dealloc;
- (void)resetWCMallTelListTableViewHeight:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initView;
- (void)initTableView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


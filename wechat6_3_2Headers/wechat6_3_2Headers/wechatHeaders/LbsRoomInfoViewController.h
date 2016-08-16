//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "NewChatRoomMemberItemViewDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "contactInfoDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class CContact, MMLoadingView, MMTableView, NSMutableArray, NSString, UIImageView, UIView;

@interface LbsRoomInfoViewController : MMUIViewController <tableViewDelegate, UITableViewDelegate, UITableViewDataSource, NewChatRoomMemberItemViewDelegate, contactInfoDelegate, PBMessageObserverDelegate, UIAlertViewDelegate>
{
    unsigned int m_uiEventID;
    unsigned int m_iMemberCount;
    CContact *m_lbsRoomContact;
    NSMutableArray *m_arrMemberList;
    MMLoadingView *m_loadingView;
    MMTableView *m_tableView;
    UIView *m_headerView;
    UIImageView *m_memberBkgView;
    UIImageView *m_memberBorderView;
    NSMutableArray *m_arrMemberView;
}

@property(retain, nonatomic) CContact *m_lbsRoomContact; // @synthesize m_lbsRoomContact;
@property(retain, nonatomic) NSMutableArray *m_arrMemberView; // @synthesize m_arrMemberView;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)stopLoading;
- (void)startLoading;
- (id)createBackGroundImageWithImage:(id)arg1 scale:(unsigned int)arg2;
- (void)updateHeadView;
- (void)loadRoomMember:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)tryGetRoomMember;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)openContactInfo:(id)arg1;
- (void)onGetRoomMemberFailed;
- (void)onGetRoomMemberFinished;
- (void)initHeaderView;
- (void)initTableView;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initView;
- (void)initData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


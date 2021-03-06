//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "PeopleNearByListHeaderViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class LbsContactInfoList, MFBannerBtn, MMTableView, NSArray, NSMutableDictionary, NSString, PeopleNearByListHeaderView, SeePeopleNearByLogicController;
@protocol PeopleNearByListViewControllerDelegate;

@interface PeopleNearByListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, PeopleNearByListHeaderViewDelegate>
{
    PeopleNearByListHeaderView *m_lbsHeaderView;
    LbsContactInfoList *m_lbsContactList;
    MMTableView *m_tableView;
    SeePeopleNearByLogicController *m_logicController;
    NSMutableDictionary *m_userHeaderImageCache;
    long long m_iRoomMemberCount;
    id <PeopleNearByListViewControllerDelegate> m_delegate;
    MFBannerBtn *m_bannerBtn;
    NSArray *m_lbsPoiList;
    unsigned long long m_abtestResult;
}

@property(retain, nonatomic) NSArray *lbsPoiList; // @synthesize lbsPoiList=m_lbsPoiList;
@property(nonatomic) long long iRoomMemberCount; // @synthesize iRoomMemberCount=m_iRoomMemberCount;
@property(retain, nonatomic) NSMutableDictionary *userHeaderImageCache; // @synthesize userHeaderImageCache=m_userHeaderImageCache;
@property(retain, nonatomic) SeePeopleNearByLogicController *logicController; // @synthesize logicController=m_logicController;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=m_tableView;
@property(retain, nonatomic) LbsContactInfoList *lbsContactList; // @synthesize lbsContactList=m_lbsContactList;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)adjustSubviewRects;
- (void)onChatRoomNearByBtnClicked;
- (void)reloadWithLbsPoiList:(id)arg1;
- (void)reloadWithLbsContactInfoList:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)genLBSPeopleCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)genLBSPoiCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)checkBannerLogic;
- (void)createBannerBtn;
- (void)startBindQQ;
- (void)startUploadAddressbook;
- (void)startBindPhone;
- (_Bool)isLBSPeopleIndex:(id)arg1;
- (id)getCachedHeaderImageForUser:(id)arg1;
- (void)showChatRoomView;
- (void)dealloc;
- (id)init;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


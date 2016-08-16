//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "ContactsDataLogicDelegate-Protocol.h"
#import "ContactsPanelViewDelegate-Protocol.h"
#import "IFTSContactMgrExt-Protocol.h"
#import "MMSearchBarDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ContactsPanelView, CreateChatLogic, FTSContactMgr, MMSearchBar, MMTableView, MMUIAlertView, NSMutableArray, NSObject, NSString, UIAlertController, UIButton, WCRedEnvelopesMultiSelectContactsViewController;
@protocol WCRedEnvelopesSessionSelectViewControllerDelegate;

@interface WCRedEnvelopesSessionSelectViewController : MMSearchBarDisplayController <IFTSContactMgrExt, UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate, MMSearchBarDelegate, ContactsDataLogicDelegate, ContactsPanelViewDelegate>
{
    long long m_iSessionType;
    id <WCRedEnvelopesSessionSelectViewControllerDelegate> m_delegate;
    MMTableView *m_tableView;
    NSMutableArray *m_arrContacts;
    NSMutableArray *m_selectedContacts;
    ContactsPanelView *m_panelView;
    UIButton *m_panelBtn;
    int m_confirmType;
    int m_barTitleType;
    WCRedEnvelopesMultiSelectContactsViewController *m_oWCRedEnvelopesMultiSelectContactsViewController;
    MMSearchBar *m_mmSearchBar;
    NSObject *_userData;
    MMUIAlertView *selectAlert;
    UIAlertController *selectAlertController;
    FTSContactMgr *_ftsContactMgr;
    NSString *nsCurrentSearchText;
    NSMutableArray *arrSearchResultOfContacts;
    NSMutableArray *arrSearchResultOfGroup;
    _Bool m_bShowNewSession;
    _Bool m_bFilterMyContact;
    CreateChatLogic *m_createChatLogic;
    NSString *nsNewSessionCellTitle;
}

+ (id)getGroupDispName:(id)arg1;
@property(retain, nonatomic) NSObject *userData; // @synthesize userData=_userData;
@property(retain, nonatomic) NSString *nsNewSessionCellTitle; // @synthesize nsNewSessionCellTitle;
@property(retain, nonatomic) CreateChatLogic *m_createChatLogic; // @synthesize m_createChatLogic;
@property(nonatomic) int barTitleType; // @synthesize barTitleType=m_barTitleType;
@property(nonatomic) int confirmType; // @synthesize confirmType=m_confirmType;
@property(nonatomic) __weak id <WCRedEnvelopesSessionSelectViewControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool m_bFilterMyContact; // @synthesize m_bFilterMyContact;
@property(nonatomic) _Bool m_bShowNewSession; // @synthesize m_bShowNewSession;
- (void).cxx_destruct;
- (void)FilterSearchResultOfNormalContacts:(id)arg1;
- (void)onFTSContactSearchResultChanged:(_Bool)arg1;
- (void)removeFakeViewWhenAsynSearchIsReturn;
- (void)addFakeViewWhenAsynSearchNotReturn;
- (void)mmSearchBarTextDidChange:(id)arg1;
- (void)cancelSearch;
- (void)delaySearch:(id)arg1 slowMode:(_Bool)arg2;
- (void)delaySearchImp:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)SearchBarBecomeActive;
- (id)titleForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)viewForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfSectionsForSearchViewTable:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)onCreateChatContactReturn:(id)arg1;
- (void)didClickImageAtIndex:(unsigned int)arg1 withKey:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)handleSelectIndexPath:(id)arg1 tableView:(id)arg2;
- (id)getGroupDispName:(id)arg1;
- (void)onSelect:(id)arg1;
- (void)onDone:(id)arg1;
- (void)performCallback;
- (void)callbackDelegate;
- (void)updatePanelBtn;
- (void)updatePanelView:(id)arg1;
- (void)switchSelect:(id)arg1 atIndexPath:(id)arg2;
- (void)onConfirm;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleSelectNewSession;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (id)getCellImage:(id)arg1;
- (_Bool)isSelected:(id)arg1;
- (void)makeNewSessionCell:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)changeToAllCantactSection:(long long)arg1;
- (long long)getSectionType:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initFooterPanelView;
- (void)initView;
- (void)initTableView;
- (void)initSearchBar;
- (void)initTitle;
- (void)initBarItem;
- (void)onCancel:(id)arg1;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataChange;
- (void)initData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


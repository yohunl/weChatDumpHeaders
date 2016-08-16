//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "LongPressMenuViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMTableView, MMUILongPressMenuView, NSString, UIButton;

@interface MMMailContactViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, LongPressMenuViewDelegate>
{
    NSString *_nsMailContactName;
    NSString *_nsMailContactAddress;
    _Bool _bShowSendBtn;
    MMTableView *_tableView;
    UIButton *_sendMailBtn;
    MMUILongPressMenuView *_nameView;
    MMUILongPressMenuView *_addressView;
}

@property(nonatomic) _Bool bShowSendBtn; // @synthesize bShowSendBtn=_bShowSendBtn;
@property(retain, nonatomic) NSString *nsMailContactAddress; // @synthesize nsMailContactAddress=_nsMailContactAddress;
@property(retain, nonatomic) NSString *nsMailContactName; // @synthesize nsMailContactName=_nsMailContactName;
- (void).cxx_destruct;
- (void)MenuControllerWillHide:(id)arg1;
- (void)MenuControllerWillShow:(id)arg1;
- (void)onSendMail:(id)arg1;
- (void)onLongPressMenuViewCopy:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


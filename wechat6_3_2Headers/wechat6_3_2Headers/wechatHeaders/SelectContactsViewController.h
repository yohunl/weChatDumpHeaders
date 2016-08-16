//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "ContactSelectViewDelegate-Protocol.h"
#import "SelectContactsViewControllerDelegate-Protocol.h"

@class ContactSelectView, NSString, UIView;
@protocol SelectContactsViewControllerDelegate;

@interface SelectContactsViewController : MMSearchBarDisplayController <SelectContactsViewControllerDelegate, ContactSelectViewDelegate>
{
    id <SelectContactsViewControllerDelegate> m_delegate;
    UIView *m_titleView;
    unsigned int m_uiScene;
    ContactSelectView *m_selectView;
}

@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
@property(nonatomic) __weak id <SelectContactsViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onSelectContact:(id)arg1;
- (void)onSelectBrandContact;
- (void)onSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)initView;
- (void)initTitleArea;
- (void)onCancelBack:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


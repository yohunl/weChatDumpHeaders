//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMultiMenuTableViewCell.h"

@class ContactsItemView;

@interface NewContactsItemCell : MMMultiMenuTableViewCell
{
    ContactsItemView *m_contactsItemView;
    ContactsItemView *m_contactsItemWithRemarkPlusView;
    _Bool isSupportCustomDeleteButton;
    _Bool bUseDynamicSize;
}

@property(nonatomic) _Bool bUseDynamicSize; // @synthesize bUseDynamicSize;
@property(nonatomic) _Bool isSupportCustomDeleteButton; // @synthesize isSupportCustomDeleteButton;
- (void).cxx_destruct;
- (void)updateWithContact:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

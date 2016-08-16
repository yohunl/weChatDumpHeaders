//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class AddressBookFriend, AttributeLabel, MMHeadImageView, NSArray, NSString, SearchMatchTip, UIButton;
@protocol FTSAddressBookFriendCellDelegate;

@interface FTSAddressBookFriendCell : MMTableViewCell
{
    AddressBookFriend *_addressBookFriend;
    NSString *_searchText;
    id <FTSAddressBookFriendCellDelegate> _delegate;
    MMHeadImageView *_headImageView;
    AttributeLabel *_displayNameLabel;
    AttributeLabel *_detailLabel;
    UIButton *_opButton;
    SearchMatchTip *_matchTip;
    NSArray *_arrKeyword;
}

@property(retain, nonatomic) NSArray *arrKeyword; // @synthesize arrKeyword=_arrKeyword;
@property(retain, nonatomic) SearchMatchTip *matchTip; // @synthesize matchTip=_matchTip;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(nonatomic) __weak id <FTSAddressBookFriendCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateAddressBookFriend:(id)arg1 searchText:(id)arg2 matchTip:(id)arg3 keywords:(id)arg4;
- (void)updateStatus:(_Bool)arg1;
- (void)dealloc;
- (void)initView;
- (void)onOpButtonClicked;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


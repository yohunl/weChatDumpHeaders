//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class EnterpriseMemberViewItem;
@protocol EnterpriseMemberViewDelegate;

@interface EnterpriseMemberView : MMUIView
{
    EnterpriseMemberViewItem *_viewItem;
    id <EnterpriseMemberViewDelegate> delegate;
}

@property(nonatomic) __weak id <EnterpriseMemberViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)onDeleteMember;
- (void)onAddMember;
- (void)onLongPressHeadImage:(id)arg1;
- (void)onClickHeadImage;
- (void)setDeleteSmallButtonHidden:(_Bool)arg1;
- (_Bool)isDeleteSmallButtonHidden;
- (id)getEnterpriseUserName;
- (void)initView;
- (id)initWithMemberViewItem:(id)arg1 size:(struct CGSize)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUILabel, MultiTalkGroupMemberItem, UIImageView;

@interface MultiTalkSessionMemberCell : MMUIView
{
    _Bool _isBlackStyle;
    MultiTalkGroupMemberItem *_memberItem;
    UIImageView *_headImgView;
    MMUILabel *_userNameLabel;
}

@property(retain, nonatomic) MMUILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *headImgView; // @synthesize headImgView=_headImgView;
@property(nonatomic) _Bool isBlackStyle; // @synthesize isBlackStyle=_isBlackStyle;
@property(retain, nonatomic) MultiTalkGroupMemberItem *memberItem; // @synthesize memberItem=_memberItem;
- (void).cxx_destruct;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 andMemberItem:(id)arg2 isBlackStyle:(_Bool)arg3;
- (void)dealloc;

@end


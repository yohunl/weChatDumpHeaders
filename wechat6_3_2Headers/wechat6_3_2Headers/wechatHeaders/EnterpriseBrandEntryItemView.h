//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMultiMenuTableViewCell.h"

@class EnterpriseBrandEntryItemViewLayoutParam, MMBadgeView, UIImageView, UILabel;

@interface EnterpriseBrandEntryItemView : MMMultiMenuTableViewCell
{
    EnterpriseBrandEntryItemViewLayoutParam *_layoutParam;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    MMBadgeView *_badgeView;
}

+ (double)cellHeight;
- (void).cxx_destruct;
- (void)updateBadge:(_Bool)arg1;
- (void)updateWithImageName:(id)arg1 title:(id)arg2;
- (void)updateWithSpecialBrandSessionCellData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end


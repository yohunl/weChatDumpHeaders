//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMWebImageView, ShakeMsgItem, UILabel;

@interface ShakeMsgTableViewCell : MMUIView
{
    MMWebImageView *oThumbImageView;
    UILabel *oTitleLabel;
    UILabel *oDescLabel;
    UILabel *oTimeLabel;
    ShakeMsgItem *oMsgItem;
}

+ (double)heightForShakeMsgItem:(id)arg1 withCellSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initCellView;
- (void)showEdit:(_Bool)arg1;
- (id)initWithShakeMsgItem:(id)arg1 withCellSize:(struct CGSize)arg2;

@end


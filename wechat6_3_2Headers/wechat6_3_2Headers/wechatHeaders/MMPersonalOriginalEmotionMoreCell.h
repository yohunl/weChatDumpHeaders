//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class EmoticonStoreItem, MMWebImageButton, UIImageView, UILabel, UIView;

@interface MMPersonalOriginalEmotionMoreCell : UICollectionViewCell
{
    MMWebImageButton *_emotionButton;
    UILabel *_emotionTitleLabel;
    UILabel *_emotionDescLabel;
    EmoticonStoreItem *_item;
    UIView *_containerView;
    UIImageView *_tusijiImageView;
    UIImageView *_imageView;
}

- (void).cxx_destruct;
- (void)clickItem;
- (void)setupImageView;
- (void)setupLabel;
- (void)setupButton;
- (void)setupTusijiImageView;
- (void)setupViews;
- (void)setEmotionButtonBackgroundColor:(id)arg1;
- (void)setDesc:(id)arg1;
- (void)showEmotionButton;
- (void)setImage:(id)arg1;
- (void)setTitleLabelFrame:(struct CGRect)arg1;
- (void)setEmotionButtonFrame:(struct CGRect)arg1;
- (void)setCellHeight:(double)arg1;
- (void)setCellBackgroundColor:(id)arg1;
- (void)setTitleAlign:(long long)arg1;
- (void)setupEmotionStoreItem:(id)arg1;
- (void)setupLabelWithTitle:(id)arg1;
- (void)setupButtonImageURL:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


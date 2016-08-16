//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class ActionBase, MMWebImageView, UIButton;
@protocol ProductMediaItemViewDelegate;

@interface ProductMediaItemView : MMUIView
{
    id <ProductMediaItemViewDelegate> _delegate;
    ActionBase *_actionBase;
    MMWebImageView *_imageView;
    UIButton *_playBtn;
    unsigned long long _actionListCount;
}

- (void).cxx_destruct;
- (void)onMediaPlayBtnClicked;
- (void)layoutSubviews;
- (id)initWithDelegate:(id)arg1 actionBase:(id)arg2 actionListCount:(unsigned long long)arg3;

@end


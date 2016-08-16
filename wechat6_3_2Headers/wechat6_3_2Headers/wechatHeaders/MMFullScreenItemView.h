//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FavSightView, SimpleImgInfo, UIImageView;
@protocol FavSightViewDelegate;

@interface MMFullScreenItemView : UIView
{
    FavSightView *sightView;
    UIImageView *imageView;
    _Bool _isReady;
    SimpleImgInfo *_imgInfo;
    id <FavSightViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FavSightViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) SimpleImgInfo *imgInfo; // @synthesize imgInfo=_imgInfo;
- (void).cxx_destruct;
- (void)restartDownload;
- (void)onExitFullScreen;
- (void)updateImage:(id)arg1;
- (void)setSightDownFail;
- (void)setSightDownFinsh;
- (void)setSightFinishedLength:(int)arg1 TotalLength:(int)arg2;
- (void)releaseContentView;
- (void)onClick;
- (void)onHide;
- (void)onShow;
- (void)initContentView:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end

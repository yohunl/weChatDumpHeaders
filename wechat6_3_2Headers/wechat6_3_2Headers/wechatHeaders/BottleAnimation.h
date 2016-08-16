//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class MMImageView, MMTimer, UIImageView, UIView;
@protocol BottleAnimationDelegate><NSObject;

@interface BottleAnimation : MMObject
{
    unsigned int mAnimationStatus;
    _Bool mIsBalloonAnimationEnabled;
    unsigned int mLightAnimationStatus;
    id <BottleAnimationDelegate><NSObject> delegate;
    UIView *mCanvasView;
    UIImageView *mBalloonImageView;
    MMTimer *mLightTimer;
    UIImageView *mMoonImageView;
    UIImageView *mStarImageView;
    UIImageView *mLightLImageView;
    UIImageView *mLightMImageView;
    UIImageView *mLightRImageView;
    UIImageView *mEmptyBottleImageView;
    UIImageView *mSuckedObjectImageView;
    UIImageView *mWaterImageView;
    UIImageView *mWater2ImageView;
    UIImageView *mWater3ImageView;
    MMImageView *mFishStarImageView;
    MMImageView *mFishBottleImageView;
    UIView *mFishBottleTipView;
    struct CGPoint mBalloonToPoint;
}

@property(retain, nonatomic) UIView *mFishBottleTipView; // @synthesize mFishBottleTipView;
@property(retain, nonatomic) MMImageView *mFishBottleImageView; // @synthesize mFishBottleImageView;
@property(retain, nonatomic) MMImageView *mFishStarImageView; // @synthesize mFishStarImageView;
@property(retain, nonatomic) UIImageView *mWater3ImageView; // @synthesize mWater3ImageView;
@property(retain, nonatomic) UIImageView *mWater2ImageView; // @synthesize mWater2ImageView;
@property(retain, nonatomic) UIImageView *mWaterImageView; // @synthesize mWaterImageView;
@property(retain, nonatomic) UIImageView *mSuckedObjectImageView; // @synthesize mSuckedObjectImageView;
@property(retain, nonatomic) UIImageView *mEmptyBottleImageView; // @synthesize mEmptyBottleImageView;
@property(retain, nonatomic) UIImageView *mLightRImageView; // @synthesize mLightRImageView;
@property(retain, nonatomic) UIImageView *mLightMImageView; // @synthesize mLightMImageView;
@property(retain, nonatomic) UIImageView *mLightLImageView; // @synthesize mLightLImageView;
@property(retain, nonatomic) UIImageView *mStarImageView; // @synthesize mStarImageView;
@property(retain, nonatomic) UIImageView *mMoonImageView; // @synthesize mMoonImageView;
@property(retain, nonatomic) MMTimer *mLightTimer; // @synthesize mLightTimer;
@property(retain, nonatomic) UIImageView *mBalloonImageView; // @synthesize mBalloonImageView;
@property(nonatomic) struct CGPoint mBalloonToPoint; // @synthesize mBalloonToPoint;
@property(retain, nonatomic) UIView *mCanvasView; // @synthesize mCanvasView;
@property(nonatomic) __weak id <BottleAnimationDelegate><NSObject> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (_Bool)isFinish;
- (void)fishbranduser_animation;
- (void)fishtext_animation;
- (void)fishaudio_animation;
- (void)fishfail_animation;
- (void)fishing_animation;
- (void)throwtext_animation;
- (void)throwaudio_animation;
- (void)sucktext_animation;
- (void)suckaudio_animation;
- (void)stop_light_animationWithDarkValue:(float)arg1;
- (void)light_animation;
- (void)stop_balloon_animationWithDarkValue:(float)arg1 forced:(_Bool)arg2;
- (void)balloon_animation;
- (void)initStatus;
- (void)hideAllView;
- (void)resetStatus;
- (void)dealloc;
- (id)initWithCanvas:(id)arg1;
- (id)init;

@end


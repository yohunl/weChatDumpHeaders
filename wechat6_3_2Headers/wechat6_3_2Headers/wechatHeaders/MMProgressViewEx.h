//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMProgressViewExLayer, UIColor;

@interface MMProgressViewEx : UIView
{
    double total;
    double current;
    UIColor *frontColor;
    UIColor *backColor;
    double stepDuration;
    _Bool hideOnCompleteProcess;
    MMProgressViewExLayer *m_layer;
}

@property(nonatomic) _Bool hideOnCompleteProcess; // @synthesize hideOnCompleteProcess;
@property(nonatomic) double stepDuration; // @synthesize stepDuration;
@property(retain, nonatomic) UIColor *backColor; // @synthesize backColor;
@property(retain, nonatomic) UIColor *frontColor; // @synthesize frontColor;
@property(nonatomic) double current; // @synthesize current;
@property(nonatomic) double total; // @synthesize total;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoadingWithImage:(id)arg1;
- (void)startLoading;
- (void)setFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)hideSelf;
- (void)doAnimation_v2;
- (void)doAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end


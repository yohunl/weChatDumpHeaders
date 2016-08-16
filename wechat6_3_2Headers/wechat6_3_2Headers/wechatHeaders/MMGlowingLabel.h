//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIColor;

@interface MMGlowingLabel : UILabel
{
    double _glowSize;
    UIColor *_glowColor;
    double _innerGlowSize;
    UIColor *_innerGlowColor;
}

@property(retain, nonatomic) UIColor *innerGlowColor; // @synthesize innerGlowColor=_innerGlowColor;
@property(nonatomic) double innerGlowSize; // @synthesize innerGlowSize=_innerGlowSize;
@property(retain, nonatomic) UIColor *glowColor; // @synthesize glowColor=_glowColor;
@property(nonatomic) double glowSize; // @synthesize glowSize=_glowSize;
- (void).cxx_destruct;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


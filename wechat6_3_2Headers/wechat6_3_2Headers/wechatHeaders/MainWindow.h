//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@interface MainWindow : UIWindow
{
    double windowOffset;
    double mainWindowX;
    double mainWindowY;
    double mainWindowWidth;
    double mainWindowHeight;
    struct CGRect mainWindowFrame;
}

@property(nonatomic) double mainWindowX; // @synthesize mainWindowX;
@property(nonatomic) double windowOffset; // @synthesize windowOffset;
@property(nonatomic) double mainWindowWidth; // @synthesize mainWindowWidth;
@property(nonatomic) double mainWindowHeight; // @synthesize mainWindowHeight;
@property(nonatomic) double mainWindowY; // @synthesize mainWindowY;
- (void)setX:(double)arg1;
@property(nonatomic) struct CGRect mainWindowFrame; // @synthesize mainWindowFrame;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


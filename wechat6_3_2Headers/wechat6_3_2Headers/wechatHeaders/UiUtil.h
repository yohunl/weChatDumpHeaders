//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UiUtil : NSObject
{
}

+ (void)showCameraAlertForSplitViewIfNeed:(id)arg1 currentWidth:(double)arg2;
+ (_Bool)isiPadSplitViewModeNow;
+ (_Bool)isiPadSplitViewMinimizeModeNow;
+ (void)setStatusBarStyle:(long long)arg1;
+ (void)refreshStatusBarStyle;
+ (void)setStatusBarFontBlack;
+ (void)setStatusBarFontWhite;
+ (double)tabBarHeight;
+ (struct CGRect)screenRectRelativeToView:(id)arg1;
+ (void)fixNavigationController:(id)arg1;
+ (double)groupedStyleCellSubViewRight;
+ (double)groupedStyleCellWidth;
+ (double)topBarNormalOffset;
+ (_Bool)isTopBarInNormalState;
+ (double)keyboardHeightByNotification:(id)arg1;
+ (double)keyboardHeightCurOri;
+ (double)taskBarHeight;
+ (void)setTaskBarHeight:(double)arg1 Animated:(_Bool)arg2;
+ (_Bool)isTaskBarHidden;
+ (void)setTopBarHidden:(_Bool)arg1 withAnimation:(long long)arg2;
+ (void)setTopBarHidden:(_Bool)arg1;
+ (_Bool)isTopBarHidden;
+ (long long)getRotatedOrientation;
+ (void)setStatusBarHidden:(_Bool)arg1 withAnimation:(long long)arg2;
+ (void)setStatusBarHidden:(_Bool)arg1;
+ (_Bool)isStatusBarLandscape;
+ (_Bool)isStatusBarHidden;
+ (void)OnSystemStatusBarFrameChange;
+ (void)OnSystemStatusBarOrientationChange:(long long)arg1;
+ (id)getTopVisibleWindow;
+ (id)mainWindow;
+ (double)visibleHeight:(id)arg1;
+ (struct CGRect)screenBoundsOri:(long long)arg1;
+ (struct CGRect)windowBounds;
+ (struct CGRect)screenBounds;
+ (struct CGSize)screenSizeOri:(long long)arg1;
+ (struct CGSize)screenSize;
+ (double)mainScreenWidth;
+ (double)screenWidth:(long long)arg1;
+ (double)screenWidthCurOri;
+ (double)screenHeight:(long long)arg1;
+ (double)screenHeightCurOri;
+ (double)navigationBarHeight:(long long)arg1;
+ (double)navigationBarHeightCurOri;
+ (double)navigationBarHeight;
+ (double)statusBarHeight:(long long)arg1;
+ (double)statusBarHeight;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@interface MMWindowViewController : MMUIViewController
{
    _Bool _isCallDismissSelf;
    _Bool _isRequestKeyWindow;
    _Bool _isNeedNavCtrl;
    int _level;
    int _transitionOptions;
    long long _statusBarStyle;
    _Bool _isChangeStatusBar;
}

- (void)dealloc;
- (void)hideWithAnimated:(int)arg1;
- (void)hide;
- (void)DismissMyselfAnimated:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)showWithAnimated:(int)arg1 willCloseAfter:(double)arg2;
- (_Bool)isObjShowing;
- (_Bool)isClassShowing;
- (void)showWithAnimated:(int)arg1;
- (void)show;
- (void)setStatusBarStyle:(long long)arg1;
- (void)hideNavBar;
- (void)setWindowLevel:(int)arg1;
- (id)init;

@end


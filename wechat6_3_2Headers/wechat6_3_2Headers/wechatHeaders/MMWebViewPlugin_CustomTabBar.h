//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWebViewPluginBase.h"

#import "UITabBarDelegate-Protocol.h"

@class NSString, UITabBar;

@interface MMWebViewPlugin_CustomTabBar : MMWebViewPluginBase <UITabBarDelegate>
{
    UITabBar *_myCustomTabBar;
    long long _lastSelectedIndex;
}

- (void).cxx_destruct;
- (id)imageWithImage:(id)arg1 scaledToSize:(struct CGSize)arg2;
- (void)tabBar:(id)arg1 didSelectItem:(id)arg2;
- (void)createTabBarWithItems:(id)arg1 backgroundColor:(id)arg2 textColor:(id)arg3 selectedTextColor:(id)arg4 selectedIndex:(long long)arg5 borderStyle:(id)arg6;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


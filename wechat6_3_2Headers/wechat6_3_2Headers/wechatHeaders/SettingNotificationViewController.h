//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SettingBaseViewController.h"

@class DelaySwitchSettingLogic;

@interface SettingNotificationViewController : SettingBaseViewController
{
    DelaySwitchSettingLogic *m_delaySwitchLogic;
}

- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)makePushNoDisturbCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makePushDetailCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeNotificationRemindCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeWCNotificationCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeNotificationCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeSwitchCell:(id)arg1 colName:(id)arg2 action:(SEL)arg3 on:(_Bool)arg4;
- (void)openPushNoDisturbView;
- (void)pushDetailSwitchChanged:(id)arg1;
- (void)doSetPrivateConfig:(unsigned int)arg1 on:(_Bool)arg2 bitset:(unsigned int)arg3;
- (void)vibrationSwitchChanged:(id)arg1;
- (void)wcNotificationSwitchChanged:(id)arg1;
- (void)soundSwitchChanged:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSString;

@interface MMFreeSapceCheckViewUtil : NSObject <UIAlertViewDelegate>
{
}

+ (id)sharedInstance;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)goSettingStorageManage;
- (void)goCleanView;
- (void)showLowSpaceAlertAfterClearData;
- (void)showLowSpaceAlert;
- (void)showUrgentSpaceAlert;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


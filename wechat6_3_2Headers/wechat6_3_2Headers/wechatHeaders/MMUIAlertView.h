//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertView.h>

#import "MMDelegateCenterExt-Protocol.h"

@class MMDelegateProxy, NSString;
@protocol UIAlertViewDelegate;

@interface MMUIAlertView : UIAlertView <MMDelegateCenterExt>
{
    MMDelegateProxy<UIAlertViewDelegate> *delegateProxy;
}

- (void).cxx_destruct;
- (void)onClearMyDelegate:(id)arg1 forProtocols:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


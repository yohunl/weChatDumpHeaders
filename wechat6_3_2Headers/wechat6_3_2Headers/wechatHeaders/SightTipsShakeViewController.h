//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowViewController.h"

@protocol SightTipsShakeViewControllerDelegate;

@interface SightTipsShakeViewController : MMWindowViewController
{
    id <SightTipsShakeViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SightTipsShakeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onConfirm;
- (void)setupInfoView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end


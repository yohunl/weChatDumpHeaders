//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class QSMCalloutView;

@protocol QSMCalloutViewDelegate <NSObject>

@optional
- (void)calloutViewDidDisappear:(QSMCalloutView *)arg1;
- (void)calloutViewWillDisappear:(QSMCalloutView *)arg1;
- (void)calloutViewDidAppear:(QSMCalloutView *)arg1;
- (void)calloutViewWillAppear:(QSMCalloutView *)arg1;
- (double)calloutView:(QSMCalloutView *)arg1 delayForRepositionWithSize:(struct CGSize)arg2;
@end


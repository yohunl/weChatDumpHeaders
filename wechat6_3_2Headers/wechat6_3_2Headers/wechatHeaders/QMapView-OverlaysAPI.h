//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QMapView.h"

@class NSArray;

@interface QMapView (OverlaysAPI)
- (id)viewForOverlay:(id)arg1;
@property(readonly, nonatomic) NSArray *overlays;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeOverlays:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)addOverlays:(id)arg1;
- (void)addOverlay:(id)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QMapView.h"

@protocol QMapViewDataSource;

@interface QMapView (ChangeDataSource)
- (void)setCountryCode:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2;
@property(nonatomic) __weak id <QMapViewDataSource> dataSource;
@property(nonatomic) _Bool automaticChangeDataSource;
@end

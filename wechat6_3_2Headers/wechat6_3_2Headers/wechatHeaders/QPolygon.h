//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QMultiPoint.h"

#import "QOverlay-Protocol.h"

@class NSString;

@interface QPolygon : QMultiPoint <QOverlay>
{
}

+ (id)polygonWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
+ (id)polygonWithCoordinates:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
- (id)initWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
- (id)initWithWithCoordinates:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, nonatomic) CDStruct_90e2a262 boundingMapRect;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


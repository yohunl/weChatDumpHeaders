//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, QScaleUnitsView, UIColor;

@interface QScaleView : UIView
{
    UIColor *_lightSegmentColorRegular;
    UIColor *_darkSegmentColorRegular;
    UIColor *_borderColorRegular;
    UIColor *_lightSegmentColorSatellite;
    UIColor *_darkSegmentColorSatellite;
    UIColor *_borderColorSatellite;
    NSString *_metersAbbreviation;
    NSString *_kilometersAbbreviation;
    double *_magicNumbers;
    int _oldNumberOfSegments;
    int _segmentNumber;
    double _resultSegmentLength;
    double _resultSegmentLengthInMeters;
    UIView *_outlineView;
    QScaleUnitsView *_unitsView;
    _Bool _useRegularStyle;
    double _distanceInMeters;
}

@property(nonatomic) double distanceInMeters; // @synthesize distanceInMeters=_distanceInMeters;
@property(nonatomic) _Bool useRegularStyle; // @synthesize useRegularStyle=_useRegularStyle;
- (void).cxx_destruct;
- (void)updateUnitsView;
- (void)updateOutlineView;
- (void)updateDisplayStyle;
- (void)calculateSegmentLength;
- (void)calculateSegmentsCount;
- (void)calculateSegments;
- (void)updateOrigin:(struct CGPoint)arg1;
- (void)initSegmentViews;
- (void)initBaseLayer;
- (void)initMagicNumber;
- (void)initAttributes;
- (id)init;
- (void)dealloc;

@end

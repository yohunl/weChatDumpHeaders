//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (Genie)
- (void)genieOutTransitionWithDuration:(double)arg1 startRect:(struct CGRect)arg2 startEdge:(unsigned long long)arg3 Completion:(CDUnknownBlockType)arg4;
- (void)genieInTransitionWithDuration:(double)arg1 destinationRect:(struct CGRect)arg2 destinationEdge:(unsigned long long)arg3 Completion:(CDUnknownBlockType)arg4;
- (void)genieTransitionWithDuration:(double)arg1 edge:(unsigned long long)arg2 destinationRect:(struct CGRect)arg3 reverse:(_Bool)arg4 Completion:(CDUnknownBlockType)arg5;
- (id)transformationsForSlices:(id)arg1 edge:(unsigned long long)arg2 startPosition:(double)arg3 totalSize:(double)arg4 firstBezier:(struct BCSegment)arg5 secondBezier:(struct BCSegment)arg6 finalRectDepth:(double)arg7;
- (id)transformRect:(struct CGRect)arg1 toTrapezoid:(union BCTrapezoid)arg2;
- (id)sliceImage:(id)arg1 toLayersAlongAxis:(int)arg2;
- (id)renderSnapshotWithMarginForAxis:(int)arg1;
@end


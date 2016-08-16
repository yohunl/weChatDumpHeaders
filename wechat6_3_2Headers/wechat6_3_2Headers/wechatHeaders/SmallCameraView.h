//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MoveWithTouchAlgorithmDelegate-Protocol.h"

@class MoveWithTouchAlgorithm, NSString;
@protocol SmallCameraViewDelegate;

@interface SmallCameraView : UIView <MoveWithTouchAlgorithmDelegate>
{
    _Bool _hasMoved;
    MoveWithTouchAlgorithm *m_moveAlgorithm;
    id <SmallCameraViewDelegate> delegate;
}

@property(nonatomic) id <SmallCameraViewDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) MoveWithTouchAlgorithm *m_moveAlgorithm; // @synthesize m_moveAlgorithm;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)onMoveWithTouchAlgorithmRequestView;
- (void)onMoveWithTouchAlgorithmTaped;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (void)adsorbToWindow;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


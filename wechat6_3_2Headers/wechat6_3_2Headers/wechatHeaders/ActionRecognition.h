//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionManager;
@protocol NSObject><ActionRecognitionDelegate;

@interface ActionRecognition : NSObject
{
    CMMotionManager *mMotionMgr;
    float mGFactor;
    _Bool mIsCloseToEarRecognEnabled;
    _Bool mStartProximityState;
    _Bool mIsCloseToEar;
    _Bool mIsShakeRecognEnabled;
    id <NSObject><ActionRecognitionDelegate> delegate;
}

@property(nonatomic) __weak id <NSObject><ActionRecognitionDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)unregisterNotify;
- (void)registerNotify;
- (void)proximityChange:(id)arg1;
- (void)disableProximity;
- (void)enableProximity;
- (void)closeToEarRecognByX:(double)arg1 Y:(double)arg2 Z:(double)arg3;
- (_Bool)isShakeRecogning;
- (void)stopShakeRecogn;
- (void)startShakeRecognByFactor:(float)arg1;
- (_Bool)isCloseToEarRecogning;
- (void)stopCloseToEarRecogn;
- (void)startCloseToEarRecogn;
- (void)dealloc;
- (id)init;

@end


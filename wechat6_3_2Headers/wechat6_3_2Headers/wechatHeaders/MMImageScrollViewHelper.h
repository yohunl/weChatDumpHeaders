//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MMImageScrollViewHelperDelegate;

@interface MMImageScrollViewHelper : NSObject
{
    _Bool dontCalcPreviewRect;
    _Bool noSingleTaps;
    _Bool noDoubleTaps;
    _Bool dontSupportVerticalLongImage;
    _Bool dontSupportHorizontalLongImage;
    id <MMImageScrollViewHelperDelegate> m_delegate;
}

@property(nonatomic) __weak id <MMImageScrollViewHelperDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool dontSupportHorizontalLongImage; // @synthesize dontSupportHorizontalLongImage;
@property(nonatomic) _Bool dontSupportVerticalLongImage; // @synthesize dontSupportVerticalLongImage;
@property(nonatomic) _Bool noDoubleTaps; // @synthesize noDoubleTaps;
@property(nonatomic) _Bool noSingleTaps; // @synthesize noSingleTaps;
@property(nonatomic) _Bool dontCalcPreviewRect; // @synthesize dontCalcPreviewRect;
- (void).cxx_destruct;
- (void)scrollViewDidZoom:(id)arg1;
- (void)ZoomForPoint:(struct CGPoint)arg1;
- (void)onDoubleTap:(id)arg1;
- (struct CGRect)zoomRectForScale:(float)arg1 withCenter:(struct CGPoint)arg2;
- (void)onSingleTap:(id)arg1;
- (void)dealloc;
- (void)initHelper:(struct CGSize)arg1 orientation:(long long)arg2;
- (void)initHelper:(struct CGSize)arg1 orientation:(long long)arg2 containSize:(struct CGSize)arg3;
- (void)initHelper:(struct CGSize)arg1;
- (struct CGSize)calculateImageFitSizeForPreview:(struct CGSize)arg1 maxSize:(struct CGSize)arg2;
- (void)InitGestureRecognizer;
- (id)init;

@end


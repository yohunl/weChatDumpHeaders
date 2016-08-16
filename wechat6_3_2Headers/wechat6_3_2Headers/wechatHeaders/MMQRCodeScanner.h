//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSObject;
@protocol MMQRCodeScannerDelegate;

@interface MMQRCodeScanner : MMObject
{
    int m_inputWidth;
    int m_inputHeight;
    char *m_scanBuffer;
    struct QBar *_qbar;
    _Bool _active;
    NSObject<MMQRCodeScannerDelegate> *_delegate;
}

@property(nonatomic) __weak NSObject<MMQRCodeScannerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)printArray:(vector_78818218)arg1;
- (id)getStringFromUTF8Bytes:(const char *)arg1 LENGTH:(int)arg2;
- (void)scanVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)stopQRScan;
- (void)startQRScan;
- (void)setOutputWidth:(float)arg1 andHeight:(float)arg2;
- (void)dealloc;
- (id)init;

@end


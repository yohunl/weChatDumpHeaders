//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseScanLogicController.h"

#import "GetA8KeyLogicDelegate-Protocol.h"
#import "NewQRCodeScannerDelegate-Protocol.h"
#import "ScanBarcodeExt-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class GetA8KeyLogic, NSObject, NSOperationQueue, NSString, NewQRCodeScanner;
@protocol OS_dispatch_semaphore;

@interface ScanQRCodeLogicController : BaseScanLogicController <NewQRCodeScannerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIAlertViewDelegate, GetA8KeyLogicDelegate, ScanBarcodeExt>
{
    NewQRCodeScanner *_scanner;
    _Bool _hasCamera;
    GetA8KeyLogic *_logic;
    NSString *_desc;
    _Bool _hasFoundCode;
    NSString *_loadingText;
    NSString *_alertText;
    _Bool _showingMyQRCode;
    _Bool _scanOnePictureMode;
    NSOperationQueue *_scanPicOperationQueue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    _Bool _bIsScanFromAlbumImage;
    _Bool _hasReported;
    unsigned int fromScene;
}

@property(nonatomic) unsigned int fromScene; // @synthesize fromScene;
@property(nonatomic) _Bool hasFoundCode; // @synthesize hasFoundCode=_hasFoundCode;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (void).cxx_destruct;
- (void)onNeedStartScan;
- (void)onGetProductInfoHandleEnd;
- (void)onGetProductInfoEnd;
- (void)onGetProductInfoStart;
- (void)onSearchContactHandleEnd;
- (void)onSearchContactEnd;
- (void)onSearchContactStart;
- (void)onGetA8KeyEnd;
- (void)onGetA8KeyStart;
- (void)OnSendBarcode:(id)arg1 Err:(int)arg2;
- (void)onGotBarcode:(id)arg1 Type:(id)arg2;
- (void)NewQRCodeScanner:(id)arg1 didScanResult:(id)arg2 type:(id)arg3 version:(int)arg4;
- (void)reportEngineStatWithScene:(unsigned int)arg1;
- (void)reportAfterCameraViewControlelrExit;
- (id)getResultType;
- (id)getResultData;
- (void)showScanResult;
- (_Bool)getScanResult:(double)arg1;
- (void)doScanQRCode:(id)arg1;
- (void)tryScanOnePicture:(id)arg1;
- (void)onRotate;
- (_Bool)shouldPopFromStack;
- (_Bool)shouldDoAnimationWhenDismiss;
- (void)scanOnePicture:(id)arg1;
- (void)startLoadingCheck;
- (void)startLoadingSearch;
- (void)onIntroButtonClicked;
- (id)getIntroDesctiption;
- (id)getIntroTitle;
- (float)getIntroButtonTopPadding;
- (id)getIntroButtonTitle;
- (_Bool)shouldShowIntroButton;
- (float)getPreviewScale;
- (id)getAlertText;
- (id)getLoadingText;
- (id)getInfoText;
- (struct CGRect)getDrawCropRect;
- (void)setCropRect;
- (void)stopScan;
- (void)startScan;
- (void)releaseSemaphore;
@property(readonly, nonatomic) int scanCodeType;
- (void)dealloc;
- (id)initWithViewController:(id)arg1 CodeType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


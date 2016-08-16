//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "ImageBrowseDelegate-Protocol.h"
#import "ImagePreviewDelegate-Protocol.h"
#import "MMImagePickerManagerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class CaptureVideoInfo, MMLoadingView, NSString, UINavigationController, UIViewController;
@protocol ImageControllerDelegate;

@interface ImageController : MMObject <WCActionSheetDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, ImagePreviewDelegate, ImageBrowseDelegate, MMImagePickerManagerDelegate, UIAlertViewDelegate>
{
    id <ImageControllerDelegate> m_delegate;
    CaptureVideoInfo *m_oVideoInfo;
    UINavigationController *m_oVideoPicker;
    MMLoadingView *m_loadingView;
    _Bool m_isJustReturnMMAsset;
}

@property(nonatomic) _Bool m_isJustReturnMMAsset; // @synthesize m_isJustReturnMMAsset;
@property(retain, nonatomic) UIViewController *m_oVideoPicker; // @synthesize m_oVideoPicker;
@property(retain, nonatomic) CaptureVideoInfo *m_oVideoInfo; // @synthesize m_oVideoInfo;
@property(nonatomic) __weak id <ImageControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)downloadFailInImageBrowse;
- (void)Reset;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)didSelectImage:(id)arg1 Data:(id)arg2 Finish:(_Bool)arg3 fromImagePicker:(id)arg4;
- (void)didSelectImage:(id)arg1 Data:(id)arg2 fromImagePicker:(id)arg3;
- (void)didSelectImage:(id)arg1 fromImagePicker:(id)arg2;
- (void)didSelectImage:(id)arg1 Data:(id)arg2 Finish:(_Bool)arg3 ImageInfo:(id)arg4 fromImagePicker:(id)arg5;
- (void)didSelectMMAsset:(id)arg1 finish:(_Bool)arg2 fromImagePicker:(id)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)willPresentAlertView:(id)arg1;
- (void)handleVideo:(id)arg1;
- (void)handleVideo:(id)arg1 ImagePicker:(id)arg2;
- (void)handleVideo;
- (int)getVideoDuration:(id)arg1;
- (id)genVideoInfoWithVideoUrl:(id)arg1;
- (void)SendVideoWithVideoFileUrl:(id)arg1;
- (void)SendImageWithURL:(id)arg1;
- (void)onSendCaptrueCancel:(id)arg1;
- (void)OpenCameraController;
- (void)OpenMediaBrowser;
- (void)showImagePicker:(long long)arg1;
- (id)getViewController;
- (void)initLoadingView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


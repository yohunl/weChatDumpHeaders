//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FavForwardLogicDelegate-Protocol.h"
#import "IFavoritesExt-Protocol.h"
#import "INetworkStatusMgrExt-Protocol.h"
#import "ImageScrollViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIDocumentInteractionControllerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class FavDataItemWrap, FavForwardLogicController, FavoritesItem, FavoritesItemDataField, ImageScrollView, MMProgressView, NSString, UIButton, UIDocumentInteractionController, UIImageView, UILabel, UIView;
@protocol FavFileDetailDelegate;

@interface FavFileDetailViewController : MMUIViewController <UIAlertViewDelegate, INetworkStatusMgrExt, IFavoritesExt, ImageScrollViewDelegate, FavForwardLogicDelegate, WCActionSheetDelegate, UIDocumentInteractionControllerDelegate>
{
    FavoritesItem *m_favItem;
    FavDataItemWrap *m_favDataWrap;
    FavoritesItemDataField *m_favData;
    UIImageView *m_imageView;
    UILabel *m_labFileName;
    MMProgressView *m_progressBar;
    UILabel *m_labProgress;
    UIButton *m_btnFileOpen;
    UIButton *m_btnOpenByApp;
    UILabel *m_labelSyncTip;
    UIButton *m_labelSync;
    UIView *m_capExceedView;
    ImageScrollView *m_imgPreview;
    UIDocumentInteractionController *m_vcDocument;
    int syncStautus;
    _Bool m_bIsUnkownType;
    NSString *m_nsDataPath;
    NSString *m_nsFileName;
    unsigned int m_uiFileSize;
    unsigned int m_uiFileType;
    _Bool m_bFileExit;
    FavForwardLogicController *m_favForwardController;
    id <FavFileDetailDelegate> m_delegate;
    NSString *m_tmpFilePath;
}

@property(nonatomic) __weak id <FavFileDetailDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (id)getFavForawrdViewController;
- (void)onSingleTap:(id)arg1;
- (void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
- (void)updateRightBtn;
- (void)onFavTagEditBegin:(int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onAction:(id)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)viewDidTransitionToNewSize;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)OnFavoritesItemStartAsyncUpload:(id)arg1;
- (void)OnAddFavoritesItem:(id)arg1 ErrCode:(int)arg2;
- (void)OnUploadFavoritesItem:(id)arg1 LocalDataId:(id)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
- (void)OnFavoritesItemDownloadFinished:(id)arg1 ErrCode:(int)arg2;
- (void)OnDownloadFavoritesItem:(id)arg1 LocalDataId:(id)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
- (void)SetProgress:(double)arg1 TotalSize:(double)arg2;
- (void)StopSync;
- (void)StartSync;
- (void)OpenByApp;
- (void)OpenFile;
- (void)showVideoExpire;
- (void)showSyncComplete;
- (void)showDownloading;
- (void)showUploading;
- (void)showNeedDownload;
- (void)showNeedUpload;
- (void)updateBtns;
- (void)updateStatus;
- (void)initView;
- (void)updateData;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)SafeDeleteDocument;
- (void)dealloc;
- (id)initWithFavDataWrap:(id)arg1;
- (id)initWithFavItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


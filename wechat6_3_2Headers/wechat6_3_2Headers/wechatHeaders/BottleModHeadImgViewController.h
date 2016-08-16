//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMImagePickerManagerDelegate-Protocol.h"
#import "MMPickerViewDelegate-Protocol.h"
#import "MessageObserverDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class DelaySwitchSettingLogic, MMHeadImageView, MMLoadingView, MMTableView, NSString;

@interface BottleModHeadImgViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, MessageObserverDelegate, MMPickerViewDelegate, WCActionSheetDelegate, MMImagePickerManagerDelegate>
{
    MMTableView *m_tableView;
    MMHeadImageView *m_headImage;
    MMLoadingView *m_loadingView;
    unsigned int m_uiUploadHeadEventID;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
}

- (void).cxx_destruct;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeShowInMainFrameCell:(id)arg1;
- (void)showInMainFrame:(id)arg1;
- (void)setShowInMainFrameOpen:(_Bool)arg1 configType:(unsigned int)arg2 status:(unsigned int)arg3;
- (void)makeSetHeadImageCell:(id)arg1;
- (void)updateHead:(id)arg1;
- (id)getSettingHeadImage;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showChangeImg;
- (void)showImagePicker:(long long)arg1;
- (id)getViewController;
- (void)handleImage:(id)arg1;
- (void)stopLoadingAndShowOK:(id)arg1;
- (void)stopLoadingAndShowError:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)OnLeave:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


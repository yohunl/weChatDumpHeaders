//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FavBaseDetailViewController.h"

#import "FavForwardLogicDelegate-Protocol.h"
#import "FavFullScreenImageViewDelegate-Protocol.h"
#import "FavImagePreViewDelegate-Protocol.h"
#import "ForwardMessageLogicDelegate-Protocol.h"
#import "IFavoritesExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class FavForwardLogicController, ForwardMessageLogicController, NSString;

@interface FavMultiImageDetailViewController : FavBaseDetailViewController <WCActionSheetDelegate, IFavoritesExt, FavFullScreenImageViewDelegate, ForwardMessageLogicDelegate, FavImagePreViewDelegate, FavForwardLogicDelegate>
{
    FavForwardLogicController *m_favForwardController;
    unsigned int m_uiLongPressedIndex;
    ForwardMessageLogicController *m_forwardMsgLogic;
}

- (void).cxx_destruct;
- (id)getFavForawrdViewController;
- (void)OnDownloadFavoritesItemOK:(id)arg1 LocalDataId:(id)arg2;
- (void)OnFavoritesItemDownloadFinished:(id)arg1 ErrCode:(int)arg2;
- (void)viewDidTransitionToNewSize;
- (id)getCurrentViewController;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onFavFullScreenImageViewHide;
- (void)onLongPressedFavPreImage:(id)arg1;
- (void)onClickFavPreImage:(id)arg1 ImageIndex:(unsigned int)arg2;
- (void)onSaveFavDataImg;
- (void)onForwardFavDataWrap2WC;
- (void)onForwardFavDataWrap2Msg;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (long long)getRowsInContentSection;
- (void)onAction:(id)arg1;
- (void)adjustViewAndNavBarRect;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithFavItem:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


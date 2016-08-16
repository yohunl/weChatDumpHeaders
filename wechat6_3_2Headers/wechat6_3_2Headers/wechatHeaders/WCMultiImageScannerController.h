//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFullScreenViewController.h"

#import "PageScrollViewDataSource-Protocol.h"
#import "PageScrollViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString, PageScrollView, UIButton;
@protocol WCMultiImageScannerDelegate;

@interface WCMultiImageScannerController : MMFullScreenViewController <UIScrollViewDelegate, PageScrollViewDelegate, PageScrollViewDataSource, WCActionSheetDelegate>
{
    PageScrollView *_pageScrollView;
    UIButton *_deleteButton;
    NSMutableArray *_arrViewItem;
    unsigned long long _currentIndex;
    _Bool _isComeFromRotate;
    _Bool m_bAnimating;
    id <WCMultiImageScannerDelegate> _scannerDelegate;
    NSMutableSet *_setPreviewItem;
}

@property(nonatomic) __weak id <WCMultiImageScannerDelegate> scannerDelegate; // @synthesize scannerDelegate=_scannerDelegate;
@property(retain, nonatomic) NSMutableArray *arrViewItem; // @synthesize arrViewItem=_arrViewItem;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) PageScrollView *pageScrollView; // @synthesize pageScrollView=_pageScrollView;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)pageScrollView:(id)arg1 viewForItem:(unsigned long long)arg2;
- (unsigned long long)numberOfItems:(id)arg1;
- (unsigned long long)currentIndex:(id)arg1;
- (void)onChangedWithCurrentIndex:(long long)arg1;
- (void)onSingleClicked;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidUnload;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)onAssetImageUpdate:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)initWithViewItems:(id)arg1 currentIndex:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


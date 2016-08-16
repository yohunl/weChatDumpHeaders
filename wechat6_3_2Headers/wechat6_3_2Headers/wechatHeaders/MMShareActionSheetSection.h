//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMGridViewActionDelegate-Protocol.h"
#import "MMGridViewDataSource-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MMGridView, MMGridViewLayoutHorizontalStrategy, MMShareActionSheet, NSMutableArray, NSString, UILabel;

@interface MMShareActionSheetSection : UIView <MMGridViewDataSource, MMGridViewActionDelegate, UIScrollViewDelegate>
{
    MMGridView *m_gridView;
    MMGridViewLayoutHorizontalStrategy *m_layoutStrategy;
    UIView *m_topLine;
    UILabel *m_titleLabel;
    UIView *m_searchingView;
    UILabel *m_searchingLabel;
    long long m_index;
    NSMutableArray *m_cells;
    NSString *m_headerTitle;
    MMShareActionSheet *m_parentSheet;
    UIView *m_defaultView;
}

@property(retain, nonatomic) UIView *m_defaultView; // @synthesize m_defaultView;
@property(nonatomic) __weak MMShareActionSheet *m_parentSheet; // @synthesize m_parentSheet;
@property(copy, nonatomic) NSString *m_headerTitle; // @synthesize m_headerTitle;
@property(retain, nonatomic) NSMutableArray *m_cells; // @synthesize m_cells;
@property(nonatomic) long long m_index; // @synthesize m_index;
- (void).cxx_destruct;
- (void)MMGridView:(id)arg1 didTapOnItemAtIndex:(long long)arg2;
- (id)MMGridView:(id)arg1 cellForItemAtIndex:(long long)arg2;
- (struct CGSize)MMGridView:(id)arg1 sizeForItemsInInterfaceOrientation:(long long)arg2;
- (long long)numberOfItemsInMMGridView:(id)arg1;
- (void)reloadCellsWithItems:(id)arg1;
- (void)reloadCells;
- (id)initWithItems:(id)arg1 headerTitle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


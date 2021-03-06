//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "FavTagEditViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class FavTagListView, MMScrollView, NSMutableArray, NSString, UILabel, UIView;
@protocol FavTagSearchFilterDelegate;

@interface FavTagSearchFilter : MMUIView <FavTagEditViewDelegate, UIScrollViewDelegate>
{
    UIView *m_backgroundView;
    MMScrollView *m_scrollView;
    MMScrollView *m_typeScrollView;
    UILabel *m_label;
    FavTagListView *m_tagListView;
    NSMutableArray *m_buttons;
    int m_currentType;
    NSMutableArray *currentTags;
    id <FavTagSearchFilterDelegate> m_delegate;
}

@property(nonatomic) __weak id <FavTagSearchFilterDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) int m_currentType; // @synthesize m_currentType;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)removeAllTags;
- (void)removeLastTag;
- (id)getTagList;
- (void)onDeleteButton:(id)arg1;
- (void)onAddButton:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)buttonClicked:(id)arg1;
- (id)getCurrentTypeName;
- (void)updateTagList;
- (void)ontap;
- (void)initView;
- (void)layoutSubviews;
- (void)addBlurEffectForView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


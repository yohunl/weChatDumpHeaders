//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIScrollView.h"

@class NSMutableArray, UIImageView;
@protocol ContactsPanelViewDelegate;

@interface ContactsPanelView : MMUIScrollView
{
    NSMutableArray *m_arrKeys;
    NSMutableArray *m_arrImages;
    unsigned int m_uiImageSize;
    unsigned int m_uiCellSize;
    unsigned int m_uiLeftMargin;
    unsigned int m_uiRightMargin;
    _Bool m_bShouldDeleteOnClick;
    UIImageView *m_emptyView;
    _Bool m_showEmptyView;
    int m_headerType;
    id <ContactsPanelViewDelegate> m_delegate;
}

@property(nonatomic) __weak id <ContactsPanelViewDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool m_showEmptyView; // @synthesize m_showEmptyView;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)deleteImage:(unsigned int)arg1;
- (void)addImage:(id)arg1 animated:(_Bool)arg2;
- (void)RemoveImageForKey:(id)arg1;
- (void)SetImageForKey:(id)arg1 animated:(_Bool)arg2;
- (void)SetRightMargin:(unsigned int)arg1;
- (void)SetLeftMargin:(unsigned int)arg1;
- (void)SetCellSize:(unsigned int)arg1;
- (void)SetImageSize:(unsigned int)arg1;
- (void)SetImageType:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCListBaseCellView.h"

@class UIView;

@interface WCListVideoCellView : WCListBaseCellView
{
    UIView *m_tailView;
}

+ (double)calculateHeightForRowData:(id)arg1 isFirstOneInsection:(_Bool)arg2 isLastOneInSection:(_Bool)arg3;
- (void).cxx_destruct;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)onClickEvent;
- (void)initView;
- (void)initTailView;

@end


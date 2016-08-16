//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIControl.h"

@protocol MMRefreshTableFooterDelegate;

@interface MMRefreshTableFooterView : MMUIControl
{
    int m_state;
    double m_heightLimit;
    id <MMRefreshTableFooterDelegate> m_delegate;
    _Bool _m_bTop;
}

@property(nonatomic) _Bool m_bTop; // @synthesize m_bTop=_m_bTop;
@property(nonatomic) double m_heightLimit; // @synthesize m_heightLimit;
@property(nonatomic) __weak id <MMRefreshTableFooterDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)refreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (void)refreshScrollViewDidScroll:(id)arg1;
- (void)removeClickAction;
- (void)onClick;
- (void)setState:(int)arg1;
- (void)onStateOfNoData:(id)arg1;
- (void)onStateOfNoMoreData:(id)arg1;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (id)initWithFrame:(struct CGRect)arg1;

@end


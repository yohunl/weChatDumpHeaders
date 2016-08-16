//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class NSMutableArray, NSString;
@protocol FavTagEditViewDelegate;

@interface FavTagListView : MMUIView
{
    NSMutableArray *m_arrTagButtons;
    NSString *m_defaultButtonTextColor;
    NSString *m_title;
    id <FavTagEditViewDelegate> m_delegate;
}

@property(retain, nonatomic) NSString *m_title; // @synthesize m_title;
@property(nonatomic) __weak id <FavTagEditViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)getHighLightTagList;
- (void)buttonClicked:(id)arg1;
- (struct CGPoint)getPositionForView:(id)arg1 withWidth:(double)arg2 behindButton:(id)arg3;
- (void)unHighLightAll;
- (void)highLightButtons:(id)arg1;
- (void)setButtonHighLight:(_Bool)arg1 named:(id)arg2;
- (id)addButton:(id)arg1;
- (void)setButtonBackground:(id)arg1 chosen:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithTags:(id)arg1 title:(id)arg2 btnimg:(id)arg3 txtColor:(id)arg4;
- (id)initWithTags:(id)arg1 title:(id)arg2;

@end


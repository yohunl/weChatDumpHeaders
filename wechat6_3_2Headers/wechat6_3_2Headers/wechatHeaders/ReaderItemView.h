//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString;
@protocol ReaderItemViewDelegate;

@interface ReaderItemView : UIButton
{
    int type;
    unsigned int m_uiReaderIndex;
    _Bool m_bHasBottomBtn;
    NSString *m_nsTitle;
    NSString *m_nsCover;
    NSString *m_nsDigest;
    unsigned int m_uiDelFlag;
    id <ReaderItemViewDelegate> m_delegate;
}

@property(nonatomic) unsigned int m_uiDelFlag; // @synthesize m_uiDelFlag;
@property(nonatomic) __weak id <ReaderItemViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *m_nsDigest; // @synthesize m_nsDigest;
@property(retain, nonatomic) NSString *m_nsCover; // @synthesize m_nsCover;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle;
@property(nonatomic) _Bool m_bHasBottomBtn; // @synthesize m_bHasBottomBtn;
@property(nonatomic) unsigned int m_uiReaderIndex; // @synthesize m_uiReaderIndex;
@property(nonatomic) int type; // @synthesize type;
- (void).cxx_destruct;
- (void)updateBkgImage:(_Bool)arg1;
- (void)handleLongPressEx:(id)arg1;
- (void)onTouchRepeat;
- (void)NotifyItemClicked;
- (void)onClicked;
- (void)onBeginTouch;
- (id)getHighlightedImage;
- (double)appendNodeViewHeightIfIndex;
- (id)getItemTitle:(double)arg1;
- (id)getAsyncImageWithFrame:(struct CGRect)arg1;
- (void)normalView;
- (void)topView;
- (void)startInitView;

@end

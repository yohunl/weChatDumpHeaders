//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class RichTextView, UIScrollView, WCCardData, WCProductInfo;

@interface WCProductDebugViewController : MMUIViewController
{
    UIScrollView *m_scrollView;
    RichTextView *m_textView;
    WCProductInfo *m_productInfo;
    WCCardData *m_cardData;
}

- (void).cxx_destruct;
- (void)initTextView;
- (void)viewDidLoad;
- (id)initWithWCCardData:(id)arg1;
- (id)initWithWCProductInfo:(id)arg1;

@end


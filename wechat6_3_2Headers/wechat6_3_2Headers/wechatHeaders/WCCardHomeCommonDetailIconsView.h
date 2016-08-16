//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMImageLoaderObserver-Protocol.h"

@class NSArray, NSString;
@protocol WCCardHomeCommonDetailIconsViewDelegate;

@interface WCCardHomeCommonDetailIconsView : MMUIView <MMImageLoaderObserver>
{
    NSArray *_shareCardIcons;
    id <WCCardHomeCommonDetailIconsViewDelegate> _delegate;
    NSArray *_shareCardIconViews;
}

@property(retain, nonatomic) NSArray *shareCardIconViews; // @synthesize shareCardIconViews=_shareCardIconViews;
@property(nonatomic) __weak id <WCCardHomeCommonDetailIconsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *shareCardIcons; // @synthesize shareCardIcons=_shareCardIcons;
- (void).cxx_destruct;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@protocol MMUIHookViewDelegate;

@interface MMUIHookView : MMUIView
{
    id <MMUIHookViewDelegate> m_delegate;
}

@property(nonatomic) __weak id <MMUIHookViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;

@end

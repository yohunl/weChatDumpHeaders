//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMComponent.h"

@class MMUIImageView, MMUILabel;

@interface MMFavTagComponent : MMComponent
{
    MMUIImageView *_tagImg;
    MMUILabel *_tagLabel;
}

+ (double)calHeightWithComData:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)configContentLayout;
- (void)shiftWithOffset:(double)arg1;
- (void)configTagView;

@end


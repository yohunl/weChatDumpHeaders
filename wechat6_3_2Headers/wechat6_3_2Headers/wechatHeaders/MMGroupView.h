//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface MMGroupView : UIView
{
    NSMutableArray *_arrGroupViews;
    unsigned int _groupViewDirection;
}

@property(nonatomic) unsigned int groupViewDirection; // @synthesize groupViewDirection=_groupViewDirection;
@property(retain, nonatomic) NSMutableArray *arrGroupViews; // @synthesize arrGroupViews=_arrGroupViews;
- (void).cxx_destruct;
- (_Bool)isAllHidden;
- (void)layoutSubviews;
- (id)init;

@end


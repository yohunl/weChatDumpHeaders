//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface MMExposeReasonItem : MMObject
{
    NSString *title;
    unsigned int newType;
    _Bool isSelected;
}

+ (id)itemWithTitle:(id)arg1 newType:(unsigned int)arg2;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected;
@property(nonatomic) unsigned int newType; // @synthesize newType;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (void)dealloc;

@end


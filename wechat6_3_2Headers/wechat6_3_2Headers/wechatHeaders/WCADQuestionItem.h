//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WCADQuestionItem : MMObject
{
    unsigned int actionType;
    NSString *itemId;
    NSString *wording;
}

@property(nonatomic) unsigned int actionType; // @synthesize actionType;
@property(retain, nonatomic) NSString *wording; // @synthesize wording;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId;
- (void).cxx_destruct;

@end

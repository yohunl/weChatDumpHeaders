//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCProductSKUAttrItem : NSObject
{
    int attrSeletedIndex;
    NSString *attrItemID;
    NSString *attrItemName;
    NSArray *attrItemValues;
}

@property(nonatomic) int attrSeletedIndex; // @synthesize attrSeletedIndex;
@property(retain, nonatomic) NSArray *attrItemValues; // @synthesize attrItemValues;
@property(retain, nonatomic) NSString *attrItemName; // @synthesize attrItemName;
@property(retain, nonatomic) NSString *attrItemID; // @synthesize attrItemID;
- (void).cxx_destruct;
- (void)dealloc;

@end


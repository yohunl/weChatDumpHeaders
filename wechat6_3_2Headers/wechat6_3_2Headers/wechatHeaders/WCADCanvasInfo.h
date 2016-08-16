//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface WCADCanvasInfo : NSObject <NSCoding>
{
    NSArray *adCanvasPageList;
    NSString *fromAdXml;
    NSString *shareTitle;
    NSString *shareDesc;
    NSString *shareWebUrl;
    int sizeType;
    int basicWidth;
    int basicRootFontSize;
}

@property(nonatomic) int basicRootFontSize; // @synthesize basicRootFontSize;
@property(nonatomic) int basicWidth; // @synthesize basicWidth;
@property(nonatomic) int sizeType; // @synthesize sizeType;
@property(retain, nonatomic) NSString *shareWebUrl; // @synthesize shareWebUrl;
@property(retain, nonatomic) NSString *shareDesc; // @synthesize shareDesc;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle;
@property(retain, nonatomic) NSString *fromAdXml; // @synthesize fromAdXml;
@property(retain, nonatomic) NSArray *adCanvasPageList; // @synthesize adCanvasPageList;
- (void).cxx_destruct;
- (void)genAllComponentId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end


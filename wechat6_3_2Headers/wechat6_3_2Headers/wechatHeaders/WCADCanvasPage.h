//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface WCADCanvasPage : NSObject <NSCoding>
{
    NSString *bgCoverUrl;
    NSString *bgColorTheme;
    NSArray *adCanvasComponentItemList;
}

@property(retain, nonatomic) NSArray *adCanvasComponentItemList; // @synthesize adCanvasComponentItemList;
@property(retain, nonatomic) NSString *bgColorTheme; // @synthesize bgColorTheme;
@property(retain, nonatomic) NSString *bgCoverUrl; // @synthesize bgCoverUrl;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end


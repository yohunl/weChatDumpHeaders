//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCPayEntrustPayInfo : NSObject
{
    _Bool _isAutoDeduct;
    NSString *_contractTitle;
    NSArray *_showInfo;
    NSString *_contractUrl;
}

@property(retain, nonatomic) NSString *contractUrl; // @synthesize contractUrl=_contractUrl;
@property(retain, nonatomic) NSArray *showInfo; // @synthesize showInfo=_showInfo;
@property(nonatomic) _Bool isAutoDeduct; // @synthesize isAutoDeduct=_isAutoDeduct;
@property(retain, nonatomic) NSString *contractTitle; // @synthesize contractTitle=_contractTitle;
- (void).cxx_destruct;

@end


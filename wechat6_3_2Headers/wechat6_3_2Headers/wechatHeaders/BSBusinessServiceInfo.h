//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface BSBusinessServiceInfo : NSObject
{
    NSString *_title;
    NSString *_serviceUrl;
    NSDictionary *_itemFieldDict;
}

+ (id)fromServerObj:(id)arg1;
@property(retain, nonatomic) NSDictionary *itemFieldDict; // @synthesize itemFieldDict=_itemFieldDict;
@property(retain, nonatomic) NSString *serviceUrl; // @synthesize serviceUrl=_serviceUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)dealloc;

@end


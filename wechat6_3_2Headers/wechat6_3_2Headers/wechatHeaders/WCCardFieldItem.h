//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCCardFieldItem : MMObject <PBCoding>
{
    unsigned int showflag;
    NSString *title;
    NSString *subTitle;
    NSString *auxTitle;
    NSString *url;
    NSString *primaryColor;
    NSString *secondaryColor;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *secondaryColor; // @synthesize secondaryColor;
@property(retain, nonatomic) NSString *primaryColor; // @synthesize primaryColor;
@property(nonatomic) unsigned int showflag; // @synthesize showflag;
@property(retain, nonatomic) NSString *url; // @synthesize url;
@property(retain, nonatomic) NSString *auxTitle; // @synthesize auxTitle;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


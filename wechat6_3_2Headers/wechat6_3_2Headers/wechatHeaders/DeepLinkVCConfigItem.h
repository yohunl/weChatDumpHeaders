//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DeepLinkVCConfigItem : NSObject
{
    NSString *linkName;
    unsigned long long actionType;
    NSString *actionName;
}

+ (id)genItemWithLinkName:(id)arg1 actionType:(unsigned long long)arg2 actionName:(id)arg3;
@property(retain, nonatomic) NSString *actionName; // @synthesize actionName;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType;
@property(retain, nonatomic) NSString *linkName; // @synthesize linkName;
- (void).cxx_destruct;
- (id)init;

@end


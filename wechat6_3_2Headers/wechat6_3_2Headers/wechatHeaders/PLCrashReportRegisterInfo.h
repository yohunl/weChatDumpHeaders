//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLCrashReportRegisterInfo : NSObject
{
    NSString *_registerName;
    unsigned long long _registerValue;
}

@property(readonly, nonatomic) unsigned long long registerValue; // @synthesize registerValue=_registerValue;
@property(readonly, nonatomic) NSString *registerName; // @synthesize registerName=_registerName;
- (void)dealloc;
- (id)initWithRegisterName:(id)arg1 registerValue:(unsigned long long)arg2;

@end


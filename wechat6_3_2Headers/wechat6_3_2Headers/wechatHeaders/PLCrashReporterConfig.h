//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLCrashReporterConfig : NSObject
{
    unsigned long long _signalHandlerType;
    unsigned long long _symbolicationStrategy;
}

+ (id)defaultConfiguration;
@property(readonly, nonatomic) unsigned long long symbolicationStrategy; // @synthesize symbolicationStrategy=_symbolicationStrategy;
@property(readonly, nonatomic) unsigned long long signalHandlerType; // @synthesize signalHandlerType=_signalHandlerType;
- (id)initWithSignalHandlerType:(unsigned long long)arg1 symbolicationStrategy:(unsigned long long)arg2;
- (id)init;

@end


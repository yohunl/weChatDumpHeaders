//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCDBPerformanceWrap : NSObject
{
    unsigned int threadId;
    unsigned int timeStamp;
    unsigned long long costTime;
    NSString *tableClass;
    unsigned long long opType;
    NSString *sql;
    NSString *callStack;
}

@property(nonatomic) unsigned int timeStamp; // @synthesize timeStamp;
@property(nonatomic) unsigned int threadId; // @synthesize threadId;
@property(retain, nonatomic) NSString *callStack; // @synthesize callStack;
@property(retain, nonatomic) NSString *sql; // @synthesize sql;
@property(nonatomic) unsigned long long opType; // @synthesize opType;
@property(retain, nonatomic) NSString *tableClass; // @synthesize tableClass;
@property(nonatomic) unsigned long long costTime; // @synthesize costTime;
- (void).cxx_destruct;
- (id)description;

@end


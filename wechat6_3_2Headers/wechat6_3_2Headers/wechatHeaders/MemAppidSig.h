//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class MemSigManager;

@interface MemAppidSig : NSObject <NSCoding>
{
    unsigned int dwAppid;
    unsigned int dwPriority;
    unsigned int dwTime;
    unsigned int dwExpTime;
    MemSigManager *memSigManager;
}

@property(nonatomic) unsigned int dwExpTime; // @synthesize dwExpTime;
@property(nonatomic) unsigned int dwTime; // @synthesize dwTime;
@property(nonatomic) unsigned int dwPriority; // @synthesize dwPriority;
@property(nonatomic) unsigned int dwAppid; // @synthesize dwAppid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)printAppidSig;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)appidSigByName:(id)arg1;
- (void)addAppidSig:(id)arg1;
- (void)dealloc;
- (id)init;

@end


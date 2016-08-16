//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface WCAppInfo : NSObject <NSCoding>
{
    NSString *appID;
    NSString *appName;
    NSString *version;
    NSString *installUrl;
    NSString *fromUrl;
    _Bool isForceUpdate;
}

@property(nonatomic) _Bool isForceUpdate; // @synthesize isForceUpdate;
@property(retain, nonatomic) NSString *fromUrl; // @synthesize fromUrl;
@property(retain, nonatomic) NSString *installUrl; // @synthesize installUrl;
@property(retain, nonatomic) NSString *version; // @synthesize version;
@property(retain, nonatomic) NSString *appName; // @synthesize appName;
@property(retain, nonatomic) NSString *appID; // @synthesize appID;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end


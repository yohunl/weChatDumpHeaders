//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BBHostInfo : NSObject
{
    struct _BBHostInfoValidity ipaddr_sa;
    NSString *_hostName;
    NSString *_hostAddress;
    NSString *_hostCandidate;
}

@property(copy, nonatomic) NSString *hostCandidate; // @synthesize hostCandidate=_hostCandidate;
@property(readonly, copy, nonatomic) NSString *hostAddress; // @synthesize hostAddress=_hostAddress;
@property(readonly, copy, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
- (void).cxx_destruct;
- (struct _BBHostInfoValidity)isIPAddressStringValid:(id)arg1;
- (struct sockaddr *)validAddress;
- (id)initWithHostNameOrNumber:(id)arg1;

@end

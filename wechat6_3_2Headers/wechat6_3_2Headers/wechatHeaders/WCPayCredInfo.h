//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface WCPayCredInfo : NSObject <NSCoding>
{
    NSString *m_nsWCPayCredType;
    NSString *m_nsWCPayCredName;
}

@property(retain, nonatomic) NSString *m_nsWCPayCredType; // @synthesize m_nsWCPayCredType;
@property(retain, nonatomic) NSString *m_nsWCPayCredName; // @synthesize m_nsWCPayCredName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface UrlConnReceiveData : NSObject <NSCopying>
{
    unsigned int m_uiReceiveTimeStamp;
    unsigned int m_uiDataLength;
}

@property(nonatomic) unsigned int m_uiDataLength; // @synthesize m_uiDataLength;
@property(nonatomic) unsigned int m_uiReceiveTimeStamp; // @synthesize m_uiReceiveTimeStamp;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


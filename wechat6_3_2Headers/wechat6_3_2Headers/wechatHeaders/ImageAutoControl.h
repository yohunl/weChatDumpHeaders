//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface ImageAutoControl : NSObject <PBCoding>
{
    double m_douLimitBegin;
    int m_nDownloadCount;
}

+ (void)initialize;
@property(nonatomic) int m_nDownloadCount; // @synthesize m_nDownloadCount;
@property(nonatomic) double m_douLimitBegin; // @synthesize m_douLimitBegin;
- (id)init;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCDBCorruptReport : NSObject
{
    _Bool m_hasDirectReport;
    unsigned int m_corruptNum;
}

@property _Bool m_hasDirectReport; // @synthesize m_hasDirectReport;
@property unsigned int m_corruptNum; // @synthesize m_corruptNum;
- (void)reportCorruptOnMainThread:(id)arg1;
- (void)ClearCorruptNumWithDBID:(unsigned int)arg1;
- (void)DirectReportCorruptWithDBID:(unsigned int)arg1 dbObject:(id)arg2 dbLock:(id)arg3 dbPath:(id)arg4 isMultiHandle:(_Bool)arg5 errorCode:(unsigned int)arg6 important:(_Bool)arg7;
- (void)RecordCorruptWithDBID:(unsigned int)arg1 dbObject:(id)arg2 dbLock:(id)arg3 dbPath:(id)arg4 isMultiHandle:(_Bool)arg5 errorCode:(unsigned int)arg6 important:(_Bool)arg7;

@end


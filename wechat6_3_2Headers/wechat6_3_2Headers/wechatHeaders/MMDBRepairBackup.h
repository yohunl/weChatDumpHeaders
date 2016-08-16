//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface MMDBRepairBackup : NSObject
{
    NSString *_dbPath;
    NSArray *_repairInfos;
    NSDate *_lastSucceedBackup;
}

@property(readonly) NSDate *lastSucceedBackup; // @synthesize lastSucceedBackup=_lastSucceedBackup;
@property(readonly) NSArray *repairInfos; // @synthesize repairInfos=_repairInfos;
- (void).cxx_destruct;
- (void)clearBackup;
- (_Bool)backup;
- (id)accquireSortedInfos;
- (id)initWithDBPath:(id)arg1;

@end


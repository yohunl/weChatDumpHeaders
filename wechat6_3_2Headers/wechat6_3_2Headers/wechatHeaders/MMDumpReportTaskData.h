//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MMDumpReportTaskData : NSObject
{
    unsigned long long m_reportCntOneTime;
    NSString *m_nsTag;
    NSMutableArray *m_arrReportData;
}

@property(retain, nonatomic) NSMutableArray *m_arrReportData; // @synthesize m_arrReportData;
@property(retain, nonatomic) NSString *m_nsTag; // @synthesize m_nsTag;
@property(nonatomic) unsigned long long m_reportCntOneTime; // @synthesize m_reportCntOneTime;
- (void).cxx_destruct;

@end

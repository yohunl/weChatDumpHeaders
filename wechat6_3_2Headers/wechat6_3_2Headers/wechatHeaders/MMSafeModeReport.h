//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MMSafeModeReport : NSObject
{
    NSString *m_path;
    NSMutableArray *m_reportList;
}

- (void).cxx_destruct;
- (void)doReport;
- (void)reportWithID:(int)arg1 key:(int)arg2 value:(int)arg3;
- (id)init;

@end

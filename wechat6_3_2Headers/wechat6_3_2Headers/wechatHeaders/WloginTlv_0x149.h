//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSString;

@interface WloginTlv_0x149 : WloginTlv
{
    unsigned short wTipsType;
    NSString *sTipsTitle;
    NSString *sTipsContent;
    NSString *sOtherInfo;
}

@property(copy) NSString *sOtherInfo; // @synthesize sOtherInfo;
@property(copy) NSString *sTipsContent; // @synthesize sTipsContent;
@property(copy) NSString *sTipsTitle; // @synthesize sTipsTitle;
@property unsigned short wTipsType; // @synthesize wTipsType;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSString;

@interface WloginTlv_0x167 : WloginTlv
{
    unsigned char cImgType;
    unsigned char cImgFormat;
    NSString *sImgUrl;
}

@property(copy) NSString *sImgUrl; // @synthesize sImgUrl;
@property unsigned char cImgFormat; // @synthesize cImgFormat;
@property unsigned char cImgType; // @synthesize cImgType;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@interface WloginTlv_0x11f : WloginTlv
{
    unsigned int dwExchangeTime;
    unsigned int dwPriority;
}

@property unsigned int dwExchangeTime; // @synthesize dwExchangeTime;
@property unsigned int dwPriority; // @synthesize dwPriority;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end


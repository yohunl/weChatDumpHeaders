//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSString;

@interface WloginTlv_0x147 : WloginTlv
{
    unsigned int dwAppVerID;
    unsigned short wAppVerLen;
    NSString *sAppVer;
    unsigned short wAppSigLen;
    NSString *sAppSig;
}

@property(copy) NSString *sAppSig; // @synthesize sAppSig;
@property unsigned short wAppSigLen; // @synthesize wAppSigLen;
@property(copy) NSString *sAppVer; // @synthesize sAppVer;
@property unsigned short wAppVerLen; // @synthesize wAppVerLen;
@property unsigned int dwAppVerID; // @synthesize dwAppVerID;
- (void)dealloc;
- (int)encode:(id)arg1;

@end


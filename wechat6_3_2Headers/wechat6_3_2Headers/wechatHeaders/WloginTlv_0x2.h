//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSData, NSString;

@interface WloginTlv_0x2 : WloginTlv
{
    unsigned short wPicSigVer;
    NSString *sCode;
    NSData *acEncryptKey;
}

@property(retain) NSData *acEncryptKey; // @synthesize acEncryptKey;
@property(copy) NSString *sCode; // @synthesize sCode;
@property(nonatomic) unsigned short wPicSigVer; // @synthesize wPicSigVer;
- (void)dealloc;
- (int)encode:(id)arg1;

@end


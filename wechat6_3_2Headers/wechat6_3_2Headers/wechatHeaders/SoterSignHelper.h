//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SoterSignHelper : NSObject
{
    NSString *_m_publicKey;
    NSString *_m_privateKey;
}

@property(retain, nonatomic) NSString *m_privateKey; // @synthesize m_privateKey=_m_privateKey;
@property(retain, nonatomic) NSString *m_publicKey; // @synthesize m_publicKey=_m_publicKey;
- (void).cxx_destruct;
- (void)genRsaKeyPair;
- (_Bool)rawVerifyWithString:(id)arg1 WithSignatureString:(id)arg2;
- (id)rawSignWithString:(id)arg1;
- (id)getPrivateKey;
- (id)getPublicKey;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayAuthenticationPayVerifySMSStruct : NSObject
{
    unsigned int m_flag;
    unsigned int m_payScene;
    unsigned int m_payChannel;
    NSString *m_payPassword;
    NSString *m_payKey;
    NSString *m_payToken;
    NSString *m_uuid;
    NSString *m_verifySMS;
    NSString *m_nsBankType;
    NSString *m_nsBindSerial;
    NSString *m_appId;
    NSString *m_appName;
    NSString *m_appSource;
    _Bool isAutoDeduct;
    _Bool m_bIsAutoDeduct;
    _Bool _m_bUseTouchID;
    NSString *_m_arriveType;
}

@property(nonatomic) _Bool m_bUseTouchID; // @synthesize m_bUseTouchID=_m_bUseTouchID;
@property(retain, nonatomic) NSString *m_arriveType; // @synthesize m_arriveType=_m_arriveType;
@property(nonatomic) _Bool m_bIsAutoDeduct; // @synthesize m_bIsAutoDeduct;
@property(retain, nonatomic) NSString *m_nsBindSerial; // @synthesize m_nsBindSerial;
@property(retain, nonatomic) NSString *m_nsBankType; // @synthesize m_nsBankType;
@property(retain, nonatomic) NSString *m_appSource; // @synthesize m_appSource;
@property(retain, nonatomic) NSString *m_appName; // @synthesize m_appName;
@property(retain, nonatomic) NSString *m_appId; // @synthesize m_appId;
@property(retain, nonatomic) NSString *m_verifySMS; // @synthesize m_verifySMS;
@property(retain, nonatomic) NSString *m_payPassword; // @synthesize m_payPassword;
@property(retain, nonatomic) NSString *m_uuid; // @synthesize m_uuid;
@property(retain, nonatomic) NSString *m_payToken; // @synthesize m_payToken;
@property(retain, nonatomic) NSString *m_payKey; // @synthesize m_payKey;
@property(nonatomic) unsigned int m_payChannel; // @synthesize m_payChannel;
@property(nonatomic) unsigned int m_payScene; // @synthesize m_payScene;
@property(nonatomic) unsigned int m_flag; // @synthesize m_flag;
- (void).cxx_destruct;
- (void)dealloc;

@end


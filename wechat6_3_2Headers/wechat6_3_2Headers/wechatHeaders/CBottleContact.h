//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBaseContact.h"

@class NSString;

@interface CBottleContact : CBaseContact
{
    NSString *m_nsCountry;
    NSString *m_nsProvince;
    NSString *m_nsCity;
    NSString *m_nsSignature;
}

@property(retain, nonatomic, setter=setNsSignature:) NSString *m_nsSignature; // @synthesize m_nsSignature;
@property(retain, nonatomic) NSString *m_nsCity; // @synthesize m_nsCity;
@property(retain, nonatomic) NSString *m_nsProvince; // @synthesize m_nsProvince;
@property(retain, nonatomic) NSString *m_nsCountry; // @synthesize m_nsCountry;
- (void).cxx_destruct;
- (_Bool)isNeedGetHDImg;
- (_Bool)copyFrom:(id)arg1;
- (id)toContact;
- (_Bool)isSelf;
- (void)dealloc;
- (id)init;

@end


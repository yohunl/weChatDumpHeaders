//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCDeviceExtData : NSObject
{
    unsigned int m_deviceTypeMainDevice;
    unsigned int m_isEnterMyDevice;
    NSString *m_alias;
    NSString *m_iconUrl;
    NSString *m_jumpUrl;
    NSString *m_deviceTitle;
    NSString *m_deviceDesc;
    NSString *m_category;
    long long m_bleSimpleProtol;
    NSString *m_ability;
    NSString *m_serialNumber;
    NSString *_m_abilityExtInfo;
    NSString *_m_subDeviceIDList;
}

@property(retain, nonatomic) NSString *m_subDeviceIDList; // @synthesize m_subDeviceIDList=_m_subDeviceIDList;
@property(retain, nonatomic) NSString *m_abilityExtInfo; // @synthesize m_abilityExtInfo=_m_abilityExtInfo;
@property(retain, nonatomic) NSString *m_serialNumber; // @synthesize m_serialNumber;
@property(retain, nonatomic) NSString *m_ability; // @synthesize m_ability;
@property(nonatomic) long long m_bleSimpleProtol; // @synthesize m_bleSimpleProtol;
@property(nonatomic) unsigned int m_isEnterMyDevice; // @synthesize m_isEnterMyDevice;
@property(nonatomic) unsigned int m_deviceTypeMainDevice; // @synthesize m_deviceTypeMainDevice;
@property(retain, nonatomic) NSString *m_category; // @synthesize m_category;
@property(retain, nonatomic) NSString *m_deviceDesc; // @synthesize m_deviceDesc;
@property(retain, nonatomic) NSString *m_deviceTitle; // @synthesize m_deviceTitle;
@property(retain, nonatomic) NSString *m_jumpUrl; // @synthesize m_jumpUrl;
@property(retain, nonatomic) NSString *m_iconUrl; // @synthesize m_iconUrl;
@property(retain, nonatomic) NSString *m_alias; // @synthesize m_alias;
- (void).cxx_destruct;

@end


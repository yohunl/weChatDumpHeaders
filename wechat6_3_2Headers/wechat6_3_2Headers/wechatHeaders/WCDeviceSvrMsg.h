//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCDeviceSvrMsg : NSObject
{
    int m_type;
    unsigned int m_wifiStatus;
    NSString *m_deviceId;
    NSString *m_deviceType;
    long long m_sessionId;
    NSData *m_data;
}

@property(nonatomic) unsigned int m_wifiStatus; // @synthesize m_wifiStatus;
@property(retain, nonatomic) NSData *m_data; // @synthesize m_data;
@property(nonatomic) long long m_sessionId; // @synthesize m_sessionId;
@property(retain, nonatomic) NSString *m_deviceType; // @synthesize m_deviceType;
@property(retain, nonatomic) NSString *m_deviceId; // @synthesize m_deviceId;
@property(nonatomic) int m_type; // @synthesize m_type;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface CBottleSetting : NSObject <NSCoding>
{
    unsigned int m_uiSex;
    NSString *m_nsCountry;
    NSString *m_nsProvince;
    NSString *m_nsCity;
    NSString *m_nsSignature;
    NSString *m_nsHeadImageMD5;
    NSString *m_nsHDImgStatus;
    NSString *m_nsImgStatus;
    _Bool m_bFirstIn;
    unsigned int m_uiLastMsgType;
    unsigned int m_uiChatStatus;
    NSString *m_nsHeadImgUrl;
    NSString *m_nsHeadHDImgUrl;
}

@property(retain, nonatomic) NSString *m_nsHeadHDImgUrl; // @synthesize m_nsHeadHDImgUrl;
@property(retain, nonatomic) NSString *m_nsHeadImgUrl; // @synthesize m_nsHeadImgUrl;
@property(nonatomic) unsigned int m_uiChatStatus; // @synthesize m_uiChatStatus;
@property(nonatomic) unsigned int m_uiLastMsgType; // @synthesize m_uiLastMsgType;
@property(nonatomic) _Bool m_bFirstIn; // @synthesize m_bFirstIn;
@property(retain, nonatomic) NSString *m_nsImgStatus; // @synthesize m_nsImgStatus;
@property(retain, nonatomic) NSString *m_nsHDImgStatus; // @synthesize m_nsHDImgStatus;
@property(retain, nonatomic) NSString *m_nsHeadImageMD5; // @synthesize m_nsHeadImageMD5;
@property(retain, nonatomic) NSString *m_nsSignature; // @synthesize m_nsSignature;
@property(retain, nonatomic) NSString *m_nsCity; // @synthesize m_nsCity;
@property(retain, nonatomic) NSString *m_nsProvince; // @synthesize m_nsProvince;
@property(retain, nonatomic) NSString *m_nsCountry; // @synthesize m_nsCountry;
@property(nonatomic) unsigned int m_uiSex; // @synthesize m_uiSex;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)preInit;

@end


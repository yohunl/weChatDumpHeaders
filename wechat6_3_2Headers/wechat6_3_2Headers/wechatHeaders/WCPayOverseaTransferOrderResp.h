//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOverseaTransferOrderResp : NSObject
{
    int _m_transferNum;
    int _m_transferType;
    NSString *_m_payUrl;
    NSString *_m_tradeUrl;
}

+ (id)GenFromDictionary:(id)arg1;
@property(nonatomic) int m_transferType; // @synthesize m_transferType=_m_transferType;
@property(nonatomic) int m_transferNum; // @synthesize m_transferNum=_m_transferNum;
@property(retain, nonatomic) NSString *m_tradeUrl; // @synthesize m_tradeUrl=_m_tradeUrl;
@property(retain, nonatomic) NSString *m_payUrl; // @synthesize m_payUrl=_m_payUrl;
- (void).cxx_destruct;

@end


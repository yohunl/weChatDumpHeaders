//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CContact, CMessageWrap, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, WCPayRealnameGuideInfo, WCRedEnvelopesAtomicInfo, WCRedEnvelopesDetailInfo, WCRedEnvelopesHistoryInfo, WCRedEnvelopesOperationInfo, WCRedEnvelopesReceivedRedEnvelopesInfo, WCRedEnvelopesSendedRedEnvelopesInfo;

@interface WCRedEnvelopesControlData : NSObject
{
    NSDictionary *m_dicPrepayRequestOrderInfo;
    NSMutableArray *m_arrSelectedSendRedEnvelopesUserList;
    CMessageWrap *m_oSelectedMessageWrap;
    CContact *m_oSelectContact;
    WCRedEnvelopesDetailInfo *m_oWCRedEnvelopesDetailInfo;
    WCRedEnvelopesHistoryInfo *m_oWCRedEnvelopesHistoryInfo;
    WCRedEnvelopesReceivedRedEnvelopesInfo *m_oSelectedWCRedEnvelopesReceivedRedEnvelopesInfo;
    WCRedEnvelopesSendedRedEnvelopesInfo *m_oSelectedWCRedEnvelopesSendedRedEnvelopesInfo;
    WCRedEnvelopesAtomicInfo *m_oWCRedEnvelopesAtomicInfo;
    WCRedEnvelopesOperationInfo *m_oWCRedEnvelopesOpTail;
    NSString *m_nsWCRedEnvelopesBrandMessageNativeUrl;
    NSString *m_nsSendID;
    NSString *m_nsOpenBundleId;
    NSDictionary *m_dicOpenApiParam;
    NSDictionary *m_structDicRedEnvelopesUserInfo;
    NSDictionary *m_structDicPrepayOrderInfo;
    NSDictionary *m_structDicRedEnvelopesBaseInfo;
    NSMutableDictionary *m_structDicRedEnvelopesCompleteInfo;
    NSDictionary *m_structDicAfterOpenRedEnvelopesInfo;
    WCPayRealnameGuideInfo *realnameGuideInfo;
    NSDictionary *m_structDicEnterpriseRedEnvelopesData;
}

@property(retain, nonatomic) NSDictionary *m_structDicEnterpriseRedEnvelopesData; // @synthesize m_structDicEnterpriseRedEnvelopesData;
@property(retain, nonatomic) WCPayRealnameGuideInfo *realnameGuideInfo; // @synthesize realnameGuideInfo;
@property(retain, nonatomic) NSDictionary *m_dicOpenApiParam; // @synthesize m_dicOpenApiParam;
@property(retain, nonatomic) NSString *m_nsSendID; // @synthesize m_nsSendID;
@property(retain, nonatomic) NSString *m_nsOpenBundleId; // @synthesize m_nsOpenBundleId;
@property(retain, nonatomic) NSString *m_nsWCRedEnvelopesBrandMessageNativeUrl; // @synthesize m_nsWCRedEnvelopesBrandMessageNativeUrl;
@property(retain, nonatomic) WCRedEnvelopesOperationInfo *m_oWCRedEnvelopesOpTail; // @synthesize m_oWCRedEnvelopesOpTail;
@property(retain, nonatomic) WCRedEnvelopesAtomicInfo *m_oWCRedEnvelopesAtomicInfo; // @synthesize m_oWCRedEnvelopesAtomicInfo;
@property(retain, nonatomic) WCRedEnvelopesSendedRedEnvelopesInfo *m_oSelectedWCRedEnvelopesSendedRedEnvelopesInfo; // @synthesize m_oSelectedWCRedEnvelopesSendedRedEnvelopesInfo;
@property(retain, nonatomic) WCRedEnvelopesReceivedRedEnvelopesInfo *m_oSelectedWCRedEnvelopesReceivedRedEnvelopesInfo; // @synthesize m_oSelectedWCRedEnvelopesReceivedRedEnvelopesInfo;
@property(retain, nonatomic) WCRedEnvelopesHistoryInfo *m_oWCRedEnvelopesHistoryInfo; // @synthesize m_oWCRedEnvelopesHistoryInfo;
@property(retain, nonatomic) WCRedEnvelopesDetailInfo *m_oWCRedEnvelopesDetailInfo; // @synthesize m_oWCRedEnvelopesDetailInfo;
@property(retain, nonatomic) NSMutableDictionary *m_structDicRedEnvelopesCompleteInfo; // @synthesize m_structDicRedEnvelopesCompleteInfo;
@property(retain, nonatomic) NSDictionary *m_structDicRedEnvelopesBaseInfo; // @synthesize m_structDicRedEnvelopesBaseInfo;
@property(retain, nonatomic) NSDictionary *m_structDicAfterOpenRedEnvelopesInfo; // @synthesize m_structDicAfterOpenRedEnvelopesInfo;
@property(retain, nonatomic) CMessageWrap *m_oSelectedMessageWrap; // @synthesize m_oSelectedMessageWrap;
@property(retain, nonatomic) NSDictionary *m_structDicRedEnvelopesUserInfo; // @synthesize m_structDicRedEnvelopesUserInfo;
@property(retain, nonatomic) NSDictionary *m_structDicPrepayOrderInfo; // @synthesize m_structDicPrepayOrderInfo;
@property(retain, nonatomic) NSMutableArray *m_arrSelectedSendRedEnvelopesUserList; // @synthesize m_arrSelectedSendRedEnvelopesUserList;
@property(retain, nonatomic) CContact *m_oSelectContact; // @synthesize m_oSelectContact;
@property(retain, nonatomic) NSDictionary *m_dicPrepayRequestOrderInfo; // @synthesize m_dicPrepayRequestOrderInfo;
- (void).cxx_destruct;

@end


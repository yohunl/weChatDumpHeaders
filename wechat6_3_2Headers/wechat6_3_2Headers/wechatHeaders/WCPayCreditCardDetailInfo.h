//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayCreditCardDetailInfo : NSObject
{
    NSString *m_nsCardNo;
    NSString *m_nsValidThru;
    NSString *m_nsCVV;
}

@property(retain, nonatomic) NSString *m_nsValidThru; // @synthesize m_nsValidThru;
@property(retain, nonatomic) NSString *m_nsCVV; // @synthesize m_nsCVV;
@property(retain, nonatomic) NSString *m_nsCardNo; // @synthesize m_nsCardNo;
- (void).cxx_destruct;
- (void)dealloc;

@end


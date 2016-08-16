//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCPayFavorComposeInfo : NSObject
{
    NSString *m_nFavorComposeid;
    unsigned long long m_uiTotalFavorAmount;
    unsigned long long m_uiAfterFavorTradeAmount;
    NSArray *m_arrFavItemList;
    unsigned long long m_uiShowFavorAmount;
    unsigned long long m_uiInvariableFavorAmount;
    _Bool m_bIsVariableFavor;
    NSString *m_nsInvariableFavorDesc;
    NSString *m_nsVariableFavorDesc;
}

@property(retain, nonatomic) NSString *m_nsVariableFavorDesc; // @synthesize m_nsVariableFavorDesc;
@property(retain, nonatomic) NSString *m_nsInvariableFavorDesc; // @synthesize m_nsInvariableFavorDesc;
@property(nonatomic) _Bool m_bIsVariableFavor; // @synthesize m_bIsVariableFavor;
@property(nonatomic) unsigned long long m_uiInvariableFavorAmount; // @synthesize m_uiInvariableFavorAmount;
@property(nonatomic) unsigned long long m_uiShowFavorAmount; // @synthesize m_uiShowFavorAmount;
@property(nonatomic) unsigned long long m_uiTotalFavorAmount; // @synthesize m_uiTotalFavorAmount;
@property(nonatomic) unsigned long long m_uiAfterFavorTradeAmount; // @synthesize m_uiAfterFavorTradeAmount;
@property(retain, nonatomic) NSString *m_nFavorComposeid; // @synthesize m_nFavorComposeid;
@property(retain, nonatomic) NSArray *m_arrFavItemList; // @synthesize m_arrFavItemList;
- (void).cxx_destruct;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PrtlBase.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface CSendMesPrtl : PrtlBase
{
    NSString *m_nsDocPath;
    NSMutableDictionary *m_dicMsgList;
    NSMutableArray *m_arrMsgList;
}

@property(retain, nonatomic) NSMutableArray *m_arrMsgList; // @synthesize m_arrMsgList;
@property(retain, nonatomic) NSMutableDictionary *m_dicMsgList; // @synthesize m_dicMsgList;
@property(retain, nonatomic) NSString *m_nsDocPath; // @synthesize m_nsDocPath;
- (void).cxx_destruct;
- (_Bool)HandleResp:(void *)arg1;
- (void)InitReq:(void *)arg1;
- (id)init;

@end

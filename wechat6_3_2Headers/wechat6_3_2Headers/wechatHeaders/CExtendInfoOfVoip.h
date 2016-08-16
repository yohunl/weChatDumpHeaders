//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMessageWrapExt-Protocol.h"
#import "IMsgExtendOperation-Protocol.h"
#import "NSCopying-Protocol.h"

@class CMessageWrap, NSString;

@interface CExtendInfoOfVoip : NSObject <IMessageWrapExt, IMsgExtendOperation, NSCopying>
{
    unsigned int m_uiVoipRecvTime;
    unsigned int m_uiVoipStatus;
    unsigned int m_uiVoipInviteType;
    int m_iVoipRoomid;
    long long m_i64VoipKey;
    unsigned int m_wordingType;
    unsigned int m_duration;
    CMessageWrap *m_refMessageWrap;
}

+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
@property(nonatomic) unsigned int m_duration; // @synthesize m_duration;
@property(nonatomic) unsigned int m_wordingType; // @synthesize m_wordingType;
@property(nonatomic) CMessageWrap *m_refMessageWrap; // @synthesize m_refMessageWrap;
@property(nonatomic) unsigned int m_uiVoipStatus; // @synthesize m_uiVoipStatus;
@property(nonatomic) unsigned int m_uiVoipRecvTime; // @synthesize m_uiVoipRecvTime;
@property(nonatomic) unsigned int m_uiVoipInviteType; // @synthesize m_uiVoipInviteType;
@property(nonatomic) int m_iVoipRoomid; // @synthesize m_iVoipRoomid;
@property(nonatomic) long long m_i64VoipKey; // @synthesize m_i64VoipKey;
- (void)UpdateContent:(id)arg1;
- (void)ChangeForDisplay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


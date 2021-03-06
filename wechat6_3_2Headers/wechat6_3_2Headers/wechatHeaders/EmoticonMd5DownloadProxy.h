//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EmoticonDownloadProxy.h"

#import "StoreEmotionBatchEmojiDownLoadCgiDelegate-Protocol.h"

@class EmoticonCdnDownloadConnection, NSString, StoreEmotionBatchEmojiDownLoadCgi;
@protocol EmoticonDownloadProxyDelegate;

@interface EmoticonMd5DownloadProxy : EmoticonDownloadProxy <StoreEmotionBatchEmojiDownLoadCgiDelegate>
{
    NSString *m_md5String;
    id <EmoticonDownloadProxyDelegate> m_delegate;
    _Bool m_isActive;
    StoreEmotionBatchEmojiDownLoadCgi *m_batchEmojiDownloadCgi;
    EmoticonCdnDownloadConnection *m_cdnDownloadProxy;
    NSString *_m_serverId;
}

@property(retain, nonatomic) NSString *m_serverId; // @synthesize m_serverId=_m_serverId;
- (void).cxx_destruct;
- (void)onBatchEmojiDownLoadEndWithEmojiList:(id)arg1;
- (id)createCdnDownloadConnectionWithEmojiInfo:(id)arg1;
- (void)callFailedDelegate;
- (void)startRequest;
- (_Bool)isActive;
- (id)initWithMd5:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ChatMigrationBackupChatDB, NSCondition, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ChatMigrationBackupChatDBPool : NSObject
{
    NSMutableArray *m_chatNameArray;
    ChatMigrationBackupChatDB *m_bakChatDB;
    _Bool m_bGetMessageWrap;
    NSCondition *m_bufferCondition;
    NSMutableArray *m_bufferArray;
    NSMutableArray *m_producerArray;
    NSMutableArray *m_consumeArray;
    _Bool m_bFinished;
    unsigned long long m_ConsumerWait;
    unsigned long long m_ProducerWait;
    NSMutableDictionary *m_dicReportInfo;
    NSObject<OS_dispatch_queue> *m_GetDataPushQueue;
    unsigned long long m_TotalProduceMessageCount;
    unsigned long long m_TotalConsumeMessageConut;
    unsigned long long m_noSvrIDCount;
    unsigned long long m_noDownloadEndCount;
    unsigned long long m_notSupportCount;
}

- (void).cxx_destruct;
- (_Bool)isBakChatMessage:(id)arg1;
- (_Bool)isBakChatName:(id)arg1;
- (id)p_getDataFromCosumer;
- (void)p_bufferAddDataToConsume;
- (void)p_producerAddDataToBuffer;
- (id)getNextMessageWrap;
- (void)handlBackChatName:(id)arg1;
- (void)stopGetMessageWrap;
- (void)startGetMessageWrap;
- (id)getReportInfo;
- (id)initWithChatNameArray:(id)arg1 withBackChatDB:(id)arg2;
- (id)init;

@end


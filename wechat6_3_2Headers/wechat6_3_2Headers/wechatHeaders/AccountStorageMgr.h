//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class CLocalInfo, CSetting, CSettingExt, CUpdateInfo, NSData, NSRecursiveLock, NSString, SyncBufferInfo;

@interface AccountStorageMgr : MMService <MMService>
{
    NSRecursiveLock *m_oLock;
    SyncBufferInfo *m_oSyncBufferInfo;
    NSData *m_dtKFSyncBuffer;
    _Bool m_testMemoryInvalid;
    _Bool m_testPhysicalInvalid;
    _Bool m_testSettingInvalid;
    CLocalInfo *m_oLocalInfo;
    CSetting *m_oSetting;
    CSettingExt *m_oSettingExt;
    CUpdateInfo *m_oUpdateInfo;
    NSString *m_nsDocPath;
}

@property(copy, nonatomic) NSString *m_nsDocPath; // @synthesize m_nsDocPath;
- (void).cxx_destruct;
- (void)SetMmtlsCtrlFlag:(unsigned int)arg1;
- (void)clearSyncBuffer;
- (void)onServiceClearData;
- (id)GetKFSyncBuffer;
- (_Bool)MergeAndSaveKFSyncBuffer:(id)arg1;
- (id)GetKFSyncBufferFilePath;
- (id)GetSyncBuffer;
- (_Bool)SaveSyncBuffer:(id)arg1;
- (_Bool)MergeAndSaveSyncBuffer:(id)arg1;
- (id)GetSyncBufferFilePath;
- (void)ClearLocalInfo;
- (void)ClearAllLocalInfo;
- (void)SaveLocalInfo:(_Bool)arg1;
- (void)LoadLocalInfo;
- (id)GetUpdateInfo;
- (void)SaveUpdateInfo;
- (void)LoadUpdateInfo;
- (void)SaveSettingExt;
- (void)LoadSettingExt;
- (void)MainThreadSaveSetting;
- (void)DirectSaveSetting;
- (void)LoadSetting;
- (_Bool)ValidForSettingInfo;
- (_Bool)ValidForMemorySyncBuffer;
- (_Bool)ValidForPhysicalSyncBuffer;
- (void)ResetMemorySyncBuffer;
- (void)dealloc;
- (void)closeResource;
- (void)initWithDocPath:(id)arg1;
- (id)init;
@property(copy, nonatomic) CUpdateInfo *m_oUpdateInfo; // @synthesize m_oUpdateInfo;
@property(copy, nonatomic) CSettingExt *m_oSettingExt; // @synthesize m_oSettingExt;
@property(copy, nonatomic) CSetting *m_oSetting; // @synthesize m_oSetting;
@property(copy, nonatomic) CLocalInfo *m_oLocalInfo; // @synthesize m_oLocalInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

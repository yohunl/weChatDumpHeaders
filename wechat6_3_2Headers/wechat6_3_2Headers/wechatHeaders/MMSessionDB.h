//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMDBRRepairerExt-Protocol.h"
#import "MMDBRestore-Protocol.h"

@class MMSessionSetting, NSCache, NSMutableDictionary, NSString, WCDataBase, WCDataBaseTable;

@interface MMSessionDB : NSObject <MMDBRRepairerExt, MMDBRestore>
{
    WCDataBase *m_db;
    WCDataBaseTable *m_table;
    NSMutableDictionary *m_sessionCache;
    MMSessionSetting *m_sessionSetting;
    NSCache *m_preLoadSessionCache;
    WCDataBaseTable *m_tableSessionDeleteInfo;
}

- (void).cxx_destruct;
- (void)onRenewMMDB;
- (void)willRepairDB:(unsigned int)arg1 needCatch:(_Bool *)arg2;
- (_Bool)DeleteOutOfDateSessionDeleteInfo;
- (id)GetSessionDeleteInfo:(id)arg1;
- (_Bool)InsertOrUpdateSessionDeleteInfo:(id)arg1;
- (void)UpdateSessionFilePath:(id)arg1;
- (void)DeleteSessions:(id)arg1;
- (void)DeleteSessionByUserName:(id)arg1;
- (void)AddOrModifySessions:(id)arg1;
- (void)ModifySession:(id)arg1;
- (void)AddSession:(id)arg1;
- (void)FulFillSession:(id)arg1;
- (void)ASyncFulFillSession:(id)arg1;
- (void)CleanupPreLoadSessionCache;
- (void)FulFillSessions:(id)arg1;
- (void)SetSessionFailCount:(unsigned int)arg1;
- (unsigned int)GetSessionFailCount;
- (void)SetSessionVersion:(unsigned int)arg1;
- (unsigned int)GetSessionVersion;
- (void)ImportSessions:(id)arg1;
- (long long)GetSessionImportTime;
- (void)SetSessionImported;
- (void)saveSessionSetting;
- (void)tryLoadSessionSetting;
- (void)dbImportSessions:(id)arg1;
- (void)dbUpdateSessionFilePath:(id)arg1;
- (_Bool)dbDeleteSessions:(id)arg1;
- (_Bool)dbDeleteSession:(id)arg1;
- (_Bool)dbAddOrModifySessions:(id)arg1;
- (_Bool)dbAddOrModifySession:(id)arg1;
- (id)GetAllSession;
- (id)GetAllSession:(_Bool *)arg1;
- (void)dealloc;
- (void)initDB;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

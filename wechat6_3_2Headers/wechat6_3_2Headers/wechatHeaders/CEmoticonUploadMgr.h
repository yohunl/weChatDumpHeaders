//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class CEmoticonDB, CEmoticonUploadInfo, NSRecursiveLock;

@interface CEmoticonUploadMgr : MMObject <PBMessageObserverDelegate>
{
    unsigned int m_uiCurEventID;
    CEmoticonDB *m_oEmoticonDB;
    NSRecursiveLock *m_oLock;
    CEmoticonUploadInfo *m_oCurUploadInfo;
}

@property(retain, nonatomic) CEmoticonUploadInfo *m_oCurUploadInfo; // @synthesize m_oCurUploadInfo;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)UploadOK:(_Bool)arg1;
- (void)UploadFail;
- (_Bool)CreateUploadEvent:(id)arg1;
- (void)CheckUpload;
- (void)StopUploadByChatName:(id)arg1;
- (void)StopUpload:(id)arg1;
- (void)StartUpload:(id)arg1;
- (void)DeleteMsg:(id)arg1 LocalID:(unsigned int)arg2;
- (_Bool)IsMsgInUploadQueue:(id)arg1;
- (void)InitWithDB:(id)arg1 Lock:(id)arg2;
- (void)ClearCurUpload;
- (void)ClearEventID;
- (void)dealloc;
- (id)init;

@end


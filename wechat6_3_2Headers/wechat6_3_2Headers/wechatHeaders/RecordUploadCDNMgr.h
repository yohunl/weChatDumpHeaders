//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "ICdnComMgrExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class CMessageWrap, CdnRecordMediaInfo, NSMutableArray, NSString;
@protocol RecordUploadCDNMgrDelegate;

@interface RecordUploadCDNMgr : MMObject <ICdnComMgrExt, PBMessageObserverDelegate>
{
    NSMutableArray *m_arrMsgWrap;
    NSMutableArray *m_arrRecordData;
    NSMutableArray *m_arrCDNUploadInfo;
    CMessageWrap *m_curMsgWrap;
    CdnRecordMediaInfo *m_curUploadMediaInfo;
    id <RecordUploadCDNMgrDelegate> m_delegate;
}

@property(retain, nonatomic) CdnRecordMediaInfo *m_curUploadMediaInfo; // @synthesize m_curUploadMediaInfo;
@property(retain, nonatomic) CMessageWrap *m_curMsgWrap; // @synthesize m_curMsgWrap;
@property(nonatomic) __weak id <RecordUploadCDNMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)OnCdnUpload:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleSendMsgResp:(id)arg1;
- (void)HandleBatchTransCDNResp:(id)arg1;
- (void)TryNextMsgWrap;
- (void)SendMsgOK:(long long)arg1;
- (void)SendMsgFail;
- (_Bool)SendCurAppMsg;
- (void)RemoveMsgWrap:(id)arg1;
- (void)BatchTransCDNItem;
- (void)BatchTransCDNItemForMsgList;
- (void)UploadRecordData;
- (void)CheckCDNUploadMsgQueue;
- (void)StopCurUpload;
- (void)StopUploadRecordMsgByUsername:(id)arg1;
- (void)StopUploadRecordMsg:(id)arg1;
- (void)StartUploadRecordMsg:(id)arg1;
- (_Bool)IsRecordMsgUploading:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


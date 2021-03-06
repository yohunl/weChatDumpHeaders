//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableArray, OpenInfo;

@interface OpenDownloadMgr : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray *m_queDownload;
    unsigned int m_uiCurEventID;
    OpenInfo *m_oCurDownloadInfo;
}

@property(retain, nonatomic) OpenInfo *m_oCurDownloadInfo; // @synthesize m_oCurDownloadInfo;
@property(retain, nonatomic) NSMutableArray *m_queDownload; // @synthesize m_queDownload;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)DownloadOK:(id)arg1;
- (void)DownloadFail:(unsigned int)arg1;
- (_Bool)CreateDownloadEvent;
- (void)CheckQueue;
- (void)StopDownloadByUsr:(id)arg1;
- (void)StopDownload:(id)arg1 MsgWrap:(id)arg2;
- (void)StopDownload:(id)arg1 MsgWrap:(id)arg2 AttachId:(id)arg3;
- (void)StartDownload:(id)arg1 MsgWrap:(id)arg2;
- (void)StartDownload:(id)arg1 MsgWrap:(id)arg2 AttachId:(id)arg3 AttachDataSize:(unsigned int)arg4 AttachFileExt:(id)arg5;
- (_Bool)InDownloading:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)InDownloading:(id)arg1 MsgWrap:(id)arg2 AttachId:(id)arg3;
- (void)Pop;
- (id)GetTop;
- (void)ClearEventID;
- (void)dealloc;
- (id)init;

@end


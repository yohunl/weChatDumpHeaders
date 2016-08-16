//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "EmoticonDownloadMd5ListCgiDelegate-Protocol.h"
#import "EmoticonDownloadProxyDelegate-Protocol.h"

@class EmoticonDownloadMd5ListCgi, EmoticonDownloadProxy, NSString;
@protocol EmoticonRecoverLogicObjectDelegate;

@interface EmoticonRecoverLogicObject : MMObject <EmoticonDownloadMd5ListCgiDelegate, EmoticonDownloadProxyDelegate>
{
    _Bool m_isActive;
    _Bool m_hasStartLogic;
    EmoticonDownloadMd5ListCgi *m_recoverCgi;
    EmoticonDownloadProxy *m_downloadCgi;
    id <EmoticonRecoverLogicObjectDelegate> m_delegate;
}

@property(nonatomic) __weak id <EmoticonRecoverLogicObjectDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool m_hasStartLogic; // @synthesize m_hasStartLogic;
@property(nonatomic) _Bool m_isActive; // @synthesize m_isActive;
@property(retain, nonatomic) EmoticonDownloadProxy *m_downloadCgi; // @synthesize m_downloadCgi;
@property(retain, nonatomic) EmoticonDownloadMd5ListCgi *m_recoverCgi; // @synthesize m_recoverCgi;
- (void).cxx_destruct;
- (void)performDownloadEmoticon;
- (void)onEmoticonDownloadMd5Failed:(id)arg1 withUserInfo:(id)arg2;
- (void)onEmoticonDownloadMd5Ok:(id)arg1 AndFilePath:(id)arg2 withUserInfo:(id)arg3;
- (void)onEmoticonDownloadMd5Failed:(id)arg1;
- (void)onEmoticonDownloadMd5Ok:(id)arg1 AndFilePath:(id)arg2;
- (void)onEmoticonDownloadMd5ListFailed;
- (void)onEmoticonDownloadMd5ListOk:(id)arg1;
- (void)completeAndAddEmoticonWithMd5:(id)arg1 AndFilePath:(id)arg2;
- (void)startDownloadWithMd5List:(id)arg1;
- (_Bool)clearLocalContentByMd5List:(id)arg1;
- (void)callFailedDelegate;
- (void)callOkDelegate;
- (void)downloadEmoticon;
- (_Bool)canStartCgiNow;
- (void)goonLogic;
- (_Bool)isActive;
- (void)startLogicWithIncrementMd5List:(id)arg1;
- (void)startLogic;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


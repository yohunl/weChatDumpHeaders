//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMResourceMgrExt-Protocol.h"

@class MMPatchInfo, NSString;

@interface MMPatchMgr : NSObject <MMResourceMgrExt>
{
    _Bool m_isServiceInit;
    MMPatchInfo *m_publicPatchInfo;
    MMPatchInfo *m_privatePatchInfo;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (void)setNewClientVersion:(unsigned int)arg1;
- (void)clearNewClientVersion;
- (void)exitOnEnteringBackground;
- (id)patchInfoFromData:(id)arg1;
- (void)startEngineWithPatchInfo:(id)arg1;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)loadAndExecutePatch;
- (void)reportIDKeyData:(unsigned int)arg1 key:(unsigned int)arg2;
- (void)forceUpdatePatchCode:(unsigned int)arg1;
- (unsigned int)newClientVersion;
- (void)registerExtension;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


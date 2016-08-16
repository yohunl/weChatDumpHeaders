//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "IStoreEmotionDesignerInfoMgrExt-Protocol.h"

@class JSEvent, MMUIViewController, NSString;

@interface WebviewJSEventHandler_openDesignerProfile : WebviewJSEventHandlerBase <IStoreEmotionDesignerInfoMgrExt>
{
    JSEvent *m_event;
    NSString *m_designerId;
    MMUIViewController *m_viewController;
}

- (void).cxx_destruct;
- (void)onGetDesignerForDesignerId:(id)arg1 AndDesigner:(id)arg2;
- (void)endWithFail;
- (void)endWithOk;
- (id)handleWithParams:(id)arg1 AndViewController:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

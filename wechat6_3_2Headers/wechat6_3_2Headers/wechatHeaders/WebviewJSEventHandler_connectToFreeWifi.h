//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "IPublicWifiManagerExt-Protocol.h"

@class JSEvent, NSString;

@interface WebviewJSEventHandler_connectToFreeWifi : WebviewJSEventHandlerBase <IPublicWifiManagerExt>
{
    JSEvent *_event;
}

@property(retain, nonatomic) JSEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onPublicWifiSessionClosed;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "AirKissViewControllerDelegate-Protocol.h"

@class JSEvent, NSString;

@interface WebviewJSEventHandler_configWXDeviceWiFi : WebviewJSEventHandlerBase <AirKissViewControllerDelegate>
{
    JSEvent *m_event;
}

- (void).cxx_destruct;
- (void)onNoWifiCancel;
- (void)onUserCancel;
- (void)onAirKissReturn:(_Bool)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


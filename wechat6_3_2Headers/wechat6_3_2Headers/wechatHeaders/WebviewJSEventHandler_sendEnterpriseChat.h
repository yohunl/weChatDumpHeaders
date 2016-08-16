//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

@class JSEvent, NSDictionary, NSMutableData, NSURLConnection;

@interface WebviewJSEventHandler_sendEnterpriseChat : WebviewJSEventHandlerBase
{
    NSURLConnection *_connection;
    JSEvent *_curEvent;
    NSDictionary *_curExtraData;
    NSMutableData *_recData;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)sendAppMessage:(id)arg1 extraData:(id)arg2 imageData:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)clearCurData;
- (void)processLinkMsg;
- (void)processTextMsg;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

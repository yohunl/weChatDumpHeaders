//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIWebViewDelegate-Protocol.h"

@class NSBundle, NSMutableArray, NSMutableDictionary, NSString, UIWebView;
@protocol WebViewJavascriptBridgeDelegate;

@interface WebViewJavascriptBridge : NSObject <UIWebViewDelegate>
{
    UIWebView *_webView;
    id _webViewDelegate;
    NSMutableArray *_startupMessageQueue;
    NSMutableDictionary *_responseCallbacks;
    NSMutableDictionary *_messageHandlers;
    long long _uniqueId;
    CDUnknownBlockType _messageHandler;
    NSBundle *_resourceBundle;
    unsigned long long _numRequestsLoading;
    id <WebViewJavascriptBridgeDelegate> _delegate;
}

+ (id)bridgeForWebView:(id)arg1 webViewDelegate:(id)arg2 handler:(CDUnknownBlockType)arg3 resourceBundle:(id)arg4;
+ (id)bridgeForWebView:(id)arg1 webViewDelegate:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)bridgeForWebView:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)enableLogging;
@property(nonatomic) __weak id <WebViewJavascriptBridgeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)_platformSpecificDealloc;
- (void)_platformSpecificSetup:(id)arg1 webViewDelegate:(id)arg2 handler:(CDUnknownBlockType)arg3 resourceBundle:(id)arg4;
- (void)_log:(id)arg1 json:(id)arg2;
- (id)_deserializeMessageJSON:(id)arg1;
- (id)_serializeMessage:(id)arg1;
- (void)_flushMessageQueue;
- (void)_dispatchMessage:(struct NSDictionary *)arg1;
- (void)_queueMessage:(struct NSDictionary *)arg1;
- (id)_synDispatchMessage:(struct NSDictionary *)arg1;
- (id)_syncSendData:(id)arg1 handlerName:(id)arg2;
- (void)_sendData:(id)arg1 responseCallback:(CDUnknownBlockType)arg2 handlerName:(id)arg3;
- (void)dealloc;
- (id)init;
- (void)registerHandler:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)callHandler:(id)arg1 data:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)callHandler:(id)arg1 data:(id)arg2;
- (void)callHandler:(id)arg1;
- (id)syncSend:(id)arg1 handlerName:(id)arg2;
- (void)send:(id)arg1 responseCallback:(CDUnknownBlockType)arg2;
- (void)send:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


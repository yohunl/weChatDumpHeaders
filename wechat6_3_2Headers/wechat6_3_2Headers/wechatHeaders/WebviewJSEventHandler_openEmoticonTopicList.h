//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

@class JSEvent;

@interface WebviewJSEventHandler_openEmoticonTopicList : WebviewJSEventHandlerBase
{
    JSEvent *m_event;
}

+ (id)dictionForBannerSet:(id)arg1;
- (void).cxx_destruct;
- (void)endWithFail;
- (void)endWithOk;
- (id)viewControllerWithParams:(id)arg1;
- (_Bool)handleWithParams:(id)arg1 AndNavigationController:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end


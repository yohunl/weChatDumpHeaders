//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

@class PhotoViewController;

@interface WebviewJSEventHandler_imagePreview : WebviewJSEventHandlerBase
{
    PhotoViewController *m_photoViewController;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)showImageWithUrls:(id)arg1 current:(id)arg2;
- (void)uninitImageViewer;
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end


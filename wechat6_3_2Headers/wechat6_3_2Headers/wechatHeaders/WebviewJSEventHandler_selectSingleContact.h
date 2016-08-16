//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "JSApiSelectContactsViewControllerDelegate-Protocol.h"
#import "JSApiSelectSessionViewControllerDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class CContact, JSApiSelectContactsViewController, JSApiSelectSessionViewController, JSEvent;

@interface WebviewJSEventHandler_selectSingleContact : WebviewJSEventHandlerBase <JSApiSelectContactsViewControllerDelegate, JSApiSelectSessionViewControllerDelegate, PBMessageObserverDelegate>
{
    int m_enReturnValueSignedType;
    JSApiSelectSessionViewController *m_oSelectSessionViewController;
    JSApiSelectContactsViewController *m_oSelectContactViewController;
    JSEvent *m_oJSEvent;
    CContact *m_oSelectedContact;
}

- (void).cxx_destruct;
- (void)getIBGUserOpenIdRequest;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnJSApiSelectSessionViewControllerNewSession;
- (void)OnJSApiSelectSessionViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (_Bool)OnJSApiSelectSessionViewControllerFilterContactCandidate:(id)arg1;
- (void)OnJSApiSelectSessionViewControllerBack;
- (void)OnJSApiSelectContactsViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (_Bool)OnJSApiSelectContactsViewControllerFilterContactCandidate:(id)arg1;
- (void)OnJSApiSelectContactsViewControllerBack;
- (void)dealloc;
- (void)confirmEndJSEvent;
- (void)cancelEndJSEnvent;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3 CurrentViewController:(id)arg4;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end


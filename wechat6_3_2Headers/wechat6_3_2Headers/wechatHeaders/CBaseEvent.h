//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NotifyFromPrtlDelegate-Protocol.h"

@class CMMDB, NSRecursiveLock, NSString, NSThread;
@protocol NotifyFromEventDelegate, NotifyFromMainCtrlDelegate;

@interface CBaseEvent : NSObject <NotifyFromPrtlDelegate>
{
    _Bool m_bStart;
    unsigned int m_uiEventType;
    unsigned int m_uiError;
    unsigned int m_uiUin;
    unsigned int m_uiEventID;
    id <NotifyFromEventDelegate> m_delNotifyFromEvent;
    id <NotifyFromMainCtrlDelegate> m_delNotifyToEventOwner;
    CMMDB *m_oMMDB;
    NSString *m_nsDocPath;
    NSRecursiveLock *m_oLock;
    _Bool m_bStop;
    _Bool m_bEventFinish;
    _Bool m_bBackGround;
    _Bool m_bNeedNotify;
    _Bool m_bSyncRun;
    _Bool m_bUseOperationQueue;
    _Bool m_bShortRetry;
    NSThread *m_oCurThread;
}

@property(nonatomic) _Bool m_bEventFinish; // @synthesize m_bEventFinish;
@property(nonatomic) _Bool m_bStop; // @synthesize m_bStop;
@property __weak NSThread *m_oCurThread; // @synthesize m_oCurThread;
@property(nonatomic) __weak id <NotifyFromMainCtrlDelegate> m_delNotifyToEventOwner; // @synthesize m_delNotifyToEventOwner;
@property(nonatomic) _Bool m_bShortRetry; // @synthesize m_bShortRetry;
@property(nonatomic) _Bool m_bUseOperationQueue; // @synthesize m_bUseOperationQueue;
@property(nonatomic) _Bool m_bSyncRun; // @synthesize m_bSyncRun;
@property(nonatomic) _Bool m_bNeedNotify; // @synthesize m_bNeedNotify;
@property(nonatomic) _Bool m_bBackGround; // @synthesize m_bBackGround;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock;
@property(nonatomic) unsigned int m_uiEventID; // @synthesize m_uiEventID;
@property(nonatomic) unsigned int m_uiUin; // @synthesize m_uiUin;
@property(retain, nonatomic) NSString *m_nsDocPath; // @synthesize m_nsDocPath;
@property(retain, nonatomic) CMMDB *m_oMMDB; // @synthesize m_oMMDB;
@property(nonatomic) __weak id <NotifyFromEventDelegate> m_delNotifyFromEvent; // @synthesize m_delNotifyFromEvent;
@property(nonatomic, getter=GetLastError) unsigned int m_uiError; // @synthesize m_uiError;
@property(nonatomic, getter=GetEventType) unsigned int m_uiEventType; // @synthesize m_uiEventType;
- (void).cxx_destruct;
- (unsigned int)GetNetworkReachabilitySeed;
- (_Bool)IsLogIn;
- (void)NotifyFromPrtl:(unsigned int)arg1 MessageInfo:(id)arg2;
- (void)AddOperationQueueEvent:(id)arg1;
- (void)emptyThreadTimer:(id)arg1;
- (_Bool)IsStart;
- (void)ForceStop;
- (void)SetStart:(_Bool)arg1;
- (_Bool)SetEventInfo:(id)arg1;
- (void)Stop;
- (_Bool)Start:(unsigned int *)arg1 RetInfo:(id)arg2;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "LongPressMenuViewDelegate-Protocol.h"

@class CPushContact, NSMutableArray, NSString;

@interface HelloMsgsPanelView : MMUIView <LongPressMenuViewDelegate>
{
    NSMutableArray *m_arrHellos;
    CPushContact *m_lastMsg;
    id m_replyTarget;
    SEL m_replySel;
}

+ (id)getHelloMsgArrayContacts:(id)arg1;
- (void).cxx_destruct;
- (void)onLongPressMenuViewCopy:(id)arg1;
- (void)onReply:(id)arg1;
- (void)setRelpyTarget:(id)arg1 sel:(SEL)arg2;
- (id)initHelloWord:(id)arg1 HelloUser:(id)arg2 width:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


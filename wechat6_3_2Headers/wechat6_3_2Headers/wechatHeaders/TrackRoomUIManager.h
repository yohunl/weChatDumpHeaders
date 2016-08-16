//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IVOIPUILogicMgrExt-Protocol.h"
#import "MMService-Protocol.h"
#import "MonoServiceLogicExt-Protocol.h"
#import "TrackRoomViewDelegate-Protocol.h"

@class NSString, TrackRoomView;

@interface TrackRoomUIManager : MMService <TrackRoomViewDelegate, IVOIPUILogicMgrExt, MonoServiceLogicExt, MMService>
{
    TrackRoomView *_trackRoomView;
}

- (void).cxx_destruct;
- (void)onMonoServiceDidEnd;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)onMonoServiceVoipWillStart;
- (void)onMonoServiceMultitalkWillStart;
- (void)onVideoVoipViewDisappear;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (_Bool)onServiceMemoryWarning;
- (void)cleanResource;
- (void)onTrackRoomViewClose;
- (void)hideTrackRoomView;
- (void)showTrackRoomView;
- (void)closeTrackRoomView:(unsigned int)arg1;
- (_Bool)openTrackRoom:(id)arg1 POIInfo:(id)arg2 Scene:(unsigned int)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


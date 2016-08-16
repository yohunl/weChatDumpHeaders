//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIWindow.h"

#import "IAUAudioDeviceExt-Protocol.h"
#import "ILocationMgrExt-Protocol.h"
#import "ITrackRoomMgrExt-Protocol.h"
#import "IWXTalkieExt-Protocol.h"
#import "MMHeadImageAnnotationViewDelegate-Protocol.h"
#import "NavigateLogicControllerDelegate-Protocol.h"
#import "QMapViewDelegate-Protocol.h"
#import "TrackRoomTopBarViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class AnnotationLogicController, CAShapeLayer, HeadClusterView, MMLoadingView, MMTimer, NSString, NavigateLogicController, POIInfo, QMapView, TrackRoomTopBarView, UIAlertView, UIButton, UIView;
@protocol TrackRoomViewDelegate;

@interface TrackRoomView : MMUIWindow <UIAlertViewDelegate, MMHeadImageAnnotationViewDelegate, ITrackRoomMgrExt, TrackRoomTopBarViewDelegate, QMapViewDelegate, WCActionSheetDelegate, ILocationMgrExt, IWXTalkieExt, IAUAudioDeviceExt, UIGestureRecognizerDelegate, NavigateLogicControllerDelegate>
{
    id <TrackRoomViewDelegate> _trackRoomViewDelegate;
    _Bool _isInit;
    _Bool _getMicSucc;
    _Bool _showAllHead;
    _Bool _isMapRegionChanging;
    _Bool _shouldIgnoreAccuracy;
    _Bool _intermediateAnimation;
    _Bool _shouldHideAllAnnotation;
    _Bool _shouldZoomToSeeAll;
    _Bool _isLoadFinish;
    _Bool _drivingMode;
    _Bool _refreshOK;
    unsigned long long _gpsTag;
    struct timeval _startLocatingTime;
    struct timeval _startShowTime;
    UIView *_micMeterCircleView;
    POIInfo *_poiInfo;
    unsigned int _scene;
    UIButton *_micButton;
    UIButton *_myLocationButton;
    NSString *_chatname;
    QMapView *_mapView;
    UIAlertView *_trackErrorAlertView;
    CAShapeLayer *_micMeterCircle;
    MMTimer *_updateUserLocationTimer;
    MMLoadingView *_loadingView;
    struct {
        CDStruct_2c43369c center;
        struct {
            double latitudeDelta;
            double longitudeDelta;
        } span;
    } _destinationRegion;
    TrackRoomTopBarView *_topbarView;
    HeadClusterView *_headClusterView;
    NavigateLogicController *_navigateLogicController;
    AnnotationLogicController *_annotationLogicController;
}

@property(nonatomic) __weak id <TrackRoomViewDelegate> trackRoomViewDelegate; // @synthesize trackRoomViewDelegate=_trackRoomViewDelegate;
- (void).cxx_destruct;
- (void)onPresentViewControlelr:(id)arg1 Animated:(_Bool)arg2;
- (void)onStopLoading;
- (void)onStartLoading;
- (void)onCenterMapAt:(id)arg1;
- (void)onClickCallout:(id)arg1 AtPoint:(struct CGPoint)arg2;
- (void)onClickDot:(id)arg1 AtPoint:(struct CGPoint)arg2;
- (void)navigateTo:(id)arg1 Name:(id)arg2 Sender:(id)arg3;
- (id)getDisplayNameByUsername:(id)arg1;
- (void)setAnnotation:(id)arg1 Coordinate:(CDStruct_c3b9c2ee)arg2 Animated:(_Bool)arg3 Duration:(float)arg4;
- (void)updateHeadAnnotation:(id)arg1;
- (void)onRemoteControlCheckShouldStop;
- (void)onRemoteControlCheckShouldPlay;
- (void)OnRestart;
- (void)OnPause;
- (void)OnReConnecting;
- (void)onKickOutFromWXTalkRoom:(id)arg1;
- (void)OnNobodyTalking;
- (void)OnForceStopRecord;
- (void)OnError:(id)arg1 ErrNo:(int)arg2;
- (void)OnSomeoneTalking:(id)arg1;
- (void)OnGetMicrophoneResult:(int)arg1;
- (void)OnOpenWXTalkModeOK:(id)arg1;
- (void)audioDeviceInputMeterLevel:(id)arg1 Peak:(float)arg2;
- (void)doMeterAnimationOnMainThread:(id)arg1;
- (void)closeTalk;
- (_Bool)openTalk:(id)arg1;
- (void)OnHeadingChanged:(double)arg1;
- (void)OnTrackRoomError:(int)arg1 Message:(id)arg2;
- (void)trySeeAll;
- (void)OnRefreshTrackRoom:(id)arg1 Type:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)initTrack;
- (void)onGPSLocationChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (id)mapView:(id)arg1 viewForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (void)didDragMap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)bringFriendToFront:(id)arg1;
- (void)bringMyselfToFront;
- (id)getUserLocation;
- (void)setRegion:(CDStruct_90e2a262)arg1 AlwaysAnimated:(_Bool)arg2;
- (void)onSetIgnoreAccuracy;
- (_Bool)isLocationOK:(id)arg1;
- (void)stopUpdateUserLocation;
- (void)startUpdateUserLocation;
- (void)stopTimerCheckUserLocation;
- (void)startTimerCheckUserLocation;
- (void)onTimerUpdateLocation;
- (void)resizeMapToShowAllHeadAnimated:(id)arg1;
- (void)onNavigateToPOI:(id)arg1;
- (void)setAllHeadAnnotationShowCallout:(_Bool)arg1 Animated:(_Bool)arg2;
- (void)showLocationCalloutViewAnimated:(_Bool)arg1;
- (_Bool)showClusterViewOnPoint:(struct CGPoint)arg1;
- (void)onMapTapped:(id)arg1;
- (void)onMicButtonReleased;
- (void)onMicButtonPressed;
- (void)onMyLocationButtonClick;
- (void)onMinimizeButtonClick;
- (void)onCloseButtonClick:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)closeTrackRoom:(unsigned int)arg1;
- (void)stopLoading;
- (void)startLoadingNonBlock;
- (id)getLocationText:(CDStruct_c3b9c2ee)arg1;
- (void)enterForeground;
- (void)enterBackground;
- (void)hideTrackRoomView;
- (void)showTrackRoomView;
- (void)exitTracking:(unsigned int)arg1;
- (void)doStartTrack;
- (_Bool)startTrackWithChatname:(id)arg1 POIInfo:(id)arg2 Scene:(unsigned int)arg3;
- (void)initMapView;
- (void)initView;
- (void)dealloc;
- (void)internalInit;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


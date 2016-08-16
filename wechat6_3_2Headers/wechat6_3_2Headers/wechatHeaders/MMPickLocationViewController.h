//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "IGetPOIListMgrExt-Protocol.h"
#import "ILocationMgrExt-Protocol.h"
#import "LocationRetrieveDelegate-Protocol.h"
#import "MMAutoSearchLogicDelegate-Protocol.h"
#import "MMLocationAttributeBannerDelegate-Protocol.h"
#import "MMLocationPinViewDelegate-Protocol.h"
#import "MMRefreshTableFooterDelegate-Protocol.h"
#import "MMSearchBarDelegate-Protocol.h"
#import "QMapViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class CLLocation, LocationRetriever, MMAutoSearchLogic, MMLocationAttributeBanner, MMLocationPinView, MMSearchBar, MMTableView, NSMutableArray, NSString, QMapView, UIAlertView, UIButton, UILabel, UIPinchGestureRecognizer, WCTimeLineFooterView;
@protocol MMPickLocationViewControllerDelegate;

@interface MMPickLocationViewController : MMSearchBarDisplayController <UITableViewDelegate, tableViewDelegate, UITableViewDataSource, IGetPOIListMgrExt, ILocationMgrExt, UIGestureRecognizerDelegate, MMRefreshTableFooterDelegate, MMSearchBarDelegate, MMLocationAttributeBannerDelegate, LocationRetrieveDelegate, MMAutoSearchLogicDelegate, QMapViewDelegate, MMLocationPinViewDelegate, UIAlertViewDelegate, WCActionSheetDelegate>
{
    id <MMPickLocationViewControllerDelegate> _delegate;
    UILabel *_searchErrorTips;
    NSString *_address;
    NSString *_searchKeyword;
    NSString *_openID;
    MMSearchBar *_searchBar;
    MMLocationPinView *_pinView;
    QMapView *_mapView;
    MMTableView *_tableView;
    WCTimeLineFooterView *_nearTableFooterView;
    WCTimeLineFooterView *_searchTableFooterView;
    UIAlertView *_errorAlertView;
    MMLocationAttributeBanner *_attributeBanner;
    _Bool _isLoadFinish;
    _Bool _shouldUpdateList;
    _Bool _isOnlyUseUserLocation;
    _Bool _isMapAnimating;
    _Bool _useWXPOI;
    _Bool _useApplePOI;
    _Bool _isShowUp;
    unsigned long long _geoTag;
    unsigned int _scene;
    CDStruct_2c43369c _lastSelectedLocation;
    CDStruct_2c43369c _firstGetNearLocation;
    CDStruct_2c43369c _lastDragLocation;
    UIButton *_showMyLocationButton;
    NSMutableArray *_poiAnnotationList;
    NSMutableArray *_searchPOIResultList;
    unsigned long long _selectedPoiIndex;
    struct timeval _startLocateTime;
    struct CGSize _beginTouchDeltaRatio;
    CDStruct_2c43369c _beginTouchRegion;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    NSMutableArray *_sysGestureRecognizers;
    LocationRetriever *_locationRetriever;
    CLLocation *_userCurrentLocation;
    MMAutoSearchLogic *_autoSearchLogic;
    double _keyboardHeight;
    unsigned long long _entryTime;
    unsigned long long _startGetListTime;
    unsigned long long _endGetListTime;
    unsigned long long _firstGetTime;
    unsigned int _getPageCount;
    unsigned long long _startSearchListTime;
    unsigned long long _endSearchListTime;
    unsigned long long _firstSearchTime;
    unsigned long long _searchPageCount;
    NSString *_currentSearchId;
    _Bool _lastSelectFromSearch;
    unsigned long long _lastSelectRow;
    unsigned long long _lastSelectTime;
    NSString *_lastSelectPOIId;
    _Bool _dismissWithCancel;
    _Bool _isSubViewAnimating;
    _Bool _didShowLocationCloseAlert;
    NSString *_roughAddress;
    double _mapViewFullHeight;
    double _mapViewCurrentHeight;
}

@property(nonatomic) _Bool didShowLocationCloseAlert; // @synthesize didShowLocationCloseAlert=_didShowLocationCloseAlert;
@property(nonatomic) _Bool isSubViewAnimating; // @synthesize isSubViewAnimating=_isSubViewAnimating;
@property(nonatomic) double mapViewCurrentHeight; // @synthesize mapViewCurrentHeight=_mapViewCurrentHeight;
@property(nonatomic) double mapViewFullHeight; // @synthesize mapViewFullHeight=_mapViewFullHeight;
@property(retain, nonatomic) NSString *roughAddress; // @synthesize roughAddress=_roughAddress;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) __weak id <MMPickLocationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)keyboardDidShow:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)startUpdateLocation;
- (void)OnGetAutoSearchPOIList:(id)arg1 Error:(int)arg2;
- (void)OnGetSearchPOIList:(id)arg1 Error:(int)arg2;
- (void)OnGetNearPOIList:(id)arg1 Error:(int)arg2;
- (id)getAddressFromPlaceMark:(id)arg1;
- (void)OnSearchMKLocalSearchResponse:(id)arg1 Error:(id)arg2;
- (void)updataSearchListWithCoordinate:(CDStruct_c3b9c2ee)arg1 Keyword:(id)arg2 StartFromFirst:(_Bool)arg3;
- (void)updatePOIListWithCoordinate:(CDStruct_c3b9c2ee)arg1 StartFromFirst:(_Bool)arg2;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long long)arg2;
- (void)stopGeocoder;
- (void)getAddressByLocation:(CDStruct_c3b9c2ee)arg1;
- (void)autoSearchShouldBeginWithKey:(id)arg1 StartFromFirst:(_Bool)arg2;
- (void)setSearchTableResultText:(id)arg1;
- (void)mmSearchDisplayControllerWillEndSearch;
- (void)mmSearchDisplayControllerWillBeginSearch;
- (void)relayoutSubviews;
- (void)mmsearchBarSearchButtonClicked:(id)arg1;
- (void)mmSearchBarTextDidChange:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)mmsearchBarTextDidBeginEditing:(id)arg1;
- (void)setSearchBar:(id)arg1 CancelButtonText:(id)arg2;
- (void)adjustSearchTable:(_Bool)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)didScrollViewScroll:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)makeCell:(id)arg1 forPOIItem:(id)arg2 withWidth:(float)arg3 atIndexPath:(id)arg4;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)resetSearchList;
- (id)getSearchItemAtIndex:(long long)arg1;
- (void)updateUserPOIItem;
- (id)getUserPOIItem;
- (_Bool)isUserPOIItem:(id)arg1;
- (unsigned int)getUserPOIItemIndex;
- (id)getSelectedPOIItem;
- (id)getPOIItemAtIndex:(unsigned long long)arg1;
- (id)getPOIAnnotationAtIndex:(unsigned long long)arg1;
- (void)scrollPOIItemToVisible:(unsigned long long)arg1 Animated:(_Bool)arg2;
- (void)selectPOIAnnotation:(id)arg1;
- (void)selectPOIAtIndex:(unsigned long long)arg1 Animated:(_Bool)arg2;
- (void)onUpdatePOITableCell:(id)arg1;
- (void)addUserPOIItem;
- (void)addNotCheckInPOIItem;
- (void)resetPOIList;
- (void)addPOIItem:(id)arg1 UpdateTable:(_Bool)arg2 Animated:(_Bool)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showPinViewCallout;
- (void)addUserLocationAnnotation;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)mapViewDidFinishLoadingMap:(id)arg1;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)delayAddUserPOIItem;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (void)onClickAttributeBanner;
- (void)unFoldMapView;
- (void)foldMapView;
- (double)getDistanceBetween:(CDStruct_c3b9c2ee)arg1 AndTarget:(CDStruct_c3b9c2ee)arg2;
- (void)onCancelSelectLocation;
- (void)onLoadMapError:(id)arg1;
- (void)onTimerCheckUserLocation;
- (void)onTimeOut;
- (void)pinUserLocation:(id)arg1;
- (void)onShowMyLocation;
- (_Bool)isOnUserLocation:(CDStruct_c3b9c2ee)arg1;
- (id)getUserLocation;
- (id)getCurrentPOIInfo;
- (void)stopPicking;
- (void)onPinGestureUpdated:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)enableSysGestureRecognizers:(_Bool)arg1;
- (void)initMapViewGestureRecognizer:(id)arg1;
- (void)initGesture;
- (void)adjustSubviewRects;
- (void)willDisshow;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewWillBePresented:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initView;
- (void)showAttributeBannerTitle:(id)arg1 LogoUrl:(id)arg2 Link:(id)arg3;
- (void)showSearchTableLoadMore;
- (void)initHeaderView;
- (void)initMapPinView:(_Bool)arg1;
- (void)updateSearchBarTips;
- (void)initSearchBar;
- (void)initShowMyLocationButton;
- (void)initTableView;
- (float)getTableViewHeight;
- (void)reportOnDone;
- (void)dealloc;
- (id)initWithScene:(unsigned int)arg1 OnlyUseUserLocation:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


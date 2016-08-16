//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "CLLocationManagerDelegate-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "QMapViewDelegate-Protocol.h"

@class CLLocationManager, MMLocationCacheStorage, MMLocationDB, NSMutableArray, NSString, QMapView;

@interface MMLocationMgr : MMService <PBMessageObserverDelegate, QMapViewDelegate, MMService, CLLocationManagerDelegate>
{
    NSMutableArray *m_loactionMgrList;
    NSMutableArray *m_unusedLocationMgr;
    MMLocationDB *m_locationDB;
    NSMutableArray *m_reversGeolocators;
    long long mapViewTagMark;
    NSMutableArray *mapViewList;
    MMLocationCacheStorage *_locationCacheStorage;
    CLLocationManager *_locationMgrForAuthorization;
    QMapView *_mapView;
}

@property(readonly, nonatomic) MMLocationCacheStorage *locationCacheStorage; // @synthesize locationCacheStorage=_locationCacheStorage;
@property(retain, nonatomic) NSMutableArray *unusedLocationMgr; // @synthesize unusedLocationMgr=m_unusedLocationMgr;
@property(retain, nonatomic) NSMutableArray *loactionMgrList; // @synthesize loactionMgrList=m_loactionMgrList;
- (void).cxx_destruct;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)requestWXGeocodeWithParam:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)requestReverseGeoWithParam:(id)arg1;
- (_Bool)isCoordinateInChina:(CDStruct_c3b9c2ee)arg1;
- (id)countryCodeFromAddressDic:(id)arg1;
- (id)countryFromAddressDic:(id)arg1;
- (id)routeFromAddressDic:(id)arg1;
- (id)subLocalityFromAddressDic:(id)arg1;
- (id)evolvedCityFromAddressDic:(id)arg1;
- (id)cityFromAddressDic:(id)arg1;
- (id)provinceFromAddressDic:(id)arg1;
- (id)roughAddressFromAddressDic:(id)arg1;
- (id)shortAddressFromAddressDic:(id)arg1;
- (id)findDictionaryByKey:(id)arg1;
- (id)findDictionaryByGeo:(id)arg1;
- (void)stopUpdateAddressByTag:(unsigned long long)arg1;
- (void)stopGeoAddress:(id)arg1;
- (unsigned long long)updateAddressByLocation:(CDStruct_c3b9c2ee)arg1;
- (id)getAddressByLocation:(CDStruct_c3b9c2ee)arg1;
- (id)keyForLocation:(CDStruct_c3b9c2ee)arg1;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)onUpdateLocationFromLocationManager:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)getLastLocationCache;
- (void)updateLocationCache:(id)arg1 isMarsLocation:(_Bool)arg2;
- (void)saveLocationCacheStorage;
- (void)loadLocationCacheStorage;
- (id)getLocationCacheStorage;
- (_Bool)isUpdatingHeading:(unsigned long long)arg1;
- (void)stopUpdateHeading:(unsigned long long)arg1;
- (unsigned long long)startUpdateHeading;
- (_Bool)isUpdatingMapLocation:(long long)arg1;
- (void)stopUpdateMapLocation:(long long)arg1;
- (long long)startUpdateMapLocation;
- (_Bool)isUpdatingGPSLocation:(unsigned long long)arg1;
- (void)stopUpdateGPSLocation:(unsigned long long)arg1;
- (unsigned long long)startUpdateGPSLocation;
- (void)requestForAuthorization;
- (void)cleanUpUnusedLocationMgr;
- (void)addToUnusedLocationMgr:(id)arg1;
- (_Bool)isAccurateLocation:(id)arg1;
- (double)locationAccuracy:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


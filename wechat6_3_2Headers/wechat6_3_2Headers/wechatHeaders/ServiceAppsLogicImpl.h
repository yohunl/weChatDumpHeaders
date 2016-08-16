//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface ServiceAppsLogicImpl : MMObject <PBMessageObserverDelegate>
{
    NSArray *_serviceAppsList;
    NSMutableArray *_tempList;
    _Bool _isUpdating;
    _Bool _isGettingIcon;
    NSMutableDictionary *_updateIconDic;
    unsigned int _lastUpdateTime;
    NSMutableArray *_validJumpUrlList;
}

- (void).cxx_destruct;
- (void)loadData;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)handleGetAppIconRsp:(id)arg1;
- (void)handleNotShowNewLogic;
- (void)handleUpdateServiceAppsListWithOffsetResp:(id)arg1;
- (void)addNewItemToUpdateIconDicAndStartUpdate;
- (_Bool)makeUrlRequest:(id)arg1 userData:(id)arg2;
- (void)getAppIcon:(id)arg1 appID:(id)arg2;
- (void)checkAndUpdateAppIcon;
- (void)setServiceAppNotShowNew:(id)arg1;
- (id)GetPathOfServiceAppIcon:(id)arg1 IconUrl:(id)arg2;
- (void)saveServiceAppsList;
- (void)loadServiceAppsListFromFile;
- (id)getAppInfoDataRootDir;
- (_Bool)updateServiceAppsListWithOffset:(unsigned int)arg1;
- (_Bool)updateServiceAppsList;
- (id)getAttachmentViewServiceAppsList:(id)arg1;
- (id)getServiceAppsList:(id)arg1;
- (_Bool)IsServiceAppDataValid:(id)arg1;
- (_Bool)NativeUrlIsValid:(id)arg1;
- (void)InitValidJumpUrl;
- (void)dealloc;
- (id)init;

@end


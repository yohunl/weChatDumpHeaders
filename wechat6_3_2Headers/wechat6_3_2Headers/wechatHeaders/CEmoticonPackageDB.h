//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMDB;

@interface CEmoticonPackageDB : NSObject
{
    CMMDB *m_db;
}

- (void).cxx_destruct;
- (_Bool)addPackageList:(id)arg1;
- (_Bool)removeItemsNotInIDList:(id)arg1;
- (_Bool)clearAllData;
- (_Bool)isEmoticonPackageDownLoaded:(id)arg1;
- (_Bool)isEmoticonPackagePurchased:(id)arg1;
- (_Bool)isEmoticonPackageExist:(id)arg1;
- (_Bool)deleteEmoticonPackageByPid:(id)arg1;
- (id)getEmoticonPackageList;
- (id)getEmoticonPackageByPid:(id)arg1;
- (_Bool)update:(id)arg1 downloadStatus:(unsigned int)arg2;
- (_Bool)update:(id)arg1 payStatus:(unsigned int)arg2;
- (_Bool)addEmoticonPackage:(id)arg1 name:(id)arg2 iconUrl:(id)arg3 payStatus:(unsigned int)arg4 downloadStatus:(unsigned int)arg5;
- (_Bool)addEmoticonPackage:(id)arg1 name:(id)arg2 payStatus:(unsigned int)arg3 downloadStatus:(unsigned int)arg4;
- (_Bool)CreateEmoticonPackageTable;
- (_Bool)IsEmoticonPackageTableExist;
- (void)HardcodePackage;
- (void)tryInitHardcodeEmoticonPackages;
- (id)initWithDB:(id)arg1;

@end


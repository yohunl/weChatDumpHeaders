//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMHeadImageMgr.h"

@interface MMHeadImageMgr (Utility)
+ (id)tryGenHQImage:(id)arg1;
+ (id)resizeImage:(id)arg1;
+ (_Bool)isKFName:(id)arg1;
+ (_Bool)isGoogleName:(id)arg1;
+ (_Bool)isMobileName:(id)arg1;
+ (id)amendHeadImgIfNeed:(id)arg1;
+ (id)getPluginImage:(id)arg1;
+ (id)getDefaultHeadImage:(id)arg1;
+ (id)getRoundImgDirectoryPath;
+ (id)getOldHeadImgPathForLoginUsr:(id)arg1 isHD:(_Bool)arg2;
+ (id)getHeadImgRootDirectoryPath;
+ (id)getHeadImgDirectoryPath:(unsigned char)arg1;
+ (id)getHeadImgPathForNewVersionForLoadImage:(id)arg1 forCategory:(unsigned char)arg2 isHD:(_Bool)arg3 forLogin:(_Bool)arg4;
+ (id)getHeadImgPathForNewVersionForLoadImage:(id)arg1 forCategory:(unsigned char)arg2 isHD:(_Bool)arg3;
+ (id)getHeadImgPathForNewVersion:(id)arg1 forCategory:(unsigned char)arg2 isHD:(_Bool)arg3;
+ (id)getHeadImgPathForOldVersion:(id)arg1 isHD:(_Bool)arg2;
@end


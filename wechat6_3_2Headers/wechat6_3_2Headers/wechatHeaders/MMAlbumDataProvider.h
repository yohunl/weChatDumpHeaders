//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface MMAlbumDataProvider : MMObject
{
}

+ (id)getAlbumSortEndDateFromAlbumType:(long long)arg1 ForSubType:(long long)arg2 shouldIncludeVideo:(_Bool)arg3 isOnlyShowVideo:(_Bool)arg4;
+ (id)getAlbumFromAlbumType:(long long)arg1 ForSubType:(long long)arg2 shouldIncludeVideo:(_Bool)arg3 isOnlyShowVideo:(_Bool)arg4;
+ (void)AllMMAlbumsForPHFrameworkWith:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2 shouldIncludeVideo:(_Bool)arg3 isOnlyShowVideo:(_Bool)arg4;
+ (void)AllMMAlbumsForAssetLibrbaryWith:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2 shouldIncludeVideo:(_Bool)arg3 isOnlyShowVideo:(_Bool)arg4;
+ (_Bool)isAuthorize;
+ (void)AllMMAlbumsWith:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2 shouldIncludeVideo:(_Bool)arg3 isOnlyShowVideo:(_Bool)arg4;

@end

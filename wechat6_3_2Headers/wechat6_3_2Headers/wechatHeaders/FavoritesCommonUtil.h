//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FavoritesCommonUtil : NSObject
{
}

+ (_Bool)SelectCanvasFavItem:(id)arg1 FromViewController:(id)arg2 thumbView:(id)arg3;
+ (void)selectFileData:(id)arg1 FromViewController:(id)arg2;
+ (void)selectLocationData:(id)arg1 FromViewController:(id)arg2 Delegate:(id)arg3;
+ (void)selectVideoData:(id)arg1 FromViewController:(id)arg2 Delegate:(id)arg3;
+ (void)SelectFavDataItemWrap:(id)arg1 FromViewController:(id)arg2 Delegate:(id)arg3;
+ (id)genNodeContentView:(id)arg1;
+ (_Bool)SelectFavItem:(id)arg1 FromViewController:(id)arg2 Delegate:(id)arg3;
+ (void)GetFavForwardTitle:(id *)arg1 Desc:(id *)arg2 FavItem:(id)arg3;
+ (_Bool)IsUrlFavForwardThumb:(id *)arg1 DefaultThumb:(id *)arg2 FavItem:(id)arg3;
+ (id)getCellViewForItemData:(id)arg1 inItem:(id)arg2;
+ (id)getCellViewForItem:(id)arg1;
+ (id)getFavCellComponentForItem:(id)arg1;
+ (double)getHeightForItem:(id)arg1;
+ (void)getFavDataWrapFromFavItem:(id)arg1 Type:(unsigned int)arg2 To:(id)arg3;
+ (void)sortArrFavData:(id)arg1;

@end


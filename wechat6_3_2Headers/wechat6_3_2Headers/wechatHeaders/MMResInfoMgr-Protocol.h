//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMResDownloadInfo, MMResInfo, NSArray, WCDBContext;

@protocol MMResInfoMgr <NSObject>

@optional
- (_Bool)updateResDownloadInfo:(MMResDownloadInfo *)arg1;
- (MMResDownloadInfo *)getResDownloadInfo:(unsigned int)arg1 WithSubtype:(unsigned int)arg2 WithEid:(unsigned int)arg3;
- (MMResDownloadInfo *)getResDownloadInfo:(unsigned int)arg1 WithSubtype:(unsigned int)arg2;
- (NSArray *)getABTestResDownloadInfo:(unsigned int)arg1;
- (NSArray *)getResDownloadInfo:(unsigned int)arg1;
- (_Bool)insertNewResDownloadInfo:(MMResDownloadInfo *)arg1;
- (_Bool)deleteResDownloadInfo:(unsigned int)arg1 WithSubtype:(unsigned int)arg2 WithEid:(unsigned int)arg3;
- (_Bool)deleteTestResDownloadInfo:(unsigned int)arg1 WithSubtype:(unsigned int)arg2;
- (_Bool)deleteResDownloadInfo:(unsigned int)arg1 WithSubtype:(unsigned int)arg2;
- (_Bool)deleteResDownloadInfo:(unsigned int)arg1;
- (_Bool)updateResInfo:(MMResInfo *)arg1;
- (_Bool)deleteResInfo:(unsigned int)arg1 WithSubResType:(unsigned int)arg2 WithEid:(unsigned int)arg3;
- (_Bool)deleteTestResInfo:(unsigned int)arg1 WithSubResType:(unsigned int)arg2;
- (_Bool)deleteResInfo:(unsigned int)arg1 WithSubResType:(unsigned int)arg2;
- (_Bool)deleteResInfo:(unsigned int)arg1;
- (MMResInfo *)getResInfo:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2 WithEid:(unsigned int)arg3;
- (NSArray *)getTestResInfo:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2;
- (MMResInfo *)getResInfo:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2;
- (NSArray *)getResInfo:(unsigned int)arg1;
- (WCDBContext *)DBContext;
- (_Bool)insertNewResInfo:(MMResInfo *)arg1;
@end


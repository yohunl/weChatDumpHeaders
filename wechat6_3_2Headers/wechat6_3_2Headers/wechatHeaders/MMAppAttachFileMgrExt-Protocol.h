//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CMessageWrap, CheckBigFileDownloadResponse, CheckBigFileUploadResponse, NSString;

@protocol MMAppAttachFileMgrExt <NSObject>

@optional
- (void)onCheckBigFileDownloadResult:(_Bool)arg1 resp:(CheckBigFileDownloadResponse *)arg2 wrapMsg:(CMessageWrap *)arg3 errMsg:(NSString *)arg4;
- (void)onCheckBigFileUploadResult:(_Bool)arg1 resp:(CheckBigFileUploadResponse *)arg2 wrapMsg:(CMessageWrap *)arg3 errMsg:(NSString *)arg4;
- (void)onCheckAppAttachRet:(NSString *)arg1 isExistInSvr:(_Bool)arg2 crc32:(unsigned int)arg3;
@end


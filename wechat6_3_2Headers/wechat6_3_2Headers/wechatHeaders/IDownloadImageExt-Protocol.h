//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CMessageWrap, NSString;

@protocol IDownloadImageExt <NSObject>

@optional
- (void)OnDownloadImageStopByChatName:(NSString *)arg1 FromDelMsg:(_Bool)arg2;
- (void)OnDownloadImagePartNew:(CMessageWrap *)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned int)arg3 TryShow:(_Bool)arg4;
- (void)OnDownloadImagePart:(CMessageWrap *)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned int)arg3;
- (void)OnDownloadImageOk:(CMessageWrap *)arg1;
- (void)OnDownloadImageFail:(CMessageWrap *)arg1;
- (void)OnDownloadImageExpired:(CMessageWrap *)arg1;
@end

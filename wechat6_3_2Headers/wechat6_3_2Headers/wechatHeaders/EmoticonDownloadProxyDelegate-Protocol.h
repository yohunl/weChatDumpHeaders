//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString;

@protocol EmoticonDownloadProxyDelegate <NSObject>
- (void)onEmoticonDownloadMd5Failed:(NSString *)arg1 withUserInfo:(NSObject *)arg2;
- (void)onEmoticonDownloadMd5Ok:(NSString *)arg1 AndFilePath:(NSString *)arg2 withUserInfo:(NSObject *)arg3;
- (void)onEmoticonDownloadMd5Failed:(NSString *)arg1;
- (void)onEmoticonDownloadMd5Ok:(NSString *)arg1 AndFilePath:(NSString *)arg2;
@end

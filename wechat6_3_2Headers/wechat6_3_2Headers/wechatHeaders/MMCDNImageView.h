//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIImageView.h"

#import "ICdnComMgrExt-Protocol.h"

@class NSString, UIImage;

@interface MMCDNImageView : MMUIImageView <ICdnComMgrExt>
{
    UIImage *_defaultImage;
    NSString *_localSrcPath;
    NSString *_cdnUrl;
    NSString *_aesKey;
    unsigned int _datasize;
    NSString *_clientID;
    unsigned int _fileType;
    _Bool _isCompressImage;
    _Bool _isloaded;
    _Bool _autoDownloadNoWifi;
    _Bool _isClipImage;
    _Bool _isFromC2C;
    _Bool _isNewFavList;
}

@property(nonatomic) _Bool isNewFavList; // @synthesize isNewFavList=_isNewFavList;
@property(nonatomic) _Bool isFromC2C; // @synthesize isFromC2C=_isFromC2C;
@property(nonatomic) _Bool isClipImage; // @synthesize isClipImage=_isClipImage;
@property(nonatomic) _Bool autoDownloadNoWifi; // @synthesize autoDownloadNoWifi=_autoDownloadNoWifi;
@property(nonatomic) _Bool isCompressImage; // @synthesize isCompressImage=_isCompressImage;
@property(nonatomic) unsigned int fileType; // @synthesize fileType=_fileType;
@property(nonatomic) unsigned int dataSize; // @synthesize dataSize=_datasize;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl=_cdnUrl;
@property(retain, nonatomic) NSString *localSrcPath; // @synthesize localSrcPath=_localSrcPath;
- (void).cxx_destruct;
- (void)dealloc;
- (void)OnCdnDownload:(id)arg1;
- (void)stopLoadingImage;
- (_Bool)startLoadingImage;
- (void)loadingImageWithGCD;
- (id)clipImage:(id)arg1;
- (id)compressImage:(id)arg1;
- (void)setDefaultImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


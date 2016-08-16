//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary;
@protocol HeadImgDownloaderDelegate;

@interface HeadImgBaseDownloader : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray *m_aryRequest;
    NSMutableDictionary *m_mapLastGetTime;
    _Bool m_bCommiting;
    NSMutableArray *m_aryGetting;
    unsigned int m_uiDownloadCount;
    _Bool m_bGetting;
    id <HeadImgDownloaderDelegate> m_downloaderDelegate;
}

@property(nonatomic) __weak id <HeadImgDownloaderDelegate> downloaderDelegate; // @synthesize downloaderDelegate=m_downloaderDelegate;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)checkIfForbidden:(id)arg1;
- (void)commitRequestQueue;
- (void)removeUsrFromLastFailureList:(id)arg1;
- (void)addToLastMap:(id)arg1;
- (_Bool)cancelRequest:(id)arg1;
- (void)createNetworkRequest:(id)arg1;
- (void)sendRequest;
- (_Bool)addRequest:(id)arg1 url:(id)arg2 forCategory:(unsigned char)arg3;
- (void)dealloc;
- (id)init;

@end


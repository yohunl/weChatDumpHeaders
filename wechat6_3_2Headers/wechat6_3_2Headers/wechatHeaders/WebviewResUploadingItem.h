//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString, WebviewLocalResItem;

@interface WebviewResUploadingItem : MMObject
{
    WebviewLocalResItem *_resItem;
    long long _offset;
    long long _fileSize;
    NSString *_svrMediaId;
}

@property(retain, nonatomic) NSString *svrMediaId; // @synthesize svrMediaId=_svrMediaId;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) WebviewLocalResItem *resItem; // @synthesize resItem=_resItem;
- (void).cxx_destruct;

@end


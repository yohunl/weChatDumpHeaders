//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CdnTimelineMediaInfo : NSObject
{
    NSString *m_nsClientMsgID;
    NSString *m_nsFilePath;
    _Bool m_bSinglePic;
    _Bool m_bUseWebp;
    _Bool m_bUseVCodec;
    _Bool m_bUseWxpc;
}

@property(nonatomic) _Bool m_bUseWxpc; // @synthesize m_bUseWxpc;
@property(nonatomic) _Bool m_bUseVCodec; // @synthesize m_bUseVCodec;
@property(nonatomic) _Bool m_bUseWebp; // @synthesize m_bUseWebp;
@property(nonatomic) _Bool m_bSinglePic; // @synthesize m_bSinglePic;
@property(retain, nonatomic) NSString *m_nsFilePath; // @synthesize m_nsFilePath;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;
- (void).cxx_destruct;

@end


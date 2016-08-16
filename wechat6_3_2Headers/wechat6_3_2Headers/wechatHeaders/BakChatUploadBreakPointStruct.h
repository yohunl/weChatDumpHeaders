//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class BakChatUploadPackageHelperStruct, NSDate, NSMutableArray;

@interface BakChatUploadBreakPointStruct : NSObject <NSCoding>
{
    BakChatUploadPackageHelperStruct *m_bakChatUploadpackageHelperStruct;
    unsigned int totalCount;
    unsigned int count;
    NSDate *startDate;
    NSMutableArray *m_packageArray;
    NSMutableArray *m_uploadingPackageArray;
    int m_bakChatUploadStatus;
}

+ (_Bool)removeUploadBreakPointStruct;
+ (id)recoverBreakPointStruct;
+ (_Bool)saveUploadBreakPointStruct:(id)arg1;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate;
@property(retain, nonatomic) NSMutableArray *m_uploadingPackageArray; // @synthesize m_uploadingPackageArray;
@property(retain, nonatomic) NSMutableArray *m_packageArray; // @synthesize m_packageArray;
@property(nonatomic) int m_bakChatUploadStatus; // @synthesize m_bakChatUploadStatus;
@property(retain, nonatomic) BakChatUploadPackageHelperStruct *m_bakChatUploadpackageHelperStruct; // @synthesize m_bakChatUploadpackageHelperStruct;
@property(nonatomic) unsigned int count; // @synthesize count;
@property(nonatomic) unsigned int totalCount; // @synthesize totalCount;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)clear;
- (void)dealloc;
- (id)init;

@end


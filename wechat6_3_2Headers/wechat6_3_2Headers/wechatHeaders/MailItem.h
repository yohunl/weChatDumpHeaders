//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMail, NSArray;

@interface MailItem : NSObject
{
    unsigned int mailID;
    unsigned int realSize;
    CMail *mailBody;
    NSArray *uploadImageList;
    NSArray *attachInfoList;
}

@property(retain, nonatomic) NSArray *attachInfoList; // @synthesize attachInfoList;
@property(retain, nonatomic) NSArray *uploadImageList; // @synthesize uploadImageList;
@property(retain, nonatomic) CMail *mailBody; // @synthesize mailBody;
@property(nonatomic) unsigned int realSize; // @synthesize realSize;
@property(nonatomic) unsigned int mailID; // @synthesize mailID;
- (void).cxx_destruct;

@end


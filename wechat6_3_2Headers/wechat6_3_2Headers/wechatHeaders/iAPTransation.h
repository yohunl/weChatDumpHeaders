//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface iAPTransation : NSObject
{
    unsigned int iRequestType;
    unsigned int iBizType;
    NSString *nsProductID;
    NSString *nsTransationID;
    NSString *nsSerialID;
}

@property(nonatomic) unsigned int iBizType; // @synthesize iBizType;
@property(nonatomic) unsigned int iRequestType; // @synthesize iRequestType;
@property(retain, nonatomic) NSString *nsSerialID; // @synthesize nsSerialID;
@property(retain, nonatomic) NSString *nsTransationID; // @synthesize nsTransationID;
@property(retain, nonatomic) NSString *nsProductID; // @synthesize nsProductID;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end


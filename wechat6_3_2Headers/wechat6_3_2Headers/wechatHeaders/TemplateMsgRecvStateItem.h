//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TemplateMsgRecvStateItem : NSObject
{
    NSString *_templateId;
    unsigned int _recvState;
    NSString *_templateTitle;
}

@property(retain, nonatomic) NSString *templateTitle; // @synthesize templateTitle=_templateTitle;
@property(nonatomic) unsigned int recvState; // @synthesize recvState=_recvState;
@property(retain, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
- (void).cxx_destruct;

@end


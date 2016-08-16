//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GameCenterBaseMsg.h"

@class NSString;

@interface GameCenterGroupMsg : GameCenterBaseMsg
{
    int _subType;
    NSString *_topicTitle;
    NSString *_reply;
    NSString *_commentToReply;
    NSString *_topicUrl;
    NSString *_sourceUrl;
    NSString *_groupName;
    NSString *_groupUrl;
}

@property(retain, nonatomic) NSString *groupUrl; // @synthesize groupUrl=_groupUrl;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl=_sourceUrl;
@property(retain, nonatomic) NSString *topicUrl; // @synthesize topicUrl=_topicUrl;
@property(retain, nonatomic) NSString *commentToReply; // @synthesize commentToReply=_commentToReply;
@property(retain, nonatomic) NSString *reply; // @synthesize reply=_reply;
@property(retain, nonatomic) NSString *topicTitle; // @synthesize topicTitle=_topicTitle;
@property(nonatomic) int subType; // @synthesize subType=_subType;
- (void).cxx_destruct;
- (id)getMsgCenterContent;
- (id)initWithXmlNode:(struct XmlReaderNode_t *)arg1;

@end


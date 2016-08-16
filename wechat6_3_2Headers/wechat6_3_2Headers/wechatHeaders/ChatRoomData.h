//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface ChatRoomData : NSObject
{
    NSMutableDictionary *m_dicData;
    unsigned int m_maxMemberCount;
    unsigned int m_chatRoomVersion;
    _Bool isSimplify;
    NSRecursiveLock *_lock;
}

@property(nonatomic) _Bool isSimplify; // @synthesize isSimplify;
@property(nonatomic) unsigned int chatRoomVersion; // @synthesize chatRoomVersion=m_chatRoomVersion;
@property(nonatomic) unsigned int maxMemberCount; // @synthesize maxMemberCount=m_maxMemberCount;
- (void).cxx_destruct;
- (void)updateDicData:(struct XmlReaderNode_t *)arg1;
- (unsigned int)getXmlNodeIntValue:(struct XmlReaderNode_t *)arg1 forName:(const char *)arg2;
- (_Bool)isUndeliverCountOpen;
- (void)setUndeliverCountOpen:(_Bool)arg1;
- (_Bool)isShowDislayName;
- (void)setShowDislayName:(_Bool)arg1;
- (id)getDislayNameForUserName:(id)arg1;
- (void)setDislayName:(id)arg1 forUserName:(id)arg2;
- (void)updateChatRoomData:(struct XmlReaderNode_t *)arg1;
- (id)getDataDescription;
- (id)getDataXml;
- (void)parseData:(id)arg1;
- (void)setDataForUserName:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)getDataForUserName:(id)arg1 key:(id)arg2;
- (void)mergeOldDetail:(id)arg1;
- (void)merge:(id)arg1;
- (id)initWithNewChatRoomData:(id)arg1;
- (id)initWithChatRoomData:(id)arg1;
- (id)init;

@end


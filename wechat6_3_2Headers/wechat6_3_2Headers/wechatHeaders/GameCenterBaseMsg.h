//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GameCenterMsgActionInfo, GameCenterMsgAppInfo, GameCenterMsgBubbleInfo, GameCenterMsgCenterContent, GameCenterMsgControlInfo, GameCenterNotifyContent, NSArray, NSString;

@interface GameCenterBaseMsg : NSObject
{
    _Bool _wifiFlag;
    unsigned int _localId;
    int _type;
    int _badgeType;
    int _contentMoreInfoType;
    NSString *_svrMsgId;
    NSString *_noticeId;
    GameCenterMsgControlInfo *_controlInfo;
    NSString *_formatContent;
    NSString *_url;
    NSArray *_userInfoList;
    GameCenterMsgAppInfo *_appInfo;
    NSString *_entranceIconUrl;
    NSString *_entranceText;
    GameCenterMsgBubbleInfo *_bubbleInfo;
    NSString *_mergeId;
    GameCenterMsgActionInfo *_actionInfo;
    NSString *_originMsg;
    GameCenterNotifyContent *_notifyContent;
    GameCenterMsgCenterContent *_msgCenterContent;
}

+ (id)parseFromDbItem:(id)arg1;
+ (id)parseFromMsgWrap:(id)arg1;
+ (id)msgWithType:(unsigned int)arg1 xmlNode:(struct XmlReaderNode_t *)arg2;
+ (struct XmlReaderNode_t *)getRootNode:(id)arg1;
@property(retain, nonatomic) GameCenterMsgCenterContent *msgCenterContent; // @synthesize msgCenterContent=_msgCenterContent;
@property(retain, nonatomic) GameCenterNotifyContent *notifyContent; // @synthesize notifyContent=_notifyContent;
@property(retain, nonatomic) NSString *originMsg; // @synthesize originMsg=_originMsg;
@property(retain, nonatomic) GameCenterMsgActionInfo *actionInfo; // @synthesize actionInfo=_actionInfo;
@property(nonatomic) int contentMoreInfoType; // @synthesize contentMoreInfoType=_contentMoreInfoType;
@property(retain, nonatomic) NSString *mergeId; // @synthesize mergeId=_mergeId;
@property(retain, nonatomic) GameCenterMsgBubbleInfo *bubbleInfo; // @synthesize bubbleInfo=_bubbleInfo;
@property(retain, nonatomic) NSString *entranceText; // @synthesize entranceText=_entranceText;
@property(retain, nonatomic) NSString *entranceIconUrl; // @synthesize entranceIconUrl=_entranceIconUrl;
@property(nonatomic) int badgeType; // @synthesize badgeType=_badgeType;
@property(nonatomic) _Bool wifiFlag; // @synthesize wifiFlag=_wifiFlag;
@property(retain, nonatomic) GameCenterMsgAppInfo *appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) NSArray *userInfoList; // @synthesize userInfoList=_userInfoList;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *formatContent; // @synthesize formatContent=_formatContent;
@property(retain, nonatomic) GameCenterMsgControlInfo *controlInfo; // @synthesize controlInfo=_controlInfo;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *noticeId; // @synthesize noticeId=_noticeId;
@property(retain, nonatomic) NSString *svrMsgId; // @synthesize svrMsgId=_svrMsgId;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
- (void).cxx_destruct;
- (_Bool)isExpired;
- (id)getMsgCenterContent;
- (id)getNotifyContent;
- (id)initWithXmlNode:(struct XmlReaderNode_t *)arg1;

@end


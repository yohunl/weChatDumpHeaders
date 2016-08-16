//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GameCenterMsgControlInfo : NSObject
{
    _Bool _notInMsgCenter;
    int _controlFlag;
    int _filterFlag;
    unsigned int _createTime;
    unsigned int _expiredTime;
}

+ (id)parseFromXml:(struct XmlReaderNode_t *)arg1;
@property(nonatomic) _Bool notInMsgCenter; // @synthesize notInMsgCenter=_notInMsgCenter;
@property(nonatomic) unsigned int expiredTime; // @synthesize expiredTime=_expiredTime;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) int filterFlag; // @synthesize filterFlag=_filterFlag;
@property(nonatomic) int controlFlag; // @synthesize controlFlag=_controlFlag;
- (_Bool)canClickMsgCenterCellSource;
- (_Bool)shouldShowMsgCenterCellSource;
- (_Bool)shouldShowFindFriendEntry;

@end


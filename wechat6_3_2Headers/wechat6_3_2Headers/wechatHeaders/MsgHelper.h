//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MsgHelper : NSObject
{
}

+ (_Bool)IsShowPush:(_Bool)arg1 Des:(unsigned int)arg2 Msg:(id)arg3;
+ (_Bool)AddMsg:(id)arg1 EventInfo:(id)arg2 ChatName:(id)arg3 Des:(unsigned int)arg4 DBRet:(_Bool *)arg5 DB:(id)arg6 Lock:(id)arg7 DuplicateList:(id)arg8 GetChangeDisplay:(_Bool *)arg9 InsertNew:(_Bool *)arg10;
+ (void)ProcessOnAddNewMsg:(id)arg1 ChatName:(id)arg2 Lock:(id)arg3;
+ (_Bool)AddMessageToDB:(id)arg1 MsgWrap:(id)arg2 Des:(unsigned int)arg3 DB:(id)arg4 Lock:(id)arg5 GetChangeDisplay:(_Bool *)arg6 InsertNew:(_Bool *)arg7;
+ (_Bool)AddMessageToChatExt:(id)arg1 MsgWrap:(id)arg2 DB:(id)arg3;
+ (void)ClearDownloadData:(id)arg1 ChatName:(id)arg2;
+ (void)HandleThumb:(id)arg1 Message:(id)arg2 Lock:(id)arg3;
+ (_Bool)IsNotifyOnNotAddDB:(id)arg1 ChatName:(id)arg2;
+ (_Bool)IsNotifyOnAddMsg:(id)arg1 ChatName:(id)arg2;
+ (_Bool)CanNotAddToDB:(id)arg1 ChatName:(id)arg2;
+ (_Bool)InternalCanNotAddDB:(id)arg1 ChatName:(id)arg2;
+ (id)GetChatName:(id)arg1 Des:(unsigned int *)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface BackupChatRecoverPacketInfo : NSObject
{
    NSMutableArray *m_arrMessagePackagePaths;
    NSMutableArray *m_arrMediaFileName;
}

@property(retain, nonatomic) NSMutableArray *m_arrMediaFileName; // @synthesize m_arrMediaFileName;
@property(retain, nonatomic) NSMutableArray *m_arrMessagePackagePaths; // @synthesize m_arrMessagePackagePaths;
- (void).cxx_destruct;
- (id)newRecoverChatMsgListAtIndex:(unsigned long long)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface RightTopMenuItemBtnData : MMObject
{
    NSString *m_nsID;
    NSString *m_nsTitleID;
    NSString *m_nsImageName;
    unsigned long long m_actionType;
    NSString *m_nsActionName;
    NSString *m_nsPluginUserName;
}

+ (id)genItemWithID:(id)arg1 title:(id)arg2 imageName:(id)arg3 actionType:(unsigned long long)arg4 actionName:(id)arg5 pluginUserName:(id)arg6;
@property(retain, nonatomic) NSString *m_nsPluginUserName; // @synthesize m_nsPluginUserName;
@property(retain, nonatomic) NSString *m_nsActionName; // @synthesize m_nsActionName;
@property(nonatomic) unsigned long long m_actionType; // @synthesize m_actionType;
@property(retain, nonatomic) NSString *m_nsImageName; // @synthesize m_nsImageName;
@property(retain, nonatomic) NSString *m_nsTitleID; // @synthesize m_nsTitleID;
@property(retain, nonatomic) NSString *m_nsID; // @synthesize m_nsID;
- (void).cxx_destruct;
- (id)init;

@end


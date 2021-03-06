//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString, UIImage;

@interface GameCenterUserActionItem : MMObject
{
    _Bool _showRedDot;
    _Bool _hideBottomBorder;
    int _redDotNum;
    UIImage *_icon;
    NSString *_iconUrl;
    NSString *_title;
    long long _userActionType;
}

@property(nonatomic) long long userActionType; // @synthesize userActionType=_userActionType;
@property(nonatomic) int redDotNum; // @synthesize redDotNum=_redDotNum;
@property(nonatomic) _Bool hideBottomBorder; // @synthesize hideBottomBorder=_hideBottomBorder;
@property(nonatomic) _Bool showRedDot; // @synthesize showRedDot=_showRedDot;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MMAVPlayerItem;

@interface MMAVPlayerItemWrap : NSObject
{
    NSObject<MMAVPlayerItem> *item;
    NSString *path;
    int status;
    int targetStatus;
    _Bool isInScreen;
    _Bool _shouldSkipStackOrResume;
}

@property(nonatomic) _Bool shouldSkipStackOrResume; // @synthesize shouldSkipStackOrResume=_shouldSkipStackOrResume;
@property(nonatomic) int targetStatus; // @synthesize targetStatus;
@property(nonatomic) int status; // @synthesize status;
@property(nonatomic) _Bool isInScreen; // @synthesize isInScreen;
@property(retain, nonatomic) NSString *path; // @synthesize path;
@property(retain, nonatomic) NSObject<MMAVPlayerItem> *item; // @synthesize item;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end


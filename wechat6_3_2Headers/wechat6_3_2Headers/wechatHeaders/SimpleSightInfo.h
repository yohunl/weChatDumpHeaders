//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FavStreamVideoItem, NSString;

@interface SimpleSightInfo : NSObject
{
    int _duration;
    NSString *_dataPath;
    NSString *_thumbPath;
    FavStreamVideoItem *_streamVideoItem;
    NSString *_statExtStr;
}

@property(retain, nonatomic) NSString *statExtStr; // @synthesize statExtStr=_statExtStr;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(retain, nonatomic) FavStreamVideoItem *streamVideoItem; // @synthesize streamVideoItem=_streamVideoItem;
@property(retain, nonatomic) NSString *thumbPath; // @synthesize thumbPath=_thumbPath;
@property(retain, nonatomic) NSString *dataPath; // @synthesize dataPath=_dataPath;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MMMusicLyricResolver : NSObject
{
    NSString *_lyrics;
    NSMutableArray *_lyricsList;
    NSMutableArray *_timeList;
    _Bool _isLyricListContainsEmptyStr;
}

@property(retain, nonatomic) NSMutableArray *timeList; // @synthesize timeList=_timeList;
@property(retain, nonatomic) NSMutableArray *lyricsList; // @synthesize lyricsList=_lyricsList;
@property(retain, nonatomic) NSString *lyrics; // @synthesize lyrics=_lyrics;
- (void).cxx_destruct;
- (void)dealloc;
- (double)getDuaration;
- (int)getCurrentIndexWithTime:(float)arg1;
- (float)time_StringToFloat:(id)arg1;
- (_Bool)resolveLyrics:(id)arg1;
- (id)init;

@end


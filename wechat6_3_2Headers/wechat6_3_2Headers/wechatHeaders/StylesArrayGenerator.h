//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BasePatternGenerator.h"

@class NSMutableArray;

@interface StylesArrayGenerator : BasePatternGenerator
{
    struct _NSParserPosition _stPosition;
    NSMutableArray *_arrStyles;
}

@property(nonatomic) struct _NSParserPosition stPosition; // @synthesize stPosition=_stPosition;
- (void).cxx_destruct;
- (id)patternForContent:(id)arg1 range:(struct _NSRange)arg2 parser:(id)arg3;
- (void)clearData;
- (id)getStyles;
- (id)init;

@end


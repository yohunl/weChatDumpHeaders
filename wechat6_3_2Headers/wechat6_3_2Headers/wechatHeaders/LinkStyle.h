//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TextStyle.h"

@class NSString, UIColor;

@interface LinkStyle : TextStyle
{
    _Bool _bHighlighted;
    UIColor *_oHighlightedColor;
    NSString *_nsUrl;
    NSString *_nsSourceUrl;
    unsigned long long _eDataDectorType;
    _Bool _bDrawsUnderLine;
    _Bool _bBackgroundEnabled;
}

@property(nonatomic) _Bool bBackgroundEnabled; // @synthesize bBackgroundEnabled=_bBackgroundEnabled;
@property(nonatomic) _Bool bDrawsUnderLine; // @synthesize bDrawsUnderLine=_bDrawsUnderLine;
@property(nonatomic) unsigned long long eDataDectorType; // @synthesize eDataDectorType=_eDataDectorType;
@property(retain, nonatomic) NSString *nsSourceUrl; // @synthesize nsSourceUrl=_nsSourceUrl;
@property(retain, nonatomic) NSString *nsUrl; // @synthesize nsUrl=_nsUrl;
@property(retain, nonatomic) UIColor *oHighlightedColor; // @synthesize oHighlightedColor=_oHighlightedColor;
@property(nonatomic) _Bool bHighlighted; // @synthesize bHighlighted=_bHighlighted;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)init;

@end


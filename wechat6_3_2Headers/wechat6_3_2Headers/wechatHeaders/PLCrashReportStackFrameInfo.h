//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PLCrashReportSymbolInfo;

@interface PLCrashReportStackFrameInfo : NSObject
{
    unsigned long long _instructionPointer;
    PLCrashReportSymbolInfo *_symbolInfo;
}

@property(readonly, nonatomic) PLCrashReportSymbolInfo *symbolInfo; // @synthesize symbolInfo=_symbolInfo;
@property(readonly, nonatomic) unsigned long long instructionPointer; // @synthesize instructionPointer=_instructionPointer;
- (void)dealloc;
- (id)initWithInstructionPointer:(unsigned long long)arg1 symbolInfo:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCssParserDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MMRuleSetList : NSObject <MCssParserDelegate>
{
    NSMutableDictionary *m_ruleSets;
    _Bool m_isAlreadyParsed;
    _Bool m_isParseOK;
    _Bool m_isParseError;
    NSString *m_styleSheetFilePath;
}

@property(retain, nonatomic) NSMutableDictionary *ruleSets; // @synthesize ruleSets=m_ruleSets;
@property(retain, nonatomic) NSString *styleSheetFilePath; // @synthesize styleSheetFilePath=m_styleSheetFilePath;
- (void).cxx_destruct;
- (void)clearAllRuleSets;
- (_Bool)loadRuleSetsFromPath:(id)arg1;
- (_Bool)startParse;
- (void)onCssParseEnd;
- (void)onCssParseStart;
- (id)onNextCssFile;
- (void)onParseErrorInFile:(id)arg1 onLineNumber:(id)arg2 withText:(id)arg3 withErrorMessage:(id)arg4;
- (void)onReceiveCssRulesetWithSelectors:(id)arg1 withDeclarations:(id)arg2;
- (void)onScriptFunctionWithSelectors:(id)arg1 withStatements:(id)arg2;
- (id)init;
- (void)addOrMergeRuleSet:(id)arg1 forSelector:(id)arg2;
- (id)getValueOfProperty:(id)arg1 forSeletor:(id)arg2;
- (id)getRuleSetForSeletor:(id)arg1;
- (void)removeRuleSetForKey:(id)arg1;
- (void)setRuleSet:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


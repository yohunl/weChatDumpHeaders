//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TokenizerUtil : NSObject
{
}

+ (id)getUnicodeNormalizationForms:(id)arg1;
+ (id)getOneOrBinaryToken:(id)arg1;
+ (_Bool)isSpecialChar:(unsigned short)arg1;
+ (_Bool)isEnglishLetter:(unsigned short)arg1;
+ (id)getDictPath;
+ (id)getTCRulePath;
+ (id)getTCDictPath;
+ (id)getSCRulePath;
+ (id)getSCDictPath;
+ (id)getResourceFilePath:(id)arg1;

@end


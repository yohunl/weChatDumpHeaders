//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface EmotionDesignerSharedItem : NSObject
{
    unsigned int designerUin;
    NSString *oldRedirectUrl;
    NSString *designerName;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *designerName; // @synthesize designerName;
@property(retain, nonatomic) NSString *oldRedirectUrl; // @synthesize oldRedirectUrl;
@property(nonatomic) unsigned int designerUin; // @synthesize designerUin;
- (void).cxx_destruct;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMExtensionObject : NSObject
{
    void *m_Obj;
    _Bool m_deleteMark;
}

@property(nonatomic) _Bool m_deleteMark; // @synthesize m_deleteMark;
- (id)description;
- (id)initWithObject:(void *)arg1;
- (_Bool)isObjectEqual:(void *)arg1;
- (void *)getObject;
- (void)setObject:(void *)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface NewQQMailQueueHelper : NSObject
{
    NSMutableArray *m_newQQMailQueue;
    _Bool m_bChecked;
}

- (void).cxx_destruct;
- (void)saveNewQQMailQueueCache;
- (_Bool)loadNewQQMailQueueCache;
- (void)checkQueue;
- (void)popQueue:(unsigned int)arg1;
- (void)enQueue:(id)arg1;
- (void)setChecked:(_Bool)arg1;
- (id)init;

@end


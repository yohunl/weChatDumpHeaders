//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (Swizzle)
+ (void)swizzleReplaceObjectAtIndexWithObject:(Class)arg1;
+ (void)swizzleRemoveObjectAtIndex:(Class)arg1;
+ (void)swizzleInsertObjectAtIndex:(Class)arg1;
+ (void)swizzleAddObject:(Class)arg1;
+ (void)swizzleObjectAtIndex:(Class)arg1;
+ (void)load;
- (void)mmReplaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)mmRemoveObjectAtIndex:(unsigned long long)arg1;
- (void)mmInsertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)mmAddObject:(id)arg1;
- (id)mmObjectAtIndex:(unsigned long long)arg1;
@end


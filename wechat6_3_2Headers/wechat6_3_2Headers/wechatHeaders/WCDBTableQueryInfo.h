//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCDBTableQueryInfo : NSObject
{
    vector_24c76cbd m_vecProperty;
    basic_string_a490aa4c m_tableName;
    _Bool m_hasFileProperty;
    Class m_tableClass;
}

@property(nonatomic) _Bool m_hasFileProperty; // @synthesize m_hasFileProperty;
@property(nonatomic) Class m_tableClass; // @synthesize m_tableClass;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const basic_string_a490aa4c *)tableName;
- (const vector_24c76cbd *)selectProperty;
- (void)setSelectProperty:(const vector_24c76cbd *)arg1;
- (void)setTableInfo:(id)arg1;

@end


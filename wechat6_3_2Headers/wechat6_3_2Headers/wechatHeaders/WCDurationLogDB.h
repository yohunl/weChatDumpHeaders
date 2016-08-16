//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString, WCDataBase, WCDataBaseTable;

@interface WCDurationLogDB : MMObject
{
    NSString *_filePath;
    WCDataBase *_dataBase;
    WCDataBaseTable *_table;
}

@property(retain, nonatomic) WCDataBaseTable *table; // @synthesize table=_table;
@property(retain, nonatomic) WCDataBase *dataBase; // @synthesize dataBase=_dataBase;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (void)close;
- (_Bool)deleteAllItems;
- (id)getAllItems;
- (_Bool)insertItem:(id)arg1;

@end


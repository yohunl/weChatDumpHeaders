//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FTSDB.h"

@interface FTSDB (FavTable)
- (id)queryTextInFavTable:(id)arg1 limit:(unsigned int)arg2 searchAll:(id *)arg3;
- (id)queryTextInFavTable:(id)arg1;
- (_Bool)deleteAllRowsInFavTable;
- (_Bool)deleteRowsInFavTable:(id)arg1;
- (_Bool)deleteRowInFavTable:(unsigned int)arg1;
- (_Bool)updateRowsInFavTable:(id)arg1;
- (_Bool)updateRowInFavTable:(id)arg1;
- (_Bool)insertRowsInFavTable:(id)arg1;
- (_Bool)insertRowInFavTable:(id)arg1;
- (_Bool)createFavTable;
@end

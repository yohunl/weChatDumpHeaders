//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "QAnnotation-Protocol.h"

@class NSString, POIItem;

@interface MMPOIAnnotation : MMObject <QAnnotation>
{
    POIItem *_poiItem;
}

@property(retain, nonatomic) POIItem *poiItem; // @synthesize poiItem=_poiItem;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (void)dealloc;
- (id)initWithPOIItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


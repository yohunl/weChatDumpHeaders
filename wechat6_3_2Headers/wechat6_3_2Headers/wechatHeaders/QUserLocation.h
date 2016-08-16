//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QAnnotation-Protocol.h"

@class CLHeading, CLLocation, NSString;

@interface QUserLocation : NSObject <QAnnotation>
{
    _Bool _updating;
    CLLocation *_location;
    CLHeading *_heading;
    NSString *_title;
    NSString *_subtitle;
    CDStruct_2c43369c _coordinate;
}

@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) CLHeading *heading; // @synthesize heading=_heading;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic, getter=isUpdating) _Bool updating; // @synthesize updating=_updating;
@property(nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


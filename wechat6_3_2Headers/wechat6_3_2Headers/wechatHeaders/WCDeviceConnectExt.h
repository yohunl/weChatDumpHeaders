//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class WCDevice;

@interface WCDeviceConnectExt : MMObject
{
    WCDevice *_device;
    int _connectState;
    _Bool _tryConnect;
}

@property(nonatomic) _Bool tryConnect; // @synthesize tryConnect=_tryConnect;
@property(retain, nonatomic) WCDevice *device; // @synthesize device=_device;
@property(nonatomic) int connectState; // @synthesize connectState=_connectState;
- (void).cxx_destruct;
- (void)dealloc;

@end


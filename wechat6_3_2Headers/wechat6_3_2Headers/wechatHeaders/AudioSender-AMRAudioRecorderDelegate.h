//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AudioSender.h"

#import "AMRAudioRecorderDelegate-Protocol.h"

@interface AudioSender (AMRAudioRecorderDelegate) <AMRAudioRecorderDelegate>
- (void)OnAMRPart:(id)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4 ForceDelete:(_Bool)arg5;
- (void)OnAMREndRecording:(id)arg1;
- (void)OnAMRBeginRecording:(id)arg1 ErrNo:(int)arg2;
- (void)OnAMRLevelMeter:(id)arg1 Peak:(float)arg2;
- (_Bool)OnPrepareSendAMR:(id)arg1;
- (_Bool)CheckIfButtonPressing:(id)arg1;
@end


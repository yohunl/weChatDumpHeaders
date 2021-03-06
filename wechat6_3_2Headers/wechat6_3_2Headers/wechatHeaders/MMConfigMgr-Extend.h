//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMConfigMgr.h"

@interface MMConfigMgr (Extend)
- (long long)getVideoHWMaxFPS;
- (long long)getVideoHWMaxRes;
- (long long)getVideoSWMaxFPS;
- (long long)getVideoSWMaxRes;
- (long long)getVideoHWEnable;
- (long long)getVideoCaptureFps;
- (long long)getVideoCaptureRes;
- (unsigned int)getEmotionStoreType;
- (long long)getAudioUnitSubType;
- (long long)getEngineAgcRxLimiter;
- (long long)getEngineAgcRxGain;
- (long long)getEngineAgcRxTarget;
- (long long)getEngineAgcRxFlag;
- (long long)getOutputVolumeScale:(_Bool)arg1;
- (long long)getInputVolumeScale:(_Bool)arg1;
- (long long)getEngineECModeLevel:(_Bool)arg1;
- (long long)getEngineAecMode;
- (long long)getEngineAgclimiter;
- (long long)getEngineAgcflag;
- (long long)getEngineAgcgaindb;
- (long long)getEngineAgctargetdb;
- (long long)getEngineAgcMode;
- (long long)getEngineNsMode;
- (long long)getEngineSpkEcMode;
- (_Bool)shouldBlockVoipMinimizeMode;
- (_Bool)shouldBlockVoipIgnoreButton;
- (_Bool)shouldShowVoipInChat;
- (_Bool)shouldCloseVoiceAgc:(_Bool)arg1;
- (_Bool)shouldCloseVoiceProcess:(_Bool)arg1;
- (double)GetCurrnetNetworkCompressQuality;
- (double)GetMinCompressEarningsPercent;
- (unsigned long long)GetNoneCompressLongImageSize;
- (unsigned long long)GetNoneCompressNormalImageSize;
- (double)GetCurrnetNetworkCompressQualityForSns;
- (struct CGSize)GetCurrentNetworkCompressResolutionForSns;
- (id)signalingScenes;
- (int)GetSignalInterval;
- (_Bool)IsShouldSendSignalInScene:(id)arg1;
- (struct CGSize)GetCurrentNetworkCompressResolution;
- (_Bool)hasJDStoreCell;
- (id)GetJDStoreCellItem;
@end


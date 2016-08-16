//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FavRecordLeftThumbRightLabelNodeView.h"

#import "IFavAudioPlayerExt-Protocol.h"

@class FavAudioInfo, NSString;

@interface FavRecordVoiceNodeView : FavRecordLeftThumbRightLabelNodeView <IFavAudioPlayerExt>
{
    FavAudioInfo *m_audioInfo;
}

- (void).cxx_destruct;
- (void)OnPlayError:(id)arg1;
- (void)OnEndPlay:(id)arg1 isForceStop:(_Bool)arg2;
- (void)OnBeginPlay:(id)arg1;
- (void)dealloc;
- (void)onClick;
- (void)addContentSubView;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


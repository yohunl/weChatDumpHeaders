//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QDataSourceStandardDelegate-Protocol.h"

@class NSOperation, NSString;
@protocol QDataSourceProtocol;

@interface QTiledLayerRender : UIView <QDataSourceStandardDelegate>
{
    _Bool _useSnapshotRenderer;
    _Bool _snapshotRenderering;
    id <QDataSourceProtocol> _dataSource;
    struct CGContext *_snapshotContext;
    NSOperation *_downloadOperation;
}

+ (Class)layerClass;
@property(retain, nonatomic) NSOperation *downloadOperation; // @synthesize downloadOperation=_downloadOperation;
@property _Bool snapshotRenderering; // @synthesize snapshotRenderering=_snapshotRenderering;
@property struct CGContext *snapshotContext; // @synthesize snapshotContext=_snapshotContext;
@property _Bool useSnapshotRenderer; // @synthesize useSnapshotRenderer=_useSnapshotRenderer;
@property(retain, nonatomic) id <QDataSourceProtocol> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 sceneId:(int)arg2;
- (void)setupSelf:(int)arg1;
- (void)startVersionDetection;
- (void)switchDataSourceByNotification:(id)arg1;
- (void)dataSourceStandard:(id)arg1 didChangeVersion:(id)arg2 fromOldVersion:(id)arg3;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (id)tiledLayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


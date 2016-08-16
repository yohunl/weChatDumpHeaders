//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QDataSourceBase.h"

@class NSString;
@protocol QDataCacheProtocol, QDataSourceStandardDelegate;

@interface QDataSourceStandard : QDataSourceBase
{
    NSString *_styleId;
    NSString *_sceneId;
    id <QDataSourceStandardDelegate> _delegate;
}

+ (id)dataSourceStandard:(id)arg1 sceneId:(id)arg2 version:(id)arg3;
+ (id)dataSourceStandard:(id)arg1 sceneId:(id)arg2;
@property(nonatomic) __weak id <QDataSourceStandardDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *sceneId; // @synthesize sceneId=_sceneId;
@property(copy, nonatomic) NSString *styleId; // @synthesize styleId=_styleId;
- (void).cxx_destruct;
- (_Bool)shouldCollectRequestTime;
- (id)tilePath:(CDStruct_2ec95fd7)arg1;
- (double)tileSize;

// Remaining properties
@property(retain, nonatomic) id <QDataCacheProtocol> dataCache;

@end


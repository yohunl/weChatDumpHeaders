//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol QDataSourceProtocol;

@interface QTrafficLayerRender : UIView
{
    id <QDataSourceProtocol> _dataSource;
}

@property(retain, nonatomic) id <QDataSourceProtocol> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end


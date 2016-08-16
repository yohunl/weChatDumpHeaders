//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMConfigMgrExt-Protocol.h"

@class NSMutableDictionary, NSString, RightTopMenuData, UIImageView;

@interface NewMainFrameRightTopMenuBtn : MMUIView <MMConfigMgrExt>
{
    UIImageView *m_showNewView;
    RightTopMenuData *m_data;
    NSMutableDictionary *m_dicItems;
}

- (void).cxx_destruct;
- (void)onMMDynamicConfigUpdated;
- (void)reloadAllItems;
- (void)checkRedDot;
- (void)reloadMenuItems;
- (void)saveArchive;
- (void)showRightTopMenuBtn;
- (_Bool)isTopRightMenuShowID:(id)arg1;
- (void)hideRightTopMenuBtn;
- (void)onItemAction:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


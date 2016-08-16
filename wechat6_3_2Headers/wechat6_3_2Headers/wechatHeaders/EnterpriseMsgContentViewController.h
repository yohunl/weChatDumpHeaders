//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMsgContentViewController.h"

#import "EnterpriseBrandSelectSheetViewDelegate-Protocol.h"

@class NSString, WCActionSheet;

@interface EnterpriseMsgContentViewController : BaseMsgContentViewController <EnterpriseBrandSelectSheetViewDelegate>
{
    WCActionSheet *_enterpriseActionSheet;
}

- (void).cxx_destruct;
- (void)onEnterpriseSelectBrandContact:(id)arg1 sheetView:(id)arg2;
- (void)openEnterpriseBrandEntry;
- (void)onBackButtonClicked:(id)arg1;
- (void)switchEarMode;
- (_Bool)canShowEnterpriseBrandEntry;
- (_Bool)canShowFavEntry;
- (_Bool)canShowLocation;
- (void)initAllowShareCard;
- (void)initAllowNameCardFollowRedEnvelope;
- (void)initAllowWxTalkFollowSight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


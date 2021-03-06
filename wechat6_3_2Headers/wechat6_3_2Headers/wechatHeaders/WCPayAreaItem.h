//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseTextFieldItem.h"

#import "MMRegionPickerViewControllerDelegate-Protocol.h"

@class MMUIViewController, NSString;
@protocol WCPayAreaItemDelegate;

@interface WCPayAreaItem : WCBaseTextFieldItem <MMRegionPickerViewControllerDelegate>
{
    MMUIViewController *m_currentViewController;
    NSString *m_country;
    NSString *m_province;
    NSString *m_city;
    _Bool _disableLocation;
    id <WCPayAreaItemDelegate> m_payAreaItemDelegate;
}

@property(nonatomic) _Bool disableLocation; // @synthesize disableLocation=_disableLocation;
@property(nonatomic) __weak id <WCPayAreaItemDelegate> m_payAreaItemDelegate; // @synthesize m_payAreaItemDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)MMRegionPickerDidChoosRegion:(id)arg1;
- (void)becomeFirstResponder;
- (id)getCity;
- (id)getProvince;
- (id)getCountry;
- (_Bool)isUSorCA;
- (void)setCurrentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString;

@interface CustomMenuButton : UIButton
{
    NSString *m_btnId;
    NSString *m_btnKey;
    NSString *m_btnName;
    NSString *m_btnValue;
    NSString *m_btnNativeUrl;
    long long m_btnType;
    long long m_btnActionType;
    long long m_btnIndex;
}

+ (id)getPOIJsonContentFromSelectPOIInfo:(id)arg1;
+ (id)getPicsJsonContentFromPicMd5List:(id)arg1;
+ (id)getScanJsonContentFromScanType:(id)arg1 scanResult:(id)arg2;
+ (int)serverActionType2LocalCustomType:(long long)arg1;
+ (int)localCustomActionType2ServerType:(long long)arg1;
+ (int)serverType2LocalCustom:(long long)arg1;
+ (int)localCustomType2ServerType:(long long)arg1;
@property(nonatomic) long long m_btnIndex; // @synthesize m_btnIndex;
@property(nonatomic) long long m_btnActionType; // @synthesize m_btnActionType;
@property(nonatomic) long long m_btnType; // @synthesize m_btnType;
@property(retain, nonatomic) NSString *m_btnNativeUrl; // @synthesize m_btnNativeUrl;
@property(retain, nonatomic) NSString *m_btnValue; // @synthesize m_btnValue;
@property(retain, nonatomic) NSString *m_btnName; // @synthesize m_btnName;
@property(retain, nonatomic) NSString *m_btnKey; // @synthesize m_btnKey;
@property(retain, nonatomic) NSString *m_btnId; // @synthesize m_btnId;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end


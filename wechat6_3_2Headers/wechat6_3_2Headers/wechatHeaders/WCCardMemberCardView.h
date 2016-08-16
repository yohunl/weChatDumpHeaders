//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class NSString, WCCardDataCardInfo, WCCardDataCardTPInfo;
@protocol WCCardMemberCardViewDelegate;

@interface WCCardMemberCardView : MMUIView
{
    _Bool _bIsShareCardMode;
    int _curCardStatus;
    id <WCCardMemberCardViewDelegate> _delegate;
    WCCardDataCardInfo *_cardInfo;
    WCCardDataCardTPInfo *_cardTPInfo;
    NSString *_cardStatusTtile;
    double _contentHeight;
}

@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) int curCardStatus; // @synthesize curCardStatus=_curCardStatus;
@property(retain, nonatomic) NSString *cardStatusTtile; // @synthesize cardStatusTtile=_cardStatusTtile;
@property(nonatomic) _Bool bIsShareCardMode; // @synthesize bIsShareCardMode=_bIsShareCardMode;
@property(retain, nonatomic) WCCardDataCardTPInfo *cardTPInfo; // @synthesize cardTPInfo=_cardTPInfo;
@property(retain, nonatomic) WCCardDataCardInfo *cardInfo; // @synthesize cardInfo=_cardInfo;
@property(nonatomic) __weak id <WCCardMemberCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fieldClicked:(id)arg1;
- (void)onclickAnnounce:(id)arg1;
- (void)onClickApplyBtn:(id)arg1;
- (id)insertSpaceChar:(id)arg1 hasTransline:(_Bool)arg2;
- (id)getLogoName;
- (void)addSecondaryField;
- (void)initView;
- (_Bool)bIsCardPreAccept;
- (double)getContentViewRealHeight;
- (id)initMemberCardViewWithFrame:(struct CGRect)arg1 withContainerRealHeight:(double)arg2 withCardInfo:(id)arg3 withCardTpInfo:(id)arg4 isShareCardMode:(_Bool)arg5 withCardStatusTitle:(id)arg6 withCardStatus:(int)arg7;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class FacingMember, UIImageView;

@interface RSCreateRoomHeadImageView : MMUIView
{
    UIImageView *m_statusView;
    FacingMember *m_facingMember;
}

+ (struct CGSize)getHeadImageSize;
@property(retain, nonatomic) FacingMember *m_facingMember; // @synthesize m_facingMember;
- (void).cxx_destruct;
- (void)updateWithFacingMember:(id)arg1;
- (id)initWithFacingMember:(id)arg1;

@end


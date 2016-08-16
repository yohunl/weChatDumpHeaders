//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class CContact, UIButton, UILabel, UIView;
@protocol WCContactItemDeleteViewDelegate;

@interface WCContactItemDeleteView : MMUIView
{
    UILabel *_displayNameLabel;
    UIView *_headImageView;
    UIButton *_deleteButton;
    CContact *_contact;
    id <WCContactItemDeleteViewDelegate> _deleteViewDelegate;
}

@property(nonatomic) __weak id <WCContactItemDeleteViewDelegate> deleteViewDelegate; // @synthesize deleteViewDelegate=_deleteViewDelegate;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (id)initWithContact:(id)arg1;

@end


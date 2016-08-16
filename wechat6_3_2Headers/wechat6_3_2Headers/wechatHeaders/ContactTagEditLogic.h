//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IContactLabelMgrExt-Protocol.h"

@class CContact, NSArray, NSString;
@protocol ContactTagEditLogicDelegate;

@interface ContactTagEditLogic : MMObject <IContactLabelMgrExt>
{
    CContact *m_contact;
    unsigned int _uiJobID;
    int TagCountOfCreateTagScence;
    int TagCountOfExistTagScence;
    id <ContactTagEditLogicDelegate> delegate;
    NSArray *_arrTagNameList;
    NSArray *_arrAllTagNameList;
    NSArray *_arrContactTagNameList;
}

@property(retain, nonatomic) NSArray *arrContactTagNameList; // @synthesize arrContactTagNameList=_arrContactTagNameList;
@property(retain, nonatomic) NSArray *arrAllTagNameList; // @synthesize arrAllTagNameList=_arrAllTagNameList;
@property(retain, nonatomic) NSArray *arrTagNameList; // @synthesize arrTagNameList=_arrTagNameList;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(nonatomic) id <ContactTagEditLogicDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)setContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onAddContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)callDelegate:(int)arg1;
- (unsigned int)JobForContactTagChanged;
- (unsigned int)JobForCreateTagNameWithServer;
- (void)JobForTagEdit:(id)arg1 withAllTags:(id)arg2 contactTags:(id)arg3;
- (_Bool)isModContactTagName;
- (_Bool)isCreateNewTagName;
- (void)dealloc;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


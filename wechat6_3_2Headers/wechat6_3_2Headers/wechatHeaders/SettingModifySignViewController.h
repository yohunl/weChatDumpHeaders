//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IOplogExt-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class MMTableView, NSString, UILabel, UITextView;
@protocol settingModifySignDelegate;

@interface SettingModifySignViewController : MMUIViewController <UITextViewDelegate, UITableViewDelegate, UITableViewDataSource, IOplogExt>
{
    UITextView *m_textView;
    NSString *m_nsLastSign;
    id <settingModifySignDelegate> m_delegate;
    UILabel *m_wordCountLabel;
    MMTableView *m_tableView;
}

@property(nonatomic) __weak id <settingModifySignDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *m_nsLastSign; // @synthesize m_nsLastSign;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)OnReturn;
- (void)viewDidLoad;
- (void)initTableView;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)updateWordCount:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


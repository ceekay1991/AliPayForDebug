//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "aluInputBoxDelegate-Protocol.h"

@class NSArray, NSString, UITableView, aluInputBox;
@protocol aluLoginBoxDelegate;

@interface aluLoginBox : UIView <aluInputBoxDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UIView *_topLine;
    UIView *_midLine;
    UIView *_bottomLine;
    long long _selectedHistoryIndex;
    struct CGRect _originalFrame;
    _Bool _historyTableVisible;
    aluInputBox *_loginIdInputBox;
    aluInputBox *_passwordInputBox;
    UITableView *_historyTableView;
    NSString *_loginIdInputString;
    NSArray *_historyItems;
    id <aluLoginBoxDelegate> _delegate;
}

+ (id)aluLoginBoxWith:(id)arg1 delegate:(id)arg2 frame:(struct CGRect)arg3;
@property(nonatomic) _Bool historyTableVisible; // @synthesize historyTableVisible=_historyTableVisible;
@property(nonatomic) __weak id <aluLoginBoxDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *historyItems; // @synthesize historyItems=_historyItems;
@property(retain, nonatomic) NSString *loginIdInputString; // @synthesize loginIdInputString=_loginIdInputString;
@property(nonatomic) __weak UITableView *historyTableView; // @synthesize historyTableView=_historyTableView;
@property(nonatomic) __weak aluInputBox *passwordInputBox; // @synthesize passwordInputBox=_passwordInputBox;
@property(nonatomic) __weak aluInputBox *loginIdInputBox; // @synthesize loginIdInputBox=_loginIdInputBox;
- (void).cxx_destruct;
- (id)loginIdOfItemWithIndex:(long long)arg1;
- (struct CGSize)sizeThatFit;
- (struct CGSize)historyTableSizeThatFit;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)aluLoginBoxChangeCharacters;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)aluInputBoxTextDidBegin:(id)arg1;
- (void)aluInputBoxTextDidEnd:(id)arg1;
- (void)aluInputBoxTextInputDidChange:(id)arg1;
- (void)aluIputBoxRightAccessoryClicked:(id)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (void)reload;
- (_Bool)isHiddenLoginId;
- (void)setPassword:(id)arg1;
- (void)setLoginId:(id)arg1 hiddenDisplay:(_Bool)arg2;
- (id)getPassword;
- (id)getLoginId;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


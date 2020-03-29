//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "aluLoginBox.h"

@class NSArray, NSMutableArray, UITableView;

@interface aluEmailBox : aluLoginBox
{
    _Bool _displayHiddenHint;
    NSArray *_emails;
    UITableView *_hintTableView;
    NSMutableArray *_displayHints;
}

+ (id)aluLoginBoxWith:(id)arg1 delegate:(id)arg2 frame:(struct CGRect)arg3;
@property(nonatomic) _Bool displayHiddenHint; // @synthesize displayHiddenHint=_displayHiddenHint;
@property(retain, nonatomic) NSMutableArray *displayHints; // @synthesize displayHints=_displayHints;
@property(retain, nonatomic) UITableView *hintTableView; // @synthesize hintTableView=_hintTableView;
@property(retain, nonatomic) NSArray *emails; // @synthesize emails=_emails;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)hiddenHintList;
- (void)showHintList:(id)arg1;
- (void)aluInputBoxTextInputDidChange:(id)arg1;
- (void)aluInputBoxTextDidBegin:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)setHistoryTableVisible:(_Bool)arg1;
- (void)reload;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

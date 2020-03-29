//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UITableView;

@interface SDKLineIndicatorView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _showRecoverd;
    _Bool _showVolumn;
    int _recoverdSelectStatus;
    int _indicatorSelectStatus;
    UITableView *_indicatorTableView;
    CDUnknownBlockType _onItemSelected;
    double _originHeight;
}

@property(nonatomic) double originHeight; // @synthesize originHeight=_originHeight;
@property(nonatomic) int indicatorSelectStatus; // @synthesize indicatorSelectStatus=_indicatorSelectStatus;
@property(nonatomic) int recoverdSelectStatus; // @synthesize recoverdSelectStatus=_recoverdSelectStatus;
@property(nonatomic) _Bool showVolumn; // @synthesize showVolumn=_showVolumn;
@property(copy, nonatomic) CDUnknownBlockType onItemSelected; // @synthesize onItemSelected=_onItemSelected;
@property(nonatomic) _Bool showRecoverd; // @synthesize showRecoverd=_showRecoverd;
@property(retain, nonatomic) UITableView *indicatorTableView; // @synthesize indicatorTableView=_indicatorTableView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)upDateUIWithIndicator:(id)arg1 recover:(long long)arg2 contentOffset:(struct CGPoint)arg3;
- (void)setIndicator:(id)arg1;
- (void)setRecoverdType:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

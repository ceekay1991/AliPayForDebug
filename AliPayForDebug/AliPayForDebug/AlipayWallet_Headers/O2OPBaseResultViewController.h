//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, O2OPResultModel, UITableView, UIView;

@interface O2OPBaseResultViewController : O2OViewController <UITableViewDelegate, UITableViewDataSource>
{
    O2OPResultModel *_resultModel;
    UITableView *_tableView;
    UIView *_tableHeaderView;
}

@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) O2OPResultModel *resultModel; // @synthesize resultModel=_resultModel;
- (void).cxx_destruct;
- (id)defaultTemplateId;
- (void)didUpdate;
- (void)templateDidDownload;
- (id)footerTipsView;
- (id)bannerView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)itemForCellAtIndexPath:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)autohideNavigationBar;
- (void)viewDidLoad;
- (id)initWithScheme:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

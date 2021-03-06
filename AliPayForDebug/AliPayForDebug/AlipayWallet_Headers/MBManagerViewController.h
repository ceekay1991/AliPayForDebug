//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class APExceptionView, AUAssitLableView, AUTableView, NSMutableArray, NSMutableDictionary, NSString;

@interface MBManagerViewController : DTViewController <UITableViewDataSource, UITableViewDelegate>
{
    AUTableView *_tableView;
    NSMutableArray *_subscribeRecordList;
    NSMutableArray *_indexList;
    NSMutableDictionary *_monitorDic;
    AUAssitLableView *_headView;
    APExceptionView *_exceptionView;
}

@property(retain, nonatomic) APExceptionView *exceptionView; // @synthesize exceptionView=_exceptionView;
@property(retain, nonatomic) AUAssitLableView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) NSMutableDictionary *monitorDic; // @synthesize monitorDic=_monitorDic;
@property(retain, nonatomic) NSMutableArray *indexList; // @synthesize indexList=_indexList;
@property(retain, nonatomic) NSMutableArray *subscribeRecordList; // @synthesize subscribeRecordList=_subscribeRecordList;
@property(retain, nonatomic) AUTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)showDialogForDoubleCheck:(id)arg1 index:(long long)arg2 cellIndex:(long long)arg3;
- (void)subscribeButtonPressed:(id)arg1;
- (void)subscribe:(id)arg1 index:(long long)arg2 cellIndex:(long long)arg3;
- (void)retryRPC;
- (void)getSubscribeRecordListFromServer;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)showEmptyView:(_Bool)arg1;
- (void)resetIndexList:(long long)arg1;
- (void)resetTableView:(id)arg1;
- (void)onEnterForeground:(id)arg1;
- (void)onEnterBackground:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFWSWithInTableViewBaseCell.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class AFWSLinkRichTextView, AFWStockTrackerExposureStructure, AUDragLoadingView, NSString, UIButton, finscbffLiveInfoResultPB;

@interface AFWStockIndexLiveCell : AFWSWithInTableViewBaseCell <UITableViewDelegate, UITableViewDataSource, UITextViewDelegate>
{
    _Bool _dragToRefresh;
    _Bool _showedRedPoint;
    AFWStockTrackerExposureStructure *_expoStruct;
    finscbffLiveInfoResultPB *_currentShowModel;
    finscbffLiveInfoResultPB *_waitShowModel;
    AFWSLinkRichTextView *_footerInfoView;
    UIButton *_updateLiveInfoButton;
    AUDragLoadingView *_dragLoadingView;
    NSString *_nextPage;
    long long _lastReadTime;
}

@property(nonatomic) _Bool showedRedPoint; // @synthesize showedRedPoint=_showedRedPoint;
@property(nonatomic) long long lastReadTime; // @synthesize lastReadTime=_lastReadTime;
@property(nonatomic) _Bool dragToRefresh; // @synthesize dragToRefresh=_dragToRefresh;
@property(retain, nonatomic) NSString *nextPage; // @synthesize nextPage=_nextPage;
@property(retain, nonatomic) AUDragLoadingView *dragLoadingView; // @synthesize dragLoadingView=_dragLoadingView;
@property(retain, nonatomic) UIButton *updateLiveInfoButton; // @synthesize updateLiveInfoButton=_updateLiveInfoButton;
@property(retain, nonatomic) AFWSLinkRichTextView *footerInfoView; // @synthesize footerInfoView=_footerInfoView;
@property(retain, nonatomic) finscbffLiveInfoResultPB *waitShowModel; // @synthesize waitShowModel=_waitShowModel;
@property(retain, nonatomic) finscbffLiveInfoResultPB *currentShowModel; // @synthesize currentShowModel=_currentShowModel;
@property(retain, nonatomic) AFWStockTrackerExposureStructure *expoStruct; // @synthesize expoStruct=_expoStruct;
- (void).cxx_destruct;
- (void)cellExpoFrame:(struct CGRect)arg1;
- (id)cacheKey;
- (void)updateRedPointData;
- (void)showRedPoint;
- (void)removeRedPoint;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)isModelEmpty:(id)arg1;
- (_Bool)isModelVaild:(id)arg1;
- (void)loadError:(id)arg1;
- (void)loadSuccess:(id)arg1;
- (id)loadOnline;
- (void)loadBegin;
- (void)stopUpdateSchedule;
- (void)startUpdateSchedule;
- (void)startUpdateScheduleIfNeeded;
- (void)onPluginEvent:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)notifyPullToRefreshDownSuccess:(_Bool)arg1;
- (void)updateView;
- (void)updateLiveButtonClick;
- (void)cellDidLoad;
- (void)cellEndDisplay;
- (void)cellWillDisplay;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)viewFirstLoadInTab;
- (void)dealloc;
- (double)cellHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


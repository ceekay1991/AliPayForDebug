//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TFRCellContextDelegate-Protocol.h"
#import "TFRCellEventCycle-Protocol.h"
#import "TFRCellLifeCycle-Protocol.h"
#import "TFRCellScrollDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, TFRCellsContext, TFRContainerEmptyView, TFRStatusContext, TFRTemplateConfig, UITableView;

@interface TFRCellsController : NSObject <UITableViewDelegate, UITableViewDataSource, TFRCellLifeCycle, TFRCellEventCycle, TFRCellScrollDelegate, TFRCellContextDelegate>
{
    _Bool _staticTmp;
    _Bool _showEmptyView;
    _Bool _isReloadData;
    _Bool _disableLayoutEvent;
    _Bool _isLoaded;
    _Bool _isNotChangeAble;
    TFRCellsContext *_context;
    NSMutableArray *_cells;
    CDUnknownBlockType _themeHandler;
    TFRStatusContext *_statusContext;
    TFRTemplateConfig *_templateConfig;
    UITableView *_tableView;
    TFRContainerEmptyView *_emptyView;
    NSMutableArray *_combineCells;
    double _destoryOffset;
}

@property(nonatomic) _Bool isNotChangeAble; // @synthesize isNotChangeAble=_isNotChangeAble;
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(nonatomic) _Bool disableLayoutEvent; // @synthesize disableLayoutEvent=_disableLayoutEvent;
@property(nonatomic) _Bool isReloadData; // @synthesize isReloadData=_isReloadData;
@property(nonatomic) double destoryOffset; // @synthesize destoryOffset=_destoryOffset;
@property(retain, nonatomic) NSMutableArray *combineCells; // @synthesize combineCells=_combineCells;
@property(retain, nonatomic) TFRContainerEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) TFRTemplateConfig *templateConfig; // @synthesize templateConfig=_templateConfig;
@property(retain, nonatomic) TFRStatusContext *statusContext; // @synthesize statusContext=_statusContext;
@property(copy, nonatomic) CDUnknownBlockType themeHandler; // @synthesize themeHandler=_themeHandler;
@property(nonatomic) _Bool showEmptyView; // @synthesize showEmptyView=_showEmptyView;
@property(retain, nonatomic) NSMutableArray *cells; // @synthesize cells=_cells;
@property(retain, nonatomic) TFRCellsContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)resetTable;
- (void)onPluginEvent:(id)arg1;
- (void)firePluginEvent:(id)arg1;
- (struct CGRect)handleCellExpoFrame:(id)arg1;
- (void)expoCells;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getCellByIndex:(id)arg1;
- (id)scrollVIew;
- (id)createTabBarWithCell:(id)arg1;
- (id)findSelectTabNameInCellsConfig:(id)arg1 byName:(_Bool)arg2;
- (id)creatCellWithConfig:(id)arg1;
- (void)configureTheme:(id)arg1 theme:(id)arg2;
- (void)loadThemeTemplates;
- (id)findIndexOfSelectTopCard:(id)arg1;
- (void)refreshData;
- (_Bool)configEmptyContainerUI;
- (void)refreshUI:(_Bool)arg1;
- (void)configUIWithConfig:(id)arg1;
- (void)loadTemplates:(_Bool)arg1;
- (void)setupTableViewWithFrame:(struct CGRect)arg1;
- (id)cellVisiableFrameInWindow:(id)arg1;
- (_Bool)isCellVisble:(id)arg1;
- (id)initWithContext:(id)arg1 frame:(struct CGRect)arg2 isStaticTemplate:(_Bool)arg3;
- (id)initWithContext:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithContext:(id)arg1 templateConfig:(id)arg2 frame:(struct CGRect)arg3;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

